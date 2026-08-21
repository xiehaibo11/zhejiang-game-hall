
/* JavaScriptJavaBridge::CallInfo::~CallInfo() */

void __thiscall JavaScriptJavaBridge::CallInfo::~CallInfo(CallInfo *this)

{
  CallInfo CVar1;
  void *pvVar2;
  byte *pbVar3;
  
  if ((this[0x70] == (CallInfo)0x6) && (pbVar3 = *(byte **)(this + 0x78), pbVar3 != (byte *)0x0)) {
    if ((*pbVar3 & 1) != 0) {
      operator_delete(*(void **)(pbVar3 + 0x10));
    }
    operator_delete(pbVar3);
  }
  pvVar2 = *(void **)(this + 0x58);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x60) = pvVar2;
    operator_delete(pvVar2);
  }
  if (((byte)this[0x38] & 1) == 0) {
    CVar1 = this[0x20];
  }
  else {
    operator_delete(*(void **)(this + 0x48));
    CVar1 = this[0x20];
  }
  if (((byte)CVar1 & 1) == 0) {
    CVar1 = this[8];
  }
  else {
    operator_delete(*(void **)(this + 0x30));
    CVar1 = this[8];
  }
  if (((byte)CVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x18));
  return;
}

