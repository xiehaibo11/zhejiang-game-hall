
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
      goto LAB_00aecab4;
    }
    if (param_3 <= local_38) {
      return (undefined8 *)0x0;
    }
    if ((ulong)((long)param_3 - (long)local_38) < (long)local_48 + 4U) {
      return (undefined8 *)0x0;
    }
    *(undefined1 *)local_38 = 0xff;
    *(undefined1 *)((long)local_38 + 1) = 1;
    *(char *)((long)local_38 + 2) = (char)((uint)local_48 >> 8);
    *(char *)((long)local_38 + 3) = (char)local_48;
    local_38 = (undefined8 *)((long)local_38 + 4);
    iVar3 = ssl_add_serverhello_renegotiate_ext(param_1,local_38,&local_48,local_48);
    if (iVar3 == 0) {
      iVar3 = 0x5ff;
      goto LAB_00aecab4;
    }
    local_38 = (undefined8 *)((long)local_38 + (long)local_48);
  }
                    /* try { // try from 00aeca70 to 00beca77 has its CatchHandler @ 00aecb40 */
                    /* try { // try from 00aeca78 to 00becb83 has its CatchHandler @ 00aec934 */
  if (*param_1 == 0x300) goto LAB_00aeca7c;
  if (((param_1[0x2c] == 0) && (param_1[0x8c] == 1)) &&
     (*(long *)(*(long *)(param_1 + 0x5e) + 0x108) != 0)) {
    if (param_3 <= local_38) {
      return (undefined8 *)0x0;
    }
    if ((ulong)((long)param_3 - (long)local_38) < 4) {
      return (undefined8 *)0x0;
    }
    *(undefined1 *)local_38 = 0;
    *(undefined1 *)((long)local_38 + 1) = 0;
    *(undefined1 *)((long)local_38 + 2) = 0;
    *(undefined1 *)((long)local_38 + 3) = 0;
    local_38 = (undefined8 *)((long)local_38 + 4);
  }
  if (bVar2) {
    __src = *(undefined **)(param_1 + 0xa4);
                    /* catch() { ... } // from try @ 00aeca70 with catch @ 00aecb40 */
    if (__src == (undefined *)0x0) {
      __src = &UNK_013d3858;
      sVar8 = 2;
      if ((*(byte *)(*(long *)(param_1 + 0x52) + 0x1e) & 3) == 0) {
        sVar8 = 3;
      }
    }
    else {
      sVar8 = *(size_t *)(param_1 + 0xa2);
      if (0xff < sVar8) {
        iVar3 = 0x621;
        goto LAB_00aecab4;
      }
    }
    if (param_3 <= local_38) {
      return (undefined8 *)0x0;
    }
    if ((ulong)((long)param_3 - (long)local_38) < sVar8 + 5) {
      return (undefined8 *)0x0;
    }
    *(undefined1 *)local_38 = 0;
    *(undefined1 *)((long)local_38 + 1) = 0xb;
    *(char *)((long)local_38 + 2) = (char)(sVar8 + 1 >> 8);
    *(char *)((long)local_38 + 3) = (char)(sVar8 + 1);
    puVar1 = (undefined8 *)((long)local_38 + 5);
    *(char *)((long)local_38 + 4) = (char)sVar8;
    local_38 = puVar1;
    memcpy(puVar1,__src,sVar8);
    local_38 = (undefined8 *)((long)local_38 + sVar8);
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
    *(undefined1 *)((long)local_38 + 2) = 0;
    *(undefined1 *)((long)local_38 + 3) = 0;
    local_38 = (undefined8 *)((long)local_38 + 4);
    iVar3 = param_1[0x98];
  }
  if (iVar3 != 0) {
    if (param_3 <= local_38) {
      return (undefined8 *)0x0;
    }
    if ((ulong)((long)param_3 - (long)local_38) < 4) {
      return (undefined8 *)0x0;
    }
    *(undefined1 *)local_38 = 0;
    *(undefined1 *)((long)local_38 + 1) = 5;
    *(undefined1 *)((long)local_38 + 2) = 0;
    *(undefined1 *)((long)local_38 + 3) = 0;
    local_38 = (undefined8 *)((long)local_38 + 4);
  }
  if (((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x68) >> 3 & 1) != 0) &&
     (*(long *)(param_1 + 0xbc) != 0)) {
    iVar3 = ssl_add_serverhello_use_srtp_ext(param_1,0,&local_48,0);
    if (iVar3 != 0) {
      iVar3 = 0x65c;
LAB_00aecab4:
      ERR_put_error(0x14,0x116,0x44,"ssl/t1_lib.c",iVar3);
      return (undefined8 *)0x0;
    }
    if (param_3 <= local_38) {
      return (undefined8 *)0x0;
    }
    if ((ulong)((long)param_3 - (long)local_38) < (long)local_48 + 4U) {
      return (undefined8 *)0x0;
    }
    *(undefined1 *)local_38 = 0;
    *(undefined1 *)((long)local_38 + 1) = 0xe;
    *(char *)((long)local_38 + 2) = (char)((uint)local_48 >> 8);
    *(char *)((long)local_38 + 3) = (char)local_48;
    local_38 = (undefined8 *)((long)local_38 + 4);
    iVar3 = ssl_add_serverhello_use_srtp_ext(param_1,local_38,&local_48,local_48);
    if (iVar3 != 0) {
      iVar3 = 0x66b;
      goto LAB_00aecab4;
    }
    local_38 = (undefined8 *)((long)local_38 + (long)local_48);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aece60 with catch @ 00aecdf0
                       catch(type#1 @ 00000000) { ... } // from try @ 00aece90 with catch @ 00aecdf0
                       catch(type#1 @ 00000000) { ... } // from try @ 00aecec0 with catch @ 00aecdf0
                       catch(type#1 @ 00000000) { ... } // from try @ 00aecee8 with catch @ 00aecdf0
                       catch(type#1 @ 00000000) { ... } // from try @ 00aecf14 with catch @ 00aecdf0
                        */
  if (((*(uint *)(*(long *)(*(long *)(param_1 + 0x24) + 0x228) + 0x10) & 0xfffe) == 0x80) &&
     (iVar3 = SSL_get_options(param_1), iVar3 < 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aeceb8 with catch @ 00aecf50
                       catch(type#1 @ 00000000) { ... } // from try @ 00aecee0 with catch @ 00aecf50
                       catch(type#1 @ 00000000) { ... } // from try @ 00aecf08 with catch @ 00aecf50
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aece58 with catch @ 00aecf54
                       catch(type#1 @ 00000000) { ... } // from try @ 00aece84 with catch @ 00aecf54
                        */
    if (param_3 <= local_38) {
      return (undefined8 *)0x0;
    }
    if ((ulong)((long)param_3 - (long)local_38) < 0x24) {
      return (undefined8 *)0x0;
    }
    *(undefined4 *)(local_38 + 4) = 0x17020203;
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
      *(char *)((long)local_38 + 3) = (char)local_4c;
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
                    /* try { // try from 00aece58 to 00bece5f has its CatchHandler @ 00aecf54 */
  puVar5 = *(ulong **)(param_1 + 0x24);
  uVar7 = *puVar5;
                    /* try { // try from 00aece60 to 00bece83 has its CatchHandler @ 00aecdf0 */
  if (((uint)uVar7 >> 8 & 1) == 0) {
LAB_00aecea8:
    if (((uint)uVar7 >> 9 & 1) == 0) goto LAB_00aeceac;
LAB_00aed078:
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
                    /* try { // try from 00aece84 to 00bece8f has its CatchHandler @ 00aecf54 */
                    /* try { // try from 00aece90 to 00beceb7 has its CatchHandler @ 00aecdf0 */
    if (((((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x68) >> 3 & 1) != 0) ||
         (*(int *)(puVar5[0x45] + 0x20) == 0x40)) ||
        (iVar3 = *(int *)(puVar5[0x45] + 0x1c), iVar3 == 4)) ||
       ((iVar3 == 0x40000 || (iVar3 == 0x400)))) {
      uVar7 = uVar7 & 0xfffffffffffffeff;
      *puVar5 = uVar7;
      goto LAB_00aecea8;
    }
    if (param_3 <= local_38) {
      return (undefined8 *)0x0;
    }
    if ((ulong)((long)param_3 - (long)local_38) < 4) {
      return (undefined8 *)0x0;
    }
    *(undefined1 *)local_38 = 0;
    *(undefined1 *)((long)local_38 + 1) = 0x16;
    *(undefined1 *)((long)local_38 + 2) = 0;
    *(undefined1 *)((long)local_38 + 3) = 0;
    local_38 = (undefined8 *)((long)local_38 + 4);
    puVar5 = *(ulong **)(param_1 + 0x24);
    if (((uint)*puVar5 >> 9 & 1) != 0) goto LAB_00aed078;
LAB_00aeceac:
    __src_00 = (void *)puVar5[0x7a];
  }
  if (__src_00 != (void *)0x0) {
                    /* try { // try from 00aeceb8 to 00becebf has its CatchHandler @ 00aecf50 */
    if (param_3 <= local_38) {
      return (undefined8 *)0x0;
    }
                    /* try { // try from 00aecec0 to 00becedf has its CatchHandler @ 00aecdf0 */
    sVar8 = puVar5[0x7b];
    if ((ulong)((long)param_3 - (long)local_38) < sVar8 + 7) {
      return (undefined8 *)0x0;
    }
    *(undefined1 *)local_38 = 0;
                    /* try { // try from 00aecee0 to 00becee7 has its CatchHandler @ 00aecf50 */
    *(undefined1 *)((long)local_38 + 1) = 0x10;
                    /* try { // try from 00aecee8 to 00becf07 has its CatchHandler @ 00aecdf0 */
    *(char *)((long)local_38 + 2) = (char)(sVar8 + 3 >> 8);
    *(char *)((long)local_38 + 3) = (char)(sVar8 + 3);
                    /* try { // try from 00aecf08 to 00becf13 has its CatchHandler @ 00aecf50 */
                    /* try { // try from 00aecf14 to 00becf57 has its CatchHandler @ 00aecdf0 */
    *(char *)((long)local_38 + 4) = (char)(sVar8 + 1 >> 8);
    *(char *)((long)local_38 + 5) = (char)(sVar8 + 1);
    puVar1 = (undefined8 *)((long)local_38 + 7);
    *(char *)((long)local_38 + 6) = (char)sVar8;
    local_38 = puVar1;
    memcpy(puVar1,__src_00,sVar8);
    local_38 = (undefined8 *)((long)local_38 + sVar8);
  }
LAB_00aeca7c:
  iVar3 = ((int)local_38 - (int)param_2) + -2;
  if (iVar3 != 0) {
    *(char *)param_2 = (char)((uint)iVar3 >> 8);
    *(char *)((long)param_2 + 1) = (char)iVar3;
    return local_38;
  }
  return param_2;
}

