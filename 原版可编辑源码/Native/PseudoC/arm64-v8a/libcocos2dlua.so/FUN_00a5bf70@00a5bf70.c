
int FUN_00a5bf70(undefined8 param_1,char *param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  void *__dest;
  char *pcVar6;
  ulong local_58;
  long *local_48;
  
  local_48 = (long *)0x0;
  local_58 = 0;
  if ((*param_2 != '\0') && (*param_2 != '=')) {
    iVar4 = FUN_00a2e8fc(param_2,&local_48,&local_58);
    if (iVar4 != 0) {
      return iVar4;
    }
                    /* try { // try from 00a5bffc to 00b5c02f has its CatchHandler @ 00a5bdec */
    if (local_48 != (long *)0x0) {
      *(undefined4 *)(param_3 + 4) = 0;
                    /* catch() { ... } // from try @ 00a5be98 with catch @ 00a5c010 */
                    /* catch() { ... } // from try @ 00a5bed8 with catch @ 00a5c014
                       catch() { ... } // from try @ 00a5bf64 with catch @ 00a5c014 */
                    /* try { // try from 00a5c030 to 00b5c09b has its CatchHandler @ 00a5c030
                       catch() { ... } // from try @ 00a5c030 with catch @ 00a5c030
                       catch() { ... } // from try @ 00a5c3c8 with catch @ 00a5c030
                       catch() { ... } // from try @ 00a5c57c with catch @ 00a5c030 */
      if (((local_58 < 0x20) || (*local_48 != 0x5053534d4c544e)) || ((int)local_48[1] != 2)) {
        (*(code *)PTR_free_01769a00)();
        pcVar6 = "NTLM handshake failure (bad type-2 message)\n";
        goto LAB_00a5bfb4;
      }
      uVar5 = FUN_00a5a244((long)local_48 + 0x14);
      plVar2 = local_48;
      uVar1 = local_58;
      *(uint *)(param_3 + 4) = uVar5;
      *(long *)(param_3 + 8) = local_48[3];
      if ((uVar5 >> 0x17 & 1) == 0) goto LAB_00a5c0f4;
      if (local_58 < 0x30) {
LAB_00a5c0e4:
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00a5a230(local_48 + 5);
        uVar5 = FUN_00a5a244((long)plVar2 + 0x2c);
                    /* try { // try from 00a5c09c to 00b5c0b3 has its CatchHandler @ 00a5c5c4 */
        if (uVar3 == 0) goto LAB_00a5c0e4;
        if ((uVar5 < 0x30) || (uVar1 < uVar5 + uVar3)) {
          FUN_00a38740(param_1,
                       "NTLM handshake failure (bad type-2 message). Target Info Offset Len is set incorrect by the peer\n"
                      );
          iVar4 = 0x3d;
LAB_00a5c12c:
          (*(code *)PTR_free_01769a00)(local_48);
          FUN_00a38740(param_1,"NTLM handshake failure (bad type-2 message)\n");
          return iVar4;
        }
                    /* try { // try from 00a5c0b8 to 00b5c0c7 has its CatchHandler @ 00a5c5b0 */
                    /* try { // try from 00a5c0c8 to 00b5c0d7 has its CatchHandler @ 00a5c5ac */
        __dest = (void *)(*(code *)PTR_malloc_017699f8)((ulong)uVar3);
        *(void **)(param_3 + 0x10) = __dest;
        if (__dest == (void *)0x0) {
                    /* try { // try from 00a5c128 to 00b5c147 has its CatchHandler @ 00a5c5bc */
          iVar4 = 0x1b;
          goto LAB_00a5c12c;
        }
                    /* try { // try from 00a5c0d8 to 00b5c0e7 has its CatchHandler @ 00a5c5a8 */
        memcpy(__dest,(void *)((long)plVar2 + (ulong)uVar5),(ulong)uVar3);
      }
      *(uint *)(param_3 + 0x18) = (uint)uVar3;
                    /* try { // try from 00a5c0f0 to 00b5c107 has its CatchHandler @ 00a5c5a4 */
LAB_00a5c0f4:
      (*(code *)PTR_free_01769a00)(local_48);
      return 0;
    }
  }
  pcVar6 = "NTLM handshake failure (empty type-2 message)\n";
LAB_00a5bfb4:
  FUN_00a38740(param_1,pcVar6);
  return 0x3d;
}

