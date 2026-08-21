
/* v8::internal::IC::UpdateState(v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>) */

void __thiscall v8::internal::IC::UpdateState(IC *this,ulong *param_2,ulong *param_3)

{
  ulong *puVar1;
  int iVar2;
  Isolate *pIVar3;
  ulong uVar4;
  
  if (*(int *)(this + 0x18) != 0) {
    uVar4 = *param_2;
    if ((uVar4 & 1) == 0) {
      *(long *)(this + 0x20) = *(long *)(this + 8) + 0x140;
      uVar4 = *param_3;
    }
    else {
      pIVar3 = *(Isolate **)(this + 8);
      uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1);
      if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar1 = *(ulong **)(pIVar3 + 0x95a0);
        if (puVar1 == *(ulong **)(pIVar3 + 0x95a8)) {
          puVar1 = (ulong *)HandleScope::Extend(pIVar3);
        }
        *(ulong **)(pIVar3 + 0x95a0) = puVar1 + 1;
        *puVar1 = uVar4;
      }
      else {
        puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar4);
      }
      *(ulong **)(this + 0x20) = puVar1;
      uVar4 = *param_3;
    }
    if ((((((uVar4 & 1) != 0) &&
          (*(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) < 0x40)) &&
         ((*(int *)(this + 0x18) == 4 || (*(int *)(this + 0x18) == 2)))) &&
        ((iVar2 = (int)*param_2, (*param_2 & 1) == 0 ||
         ((iVar2 != *(int *)(*(long *)(this + 8) + 0xb0) &&
          (iVar2 != *(int *)(*(long *)(this + 8) + 0xa0))))))) &&
       (uVar4 = ShouldRecomputeHandler(this,param_3), (uVar4 & 1) != 0)) {
      *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0x18);
      *(undefined4 *)(this + 0x18) = 3;
    }
  }
  return;
}

