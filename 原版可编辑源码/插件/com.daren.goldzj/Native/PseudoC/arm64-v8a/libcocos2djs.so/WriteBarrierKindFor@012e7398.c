
/* v8::internal::compiler::RepresentationSelector::WriteBarrierKindFor(v8::internal::compiler::BaseTaggedness,
   v8::internal::MachineRepresentation, v8::internal::compiler::Type,
   v8::internal::MachineRepresentation, v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::RepresentationSelector::WriteBarrierKindFor
          (RepresentationSelector *this,char param_2,char param_3,long param_4,char param_5,
          long *param_6)

{
  ulong uVar1;
  ulong uVar2;
  HeapConstantType *this_00;
  double dVar3;
  long lVar4;
  int *piVar5;
  int *local_48;
  long local_28;
  
  if (param_2 != '\x01') {
    return 0;
  }
  if (1 < (byte)(param_3 - 7U)) {
    return 0;
  }
  piVar5 = (int *)param_6[1];
  if (param_4 == 0x381) {
    return 0;
  }
  if (param_5 == '\x06') {
    return 0;
  }
  local_48 = piVar5;
  local_28 = param_4;
  uVar2 = Type::SlowIs((Type *)&local_28,0x381);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  if (piVar5 == (int *)0x381) {
    return 0;
  }
  uVar2 = Type::SlowIs((Type *)&local_48,0x381);
  if ((uVar2 & 1) == 0) {
    if ((((ulong)local_48 & 1) == 0) && (*local_48 == 0)) {
      lVar4 = *(long *)(*(long *)this + 0x168);
      this_00 = (HeapConstantType *)Type::AsHeapConstant((Type *)&local_48);
      uVar2 = HeapConstantType::Value(this_00);
      if ((uVar2 < lVar4 + 0x1010U) &&
         ((uVar1 = lVar4 + 0x80, uVar1 <= uVar2 &&
          (((uint)((int)uVar2 - (int)uVar1) >> 3 & 0xffff) < 0x1d7)))) {
        return 0;
      }
    }
    if (param_3 == '\a') {
      return 3;
    }
    if (param_5 == '\a') {
      return 3;
    }
    if (*(short *)(*param_6 + 0x10) != 0x1c) {
      return 5;
    }
    dVar3 = *(double *)(*param_6 + 0x30);
    if (dVar3 == -0.0) {
      return 3;
    }
    if (1073741823.0 < dVar3) {
      return 3;
    }
    if (dVar3 < -1073741824.0) {
      return 3;
    }
    if ((double)(int)dVar3 != dVar3) {
      return 3;
    }
  }
  return 0;
}

