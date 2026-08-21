
/* std::__ndk1::vector<cocos2d::renderer::Light*, std::__ndk1::allocator<cocos2d::renderer::Light*>
   >::insert(std::__ndk1::__wrap_iter<cocos2d::renderer::Light* const*>, cocos2d::renderer::Light*
   const&) */

undefined8 * __thiscall
std::__ndk1::vector<cocos2d::renderer::Light*,std::__ndk1::allocator<cocos2d::renderer::Light*>>::
insert(vector<cocos2d::renderer::Light*,std::__ndk1::allocator<cocos2d::renderer::Light*>> *this,
      undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  void *pvVar2;
  size_t sVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  void *pvVar9;
  size_t __n;
  undefined8 *puVar10;
  
  puVar10 = *(undefined8 **)(this + 8);
  if (puVar10 < *(undefined8 **)(this + 0x10)) {
    if (param_2 != puVar10) {
      sVar3 = (long)puVar10 - (long)(param_2 + 1);
      puVar8 = puVar10;
      for (puVar5 = puVar10 + -1; puVar5 < puVar10; puVar5 = puVar5 + 1) {
        *puVar8 = *puVar5;
        puVar8 = (undefined8 *)(*(long *)(this + 8) + 8);
        *(undefined8 **)(this + 8) = puVar8;
      }
      if (sVar3 != 0) {
        memmove(puVar10 + -((long)sVar3 >> 3),param_2,sVar3);
      }
      puVar10 = param_3;
      if ((param_2 <= param_3) && (puVar10 = param_3 + 1, *(undefined8 **)(this + 8) <= param_3)) {
        puVar10 = param_3;
      }
      *param_2 = *puVar10;
      return param_2;
    }
    *param_2 = *param_3;
    *(long *)(this + 8) = *(long *)(this + 8) + 8;
    return param_2;
  }
  pvVar9 = *(void **)this;
  uVar4 = ((long)puVar10 - (long)pvVar9 >> 3) + 1;
  if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar6 = (long)*(undefined8 **)(this + 0x10) - (long)pvVar9;
  if ((ulong)(lVar6 >> 3) < 0xfffffffffffffff) {
    uVar7 = lVar6 >> 2;
    if (uVar4 <= uVar7) {
      uVar4 = uVar7;
    }
    if (uVar4 == 0) {
      pvVar1 = (void *)0x0;
      goto LAB_009cc134;
    }
    if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar4 = 0x1fffffffffffffff;
  }
                    /* try { // try from 009cc128 to 00acc20b has its CatchHandler @ 009cbf48 */
  pvVar1 = operator_new(uVar4 << 3);
LAB_009cc134:
  lVar6 = (long)param_2 - (long)pvVar9;
  uVar7 = lVar6 >> 3;
  puVar10 = (undefined8 *)((long)pvVar1 + uVar7 * 8);
  pvVar2 = (void *)((long)pvVar1 + uVar4 * 8);
  if (uVar7 == uVar4) {
    if (lVar6 < 1) {
      uVar4 = lVar6 >> 2;
                    /* catch() { ... } // from try @ 009cbfc8 with catch @ 009cc19c */
      if (lVar6 == 0) {
        uVar4 = 1;
      }
                    /* catch() { ... } // from try @ 009cbfbc with catch @ 009cc1a0 */
      if (uVar4 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
                    /* catch() { ... } // from try @ 009cbf9c with catch @ 009cc1a4 */
        if (uVar4 >> 0x3d != 0) {
                    /* try { // try from 009cc260 to 00acc277 has its CatchHandler @ 009cc468 */
                    /* WARNING: Subroutine does not return */
          FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        pvVar2 = operator_new(uVar4 << 3);
                    /* catch() { ... } // from try @ 009cbfd4 with catch @ 009cc1b4 */
      }
      puVar10 = (undefined8 *)((long)pvVar2 + (uVar4 >> 2) * 8);
      pvVar2 = (void *)((long)pvVar2 + uVar4 * 8);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        pvVar9 = *(void **)this;
      }
    }
    else {
      uVar4 = uVar7 + 2;
      if (-1 < (long)(uVar7 + 1)) {
        uVar4 = uVar7 + 1;
      }
      puVar10 = (undefined8 *)((long)puVar10 + (uVar4 & 0x3ffffffffffffffe) * -4);
    }
  }
  sVar3 = (long)param_2 - (long)pvVar9;
  puVar8 = puVar10 + 1;
  *puVar10 = *param_3;
  if (0 < (long)sVar3) {
    memcpy((void *)((long)puVar10 - sVar3),pvVar9,sVar3);
  }
  __n = *(long *)(this + 8) - (long)param_2;
                    /* try { // try from 009cc20c to 00acc25f has its CatchHandler @ 009cc20c
                       catch() { ... } // from try @ 009cc20c with catch @ 009cc20c
                       catch() { ... } // from try @ 009cc3ec with catch @ 009cc20c */
  if (0 < (long)__n) {
    memcpy(puVar8,param_2,__n);
    puVar8 = (undefined8 *)((long)puVar8 + __n);
  }
  pvVar9 = *(void **)this;
  *(void **)this = (void *)((long)puVar10 - sVar3);
  *(undefined8 **)(this + 8) = puVar8;
  *(void **)(this + 0x10) = pvVar2;
  if (pvVar9 != (void *)0x0) {
    operator_delete(pvVar9);
  }
  return puVar10;
}

