
/* cocos2d::ParticleSystemQuad::allocMemory() */

undefined8 __thiscall cocos2d::ParticleSystemQuad::allocMemory(ParticleSystemQuad *this)

{
  int iVar1;
  void *__ptr;
  void *__ptr_00;
  undefined8 uVar2;
  size_t __size;
  size_t __size_00;
  
  if (*(void **)(this + 0x530) != (void *)0x0) {
    free(*(void **)(this + 0x530));
                    /* catch() { ... } // from try @ 00f35fdc with catch @ 00f35f5c */
    *(undefined8 *)(this + 0x530) = 0;
  }
  if (*(void **)(this + 0x538) != (void *)0x0) {
    free(*(void **)(this + 0x538));
    *(undefined8 *)(this + 0x538) = 0;
  }
  iVar1 = *(int *)(this + 0x508);
  __size = (long)iVar1 * 0x60;
                    /* try { // try from 00f35f80 to 01035f87 has its CatchHandler @ 00f36000 */
  __ptr = malloc(__size);
  __size_00 = (long)iVar1 * 0xc;
  *(void **)(this + 0x530) = __ptr;
  __ptr_00 = malloc(__size_00);
  *(void **)(this + 0x538) = __ptr_00;
  if ((__ptr_00 == (void *)0x0) || (__ptr == (void *)0x0)) {
    if (__ptr != (void *)0x0) {
      free(__ptr);
                    /* try { // try from 00f35fdc to 0103602b has its CatchHandler @ 00f35f5c */
      __ptr_00 = *(void **)(this + 0x538);
      *(undefined8 *)(this + 0x530) = 0;
    }
    if (__ptr_00 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      free(__ptr_00);
      uVar2 = 0;
      *(undefined8 *)(this + 0x538) = 0;
    }
  }
  else {
    memset(__ptr,0,__size);
                    /* try { // try from 00f35fb8 to 01035fdb has its CatchHandler @ 00f36008 */
    memset(__ptr_00,0,__size_00);
    uVar2 = 1;
  }
                    /* catch() { ... } // from try @ 00f35f80 with catch @ 00f36000 */
                    /* catch() { ... } // from try @ 00f35fb8 with catch @ 00f36008 */
  return uVar2;
}

