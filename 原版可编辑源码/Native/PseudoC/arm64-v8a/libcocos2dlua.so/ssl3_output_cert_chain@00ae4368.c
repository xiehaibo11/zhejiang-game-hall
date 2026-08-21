
long ssl3_output_cert_chain(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong local_18;
  
  local_18 = (ulong)(*(int *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x6c) + 3);
  iVar3 = ssl_add_cert_chain(param_1,param_2,&local_18);
  if (iVar3 != 0) {
    uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x6c);
    lVar4 = local_18 - (uVar2 + 3);
    puVar1 = (undefined1 *)(*(long *)(*(long *)(param_1 + 0x78) + 8) + (ulong)uVar2);
    *puVar1 = (char)((ulong)lVar4 >> 0x10);
    puVar1[1] = (char)((ulong)lVar4 >> 8);
    puVar1[2] = (char)lVar4;
    local_18 = lVar4 + 3;
    iVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x70))(param_1,0xb);
                    /* try { // try from 00ae4400 to 00be4407 has its CatchHandler @ 00ae44d0 */
    if (iVar3 != 0) {
                    /* try { // try from 00ae4408 to 00be44e3 has its CatchHandler @ 00ae428c */
      return local_18 + *(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x6c);
    }
    ERR_put_error(0x14,0x93,0x44,"ssl/statem/statem_lib.c",0x10b);
  }
  return 0;
}

