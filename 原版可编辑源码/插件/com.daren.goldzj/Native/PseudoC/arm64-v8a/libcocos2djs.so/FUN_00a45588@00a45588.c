
int FUN_00a45588(undefined8 param_1,char *param_2,long param_3)

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
                    /* catch() { ... } // from try @ 00a453a8 with catch @ 00a455b0 */
                    /* catch() { ... } // from try @ 00a4538c with catch @ 00a455b4 */
                    /* catch() { ... } // from try @ 00a453c8 with catch @ 00a455b8
                       catch() { ... } // from try @ 00a45460 with catch @ 00a455b8 */
                    /* catch() { ... } // from try @ 00a45250 with catch @ 00a455bc */
                    /* catch() { ... } // from try @ 00a45244 with catch @ 00a455c0 */
  if ((*param_2 != '\0') && (*param_2 != '=')) {
    iVar4 = FUN_00a18f14(param_2,&local_48,&local_58);
    if (iVar4 != 0) {
      return iVar4;
    }
                    /* catch() { ... } // from try @ 00a45224 with catch @ 00a45614 */
    if (local_48 != (long *)0x0) {
      *(undefined4 *)(param_3 + 4) = 0;
                    /* catch() { ... } // from try @ 00a4525c with catch @ 00a45624
                       catch() { ... } // from try @ 00a452bc with catch @ 00a45624
                       catch() { ... } // from try @ 00a454f4 with catch @ 00a45624 */
      if (((local_58 < 0x20) || (*local_48 != 0x5053534d4c544e)) || ((int)local_48[1] != 2)) {
        (*(code *)PTR_free_01d1b748)();
        pcVar6 = "NTLM handshake failure (bad type-2 message)\n";
        goto LAB_00a455cc;
      }
      uVar5 = FUN_00a4385c((long)local_48 + 0x14);
      plVar2 = local_48;
      uVar1 = local_58;
      *(uint *)(param_3 + 4) = uVar5;
                    /* try { // try from 00a4567c to 00b456d3 has its CatchHandler @ 00a4567c
                       catch() { ... } // from try @ 00a4567c with catch @ 00a4567c
                       catch() { ... } // from try @ 00a45918 with catch @ 00a4567c */
      *(long *)(param_3 + 8) = local_48[3];
      if ((uVar5 >> 0x17 & 1) == 0) goto LAB_00a4570c;
      if (local_58 < 0x30) {
LAB_00a456fc:
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00a43848(local_48 + 5);
        uVar5 = FUN_00a4385c((long)plVar2 + 0x2c);
        if (uVar3 == 0) goto LAB_00a456fc;
        if ((uVar5 < 0x30) || (uVar1 < uVar5 + uVar3)) {
          FUN_00a22d58(param_1,
                       "NTLM handshake failure (bad type-2 message). Target Info Offset Len is set incorrect by the peer\n"
                      );
          iVar4 = 0x3d;
LAB_00a45744:
          (*(code *)PTR_free_01d1b748)(local_48);
          FUN_00a22d58(param_1,"NTLM handshake failure (bad type-2 message)\n");
          return iVar4;
        }
                    /* try { // try from 00a456d4 to 00b456eb has its CatchHandler @ 00a45998 */
        __dest = (void *)(*(code *)PTR_malloc_01d1b740)((ulong)uVar3);
        *(void **)(param_3 + 0x10) = __dest;
        if (__dest == (void *)0x0) {
          iVar4 = 0x1b;
          goto LAB_00a45744;
        }
                    /* try { // try from 00a456f4 to 00b456ff has its CatchHandler @ 00a45994 */
        memcpy(__dest,(void *)((long)plVar2 + (ulong)uVar5),(ulong)uVar3);
      }
                    /* try { // try from 00a45700 to 00b4570b has its CatchHandler @ 00a45990 */
      *(uint *)(param_3 + 0x18) = (uint)uVar3;
LAB_00a4570c:
                    /* try { // try from 00a4570c to 00b45917 has its CatchHandler @ 00a459a8 */
      (*(code *)PTR_free_01d1b748)(local_48);
      return 0;
    }
  }
                    /* catch() { ... } // from try @ 00a452a0 with catch @ 00a455c4
                       catch() { ... } // from try @ 00a45338 with catch @ 00a455c4
                       catch() { ... } // from try @ 00a45414 with catch @ 00a455c4 */
  pcVar6 = "NTLM handshake failure (empty type-2 message)\n";
LAB_00a455cc:
  FUN_00a22d58(param_1,pcVar6);
  return 0x3d;
}

