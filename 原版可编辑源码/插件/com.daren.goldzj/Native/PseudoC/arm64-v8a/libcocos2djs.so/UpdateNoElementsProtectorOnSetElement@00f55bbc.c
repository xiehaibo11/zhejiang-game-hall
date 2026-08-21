
/* v8::internal::Isolate::UpdateNoElementsProtectorOnSetElement(v8::internal::Handle<v8::internal::JSObject>)
    */

void __thiscall
v8::internal::Isolate::UpdateNoElementsProtectorOnSetElement(Isolate *this,ulong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *param_2;
  if (((*(uint *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 - 1)) + 0xb) >> 0x14 & 1) !=
       0) && (*(int *)(*(long *)(this + 0xea8) + 0xb) == 2)) {
    uVar4 = *(ulong *)(this + 0x8e38);
    if ((uVar4 & 1) == 0) goto LAB_00f55bfc;
    while ((int)uVar4 != *(int *)(this + 0xa0)) {
LAB_00f55bfc:
      do {
        iVar2 = (int)uVar3;
        if (((*(int *)(uVar4 + 0x103) == iVar2) || (*(int *)(uVar4 + 0xe7) == iVar2)) ||
           (*(int *)(uVar4 + 0x11b) == iVar2)) {
          Protectors::InvalidateNoElements(this);
          return;
        }
        puVar1 = (uint *)(uVar4 + 0x41f);
        uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*puVar1;
      } while ((*puVar1 & 1) == 0);
    }
  }
  return;
}

