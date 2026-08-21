
undefined8 FUN_0104ac10(long param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar1 = lws_now_secs();
  puVar2 = *(undefined8 **)(param_1 + 0x848);
  if (puVar2 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(param_1 + 0x848);
    if (param_2 == 0) {
      do {
        while (puVar3 = puVar2, lVar1 <= (long)puVar3[1]) {
          puVar2 = (undefined8 *)*puVar3;
          puVar4 = puVar3;
          if ((undefined8 *)*puVar3 == (undefined8 *)0x0) {
            return 0;
          }
        }
        *puVar4 = *puVar3;
        _lws_log(4,"deferred vh %p destroy\n",puVar3[2]);
        FUN_0104ad0c(puVar3[2]);
        thunk_FUN_0104b1cc(puVar3,0,"lws_free");
        puVar2 = (undefined8 *)*puVar4;
      } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
    }
    else {
      do {
        *puVar4 = *puVar2;
        _lws_log(4,"deferred vh %p destroy\n",puVar2[2]);
        FUN_0104ad0c(puVar2[2]);
        thunk_FUN_0104b1cc(puVar2,0,"lws_free");
        puVar2 = (undefined8 *)*puVar4;
      } while (puVar2 != (undefined8 *)0x0);
    }
  }
  return 0;
}

