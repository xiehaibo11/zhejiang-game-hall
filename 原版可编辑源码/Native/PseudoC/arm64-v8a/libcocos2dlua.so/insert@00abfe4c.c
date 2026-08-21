
/* std::__ndk1::vector<cocos2d::Vec3, std::__ndk1::allocator<cocos2d::Vec3>
   >::insert(std::__ndk1::__wrap_iter<cocos2d::Vec3 const*>, cocos2d::Vec3 const&) */

undefined8 * __thiscall
std::__ndk1::vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>>::insert
          (vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>> *this,undefined8 *param_2,
          undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  size_t sVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  void *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  void *local_68;
  vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>> *pvStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00abfe80 to 00bbfe87 has its CatchHandler @ 00abff60 */
  puVar11 = *(undefined8 **)(this + 8);
                    /* try { // try from 00abfe88 to 00bbfee3 has its CatchHandler @ 00abff68 */
  if (puVar11 < *(undefined8 **)(this + 0x10)) {
    puVar10 = param_2;
    if (param_2 == puVar11) {
      uVar9 = *param_3;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
      *param_2 = uVar9;
      *(long *)(this + 8) = (long)param_2 + 0xc;
    }
    else {
      sVar3 = (long)puVar11 + (-0xc - (long)param_2);
      puVar2 = puVar11;
      for (puVar5 = (undefined8 *)((long)puVar11 - 0xc); puVar5 < puVar11;
          puVar5 = (undefined8 *)((long)puVar5 + 0xc)) {
        uVar9 = *puVar5;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
        *puVar2 = uVar9;
        puVar2 = (undefined8 *)((long)puVar2 + 0xc);
      }
      *(undefined8 **)(this + 8) = puVar2;
      if (sVar3 != 0) {
        memmove((void *)((long)puVar11 - sVar3),param_2,sVar3);
      }
      puVar11 = param_3;
                    /* try { // try from 00abfee4 to 00bbff0b has its CatchHandler @ 00abfe30 */
      if ((param_2 <= param_3) &&
         (puVar11 = (undefined8 *)((long)param_3 + 0xc), *(undefined8 **)(this + 8) <= param_3)) {
        puVar11 = param_3;
      }
      uVar9 = *puVar11;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar11 + 1);
      *param_2 = uVar9;
    }
    goto LAB_00ac00a4;
  }
  lVar8 = *(long *)this;
                    /* try { // try from 00abff0c to 00bbff1f has its CatchHandler @ 00abff68 */
                    /* try { // try from 00abff20 to 00bbff83 has its CatchHandler @ 00abfe30 */
  uVar12 = 0x1555555555555555;
  uVar4 = ((long)puVar11 - lVar8 >> 2) * -0x5555555555555555 + 1;
  if (0x1555555555555555 < uVar4) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar6 = (long)*(undefined8 **)(this + 0x10) - lVar8 >> 2;
                    /* catch() { ... } // from try @ 00abfe80 with catch @ 00abff60 */
  pvStack_60 = this + 0x10;
  if ((ulong)(lVar6 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
                    /* catch() { ... } // from try @ 00abfe88 with catch @ 00abff68
                       catch() { ... } // from try @ 00abff0c with catch @ 00abff68 */
    uVar7 = lVar6 * 0x5555555555555556;
    uVar12 = uVar4;
    if (uVar4 <= uVar7) {
      uVar12 = uVar7;
    }
    if (uVar12 != 0) goto LAB_00abff98;
    local_80 = (void *)0x0;
  }
  else {
LAB_00abff98:
    local_68 = (void *)0x0;
    local_80 = operator_new(uVar12 * 0xc);
  }
  local_78 = (undefined8 *)((long)local_80 + ((long)param_2 - lVar8 >> 2) * 4);
  local_68 = (void *)((long)local_80 + uVar12 * 0xc);
  local_70 = local_78;
  FUN_00ac0bc4(&local_80,param_3);
  puVar10 = local_78;
  sVar3 = (long)param_2 - (long)*(void **)this;
  local_78 = (undefined8 *)((long)local_78 - sVar3);
  if (0 < (long)sVar3) {
    memcpy(local_78,*(void **)this,sVar3);
  }
  lVar8 = *(long *)(this + 8);
  sVar3 = lVar8 - (long)param_2;
  if (0 < (long)sVar3) {
    memcpy(local_70,param_2,sVar3);
    local_70 = (undefined8 *)((long)local_70 + (sVar3 / 0xc) * 0xc);
    lVar8 = *(long *)(this + 8);
  }
  local_80 = *(void **)this;
  *(undefined8 **)this = local_78;
  *(undefined8 **)(this + 8) = local_70;
  uVar9 = *(undefined8 *)(this + 0x10);
  *(void **)(this + 0x10) = local_68;
  local_70 = (undefined8 *)lVar8;
  if (lVar8 - (long)local_80 != 0) {
    local_70 = (undefined8 *)
               (lVar8 + (((lVar8 - (long)local_80) - 0xcU) / 0xc ^ 0xffffffffffffffff) * 0xc);
  }
  local_78 = local_80;
  local_68 = (void *)uVar9;
  if (local_80 != (void *)0x0) {
    operator_delete(local_80);
  }
LAB_00ac00a4:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return puVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

