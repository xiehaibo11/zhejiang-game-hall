
undefined4 socket_create(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = socket(param_2,param_3,param_4);
  *param_1 = iVar1;
  if (iVar1 == -1) {
    puVar3 = (undefined4 *)__errno();
                    /* catch() { ... } // from try @ 009197a4 with catch @ 00919834 */
    uVar2 = *puVar3;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

