
/* v8::internal::MarkCompactCollector::ClearFlushedJsFunctions() */

void __thiscall
v8::internal::MarkCompactCollector::ClearFlushedJsFunctions(MarkCompactCollector *this)

{
  ulong uVar1;
  undefined8 local_8;
  
  local_8 = 0;
  while (uVar1 = Worklist<v8::internal::JSFunction,64>::Pop
                           ((Worklist<v8::internal::JSFunction,64> *)(this + 0x23b0),0,
                            (JSFunction *)&local_8), (uVar1 & 1) != 0) {
    JSFunction::ResetIfBytecodeFlushed((JSFunction *)&local_8);
  }
  return;
}

