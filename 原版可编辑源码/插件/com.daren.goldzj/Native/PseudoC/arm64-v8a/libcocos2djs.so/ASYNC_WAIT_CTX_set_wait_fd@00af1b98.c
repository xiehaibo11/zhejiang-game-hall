
void ASYNC_WAIT_CTX_set_wait_fd
               (long *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)CRYPTO_zalloc(0x30,"crypto/async/async_wait.c",0x32);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    *(undefined4 *)(puVar1 + 1) = param_3;
    puVar1[2] = param_4;
    puVar1[3] = param_5;
    *(undefined4 *)(puVar1 + 4) = 1;
    puVar1[5] = *param_1;
    *param_1 = (long)puVar1;
    param_1[1] = param_1[1] + 1;
  }
  return;
}

