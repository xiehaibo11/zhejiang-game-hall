
void FUN_0109fb3c(long param_1,char param_2,uint param_3,undefined2 *param_4,undefined2 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ushort uVar4;
  long *plVar5;
  undefined2 uVar6;
  long lVar7;
  undefined8 uVar8;
  int local_44;
  
                    /* try { // try from 0109fb58 to 0119fb5f has its CatchHandler @ 0109fc98 */
  lVar7 = param_1 + 400;
                    /* try { // try from 0109fb60 to 0119fc6f has its CatchHandler @ 0109f97c */
  if (param_2 != '\0') {
    lVar7 = param_1 + 0x1f8;
  }
  uVar4 = *(ushort *)(lVar7 + 0x26);
  plVar3 = (long *)(param_1 + 0x510);
  plVar5 = (long *)(param_1 + 0x460);
  if (param_2 != '\0') {
    plVar3 = (long *)(param_1 + 0x518);
    plVar5 = (long *)(param_1 + 0x470);
  }
  if (uVar4 != 0) {
    lVar7 = *plVar3;
    uVar8 = *(undefined8 *)(param_1 + 0xc0);
    uVar1 = *plVar5 + lVar7;
    if (uVar4 < param_3 || uVar4 == param_3) {
      uVar2 = lVar7 + (ulong)uVar4 * 4;
      if (uVar2 <= uVar1) {
        lVar7 = uVar2 - 4;
        local_44 = FT_Stream_Seek(uVar8,lVar7);
        if (local_44 == 0) {
          uVar6 = FT_Stream_ReadUShort(uVar8,&local_44);
          *param_5 = uVar6;
          if (local_44 == 0) {
                    /* try { // try from 0109fc70 to 0119fc73 has its CatchHandler @ 0109fc7c */
                    /* try { // try from 0109fc74 to 0119fcd3 has its CatchHandler @ 0109f97c */
            if (uVar1 < lVar7 + (ulong)((param_3 - uVar4) * 2 + 4) + 2) {
              *param_4 = 0;
              return;
                    /* catch() { ... } // from try @ 0109fc70 with catch @ 0109fc7c */
            }
                    /* catch() { ... } // from try @ 0109faac with catch @ 0109fc80 */
                    /* catch() { ... } // from try @ 0109fabc with catch @ 0109fc84 */
            local_44 = FT_Stream_Seek(uVar8);
            if (local_44 != 0) {
              return;
            }
                    /* catch() { ... } // from try @ 0109fafc with catch @ 0109fc94 */
                    /* catch() { ... } // from try @ 0109fb58 with catch @ 0109fc98 */
            uVar6 = FT_Stream_ReadUShort(uVar8,&local_44);
            *param_4 = uVar6;
            return;
          }
        }
      }
    }
    else if ((lVar7 + (ulong)(param_3 << 2) + 4 <= uVar1) &&
            (local_44 = FT_Stream_Seek(uVar8), local_44 == 0)) {
      uVar6 = FT_Stream_ReadUShort(uVar8,&local_44);
      *param_5 = uVar6;
      if (local_44 == 0) {
        uVar6 = FT_Stream_ReadUShort(uVar8,&local_44);
        *param_4 = uVar6;
        if (local_44 == 0) {
          return;
        }
      }
    }
  }
  *param_4 = 0;
  *param_5 = 0;
  return;
}

