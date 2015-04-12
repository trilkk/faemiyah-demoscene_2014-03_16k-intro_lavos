#ifndef BSD_RAND_H
#define BSD_RAND_H

#if defined(USE_LD)

#if defined(__cplusplus)
extern "C" {
#endif

/** \brief FreeBSD rand() implementation.
 *
 * Compiled in whenever not making a FreeBSD release build, in which case the
 * implementation can be dynamically loaded.
 */
int bsd_rand(void);

/** \brief FreeBSD srand() implementation.
 *
 * Compiled in whenever not making a FreeBSD release build, in which case the
 * implementation can be dynamically loaded.
 */
void bsd_srand(unsigned seed);

/** \brief Testing wrapper for rand().
 *
 * Used to confirm rand() actually matches the FreeBSD rand().
 */
int bsd_rand_wrapper(void);

/** \brief Testing wrapper for srand().
 *
 * Used to confirm srand() actually matches the FreeBSD srand().
 */
void bsd_srand_wrapper(unsigned seed);

#if defined(__cplusplus)
}
#endif

#endif

#endif
