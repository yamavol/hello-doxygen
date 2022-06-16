/**
 * @file    module.h
 * @brief   provides apis to control module xxx
 */
#ifndef MODULE_H
#define MODULE_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief initialize the module
 * @param[in]   x       argument x
 * @param[in]   y       argument y
 */
int module_initialize(int x, int y);


/**
 * @brief reset the module
 * @todo not implemented
 */
void module_reset(void);

#ifdef __cplusplus
}
#endif



#endif // MODULE_H
