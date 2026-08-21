
/* v8::internal::ParserBase<v8::internal::Parser>::ParseAsyncFunctionBody(v8::internal::Scope*,
   v8::internal::ScopedList<v8::internal::Statement*, void*>*) */

void __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseAsyncFunctionBody
          (ParserBase<v8::internal::Parser> *this,Scope *param_1,ScopedList *param_2)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  DeclarationScope *this_00;
  Zone *pZVar7;
  Block *pBVar8;
  Expression *pEVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  ParserBase<v8::internal::Parser> *local_80;
  ulong local_78;
  ulong local_70;
  void *local_68;
  
  local_80 = this + 200;
  local_78 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
  lVar12 = *(long *)(this + 0xf8);
  puVar10 = *(ulong **)(lVar12 + 8);
  local_70 = local_78;
  if ((char)puVar10[7] == 'Z') {
    do {
      uVar14 = *puVar10;
      if (*(char *)((long)puVar10 + 0x1c) == '\0') {
LAB_01170614:
        bVar3 = false;
        bVar2 = false;
      }
      else {
        iVar4 = *(int *)((long)puVar10 + 4) - (int)uVar14;
        if (iVar4 == 9) {
          if ((int)puVar10[3] != 7) goto LAB_01170614;
          iVar4 = strncmp("use asm",(char *)puVar10[1],7);
          bVar3 = iVar4 == 0;
          bVar2 = false;
        }
        else {
          if (((iVar4 != 0xc) || ((int)puVar10[3] != 10)) ||
             (iVar4 = strncmp("use strict",(char *)puVar10[1],10), iVar4 != 0)) goto LAB_01170614;
          bVar3 = false;
          bVar2 = true;
        }
      }
      pvVar6 = (void *)ParseStatementListItem(this);
      if (pvVar6 == (void *)0x0) goto LAB_0117077c;
      local_68 = pvVar6;
      if (*(long **)(local_80 + 8) < *(long **)(local_80 + 0x10)) {
        **(long **)(local_80 + 8) = (long)pvVar6;
        *(long *)(local_80 + 8) = *(long *)(local_80 + 8) + 8;
      }
      else {
        std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                  ((vector<void*,std::__ndk1::allocator<void*>> *)local_80,&local_68);
      }
      local_70 = local_70 + 1;
      if ((((*(uint *)((long)pvVar6 + 4) & 0x3f) != 9) || (*(long *)((long)pvVar6 + 8) == 0)) ||
         ((*(uint *)(*(long *)((long)pvVar6 + 8) + 4) & 0x7bf) != 0x1a9)) break;
      if (bVar2) {
        *(int *)(this + 0x334) = *(int *)(this + 0x334) + 1;
        *(ushort *)(*(long *)this + 0x81) = *(ushort *)(*(long *)this + 0x81) | 1;
        uVar5 = Scope::HasSimpleParameters(*(Scope **)this);
        if ((uVar5 & 1) == 0) {
          PendingCompilationErrorHandler::ReportMessageAt
                    (*(PendingCompilationErrorHandler **)(this + 0xb0),uVar14 & 0xffffffff,
                     uVar14 >> 0x20,0xf3,"use strict");
          lVar12 = *(long *)(this + 0x158);
          if (*(char *)(lVar12 + 0x30) == '\0') {
            *(undefined4 *)(this + 0x160) = 0xffffffff;
            *(undefined1 *)(lVar12 + 0x30) = 1;
            *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(lVar12 + 0x18);
            this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
            this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
            this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
          }
          goto LAB_0117077c;
        }
      }
      else if (bVar3) {
        *(int *)(this + 0x310) = *(int *)(this + 0x310) + 1;
        this_00 = (DeclarationScope *)Scope::AsDeclarationScope();
        DeclarationScope::set_is_asm_module(this_00);
        *(uint *)(*(long *)(this + 0x138) + 8) = *(uint *)(*(long *)(this + 0x138) + 8) | 0x8000;
      }
      else {
        lVar11 = *(long *)this;
        uVar1 = *(ushort *)(lVar11 + 0x81);
        lVar12 = 0x20;
        if ((uVar1 & 1) != 0) {
          lVar12 = 0x24;
        }
        *(int *)(this + lVar12 + 0x310) = *(int *)(this + lVar12 + 0x310) + 1;
        *(ushort *)(lVar11 + 0x81) = *(ushort *)(lVar11 + 0x81) & 0xfffe | uVar1 & 1;
      }
      puVar10 = *(ulong **)(*(long *)(this + 0xf8) + 8);
    } while ((char)puVar10[7] == 'Z');
    lVar12 = *(long *)(this + 0xf8);
  }
  uVar13 = *(undefined8 *)(this + 0x300);
  *(undefined8 *)(this + 0x300) = 0;
  lVar12 = *(long *)(lVar12 + 8);
  while ((*(char *)(lVar12 + 0x38) != '\r' &&
         (pvVar6 = (void *)ParseStatementListItem(this), pvVar6 != (void *)0x0))) {
    if ((*(uint *)((long)pvVar6 + 4) & 0x3f) != 10) {
      local_68 = pvVar6;
      if (*(long **)(local_80 + 8) < *(long **)(local_80 + 0x10)) {
        **(long **)(local_80 + 8) = (long)pvVar6;
        *(long *)(local_80 + 8) = *(long *)(local_80 + 8) + 8;
      }
      else {
        std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                  ((vector<void*,std::__ndk1::allocator<void*>> *)local_80,&local_68);
      }
      local_70 = local_70 + 1;
    }
    lVar12 = *(long *)(*(long *)(this + 0xf8) + 8);
  }
  *(undefined8 *)(this + 0x300) = uVar13;
LAB_0117077c:
  pZVar7 = *(Zone **)(this + 0x68);
  pBVar8 = *(Block **)(pZVar7 + 0x10);
  if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)pBVar8) < 0x20) {
    pBVar8 = (Block *)Zone::NewExpand(pZVar7,0x20);
  }
  else {
    *(Block **)(pZVar7 + 0x10) = pBVar8 + 0x20;
  }
  *(undefined8 *)(pBVar8 + 0x10) = 0;
  *(undefined8 *)(pBVar8 + 0x18) = 0;
  *(undefined8 *)pBVar8 = 0xc7ffffffff;
  *(undefined8 *)(pBVar8 + 8) = 0;
  ScopedList<v8::internal::Statement*,void*>::CopyTo
            ((ScopedList<v8::internal::Statement*,void*> *)&local_80,(ZoneList *)(pBVar8 + 8),
             *(Zone **)(this + 0x68));
  uVar14 = *(long *)(local_80 + 8) - *(long *)local_80 >> 3;
  if (local_78 < uVar14 || local_78 - uVar14 == 0) {
    if (local_78 < uVar14) {
      *(ulong *)(local_80 + 8) = *(long *)local_80 + local_78 * 8;
    }
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
              ((vector<void*,std::__ndk1::allocator<void*>> *)local_80,local_78 - uVar14);
  }
  pZVar7 = *(Zone **)(this + 0x68);
  pEVar9 = *(Expression **)(pZVar7 + 0x10);
  if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)pEVar9) < 0x10) {
    pEVar9 = (Expression *)Zone::NewExpand(pZVar7,0x10);
  }
  else {
    *(Expression **)(pZVar7 + 0x10) = pEVar9 + 0x10;
  }
  *(undefined8 *)pEVar9 = 0x329ffffffff;
  Parser::RewriteAsyncFunctionBody((Parser *)this,param_2,pBVar8,pEVar9);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
  return;
}

