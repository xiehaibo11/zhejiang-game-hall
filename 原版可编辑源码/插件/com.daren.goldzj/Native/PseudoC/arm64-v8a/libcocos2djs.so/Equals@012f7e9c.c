
/* v8::internal::compiler::Operator1<v8::internal::ZoneHandleSet<v8::internal::Map>,
   v8::internal::compiler::OpEqualTo<v8::internal::ZoneHandleSet<v8::internal::Map> >,
   v8::internal::compiler::OpHash<v8::internal::ZoneHandleSet<v8::internal::Map> >
   >::Equals(v8::internal::compiler::Operator const*) const */

undefined8 __thiscall
v8::internal::compiler::
Operator1<v8::internal::ZoneHandleSet<v8::internal::Map>,v8::internal::compiler::OpEqualTo<v8::internal::ZoneHandleSet<v8::internal::Map>>,v8::internal::compiler::OpHash<v8::internal::ZoneHandleSet<v8::internal::Map>>>
::Equals(Operator1<v8::internal::ZoneHandleSet<v8::internal::Map>,v8::internal::compiler::OpEqualTo<v8::internal::ZoneHandleSet<v8::internal::Map>>,v8::internal::compiler::OpHash<v8::internal::ZoneHandleSet<v8::internal::Map>>>
         *this,Operator *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) {
    uVar1 = *(ulong *)(this + 0x30);
    uVar2 = *(ulong *)(param_1 + 0x30);
    if (uVar1 == uVar2) {
      return 1;
    }
    if ((uVar1 & 3) != 2) {
      return 0;
    }
    if ((uVar2 & 3) != 2) {
      return 0;
    }
    lVar4 = *(long *)(uVar1 + 6) - *(long *)(uVar1 - 2);
    uVar3 = lVar4 >> 3;
    if (uVar3 == *(long *)(uVar2 + 6) - *(long *)(uVar2 - 2) >> 3) {
      if (lVar4 == 0) {
        return 1;
      }
      uVar5 = 0;
      while( true ) {
        if (uVar3 == uVar5) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (*(long *)(*(long *)(uVar1 - 2) + uVar5 * 8) !=
            *(long *)(*(long *)(uVar2 - 2) + uVar5 * 8)) break;
        uVar5 = uVar5 + 1;
        if (uVar3 <= uVar5) {
          return 1;
        }
      }
    }
  }
  return 0;
}

