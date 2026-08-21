
/* dragonBones::JSONDataParser::_getNumber(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, char const*, unsigned int) */

uint dragonBones::JSONDataParser::_getNumber(GenericValue *param_1,char *param_2,uint param_3)

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
                    /* try { // try from 00d8f410 to 00e8f41b has its CatchHandler @ 00d8fa74 */
    do {
      piVar9 = piVar1;
                    /* try { // try from 00d8f420 to 00e8f433 has its CatchHandler @ 00d8fa70 */
      iVar3 = *piVar9;
      if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
        iVar3 = 0x15 - *(char *)((long)piVar9 + 0x15);
      }
      if (iVar3 == (int)((long)pcVar4 - (long)param_2)) {
                    /* try { // try from 00d8f444 to 00e8f44b has its CatchHandler @ 00d8fa50 */
        piVar1 = *(int **)(piVar9 + 2);
        if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar9;
        }
                    /* try { // try from 00d8f450 to 00e8f467 has its CatchHandler @ 00d8fa4c */
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
LAB_00d8f4f0:
                    /* try { // try from 00d8f4f4 to 00e8f507 has its CatchHandler @ 00d8fa38 */
      if (piVar6 != piVar5) {
        return piVar6[6];
      }
    }
    else {
      lVar10 = uVar8 * 0x30;
      do {
                    /* try { // try from 00d8f4b0 to 00e8f4bb has its CatchHandler @ 00d8fb18 */
        iVar3 = *piVar6;
        if ((*(ushort *)((long)piVar6 + 0x16) & 0x1000) != 0) {
          iVar3 = 0x15 - *(char *)((long)piVar6 + 0x15);
        }
        if (iVar3 == (int)((long)pcVar7 - (long)param_2)) {
          piVar9 = *(int **)(piVar6 + 2);
          if ((*(ushort *)((long)piVar6 + 0x16) & 0x1000) != 0) {
            piVar9 = piVar6;
          }
                    /* try { // try from 00d8f4e4 to 00e8f4ef has its CatchHandler @ 00d8fa48 */
          if ((piVar9 == (int *)param_2) ||
             (iVar3 = memcmp(param_2,piVar9,(long)pcVar7 - (long)param_2 & 0xffffffff), iVar3 == 0))
          goto LAB_00d8f4f0;
        }
        lVar10 = lVar10 + -0x30;
        piVar6 = piVar6 + 0xc;
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
                    /* try { // try from 00d8f518 to 00e8f51f has its CatchHandler @ 00d8fa94 */
                    /* try { // try from 00d8f524 to 00e8f53b has its CatchHandler @ 00d8fa8c */
  return param_3;
}

