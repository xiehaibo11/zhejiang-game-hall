
undefined8 ogg_sync_pageout(long param_1,undefined8 param_2)

{
  long lVar1;
  
  while( true ) {
    lVar1 = ogg_sync_pageseek(param_1,param_2);
    if (0 < lVar1) {
      return 1;
    }
    if (lVar1 == 0) break;
    if (*(int *)(param_1 + 0x20) == 0) {
      *(undefined4 *)(param_1 + 0x20) = 1;
      return 0xfffffff6;
    }
  }
  return 0;
}

