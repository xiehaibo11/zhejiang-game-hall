
/* v8::internal::Parser::SpreadCall(v8::internal::Expression*,
   v8::internal::ScopedList<v8::internal::Expression*, void*> const&, int,
   v8::internal::Call::PossiblyEval, bool) */

undefined4 * __thiscall
v8::internal::Parser::SpreadCall
          (Parser *this,VariableProxy *param_1,ScopedList<v8::internal::Expression*,void*> *param_2,
          undefined4 param_3,undefined8 param_5,ulong param_6)

{
  uint uVar1;
  VariableProxy *pVVar2;
  Zone *pZVar3;
  Scope *this_00;
  Scope *pSVar4;
  Variable *pVVar5;
  undefined4 *puVar6;
  Assignment *pAVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  VariableProxy *pVVar14;
  undefined8 uVar15;
  vector<void*,std::__ndk1::allocator<void*>> *local_78;
  ulong uStack_70;
  ulong local_68;
  VariableProxy *local_48;
  
  lVar10 = *(long *)(param_2 + 8);
  uVar1 = ~(uint)lVar10 + *(int *)(param_2 + 0x10);
  if ((int)uVar1 < 1) {
    uVar11 = (ulong)(int)uVar1;
  }
  else {
    uVar11 = (ulong)uVar1;
    plVar12 = (long *)(**(long **)param_2 + lVar10 * 8);
    uVar13 = uVar11;
    do {
      if ((*(uint *)(*plVar12 + 4) & 0x3f) == 0x2d) goto LAB_0115adcc;
      uVar13 = uVar13 - 1;
      plVar12 = plVar12 + 1;
    } while (uVar13 != 0);
  }
  if ((*(uint *)(*(long *)(**(long **)param_2 + (uVar11 + lVar10) * 8) + 4) & 0x3f) == 0x2d) {
LAB_0115addc:
    pZVar3 = *(Zone **)(this + 0x68);
    puVar6 = *(undefined4 **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar6) < 0x20) {
      puVar6 = (undefined4 *)Zone::NewExpand(pZVar3,0x20);
    }
    else {
      *(undefined4 **)(pZVar3 + 0x10) = puVar6 + 8;
    }
    pZVar3 = *(Zone **)(this + 0x68);
    *(VariableProxy **)(puVar6 + 2) = param_1;
    uVar8 = 0x21c;
    if ((param_6 & 1) == 0) {
      uVar8 = 0x1c;
    }
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 0;
    *puVar6 = param_3;
    puVar6[1] = uVar8;
    ScopedList<v8::internal::Expression*,void*>::CopyTo(param_2,(ZoneList *)(puVar6 + 4),pZVar3);
    return puVar6;
  }
