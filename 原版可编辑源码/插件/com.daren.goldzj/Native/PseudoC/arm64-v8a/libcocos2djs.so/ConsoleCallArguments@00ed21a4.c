
/* v8::debug::ConsoleCallArguments::ConsoleCallArguments(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void __thiscall
v8::debug::ConsoleCallArguments::ConsoleCallArguments
          (ConsoleCallArguments *this,FunctionCallbackInfo *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar1;
  return;
}

