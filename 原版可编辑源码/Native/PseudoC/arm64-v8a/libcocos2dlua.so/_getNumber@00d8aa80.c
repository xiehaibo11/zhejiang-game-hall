
/* dragonBones::JSONDataParser::_getNumber(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, char const*, int) */

int dragonBones::JSONDataParser::_getNumber(GenericValue *param_1,char *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  
  pcVar7 = param_2 + -1;
  pcVar4 = pcVar7;
  do {
    pcVar4 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  piVar6 = *(int **)(param_1 + 8);
  uVar2 = *(uint *)param_1;
  uVar8 = (ulong)uVar2;
  piVar5 = piVar6 + uVar8 * 0xc;
  piVar9 = piVar6;
  if (uVar2 != 0) {
    lVar10 = uVar8 * 0x30;
    piVar1 = piVar6;
    do {
      piVar9 = piVar1;
      iVar3 = *piVar9;
      if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
        iVar3 = 0x15 - *(char *)((long)piVar9 + 0x15);
      }
      if (iVar3 == (int)((long)pcVar4 - (long)param_2)) {
        piVar1 = *(int **)(piVar9 + 2);
        if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar9;
        }
                    /* try { // try from 00d8ab28 to 00e8ab2f has its CatchHandler @ 00d8b174 */
        if ((piVar1 == (int *)param_2) ||
           (iVar3 = memcmp(param_2,piVar1,(long)pcVar4 - (long)param_2 & 0xffffffff), iVar3 == 0))
        break;
      }
      lVar10 = lVar10 + -0x30;
      piVar1 = piVar9 + 0xc;
      piVar9 = piVar5;
    } while (lVar10 != 0);
  }
  if (piVar5 != piVar9) {
    do {
      pcVar7 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    if (uVar2 == 0) {
LAB_00d8abc8:
                    /* try { // try from 00d8abcc to 00e8abd3 has its CatchHandler @ 00d8b144 */
      if (piVar6 != piVar5) {
        return piVar6[6];
                    /* try { // try from 00d8abd4 to 00e8abdf has its CatchHandler @ 00d8b14c */
      }
    }
    else {
      lVar10 = uVar8 * 0x30;
      do {
        iVar3 = *piVar6;
        if ((*(ushort *)((long)piVar6 + 0x16) & 0x1000) != 0) {
          iVar3 = 0x15 - *(char *)((long)piVar6 + 0x15);
        }
        if (iVar3 == (int)((long)pcVar7 - (long)param_2)) {
          piVar9 = *(int **)(piVar6 + 2);
          if ((*(ushort *)((long)piVar6 + 0x16) & 0x1000) != 0) {
            piVar9 = piVar6;
          }
          if ((piVar9 == (int *)param_2) ||
             (iVar3 = memcmp(param_2,piVar9,(long)pcVar7 - (long)param_2 & 0xffffffff), iVar3 == 0))
          goto LAB_00d8abc8;
        }
        lVar10 = lVar10 + -0x30;
        piVar6 = piVar6 + 0xc;
                    /* try { // try from 00d8ab80 to 00e8abbf has its CatchHandler @ 00d8b16c */
      } while (lVar10 != 0);
    }
    param_3 = 0;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
  }
                    /* try { // try from 00d8abf4 to 00e8ac03 has its CatchHandler @ 00d8b16c */
  return param_3;
}

