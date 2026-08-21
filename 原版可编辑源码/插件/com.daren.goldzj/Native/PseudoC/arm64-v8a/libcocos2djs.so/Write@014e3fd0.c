
/* v8::internal::RelocInfoWriter::Write(v8::internal::RelocInfo const*) */

void __thiscall v8::internal::RelocInfoWriter::Write(RelocInfoWriter *this,RelocInfo *param_1)

{
  RelocInfo RVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 uVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  
  RVar1 = param_1[8];
  uVar2 = *(int *)param_1 - *(int *)(this + 8);
  if (RVar1 == (RelocInfo)0x0) {
    if (0x3f < uVar2) {
      lVar8 = *(long *)this;
      iVar9 = 0x47;
      uVar4 = uVar2 >> 6;
      while( true ) {
        *(long *)this = lVar8 + -1;
        *(char *)(lVar8 + -1) = (char)iVar9;
        if (uVar4 == 0) break;
        lVar8 = *(long *)this;
        iVar9 = uVar4 << 1;
        uVar4 = uVar4 >> 7;
      }
      uVar2 = uVar2 & 0x3f;
      **(byte **)this = **(byte **)this | 1;
    }
    lVar8 = *(long *)this;
    bVar6 = 1;
  }
  else {
    if (RVar1 != (RelocInfo)0x5) {
      uVar4 = (uint)(byte)RVar1;
      if (uVar4 == 3) {
        if (0x3f < uVar2) {
          lVar8 = *(long *)this;
          iVar9 = 0x47;
          uVar4 = uVar2 >> 6;
          while( true ) {
            *(long *)this = lVar8 + -1;
            *(char *)(lVar8 + -1) = (char)iVar9;
            if (uVar4 == 0) break;
            lVar8 = *(long *)this;
            iVar9 = uVar4 << 1;
            uVar4 = uVar4 >> 7;
          }
          uVar2 = uVar2 & 0x3f;
          **(byte **)this = **(byte **)this | 1;
        }
        lVar8 = *(long *)this;
        *(long *)this = lVar8 + -1;
        *(char *)(lVar8 + -1) = (char)(uVar2 << 2);
        goto LAB_014e4200;
      }
      if (0x3f < uVar2) {
        lVar8 = *(long *)this;
        iVar9 = 0x47;
        uVar7 = uVar2 >> 6;
        while( true ) {
          *(long *)this = lVar8 + -1;
          *(char *)(lVar8 + -1) = (char)iVar9;
          if (uVar7 == 0) break;
          lVar8 = *(long *)this;
          iVar9 = uVar7 << 1;
          uVar7 = uVar7 >> 7;
        }
        uVar2 = uVar2 & 0x3f;
        **(byte **)this = **(byte **)this | 1;
      }
      lVar8 = *(long *)this;
      *(long *)this = lVar8 + -1;
      *(byte *)(lVar8 + -1) = (char)RVar1 << 2 | 3;
      lVar8 = *(long *)this;
      *(long *)this = lVar8 + -1;
      *(char *)(lVar8 + -1) = (char)uVar2;
      if ((uVar4 - 0xb < 2) || (uVar4 == 0x10)) {
LAB_014e41b0:
        lVar8 = *(long *)this;
        uVar5 = *(undefined8 *)(param_1 + 0x10);
        *(long *)this = lVar8 + -1;
        *(char *)(lVar8 + -1) = (char)uVar5;
        lVar8 = *(long *)this;
        *(long *)this = lVar8 + -1;
        *(char *)(lVar8 + -1) = (char)((ulong)uVar5 >> 8);
        lVar8 = *(long *)this;
        uVar3 = (undefined1)((ulong)uVar5 >> 0x18);
        *(long *)this = lVar8 + -1;
        *(char *)(lVar8 + -1) = (char)((ulong)uVar5 >> 0x10);
        lVar8 = *(long *)this;
      }
      else {
        if ((byte)RVar1 != 0xf) {
          if (1 < (byte)RVar1 - 0xd) goto LAB_014e4200;
          goto LAB_014e41b0;
        }
        lVar8 = *(long *)this;
        uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x10);
      }
      *(long *)this = lVar8 + -1;
      *(undefined1 *)(lVar8 + -1) = uVar3;
      goto LAB_014e4200;
    }
    if (0x3f < uVar2) {
      lVar8 = *(long *)this;
      iVar9 = 0x47;
      uVar4 = uVar2 >> 6;
      while( true ) {
        *(long *)this = lVar8 + -1;
        *(char *)(lVar8 + -1) = (char)iVar9;
        if (uVar4 == 0) break;
        lVar8 = *(long *)this;
        iVar9 = uVar4 << 1;
        uVar4 = uVar4 >> 7;
      }
      uVar2 = uVar2 & 0x3f;
      **(byte **)this = **(byte **)this | 1;
    }
    lVar8 = *(long *)this;
    bVar6 = 2;
  }
  *(long *)this = lVar8 + -1;
  *(byte *)(lVar8 + -1) = bVar6 | (byte)(uVar2 << 2);
LAB_014e4200:
  *(undefined8 *)(this + 8) = *(undefined8 *)param_1;
  return;
}

