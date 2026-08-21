
/* v8::internal::Genesis::ExtensionStates::get_state(v8::RegisteredExtension*) */

undefined4 __thiscall
v8::internal::Genesis::ExtensionStates::get_state
          (ExtensionStates *this,RegisteredExtension *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  RegisteredExtension *pRVar5;
  
  uVar1 = ~(uint)param_1 + (uint)param_1 * 0x8000;
  uVar1 = (uVar1 ^ uVar1 >> 0xc) * 5;
  uVar1 = (uVar1 ^ uVar1 >> 4) * 0x809;
  uVar4 = (ulong)(*(int *)(this + 8) - 1U & (uVar1 & 0x3fffffff ^ uVar1 >> 0x10));
  plVar3 = (long *)(*(long *)this + uVar4 * 0x18);
  pRVar5 = (RegisteredExtension *)*plVar3;
  while( true ) {
    if (pRVar5 == (RegisteredExtension *)0x0) {
      return 0;
    }
    if (pRVar5 == param_1) break;
    uVar4 = (ulong)((int)uVar4 + 1U & *(int *)(this + 8) - 1U);
    plVar3 = (long *)(*(long *)this + uVar4 * 0x18);
    pRVar5 = (RegisteredExtension *)*plVar3;
  }
  uVar2 = 0;
  if ((param_1 != (RegisteredExtension *)0x0) && (plVar3 != (long *)0x0)) {
    uVar2 = (undefined4)plVar3[1];
  }
  return uVar2;
}

