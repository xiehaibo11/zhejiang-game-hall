
uint * o2i_SCT(long *param_1,long *param_2,ulong param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  byte *pbVar8;
  byte *local_48;
  
  if (param_3 - 1 < 0xffff) {
    puVar7 = (uint *)SCT_new();
    if (puVar7 != (uint *)0x0) {
      pbVar8 = (byte *)*param_2;
      bVar2 = *pbVar8;
      *puVar7 = (uint)bVar2;
      local_48 = pbVar8;
      if (bVar2 == 0) {
        if (param_3 < 0x2b) {
          iVar3 = 99;
        }
        else {
          local_48 = pbVar8 + 1;
          lVar4 = CRYPTO_memdup(local_48,0x20,"crypto/ct/ct_oct.c",0x68);
          *(long *)(puVar7 + 6) = lVar4;
          if (lVar4 == 0) goto LAB_00b12008;
          puVar7[8] = 0x20;
          puVar7[9] = 0;
          bVar2 = pbVar8[0x21];
          *(ulong *)(puVar7 + 10) = (ulong)bVar2 << 0x38;
          uVar6 = (ulong)bVar2 << 0x38 | (ulong)pbVar8[0x22] << 0x30;
          *(ulong *)(puVar7 + 10) = uVar6;
          uVar6 = uVar6 | (ulong)pbVar8[0x23] << 0x28;
          *(ulong *)(puVar7 + 10) = uVar6;
          uVar6 = uVar6 | (ulong)pbVar8[0x24] << 0x20;
          *(ulong *)(puVar7 + 10) = uVar6;
          uVar6 = uVar6 | (ulong)pbVar8[0x25] << 0x18;
          *(ulong *)(puVar7 + 10) = uVar6;
          uVar6 = uVar6 | (ulong)pbVar8[0x26] << 0x10;
          *(ulong *)(puVar7 + 10) = uVar6;
          uVar6 = uVar6 | (ulong)pbVar8[0x27] << 8;
          *(ulong *)(puVar7 + 10) = uVar6;
          *(ulong *)(puVar7 + 10) = uVar6 | pbVar8[0x28];
          pbVar1 = pbVar8 + 0x2b;
          uVar6 = (ulong)CONCAT11(pbVar8[0x29],pbVar8[0x2a]);
          lVar4 = (param_3 - 0x2b) - uVar6;
          local_48 = pbVar1;
          if (param_3 - 0x2b < uVar6) {
            iVar3 = 0x72;
          }
          else {
            if (uVar6 != 0) {
              lVar5 = CRYPTO_memdup(pbVar1,uVar6,"crypto/ct/ct_oct.c",0x76);
              *(long *)(puVar7 + 0xc) = lVar5;
              if (lVar5 == 0) goto LAB_00b12008;
            }
            local_48 = pbVar1 + uVar6;
            *(ulong *)(puVar7 + 0xe) = uVar6;
            iVar3 = o2i_SCT_signature(puVar7,&local_48,lVar4);
            if (0 < iVar3) {
              *param_2 = (long)(local_48 + (lVar4 - iVar3));
              goto joined_r0x00b11fe4;
            }
            iVar3 = 0x80;
          }
        }
        ERR_put_error(0x32,0x6e,0x68,"crypto/ct/ct_oct.c",iVar3);
      }
      else {
        lVar4 = CRYPTO_memdup(pbVar8,param_3,"crypto/ct/ct_oct.c",0x87);
        *(long *)(puVar7 + 2) = lVar4;
        if (lVar4 != 0) {
          *(ulong *)(puVar7 + 4) = param_3;
          *param_2 = (long)(pbVar8 + param_3);
joined_r0x00b11fe4:
          if (param_1 == (long *)0x0) {
            return puVar7;
          }
          SCT_free(*param_1);
          *param_1 = (long)puVar7;
          return puVar7;
        }
      }
    }
  }
  else {
    ERR_put_error(0x32,0x6e,0x68,"crypto/ct/ct_oct.c",0x4c);
    puVar7 = (uint *)0x0;
  }
LAB_00b12008:
  SCT_free(puVar7);
  return (uint *)0x0;
}

