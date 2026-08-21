
/* void v8::internal::StringBuilderConcatHelper<unsigned char>(v8::internal::String, unsigned char*,
   v8::internal::FixedArray, int) */

void v8::internal::StringBuilderConcatHelper<unsigned_char>
               (ulong param_1,long param_2,ulong param_3,int param_4)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (0 < param_4) {
    iVar5 = 0;
    iVar6 = 0;
    do {
      uVar4 = *(uint *)(param_3 + 7 + (long)(iVar6 << 2));
      if ((uVar4 & 1) == 0) {
        if ((int)uVar4 < 2) {
          iVar6 = iVar6 + 1;
          uVar4 = -((int)uVar4 >> 1);
          uVar3 = *(int *)(param_3 + 7 + (long)(iVar6 * 4)) >> 1;
        }
        else {
          uVar3 = (uint)((int)uVar4 >> 1) >> 0xb;
          uVar4 = uVar4 >> 1 & 0x7ff;
        }
        uVar2 = param_1;
        uVar1 = uVar3 + uVar4;
      }
      else {
        uVar2 = param_3 & 0xffffffff00000000 | (ulong)uVar4;
        uVar4 = *(uint *)(uVar2 + 7);
        uVar3 = 0;
        uVar1 = uVar4;
      }
      String::WriteToFlat<unsigned_char>(uVar2,param_2 + iVar5,uVar3,uVar1);
      iVar6 = iVar6 + 1;
      iVar5 = uVar4 + iVar5;
    } while (iVar6 < param_4);
  }
  return;
}

