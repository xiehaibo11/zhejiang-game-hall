
/* v8::internal::Parser::RewriteCatchPattern(v8::internal::ParserBase<v8::internal::Parser>::CatchInfo*)
    */

undefined8 * __thiscall v8::internal::Parser::RewriteCatchPattern(Parser *this,CatchInfo *param_1)

{
  undefined8 uVar1;
  Variable *pVVar2;
  long lVar3;
  Zone *pZVar4;
  undefined8 *puVar5;
  ulong uVar6;
  Parser *local_78;
  ulong local_70;
  ulong uStack_68;
  undefined8 local_60;
  VariableProxy *pVStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pZVar4 = *(Zone **)(this + 0x68);
  uVar1 = *(undefined8 *)param_1;
  pVVar2 = *(Variable **)(param_1 + 8);
  pVStack_58 = *(VariableProxy **)(pZVar4 + 0x10);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)pVStack_58) < 0x18) {
    pVStack_58 = (VariableProxy *)Zone::NewExpand(pZVar4,0x18);
  }
  else {
    *(VariableProxy **)(pZVar4 + 0x10) = pVStack_58 + 0x18;
  }
  VariableProxy::VariableProxy(pVStack_58,pVVar2,-1);
  local_78 = this + 200;
  local_50 = 0xffffffff;
  local_70 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
  uStack_68 = local_70;
  local_60 = uVar1;
  InitializeVariables(this,&local_78);
  pZVar4 = *(Zone **)(this + 0x68);
  puVar5 = *(undefined8 **)(pZVar4 + 0x10);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar5) < 0x20) {
    puVar5 = (undefined8 *)Zone::NewExpand(pZVar4,0x20);
  }
  else {
    *(undefined8 **)(pZVar4 + 0x10) = puVar5 + 4;
  }
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0xc7ffffffff;
  puVar5[1] = 0;
  ScopedList<v8::internal::Statement*,void*>::CopyTo
            ((ScopedList<v8::internal::Statement*,void*> *)&local_78,(ZoneList *)(puVar5 + 1),
             *(Zone **)(this + 0x68));
  uVar6 = *(long *)(local_78 + 8) - *(long *)local_78 >> 3;
  if (local_70 < uVar6 || local_70 - uVar6 == 0) {
    if (local_70 < uVar6) {
      *(ulong *)(local_78 + 8) = *(long *)local_78 + local_70 * 8;
    }
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
              ((vector<void*,std::__ndk1::allocator<void*>> *)local_78,local_70 - uVar6);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

