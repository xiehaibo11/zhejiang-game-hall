
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseArrayLiteral() */

uint __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseArrayLiteral
          (ParserBase<v8::internal::PreParser> *this)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  Scanner *this_00;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ParserBase<v8::internal::PreParser> PVar13;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  Scanner::Next(*(Scanner **)(this + 200));
  lVar8 = *(long *)(this + 0x90);
  local_80 = 0;
  local_70 = 0;
  uStack_68 = 0;
  if (*(byte *)(lVar8 + 0x10) < 3) {
    local_78 = *(undefined8 *)(lVar8 + 0x30);
    uStack_68 = *(ulong *)(lVar8 + 0x40);
    local_70 = *(ulong *)(lVar8 + 0x38);
    *(undefined8 *)(lVar8 + 0x30) = 0;
    *(undefined8 *)(lVar8 + 0x40) = 0xffffffff;
    *(undefined8 *)(lVar8 + 0x38) = 0xffffffff;
    local_80 = lVar8;
  }
  this_00 = *(Scanner **)(this + 200);
  cVar4 = *(char *)(*(long *)(this_00 + 8) + 0x38);
  while (cVar4 != '\a') {
    if (cVar4 == '\x1e') {
      uVar5 = 2;
    }
    else {
      if (cVar4 == '\n') {
        Scanner::Next(this_00);
        PVar13 = this[0x100];
        uVar2 = *(undefined4 *)**(undefined8 **)(this + 200);
        this[0x100] = (ParserBase<v8::internal::PreParser>)0x1;
        uVar7 = ParsePossibleDestructuringSubPattern(this,(AccumulationScope *)&local_80);
        if ((uVar7 & 0xf7) == 0x92) {
          plVar9 = *(long **)(this + 0x90);
          uVar3 = *(undefined4 *)(**(long **)(this + 200) + 4);
          if (*(byte *)(plVar9 + 2) - 3 < 3) {
            lVar8 = *plVar9;
            PendingCompilationErrorHandler::ReportMessageAt
                      (*(PendingCompilationErrorHandler **)(lVar8 + 0x80),uVar2,uVar3,0xfd,0);
            lVar8 = *(long *)(lVar8 + 200);
            lVar10 = *(long *)(lVar8 + 0x18);
            if (*(char *)(lVar10 + 0x30) == '\0') {
              *(undefined4 *)(lVar8 + 0x20) = 0xffffffff;
              *(undefined1 *)(lVar10 + 0x30) = 1;
              *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar10 + 0x18);
              *(undefined1 *)(lVar8 + 0x60) = 0x6d;
              *(undefined1 *)(lVar8 + 0xb0) = 0x6d;
              *(undefined1 *)(lVar8 + 0x100) = 0x6d;
            }
          }
          else if (*(uint *)((long)plVar9 + 0x44) < *(uint *)(plVar9 + 8)) {
            *(undefined4 *)((long)plVar9 + 0x34) = 0xfd;
            plVar9[8] = CONCAT44(uVar3,uVar2);
          }
        }
        if (*(char *)((*(long **)(this + 200))[1] + 0x38) == '\x1e') {
          plVar9 = *(long **)(this + 0x90);
          uVar3 = *(undefined4 *)(**(long **)(this + 200) + 4);
          if (*(byte *)(plVar9 + 2) - 3 < 3) {
            lVar8 = *plVar9;
            PendingCompilationErrorHandler::ReportMessageAt
                      (*(PendingCompilationErrorHandler **)(lVar8 + 0x80),uVar2,uVar3,0x11b,0);
            lVar8 = *(long *)(lVar8 + 200);
            lVar10 = *(long *)(lVar8 + 0x18);
            if (*(char *)(lVar10 + 0x30) == '\0') {
              *(undefined4 *)(lVar8 + 0x20) = 0xffffffff;
              *(undefined1 *)(lVar10 + 0x30) = 1;
              uVar5 = 5;
              *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar10 + 0x18);
              *(undefined1 *)(lVar8 + 0x60) = 0x6d;
              *(undefined1 *)(lVar8 + 0xb0) = 0x6d;
              *(undefined1 *)(lVar8 + 0x100) = 0x6d;
              goto LAB_0117a974;
            }
          }
          else if (*(uint *)((long)plVar9 + 0x44) < *(uint *)(plVar9 + 8)) {
            *(undefined4 *)((long)plVar9 + 0x34) = 0x11b;
            plVar9[8] = CONCAT44(uVar3,uVar2);
          }
        }
        uVar5 = 5;
      }
      else {
        PVar13 = this[0x100];
        this[0x100] = (ParserBase<v8::internal::PreParser>)0x1;
        uVar5 = ParsePossibleDestructuringSubPattern(this,(AccumulationScope *)&local_80);
      }
LAB_0117a974:
      this[0x100] = PVar13;
    }
    this_00 = *(Scanner **)(this + 200);
    if (*(char *)(*(long *)(this_00 + 8) + 0x38) == '\a') break;
    uVar6 = Scanner::Next(this_00);
    if ((uVar6 & 0xff) != 0x1e) {
      ReportUnexpectedToken(this,uVar6);
    }
    if ((uVar5 & 7) == 1) goto LAB_0117a9d8;
    this_00 = *(Scanner **)(this + 200);
    cVar4 = *(char *)(*(long *)(this_00 + 8) + 0x38);
  }
  Scanner::Next(this_00);
  uVar5 = 7;
LAB_0117a9d8:
  if (local_80 != 0) {
    uVar7 = local_70 & 0xffffffff;
    bVar1 = local_70._4_4_ < (uint)local_70;
    uVar6 = local_70._4_4_;
    if (bVar1) {
      local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(local_80 + 0x30));
      uVar7 = *(ulong *)(local_80 + 0x38);
      uVar6 = (uint)(uVar7 >> 0x20);
      local_70 = uVar7;
    }
    *(undefined4 *)(local_80 + 0x30) = 0;
    *(undefined8 *)(local_80 + 0x38) = 0xffffffff;
    uVar11 = uStack_68 & 0xffffffff;
    bVar1 = uStack_68._4_4_ < (uint)uStack_68;
    uVar12 = uStack_68._4_4_;
    if (bVar1) {
      local_78 = CONCAT44(*(undefined4 *)(local_80 + 0x34),(undefined4)local_78);
      uVar11 = *(ulong *)(local_80 + 0x40);
      uVar12 = (uint)(uVar11 >> 0x20);
      uStack_68 = uVar11;
    }
    *(undefined4 *)(local_80 + 0x34) = 0;
    *(undefined8 *)(local_80 + 0x40) = 0xffffffff;
    if ((uint)uVar7 <= uVar6) {
      *(undefined4 *)(local_80 + 0x30) = (undefined4)local_78;
      *(ulong *)(local_80 + 0x38) = local_70;
    }
    if ((uint)uVar11 <= uVar12) {
      *(undefined4 *)(local_80 + 0x34) = local_78._4_4_;
      *(ulong *)(local_80 + 0x40) = uStack_68;
    }
  }
  return uVar5;
}

