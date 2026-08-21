
/* v8::internal::compiler::MapRef::serialized_own_descriptor(v8::internal::InternalIndex) const */

bool __thiscall v8::internal::compiler::MapRef::serialized_own_descriptor(MapRef *this,int param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar2 = *(uint *)(*(long *)**(undefined8 **)this + 0xb);
  }
  else {
    lVar1 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar1 + 8) != 1) goto LAB_0173597c;
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) != 0xa2) goto LAB_01735990;
    uVar2 = *(uint *)(lVar1 + 0x24);
  }
  if ((int)(uVar2 >> 10 & 0x3ff) <= param_2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","descriptor_index.as_int() < NumberOfOwnDescriptors()");
  }
  if (*(int *)(*(long *)this + 8) == 2) {
    return true;
  }
  lVar1 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar1 + 8) != 1) {
LAB_0173597c:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
  }
  if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) != 0xa2) {
LAB_01735990:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsMap()");
  }
  if (*(long *)(lVar1 + 0x70) == 0) {
    return false;
  }
  plVar3 = (long *)(*(long *)(lVar1 + 0x70) + 0x20);
  plVar5 = (long *)*plVar3;
  plVar4 = plVar3;
  if (plVar5 != (long *)0x0) {
    do {
      if (param_2 <= (int)plVar5[4]) {
        plVar4 = plVar5;
      }
      plVar5 = (long *)plVar5[(int)plVar5[4] < param_2];
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar3) && ((int)plVar4[4] <= param_2)) goto LAB_0173594c;
  }
  plVar4 = plVar3;
LAB_0173594c:
  return plVar4 != plVar3;
}

