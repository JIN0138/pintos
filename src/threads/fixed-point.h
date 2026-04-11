#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H

/* Use 14 bits for fractional part */
#define F (1 << 14)

/* Convert integer n to fixed-point */
#define INT_TO_FP(n)         ((n) * F)

/* Convert fixed-point x to integer (truncate) */
#define FP_TO_INT(x)         ((x) / F)

/* Convert fixed-point x to integer (round) */
#define FP_TO_INT_ROUND(x)   \
  (((x) >= 0) ? ((x) + F / 2) / F : ((x) - F / 2) / F)

/* Add two fixed-point numbers */
#define FP_ADD(x, y)         ((x) + (y))

/* Subtract two fixed-point numbers */
#define FP_SUB(x, y)         ((x) - (y))

/* Add fixed-point x and integer n */
#define FP_ADD_INT(x, n)     ((x) + (n) * F)

/* Subtract integer n from fixed-point x */
#define FP_SUB_INT(x, n)     ((x) - (n) * F)

/* Multiply two fixed-point numbers */
#define FP_MUL(x, y)         ((int64_t)(x) * (y) / F)

/* Multiply fixed-point x by integer n */
#define FP_MUL_INT(x, n)     ((x) * (n))

/* Divide two fixed-point numbers */
#define FP_DIV(x, y)         ((int64_t)(x) * F / (y))

/* Divide fixed-point x by integer n */
#define FP_DIV_INT(x, n)     ((x) / (n))

#endif
