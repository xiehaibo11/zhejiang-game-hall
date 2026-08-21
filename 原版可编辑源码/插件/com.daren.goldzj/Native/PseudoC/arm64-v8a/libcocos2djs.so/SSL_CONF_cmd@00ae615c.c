
undefined8 SSL_CONF_cmd(uint *param_1,char *param_2,long param_3)

{
  int iVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  uint *puVar6;
  ulong uVar7;
  char *__s2;
  
                    /* try { // try from 00ae6168 to 00be61df has its CatchHandler @ 00ae4dc4 */
  if (param_2 == (char *)0x0) {
                    /* try { // try from 00ae61e0 to 00be61ef has its CatchHandler @ 00ae6398 */
    ERR_put_error(0x14,0x14e,0x181,"ssl/ssl_conf.c",0x2ab);
    return 0;
                    /* try { // try from 00ae61f0 to 00be61f3 has its CatchHandler @ 00ae4dc4 */
                    /* try { // try from 00ae61f4 to 00be61fb has its CatchHandler @ 00ae62a4 */
  }
  __s2 = *(char **)(param_1 + 2);
  if (__s2 == (char *)0x0) {
    uVar5 = *param_1;
                    /* try { // try from 00ae61fc to 00be620b has its CatchHandler @ 00ae637c */
    if ((uVar5 & 1) == 0) goto LAB_00ae621c;
    if (*param_2 != '-') {
      return 0xfffffffe;
    }
                    /* try { // try from 00ae620c to 00be621b has its CatchHandler @ 00ae6378 */
    if (param_2[1] == '\0') {
      return 0xfffffffe;
    }
    uVar7 = 1;
  }
  else {
    sVar2 = strlen(param_2);
    uVar7 = *(ulong *)(param_1 + 4);
    if (sVar2 <= uVar7) {
      return 0xfffffffe;
    }
    uVar5 = *param_1;
    if (((uVar5 & 1) != 0) && (iVar1 = strncmp(param_2,__s2,uVar7), iVar1 != 0)) {
      return 0xfffffffe;
    }
    if (((uVar5 >> 1 & 1) != 0) && (iVar1 = strncasecmp(param_2,__s2,uVar7), iVar1 != 0)) {
      return 0xfffffffe;
    }
  }
  param_2 = param_2 + uVar7;
LAB_00ae621c:
                    /* try { // try from 00ae621c to 00be6223 has its CatchHandler @ 00ae62f4 */
                    /* try { // try from 00ae6224 to 00be622b has its CatchHandler @ 00ae62f0 */
  puVar3 = (undefined8 *)FUN_00ae63a8(param_1,param_2);
  if (puVar3 == (undefined8 *)0x0) {
    if ((uVar5 >> 4 & 1) != 0) {
                    /* try { // try from 00ae6264 to 00be6273 has its CatchHandler @ 00ae62b4 */
                    /* try { // try from 00ae6274 to 00be6283 has its CatchHandler @ 00ae62b0 */
      ERR_put_error(0x14,0x14e,0x182,"ssl/ssl_conf.c",0x2c8);
                    /* try { // try from 00ae6284 to 00be6293 has its CatchHandler @ 00ae62ac */
      ERR_add_error_data(2,&DAT_018a46ac,param_2);
    }
                    /* try { // try from 00ae6294 to 00be62a3 has its CatchHandler @ 00ae62a8 */
    return 0xfffffffe;
  }
                    /* try { // try from 00ae622c to 00be6233 has its CatchHandler @ 00ae62ec */
                    /* try { // try from 00ae6234 to 00be6243 has its CatchHandler @ 00ae62c8 */
  if (*(short *)((long)puVar3 + 0x1a) == 4) {
                    /* try { // try from 00ae6244 to 00be6253 has its CatchHandler @ 00ae62bc */
    uVar7 = (long)(puVar3 + -0x38e5b2) >> 5;
    if (uVar7 < 0xf) {
      puVar6 = param_1 + 10;
                    /* catch() { ... } // from try @ 00ae58c0 with catch @ 00ae62c8
                       catch() { ... } // from try @ 00ae6234 with catch @ 00ae62c8 */
                    /* catch() { ... } // from try @ 00ae5098 with catch @ 00ae62cc */
      if (*(long *)puVar6 == 0) {
        return 1;
      }
                    /* catch() { ... } // from try @ 00ae5d78 with catch @ 00ae62dc */
      uVar5 = *(uint *)(&DAT_018a5b50 + uVar7 * 0x10) & 0xf00;
      if (uVar5 != 0) {
                    /* catch() { ... } // from try @ 00ae5748 with catch @ 00ae62ec
                       catch() { ... } // from try @ 00ae622c with catch @ 00ae62ec */
                    /* catch() { ... } // from try @ 00ae52a4 with catch @ 00ae62f0
                       catch() { ... } // from try @ 00ae6224 with catch @ 00ae62f0 */
        if (uVar5 == 0x200) {
          puVar6 = param_1 + 0x1c;
        }
        else {
                    /* catch() { ... } // from try @ 00ae5bc4 with catch @ 00ae62f4
                       catch() { ... } // from try @ 00ae621c with catch @ 00ae62f4 */
                    /* catch() { ... } // from try @ 00ae5fdc with catch @ 00ae62f8 */
          if (uVar5 != 0x100) {
            return 1;
          }
          puVar6 = param_1 + 0x1a;
        }
      }
      puVar6 = *(uint **)puVar6;
                    /* catch() { ... } // from try @ 00ae5ab4 with catch @ 00ae6378
                       catch() { ... } // from try @ 00ae620c with catch @ 00ae6378 */
                    /* catch() { ... } // from try @ 00ae59a8 with catch @ 00ae637c
                       catch() { ... } // from try @ 00ae61fc with catch @ 00ae637c */
                    /* catch() { ... } // from try @ 00ae51dc with catch @ 00ae6380 */
                    /* catch() { ... } // from try @ 00ae4fa8 with catch @ 00ae6384 */
      if ((uVar7 == 6) || (uVar7 == 0xd)) {
                    /* catch() { ... } // from try @ 00ae5914 with catch @ 00ae6388
                       catch() { ... } // from try @ 00ae5d40 with catch @ 00ae6388 */
        uVar5 = *puVar6 & ((uint)*(undefined8 *)(&DAT_018a5b48 + uVar7 * 0x10) ^ 0xffffffff);
      }
      else {
                    /* catch() { ... } // from try @ 00ae4f24 with catch @ 00ae6398
                       catch() { ... } // from try @ 00ae61e0 with catch @ 00ae6398 */
        uVar5 = (uint)*(undefined8 *)(&DAT_018a5b48 + uVar7 * 0x10) | *puVar6;
      }
      *puVar6 = uVar5;
      return 1;
    }
  }
  else {
                    /* catch() { ... } // from try @ 00ae61f4 with catch @ 00ae62a4
                       try { // try from 00ae62a4 to 00be63c7 has its CatchHandler @ 00ae4dc4 */
    if (param_3 == 0) {
      return 0xfffffffd;
    }
                    /* catch() { ... } // from try @ 00ae586c with catch @ 00ae62a8
                       catch() { ... } // from try @ 00ae6294 with catch @ 00ae62a8 */
                    /* catch() { ... } // from try @ 00ae60f4 with catch @ 00ae62ac
                       catch() { ... } // from try @ 00ae6284 with catch @ 00ae62ac */
                    /* catch() { ... } // from try @ 00ae6010 with catch @ 00ae62b0
                       catch() { ... } // from try @ 00ae6274 with catch @ 00ae62b0 */
                    /* catch() { ... } // from try @ 00ae5f70 with catch @ 00ae62b4
                       catch() { ... } // from try @ 00ae6264 with catch @ 00ae62b4 */
    uVar4 = (*(code *)*puVar3)(param_1,param_3);
                    /* catch() { ... } // from try @ 00ae5ee8 with catch @ 00ae62b8
                       catch() { ... } // from try @ 00ae6254 with catch @ 00ae62b8 */
                    /* catch() { ... } // from try @ 00ae5dd0 with catch @ 00ae62bc
                       catch() { ... } // from try @ 00ae6244 with catch @ 00ae62bc */
    if (0 < (int)uVar4) {
      return 2;
    }
                    /* catch() { ... } // from try @ 00ae55a0 with catch @ 00ae6314 */
                    /* catch() { ... } // from try @ 00ae555c with catch @ 00ae6318 */
    if ((int)uVar4 == -2) {
      return uVar4;
    }
    if (((byte)*param_1 >> 4 & 1) != 0) {
      ERR_put_error(0x14,0x14e,0x180,"ssl/ssl_conf.c",0x2c1);
      ERR_add_error_data(4,&DAT_018a46ac,param_2,", value=",param_3);
      return 0;
    }
  }
  return 0;
}

