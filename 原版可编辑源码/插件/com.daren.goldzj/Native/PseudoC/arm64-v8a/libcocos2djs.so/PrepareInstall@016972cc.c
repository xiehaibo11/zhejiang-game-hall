
/* v8::internal::compiler::InitialMapInstanceSizePredictionDependency::PrepareInstall() const */

void __thiscall
v8::internal::compiler::InitialMapInstanceSizePredictionDependency::PrepareInstall
          (InitialMapInstanceSizePredictionDependency *this)

{
  ulong *puVar1;
  Isolate *pIVar2;
  ulong uVar3;
  ulong local_18;
  
  puVar1 = (ulong *)JSFunctionRef::object((JSFunctionRef *)(this + 8));
  uVar3 = *puVar1;
  pIVar2 = (Isolate *)(uVar3 & 0xffffffff00000000);
  if (((*(char *)(((ulong)pIVar2 | 9) + (ulong)*(uint *)(uVar3 - 1)) < '\0') &&
      (*(short *)(((ulong)pIVar2 | 7) +
                 (ulong)*(uint *)(pIVar2 + ((ulong)*(uint *)(uVar3 + 0x1b) - 1))) == 0xa2)) &&
     (local_18 = (ulong)pIVar2 | (ulong)*(uint *)(uVar3 + 0x1b),
     *(uint *)(local_18 + 0xb) >> 0x1d != 0)) {
    Map::CompleteInobjectSlackTracking((Map *)&local_18,pIVar2);
  }
  return;
}

