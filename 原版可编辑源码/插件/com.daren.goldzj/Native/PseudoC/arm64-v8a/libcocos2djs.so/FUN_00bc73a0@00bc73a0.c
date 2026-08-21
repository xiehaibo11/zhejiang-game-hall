
/* WARNING: Type propagation algorithm not settling */

bool FUN_00bc73a0(ENGINE *param_1,undefined4 param_2,ulong param_3,char *param_4)

{
  int iVar1;
  long *arg;
  long *plVar2;
  DSO *pDVar3;
  DSO_FUNC_TYPE pDVar4;
  ulong uVar5;
  char *pcVar6;
  int iVar7;
  int line;
  long lVar8;
  void *local_140;
  m *pmStack_138;
  r *prStack_130;
  f *pfStack_128;
  undefined1 auStack_120 [192];
  
  if (DAT_01d21168 < 0) {
    iVar1 = CRYPTO_get_ex_new_index
                      (10,0,(void *)0x0,(undefined1 *)0x0,(undefined1 *)0x0,FUN_00bc7ac0);
    if (iVar1 != -1) {
      CRYPTO_THREAD_write_lock(global_engine_lock);
      if (DAT_01d21168 < 0) {
        DAT_01d21168 = iVar1;
      }
      CRYPTO_THREAD_unlock(global_engine_lock);
      goto LAB_00bc7430;
    }
    ERR_put_error(0x26,0xb5,0x90,"crypto/engine/eng_dyn.c",0xd2);
    goto LAB_00bc75a8;
  }
LAB_00bc7430:
  arg = ENGINE_get_ex_data(param_1,DAT_01d21168);
  if (arg != (long *)0x0) {
    lVar8 = *arg;
    goto joined_r0x00bc7500;
  }
  arg = (long *)CRYPTO_zalloc(0x58,"crypto/engine/eng_dyn.c",0x9c);
  if (arg == (long *)0x0) {
    ERR_put_error(0x26,0xb7,0x41,"crypto/engine/eng_dyn.c",0xa0);
LAB_00bc75a8:
    iVar1 = 0xb4;
    iVar7 = 0x70;
    line = 0x127;
    goto LAB_00bc75c0;
  }
  lVar8 = OPENSSL_sk_new_null();
  arg[10] = lVar8;
  if (lVar8 == 0) {
    ERR_put_error(0x26,0xb7,0x41,"crypto/engine/eng_dyn.c",0xa5);
LAB_00bc75a4:
    CRYPTO_free(arg);
    goto LAB_00bc75a8;
  }
  *(undefined4 *)(arg + 9) = 1;
  arg[8] = (long)"bind_engine";
  arg[7] = (long)"v_check";
  CRYPTO_THREAD_write_lock(global_engine_lock);
  plVar2 = ENGINE_get_ex_data(param_1,DAT_01d21168);
  if (plVar2 == (long *)0x0) {
    iVar1 = ENGINE_set_ex_data(param_1,DAT_01d21168,arg);
    CRYPTO_THREAD_unlock(global_engine_lock);
    if (iVar1 == 0) {
      OPENSSL_sk_free(arg[10]);
      goto LAB_00bc75a4;
    }
    CRYPTO_free((void *)0x0);
    lVar8 = *arg;
  }
  else {
    CRYPTO_THREAD_unlock(global_engine_lock);
    OPENSSL_sk_free(arg[10]);
    CRYPTO_free(arg);
    lVar8 = *plVar2;
    arg = plVar2;
  }
joined_r0x00bc7500:
  if (lVar8 != 0) {
    iVar1 = 0xb4;
    iVar7 = 100;
    line = 0x12d;
    goto LAB_00bc75c0;
  }
  switch(param_2) {
  case 200:
    if (param_4 == (char *)0x0) {
      pcVar6 = (char *)0x0;
    }
    else {
      pcVar6 = (char *)0x0;
      if (*param_4 != '\0') {
        pcVar6 = param_4;
      }
    }
    CRYPTO_free((void *)arg[3]);
    if (pcVar6 == (char *)0x0) {
      pcVar6 = (char *)0x0;
    }
    else {
      pcVar6 = CRYPTO_strdup(pcVar6,"crypto/engine/eng_dyn.c",0x137);
    }
    arg[3] = (long)pcVar6;
    goto LAB_00bc7890;
  case 0xc9:
    *(uint *)(arg + 4) = (uint)(param_3 != 0);
    return true;
  case 0xca:
    if (param_4 == (char *)0x0) {
      pcVar6 = (char *)0x0;
    }
    else {
      pcVar6 = (char *)0x0;
      if (*param_4 != '\0') {
        pcVar6 = param_4;
      }
    }
    CRYPTO_free((void *)arg[5]);
    if (pcVar6 == (char *)0x0) {
      pcVar6 = (char *)0x0;
    }
    else {
      pcVar6 = CRYPTO_strdup(pcVar6,"crypto/engine/eng_dyn.c",0x144);
    }
    arg[5] = (long)pcVar6;
LAB_00bc7890:
    return pcVar6 != (char *)0x0;
  case 0xcb:
    if (param_3 < 3) {
      *(int *)(arg + 6) = (int)param_3;
      return true;
    }
    iVar1 = 0xb4;
    iVar7 = 0x8f;
    line = 0x14a;
    break;
  case 0xcc:
    if (param_3 < 3) {
      *(int *)(arg + 9) = (int)param_3;
      return true;
    }
    iVar1 = 0xb4;
    iVar7 = 0x8f;
    line = 0x153;
    break;
  case 0xcd:
    if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
      iVar1 = 0xb4;
      iVar7 = 0x8f;
      line = 0x15b;
    }
    else {
      pcVar6 = CRYPTO_strdup(param_4,"crypto/engine/eng_dyn.c",0x15f);
      if (pcVar6 == (char *)0x0) {
        iVar1 = 0xb4;
        iVar7 = 0x41;
        line = 0x161;
      }
      else {
        iVar1 = OPENSSL_sk_push(arg[10],pcVar6);
        if (iVar1 != 0) {
          return true;
        }
        CRYPTO_free(pcVar6);
        iVar1 = 0xb4;
        iVar7 = 0x41;
        line = 0x166;
      }
    }
    break;
  case 0xce:
    pDVar3 = (DSO *)DSO_new();
    *arg = (long)pDVar3;
    if (pDVar3 == (DSO *)0x0) {
      return false;
    }
    pcVar6 = (char *)arg[3];
    if (pcVar6 == (char *)0x0) {
      if (arg[5] == 0) {
        return false;
      }
      DSO_ctrl(pDVar3,2,2,(void *)0x0);
      pcVar6 = DSO_convert_filename((DSO *)*arg,(char *)arg[5]);
      arg[3] = (long)pcVar6;
    }
    if ((int)arg[9] != 2) {
      pDVar3 = DSO_load((DSO *)*arg,pcVar6,(DSO_METHOD *)0x0,0);
      if (pDVar3 != (DSO *)0x0) {
LAB_00bc7948:
        pDVar4 = DSO_bind_func((DSO *)*arg,(char *)arg[8]);
        arg[2] = (long)pDVar4;
        if (pDVar4 == (DSO_FUNC_TYPE)0x0) {
          arg[2] = 0;
          DSO_free((DSO *)*arg);
          *arg = 0;
          iVar1 = 0xb6;
          iVar7 = 0x68;
          line = 0x1ab;
        }
        else {
          if ((int)arg[4] == 0) {
            pDVar4 = DSO_bind_func((DSO *)*arg,(char *)arg[7]);
            arg[1] = (long)pDVar4;
            if ((pDVar4 == (DSO_FUNC_TYPE)0x0) || (uVar5 = (*pDVar4)(0x30000), uVar5 >> 0x10 < 3)) {
              arg[1] = 0;
              arg[2] = 0;
              DSO_free((DSO *)*arg);
              *arg = 0;
              iVar1 = 0xb6;
              iVar7 = 0x91;
              line = 0x1c6;
              break;
            }
          }
          memcpy(auStack_120,param_1,0xc0);
          local_140 = ENGINE_get_static_state();
          CRYPTO_get_mem_functions(&pmStack_138,&prStack_130,&pfStack_128);
          engine_set_all_null(param_1);
          iVar1 = (*(code *)arg[2])(param_1,arg[5],&local_140);
          if (iVar1 == 0) {
            arg[1] = 0;
            arg[2] = 0;
            DSO_free((DSO *)*arg);
            *arg = 0;
            ERR_put_error(0x26,0xb6,0x6d,"crypto/engine/eng_dyn.c",0x1e5);
            memcpy(param_1,auStack_120,0xc0);
            return false;
          }
          if (((int)arg[6] < 1) || (iVar1 = ENGINE_add(param_1), iVar1 != 0)) {
            return true;
          }
          if ((int)arg[6] < 2) {
            ERR_clear_error();
            return true;
          }
          iVar1 = 0xb6;
          iVar7 = 0x67;
          line = 0x1f6;
        }
        break;
      }
      if ((int)arg[9] == 0) goto LAB_00bc78b8;
    }
    iVar1 = OPENSSL_sk_num(arg[10]);
    if (0 < iVar1) {
      iVar7 = 0;
      do {
        pcVar6 = (char *)OPENSSL_sk_value(arg[10],iVar7);
        pcVar6 = DSO_merge((DSO *)*arg,(char *)arg[3],pcVar6);
        if (pcVar6 == (char *)0x0) break;
        pDVar3 = DSO_load((DSO *)*arg,pcVar6,(DSO_METHOD *)0x0,0);
        if (pDVar3 != (DSO *)0x0) {
          CRYPTO_free(pcVar6);
          goto LAB_00bc7948;
        }
        CRYPTO_free(pcVar6);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar1);
    }
LAB_00bc78b8:
    ERR_put_error(0x26,0xb6,0x84,"crypto/engine/eng_dyn.c",0x19e);
    DSO_free((DSO *)*arg);
    *arg = 0;
    return false;
  default:
    iVar1 = 0xb4;
    iVar7 = 0x77;
    line = 0x16e;
  }
LAB_00bc75c0:
  ERR_put_error(0x26,iVar1,iVar7,"crypto/engine/eng_dyn.c",line);
  return false;
}

