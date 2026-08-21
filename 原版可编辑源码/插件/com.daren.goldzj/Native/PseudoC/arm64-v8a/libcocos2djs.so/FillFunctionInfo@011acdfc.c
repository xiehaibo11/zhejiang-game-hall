
/* v8::internal::CodeEntry::FillFunctionInfo(v8::internal::SharedFunctionInfo) */

void __thiscall v8::internal::CodeEntry::FillFunctionInfo(CodeEntry *this,ulong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_28;
  
  uVar5 = param_2 & 0xffffffff00000000;
  uVar3 = uVar5 | *(uint *)(param_2 + 0xf);
  uVar6 = uVar3;
  if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x5b) {
    uVar6 = uVar5 | *(uint *)(uVar3 + 0xb);
  }
  if (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x65) {
    if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x5b) {
      uVar3 = uVar5 | *(uint *)(uVar3 + 0xb);
    }
    *(int *)(this + 0x20) = *(int *)(uVar3 + 0x1f) >> 1;
    local_28 = param_2;
    uVar1 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_28);
    *(undefined4 *)(this + 0x24) = uVar1;
    if ((*(uint *)(local_28 + 0x1b) & 0xf00000) != 0) {
      uVar2 = GetBailoutReason(*(uint *)(local_28 + 0x1b) >> 0x14 & 0xf);
      puVar4 = *(undefined8 **)(this + 0x38);
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = operator_new(0x80);
        puVar4[1] = 0;
        *puVar4 = 0;
        puVar4[3] = 0;
        puVar4[2] = 0;
        *puVar4 = &DAT_0189703a;
        puVar4[1] = &DAT_0189703a;
        *(undefined4 *)(puVar4 + 2) = 0xffffffff;
        puVar4[5] = 0;
        puVar4[4] = 0;
        puVar4[7] = 0;
        puVar4[6] = 0;
        puVar4[0xd] = 0;
        puVar4[0xc] = 0;
        puVar4[0xf] = 0;
        puVar4[0xe] = 0;
        puVar4[9] = 0;
        puVar4[8] = 0;
        puVar4[0xb] = 0;
        puVar4[10] = 0;
        puVar4[4] = 0;
        puVar4[3] = 0;
        puVar4[6] = 0;
        puVar4[5] = 0;
        *(undefined4 *)(puVar4 + 7) = 0x3f800000;
        *(undefined4 *)(puVar4 + 0xc) = 0x3f800000;
        puVar4[0xd] = 0;
        puVar4[0xe] = 0;
        puVar4[0xf] = 0;
        *(undefined8 **)(this + 0x38) = puVar4;
      }
      puVar4[1] = uVar2;
    }
  }
  return;
}

