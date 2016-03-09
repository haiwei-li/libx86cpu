/*
 * Reporting information for reporting on CPU capabilities
 */

#include <stdio.h>
#include <stdlib.h>

#include "cpuinfo.h"

#define BINT(x) (x ? "True" : "False")


int main(int argc, char **argv)
{
    int ok;
    cpu_info_t i;

    ok = collect_info(&i);
    if (!ok)
    {
        printf("CPU does not have cpuid instruction\n");
        exit(-1);
    }
    printf("x86cpu report\n");
    printf("-------------\n");
    printf("brand            : %s\n", i.brand);
    printf("vendor           : %s\n", i.vendor);
    printf("model (display)  : %d\n", i.model_display);
    printf("family (display) : %d\n", i.family_display);
    printf("model            : %d\n", i.model);
    printf("family           : %d\n", i.family);
    printf("extended model   : %d\n", i.extended_model);
    printf("extended family  : %d\n", i.extended_family);
    printf("stepping         : %d\n", i.stepping);
    printf("processor type   : %d\n", i.processor_type);
    printf("signature        : %d\n", i.signature);
    printf("MMX              : %s\n", BINT(i.has_mmx));
    printf("3DNow!           : %s\n", BINT(i.has_3dnow));
    printf("SSE              : %s\n", BINT(i.has_sse));
    printf("SSE2             : %s\n", BINT(i.has_sse2));
    printf("SSE3             : %s\n", BINT(i.has_sse3));
    printf("SSSE3            : %s\n", BINT(i.has_ssse3));
    printf("SSE4.1           : %s\n", BINT(i.has_sse4_1));
    printf("SSE4.2           : %s\n", BINT(i.has_sse4_2));
    printf("supports AVX     : %s\n", BINT(i.supports_avx));
    printf("supports AVX2    : %s\n", BINT(i.supports_avx2));
    exit(0);
}
