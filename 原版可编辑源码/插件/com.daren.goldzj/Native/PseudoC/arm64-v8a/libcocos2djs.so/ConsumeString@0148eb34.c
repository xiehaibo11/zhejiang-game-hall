
/* v8::internal::AsmJsScanner::ConsumeString(int) */

void __thiscall v8::internal::AsmJsScanner::ConsumeString(AsmJsScanner *this,int param_1)

{
  byte *pbVar1;
  ulong uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = 0;
  do {
    plVar6 = *(long **)this;
    puVar4 = (ushort *)plVar6[2];
    if (puVar4 < (ushort *)plVar6[3]) {
LAB_0148eb6c:
      uVar5 = (uint)*puVar4;
    }
    else {
      if ((char)plVar6[6] == '\0') {
        uVar2 = (**(code **)(*plVar6 + 0x28))(plVar6);
        puVar4 = (ushort *)plVar6[2];
        if ((uVar2 & 1) != 0) goto LAB_0148eb6c;
      }
      uVar5 = 0xffffffff;
    }
    plVar6[2] = (long)(puVar4 + 1);
    if (lVar7 == 7) {
      if (uVar5 == param_1) {
        uVar3 = 0xffffd92f;
        goto LAB_0148ebd0;
      }
      goto LAB_0148ebcc;
    }
    pbVar1 = (byte *)("use asm" + lVar7);
    lVar7 = lVar7 + 1;
    if (uVar5 != *pbVar1) {
LAB_0148ebcc:
      uVar3 = 0xfffffffe;
LAB_0148ebd0:
      *(undefined4 *)(this + 8) = uVar3;
      return;
    }
  } while( true );
}

