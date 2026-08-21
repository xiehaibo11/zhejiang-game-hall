
int FUN_01046140(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int local_50 [4];
  
                    /* try { // try from 01046140 to 0114614b has its CatchHandler @ 010464c0 */
                    /* try { // try from 01046158 to 01146163 has its CatchHandler @ 010464b4 */
  local_50[0] = *(int *)(param_1 + 0x2d0);
  lVar7 = *(long *)(param_1 + 0x220);
  local_50[2] = 0;
  local_50[1] = 0;
                    /* try { // try from 01046170 to 0114617b has its CatchHandler @ 010464a8 */
  if ((*(byte *)(param_1 + 0x2f6) >> 4 & 1) == 0) {
    if (*(int *)(lVar7 + 0xc58) < local_50[0]) {
                    /* try { // try from 0104618c to 01146197 has its CatchHandler @ 0104649c */
      iVar2 = 1;
      _lws_log(1,"fd %d too high (%d)\n");
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x304);
                    /* try { // try from 010461d4 to 011461df has its CatchHandler @ 01046478 */
                    /* try { // try from 010461ec to 011461f7 has its CatchHandler @ 0104646c */
      iVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 0x228) + 0x188) + 8))
                        (param_1,0x23,*(undefined8 *)(param_1 + 0x270),local_50,1);
      if (iVar2 == 0) {
                    /* try { // try from 01046200 to 01146213 has its CatchHandler @ 01046360 */
        if (*(undefined8 **)(param_1 + 0x250) != (undefined8 *)0x0) {
          **(undefined8 **)(param_1 + 0x250) = *(undefined8 *)(param_1 + 600);
        }
                    /* try { // try from 01046214 to 01146347 has its CatchHandler @ 01045eb0 */
        if (*(long *)(param_1 + 600) != 0) {
          *(undefined8 *)(*(long *)(param_1 + 600) + 0x250) = *(undefined8 *)(param_1 + 0x250);
        }
        *(undefined8 *)(param_1 + 0x250) = 0;
        *(undefined8 *)(param_1 + 600) = 0;
        iVar2 = *(int *)(param_1 + 0x2d4);
        FUN_01057668(param_1,0x8000000b);
        lVar8 = lVar7 + (ulong)bVar1 * 0x6f8;
        *(undefined8 *)(*(long *)(lVar8 + 0xe0) + (long)iVar2 * 8) =
             *(undefined8 *)(*(long *)(lVar8 + 0xe0) + (ulong)(*(int *)(lVar8 + 0x7c8) - 1) * 8);
        lws_plat_delete_socket_from_fds(lVar7,param_1,iVar2);
        lVar4 = (long)*(int *)(*(long *)(lVar8 + 0xe0) + (long)iVar2 * 8);
        lVar5 = *(long *)(lVar7 + 0x828);
        lVar6 = *(long *)(lVar5 + lVar4 * 8);
        if (lVar6 == 0) {
          _lws_log(1,"no wsi found for sock fd %d at pos %d, pt->fds_count=%d\n",lVar4,iVar2,
                   *(undefined4 *)(lVar8 + 0x7c8));
          lVar5 = *(long *)(lVar7 + 0x828);
        }
        else {
          *(int *)(lVar6 + 0x2d4) = iVar2;
        }
        *(undefined8 *)(lVar5 + (long)*(int *)(param_1 + 0x2d0) * 8) = 0;
        *(undefined4 *)(param_1 + 0x2d4) = 0xffffffff;
        if (*(int *)(param_1 + 0x2d0) < 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 0x228) + 0x188) + 8))
                            (param_1,0x21,*(undefined8 *)(param_1 + 0x270),local_50,0);
          iVar2 = -(uint)(iVar2 != 0);
        }
        iVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 0x228) + 0x188) + 8))
                          (param_1,0x24,*(undefined8 *)(param_1 + 0x270),local_50,1);
        if (iVar3 != 0) {
          iVar2 = -1;
        }
      }
      else {
        iVar2 = -1;
      }
    }
  }
  else {
    if (*(undefined8 **)(param_1 + 0x250) != (undefined8 *)0x0) {
                    /* try { // try from 010461a0 to 011461ab has its CatchHandler @ 01046490 */
      **(undefined8 **)(param_1 + 0x250) = *(undefined8 *)(param_1 + 600);
    }
    if (*(long *)(param_1 + 600) != 0) {
      *(undefined8 *)(*(long *)(param_1 + 600) + 0x250) = *(undefined8 *)(param_1 + 0x250);
    }
                    /* try { // try from 010461bc to 011461c7 has its CatchHandler @ 01046484 */
    iVar2 = 0;
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(undefined8 *)(param_1 + 600) = 0;
  }
  return iVar2;
}

