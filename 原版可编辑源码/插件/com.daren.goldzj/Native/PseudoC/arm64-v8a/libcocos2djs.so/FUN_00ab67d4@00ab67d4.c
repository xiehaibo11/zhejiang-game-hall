
void FUN_00ab67d4(long *param_1)

{
  long lVar1;
  
  while (param_1 != (long *)0x0) {
    thunk_FUN_00aa8a48(param_1[1],0,"lws_free");
    thunk_FUN_00aa8a48(param_1[3],0,"lws_free");
    thunk_FUN_00aa8a48(param_1[5],0,"lws_free");
    thunk_FUN_00aa8a48(param_1[4],0,"lws_free");
    thunk_FUN_00aa8a48(param_1[6],0,"lws_free");
    lVar1 = *param_1;
    thunk_FUN_00aa8a48(param_1,0,"lws_free");
    param_1 = (long *)lVar1;
  }
  return;
}

