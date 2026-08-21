
/* v8::internal::interpreter::Interpreter::LookupNameOfBytecodeHandler(v8::internal::Code) */

undefined8 __thiscall
v8::internal::interpreter::Interpreter::LookupNameOfBytecodeHandler(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((*(uint *)(param_2 + 0x17) & 0x3e) == 2) {
    uVar1 = Builtins::name(*(int *)(param_2 + 0x27));
    return uVar1;
  }
  return 0;
}

