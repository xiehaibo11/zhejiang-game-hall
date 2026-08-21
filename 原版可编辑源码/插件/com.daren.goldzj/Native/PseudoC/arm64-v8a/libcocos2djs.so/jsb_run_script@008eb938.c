
/* jsb_run_script(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, se::Value*) */

uint jsb_run_script(basic_string *param_1,Value *param_2)

{
  long lVar1;
  uint uVar2;
  Isolate *pIVar3;
  ScriptEngine *this;
  HandleScope aHStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pIVar3 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope(aHStack_50,pIVar3);
  this = (ScriptEngine *)se::ScriptEngine::getInstance();
  uVar2 = se::ScriptEngine::runScript(this,param_1,param_2);
  v8::HandleScope::~HandleScope(aHStack_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

