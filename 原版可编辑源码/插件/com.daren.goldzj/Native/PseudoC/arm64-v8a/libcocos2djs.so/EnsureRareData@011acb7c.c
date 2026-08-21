
/* v8::internal::CodeEntry::EnsureRareData() */

void __thiscall v8::internal::CodeEntry::EnsureRareData(CodeEntry *this)

{
  undefined8 *puVar1;
  
  if (*(long *)(this + 0x38) == 0) {
    puVar1 = operator_new(0x80);
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    *puVar1 = &DAT_0189703a;
    puVar1[1] = &DAT_0189703a;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 7) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0xc) = 0x3f800000;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    *(undefined8 **)(this + 0x38) = puVar1;
  }
  return;
}

