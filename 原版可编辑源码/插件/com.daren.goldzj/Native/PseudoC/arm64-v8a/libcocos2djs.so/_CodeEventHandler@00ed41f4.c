
/* v8::CodeEventHandler::~CodeEventHandler() */

void __thiscall v8::CodeEventHandler::~CodeEventHandler(CodeEventHandler *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xed41f8);
  (*pcVar1)();
}

