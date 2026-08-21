
void png_set_tRNS(long param_1,long param_2,void *param_3,int param_4,undefined8 *param_5)

{
  ushort uVar1;
  int iVar2;
  void *__dest;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if (param_3 != (void *)0x0) {
                    /* try { // try from 010d48b8 to 011d48c3 has its CatchHandler @ 010d51fc */
    png_free_data(param_1,param_2,0x2000,0);
                    /* try { // try from 010d48c4 to 011d4927 has its CatchHandler @ 010d4230 */
    __dest = (void *)png_malloc(param_1,0x100);
    *(void **)(param_2 + 0xb8) = __dest;
    *(void **)(param_1 + 0x330) = __dest;
    if (param_4 - 1U < 0x100) {
      memcpy(__dest,param_3,(long)param_4);
    }
  }
  if (param_5 == (undefined8 *)0x0) {
    *(short *)(param_2 + 0x22) = (short)param_4;
    if (param_4 == 0) {
      return;
    }
    goto LAB_010d4974;
  }
  iVar2 = 1 << (ulong)(*(byte *)(param_2 + 0x24) & 0x1f);
  if (*(char *)(param_2 + 0x25) == '\x02') {
                    /* try { // try from 010d4928 to 011d4933 has its CatchHandler @ 010d51f8 */
                    /* try { // try from 010d4934 to 011d4997 has its CatchHandler @ 010d4230 */
    if (((int)(uint)*(ushort *)((long)param_5 + 2) <= iVar2) &&
       ((int)(uint)*(ushort *)((long)param_5 + 4) <= iVar2)) {
      uVar1 = *(ushort *)((long)param_5 + 6);
      goto joined_r0x010d4944;
    }
LAB_010d4948:
    png_warning(param_1,"tRNS chunk has out-of-range samples for bit_depth");
  }
  else if (*(char *)(param_2 + 0x25) == '\0') {
    uVar1 = *(ushort *)(param_5 + 1);
joined_r0x010d4944:
    if (iVar2 < (int)(uint)uVar1) goto LAB_010d4948;
  }
  if (param_4 == 0) {
    param_4 = 1;
  }
  *(undefined2 *)(param_2 + 200) = *(undefined2 *)(param_5 + 1);
  uVar3 = *param_5;
  *(short *)(param_2 + 0x22) = (short)param_4;
  *(undefined8 *)(param_2 + 0xc0) = uVar3;
LAB_010d4974:
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x10;
  *(uint *)(param_2 + 0x11c) = *(uint *)(param_2 + 0x11c) | 0x2000;
                    /* try { // try from 010d4998 to 011d49a3 has its CatchHandler @ 010d51f4 */
  return;
}

