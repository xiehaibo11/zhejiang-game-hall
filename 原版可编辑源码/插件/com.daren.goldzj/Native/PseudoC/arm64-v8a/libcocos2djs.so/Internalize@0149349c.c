
/* v8::internal::AstConsString::Internalize(v8::internal::Isolate*) */

void __thiscall v8::internal::AstConsString::Internalize(AstConsString *this,Isolate *param_1)

{
  Isolate *pIVar1;
  undefined8 *puVar2;
  
  if (*(long **)(this + 8) == (long *)0x0) {
    pIVar1 = param_1 + 200;
  }
  else {
    pIVar1 = (Isolate *)**(long **)(this + 8);
    for (puVar2 = *(undefined8 **)(this + 0x10); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)puVar2[1]) {
      pIVar1 = (Isolate *)Factory::NewConsString((Factory *)param_1,*(undefined8 *)*puVar2);
      if (pIVar1 == (Isolate *)0x0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
    }
  }
  *(Isolate **)this = pIVar1;
  return;
}

