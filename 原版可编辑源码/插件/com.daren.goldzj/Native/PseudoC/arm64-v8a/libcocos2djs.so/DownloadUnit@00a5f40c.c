
/* cocos2d::extension::DownloadUnit::DownloadUnit(cocos2d::extension::DownloadUnit const&) */

void __thiscall
cocos2d::extension::DownloadUnit::DownloadUnit(DownloadUnit *this,DownloadUnit *param_1)

{
  DownloadUnit *pDVar1;
  DownloadUnit *pDVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
                    /* try { // try from 00a5f418 to 00b5f42f has its CatchHandler @ 00a5f608 */
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)this = 0;
                    /* try { // try from 00a5f438 to 00b5f443 has its CatchHandler @ 00a5f604 */
  if (((byte)*param_1 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)param_1;
                    /* try { // try from 00a5f444 to 00b5f44f has its CatchHandler @ 00a5f600 */
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = uVar7;
    *(undefined8 *)this = uVar6;
  }
  else {
                    /* try { // try from 00a5f450 to 00b5f463 has its CatchHandler @ 00a5f670 */
    uVar3 = *(ulong *)(param_1 + 8);
    if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar4 = *(void **)(param_1 + 0x10);
    if (uVar3 < 0x17) {
      pDVar1 = this + 1;
      *this = SUB41((int)uVar3 << 1,0);
                    /* try { // try from 00a5f474 to 00b5f47b has its CatchHandler @ 00a5f5f0 */
      if (uVar3 != 0) goto LAB_00a5f49c;
    }
    else {
      uVar5 = uVar3 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00a5f488 to 00b5f4eb has its CatchHandler @ 00a5f618 */
      pDVar1 = operator_new(uVar5);
      *(ulong *)(this + 8) = uVar3;
      *(DownloadUnit **)(this + 0x10) = pDVar1;
      *(ulong *)this = uVar5 | 1;
LAB_00a5f49c:
      memcpy(pDVar1,pvVar4,uVar3);
    }
    pDVar1[uVar3] = (DownloadUnit)0x0;
  }
  pDVar1 = this + 0x18;
  *(undefined8 *)pDVar1 = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  if (((byte)param_1[0x18] & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(this + 0x20) = uVar7;
    *(undefined8 *)pDVar1 = uVar6;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x20);
    if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a5f474 with catch @ 00a5f5f0
                        */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar4 = *(void **)(param_1 + 0x28);
    if (uVar3 < 0x17) {
      pDVar2 = this + 0x19;
      *pDVar1 = SUB41((int)uVar3 << 1,0);
                    /* try { // try from 00a5f500 to 00b5f503 has its CatchHandler @ 00a5f6c8 */
      if (uVar3 != 0) goto LAB_00a5f528;
    }
    else {
      uVar5 = uVar3 + 0x10 & 0xfffffffffffffff0;
      pDVar2 = operator_new(uVar5);
      *(ulong *)(this + 0x20) = uVar3;
      *(DownloadUnit **)(this + 0x28) = pDVar2;
      *(ulong *)(this + 0x18) = uVar5 | 1;
LAB_00a5f528:
      memcpy(pDVar2,pvVar4,uVar3);
    }
    pDVar2[uVar3] = (DownloadUnit)0x0;
  }
                    /* try { // try from 00a5f540 to 00b5f57b has its CatchHandler @ 00a5f670 */
  pDVar1 = this + 0x30;
  *(undefined8 *)pDVar1 = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  if (((byte)param_1[0x30] & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(this + 0x38) = uVar7;
    *(undefined8 *)pDVar1 = uVar6;
    goto LAB_00a5f5c4;
  }
  uVar3 = *(ulong *)(param_1 + 0x38);
  if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pvVar4 = *(void **)(param_1 + 0x40);
                    /* try { // try from 00a5f57c to 00b5f62b has its CatchHandler @ 00a5f3c4 */
  if (uVar3 < 0x17) {
    pDVar2 = this + 0x31;
    *pDVar1 = SUB41((int)uVar3 << 1,0);
    if (uVar3 != 0) goto LAB_00a5f5b0;
  }
  else {
    uVar5 = uVar3 + 0x10 & 0xfffffffffffffff0;
    pDVar2 = operator_new(uVar5);
    *(ulong *)(this + 0x38) = uVar3;
    *(DownloadUnit **)(this + 0x40) = pDVar2;
    *(ulong *)(this + 0x30) = uVar5 | 1;
LAB_00a5f5b0:
    memcpy(pDVar2,pvVar4,uVar3);
  }
  pDVar2[uVar3] = (DownloadUnit)0x0;
LAB_00a5f5c4:
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  return;
}

