
/* v8::internal::compiler::InitialMapInstanceSizePredictionDependency::IsValid() const */

bool __thiscall
v8::internal::compiler::InitialMapInstanceSizePredictionDependency::IsValid
          (InitialMapInstanceSizePredictionDependency *this)

{
  JSFunctionRef *this_00;
  bool bVar1;
  int iVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  Isolate *pIVar5;
  ulong uVar6;
  undefined8 local_28;
  
  this_00 = (JSFunctionRef *)(this + 8);
  puVar3 = (ulong *)JSFunctionRef::object(this_00);
  uVar6 = *puVar3 & 0xffffffff00000000;
  if (*(short *)((uVar6 | 7) + (ulong)*(uint *)((uVar6 | *(uint *)(*puVar3 + 0x1b)) - 1)) == 0xa2) {
    puVar4 = (undefined8 *)JSFunctionRef::object(this_00);
    local_28 = *puVar4;
    pIVar5 = (Isolate *)ObjectRef::isolate((ObjectRef *)this_00);
    iVar2 = JSFunction::ComputeInstanceSizeWithMinSlack((JSFunction *)&local_28,pIVar5);
    bVar1 = iVar2 == *(int *)(this + 0x18);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

