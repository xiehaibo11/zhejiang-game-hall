
/* v8::internal::compiler::LiveRange::NextRegisterPosition(v8::internal::compiler::LifetimePosition)
   const */

long __thiscall v8::internal::compiler::LiveRange::NextRegisterPosition(LiveRange *this,int param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x38);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x18) <= param_2)) goto LAB_01655a14;
  lVar1 = *(long *)(this + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      *(undefined8 *)(this + 0x38) = 0;
      return 0;
    }
LAB_01655a14:
    if (param_2 <= *(int *)(lVar1 + 0x18)) break;
    lVar1 = *(long *)(lVar1 + 0x10);
  }
  *(long *)(this + 0x38) = lVar1;
  do {
    if ((*(uint *)(lVar1 + 0x1c) & 3) == 2) {
      return lVar1;
    }
    lVar1 = *(long *)(lVar1 + 0x10);
  } while (lVar1 != 0);
  return 0;
}

