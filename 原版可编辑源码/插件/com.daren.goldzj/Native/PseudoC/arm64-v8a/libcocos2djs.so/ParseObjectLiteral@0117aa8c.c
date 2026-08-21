
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseObjectLiteral() */

void __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseObjectLiteral
          (ParserBase<v8::internal::PreParser> *this)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  bool local_84 [4];
  long *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined4 local_5f;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar2 = **(undefined4 **)(*(Scanner **)(this + 200) + 8);
  local_84[0] = false;
  Scanner::Next(*(Scanner **)(this + 200));
  lVar8 = *(long *)(this + 0x90);
  local_a8 = 0;
  local_98 = 0;
  uStack_90 = 0;
  if (*(byte *)(lVar8 + 0x10) < 3) {
    local_a0 = *(undefined8 *)(lVar8 + 0x30);
    uStack_90 = *(ulong *)(lVar8 + 0x40);
    local_98 = *(ulong *)(lVar8 + 0x38);
    *(undefined8 *)(lVar8 + 0x30) = 0;
    *(undefined8 *)(lVar8 + 0x40) = 0xffffffff;
    *(undefined8 *)(lVar8 + 0x38) = 0xffffffff;
    local_a8 = lVar8;
  }
  if (*(char *)(*(long *)(*(Scanner **)(this + 200) + 8) + 0x38) == '\r') {
    Scanner::Next(*(Scanner **)(this + 200));
  }
  else {
    bVar4 = 0;
    uVar13 = 0xffffffff;
    do {
      local_78 = 0;
      uStack_70 = 0;
      local_60 = 9;
      local_5f = 0;
      local_68 = 0;
      local_80 = &local_a8;
      uVar10 = ParseObjectPropertyDefinition(this,(ParsePropertyInfo *)&local_80,local_84);
      if ((uVar10 & 7) == 0) {
        uVar7 = 1;
        if (local_a8 == 0) goto LAB_0117ac60;
        goto LAB_0117abd8;
      }
      bVar4 = bVar4 | local_5f._3_1_ != '\0';
      if ((*(char *)(*(long *)(*(Scanner **)(this + 200) + 8) + 0x38) != '\r') &&
         (uVar6 = Scanner::Next(*(Scanner **)(this + 200)), (uVar6 & 0xff) != 0x1e)) {
        ReportUnexpectedToken(this,uVar6);
      }
      uVar13 = uVar13 + 1;
    } while (*(char *)(*(long *)(*(Scanner **)(this + 200) + 8) + 0x38) != '\r');
    Scanner::Next(*(Scanner **)(this + 200));
    if (!(bool)(uVar13 < 0xfffe | bVar4 ^ 1)) {
      plVar9 = *(long **)(this + 0x90);
      uVar3 = *(undefined4 *)**(undefined8 **)(this + 200);
      if (*(byte *)(plVar9 + 2) - 3 < 3) {
        lVar8 = *plVar9;
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(lVar8 + 0x80),uVar2,uVar3,0x132,0);
        lVar8 = *(long *)(lVar8 + 200);
        lVar11 = *(long *)(lVar8 + 0x18);
        if (*(char *)(lVar11 + 0x30) == '\0') {
          *(undefined4 *)(lVar8 + 0x20) = 0xffffffff;
          *(undefined1 *)(lVar11 + 0x30) = 1;
          *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
          *(undefined1 *)(lVar8 + 0x60) = 0x6d;
          *(undefined1 *)(lVar8 + 0xb0) = 0x6d;
          *(undefined1 *)(lVar8 + 0x100) = 0x6d;
        }
      }
      else if (*(uint *)((long)plVar9 + 0x44) < *(uint *)(plVar9 + 8)) {
        *(undefined4 *)((long)plVar9 + 0x34) = 0x132;
        plVar9[8] = CONCAT44(uVar3,uVar2);
      }
    }
  }
  uVar7 = 6;
  if (local_a8 != 0) {
LAB_0117abd8:
    uVar10 = local_98 & 0xffffffff;
    bVar1 = local_98._4_4_ < (uint)local_98;
    uVar13 = local_98._4_4_;
    if (bVar1) {
      local_a0 = CONCAT44(local_a0._4_4_,*(undefined4 *)(local_a8 + 0x30));
      uVar10 = *(ulong *)(local_a8 + 0x38);
      uVar13 = (uint)(uVar10 >> 0x20);
      local_98 = uVar10;
    }
    *(undefined4 *)(local_a8 + 0x30) = 0;
    *(undefined8 *)(local_a8 + 0x38) = 0xffffffff;
    uVar12 = uStack_90 & 0xffffffff;
    bVar1 = uStack_90._4_4_ < (uint)uStack_90;
    uVar6 = uStack_90._4_4_;
    if (bVar1) {
      local_a0 = CONCAT44(*(undefined4 *)(local_a8 + 0x34),(undefined4)local_a0);
      uVar12 = *(ulong *)(local_a8 + 0x40);
      uVar6 = (uint)(uVar12 >> 0x20);
      uStack_90 = uVar12;
    }
    *(undefined4 *)(local_a8 + 0x34) = 0;
    *(undefined8 *)(local_a8 + 0x40) = 0xffffffff;
    if ((uint)uVar10 <= uVar13) {
      *(undefined4 *)(local_a8 + 0x30) = (undefined4)local_a0;
      *(ulong *)(local_a8 + 0x38) = local_98;
    }
    if ((uint)uVar12 <= uVar6) {
      *(undefined4 *)(local_a8 + 0x34) = local_a0._4_4_;
      *(ulong *)(local_a8 + 0x40) = uStack_90;
    }
  }
LAB_0117ac60:
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

