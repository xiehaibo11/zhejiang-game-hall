
void lws_client_reset(undefined8 *param_1,byte param_2,undefined8 param_3,undefined2 param_4,
                     char *param_5,undefined8 param_6)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  char local_2e0 [332];
  char local_194 [300];
  long local_68;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 00aab7fc to 00bab7ff has its CatchHandler @ 00aab8dc */
  local_68 = *(long *)(lVar1 + 0x28);
  memset(local_194,0,300);
  memset(local_2e0 + 0x20,0,300);
  local_2f0 = 0;
  uStack_2e8 = 0;
  local_2e0[8] = '\0';
  local_2e0[9] = '\0';
  local_2e0[10] = '\0';
  local_2e0[0xb] = '\0';
  local_2e0[0xc] = '\0';
  local_2e0[0xd] = '\0';
  local_2e0[0xe] = '\0';
  local_2e0[0xf] = '\0';
  local_2e0[0] = '\0';
  local_2e0[1] = '\0';
  local_2e0[2] = '\0';
  local_2e0[3] = '\0';
  local_2e0[4] = '\0';
  local_2e0[5] = '\0';
  local_2e0[6] = '\0';
  local_2e0[7] = '\0';
  local_2e0[0x18] = '\0';
  local_2e0[0x19] = '\0';
  local_2e0[0x1a] = '\0';
  local_2e0[0x1b] = '\0';
  local_2e0[0x1c] = '\0';
  local_2e0[0x1d] = '\0';
  local_2e0[0x1e] = '\0';
  local_2e0[0x1f] = '\0';
  local_2e0[0x10] = '\0';
  local_2e0[0x11] = '\0';
  local_2e0[0x12] = '\0';
  local_2e0[0x13] = '\0';
  local_2e0[0x14] = '\0';
  local_2e0[0x15] = '\0';
  local_2e0[0x16] = '\0';
  local_2e0[0x17] = '\0';
  puVar5 = (undefined8 *)*param_1;
  if (*(char *)((long)puVar5 + 0x306) == '\x03') {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aab720 with catch @ 00aab860
                        */
    _lws_log(1,"%s: Too many redirects\n","lws_client_reset");
  }
  else {
    *(char *)((long)puVar5 + 0x306) = *(char *)((long)puVar5 + 0x306) + '\x01';
    pcVar4 = (char *)FUN_00aa581c(puVar5,0x58);
    if (pcVar4 != (char *)0x0) {
      strncpy(local_194,pcVar4,299);
    }
    pcVar4 = (char *)FUN_00aa581c(puVar5,0x54);
    if (pcVar4 != (char *)0x0) {
      strncpy(local_2e0 + 0x20,pcVar4,299);
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aab7fc with catch @ 00aab8dc
                        */
    pcVar4 = (char *)FUN_00aa581c(puVar5,0x59);
    if (pcVar4 != (char *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aab7b0 with catch @ 00aab8f0
                        */
      strncpy(local_2e0,pcVar4,0x1f);
    }
    pcVar4 = (char *)FUN_00aa581c(puVar5,0x5a);
    if (pcVar4 != (char *)0x0) {
      strncpy(local_2e0,pcVar4,0xf);
    }
    lws_ssl_close(puVar5);
                    /* try { // try from 00aab928 to 00bab973 has its CatchHandler @ 00aab928
                       catch() { ... } // from try @ 00aab928 with catch @ 00aab928
                       catch() { ... } // from try @ 00aab97c with catch @ 00aab928 */
    if ((*(byte *)(puVar5[0x44] + 0xc79) >> 2 & 1) == 0) {
      FUN_00aa39bc(puVar5);
    }
    else {
      FUN_00ab571c(puVar5);
    }
    *(undefined4 *)(puVar5 + 0x5a) = 0xffffffff;
    puVar5[0x49] = 0;
    *(undefined1 *)((long)puVar5 + 0x303) = 0;
    *(undefined2 *)((long)puVar5 + 0x2fa) = param_4;
                    /* try { // try from 00aab974 to 00bab97b has its CatchHandler @ 00aab9b4 */
    *(undefined1 *)((long)puVar5 + 0x2ff) = 7;
    *(byte *)(puVar5 + 0x5f) = *(byte *)(puVar5 + 0x5f) & 0xf0 | param_2 & 0xf;
                    /* try { // try from 00aab97c to 00bab9c7 has its CatchHandler @ 00aab928 */
    *(uint *)((long)puVar5 + 0x2f4) = *(uint *)((long)puVar5 + 0x2f4) & 0xfffffffe;
    FUN_00aa4f44(*puVar5);
    iVar2 = FUN_00aa58d4(puVar5,0x55,param_3);
    if ((iVar2 != 0) || (iVar2 = FUN_00aa58d4(puVar5,0x57,param_6), iVar2 != 0)) {
      uVar3 = 0;
      if (*(long *)(lVar1 + 0x28) == local_68) {
        return;
      }
      goto LAB_00aab884;
    }
                    /* try { // try from 00aab9ec to 00bab9ef has its CatchHandler @ 00aaba80 */
                    /* try { // try from 00aab9f0 to 00bab9f7 has its CatchHandler @ 00aaba70 */
                    /* try { // try from 00aaba10 to 00baba47 has its CatchHandler @ 00aaba48 */
                    /* catch() { ... } // from try @ 00aaba10 with catch @ 00aaba48
                       try { // try from 00aaba48 to 00baba93 has its CatchHandler @ 00aab9c8 */
    if (((((local_194[0] == '\0') || (iVar2 = FUN_00aa58d4(puVar5,0x58,local_194), iVar2 == 0)) &&
         ((local_2e0[0x20] == '\0' ||
          (iVar2 = FUN_00aa58d4(puVar5,0x54,local_2e0 + 0x20), iVar2 == 0)))) &&
        ((local_2e0[0] == '\0' || (iVar2 = FUN_00aa58d4(puVar5,0x59,local_2e0), iVar2 == 0)))) &&
       (((char)local_2f0 == '\0' || (iVar2 = FUN_00aa58d4(puVar5,0x5a,&local_2f0), iVar2 == 0)))) {
      local_194[0] = '/';
                    /* catch() { ... } // from try @ 00aab9f0 with catch @ 00aaba70 */
      strncpy((char *)((ulong)local_194 | 1),param_5,0x12a);
                    /* catch() { ... } // from try @ 00aab9ec with catch @ 00aaba80 */
      iVar2 = FUN_00aa58d4(puVar5,0x56,local_194);
      if (iVar2 == 0) {
        uVar3 = FUN_00aab134(puVar5);
        *param_1 = uVar3;
                    /* try { // try from 00aaba94 to 00babaef has its CatchHandler @ 00aaba94
                       catch(type#1 @ 00000000) { ... } // from try @ 00aaba94 with catch @ 00aaba94
                       catch(type#1 @ 00000000) { ... } // from try @ 00aabaf8 with catch @ 00aaba94
                       catch(type#1 @ 00000000) { ... } // from try @ 00aabb6c with catch @ 00aaba94
                        */
        if (*(long *)(lVar1 + 0x28) == local_68) {
          return;
        }
        goto LAB_00aab884;
      }
    }
  }
  uVar3 = 0;
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 00aab9c8 to 00bab9eb has its CatchHandler @ 00aab9c8
                       catch() { ... } // from try @ 00aab9c8 with catch @ 00aab9c8
                       catch() { ... } // from try @ 00aaba48 with catch @ 00aab9c8 */
    return;
  }
LAB_00aab884:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

