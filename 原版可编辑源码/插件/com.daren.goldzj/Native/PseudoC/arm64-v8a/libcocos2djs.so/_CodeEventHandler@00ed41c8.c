
/* v8::CodeEventHandler::~CodeEventHandler() */

void __thiscall v8::CodeEventHandler::~CodeEventHandler(CodeEventHandler *this)

{
  *(undefined ***)this = &PTR__CodeEventHandler_01c98290;
  if (*(long **)(this + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ed41ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 8) + 8))();
    return;
  }
  return;
}

