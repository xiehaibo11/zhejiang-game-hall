
undefined8 *
ssl_add_serverhello_tlsext(int *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  undefined *__src;
  void *__src_00;
  code *pcVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  size_t sVar8;
  uint local_4c;
  int local_48;
  undefined4 uStack_44;
  undefined8 *local_38;
  
                    /* try { // try from 00addabc to 00bddacf has its CatchHandler @ 00addcb8 */
  lVar6 = *(long *)(*(long *)(param_1 + 0x24) + 0x228);
  if (((*(byte *)(lVar6 + 0x14) >> 2 & 1) == 0) && ((*(byte *)(lVar6 + 0x18) >> 3 & 1) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = *(long *)(*(long *)(param_1 + 0x5e) + 0x118) != 0;
  }
  local_38 = (undefined8 *)((long)param_2 + 2);
  if (param_3 <= local_38) {
    return (undefined8 *)0x0;
  }
  if (*(int *)(*(long *)(param_1 + 0x24) + 0x3c4) != 0) {
    iVar3 = ssl_add_serverhello_renegotiate_ext(param_1,0,&local_48,0);
    if (iVar3 == 0) {
      iVar3 = 0x5ef;
      goto LAB_00addc00;
    }
    if (param_3 <= local_38) {
      return (undefined8 *)0x0;
    }
                    /* try { // try from 00addb48 to 00bddb4f has its CatchHandler @ 00addd38 */
    if ((ulong)((long)param_3 - (long)local_38) < (long)local_48 + 4U) {
      return (undefined8 *)0x0;
    }
    *(undefined1 *)local_38 = 0xff;
                    /* try { // try from 00addb6c to 00bddbc7 has its CatchHandler @ 00addd48 */
    *(undefined1 *)((long)local_38 + 1) = 1;
    *(char *)((long)local_38 + 2) = (char)((uint)local_48 >> 8);
    *(char *)((long)local_38 + 3) = (char)local_48;
    local_38 = (undefined8 *)((long)local_38 + 4);
    iVar3 = ssl_add_serverhello_renegotiate_ext(param_1,local_38,&local_48,local_48);
    if (iVar3 == 0) {
      iVar3 = 0x5ff;
      goto LAB_00addc00;
    }
    local_38 = (undefined8 *)((long)local_38 + (long)local_48);
  }
  if (*param_1 == 0x300) goto LAB_00addbc8;
  if (((param_1[0x2c] == 0) && (param_1[0x8c] == 1)) &&
     (*(long *)(*(long *)(param_1 + 0x5e) + 0x108) != 0)) {
                    /* try { // try from 00addc44 to 00bddc53 has its CatchHandler @ 00addd38 */
    if (param_3 <= local_38) {
      return (undefined8 *)0x0;
    }
    if ((ulong)((long)param_3 - (long)local_38) < 4) {
      return (undefined8 *)0x0;
    }
                    /* try { // try from 00addc54 to 00bddc9f has its CatchHandler @ 00add928 */
    *(undefined1 *)local_38 = 0;
    *(undefined1 *)((long)local_38 + 1) = 0;
    *(undefined1 *)((long)local_38 + 2) = 0;
    *(undefined1 *)((long)local_38 + 3) = 0;
    local_38 = (undefined8 *)((long)local_38 + 4);
  }
  if (bVar2) {
    __src = *(undefined **)(param_1 + 0xa4);
    if (__src == (undefined *)0x0) {
      __src = &UNK_018a53d8;
      sVar8 = 2;
      if ((*(byte *)(*(long *)(param_1 + 0x52) + 0x1e) & 3) == 0) {
        sVar8 = 3;
      }
    }
    else {
      sVar8 = *(size_t *)(param_1 + 0xa2);
      if (0xff < sVar8) {
                    /* try { // try from 00addca0 to 00bddca7 has its CatchHandler @ 00addca8 */
                    /* catch() { ... } // from try @ 00adda4c with catch @ 00addca8
                       catch() { ... } // from try @ 00addca0 with catch @ 00addca8
                       try { // try from 00addca8 to 00bddd9f has its CatchHandler @ 00add928 */
        iVar3 = 0x621;
        goto LAB_00addc00;
      }
    }
    if (param_3 <= local_38) {
      return (undefined8 *)0x0;
    }
    if ((ulong)((long)param_3 - (long)local_38) < sVar8 + 5) {
      return (undefined8 *)0x0;
    }
                    /* catch() { ... } // from try @ 00adda8c with catch @ 00addcf4 */
    *(undefined1 *)local_38 = 0;
    *(undefined1 *)((long)local_38 + 1) = 0xb;
                    /* catch() { ... } // from try @ 00adda78 with catch @ 00addd14 */
    *(char *)((long)local_38 + 2) = (char)(sVar8 + 1 >> 8);
    *(char *)((long)local_38 + 3) = (char)(sVar8 + 1);
    puVar1 = (undefined8 *)((long)local_38 + 5);
    *(char *)((long)local_38 + 4) = (char)sVar8;
    local_38 = puVar1;
                    /* catch() { ... } // from try @ 00addb48 with catch @ 00addd38
                       catch() { ... } // from try @ 00addc44 with catch @ 00addd38 */
    memcpy(puVar1,__src,sVar8);
    local_38 = (undefined8 *)((long)local_38 + sVar8);
                    /* catch() { ... } // from try @ 00addb6c with catch @ 00addd48 */
  }
  if (((param_1[0xa1] == 0) || ((*(byte *)((long)param_1 + 0x1e5) >> 6 & 1) != 0)) ||
     (iVar3 = ssl_security(param_1,10,0,0,0), iVar3 == 0)) {
    param_1[0xa1] = 0;
    iVar3 = param_1[0x98];
  }
  else {
    if (param_3 <= local_38) {
      return (undefined8 *)0x0;
    }
    if ((ulong)((long)param_3 - (long)local_38) < 4) {
      return (undefined8 *)0x0;
    }
    *(undefined1 *)local_38 = 0;
    *(undefined1 *)((long)local_38 + 1) = 0x23;
                    /* catch() { ... } // from try @ 00addf44 with catch @ 00addda0 */
    *(undefined1 *)((long)local_38 + 2) = 0;
    *(undefined1 *)((long)local_38 + 3) = 0;
    local_38 = (undefined8 *)((long)local_38 + 4);
    iVar3 = param_1[0x98];
  }
  if (iVar3 != 0) {
                    /* try { // try from 00addde0 to 00bdddf7 has its CatchHandler @ 00addfa4 */
    if (param_3 <= local_38) {
      return (undefined8 *)0x0;
    }
    if ((ulong)((long)param_3 - (long)local_38) < 4) {
      return (undefined8 *)0x0;
    }
    *(undefined1 *)local_38 = 0;
    *(undefined1 *)((long)local_38 + 1) = 5;
                    /* try { // try from 00adde10 to 00bdde23 has its CatchHandler @ 00addf84 */
    *(undefined1 *)((long)local_38 + 2) = 0;
    *(undefined1 *)((long)local_38 + 3) = 0;
    local_38 = (undefined8 *)((long)local_38 + 4);
  }
  if (((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x68) >> 3 & 1) != 0) &&
     (*(long *)(param_1 + 0xbc) != 0)) {
    iVar3 = ssl_add_serverhello_use_srtp_ext(param_1,0,&local_48,0);
    if (iVar3 != 0) {
      iVar3 = 0x65c;
LAB_00addc00:
      ERR_put_error(0x14,0x116,0x44,"ssl/t1_lib.c",iVar3);
      return (undefined8 *)0x0;
    }
                    /* try { // try from 00adde94 to 00bdde9b has its CatchHandler @ 00addfb8 */
    if (param_3 <= local_38) {
      return (undefined8 *)0x0;
    }
    if ((ulong)((long)param_3 - (long)local_38) < (long)local_48 + 4U) {
      return (undefined8 *)0x0;
    }
    *(undefined1 *)local_38 = 0;
                    /* try { // try from 00addeb8 to 00bddedf has its CatchHandler @ 00addfc8 */
    *(undefined1 *)((long)local_38 + 1) = 0xe;
    *(char *)((long)local_38 + 2) = (char)((uint)local_48 >> 8);
    *(char *)((long)local_38 + 3) = (char)local_48;
    local_38 = (undefined8 *)((long)local_38 + 4);
    iVar3 = ssl_add_serverhello_use_srtp_ext(param_1,local_38,&local_48,local_48);
    if (iVar3 != 0) {
      iVar3 = 0x66b;
      goto LAB_00addc00;
    }
    local_38 = (undefined8 *)((long)local_38 + (long)local_48);
  }
                    /* try { // try from 00addf34 to 00bddf43 has its CatchHandler @ 00addfb8 */
                    /* try { // try from 00addf44 to 00bde01f has its CatchHandler @ 00addda0 */
  if (((*(uint *)(*(long *)(*(long *)(param_1 + 0x24) + 0x228) + 0x10) & 0xfffe) == 0x80) &&
     (iVar3 = SSL_get_options(param_1), iVar3 < 0)) {
    if (param_3 <= local_38) {
      return (undefined8 *)0x0;
    }
    if ((ulong)((long)param_3 - (long)local_38) < 0x24) {
      return (undefined8 *)0x0;
    }
                    /* catch() { ... } // from try @ 00ade06c with catch @ 00ade0b4 */
    *(undefined4 *)(local_38 + 4) = 0x17020203;
                    /* catch() { ... } // from try @ 00ade138 with catch @ 00ade0d0 */
    local_38[1] = 0x9020203852a0606;
    *local_38 = 0x8301e302000e8fd;
    local_38[3] = 0x852a060608301602;
    local_38[2] = 0x203852a06060830;
    local_38 = (undefined8 *)((long)local_38 + 0x24);
  }
  iVar3 = *(int *)(*(long *)(param_1 + 0x24) + 0x3c8);
  *(undefined4 *)(*(long *)(param_1 + 0x24) + 0x3c8) = 0;
  if (iVar3 != 0) {
    pcVar4 = *(code **)(*(long *)(param_1 + 0x6e) + 0x2c8);
                    /* catch() { ... } // from try @ 00adde10 with catch @ 00addf84 */
    if ((pcVar4 != (code *)0x0) &&
       (iVar3 = (*pcVar4)(param_1,&local_48,&local_4c,
                          *(undefined8 *)(*(long *)(param_1 + 0x6e) + 0x2d0)), iVar3 == 0)) {
      if (param_3 <= local_38) {
        return (undefined8 *)0x0;
      }
      if ((ulong)((long)param_3 - (long)local_38) < (ulong)(local_4c + 4)) {
        return (undefined8 *)0x0;
      }
      *(undefined1 *)local_38 = 0x33;
      *(undefined1 *)((long)local_38 + 1) = 0x74;
      *(char *)((long)local_38 + 2) = (char)(local_4c >> 8);
                    /* try { // try from 00ade128 to 00bde137 has its CatchHandler @ 00ade16c */
      *(char *)((long)local_38 + 3) = (char)local_4c;
                    /* try { // try from 00ade138 to 00bde187 has its CatchHandler @ 00ade0d0 */
      local_38 = (undefined8 *)((long)local_38 + 4);
      memcpy(local_38,(void *)CONCAT44(uStack_44,local_48),(ulong)local_4c);
      local_38 = (undefined8 *)((long)local_38 + (ulong)local_4c);
      *(undefined4 *)(*(long *)(param_1 + 0x24) + 0x3c8) = 1;
    }
  }
  iVar3 = custom_ext_add(param_1,1,&local_38,param_3,param_4);
  if (iVar3 == 0) {
    return (undefined8 *)0x0;
  }
                    /* catch() { ... } // from try @ 00addde0 with catch @ 00addfa4 */
  puVar5 = *(ulong **)(param_1 + 0x24);
  uVar7 = *puVar5;
  if (((uint)uVar7 >> 8 & 1) == 0) {
LAB_00addff4:
    if (((uint)uVar7 >> 9 & 1) == 0) goto LAB_00addff8;
LAB_00ade1c4:
    if (param_3 <= local_38) {
      return (undefined8 *)0x0;
    }
    if ((ulong)((long)param_3 - (long)local_38) < 4) {
      return (undefined8 *)0x0;
    }
    *(undefined1 *)local_38 = 0;
    *(undefined1 *)((long)local_38 + 1) = 0x17;
    *(undefined1 *)((long)local_38 + 2) = 0;
    *(undefined1 *)((long)local_38 + 3) = 0;
    local_38 = (undefined8 *)((long)local_38 + 4);
    puVar5 = *(ulong **)(param_1 + 0x24);
    __src_00 = (void *)puVar5[0x7a];
  }
  else {
                    /* catch() { ... } // from try @ 00adde94 with catch @ 00addfb8
                       catch() { ... } // from try @ 00addf34 with catch @ 00addfb8 */
                    /* catch() { ... } // from try @ 00addeb8 with catch @ 00addfc8 */
    if (((((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x68) >> 3 & 1) != 0) ||
         (*(int *)(puVar5[0x45] + 0x20) == 0x40)) ||
        (iVar3 = *(int *)(puVar5[0x45] + 0x1c), iVar3 == 4)) ||
       ((iVar3 == 0x40000 || (iVar3 == 0x400)))) {
      uVar7 = uVar7 & 0xfffffffffffffeff;
      *puVar5 = uVar7;
      goto LAB_00addff4;
    }
                    /* catch() { ... } // from try @ 00ade128 with catch @ 00ade16c */
    if (param_3 <= local_38) {
      return (undefined8 *)0x0;
    }
    if ((ulong)((long)param_3 - (long)local_38) < 4) {
      return (undefined8 *)0x0;
    }
    *(undefined1 *)local_38 = 0;
                    /* try { // try from 00ade188 to 00bde2b3 has its CatchHandler @ 00ade188
                       catch() { ... } // from try @ 00ade188 with catch @ 00ade188
                       catch() { ... } // from try @ 00ade2bc with catch @ 00ade188 */
    *(undefined1 *)((long)local_38 + 1) = 0x16;
    *(undefined1 *)((long)local_38 + 2) = 0;
    *(undefined1 *)((long)local_38 + 3) = 0;
    local_38 = (undefined8 *)((long)local_38 + 4);
    puVar5 = *(ulong **)(param_1 + 0x24);
    if (((uint)*puVar5 >> 9 & 1) != 0) goto LAB_00ade1c4;
LAB_00addff8:
    __src_00 = (void *)puVar5[0x7a];
  }
  if (__src_00 != (void *)0x0) {
    if (param_3 <= local_38) {
      return (undefined8 *)0x0;
    }
    sVar8 = puVar5[0x7b];
    if ((ulong)((long)param_3 - (long)local_38) < sVar8 + 7) {
      return (undefined8 *)0x0;
    }
                    /* catch() { ... } // from try @ 00ade080 with catch @ 00ade020 */
    *(undefined1 *)local_38 = 0;
    *(undefined1 *)((long)local_38 + 1) = 0x10;
    *(char *)((long)local_38 + 2) = (char)(sVar8 + 3 >> 8);
    *(char *)((long)local_38 + 3) = (char)(sVar8 + 3);
    *(char *)((long)local_38 + 4) = (char)(sVar8 + 1 >> 8);
                    /* try { // try from 00ade06c to 00bde07f has its CatchHandler @ 00ade0b4 */
    *(char *)((long)local_38 + 5) = (char)(sVar8 + 1);
    puVar1 = (undefined8 *)((long)local_38 + 7);
                    /* try { // try from 00ade080 to 00bde0cf has its CatchHandler @ 00ade020 */
    *(char *)((long)local_38 + 6) = (char)sVar8;
    local_38 = puVar1;
    memcpy(puVar1,__src_00,sVar8);
    local_38 = (undefined8 *)((long)local_38 + sVar8);
  }
LAB_00addbc8:
  iVar3 = ((int)local_38 - (int)param_2) + -2;
  if (iVar3 != 0) {
    *(char *)param_2 = (char)((uint)iVar3 >> 8);
    *(char *)((long)param_2 + 1) = (char)iVar3;
    return local_38;
  }
  return param_2;
}