LAB_0115adcc:
  if ((*(uint *)(param_1 + 4) & 0x3f) == 0x2f) goto LAB_0115addc;
  plVar12 = *(long **)(this + 0xd0);
  local_78 = (vector<void*,std::__ndk1::allocator<void*>> *)(this + 200);
  uStack_70 = (long)plVar12 - *(long *)(this + 200) >> 3;
  local_68 = uStack_70;
  local_48 = param_1;
  if ((*(uint *)(param_1 + 4) & 0x3f) == 0x2c) {
    if ((*(uint *)(*(long *)(param_1 + 8) + 4) & 0x3f) == 0x30) {
      this_00 = (Scope *)Scope::GetClosureScope(*(Scope **)this);
      pSVar4 = (Scope *)Scope::GetReceiverScope(this_00);
      lVar10 = *(long *)(pSVar4 + 0xb0);
      *(ushort *)(lVar10 + 0x28) = *(ushort *)(lVar10 + 0x28) | 0x800;
      if (this_00 == pSVar4) {
        lVar10 = *(long *)(this + 0xc0);
        do {
          if (*(byte *)(lVar10 + 0x10) - 1 < 2) {
            *(undefined1 *)(lVar10 + 0x59) = 1;
          }
          lVar10 = *(long *)(lVar10 + 8);
        } while (lVar10 != 0);
      }
      else {
        *(ushort *)(this_00 + 0x83) = *(ushort *)(this_00 + 0x83) | 0x800;
        *(ushort *)(lVar10 + 0x28) = *(ushort *)(lVar10 + 0x28) | 0x400;
      }
      *(uint *)(*(long *)(this + 0x80) + 4) = *(uint *)(*(long *)(this + 0x80) + 4) & 0xffffffbf;
      pVVar14 = *(VariableProxy **)(this + 0x80);
      if (*(long **)(local_78 + 8) < *(long **)(local_78 + 0x10)) {
        **(long **)(local_78 + 8) = (long)param_1;
        *(long *)(local_78 + 8) = *(long *)(local_78 + 8) + 8;
      }
      else {
        std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                  (local_78,&local_48);
      }
      local_68 = local_68 + 1;
      local_48 = pVVar14;
      if (*(undefined8 **)(local_78 + 0x10) <= *(undefined8 **)(local_78 + 8)) goto LAB_0115b188;
      **(undefined8 **)(local_78 + 8) = pVVar14;
    }
    else {
      pVVar5 = (Variable *)
               Scope::NewTemporary(*(Scope **)this,
                                   *(AstRawString **)
                                    (*(long *)(*(long *)(this + 0x60) + 0x38) + 0x110));
      pZVar3 = *(Zone **)(this + 0x68);
      pVVar14 = *(VariableProxy **)(pZVar3 + 0x10);
      if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pVVar14) < 0x18) {
        pVVar14 = (VariableProxy *)Zone::NewExpand(pZVar3,0x18);
      }
      else {
        *(VariableProxy **)(pZVar3 + 0x10) = pVVar14 + 0x18;
      }
      VariableProxy::VariableProxy(pVVar14,pVVar5,-1);
      uVar1 = *(uint *)(pVVar14 + 4);
      pVVar2 = param_1;
      if ((*(uint *)(param_1 + 4) & 0x3f) != 0x2c) {
        pVVar2 = (VariableProxy *)0x0;
      }
      uVar15 = *(undefined8 *)(pVVar2 + 8);
      if (((uVar1 & 0x3f) == 0x35) && (*(uint *)(pVVar14 + 4) = uVar1 | 0x80, (uVar1 >> 8 & 1) != 0)
         ) {
        Variable::SetMaybeAssigned(*(Variable **)(pVVar14 + 8));
      }
      pZVar3 = *(Zone **)(this + 0x68);
      pAVar7 = *(Assignment **)(pZVar3 + 0x10);
      if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pAVar7) < 0x18) {
        pAVar7 = (Assignment *)Zone::NewExpand(pZVar3,0x18);
      }
      else {
        *(Assignment **)(pZVar3 + 0x10) = pAVar7 + 0x18;
      }
      Assignment::Assignment(pAVar7,0x18,0x11,pVVar14,uVar15,0xffffffff);
      pZVar3 = *(Zone **)(this + 0x68);
      local_48 = *(VariableProxy **)(pZVar3 + 0x10);
      if ((*(uint *)(param_1 + 4) & 0x3f) != 0x2c) {
        param_1 = (VariableProxy *)0x0;
      }
      uVar15 = *(undefined8 *)(param_1 + 0x10);
      if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)local_48) < 0x18) {
        local_48 = (VariableProxy *)Zone::NewExpand(pZVar3,0x18);
      }
      else {
        *(VariableProxy **)(pZVar3 + 0x10) = local_48 + 0x18;
      }
      uVar8 = 0xac;
      if ((param_6 & 1) == 0) {
        uVar8 = 0x2c;
      }
      *(Assignment **)(local_48 + 8) = pAVar7;
      *(undefined8 *)(local_48 + 0x10) = uVar15;
      *(undefined4 *)local_48 = 0xffffffff;
      *(undefined4 *)(local_48 + 4) = uVar8;
      if (*(undefined8 **)(local_78 + 8) < *(undefined8 **)(local_78 + 0x10)) {
        **(undefined8 **)(local_78 + 8) = local_48;
        *(long *)(local_78 + 8) = *(long *)(local_78 + 8) + 8;
      }
      else {
        std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                  (local_78,&local_48);
      }
      local_68 = local_68 + 1;
      pZVar3 = *(Zone **)(this + 0x68);
      pVVar14 = *(VariableProxy **)(pZVar3 + 0x10);
      if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pVVar14) < 0x18) {
        pVVar14 = (VariableProxy *)Zone::NewExpand(pZVar3,0x18);
      }
      else {
        *(VariableProxy **)(pZVar3 + 0x10) = pVVar14 + 0x18;
      }
      VariableProxy::VariableProxy(pVVar14,pVVar5,-1);
      local_48 = pVVar14;
      if (*(undefined8 **)(local_78 + 0x10) <= *(undefined8 **)(local_78 + 8)) goto LAB_0115b188;
      **(undefined8 **)(local_78 + 8) = pVVar14;
    }
    *(long *)(local_78 + 8) = *(long *)(local_78 + 8) + 8;
  }
  else {
    if (plVar12 < *(long **)(this + 0xd8)) {
      *plVar12 = (long)param_1;
      *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + 8;
    }
    else {
      std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                (local_78,&local_48);
    }
    local_68 = local_68 + 1;
    pZVar3 = *(Zone **)(this + 0x68);
    pVVar14 = *(VariableProxy **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pVVar14) < 0x10) {
      pVVar14 = (VariableProxy *)Zone::NewExpand(pZVar3,0x10);
    }
    else {
      *(VariableProxy **)(pZVar3 + 0x10) = pVVar14 + 0x10;
    }
    *(undefined8 *)pVVar14 = 0x329ffffffff;
    local_48 = pVVar14;
    if (*(undefined8 **)(local_78 + 8) < *(undefined8 **)(local_78 + 0x10)) {
      **(undefined8 **)(local_78 + 8) = pVVar14;
      *(long *)(local_78 + 8) = *(long *)(local_78 + 8) + 8;
      goto LAB_0115b18c;
    }
