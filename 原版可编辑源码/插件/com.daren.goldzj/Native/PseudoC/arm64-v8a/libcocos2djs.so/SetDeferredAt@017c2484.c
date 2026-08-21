
/* v8::internal::interpreter::ConstantArrayBuilder::SetDeferredAt(unsigned long,
   v8::internal::Handle<v8::internal::Object>) */

void __thiscall
v8::internal::interpreter::ConstantArrayBuilder::SetDeferredAt
          (ConstantArrayBuilder *this,ulong param_1,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)this;
  lVar3 = *plVar2;
  if ((lVar3 + plVar2[1]) - 1U < param_1) {
    plVar2 = *(long **)(this + 8);
    lVar3 = *plVar2;
    if ((lVar3 + plVar2[1]) - 1U < param_1) {
      plVar2 = *(long **)(this + 0x10);
      lVar3 = *plVar2;
      if ((lVar3 + plVar2[1]) - 1U < param_1) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
    }
  }
  puVar1 = (undefined8 *)(plVar2[4] + (param_1 - lVar3) * 0x10);
  *(undefined1 *)(puVar1 + 1) = 1;
  *puVar1 = param_3;
  return;
}

