
undefined8 tls_process_next_proto(long param_1,long *param_2)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  byte *pbVar7;
  
  if (param_2[1] != 0) {
    uVar4 = param_2[1] - 1;
    pbVar7 = (byte *)*param_2 + 1;
    bVar5 = *(byte *)*param_2;
    uVar6 = (ulong)bVar5;
    lVar3 = uVar4 - uVar6;
    if (uVar6 <= uVar4) {
      pbVar1 = pbVar7 + uVar6;
      *param_2 = (long)pbVar1;
      param_2[1] = lVar3;
      if (lVar3 != 0) {
        uVar4 = (ulong)*pbVar1;
        lVar2 = (lVar3 - 1U) - uVar4;
        if (uVar4 <= lVar3 - 1U) {
          *param_2 = (long)(pbVar1 + uVar4 + 1);
          param_2[1] = lVar2;
          if (lVar2 == 0) {
            CRYPTO_free(*(void **)(param_1 + 0x2d8));
            *(undefined8 *)(param_1 + 0x2d8) = 0;
            if (bVar5 == 0) {
              bVar5 = 0;
LAB_00ae95b4:
              *(byte *)(param_1 + 0x2e0) = bVar5;
              return 3;
            }
            lVar3 = CRYPTO_memdup(pbVar7,uVar6,"ssl/statem/../packet_locl.h",0x181);
            *(long *)(param_1 + 0x2d8) = lVar3;
            if (lVar3 != 0) goto LAB_00ae95b4;
            *(undefined1 *)(param_1 + 0x2e0) = 0;
            goto LAB_00ae9550;
          }
        }
      }
    }
  }
  ERR_put_error(0x14,0x17f,0x9f,"ssl/statem/statem_srvr.c",0xc8b);
LAB_00ae9550:
  ossl_statem_set_error(param_1);
  return 0;
}

