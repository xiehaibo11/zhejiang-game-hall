
/* v8::internal::JavaScriptFrame::IsConstructor() const */

bool __thiscall v8::internal::JavaScriptFrame::IsConstructor(JavaScriptFrame *this)

{
  long *plVar1;
  
  plVar1 = (long *)**(undefined8 **)(this + 0x20) + -1;
  if (*plVar1 == 0x26) {
    plVar1 = (long *)(*(long *)**(undefined8 **)(this + 0x20) + -8);
  }
  return *plVar1 == 0x24;
}

