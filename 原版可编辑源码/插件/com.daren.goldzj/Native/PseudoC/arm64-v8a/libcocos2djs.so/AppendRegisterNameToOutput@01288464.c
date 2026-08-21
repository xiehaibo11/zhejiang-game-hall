
/* v8::internal::DisassemblingDecoder::AppendRegisterNameToOutput(v8::internal::CPURegister const&)
    */

void __thiscall
v8::internal::DisassemblingDecoder::AppendRegisterNameToOutput
          (DisassemblingDecoder *this,CPURegister *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    uVar6 = 0x77;
    if (iVar2 == 0x40) {
      uVar6 = 0x78;
    }
    uVar4 = (ulong)uVar6;
  }
  else {
    uVar6 = iVar2 - 8U >> 3 | iVar2 << 0x1d;
    if (uVar6 < 8) {
      uVar4 = (ulong)*(uint *)(&DAT_019f7a40 + (long)(int)uVar6 * 4);
    }
    else {
      uVar4 = 0x71;
    }
    if (iVar3 == 1) {
      uVar5 = (ulong)*(uint *)param_1;
      goto LAB_012884b4;
    }
  }
  uVar6 = *(uint *)param_1;
  uVar5 = (ulong)uVar6;
  if (uVar6 == 0x1f) {
    if (iVar3 != 0) {
      AppendToOutput((char *)this,&DAT_019f627e,uVar4,0x1f);
      return;
    }
    AppendToOutput((char *)this,&DAT_019f6287,uVar4);
    return;
  }
  if (uVar6 == 0x3f) {
    if (iVar3 != 0) {
      AppendToOutput((char *)this,&DAT_019f627e,uVar4,0x3f);
      return;
    }
    pcVar1 = "sp";
    if (iVar2 != 0x40) {
      pcVar1 = "wsp";
    }
    AppendToOutput((char *)this,"%s",pcVar1);
    return;
  }
  if ((iVar3 == 0) && (iVar2 == 0x40)) {
    if (uVar6 == 0x1e) {
      AppendToOutput((char *)this,&DAT_019f4715,uVar4);
      return;
    }
    if (uVar6 == 0x1d) {
      AppendToOutput((char *)this,&DAT_018d2495,uVar4);
      return;
    }
    if (uVar6 == 0x1b) {
      AppendToOutput((char *)this,"cp",uVar4);
      return;
    }
  }
LAB_012884b4:
  AppendToOutput((char *)this,&DAT_019f627e,uVar4,uVar5);
  return;
}

