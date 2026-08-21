
/* v8::internal::compiler::CallDescriptor::CanTailCall(v8::internal::compiler::CallDescriptor
   const*) const */

undefined8 __thiscall
v8::internal::compiler::CallDescriptor::CanTailCall(CallDescriptor *this,CallDescriptor *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = **(long **)(this + 0x10);
  if (lVar4 == **(long **)(param_1 + 0x10)) {
    if (lVar4 == 0) {
      return 1;
    }
    uVar3 = *(ulong *)(*(long **)(this + 0x10))[2];
    uVar2 = *(ulong *)(*(long **)(param_1 + 0x10))[2];
    if ((int)uVar3 == (int)uVar2) {
      uVar5 = 1;
      do {
        uVar1 = IsSubtype(uVar3 >> 0x20,uVar2 >> 0x20);
        if (((uVar1 & 1) == 0) && (uVar2 = IsSubtype(uVar2 >> 0x20,uVar3 >> 0x20), (uVar2 & 1) == 0)
           ) {
          return 0;
        }
        if (**(ulong **)(this + 0x10) <= uVar5) {
          return 1;
        }
        lVar4 = uVar5 * 8;
        uVar5 = uVar5 + 1;
        uVar3 = *(ulong *)((*(ulong **)(this + 0x10))[2] + lVar4);
        uVar2 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + lVar4);
      } while ((int)uVar3 == (int)uVar2);
    }
  }
  return 0;
}

