
/* v8::internal::FixedArrayBuilder::EnsureCapacity(v8::internal::Isolate*, int) */

void __thiscall
v8::internal::FixedArrayBuilder::EnsureCapacity
          (FixedArrayBuilder *this,Isolate *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 local_28;
  
  iVar2 = *(int *)(**(long **)this + 3) >> 1;
  if (iVar2 < *(int *)(this + 8) + param_2) {
    do {
      iVar2 = iVar2 * 2;
    } while (iVar2 < *(int *)(this + 8) + param_2);
    puVar1 = (undefined8 *)Factory::NewFixedArrayWithHoles((Factory *)param_1,iVar2,0);
    local_28 = **(undefined8 **)this;
    FixedArray::CopyTo((FixedArray *)&local_28,0,*puVar1,0,*(undefined4 *)(this + 8));
    *(undefined8 **)this = puVar1;
  }
  return;
}

