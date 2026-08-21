
ENGINE * ENGINE_by_id(char *id)

{
  char *arg;
  int iVar1;
  char *pcVar2;
  ENGINE *pEVar3;
  ENGINE *pEVar4;
  undefined8 uVar5;
  
  if (id == (char *)0x0) {
    ERR_put_error(0x26,0x6a,0x43,"crypto/engine/eng_list.c",0x11f);
  }
  else {
    iVar1 = CRYPTO_THREAD_run_once(&engine_lock_init,do_engine_lock_init_ossl_);
    if ((iVar1 == 0) || (do_engine_lock_init_ossl_ret_ == 0)) {
      ERR_put_error(0x26,0x6a,0x41,"crypto/engine/eng_list.c",0x123);
    }
    else {
      CRYPTO_THREAD_write_lock(global_engine_lock);
      for (pEVar4 = DAT_01d39118; pEVar4 != (ENGINE *)0x0; pEVar4 = *(ENGINE **)(pEVar4 + 0xb8)) {
        iVar1 = strcmp(id,*(char **)pEVar4);
        if (iVar1 == 0) {
          if (((byte)pEVar4[0x98] >> 2 & 1) == 0) {
            *(int *)(pEVar4 + 0x9c) = *(int *)(pEVar4 + 0x9c) + 1;
            pEVar3 = pEVar4;
          }
          else {
            pEVar3 = ENGINE_new();
            if (pEVar3 == (ENGINE *)0x0) break;
            uVar5 = *(undefined8 *)pEVar4;
            *(undefined8 *)(pEVar3 + 8) = *(undefined8 *)(pEVar4 + 8);
            *(undefined8 *)pEVar3 = uVar5;
            uVar5 = *(undefined8 *)(pEVar4 + 0x10);
            *(undefined8 *)(pEVar3 + 0x18) = *(undefined8 *)(pEVar4 + 0x18);
            *(undefined8 *)(pEVar3 + 0x10) = uVar5;
            uVar5 = *(undefined8 *)(pEVar4 + 0x20);
            *(undefined8 *)(pEVar3 + 0x28) = *(undefined8 *)(pEVar4 + 0x28);
            *(undefined8 *)(pEVar3 + 0x20) = uVar5;
            uVar5 = *(undefined8 *)(pEVar4 + 0x30);
            *(undefined8 *)(pEVar3 + 0x38) = *(undefined8 *)(pEVar4 + 0x38);
            *(undefined8 *)(pEVar3 + 0x30) = uVar5;
            uVar5 = *(undefined8 *)(pEVar4 + 0x40);
            *(undefined8 *)(pEVar3 + 0x48) = *(undefined8 *)(pEVar4 + 0x48);
            *(undefined8 *)(pEVar3 + 0x40) = uVar5;
            uVar5 = *(undefined8 *)(pEVar4 + 0x58);
            *(undefined8 *)(pEVar3 + 0x60) = *(undefined8 *)(pEVar4 + 0x60);
            *(undefined8 *)(pEVar3 + 0x58) = uVar5;
            uVar5 = *(undefined8 *)(pEVar4 + 0x68);
            *(undefined8 *)(pEVar3 + 0x70) = *(undefined8 *)(pEVar4 + 0x70);
            *(undefined8 *)(pEVar3 + 0x68) = uVar5;
            uVar5 = *(undefined8 *)(pEVar4 + 0x78);
            *(undefined8 *)(pEVar3 + 0x80) = *(undefined8 *)(pEVar4 + 0x80);
            *(undefined8 *)(pEVar3 + 0x78) = uVar5;
            *(undefined8 *)(pEVar3 + 0x90) = *(undefined8 *)(pEVar4 + 0x90);
            *(undefined4 *)(pEVar3 + 0x98) = *(undefined4 *)(pEVar4 + 0x98);
          }
          CRYPTO_THREAD_unlock(global_engine_lock);
          return pEVar3;
        }
      }
      CRYPTO_THREAD_unlock(global_engine_lock);
      iVar1 = strcmp(id,"dynamic");
      if (iVar1 == 0) {
        pEVar4 = (ENGINE *)0x0;
      }
      else {
        pcVar2 = getenv("OPENSSL_ENGINES");
        arg = 
        "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/install-android/arm64/lib/engines-1.1"
        ;
        if (pcVar2 != (char *)0x0) {
          arg = pcVar2;
        }
        pEVar4 = ENGINE_by_id("dynamic");
        if ((((pEVar4 != (ENGINE *)0x0) &&
             (iVar1 = ENGINE_ctrl_cmd_string(pEVar4,"ID",id,0), iVar1 != 0)) &&
            (iVar1 = ENGINE_ctrl_cmd_string(pEVar4,"DIR_LOAD","2",0), iVar1 != 0)) &&
           (((iVar1 = ENGINE_ctrl_cmd_string(pEVar4,"DIR_ADD",arg,0), iVar1 != 0 &&
             (iVar1 = ENGINE_ctrl_cmd_string(pEVar4,"LIST_ADD","1",0), iVar1 != 0)) &&
            (iVar1 = ENGINE_ctrl_cmd_string(pEVar4,"LOAD",(char *)0x0,0), iVar1 != 0)))) {
          return pEVar4;
        }
      }
      ENGINE_free(pEVar4);
      ERR_put_error(0x26,0x6a,0x74,"crypto/engine/eng_list.c",0x153);
      ERR_add_error_data(2,"id=",id);
    }
  }
  return (ENGINE *)0x0;
}

