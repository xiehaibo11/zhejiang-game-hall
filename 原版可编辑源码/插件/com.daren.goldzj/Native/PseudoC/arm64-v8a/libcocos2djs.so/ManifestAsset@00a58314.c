
/* cocos2d::extension::ManifestAsset::ManifestAsset(cocos2d::extension::ManifestAsset const&) */

void __thiscall
cocos2d::extension::ManifestAsset::ManifestAsset(ManifestAsset *this,ManifestAsset *param_1)

{
  undefined8 uVar1;
  ManifestAsset *pMVar2;
  ManifestAsset *__dest;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)this = 0;
  if (((byte)*param_1 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = uVar6;
    *(undefined8 *)this = uVar1;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 8);
    if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar4 = *(void **)(param_1 + 0x10);
    if (uVar3 < 0x17) {
      pMVar2 = this + 1;
      *this = SUB41((int)uVar3 << 1,0);
      if (uVar3 != 0) goto LAB_00a583a0;
    }
    else {
                    /* catch() { ... } // from try @ 00a58154 with catch @ 00a58380 */
                    /* catch() { ... } // from try @ 00a58148 with catch @ 00a58384 */
      uVar5 = uVar3 + 0x10 & 0xfffffffffffffff0;
                    /* catch() { ... } // from try @ 00a58128 with catch @ 00a58388 */
      pMVar2 = operator_new(uVar5);
                    /* catch() { ... } // from try @ 00a58160 with catch @ 00a58398 */
      *(ulong *)(this + 8) = uVar3;
      *(ManifestAsset **)(this + 0x10) = pMVar2;
      *(ulong *)this = uVar5 | 1;
LAB_00a583a0:
      memcpy(pMVar2,pvVar4,uVar3);
    }
    pMVar2[uVar3] = (ManifestAsset)0x0;
  }
  pMVar2 = this + 0x18;
  *(undefined8 *)pMVar2 = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  if (((byte)param_1[0x18] & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(this + 0x20) = uVar6;
    *(undefined8 *)pMVar2 = uVar1;
    goto LAB_00a5843c;
  }
  uVar3 = *(ulong *)(param_1 + 0x20);
  if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a5846c to 00b5847f has its CatchHandler @ 00a585bc */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pvVar4 = *(void **)(param_1 + 0x28);
                    /* try { // try from 00a583f0 to 00b5843f has its CatchHandler @ 00a583f0
                       catch() { ... } // from try @ 00a583f0 with catch @ 00a583f0
                       catch() { ... } // from try @ 00a584f8 with catch @ 00a583f0 */
  if (uVar3 < 0x17) {
    __dest = this + 0x19;
    *pMVar2 = SUB41((int)uVar3 << 1,0);
    if (uVar3 != 0) goto LAB_00a58428;
  }
  else {
    uVar5 = uVar3 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar5);
    *(ulong *)(this + 0x20) = uVar3;
    *(ManifestAsset **)(this + 0x28) = __dest;
    *(ulong *)(this + 0x18) = uVar5 | 1;
LAB_00a58428:
    memcpy(__dest,pvVar4,uVar3);
  }
  __dest[uVar3] = (ManifestAsset)0x0;
LAB_00a5843c:
                    /* try { // try from 00a58440 to 00b58457 has its CatchHandler @ 00a585c0 */
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x30) = uVar1;
  return;
}

