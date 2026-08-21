
/* v8::debug::ConsoleCallArguments::ConsoleCallArguments(v8::internal::BuiltinArguments const&) */

void __thiscall
v8::debug::ConsoleCallArguments::ConsoleCallArguments
          (ConsoleCallArguments *this,BuiltinArguments *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = *(int *)param_1;
  lVar3 = *(long *)(param_1 + 8);
  iVar2 = iVar1 + -5;
  *(undefined8 *)this = 0;
  *(ulong *)(this + 8) = lVar3 + (ulong)(iVar2 != 0 && 4 < iVar1) * -8;
  *(int *)(this + 0x10) = iVar2;
  return;
}

