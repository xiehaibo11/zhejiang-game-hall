
/* cocos2d::extension::EventAssetsManagerEx::EventAssetsManagerEx(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::extension::AssetsManagerEx*, cocos2d::extension::EventAssetsManagerEx::EventCode const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, int, int) */

void __thiscall
cocos2d::extension::EventAssetsManagerEx::EventAssetsManagerEx
          (EventAssetsManagerEx *this,basic_string *param_1,AssetsManagerEx *param_2,
          EventCode *param_3,basic_string *param_4,basic_string *param_5,int param_6,int param_7)

{
  undefined4 uVar1;
  EventAssetsManagerEx *pEVar2;
  void *pvVar3;
  EventAssetsManagerEx *pEVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
                    /* try { // try from 00a6b6b0 to 00b6b6bf has its CatchHandler @ 00a6b7a8 */
                    /* try { // try from 00a6b6c0 to 00b6b883 has its CatchHandler @ 00a6b300 */
  Ref::Ref((Ref *)this);
  *(undefined ***)this = &PTR__EventAssetsManagerEx_01c6ea38;
  uVar1 = *(undefined4 *)param_3;
  pEVar2 = this + 0x18;
  *(undefined8 *)pEVar2 = 0;
  *(AssetsManagerEx **)(this + 0x10) = param_2;
  *(undefined4 *)(this + 0xc) = uVar1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  if (((byte)*param_5 & 1) == 0) {
                    /* catch() { ... } // from try @ 00a6b494 with catch @ 00a6b720 */
    uVar8 = *(undefined8 *)(param_5 + 8);
    uVar7 = *(undefined8 *)param_5;
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_5 + 0x10);
    *(undefined8 *)(this + 0x20) = uVar8;
    *(undefined8 *)pEVar2 = uVar7;
  }
  else {
                    /* catch() { ... } // from try @ 00a6b484 with catch @ 00a6b730 */
    uVar5 = *(ulong *)(param_5 + 8);
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar3 = *(void **)(param_5 + 0x10);
                    /* catch() { ... } // from try @ 00a6b468 with catch @ 00a6b740 */
    if (uVar5 < 0x17) {
                    /* catch() { ... } // from try @ 00a6b458 with catch @ 00a6b750 */
      pEVar4 = this + 0x19;
      *pEVar2 = SUB41((int)uVar5 << 1,0);
      if (uVar5 != 0) goto LAB_00a6b77c;
    }
    else {
                    /* catch() { ... } // from try @ 00a6b444 with catch @ 00a6b760 */
      uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pEVar4 = operator_new(uVar6);
      *(ulong *)(this + 0x20) = uVar5;
      *(EventAssetsManagerEx **)(this + 0x28) = pEVar4;
                    /* catch() { ... } // from try @ 00a6b438 with catch @ 00a6b778 */
      *(ulong *)(this + 0x18) = uVar6 | 1;
LAB_00a6b77c:
                    /* catch() { ... } // from try @ 00a6b424 with catch @ 00a6b780 */
                    /* catch() { ... } // from try @ 00a6b3fc with catch @ 00a6b784 */
      memcpy(pEVar4,pvVar3,uVar5);
    }
                    /* catch() { ... } // from try @ 00a6b3e0 with catch @ 00a6b78c */
    pEVar4[uVar5] = (EventAssetsManagerEx)0x0;
  }
                    /* catch() { ... } // from try @ 00a6b404 with catch @ 00a6b790 */
  pEVar2 = this + 0x30;
  *(undefined8 *)pEVar2 = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  if (((byte)*param_4 & 1) == 0) {
                    /* catch() { ... } // from try @ 00a6b6b0 with catch @ 00a6b7a8 */
    uVar8 = *(undefined8 *)(param_4 + 8);
    uVar7 = *(undefined8 *)param_4;
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(this + 0x38) = uVar8;
    *(undefined8 *)pEVar2 = uVar7;
    goto LAB_00a6b814;
  }
  uVar5 = *(ulong *)(param_4 + 8);
  if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pvVar3 = *(void **)(param_4 + 0x10);
  if (uVar5 < 0x17) {
    pEVar4 = this + 0x31;
    *pEVar2 = SUB41((int)uVar5 << 1,0);
    if (uVar5 != 0) goto LAB_00a6b800;
  }
  else {
    uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
    pEVar4 = operator_new(uVar6);
    *(ulong *)(this + 0x38) = uVar5;
    *(EventAssetsManagerEx **)(this + 0x40) = pEVar4;
    *(ulong *)(this + 0x30) = uVar6 | 1;
LAB_00a6b800:
    memcpy(pEVar4,pvVar3,uVar5);
  }
  pEVar4[uVar5] = (EventAssetsManagerEx)0x0;
LAB_00a6b814:
                    /* catch() { ... } // from try @ 00a6b388 with catch @ 00a6b814 */
  *(int *)(this + 0x48) = param_6;
  *(int *)(this + 0x4c) = param_7;
                    /* catch() { ... } // from try @ 00a6b37c with catch @ 00a6b818 */
                    /* catch() { ... } // from try @ 00a6b35c with catch @ 00a6b81c */
                    /* catch() { ... } // from try @ 00a6b394 with catch @ 00a6b82c
                       catch() { ... } // from try @ 00a6b4cc with catch @ 00a6b82c */
  return;
}

