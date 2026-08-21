
ulong FUN_010b9e40(long *param_1,byte *param_2,int param_3,long param_4,int param_5)

{
  byte bVar1;
  undefined8 uVar2;
  byte bVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *local_68;
  
                    /* try { // try from 010b9e64 to 011b9e7b has its CatchHandler @ 010b9eb4 */
  local_68 = (byte *)*param_1;
  if (local_68 < param_2) {
                    /* try { // try from 010b9e7c to 011b9ecf has its CatchHandler @ 010b9e24 */
    bVar3 = 0x7d;
    if (*local_68 != 0x7b) {
      bVar3 = 0;
    }
    bVar1 = 0x5d;
    if (*local_68 != 0x5b) {
      bVar1 = bVar3;
    }
    if (bVar1 != 0) {
      local_68 = local_68 + 1;
    }
    uVar4 = 0;
    if (param_4 == 0) {
LAB_010b9fc4:
      pbVar6 = local_68;
                    /* try { // try from 010b9fc8 to 011b9fdf has its CatchHandler @ 010ba198 */
      if (local_68 < param_2) {
        do {
          if ((param_2 <= pbVar6) || (bVar3 = *pbVar6, 0x25 < bVar3)) goto LAB_010ba030;
          if ((1L << ((ulong)bVar3 & 0x3f) & 0x100003601U) == 0) {
                    /* try { // try from 010b9ff8 to 011ba00b has its CatchHandler @ 010ba178 */
            if ((ulong)bVar3 != 0x25) goto LAB_010ba030;
            bVar3 = 0x25;
            while (((pbVar5 = pbVar6 + 1, bVar3 != 10 && (bVar3 != 0xd)) &&
                   (pbVar6 = pbVar5, pbVar5 < param_2))) {
              bVar3 = *pbVar5;
            }
          }
          pbVar6 = pbVar6 + 1;
        } while( true );
      }
      goto LAB_010b9eb4;
    }
LAB_010b9efc:
    pbVar6 = local_68;
    if (local_68 < param_2) {
      do {
        if ((param_2 <= pbVar6) || (bVar3 = *pbVar6, 0x25 < bVar3)) goto LAB_010b9f68;
        if ((1L << ((ulong)bVar3 & 0x3f) & 0x100003601U) == 0) {
          if ((ulong)bVar3 != 0x25) goto LAB_010b9f68;
          bVar3 = 0x25;
          while (((pbVar5 = pbVar6 + 1, bVar3 != 10 && (bVar3 != 0xd)) &&
                 (pbVar6 = pbVar5, pbVar5 < param_2))) {
            bVar3 = *pbVar5;
          }
        }
        pbVar6 = pbVar6 + 1;
      } while( true );
    }
    goto LAB_010b9eb4;
  }
  uVar4 = 0;
LAB_010b9eb4:
                    /* catch() { ... } // from try @ 010b9e64 with catch @ 010b9eb4 */
  *param_1 = (long)local_68;
  return uVar4 & 0xffffffff;
LAB_010ba030:
  local_68 = pbVar6;
  if (param_2 <= pbVar6) goto LAB_010b9eb4;
  if (*pbVar6 == bVar1) goto LAB_010ba074;
  FUN_010b9170(&local_68,param_2,(long)param_5);
  if (local_68 == pbVar6) goto LAB_010ba080;
  uVar4 = uVar4 + 1;
  if (bVar1 == 0) goto LAB_010b9eb4;
  goto LAB_010b9fc4;
LAB_010b9f68:
  local_68 = pbVar6;
  if (param_2 <= pbVar6) goto LAB_010b9eb4;
  if (*pbVar6 == bVar1) goto LAB_010ba074;
                    /* try { // try from 010b9f84 to 011b9fc7 has its CatchHandler @ 010b9f84
                       catch() { ... } // from try @ 010b9f84 with catch @ 010b9f84
                       catch() { ... } // from try @ 010ba128 with catch @ 010b9f84 */
  if ((long)param_3 <= (long)uVar4) goto LAB_010b9eb4;
  uVar2 = FUN_010b9170(&local_68,param_2,(long)param_5);
  *(undefined8 *)(param_4 + uVar4 * 8) = uVar2;
  if (local_68 == pbVar6) goto LAB_010ba080;
  uVar4 = uVar4 + 1;
  if (bVar1 == 0) goto LAB_010b9eb4;
  goto LAB_010b9efc;
LAB_010ba074:
  local_68 = pbVar6 + 1;
                    /* try { // try from 010ba07c to 011ba083 has its CatchHandler @ 010ba1ac */
  goto LAB_010b9eb4;
LAB_010ba080:
  uVar4 = 0xffffffff;
  goto LAB_010b9eb4;
}

