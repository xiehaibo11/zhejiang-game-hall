
/* cocos2d::unzGetLocalExtrafield(void*, void*, unsigned int) */

ulong cocos2d::unzGetLocalExtrafield(void *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
                    /* try { // try from 0102a6e4 to 0112a6e7 has its CatchHandler @ 0102a6f8 */
                    /* try { // try from 0102a6e8 to 0112a6eb has its CatchHandler @ 0102a44c */
                    /* try { // try from 0102a6ec to 0112a6ef has its CatchHandler @ 0102a710 */
                    /* try { // try from 0102a6f0 to 0112a6f7 has its CatchHandler @ 0102a6fc */
  if ((param_1 == (void *)0x0) || (lVar4 = *(long *)((long)param_1 + 0x140), lVar4 == 0)) {
    uVar2 = 0xffffff9a;
  }
  else {
                    /* catch() { ... } // from try @ 0102a6e4 with catch @ 0102a6f8
                       try { // try from 0102a6f8 to 0112a74b has its CatchHandler @ 0102a44c */
                    /* catch() { ... } // from try @ 0102a6a0 with catch @ 0102a6fc
                       catch() { ... } // from try @ 0102a6f0 with catch @ 0102a6fc */
    uVar2 = (ulong)*(uint *)(lVar4 + 0x90) - *(long *)(lVar4 + 0x98);
    if (param_2 != (void *)0x0) {
      uVar1 = (uint)uVar2;
                    /* catch() { ... } // from try @ 0102a5e4 with catch @ 0102a710
                       catch() { ... } // from try @ 0102a6ec with catch @ 0102a710 */
      if (param_3 <= uVar2) {
        uVar1 = param_3;
      }
      if (uVar1 == 0) {
        uVar2 = 0;
      }
      else {
        lVar3 = call_zseek64((zlib_filefunc64_32_def_s *)(lVar4 + 200),*(void **)(lVar4 + 0x120),
                             *(long *)(lVar4 + 0x88) + *(long *)(lVar4 + 0x98),0);
                    /* catch() { ... } // from try @ 0102a558 with catch @ 0102a730 */
        if (lVar3 == 0) {
          uVar2 = (**(code **)(lVar4 + 0xd0))
                            (*(undefined8 *)(lVar4 + 0x100),*(undefined8 *)(lVar4 + 0x120),param_2,
                             (ulong)uVar1);
          if (uVar2 != uVar1) {
            uVar1 = 0xffffffff;
          }
          uVar2 = (ulong)uVar1;
        }
        else {
          uVar2 = 0xffffffff;
        }
      }
    }
  }
  return uVar2;
}

