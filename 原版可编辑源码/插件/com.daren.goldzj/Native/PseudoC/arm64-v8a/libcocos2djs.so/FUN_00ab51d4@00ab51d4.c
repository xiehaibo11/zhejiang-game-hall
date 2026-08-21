
void FUN_00ab51d4(undefined8 param_1)

{
  int iVar1;
  
                    /* try { // try from 00ab51d8 to 00bb5243 has its CatchHandler @ 00ab51d8
                       catch() { ... } // from try @ 00ab51d8 with catch @ 00ab51d8
                       catch() { ... } // from try @ 00ab5368 with catch @ 00ab51d8 */
  iVar1 = uv_is_closing();
  if (iVar1 != 0) {
    return;
  }
  uv_close(param_1,FUN_00ab53ac);
  return;
}

