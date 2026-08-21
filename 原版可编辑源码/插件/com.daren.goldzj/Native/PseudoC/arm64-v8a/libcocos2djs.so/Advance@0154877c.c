
/* v8::internal::RegExpParser::Advance() */

void __thiscall v8::internal::RegExpParser::Advance(RegExpParser *this)

{
  int iVar1;
  ulong uVar2;
  size_t sVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  char *local_30;
  long lStack_28;
  
  if (*(int *)(this + 0x40) < *(int *)(*(long *)(this + 0x30) + 0x24)) {
    lVar9 = *(long *)this;
    uVar2 = GetCurrentStackPosition();
    if (uVar2 < *(ulong *)(lVar9 + 0x58)) {
      if (FLAG_correctness_fuzzer_suppressions != '\0') {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Aborting on stack overflow");
      }
      local_30 = (char *)MessageFormatter::TemplateString(0xd9);
      if (this[0x51] != (RegExpParser)0x0) {
        return;
      }
      sVar3 = strlen(local_30);
      uVar5 = *(undefined8 *)this;
      this[0x51] = (RegExpParser)0x1;
      iVar1 = (int)sVar3;
    }
    else {
      if (*(ulong *)(*(long *)(this + 8) + 8) < 0x10000001) {
        lVar8 = *(long *)(this + 0x30);
        lVar9 = (long)*(int *)(this + 0x40);
        if (*(char *)(lVar8 + 0x20) == '\0') {
          lVar7 = *(long *)(lVar8 + 0x28);
          uVar4 = (uint)*(ushort *)(lVar7 + lVar9 * 2);
        }
        else {
          lVar7 = *(long *)(lVar8 + 0x28);
          uVar4 = (uint)*(byte *)(lVar7 + lVar9);
        }
        uVar2 = lVar9 + 1;
        if (((((byte)this[0x3c] >> 4 & 1) != 0) && ((uVar4 & 0xfc00) == 0xd800)) &&
           ((int)uVar2 < *(int *)(lVar8 + 0x24))) {
          if (*(char *)(lVar8 + 0x20) == '\0') {
            uVar6 = (uint)*(ushort *)(lVar7 + uVar2 * 2);
          }
          else {
            uVar6 = (uint)*(byte *)(lVar7 + uVar2);
          }
          if ((uVar6 & 0xfc00) == 0xdc00) {
            uVar4 = (uVar6 & 0x3ff | (uVar4 & 0x3ff) << 10) + 0x10000;
            uVar2 = (ulong)(*(int *)(this + 0x40) + 2);
          }
        }
        *(int *)(this + 0x40) = (int)uVar2;
        *(uint *)(this + 0x38) = uVar4;
        return;
      }
      if (FLAG_correctness_fuzzer_suppressions != '\0') {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Aborting on excess zone allocation");
      }
      iVar1 = __strlen_chk("Regular expression too large",0x1d);
      if (this[0x51] != (RegExpParser)0x0) {
        return;
      }
      uVar5 = *(undefined8 *)this;
      this[0x51] = (RegExpParser)0x1;
      local_30 = "Regular expression too large";
    }
    lStack_28 = (long)iVar1;
    lVar9 = Factory::NewStringFromOneByte(uVar5,&local_30,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    **(long **)(this + 0x10) = lVar9;
    *(undefined4 *)(this + 0x38) = 0x200000;
    iVar1 = *(int *)(*(long *)(this + 0x30) + 0x24);
  }
  else {
    *(undefined4 *)(this + 0x38) = 0x200000;
    iVar1 = *(int *)(*(long *)(this + 0x30) + 0x24);
    this[0x4c] = (RegExpParser)0x0;
    iVar1 = iVar1 + 1;
  }
  *(int *)(this + 0x40) = iVar1;
  return;
}

