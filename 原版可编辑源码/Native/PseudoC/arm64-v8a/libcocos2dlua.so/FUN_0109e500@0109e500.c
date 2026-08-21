
void FUN_0109e500(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x330))(param_1,0x706f7374,param_2,0);
  if (iVar1 != 0) {
    return;
  }
                    /* try { // try from 0109e544 to 0119e7ef has its CatchHandler @ 0109e544
                       catch() { ... } // from try @ 0109e544 with catch @ 0109e544
                       catch() { ... } // from try @ 0109e7f8 with catch @ 0109e544 */
  FT_Stream_ReadFields(param_2,&DAT_0146045c,param_1 + 0x2e0);
  return;
}

