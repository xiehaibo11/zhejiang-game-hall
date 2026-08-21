
int CONF_modules_load(CONF *cnf,char *appname,ulong flags)

{
  char *group;
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  stack_st_CONF_VALUE *psVar6;
  long lVar7;
  char *pcVar8;
  size_t sVar9;
  DSO *dso;
  DSO_FUNC_TYPE pDVar10;
  DSO_FUNC_TYPE pDVar11;
  long *ptr;
  uint uVar12;
  int iVar13;
  char acStack_70 [16];
  
  if (cnf != (CONF *)0x0) {
    uVar12 = (uint)flags;
    if ((appname == (char *)0x0) ||
       ((pcVar5 = NCONF_get_string(cnf,(char *)0x0,appname), (uVar12 >> 5 & 1) != 0 &&
        (pcVar5 == (char *)0x0)))) {
      pcVar5 = NCONF_get_string(cnf,(char *)0x0,"openssl_conf");
    }
    if (pcVar5 == (char *)0x0) {
      ERR_clear_error();
    }
    else {
      psVar6 = NCONF_get_section(cnf,pcVar5);
      if (psVar6 == (stack_st_CONF_VALUE *)0x0) {
        return 0;
      }
      iVar2 = OPENSSL_sk_num(psVar6);
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          lVar7 = OPENSSL_sk_value(psVar6,iVar2);
          pcVar5 = *(char **)(lVar7 + 8);
          group = *(char **)(lVar7 + 0x10);
          pcVar8 = strrchr(pcVar5,0x2e);
          if (pcVar8 == (char *)0x0) {
            sVar9 = strlen(pcVar5);
            iVar13 = (int)sVar9;
          }
          else {
            iVar13 = (int)pcVar8 - (int)pcVar5;
          }
          iVar3 = OPENSSL_sk_num(DAT_01782e20);
          if (iVar3 < 1) {
            lVar7 = 0;
            if ((uVar12 >> 3 & 1) != 0) goto LAB_00b10cd8;
LAB_00b10c44:
            if (lVar7 != 0) goto LAB_00b10cd8;
            pcVar8 = NCONF_get_string(cnf,group,"path");
            if (pcVar8 == (char *)0x0) {
              ERR_clear_error();
              pcVar8 = pcVar5;
            }
            dso = DSO_load((DSO *)0x0,pcVar8,(DSO_METHOD *)0x0,0);
            if (dso == (DSO *)0x0) {
              iVar13 = 0x6e;
LAB_00b10d68:
              DSO_free(dso);
              ERR_put_error(0xe,0x75,iVar13,"crypto/conf/conf_mod.c",0xdc);
              ERR_add_error_data(4,"module=",pcVar5,", path=",pcVar8);
              goto LAB_00b10dac;
            }
            pDVar10 = DSO_bind_func(dso,"OPENSSL_init");
            if (pDVar10 == (DSO_FUNC_TYPE)0x0) {
              iVar13 = 0x70;
              goto LAB_00b10d68;
            }
            pDVar11 = DSO_bind_func(dso,"OPENSSL_finish");
            lVar7 = FUN_00b11328(dso,pcVar5,pDVar10,pDVar11);
            if (lVar7 == 0) {
              iVar13 = 0;
              goto LAB_00b10d68;
            }
LAB_00b10cdc:
            ptr = CRYPTO_malloc(0x28,"crypto/conf/conf_mod.c",0x125);
            if (ptr == (long *)0x0) {
LAB_00b10ea8:
              if ((uVar12 >> 2 & 1) == 0) {
                ERR_put_error(0xe,0x76,0x6d,"crypto/conf/conf_mod.c",0xad);
                BIO_snprintf(acStack_70,0xd,"%-8d",0xffffffff);
                ERR_add_error_data(6,"module=",pcVar5,", value=",group,", retcode=",acStack_70);
              }
              goto joined_r0x00b10de0;
            }
            *ptr = lVar7;
            pcVar8 = CRYPTO_strdup(pcVar5,"crypto/conf/conf_mod.c",0x12a);
            ptr[1] = (long)pcVar8;
            pcVar8 = CRYPTO_strdup(group,"crypto/conf/conf_mod.c",299);
            ptr[2] = (long)pcVar8;
            ptr[4] = 0;
            if ((pcVar8 == (char *)0x0) || (ptr[1] == 0)) {
LAB_00b10e70:
              CRYPTO_free((void *)ptr[1]);
              CRYPTO_free((void *)ptr[2]);
              CRYPTO_free(ptr);
              goto LAB_00b10ea8;
            }
            if (*(code **)(lVar7 + 0x10) != (code *)0x0) {
              iVar13 = (**(code **)(lVar7 + 0x10))(ptr,cnf);
              bVar1 = true;
              if (0 < iVar13) goto LAB_00b10dec;
LAB_00b10e5c:
              if ((bVar1) && (*(code **)(lVar7 + 0x18) != (code *)0x0)) {
                (**(code **)(lVar7 + 0x18))(ptr);
              }
              goto LAB_00b10e70;
            }
            bVar1 = false;
LAB_00b10dec:
            if ((DAT_01782e28 == 0) && (DAT_01782e28 = OPENSSL_sk_new_null(), DAT_01782e28 == 0)) {
              iVar13 = 0x13d;
LAB_00b10e50:
              ERR_put_error(0xe,0x73,0x41,"crypto/conf/conf_mod.c",iVar13);
              goto LAB_00b10e5c;
            }
            iVar13 = OPENSSL_sk_push(DAT_01782e28,ptr);
            if (iVar13 == 0) {
              iVar13 = 0x143;
              goto LAB_00b10e50;
            }
            *(int *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) + 1;
          }
          else {
            iVar3 = 0;
            do {
              lVar7 = OPENSSL_sk_value(DAT_01782e20,iVar3);
              iVar4 = strncmp(*(char **)(lVar7 + 8),pcVar5,(long)iVar13);
              if (iVar4 == 0) goto LAB_00b10c40;
              iVar3 = iVar3 + 1;
              iVar4 = OPENSSL_sk_num(DAT_01782e20);
            } while (iVar3 < iVar4);
            lVar7 = 0;
LAB_00b10c40:
            if ((uVar12 >> 3 & 1) == 0) goto LAB_00b10c44;
LAB_00b10cd8:
            if (lVar7 != 0) goto LAB_00b10cdc;
LAB_00b10dac:
            if ((uVar12 >> 2 & 1) == 0) {
              ERR_put_error(0xe,0x76,0x71,"crypto/conf/conf_mod.c",0xa2);
              ERR_add_error_data(2,"module=",pcVar5);
            }
joined_r0x00b10de0:
            if ((flags & 1) == 0) {
              return -1;
            }
          }
          iVar2 = iVar2 + 1;
          iVar13 = OPENSSL_sk_num(psVar6);
        } while (iVar2 < iVar13);
      }
    }
  }
  return 1;
}

