/* SITS H FILE
 *
 * (C) Copyright ISNTL 2021 <?>
 */

#ifndef SITS_H_
#define SITS_H_

#include <string.h>
#include <ctype.h>

/* Numbers
 * Letters
 */

typedef struct __m_obj m_cmp;

#define C_CMP(s0, s1)   ({ \
    unsigned int lo_siz; \
    typeof(lo_siz) index; \
    typeof(lo_siz) s0_len = strlen(s0); \
    typeof(lo_siz) s1_len = strlen(s1); \
    lo_siz = ((s0_len < s1_len) ? s0_len : s1_len); \
    for (; index < lo_siz; index++) { \
    } \
    })

#endif /* SITS_H_ */
