
/* v8::internal::compiler::LiveRange::NextLifetimePositionRegisterIsBeneficial(v8::internal::compiler::LifetimePosition
   const&) const */

undefined4 __thiscall
v8::internal::compiler::LiveRange::NextLifetimePositionRegisterIsBeneficial
          (LiveRange *this,LifetimePosition *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x38);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x18) <= *(int *)param_1)) goto LAB_01655978;
  lVar1 = *(long *)(this + 0x18);
  do {
    if (lVar1 == 0) {
      *(undefined8 *)(this + 0x38) = 0;
LAB_016559a8:
      return *(undefined4 *)(*(long *)(this + 8) + 4);
    }
LAB_01655978:
    if (*(int *)param_1 <= *(int *)(lVar1 + 0x18)) {
      *(long *)(this + 0x38) = lVar1;
      do {
        if ((*(byte *)(lVar1 + 0x1c) >> 5 & 1) != 0) {
          return *(undefined4 *)(lVar1 + 0x18);
        }
        lVar1 = *(long *)(lVar1 + 0x10);
      } while (lVar1 != 0);
      goto LAB_016559a8;
    }
    lVar1 = *(long *)(lVar1 + 0x10);
  } while( true );
}

