
int FT_Bitmap_Copy(undefined8 *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  size_t __n;
  void *__src;
  uint uVar6;
  size_t __n_00;
  undefined8 uVar7;
  undefined8 uVar8;
  int local_44;
  
  local_44 = 0;
  if (param_1 == (undefined8 *)0x0) {
    return 0x21;
  }
  if (param_2 == (uint *)0x0) {
    return 6;
  }
  if (param_3 == (uint *)0x0) {
    return 6;
  }
  if (param_2 == param_3) {
    return 0;
  }
                    /* try { // try from 010bb720 to 011bb753 has its CatchHandler @ 010bb720
                       catch() { ... } // from try @ 010bb720 with catch @ 010bb720
                       catch() { ... } // from try @ 010bb78c with catch @ 010bb720 */
  uVar6 = param_2[2];
  uVar2 = param_3[2];
  uVar3 = (int)uVar6 >> 0x1f | 1;
  uVar4 = (int)uVar2 >> 0x1f | 1;
  if (*(long *)(param_2 + 4) == 0) {
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 8);
    uVar7 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_3 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_3 + 4) = uVar7;
    uVar7 = *(undefined8 *)param_2;
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_3 = uVar7;
    if (uVar3 == uVar4) {
      return 0;
    }
    param_3[2] = -param_3[2];
    return 0;
  }
  pvVar5 = *(void **)(param_3 + 4);
  uVar1 = -uVar6;
  if (-1 < (int)uVar6) {
    uVar1 = uVar6;
  }
                    /* try { // try from 010bb754 to 011bb767 has its CatchHandler @ 010bb81c */
  __n = (size_t)(int)uVar1;
  __n_00 = *param_2 * __n;
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)ft_mem_qalloc(*param_1,__n_00,&local_44);
  }
  else {
    uVar6 = -uVar2;
    if (-1 < (int)uVar2) {
      uVar6 = uVar2;
    }
    if ((ulong)*param_3 * (long)(int)uVar6 - __n_00 == 0) goto LAB_010bb7f4;
                    /* try { // try from 010bb784 to 011bb78b has its CatchHandler @ 010bb7ec */
                    /* try { // try from 010bb78c to 011bb837 has its CatchHandler @ 010bb720 */
    pvVar5 = (void *)ft_mem_qrealloc(*param_1,1,(ulong)*param_3 * (long)(int)uVar6,__n_00,pvVar5,
                                     &local_44);
  }
  *(void **)(param_3 + 4) = pvVar5;
                    /* catch() { ... } // from try @ 010bb784 with catch @ 010bb7ec */
  if (local_44 != 0) {
    return local_44;
  }
LAB_010bb7f4:
  uVar7 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_3 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_3 + 4) = uVar7;
  *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 8);
  uVar8 = *(undefined8 *)(param_2 + 2);
  uVar7 = *(undefined8 *)param_2;
  *(void **)(param_3 + 4) = pvVar5;
  *(undefined8 *)(param_3 + 2) = uVar8;
  *(undefined8 *)param_3 = uVar7;
  __src = *(void **)(param_2 + 4);
  if (uVar3 == uVar4) {
                    /* catch() { ... } // from try @ 010bb754 with catch @ 010bb81c */
    memcpy(pvVar5,__src,__n_00);
  }
  else {
    uVar6 = *param_3;
    if (uVar6 != 0) {
                    /* try { // try from 010bb838 to 011bb86b has its CatchHandler @ 010bb838
                       catch() { ... } // from try @ 010bb838 with catch @ 010bb838
                       catch() { ... } // from try @ 010bb8a4 with catch @ 010bb838 */
      pvVar5 = (void *)((long)pvVar5 + (ulong)((uVar6 - 1) * uVar1));
      do {
        memcpy(pvVar5,__src,__n);
        __src = (void *)((long)__src + __n);
        uVar6 = uVar6 - 1;
        pvVar5 = (void *)((long)pvVar5 - __n);
      } while (uVar6 != 0);
    }
  }
                    /* try { // try from 010bb86c to 011bb87f has its CatchHandler @ 010bb934 */
  return local_44;
}

