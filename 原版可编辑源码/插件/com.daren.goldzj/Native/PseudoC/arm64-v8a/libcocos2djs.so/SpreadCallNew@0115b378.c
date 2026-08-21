
/* v8::internal::Parser::SpreadCallNew(v8::internal::Expression*,
   v8::internal::ScopedList<v8::internal::Expression*, void*> const&, int) */

int * __thiscall
v8::internal::Parser::SpreadCallNew
          (Parser *this,Expression *param_1,ScopedList *param_2,int param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  Zone *pZVar3;
  Expression *pEVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  vector<void*,std::__ndk1::allocator<void*>> *local_58;
  ulong uStack_50;
  ulong local_48;
  Expression *local_28;
  
  lVar7 = *(long *)(param_2 + 8);
  uVar1 = ~(uint)lVar7 + *(int *)(param_2 + 0x10);
  if ((int)uVar1 < 1) {
    uVar8 = (ulong)(int)uVar1;
  }
  else {
    uVar8 = (ulong)uVar1;
    plVar9 = (long *)(**(long **)param_2 + lVar7 * 8);
    uVar10 = uVar8;
    do {
      if ((*(uint *)(*plVar9 + 4) & 0x3f) == 0x2d) goto LAB_0115b44c;
      uVar10 = uVar10 - 1;
      plVar9 = plVar9 + 1;
    } while (uVar10 != 0);
  }
  if ((*(uint *)(*(long *)(**(long **)param_2 + (uVar8 + lVar7) * 8) + 4) & 0x3f) == 0x2d) {
    pZVar3 = *(Zone **)(this + 0x68);
    piVar5 = *(int **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)piVar5) < 0x20) {
      piVar5 = (int *)Zone::NewExpand(pZVar3,0x20);
    }
    else {
      *(int **)(pZVar3 + 0x10) = piVar5 + 8;
    }
    pZVar3 = *(Zone **)(this + 0x68);
    *piVar5 = param_3;
    piVar5[1] = 0x1d;
    *(Expression **)(piVar5 + 2) = param_1;
    *(undefined8 *)(piVar5 + 4) = 0;
    piVar5[6] = 0;
    piVar5[7] = 0;
    ScopedList<v8::internal::Expression*,void*>::CopyTo
              ((ScopedList<v8::internal::Expression*,void*> *)param_2,(ZoneList *)(piVar5 + 4),
               pZVar3);
  }
  else {
LAB_0115b44c:
    puVar2 = *(undefined8 **)(this + 0xd0);
    local_58 = (vector<void*,std::__ndk1::allocator<void*>> *)(this + 200);
    uStack_50 = (long)puVar2 - *(long *)(this + 200) >> 3;
    local_48 = uStack_50;
    local_28 = param_1;
    if (puVar2 < *(undefined8 **)(this + 0xd8)) {
      *puVar2 = param_1;
      *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + 8;
    }
    else {
      std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                (local_58,&local_28);
    }
    local_48 = local_48 + 1;
    iVar6 = *(int *)(param_2 + 0x10) - (int)*(long *)(param_2 + 8);
    if (iVar6 < 1) {
      iVar6 = 0;
    }
    else {
      lVar7 = 0;
      do {
        if ((*(uint *)(*(long *)(**(long **)param_2 + *(long *)(param_2 + 8) * 8 + lVar7 * 8) + 4) &
            0x3f) == 0x2d) {
          iVar6 = (int)lVar7;
          break;
        }
        lVar7 = lVar7 + 1;
      } while (iVar6 != lVar7);
    }
    pZVar3 = *(Zone **)(this + 0x68);
    pEVar4 = *(Expression **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pEVar4) < 0x28) {
      pEVar4 = (Expression *)Zone::NewExpand(pZVar3,0x28);
    }
    else {
      *(Expression **)(pZVar3 + 0x10) = pEVar4 + 0x28;
    }
    pZVar3 = *(Zone **)(this + 0x68);
    *(undefined8 *)pEVar4 = 0x17ffffffff;
    *(uint *)(pEVar4 + 8) = *(uint *)(pEVar4 + 8) & 0x80000000;
    *(int *)(pEVar4 + 0xc) = iVar6;
    *(undefined8 *)(pEVar4 + 0x18) = 0;
    *(undefined8 *)(pEVar4 + 0x10) = 0;
    *(undefined8 *)(pEVar4 + 0x20) = 0;
    ScopedList<v8::internal::Expression*,void*>::CopyTo
              ((ScopedList<v8::internal::Expression*,void*> *)param_2,(ZoneList *)(pEVar4 + 0x18),
               pZVar3);
    local_28 = pEVar4;
    if (*(undefined8 **)(local_58 + 8) < *(undefined8 **)(local_58 + 0x10)) {
      **(undefined8 **)(local_58 + 8) = pEVar4;
      *(long *)(local_58 + 8) = *(long *)(local_58 + 8) + 8;
    }
    else {
      std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                (local_58,&local_28);
    }
    local_48 = local_48 + 1;
    pZVar3 = *(Zone **)(this + 0x68);
    piVar5 = *(int **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)piVar5) < 0x28) {
      piVar5 = (int *)Zone::NewExpand(pZVar3,0x28);
    }
    else {
      *(int **)(pZVar3 + 0x10) = piVar5 + 10;
    }
    pZVar3 = *(Zone **)(this + 0x68);
    *piVar5 = param_3;
    piVar5[1] = 0x1e;
    piVar5[2] = 0xfe;
    *(undefined8 *)(piVar5 + 6) = 0;
    piVar5[4] = 0;
    piVar5[5] = 0;
    piVar5[8] = 0;
    piVar5[9] = 0;
    ScopedList<v8::internal::Expression*,void*>::CopyTo
              ((ScopedList<v8::internal::Expression*,void*> *)&local_58,(ZoneList *)(piVar5 + 6),
               pZVar3);
    uVar8 = *(long *)(local_58 + 8) - *(long *)local_58 >> 3;
    if (uStack_50 < uVar8 || uStack_50 - uVar8 == 0) {
      if (uStack_50 < uVar8) {
        *(ulong *)(local_58 + 8) = *(long *)local_58 + uStack_50 * 8;
      }
    }
    else {
      std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append(local_58,uStack_50 - uVar8)
      ;
    }
  }
  return piVar5;
}

