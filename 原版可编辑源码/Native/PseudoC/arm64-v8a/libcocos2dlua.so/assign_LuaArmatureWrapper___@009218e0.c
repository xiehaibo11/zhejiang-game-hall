
/* std::__ndk1::enable_if<__is_forward_iterator<LuaArmatureWrapper**>::value&&is_constructible<LuaArmatureWrapper*,
   std::__ndk1::iterator_traits<LuaArmatureWrapper**>::reference>::value, void>::type
   std::__ndk1::vector<LuaArmatureWrapper*, std::__ndk1::allocator<LuaArmatureWrapper*>
   >::assign<LuaArmatureWrapper**>(LuaArmatureWrapper**, LuaArmatureWrapper**) */

void __thiscall
std::__ndk1::vector<LuaArmatureWrapper*,std::__ndk1::allocator<LuaArmatureWrapper*>>::
assign<LuaArmatureWrapper**>
          (vector<LuaArmatureWrapper*,std::__ndk1::allocator<LuaArmatureWrapper*>> *this,
          LuaArmatureWrapper **param_1,LuaArmatureWrapper **param_2)

{
  LuaArmatureWrapper **__src;
  long lVar1;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  ulong uVar5;
  
                    /* try { // try from 009218f0 to 00a21923 has its CatchHandler @ 009219f0 */
  lVar1 = *(long *)(this + 0x10);
  pvVar4 = *(void **)this;
  sVar3 = (long)param_2 - (long)param_1;
  uVar5 = (long)sVar3 >> 3;
  if ((ulong)(lVar1 - (long)pvVar4 >> 3) < uVar5) {
    if (pvVar4 != (void *)0x0) {
                    /* try { // try from 00921924 to 00a21937 has its CatchHandler @ 009219bc */
      *(void **)(this + 8) = pvVar4;
      operator_delete(pvVar4);
      lVar1 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
                    /* try { // try from 0092193c to 00a2196f has its CatchHandler @ 009219c0 */
    if (uVar5 >> 0x3d != 0) {
LAB_00921964:
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)(lVar1 >> 3) < 0xfffffffffffffff) {
      uVar2 = lVar1 >> 2;
      if ((uVar5 <= uVar2) && (uVar5 = uVar2, uVar2 >> 0x3d != 0)) goto LAB_00921964;
    }
    else {
      uVar5 = 0x1fffffffffffffff;
    }
                    /* catch() { ... } // from try @ 009218f0 with catch @ 009219f0 */
    pvVar4 = operator_new(uVar5 * 8);
    *(void **)this = pvVar4;
    *(void **)(this + 8) = pvVar4;
    *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar5 * 8);
    if (0 < (long)sVar3) {
      memcpy(pvVar4,param_1,sVar3);
      pvVar4 = (void *)((long)pvVar4 + sVar3);
    }
    *(void **)(this + 8) = pvVar4;
  }
  else {
                    /* try { // try from 00921970 to 00a21a0b has its CatchHandler @ 00921838 */
    uVar2 = *(long *)(this + 8) - (long)pvVar4 >> 3;
    __src = (LuaArmatureWrapper **)((long)param_1 + (*(long *)(this + 8) - (long)pvVar4));
    if (uVar5 <= uVar2) {
      __src = param_2;
    }
    sVar3 = (long)__src - (long)param_1;
    if (sVar3 != 0) {
      memmove(pvVar4,param_1,sVar3);
    }
    if (uVar2 < uVar5) {
      pvVar4 = *(void **)(this + 8);
      sVar3 = (long)param_2 - (long)__src;
      if (0 < (long)sVar3) {
                    /* catch() { ... } // from try @ 00921924 with catch @ 009219bc */
                    /* catch() { ... } // from try @ 0092193c with catch @ 009219c0 */
        memcpy(pvVar4,__src,sVar3);
        pvVar4 = (void *)((long)pvVar4 + sVar3);
      }
      *(void **)(this + 8) = pvVar4;
    }
    else {
      *(void **)(this + 8) = (void *)((long)pvVar4 + ((long)sVar3 >> 3) * 8);
    }
  }
  return;
}

