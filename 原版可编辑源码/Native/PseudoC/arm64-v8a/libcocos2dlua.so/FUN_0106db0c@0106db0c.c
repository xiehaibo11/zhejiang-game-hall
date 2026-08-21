
undefined8 FUN_0106db0c(long param_1,int param_2,uint param_3,uint param_4,ulong *param_5)

{
  short sVar1;
  ulong uVar2;
  ushort local_40 [2];
  undefined1 auStack_3c [4];
  ushort local_38 [2];
  short local_34 [2];
  
  if ((param_4 >> 4 & 1) == 0) {
    if (param_3 != 0) {
      uVar2 = (ulong)param_3;
      do {
        (**(code **)(*(long *)(param_1 + 0x360) + 0xe0))(param_1,0,param_2,auStack_3c,local_40);
        uVar2 = uVar2 - 1;
        param_2 = param_2 + 1;
        *param_5 = (ulong)local_40[0];
        param_5 = param_5 + 1;
      } while (uVar2 != 0);
    }
  }
  else if (param_3 != 0) {
    uVar2 = (ulong)param_3;
    do {
      if (*(char *)(param_1 + 0x1f0) == '\0') {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106da68 with catch @ 0106dba8
                       try { // try from 0106dba8 to 0116dce7 has its CatchHandler @ 0106d7a4 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106d988 with catch @ 0106dbac
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106d8a0 with catch @ 0106dbb0
                        */
        if (*(short *)(param_1 + 600) == -1) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106d924 with catch @ 0106dbc4
                       catch(type#1 @ 00000000) { ... } // from try @ 0106db9c with catch @ 0106dbc4
                        */
          local_34[0] = *(short *)(param_1 + 0x198);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106d83c with catch @ 0106dbcc
                       catch(type#1 @ 00000000) { ... } // from try @ 0106db94 with catch @ 0106dbcc
                        */
          sVar1 = *(short *)(param_1 + 0x19a);
        }
        else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106da1c with catch @ 0106dbb4
                       catch(type#1 @ 00000000) { ... } // from try @ 0106dba4 with catch @ 0106dbb4
                        */
          local_34[0] = *(short *)(param_1 + 0x2b2);
          sVar1 = *(short *)(param_1 + 0x2b4);
        }
        local_38[0] = local_34[0] - sVar1;
      }
      else {
                    /* try { // try from 0106db94 to 0116db9b has its CatchHandler @ 0106dbcc */
                    /* try { // try from 0106db9c to 0116dba3 has its CatchHandler @ 0106dbc4 */
        (**(code **)(*(long *)(param_1 + 0x360) + 0xe0))(param_1,1,param_2,local_34,local_38);
                    /* try { // try from 0106dba4 to 0116dba7 has its CatchHandler @ 0106dbb4 */
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106da70 with catch @ 0106dbdc
                        */
      uVar2 = uVar2 - 1;
      *param_5 = (ulong)local_38[0];
      param_2 = param_2 + 1;
      param_5 = param_5 + 1;
    } while (uVar2 != 0);
  }
  return 0;
}

