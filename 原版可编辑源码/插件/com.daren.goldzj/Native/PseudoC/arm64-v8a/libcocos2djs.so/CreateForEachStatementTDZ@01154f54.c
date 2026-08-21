
/* v8::internal::Parser::CreateForEachStatementTDZ(v8::internal::Block*,
   v8::internal::ParserBase<v8::internal::Parser>::ForInfo const&) */

Block * __thiscall
v8::internal::Parser::CreateForEachStatementTDZ(Parser *this,Block *param_1,ForInfo *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  Zone *pZVar4;
  VariableProxy *this_00;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  Scope *pSVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 auStack_74 [4];
  char local_68 [4];
  char local_64 [4];
  
  if ((byte)param_2[0x18] < 2) {
    pZVar4 = *(Zone **)(this + 0x68);
    param_1 = *(Block **)(pZVar4 + 0x10);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)param_1) < 0x20) {
      param_1 = (Block *)Zone::NewExpand(pZVar4,0x20);
    }
    else {
      *(Block **)(pZVar4 + 0x10) = param_1 + 0x20;
    }
    pZVar4 = *(Zone **)(this + 0x68);
    *(undefined8 *)param_1 = 0x47ffffffff;
    lVar10 = *(long *)(pZVar4 + 0x10);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - lVar10) < 8) {
      lVar10 = Zone::NewExpand(pZVar4,8);
    }
    else {
      *(long *)(pZVar4 + 0x10) = lVar10 + 8;
    }
    *(long *)(param_1 + 8) = lVar10;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 1;
    if (*(int *)(param_2 + 0xc) != 0) {
      puVar9 = *(undefined8 **)param_2;
      lVar10 = (long)*(int *)(param_2 + 0xc) << 3;
      do {
        pZVar4 = *(Zone **)(this + 0x68);
        uVar7 = *puVar9;
        this_00 = *(VariableProxy **)(pZVar4 + 0x10);
        uVar2 = *(undefined4 *)**(undefined8 **)(this + 0xf8);
        if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)this_00) < 0x18) {
          this_00 = (VariableProxy *)Zone::NewExpand(pZVar4,0x18);
        }
        else {
          *(VariableProxy **)(pZVar4 + 0x10) = this_00 + 0x18;
        }
        *(undefined8 *)(this_00 + 8) = uVar7;
        *(undefined8 *)(this_00 + 0x10) = 0;
        *(undefined4 *)this_00 = uVar2;
        *(undefined4 *)(this_00 + 4) = 0x835;
        pZVar4 = *(Zone **)(this + 0x68);
        pSVar8 = *(Scope **)this;
        puVar5 = *(undefined8 **)(pZVar4 + 0x10);
        iVar3 = *(int *)(**(long **)(this + 0xf8) + 4);
        if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar5) < 0x18) {
          puVar5 = (undefined8 *)Zone::NewExpand(pZVar4,0x18);
        }
        else {
          *(undefined8 **)(pZVar4 + 0x10) = puVar5 + 3;
        }
        puVar5[2] = 0;
        *puVar5 = 0xffffffff;
        local_64[0] = '\x01';
        local_68[0] = '\0';
        Scope::DeclareVariable(pSVar8,puVar5,uVar7,0xffffffff,0,0,0,auStack_74,local_68,local_64);
        if (local_64[0] == '\0') {
          iVar1 = 0;
          if (iVar3 != -1) {
            iVar1 = iVar3;
          }
          PendingCompilationErrorHandler::ReportMessageAt
                    (*(PendingCompilationErrorHandler **)(this + 0xb0),0xffffffff,iVar1,0xb0,
                     *(undefined8 *)(puVar5[1] + 8));
          lVar6 = *(long *)(this + 0x158);
          if (*(char *)(lVar6 + 0x30) == '\0') {
            *(undefined4 *)(this + 0x160) = 0xffffffff;
            *(undefined1 *)(lVar6 + 0x30) = 1;
            *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar6 + 0x18);
            this[0x1a0] = (Parser)0x6d;
            this[0x1f0] = (Parser)0x6d;
            this[0x240] = (Parser)0x6d;
          }
        }
        else if (local_68[0] != '\0') {
          *(int *)(this + 0x368) = *(int *)(this + 0x368) + 1;
        }
        VariableProxy::BindTo(this_00,(Variable *)puVar5[1]);
        lVar10 = lVar10 + -8;
        puVar9 = puVar9 + 1;
        *(undefined4 *)(*(long *)(this_00 + 8) + 0x24) =
             *(undefined4 *)**(undefined8 **)(this + 0xf8);
      } while (lVar10 != 0);
    }
  }
  return param_1;
}

