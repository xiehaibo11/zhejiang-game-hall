
/* v8::internal::interpreter::Interpreter::ForEachBytecode(std::__ndk1::function<void
   (v8::internal::interpreter::Bytecode, v8::internal::interpreter::OperandScale)> const&) */

void __thiscall
v8::internal::interpreter::Interpreter::ForEachBytecode(Interpreter *this,function *param_1)

{
  long *plVar1;
  int iVar2;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  
  iVar2 = 0;
  do {
    local_14[0] = (undefined1)iVar2;
    local_18[0] = 1;
    plVar1 = *(long **)(param_1 + 0x20);
    if (plVar1 == (long *)0x0) goto LAB_01041c88;
    (**(code **)(*plVar1 + 0x30))(plVar1,local_14,local_18);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0xb7);
  iVar2 = 0;
  do {
    local_14[0] = (undefined1)iVar2;
    local_18[0] = 2;
    plVar1 = *(long **)(param_1 + 0x20);
    if (plVar1 == (long *)0x0) goto LAB_01041c88;
    (**(code **)(*plVar1 + 0x30))(plVar1,local_14,local_18);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0xb7);
  iVar2 = 0;
  while( true ) {
    local_14[0] = (undefined1)iVar2;
    local_18[0] = 4;
    plVar1 = *(long **)(param_1 + 0x20);
    if (plVar1 == (long *)0x0) break;
    (**(code **)(*plVar1 + 0x30))(plVar1,local_14,local_18);
    iVar2 = iVar2 + 1;
    if (iVar2 == 0xb7) {
      return;
    }
  }
LAB_01041c88:
                    /* WARNING: Subroutine does not return */
  FUN_008589d0();
}

