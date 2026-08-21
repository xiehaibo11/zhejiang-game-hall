
/* unsigned int rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>::ParseHex4<rapidjson::GenericStringStream<rapidjson::UTF8<char> >
   >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&, unsigned long) */

uint __thiscall
rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::
ParseHex4<rapidjson::GenericStringStream<rapidjson::UTF8<char>>>
          (GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator> *this,
          GenericStringStream *param_1,ulong param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pcVar5 = *(char **)param_1;
  cVar1 = *pcVar5;
  if ((int)cVar1 - 0x30U < 10) {
    iVar6 = -0x30;
  }
  else if ((int)cVar1 - 0x41U < 6) {
    iVar6 = -0x37;
  }
  else {
    if (5 < (int)cVar1 - 0x61U) goto LAB_00c5603c;
    iVar6 = -0x57;
  }
  *(char **)param_1 = pcVar5 + 1;
  bVar2 = pcVar5[1];
  if ((int)(char)bVar2 - 0x30U < 10) {
    iVar7 = -0x30;
  }
  else if (bVar2 - 0x41 < 6) {
    iVar7 = -0x37;
  }
  else {
    if (5 < bVar2 - 0x61) goto LAB_00c5603c;
    iVar7 = -0x57;
  }
  *(char **)param_1 = pcVar5 + 2;
  bVar3 = pcVar5[2];
  if ((int)(char)bVar3 - 0x30U < 10) {
    iVar8 = -0x30;
  }
  else if (bVar3 - 0x41 < 6) {
    iVar8 = -0x37;
  }
  else {
    if (5 < bVar3 - 0x61) goto LAB_00c5603c;
    iVar8 = -0x57;
  }
  *(char **)param_1 = pcVar5 + 3;
  bVar4 = pcVar5[3];
  if ((int)(char)bVar4 - 0x30U < 10) {
    iVar9 = -0x30;
  }
  else if (bVar4 - 0x41 < 6) {
    iVar9 = -0x37;
  }
  else {
    if (5 < bVar4 - 0x61) {
LAB_00c5603c:
      *(undefined4 *)(this + 0x30) = 8;
      *(ulong *)(this + 0x38) = param_2;
      return 0;
    }
    iVar9 = -0x57;
  }
  *(char **)param_1 = pcVar5 + 4;
  return (int)(char)bVar4 +
         ((int)(char)bVar3 + ((int)(char)bVar2 + (iVar6 + cVar1) * 0x10 + iVar7) * 0x10 + iVar8) *
         0x10 + iVar9;
}

