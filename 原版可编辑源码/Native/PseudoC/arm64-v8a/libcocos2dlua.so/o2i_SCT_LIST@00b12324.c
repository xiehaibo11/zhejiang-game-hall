
long o2i_SCT_LIST(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  
  uVar8 = param_3 - 2;
  if (uVar8 < 0xfffe) {
    puVar6 = (undefined1 *)*param_2;
    uVar2 = *puVar6;
    uVar3 = puVar6[1];
    *param_2 = (long)(puVar6 + 2);
    if (CONCAT11(uVar2,uVar3) == uVar8) {
      if ((param_1 == (long *)0x0) || (lVar7 = *param_1, lVar7 == 0)) {
        lVar7 = OPENSSL_sk_new_null();
        if (lVar7 == 0) {
          return 0;
        }
      }
      else {
        while (lVar5 = OPENSSL_sk_pop(lVar7), lVar5 != 0) {
          SCT_free();
        }
      }
      do {
        if (uVar8 == 0) {
          if (param_1 == (long *)0x0) {
            return lVar7;
          }
          if (*param_1 == 0) {
            *param_1 = lVar7;
            return lVar7;
          }
          return lVar7;
        }
        if (uVar8 == 1) {
          ERR_put_error(0x32,0x6f,0x69,"crypto/ct/ct_oct.c",0x128);
          goto joined_r0x00b124b4;
        }
        puVar6 = (undefined1 *)*param_2;
        uVar2 = *puVar6;
        uVar3 = puVar6[1];
        *param_2 = (long)(puVar6 + 2);
        uVar1 = (ulong)CONCAT11(uVar2,uVar3);
        if (uVar8 - 2 <= uVar1 - 1) {
          ERR_put_error(0x32,0x6f,0x69,"crypto/ct/ct_oct.c",0x12f);
          goto joined_r0x00b124b4;
        }
        lVar5 = o2i_SCT(0,param_2,uVar1);
        if (lVar5 == 0) goto joined_r0x00b124b4;
        uVar8 = (uVar8 - 2) - uVar1;
        iVar4 = OPENSSL_sk_push(lVar7,lVar5);
      } while (iVar4 != 0);
      SCT_free(lVar5);
joined_r0x00b124b4:
      if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
        return 0;
      }
      OPENSSL_sk_pop_free(lVar7,SCT_free);
      return 0;
    }
    iVar4 = 0x113;
  }
  else {
    iVar4 = 0x10d;
  }
  ERR_put_error(0x32,0x6f,0x69,"crypto/ct/ct_oct.c",iVar4);
  return 0;
}

