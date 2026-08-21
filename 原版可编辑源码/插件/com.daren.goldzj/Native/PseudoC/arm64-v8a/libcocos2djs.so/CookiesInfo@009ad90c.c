
/* cocos2d::network::CookiesInfo::CookiesInfo(cocos2d::network::CookiesInfo const&) */

void __thiscall cocos2d::network::CookiesInfo::CookiesInfo(CookiesInfo *this,CookiesInfo *param_1)

{
  CookiesInfo CVar1;
  CookiesInfo *pCVar2;
  void *pvVar3;
  CookiesInfo *pCVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)this = 0;
  if (((byte)*param_1 & 1) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 8);
    uVar7 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = uVar8;
    *(undefined8 *)this = uVar7;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8);
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
                    /* catch() { ... } // from try @ 009ad80c with catch @ 009ad960 */
    pvVar3 = *(void **)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 009ad800 with catch @ 009ad964 */
                    /* catch() { ... } // from try @ 009ad7e0 with catch @ 009ad968 */
    if (uVar5 < 0x17) {
      pCVar2 = this + 1;
      *this = SUB41((int)uVar5 << 1,0);
                    /* catch() { ... } // from try @ 009ad818 with catch @ 009ad978 */
      if (uVar5 != 0) goto LAB_009ad9a0;
    }
    else {
      uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pCVar2 = operator_new(uVar6);
      *(ulong *)(this + 8) = uVar5;
      *(CookiesInfo **)(this + 0x10) = pCVar2;
      *(ulong *)this = uVar6 | 1;
LAB_009ad9a0:
      memcpy(pCVar2,pvVar3,uVar5);
    }
    pCVar2[uVar5] = (CookiesInfo)0x0;
  }
  CVar1 = param_1[0x18];
  pCVar2 = this + 0x20;
  *(undefined8 *)pCVar2 = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  this[0x18] = CVar1;
                    /* try { // try from 009ad9d0 to 00aada23 has its CatchHandler @ 009ad9d0
                       catch() { ... } // from try @ 009ad9d0 with catch @ 009ad9d0
                       catch() { ... } // from try @ 009adb8c with catch @ 009ad9d0 */
  if (((byte)param_1[0x20] & 1) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(this + 0x28) = uVar8;
    *(undefined8 *)pCVar2 = uVar7;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x28);
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 009ada5c with catch @ 009adc18 */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar3 = *(void **)(param_1 + 0x30);
    if (uVar5 < 0x17) {
      pCVar4 = this + 0x21;
      *pCVar2 = SUB41((int)uVar5 << 1,0);
      if (uVar5 != 0) goto LAB_009ada34;
    }
    else {
      uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pCVar4 = operator_new(uVar6);
                    /* try { // try from 009ada24 to 00aada3b has its CatchHandler @ 009adc08 */
      *(ulong *)(this + 0x28) = uVar5;
      *(CookiesInfo **)(this + 0x30) = pCVar4;
      *(ulong *)(this + 0x20) = uVar6 | 1;
LAB_009ada34:
      memcpy(pCVar4,pvVar3,uVar5);
    }
                    /* try { // try from 009ada44 to 00aada4f has its CatchHandler @ 009adc04 */
    pCVar4[uVar5] = (CookiesInfo)0x0;
  }
  CVar1 = param_1[0x38];
                    /* try { // try from 009ada50 to 00aada5b has its CatchHandler @ 009adc00 */
  pCVar2 = this + 0x40;
  *(undefined8 *)pCVar2 = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  this[0x38] = CVar1;
                    /* try { // try from 009ada5c to 00aadb8b has its CatchHandler @ 009adc18 */
  if (((byte)param_1[0x40] & 1) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(this + 0x48) = uVar8;
    *(undefined8 *)pCVar2 = uVar7;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x48);
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar3 = *(void **)(param_1 + 0x50);
    if (uVar5 < 0x17) {
      pCVar4 = this + 0x41;
      *pCVar2 = SUB41((int)uVar5 << 1,0);
      if (uVar5 != 0) goto LAB_009adac8;
    }
    else {
      uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pCVar4 = operator_new(uVar6);
      *(ulong *)(this + 0x48) = uVar5;
      *(CookiesInfo **)(this + 0x50) = pCVar4;
      *(ulong *)(this + 0x40) = uVar6 | 1;
LAB_009adac8:
      memcpy(pCVar4,pvVar3,uVar5);
    }
    pCVar4[uVar5] = (CookiesInfo)0x0;
  }
  pCVar2 = this + 0x58;
  *(undefined8 *)pCVar2 = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  if (((byte)param_1[0x58] & 1) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x60);
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(this + 0x60) = uVar8;
    *(undefined8 *)pCVar2 = uVar7;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x60);
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar3 = *(void **)(param_1 + 0x68);
    if (uVar5 < 0x17) {
      pCVar4 = this + 0x59;
      *pCVar2 = SUB41((int)uVar5 << 1,0);
      if (uVar5 != 0) goto LAB_009adb54;
    }
    else {
      uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pCVar4 = operator_new(uVar6);
      *(ulong *)(this + 0x60) = uVar5;
      *(CookiesInfo **)(this + 0x68) = pCVar4;
      *(ulong *)(this + 0x58) = uVar6 | 1;
LAB_009adb54:
      memcpy(pCVar4,pvVar3,uVar5);
    }
    pCVar4[uVar5] = (CookiesInfo)0x0;
  }
  pCVar2 = this + 0x70;
  *(undefined8 *)pCVar2 = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  if (((byte)param_1[0x70] & 1) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x78);
    uVar7 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_1 + 0x80);
                    /* try { // try from 009adb8c to 00aadc6f has its CatchHandler @ 009ad9d0 */
    *(undefined8 *)(this + 0x78) = uVar8;
    *(undefined8 *)pCVar2 = uVar7;
    return;
  }
  uVar5 = *(ulong *)(param_1 + 0x78);
  if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pvVar3 = *(void **)(param_1 + 0x80);
  if (uVar5 < 0x17) {
    pCVar4 = this + 0x71;
    *pCVar2 = SUB41((int)uVar5 << 1,0);
    if (uVar5 == 0) goto LAB_009adbec;
  }
  else {
    uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
    pCVar4 = operator_new(uVar6);
    *(ulong *)(this + 0x78) = uVar5;
    *(CookiesInfo **)(this + 0x80) = pCVar4;
    *(ulong *)(this + 0x70) = uVar6 | 1;
  }
  memcpy(pCVar4,pvVar3,uVar5);
LAB_009adbec:
  pCVar4[uVar5] = (CookiesInfo)0x0;
                    /* catch() { ... } // from try @ 009ada50 with catch @ 009adc00 */
                    /* catch() { ... } // from try @ 009ada44 with catch @ 009adc04 */
                    /* catch() { ... } // from try @ 009ada24 with catch @ 009adc08 */
  return;
}

