
/* int v8::internal::FastAsciiConvert<false>(char*, char const*, int, bool*) */

int v8::internal::FastAsciiConvert<false>(char *param_1,char *param_2,int param_3,bool *param_4)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = (int)param_2;
  puVar1 = (uint *)(param_2 + param_3);
  if (((ulong)param_2 & 3) == 0) {
    for (; param_2 <= puVar1 + -1; param_2 = (char *)((long)param_2 + 4)) {
      uVar3 = *(uint *)param_2;
      if ((uVar3 & 0x80808080) != 0) goto LAB_015c4478;
      if ((uVar3 + 0x1f1f1f1f & 0x80808080 & 0xfafafafa - uVar3) != 0) {
        bVar7 = true;
        goto joined_r0x015c4420;
      }
      *(uint *)param_1 = uVar3;
      param_1 = (char *)((long)param_1 + 4);
    }
    bVar7 = false;
joined_r0x015c4420:
    do {
      if (puVar1 + -1 < param_2) goto LAB_015c436c;
      uVar3 = *(uint *)param_2;
      if ((uVar3 & 0x80808080) != 0) goto LAB_015c4478;
      param_2 = (char *)((long)param_2 + 4);
      *(uint *)param_1 = uVar3 ^ (uVar3 + 0x1f1f1f1f & 0x80808080 & 0xfafafafa - uVar3) >> 2;
      param_1 = (char *)((long)param_1 + 4);
    } while( true );
  }
  bVar7 = false;
LAB_015c436c:
  if (param_2 < puVar1) {
    do {
      bVar4 = (byte)*(uint *)param_2;
      if ((char)bVar4 < 0) {
LAB_015c4478:
        return (int)param_2 - iVar6;
      }
      bVar5 = (int)(char)bVar4 - 0x61U < 0x1a;
      param_2 = (char *)((long)param_2 + 1);
      bVar2 = bVar4 ^ 0x20;
      if (!bVar5) {
        bVar2 = bVar4;
      }
      bVar7 = (bool)(bVar7 | bVar5);
      *param_1 = bVar2;
      param_1 = (char *)((long)param_1 + 1);
    } while (puVar1 != (uint *)param_2);
  }
  *param_4 = bVar7;
  return param_3;
}

