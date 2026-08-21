
/* v8::internal::TypedSlots::Merge(v8::internal::TypedSlots*) */

void __thiscall v8::internal::TypedSlots::Merge(TypedSlots *this,TypedSlots *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(long *)(this + 8) == 0) {
      *(long *)(this + 8) = lVar1;
    }
    else {
      **(long **)(this + 0x10) = lVar1;
    }
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}

