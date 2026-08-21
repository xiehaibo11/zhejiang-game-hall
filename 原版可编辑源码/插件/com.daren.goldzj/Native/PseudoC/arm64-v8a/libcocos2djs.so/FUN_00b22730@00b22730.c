
undefined8 FUN_00b22730(long param_1,uint param_2,int param_3,uint *param_4)

{
  undefined8 uVar1;
  long lVar2;
  int reason;
  int line;
  uint uVar3;
  long lVar4;
  undefined8 local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  
  if (0x17 < param_2) {
switchD_00b22774_caseD_17:
    return 0xffffffff;
  }
  lVar4 = *(long *)(param_1 + 0x78);
  uVar1 = 1;
  switch(param_2) {
  case 0:
    if (lVar4 != 0) {
LAB_00b227a0:
      *(undefined8 *)(lVar4 + 0xa0) = 0;
      *(undefined8 *)(lVar4 + 0xa8) = 0;
      *(undefined8 *)(lVar4 + 0x98) = 0;
      *(undefined4 *)(lVar4 + 0xb0) = 0;
      *(undefined4 *)(lVar4 + 0xb4) = 0xc;
      *(undefined8 *)(lVar4 + 0xb8) = 0xffffffffffffffff;
      return 1;
    }
    lVar4 = Poly1305_ctx_size(1);
    lVar4 = CRYPTO_zalloc(lVar4 + 0xc0,"crypto/evp/e_chacha20_poly1305.c",0x14c);
    *(long *)(param_1 + 0x78) = lVar4;
    if (lVar4 != 0) goto LAB_00b227a0;
    reason = 0x86;
    line = 0x14e;
    goto LAB_00b22964;
  default:
    goto switchD_00b22774_caseD_17;
  case 8:
    if (lVar4 == 0) {
      return 1;
    }
    lVar2 = Poly1305_ctx_size(1);
    lVar4 = CRYPTO_memdup(lVar4,lVar2 + 0xc0,"crypto/evp/e_chacha20_poly1305.c",0x15f);
    *(long *)(param_4 + 0x1e) = lVar4;
    if (lVar4 != 0) {
      return 1;
    }
    reason = 0xad;
    line = 0x161;
LAB_00b22964:
    ERR_put_error(6,0xb6,reason,"crypto/evp/e_chacha20_poly1305.c",line);
    break;
  case 9:
    if (param_3 - 1U < 0x10) {
      *(int *)(lVar4 + 0xb4) = param_3;
      return 1;
    }
    break;
  case 0x10:
    if ((param_3 - 1U < 0x10) && (*(int *)(param_1 + 0x10) != 0)) {
      memcpy(param_4,(void *)(lVar4 + 0x84),(long)param_3);
      return 1;
    }
    break;
  case 0x11:
    if (param_3 - 1U < 0x10) {
      if (param_4 == (uint *)0x0) {
        return 1;
      }
      memcpy((void *)(lVar4 + 0x84),param_4,(long)param_3);
      *(int *)(lVar4 + 0xb0) = param_3;
      return 1;
    }
    break;
  case 0x12:
    if (param_3 == 0xc) {
      uVar3 = *param_4;
      *(uint *)(lVar4 + 0x24) = uVar3;
      *(uint *)(lVar4 + 0x78) = uVar3;
      uVar3 = param_4[1];
      *(uint *)(lVar4 + 0x28) = uVar3;
      *(uint *)(lVar4 + 0x7c) = uVar3;
      uVar3 = param_4[2];
      *(uint *)(lVar4 + 0x2c) = uVar3;
      *(uint *)(lVar4 + 0x80) = uVar3;
      return 1;
    }
    break;
  case 0x16:
    if (param_3 == 0xd) {
      uVar3 = (uint)CONCAT11(*(undefined1 *)((long)param_4 + 0xb),(char)param_4[3]);
      if (*(int *)(param_1 + 0x10) == 0) {
        uVar3 = uVar3 - 0x10;
        local_36 = *(undefined1 *)((long)param_4 + 10);
        local_38 = (short)param_4[2];
        local_35 = (char)(uVar3 >> 8);
        local_34 = (char)uVar3;
        local_40 = *(undefined8 *)param_4;
        param_4 = (uint *)&local_40;
      }
      *(ulong *)(lVar4 + 0xb8) = (ulong)uVar3;
      *(undefined4 *)(lVar4 + 0x24) = *(undefined4 *)(lVar4 + 0x78);
      *(uint *)(lVar4 + 0x28) = *param_4 ^ *(uint *)(lVar4 + 0x7c);
      uVar3 = param_4[1];
      *(undefined4 *)(lVar4 + 0xac) = 0;
      *(uint *)(lVar4 + 0x2c) = uVar3 ^ *(uint *)(lVar4 + 0x80);
      FUN_00b22434(param_1,0,param_4,0xd);
      return 0x10;
    }
    break;
  case 0x17:
    goto switchD_00b22774_caseD_17;
  }
  uVar1 = 0;
switchD_00b22774_caseD_17:
  return uVar1;
}

