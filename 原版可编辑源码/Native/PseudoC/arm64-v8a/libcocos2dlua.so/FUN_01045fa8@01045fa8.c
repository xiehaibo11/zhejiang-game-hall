
int FUN_01045fa8(long param_1,long param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int local_50;
  undefined8 local_4c;
  
                    /* try { // try from 01045fb8 to 01145fbf has its CatchHandler @ 01046528 */
  local_50 = *(int *)(param_2 + 0x2d0);
  local_4c = 1;
  bVar3 = *(byte *)(param_2 + 0x304);
  lVar7 = param_1 + (ulong)bVar3 * 0x6f8;
  iVar4 = *(int *)(param_1 + 0xc58);
  if (*(uint *)(lVar7 + 0x7c8) < *(uint *)(param_1 + 0xc7c)) {
    if (local_50 < iVar4) {
                    /* try { // try from 01046028 to 01146037 has its CatchHandler @ 0104656c */
      iVar4 = (**(code **)(*(long *)(*(long *)(param_2 + 0x228) + 0x188) + 8))
                        (param_2,0x23,*(undefined8 *)(param_2 + 0x270),&local_50,1);
      if (iVar4 == 0) {
                    /* try { // try from 01046074 to 0114609f has its CatchHandler @ 0104656c */
        lVar6 = param_1 + (ulong)bVar3 * 0x6f8;
        *(long *)(lVar6 + 0x7b0) = *(long *)(lVar6 + 0x7b0) + 1;
        *(long *)(*(long *)(param_1 + 0x828) + (long)*(int *)(param_2 + 0x2d0) * 8) = param_2;
        uVar2 = *(uint *)(lVar7 + 0x7c8);
        *(uint *)(param_2 + 0x2d4) = uVar2;
        lVar7 = *(long *)(lVar6 + 0xe0);
        puVar1 = (undefined4 *)(lVar7 + (long)(int)uVar2 * 8);
        *puVar1 = *(undefined4 *)(param_2 + 0x2d0);
        *(undefined2 *)(puVar1 + 1) = 1;
        local_4c = CONCAT44(local_4c._4_4_,(int)*(short *)(lVar7 + (ulong)uVar2 * 8 + 4));
        lws_plat_insert_socket_into_fds(param_1,param_2);
                    /* try { // try from 010460ec to 011460ff has its CatchHandler @ 0104650c */
        iVar4 = (**(code **)(*(long *)(*(long *)(param_2 + 0x228) + 0x188) + 8))
                          (param_2,0x20,*(undefined8 *)(param_2 + 0x270),&local_50,0);
                    /* try { // try from 0104610c to 01146117 has its CatchHandler @ 010464d8 */
        iVar5 = (**(code **)(*(long *)(*(long *)(param_2 + 0x228) + 0x188) + 8))
                          (param_2,0x24,*(undefined8 *)(param_2 + 0x270),&local_50,1);
        iVar5 = -(uint)(iVar5 != 0 || iVar4 != 0);
      }
      else {
        iVar5 = -1;
      }
    }
    else {
      iVar5 = 1;
      _lws_log(1,"Socket fd %d is too high (%d)\n",local_50,iVar4);
    }
  }
  else {
                    /* try { // try from 01046040 to 0114606b has its CatchHandler @ 01046570 */
    iVar5 = 1;
    _lws_log(1,"Too many fds (%d vs %d)\n",iVar4);
  }
                    /* try { // try from 01046128 to 01146133 has its CatchHandler @ 010464cc */
  return iVar5;
}

