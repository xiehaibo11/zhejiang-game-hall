
/* v8::internal::ReplacementStringBuilder::EnsureCapacity(int) */

void __thiscall
v8::internal::ReplacementStringBuilder::EnsureCapacity(ReplacementStringBuilder *this,int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 local_28;
  
  iVar2 = *(int *)(**(long **)(this + 8) + 3) >> 1;
  if (iVar2 < *(int *)(this + 0x10) + param_1) {
    do {
      iVar2 = iVar2 * 2;
    } while (iVar2 < *(int *)(this + 0x10) + param_1);
    puVar1 = (undefined8 *)
             Factory::NewFixedArrayWithHoles((Factory *)(*(long *)this + -0x8850),iVar2,0);
    local_28 = **(undefined8 **)(this + 8);
    FixedArray::CopyTo((FixedArray *)&local_28,0,*puVar1,0,*(undefined4 *)(this + 0x10));
    *(undefined8 **)(this + 8) = puVar1;
  }
  return;
}

