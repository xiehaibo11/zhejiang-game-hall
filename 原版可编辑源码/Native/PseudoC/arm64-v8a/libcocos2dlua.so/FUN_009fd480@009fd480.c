
void FUN_009fd480(ulong *param_1,uint param_2)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  ulong local_38;
  uint local_24;
  
  pcVar5 = (char *)*param_1;
                    /* try { // try from 009fd4a4 to 00afd4cb has its CatchHandler @ 009fd600 */
  switch(param_2 & 7) {
  case 0:
    pcVar3 = pcVar5;
    do {
                    /* try { // try from 009fd4cc to 00afd4f7 has its CatchHandler @ 009fd3d8 */
      if ((char *)param_1[1] <= pcVar3) goto switchD_009fd4bc_caseD_4;
      pcVar4 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar4;
    } while (cVar1 < '\0');
    goto LAB_009fd518;
  case 1:
    pcVar4 = pcVar5 + 8;
    if (pcVar4 <= (char *)param_1[1]) {
LAB_009fd56c:
      *param_1 = (ulong)pcVar4;
      return;
    }
    break;
  case 2:
                    /* try { // try from 009fd4f8 to 00afd50b has its CatchHandler @ 009fd608 */
    lVar2 = FUN_009fb4dc(param_1,&local_38);
    if (lVar2 == 0) break;
                    /* try { // try from 009fd510 to 00afd523 has its CatchHandler @ 009fd60c */
    if (param_1[1] - *param_1 < local_38) goto LAB_009fd58c;
    pcVar4 = (char *)(*param_1 + local_38);
LAB_009fd518:
    *param_1 = (ulong)pcVar4;
joined_r0x009fd5b8:
    if (pcVar4 != pcVar5) {
      return;
    }
    break;
  case 3:
    local_24 = 0;
    while (lVar2 = FUN_009fd24c(param_1,&local_24), lVar2 != 0) {
      if ((local_24 & 7) == 4) {
        if ((local_24 ^ param_2) < 8) {
          pcVar4 = (char *)*param_1;
          goto joined_r0x009fd5b8;
        }
        break;
      }
      FUN_009fd480(param_1);
    }
LAB_009fd58c:
    *param_1 = (ulong)pcVar5;
    break;
  case 5:
    pcVar4 = pcVar5 + 4;
    if (pcVar4 <= (char *)param_1[1]) goto LAB_009fd56c;
  }
switchD_009fd4bc_caseD_4:
  *param_1 = (ulong)pcVar5;
  return;
}

