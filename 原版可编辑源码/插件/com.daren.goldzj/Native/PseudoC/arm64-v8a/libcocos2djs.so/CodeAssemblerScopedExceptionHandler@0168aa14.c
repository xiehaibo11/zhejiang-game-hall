
/* v8::internal::compiler::CodeAssemblerScopedExceptionHandler::CodeAssemblerScopedExceptionHandler(v8::internal::compiler::CodeAssembler*,
   v8::internal::compiler::CodeAssemblerLabel*,
   v8::internal::compiler::TypedCodeAssemblerVariable<v8::internal::Object>*) */

void __thiscall
v8::internal::compiler::CodeAssemblerScopedExceptionHandler::CodeAssemblerScopedExceptionHandler
          (CodeAssemblerScopedExceptionHandler *this,CodeAssembler *param_1,
          CodeAssemblerLabel *param_2,TypedCodeAssemblerVariable *param_3)

{
  CodeAssemblerParameterizedLabel *pCVar1;
  undefined8 *puVar2;
  long lVar3;
  Zone *this_00;
  CodeAssemblerScopedExceptionHandler *pCVar4;
  long *plVar5;
  CodeAssemblerParameterizedLabel *local_38;
  
  *(CodeAssembler **)(this + 8) = param_1;
  *(CodeAssemblerLabel **)(this + 0x10) = param_2;
  *this = (CodeAssemblerScopedExceptionHandler)(param_2 != (CodeAssemblerLabel *)0x0);
  pCVar4 = this + 0x18;
  *(undefined8 *)pCVar4 = 0;
  *(TypedCodeAssemblerVariable **)(this + 0x20) = param_3;
  if (param_2 != (CodeAssemblerLabel *)0x0) {
    pCVar1 = operator_new(0x88);
    plVar5 = *(long **)param_1;
    *(long **)pCVar1 = plVar5;
    puVar2 = operator_new(0x18);
    pCVar1[0x38] = (CodeAssemblerParameterizedLabel)0x0;
    *(undefined8 *)(pCVar1 + 0x28) = 0;
    *(undefined8 *)(pCVar1 + 0x30) = 0;
    *(undefined8 *)(pCVar1 + 0x40) = 0;
    *(long **)(pCVar1 + 0x48) = plVar5;
    *(undefined8 **)(pCVar1 + 8) = puVar2;
    *(undefined8 **)(pCVar1 + 0x10) = puVar2 + 3;
    *(undefined8 **)(pCVar1 + 0x18) = puVar2 + 3;
    *(undefined8 *)(pCVar1 + 0x20) = 0;
    *(undefined8 *)(pCVar1 + 0x60) = 0;
    *(undefined8 *)(pCVar1 + 0x50) = 0;
    *(CodeAssemblerParameterizedLabel **)(pCVar1 + 0x58) = pCVar1 + 0x60;
    *(undefined8 *)(pCVar1 + 0x78) = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    *(undefined8 *)(pCVar1 + 0x80) = 0;
    *(undefined8 *)(pCVar1 + 0x68) = 0;
    *(CodeAssemblerParameterizedLabel **)(pCVar1 + 0x70) = pCVar1 + 0x78;
    this_00 = (Zone *)**(undefined8 **)(*plVar5 + 8);
    puVar2 = *(undefined8 **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar2) < 0x10) {
      puVar2 = (undefined8 *)Zone::NewExpand(this_00,0x10);
    }
    else {
      *(undefined8 **)(this_00 + 0x10) = puVar2 + 2;
    }
    *puVar2 = 0;
    *(undefined2 *)(puVar2 + 1) = 0;
    *(undefined1 *)((long)puVar2 + 10) = 1;
    *(undefined8 **)(pCVar1 + 0x50) = puVar2;
    lVar3 = *(long *)pCVar4;
    *(CodeAssemblerParameterizedLabel **)pCVar4 = pCVar1;
    if (lVar3 != 0) {
      FUN_0168b280(pCVar4);
      pCVar1 = *(CodeAssemblerParameterizedLabel **)pCVar4;
    }
    lVar3 = **(long **)(this + 8);
    if (*(undefined8 **)(lVar3 + 0xa8) == *(undefined8 **)(lVar3 + 0xb0)) {
      local_38 = pCVar1;
      std::__ndk1::
      vector<v8::internal::compiler::CodeAssemblerParameterizedLabel<v8::internal::Object>*,std::__ndk1::allocator<v8::internal::compiler::CodeAssemblerParameterizedLabel<v8::internal::Object>*>>
      ::
      __push_back_slow_path<v8::internal::compiler::CodeAssemblerParameterizedLabel<v8::internal::Object>*const&>
                ((vector<v8::internal::compiler::CodeAssemblerParameterizedLabel<v8::internal::Object>*,std::__ndk1::allocator<v8::internal::compiler::CodeAssemblerParameterizedLabel<v8::internal::Object>*>>
                  *)(lVar3 + 0xa0),&local_38);
    }
    else {
      **(undefined8 **)(lVar3 + 0xa8) = pCVar1;
      *(long *)(lVar3 + 0xa8) = *(long *)(lVar3 + 0xa8) + 8;
    }
  }
  return;
}

