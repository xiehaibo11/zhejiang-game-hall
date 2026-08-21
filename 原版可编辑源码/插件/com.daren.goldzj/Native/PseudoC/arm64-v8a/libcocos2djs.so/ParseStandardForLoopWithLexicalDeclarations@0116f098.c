
/* v8::internal::ParserBase<v8::internal::Parser>::ParseStandardForLoopWithLexicalDeclarations(int,
   v8::internal::Statement*, v8::internal::ParserBase<v8::internal::Parser>::ForInfo*,
   v8::internal::ZoneList<v8::internal::AstRawString const*>*,
   v8::internal::ZoneList<v8::internal::AstRawString const*>*) */

ForStatement * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseStandardForLoopWithLexicalDeclarations
          (ParserBase<v8::internal::Parser> *this,int param_1,Statement *param_2,ForInfo *param_3,
          ZoneList *param_4,ZoneList *param_5)

{
  uint uVar1;
  uint uVar2;
  Zone *pZVar3;
  ForStatement *pFVar4;
  Scope *this_00;
  ForStatement *pFVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  void *pvVar9;
  undefined8 uVar10;
  long lVar11;
  Statement *local_68;
  Statement *local_60;
  Expression *local_58;
  
  pZVar3 = *(Zone **)(this + 0xb8);
  uVar10 = *(undefined8 *)this;
  this_00 = *(Scope **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)this_00) < 0x88) {
    this_00 = (Scope *)Zone::NewExpand(pZVar3,0x88);
  }
  else {
    *(Scope **)(pZVar3 + 0x10) = this_00 + 0x88;
  }
  Scope::Scope(this_00,*(undefined8 *)(this + 0xb8),uVar10,6);
  local_58 = (Expression *)0x0;
  local_68 = (Statement *)0x0;
  local_60 = (Statement *)0x0;
  lVar11 = *(long *)this;
  *(Scope **)this = this_00;
  *(undefined4 *)(this_00 + 0x70) = *(undefined4 *)**(undefined8 **)(this + 0xf8);
  pFVar4 = (ForStatement *)
           ParseStandardForLoop(this,param_1,param_4,param_5,&local_58,&local_60,&local_68);
  if (*(char *)((*(long **)(this + 0xf8))[3] + 0x30) == '\0') {
    *(undefined4 *)(*(long *)this + 0x74) = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
    *(long *)this = lVar11;
    *(undefined4 *)(lVar11 + 0x74) = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
    if ((*(int *)(param_3 + 0xc) < 1) || (*(char *)(*(long *)(this + 0x10) + 0x3b) == '\0')) {
      Scope::FinalizeBlockScope(this_00);
      lVar11 = Scope::FinalizeBlockScope(*(Scope **)this);
      if (lVar11 == 0) {
        *(Statement **)(pFVar4 + 0x18) = local_68;
        *(Statement **)(pFVar4 + 0x20) = param_2;
        *(Expression **)(pFVar4 + 0x28) = local_58;
        *(Statement **)(pFVar4 + 0x30) = local_60;
      }
      else {
        pZVar3 = *(Zone **)(this + 0x68);
        pFVar5 = *(ForStatement **)(pZVar3 + 0x10);
        if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pFVar5) < 0x20) {
          pFVar5 = (ForStatement *)Zone::NewExpand(pZVar3,0x20);
        }
        else {
          *(ForStatement **)(pZVar3 + 0x10) = pFVar5 + 0x20;
        }
        pZVar3 = *(Zone **)(this + 0x68);
        *(undefined8 *)pFVar5 = 0x47ffffffff;
        puVar6 = *(undefined8 **)(pZVar3 + 0x10);
        if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar6) < 0x10) {
          puVar6 = (undefined8 *)Zone::NewExpand(pZVar3,0x10);
        }
        else {
          *(undefined8 **)(pZVar3 + 0x10) = puVar6 + 2;
        }
        *(undefined8 **)(pFVar5 + 8) = puVar6;
        *(undefined8 *)(pFVar5 + 0x18) = 0;
        *(undefined8 *)(pFVar5 + 0x10) = 0x100000002;
        *puVar6 = param_2;
        uVar2 = *(uint *)(pFVar5 + 0x10);
        uVar8 = *(uint *)(pFVar5 + 0x14);
        if ((int)uVar8 < (int)uVar2) {
          pvVar9 = *(void **)(pFVar5 + 8);
        }
        else {
          pZVar3 = *(Zone **)(this + 0xb8);
          uVar1 = uVar2 << 1 | 1;
          uVar7 = -(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
          pvVar9 = *(void **)(pZVar3 + 0x10);
          if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pvVar9) < uVar7) {
            pvVar9 = (void *)Zone::NewExpand(pZVar3,uVar7);
          }
          else {
            *(ulong *)(pZVar3 + 0x10) = (long)pvVar9 + uVar7;
          }
          uVar8 = *(uint *)(pFVar5 + 0x14);
          if (0 < (int)uVar8) {
            MemCopy(pvVar9,*(void **)(pFVar5 + 8),(ulong)uVar8 << 3);
            uVar8 = *(uint *)(pFVar5 + 0x14);
          }
          *(void **)(pFVar5 + 8) = pvVar9;
          *(uint *)(pFVar5 + 0x10) = uVar1;
        }
        *(uint *)(pFVar5 + 0x14) = uVar8 + 1;
        *(ForStatement **)((long)pvVar9 + (long)(int)uVar8 * 8) = pFVar4;
        *(long *)(pFVar5 + 0x18) = lVar11;
        *(Statement **)(pFVar4 + 0x18) = local_68;
        *(undefined8 *)(pFVar4 + 0x20) = 0;
        *(Expression **)(pFVar4 + 0x28) = local_58;
        *(Statement **)(pFVar4 + 0x30) = local_60;
        pFVar4 = pFVar5;
      }
    }
    else {
      *(ushort *)(*(long *)this + 0x81) = *(ushort *)(*(long *)this + 0x81) | 0x10;
      pFVar4 = (ForStatement *)
               Parser::DesugarLexicalBindingsInForStatement
                         ((Parser *)this,pFVar4,param_2,local_58,local_60,local_68,this_00,param_3);
    }
  }
  else {
    *(long *)this = lVar11;
    pFVar4 = (ForStatement *)0x0;
  }
  return pFVar4;
}

