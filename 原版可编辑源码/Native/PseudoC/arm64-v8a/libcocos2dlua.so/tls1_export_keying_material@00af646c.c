
undefined4
tls1_export_keying_material
          (long param_1,undefined8 param_2,undefined4 param_3,void *param_4,size_t param_5,
          void *param_6,size_t param_7,int param_8)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  void *__dest;
  int line;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = param_7 + 2;
  if (param_8 == 0) {
    lVar5 = 0;
  }
  uVar1 = lVar5 + param_5 + 0x40;
  __dest = CRYPTO_malloc((int)uVar1,"ssl/t1_enc.c",0x230);
  if (__dest == (void *)0x0) {
    iVar3 = 0x41;
    line = 0x269;
  }
  else {
    memcpy(__dest,param_4,param_5);
    lVar5 = *(long *)(param_1 + 0x90);
    puVar2 = (undefined8 *)((long)__dest + param_5);
    uVar6 = *(undefined8 *)(lVar5 + 0xc0);
    puVar2[3] = *(undefined8 *)(lVar5 + 200);
    puVar2[2] = uVar6;
    uVar6 = *(undefined8 *)(lVar5 + 0xb0);
    puVar2[1] = *(undefined8 *)(lVar5 + 0xb8);
    *puVar2 = uVar6;
    lVar5 = *(long *)(param_1 + 0x90);
    uVar6 = *(undefined8 *)(lVar5 + 0xa0);
    puVar2[7] = *(undefined8 *)(lVar5 + 0xa8);
    puVar2[6] = uVar6;
    uVar6 = *(undefined8 *)(lVar5 + 0x90);
    puVar2[5] = *(undefined8 *)(lVar5 + 0x98);
    puVar2[4] = uVar6;
    if (param_8 != 0) {
      *(char *)((long)__dest + param_5 + 0x40) = (char)(param_7 >> 8);
      *(char *)((long)puVar2 + 0x41) = (char)param_7;
      if ((param_6 != (void *)0x0) || (param_7 != 0)) {
        memcpy((void *)((long)__dest + param_5 + 0x42),param_6,param_7);
      }
    }
    iVar3 = memcmp(__dest,"client finished",0xf);
    if ((((iVar3 != 0) && (iVar3 = memcmp(__dest,"server finished",0xf), iVar3 != 0)) &&
        (iVar3 = memcmp(__dest,"master secret",0xd), iVar3 != 0)) &&
       ((iVar3 = memcmp(__dest,"extended master secret",0x16), iVar3 != 0 &&
        (iVar3 = memcmp(__dest,"key expansion",0xd), iVar3 != 0)))) {
      uVar4 = FUN_00af6178(param_1,__dest,uVar1 & 0xffffffff,0,0,0,0,0,0,
                           *(long *)(param_1 + 0x178) + 8,
                           *(undefined4 *)(*(long *)(param_1 + 0x178) + 4),param_2,param_3);
      goto LAB_00af6648;
    }
    iVar3 = 0x16f;
    line = 0x265;
  }
  ERR_put_error(0x14,0x13a,iVar3,"ssl/t1_enc.c",line);
  uVar4 = 0;
LAB_00af6648:
  CRYPTO_clear_free(__dest,uVar1,"ssl/t1_enc.c",0x26c);
  return uVar4;
}

