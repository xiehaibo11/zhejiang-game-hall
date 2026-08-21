
void mbedtls_aes_setkey_dec(uint *param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  uint *puVar8;
  uint local_168 [2];
  long local_160;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  thunk_EXT_FUN_00002bb0(local_168,0,0x120);
  *(uint **)(param_1 + 2) = param_1 + 4;
  iVar3 = thunk_EXT_FUN_00002bb0(local_168,param_2,param_3);
  if (iVar3 == 0) {
    *param_1 = local_168[0];
    puVar5 = (uint *)(local_160 + (long)(int)local_168[0] * 0x10);
    param_1[4] = *puVar5;
    param_1[5] = puVar5[1];
    param_1[6] = puVar5[2];
    puVar6 = param_1 + 8;
    param_1[7] = puVar5[3];
    puVar8 = puVar5 + -4;
    if ((int)local_168[0] < 2) {
      puVar5 = puVar5 + 4;
    }
    else {
      uVar4 = 0xfffffffd;
      if (-3 < (int)~local_168[0]) {
        uVar4 = ~local_168[0];
      }
      iVar3 = local_168[0] + 1;
      puVar5 = puVar6;
      do {
        uVar1 = *puVar8;
        iVar3 = iVar3 + -1;
        *puVar5 = (&DAT_0011d708)[(byte)(&DAT_0011d208)[uVar1 >> 8 & 0xff]] ^
                  (&DAT_0011d308)[(byte)(&DAT_0011d208)[(ulong)uVar1 & 0xff]] ^
                  (&DAT_0011db08)[(byte)(&DAT_0011d208)[uVar1 >> 0x10 & 0xff]] ^
                  (&DAT_0011df08)[(byte)(&DAT_0011d208)[uVar1 >> 0x18]];
        uVar1 = puVar8[1];
        puVar5[1] = (&DAT_0011d708)[(byte)(&DAT_0011d208)[uVar1 >> 8 & 0xff]] ^
                    (&DAT_0011d308)[(byte)(&DAT_0011d208)[(ulong)uVar1 & 0xff]] ^
                    (&DAT_0011db08)[(byte)(&DAT_0011d208)[uVar1 >> 0x10 & 0xff]] ^
                    (&DAT_0011df08)[(byte)(&DAT_0011d208)[uVar1 >> 0x18]];
        uVar1 = puVar8[2];
        puVar5[2] = (&DAT_0011d708)[(byte)(&DAT_0011d208)[uVar1 >> 8 & 0xff]] ^
                    (&DAT_0011d308)[(byte)(&DAT_0011d208)[(ulong)uVar1 & 0xff]] ^
                    (&DAT_0011db08)[(byte)(&DAT_0011d208)[uVar1 >> 0x10 & 0xff]] ^
                    (&DAT_0011df08)[(byte)(&DAT_0011d208)[uVar1 >> 0x18]];
        uVar1 = puVar8[3];
        puVar8 = puVar8 + -4;
        puVar6 = puVar5 + 4;
        puVar5[3] = (&DAT_0011d708)[(byte)(&DAT_0011d208)[uVar1 >> 8 & 0xff]] ^
                    (&DAT_0011d308)[(byte)(&DAT_0011d208)[(ulong)uVar1 & 0xff]] ^
                    (&DAT_0011db08)[(byte)(&DAT_0011d208)[uVar1 >> 0x10 & 0xff]] ^
                    (&DAT_0011df08)[(byte)(&DAT_0011d208)[uVar1 >> 0x18]];
        puVar5 = puVar6;
      } while (2 < iVar3);
      puVar5 = (uint *)(local_160 +
                       ((long)(int)local_168[0] * 4 + (ulong)(local_168[0] + uVar4 + 1) * -4) * 4);
    }
    *puVar6 = *puVar8;
    puVar6[1] = puVar5[-7];
    puVar6[2] = puVar5[-6];
    puVar6[3] = puVar5[-5];
  }
  lVar7 = 0;
  do {
    *(undefined1 *)((long)local_168 + lVar7) = 0;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x120);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
  thunk_EXT_FUN_00002bb0();
  return;
}

