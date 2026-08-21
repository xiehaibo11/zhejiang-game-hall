
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
                    /* try { // try from 00a5cd7c to 00b5cd87 has its CatchHandler @ 00a5d128 */
  if ((int)cVar1 - 0x30U < 10) {
    iVar6 = -0x30;
  }
  else {
                    /* try { // try from 00a5cd88 to 00b5cd93 has its CatchHandler @ 00a5d124 */
    if ((int)cVar1 - 0x41U < 6) {
                    /* try { // try from 00a5cd94 to 00b5cdc7 has its CatchHandler @ 00a5d13c */
      iVar6 = -0x37;
    }
    else {
      if (5 < (int)cVar1 - 0x61U) goto LAB_00a5ceb0;
      iVar6 = -0x57;
    }
  }
  *(char **)param_1 = pcVar5 + 1;
  bVar2 = pcVar5[1];
  if ((int)(char)bVar2 - 0x30U < 10) {
    iVar7 = -0x30;
                    /* try { // try from 00a5cdc8 to 00b5cdcf has its CatchHandler @ 00a5d104 */
  }
  else {
                    /* try { // try from 00a5cdd8 to 00b5cddf has its CatchHandler @ 00a5d10c */
    if (bVar2 - 0x41 < 6) {
      iVar7 = -0x37;
    }
    else {
      if (5 < bVar2 - 0x61) goto LAB_00a5ceb0;
                    /* try { // try from 00a5cdf0 to 00b5cdf7 has its CatchHandler @ 00a5d100 */
      iVar7 = -0x57;
    }
  }
  *(char **)param_1 = pcVar5 + 2;
  bVar3 = pcVar5[2];
                    /* try { // try from 00a5ce08 to 00b5ce27 has its CatchHandler @ 00a5d0fc */
  if ((int)(char)bVar3 - 0x30U < 10) {
    iVar8 = -0x30;
  }
  else if (bVar3 - 0x41 < 6) {
    iVar8 = -0x37;
  }
  else {
                    /* try { // try from 00a5ce2c to 00b5ce2f has its CatchHandler @ 00a5d0f8 */
    if (5 < bVar3 - 0x61) goto LAB_00a5ceb0;
                    /* try { // try from 00a5ce38 to 00b5ce3f has its CatchHandler @ 00a5d0f4 */
    iVar8 = -0x57;
  }
                    /* try { // try from 00a5ce40 to 00b5ce53 has its CatchHandler @ 00a5d0e4 */
  *(char **)param_1 = pcVar5 + 3;
  bVar4 = pcVar5[3];
  if ((int)(char)bVar4 - 0x30U < 10) {
    iVar9 = -0x30;
  }
  else {
                    /* try { // try from 00a5ce60 to 00b5ce67 has its CatchHandler @ 00a5d0e0 */
                    /* try { // try from 00a5ce68 to 00b5ce7b has its CatchHandler @ 00a5d0dc */
    if (bVar4 - 0x41 < 6) {
      iVar9 = -0x37;
    }
    else {
      if (5 < bVar4 - 0x61) {
LAB_00a5ceb0:
        *(undefined4 *)(this + 0x30) = 8;
        *(ulong *)(this + 0x38) = param_2;
        return 0;
      }
      iVar9 = -0x57;
    }
  }
                    /* try { // try from 00a5ce88 to 00b5ce8f has its CatchHandler @ 00a5d0d8 */
                    /* try { // try from 00a5ce90 to 00b5cea3 has its CatchHandler @ 00a5d0d4 */
  *(char **)param_1 = pcVar5 + 4;
                    /* try { // try from 00a5ceac to 00b5cebf has its CatchHandler @ 00a5d0f8 */
  return (int)(char)bVar4 +
         ((int)(char)bVar3 + ((int)(char)bVar2 + (iVar6 + cVar1) * 0x10 + iVar7) * 0x10 + iVar8) *
         0x10 + iVar9;
}

