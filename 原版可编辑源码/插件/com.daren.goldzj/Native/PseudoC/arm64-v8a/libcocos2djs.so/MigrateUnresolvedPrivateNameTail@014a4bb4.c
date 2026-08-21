
/* v8::internal::ClassScope::MigrateUnresolvedPrivateNameTail(v8::internal::AstNodeFactory*,
   v8::base::ThreadedListBase<v8::internal::VariableProxy, v8::base::EmptyBase,
   v8::internal::VariableProxy::UnresolvedNext>::Iterator) */

void __thiscall
v8::internal::ClassScope::MigrateUnresolvedPrivateNameTail
          (ClassScope *this,undefined8 *param_1,VariableProxy *param_3)

{
  VariableProxy *pVVar1;
  Zone *this_00;
  VariableProxy *this_01;
  long lVar2;
  long lVar3;
  VariableProxy *pVVar4;
  VariableProxy *pVVar5;
  long local_50;
  VariableProxy *local_48;
  
  local_48 = (VariableProxy *)&local_50;
  pVVar1 = (VariableProxy *)(*(ulong *)(this + 0x88) & 0xfffffffffffffff8);
  if ((pVVar1 != (VariableProxy *)0x0) && (*(VariableProxy **)(pVVar1 + 8) != param_3)) {
    local_50 = 0;
    pVVar5 = param_3;
    if ((param_3 == (VariableProxy *)0x0) &&
       ((lVar2 = *(long *)pVVar1, pVVar5 = pVVar1, lVar2 != 0 &&
        ((*(byte *)(lVar2 + 5) >> 1 & 1) != 0)))) {
      do {
        lVar3 = lVar2;
        lVar2 = *(long *)(lVar3 + 0x10);
        if (lVar2 == 0) break;
      } while ((*(byte *)(lVar2 + 5) >> 1 & 1) != 0);
      pVVar5 = (VariableProxy *)(lVar3 + 0x10);
    }
    if (*(VariableProxy **)(pVVar1 + 8) != pVVar5) {
      pVVar4 = *(VariableProxy **)pVVar5;
      local_48 = (VariableProxy *)&local_50;
      do {
        this_00 = (Zone *)*param_1;
        this_01 = *(VariableProxy **)(this_00 + 0x10);
        if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x18) {
          this_01 = (VariableProxy *)Zone::NewExpand(this_00,0x18);
        }
        else {
          *(VariableProxy **)(this_00 + 0x10) = this_01 + 0x18;
        }
        VariableProxy::VariableProxy(this_01,pVVar4);
        *(VariableProxy **)local_48 = this_01;
        local_48 = this_01 + 0x10;
        lVar2 = *(long *)local_48;
        if ((lVar2 != 0) && ((*(byte *)(lVar2 + 5) >> 1 & 1) != 0)) {
          do {
            lVar3 = lVar2;
            lVar2 = *(long *)(lVar3 + 0x10);
            if (lVar2 == 0) break;
          } while ((*(byte *)(lVar2 + 5) >> 1 & 1) != 0);
          local_48 = (VariableProxy *)(lVar3 + 0x10);
        }
        pVVar5 = (VariableProxy *)(*(long *)pVVar5 + 0x10);
        pVVar4 = *(VariableProxy **)pVVar5;
        if ((pVVar4 != (VariableProxy *)0x0) && (((byte)pVVar4[5] >> 1 & 1) != 0)) {
          do {
            pVVar5 = pVVar4;
            pVVar4 = *(VariableProxy **)(pVVar5 + 0x10);
            if (pVVar4 == (VariableProxy *)0x0) break;
          } while (((byte)pVVar4[5] >> 1 & 1) != 0);
          pVVar5 = pVVar5 + 0x10;
        }
      } while (pVVar5 != *(VariableProxy **)(pVVar1 + 8));
    }
    if (param_3 == (VariableProxy *)0x0) {
      *(long *)pVVar1 = 0;
      *(VariableProxy **)(pVVar1 + 8) = pVVar1;
    }
    else {
      *(VariableProxy **)(pVVar1 + 8) = param_3;
      *(long *)param_3 = 0;
    }
    if (local_50 != 0) {
      **(long **)(pVVar1 + 8) = local_50;
      *(VariableProxy **)(pVVar1 + 8) = local_48;
    }
  }
  return;
}

