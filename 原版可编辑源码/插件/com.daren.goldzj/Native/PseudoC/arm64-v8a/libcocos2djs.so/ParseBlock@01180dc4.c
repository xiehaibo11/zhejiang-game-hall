
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseBlock(v8::internal::ZoneList<v8::internal::AstRawString
   const*>*) */

undefined1  [16] v8::internal::ParserBase<v8::internal::PreParser>::ParseBlock(ZoneList *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  Scope *pSVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  Zone *this;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  uVar3 = GetCurrentStackPosition();
  if (uVar3 < *(ulong *)(param_1 + 0x78)) {
    lVar6 = *(long *)(param_1 + 200);
    lVar7 = *(long *)(lVar6 + 0x18);
    if (*(char *)(lVar7 + 0x30) == '\0') {
      *(undefined4 *)(lVar6 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar7 + 0x30) = 1;
      *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar7 + 0x18);
      *(undefined1 *)(lVar6 + 0x60) = 0x6d;
      *(undefined1 *)(lVar6 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar6 + 0x100) = 0x6d;
    }
    **(undefined2 **)(param_1 + 0x80) = 0x101;
  }
  this = *(Zone **)(param_1 + 0x88);
  pSVar4 = *(Scope **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)pSVar4) < 0x88) {
    pSVar4 = (Scope *)Zone::NewExpand(this,0x88);
  }
  else {
    *(Scope **)(this + 0x10) = pSVar4 + 0x88;
  }
  Scope::Scope(pSVar4,this,*(undefined8 *)param_1,6);
  uVar8 = *(undefined8 *)param_1;
  *(Scope **)param_1 = pSVar4;
  *(undefined4 *)(pSVar4 + 0x70) = **(undefined4 **)(*(long *)(param_1 + 200) + 8);
  uVar1 = Scanner::Next(*(Scanner **)(param_1 + 200));
  if ((uVar1 & 0xff) != 8) {
    ReportUnexpectedToken(param_1,uVar1);
  }
  do {
    if (*(char *)(*(long *)(*(Scanner **)(param_1 + 200) + 8) + 0x38) == '\r') {
      uVar1 = Scanner::Next(*(Scanner **)(param_1 + 200));
      if ((uVar1 & 0xff) != 0xd) {
        ReportUnexpectedToken(param_1,uVar1);
      }
      *(undefined4 *)(*(long *)param_1 + 0x74) = *(undefined4 *)(**(long **)(param_1 + 200) + 4);
      uVar5 = Scope::FinalizeBlockScope(*(Scope **)param_1);
      goto LAB_01180ee0;
    }
    iVar2 = ParseStatementListItem((ParserBase<v8::internal::PreParser> *)param_1);
  } while (iVar2 != 0);
  uVar5 = 0;
LAB_01180ee0:
  *(undefined8 *)param_1 = uVar8;
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = 2;
  return auVar9;
}

