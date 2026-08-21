
/* v8::internal::SaveContext::~SaveContext() */

void __thiscall v8::internal::SaveContext::~SaveContext(SaveContext *this)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(undefined8 **)(this + 8) != (undefined8 *)0x0) {
    uVar1 = **(undefined8 **)(this + 8);
  }
  *(undefined8 *)(*(long *)this + 0x2bc8) = uVar1;
  return;
}

