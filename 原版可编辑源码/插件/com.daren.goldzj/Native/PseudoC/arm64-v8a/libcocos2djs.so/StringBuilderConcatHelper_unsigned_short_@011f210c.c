
/* void v8::internal::StringBuilderConcatHelper<unsigned short>(v8::internal::String, unsigned
   short*, v8::internal::FixedArray, int) */

void v8::internal::StringBuilderConcatHelper<unsigned_short>
               (ulong param_1,long param_2,ulong param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if (0 < param_4) {
    iVar6 = 0;
    iVar7 = 0;
    do {
      uVar5 = *(uint *)(param_3 + 7 + (long)(iVar7 << 2));
      if ((uVar5 & 1) == 0) {
        if ((int)uVar5 < 2) {
          iVar7 = iVar7 + 1;
          uVar5 = -((int)uVar5 >> 1);
          uVar4 = *(int *)(param_3 + 7 + (long)(iVar7 * 4)) >> 1;
        }
        else {
          uVar4 = (uint)((int)uVar5 >> 1) >> 0xb;
          uVar5 = uVar5 >> 1 & 0x7ff;
        }
        lVar1 = (long)iVar6 << 1;
        uVar3 = param_1;
        uVar2 = uVar4 + uVar5;
      }
      else {
        uVar3 = param_3 & 0xffffffff00000000 | (ulong)uVar5;
        uVar5 = *(uint *)(uVar3 + 7);
        lVar1 = (long)iVar6 * 2;
        uVar4 = 0;
        uVar2 = uVar5;
      }
      String::WriteToFlat<unsigned_short>(uVar3,param_2 + lVar1,uVar4,uVar2);
      iVar7 = iVar7 + 1;
      iVar6 = uVar5 + iVar6;
    } while (iVar7 < param_4);
  }
  return;
}

