
/* v8::internal::Code::CanDeoptAt(unsigned long) */

undefined8 __thiscall v8::internal::Code::CanDeoptAt(Code *this,ulong param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  undefined8 local_40;
  ulong uStack_38;
  
  uVar5 = *(ulong *)this;
  uVar8 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 7);
  if (*(int *)(uVar5 + 0x17) < 0) {
    lVar3 = Isolate::CurrentEmbeddedBlob();
    if (lVar3 != 0) {
      uVar4 = Isolate::CurrentEmbeddedBlob();
      uStack_38 = Isolate::CurrentEmbeddedBlobSize();
      uStack_38 = uStack_38 & 0xffffffff;
      local_40 = uVar4;
      lVar3 = EmbeddedData::InstructionStartOfBuiltin
                        ((EmbeddedData *)&local_40,*(int *)(*(long *)this + 0x27));
      goto LAB_01072590;
    }
    uVar5 = *(ulong *)this;
  }
  lVar3 = uVar5 + 0x3f;
LAB_01072590:
  iVar2 = *(int *)(uVar8 + 3);
  if (0x17 < iVar2) {
    lVar6 = 0;
    lVar1 = uVar8 + 7;
    iVar7 = 0x24;
    do {
      if (((*(uint *)(lVar1 + (iVar7 + 8)) < 0xfffffffe) &&
          (lVar3 + (*(int *)((iVar7 + 8) + lVar1) >> 1) == param_1)) &&
         (*(uint *)(lVar1 + iVar7) < 0xfffffffe)) {
        return 1;
      }
      lVar6 = lVar6 + 1;
      iVar7 = iVar7 + 0xc;
    } while (lVar6 < ((iVar2 >> 1) + -9) / 3);
  }
  return 0;
}

