
/* JavaScriptJavaBridge::CallInfo::CallInfo(char const*, char const*, char const*) */

void __thiscall
JavaScriptJavaBridge::CallInfo::CallInfo(CallInfo *this,char *param_1,char *param_2,char *param_3)

{
  byte bVar1;
  size_t sVar2;
  ulong uVar3;
  CallInfo *pCVar4;
  
  *this = (CallInfo)0x0;
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined8 *)(this + 4) = 0;
  sVar2 = strlen(param_1);
  if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pCVar4 = this + 9;
    this[8] = SUB41((int)sVar2 << 1,0);
    if (sVar2 != 0) goto LAB_008b4a9c;
  }
  else {
    uVar3 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pCVar4 = operator_new(uVar3);
    *(size_t *)(this + 0x10) = sVar2;
    *(CallInfo **)(this + 0x18) = pCVar4;
    *(ulong *)(this + 8) = uVar3 | 1;
LAB_008b4a9c:
    memcpy(pCVar4,param_1,sVar2);
  }
  pCVar4[sVar2] = (CallInfo)0x0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  sVar2 = strlen(param_2);
  if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pCVar4 = this + 0x21;
    this[0x20] = SUB41((int)sVar2 << 1,0);
    if (sVar2 != 0) goto LAB_008b4b0c;
  }
  else {
    uVar3 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pCVar4 = operator_new(uVar3);
    *(size_t *)(this + 0x28) = sVar2;
    *(CallInfo **)(this + 0x30) = pCVar4;
    *(ulong *)(this + 0x20) = uVar3 | 1;
LAB_008b4b0c:
    memcpy(pCVar4,param_2,sVar2);
  }
  pCVar4[sVar2] = (CallInfo)0x0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  sVar2 = strlen(param_3);
  if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pCVar4 = this + 0x39;
    this[0x38] = SUB41((int)sVar2 << 1,0);
    if (sVar2 == 0) goto LAB_008b4b8c;
  }
  else {
    uVar3 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pCVar4 = operator_new(uVar3);
    *(size_t *)(this + 0x40) = sVar2;
    *(CallInfo **)(this + 0x48) = pCVar4;
    *(ulong *)(this + 0x38) = uVar3 | 1;
  }
  memcpy(pCVar4,param_3,sVar2);
LAB_008b4b8c:
  pCVar4[sVar2] = (CallInfo)0x0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  this[0x70] = (CallInfo)0x1;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  uVar3 = validateMethodSig(this);
  if ((uVar3 & 1) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = getMethodInfo(this);
  }
  *this = (CallInfo)(bVar1 & 1);
  return;
}