LAB_0115b188:
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
              (local_78,&local_48);
  }
LAB_0115b18c:
  local_68 = local_68 + 1;
  iVar9 = *(int *)(param_2 + 0x10) - (int)*(long *)(param_2 + 8);
  if (iVar9 < 1) {
    iVar9 = 0;
  }
  else {
    lVar10 = 0;
    do {
      if ((*(uint *)(*(long *)(**(long **)param_2 + *(long *)(param_2 + 8) * 8 + lVar10 * 8) + 4) &
          0x3f) == 0x2d) {
        iVar9 = (int)lVar10;
        break;
      }
      lVar10 = lVar10 + 1;
    } while (iVar9 != lVar10);
  }
  pZVar3 = *(Zone **)(this + 0x68);
  pVVar14 = *(VariableProxy **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pVVar14) < 0x28) {
    pVVar14 = (VariableProxy *)Zone::NewExpand(pZVar3,0x28);
  }
  else {
    *(VariableProxy **)(pZVar3 + 0x10) = pVVar14 + 0x28;
  }
  pZVar3 = *(Zone **)(this + 0x68);
  *(undefined8 *)pVVar14 = 0x17ffffffff;
  *(uint *)(pVVar14 + 8) = *(uint *)(pVVar14 + 8) & 0x80000000;
  *(int *)(pVVar14 + 0xc) = iVar9;
  *(undefined8 *)(pVVar14 + 0x18) = 0;
  *(undefined8 *)(pVVar14 + 0x10) = 0;
  *(undefined8 *)(pVVar14 + 0x20) = 0;
  ScopedList<v8::internal::Expression*,void*>::CopyTo(param_2,(ZoneList *)(pVVar14 + 0x18),pZVar3);
  local_48 = pVVar14;
  if (*(undefined8 **)(local_78 + 8) < *(undefined8 **)(local_78 + 0x10)) {
    **(undefined8 **)(local_78 + 8) = pVVar14;
    *(long *)(local_78 + 8) = *(long *)(local_78 + 8) + 8;
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
              (local_78,&local_48);
  }
  local_68 = local_68 + 1;
  pZVar3 = *(Zone **)(this + 0x68);
  puVar6 = *(undefined4 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar6) < 0x28) {
    puVar6 = (undefined4 *)Zone::NewExpand(pZVar3,0x28);
  }
  else {
    *(undefined4 **)(pZVar3 + 0x10) = puVar6 + 10;
  }
  pZVar3 = *(Zone **)(this + 0x68);
  *puVar6 = param_3;
  *(undefined8 *)(puVar6 + 1) = 0xfd0000001e;
  *(undefined8 *)(puVar6 + 6) = 0;
  *(undefined8 *)(puVar6 + 4) = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  ScopedList<v8::internal::Expression*,void*>::CopyTo
            ((ScopedList<v8::internal::Expression*,void*> *)&local_78,(ZoneList *)(puVar6 + 6),
             pZVar3);
  uVar11 = *(long *)(local_78 + 8) - *(long *)local_78 >> 3;
  if (uVar11 <= uStack_70 && uStack_70 - uVar11 != 0) {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append(local_78,uStack_70 - uVar11);
    return puVar6;
  }
  if (uVar11 <= uStack_70) {
    return puVar6;
  }
  *(ulong *)(local_78 + 8) = *(long *)local_78 + uStack_70 * 8;
  return puVar6;
}

