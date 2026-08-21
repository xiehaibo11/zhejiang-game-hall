
/* v8::internal::EhFrameWriter::WriteByte(unsigned char) */

void __thiscall v8::internal::EhFrameWriter::WriteByte(EhFrameWriter *this,uchar param_1)

{
  uchar *puVar1;
  long lVar2;
  ulong uVar3;
  Zone *this_00;
  uchar *puVar4;
  long lVar5;
  uchar *puVar6;
  uchar *puVar7;
  uchar *puVar8;
  
  puVar4 = *(uchar **)(this + 0x28);
  if (puVar4 == *(uchar **)(this + 0x30)) {
    lVar5 = *(long *)(this + 0x20);
    puVar1 = puVar4 + (1 - lVar5);
    if ((ulong)puVar1 >> 0x1f != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar3 = (long)*(uchar **)(this + 0x30) - lVar5;
    puVar7 = (uchar *)(uVar3 * 2);
    if (puVar1 <= puVar7) {
      puVar1 = puVar7;
    }
    if (0x3ffffffe < uVar3) {
      puVar1 = (uchar *)0x7fffffff;
    }
    if (puVar1 == (uchar *)0x0) {
      lVar2 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x38);
      uVar3 = (ulong)(puVar1 + 7) & 0xfffffffffffffff8;
      lVar2 = *(long *)(this_00 + 0x10);
      if ((ulong)(*(long *)(this_00 + 0x18) - lVar2) < uVar3) {
        lVar2 = Zone::NewExpand(this_00,uVar3);
      }
      else {
        *(ulong *)(this_00 + 0x10) = lVar2 + uVar3;
      }
    }
    puVar4 = puVar4 + (lVar2 - lVar5);
    puVar6 = puVar4 + 1;
    *puVar4 = param_1;
    puVar7 = *(uchar **)(this + 0x20);
    puVar8 = *(uchar **)(this + 0x28);
    while (puVar8 != puVar7) {
      puVar8 = puVar8 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar8;
    }
    *(uchar **)(this + 0x20) = puVar4;
    *(uchar **)(this + 0x28) = puVar6;
    *(uchar **)(this + 0x30) = puVar1 + lVar2;
  }
  else {
    *puVar4 = param_1;
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  }
  return;
}

