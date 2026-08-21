
/* rapidjson::ParseResult rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>::Parse<0u, rapidjson::GenericStringStream<rapidjson::UTF8<char> >,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>
   >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&) */

undefined1  [16] __thiscall
rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::
Parse<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
          (GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator> *this,
          GenericStringStream *param_1,GenericDocument *param_2)

{
  byte *pbVar1;
  long lVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  pbVar1 = *(byte **)param_1;
                    /* try { // try from 00a5b6b8 to 00b5b767 has its CatchHandler @ 00a5b6b8
                       catch() { ... } // from try @ 00a5b6b8 with catch @ 00a5b6b8
                       catch() { ... } // from try @ 00a5b7a4 with catch @ 00a5b6b8 */
  while ((*pbVar1 < 0x21 && ((1L << ((ulong)*pbVar1 & 0x3f) & 0x100002600U) != 0))) {
    pbVar1 = pbVar1 + 1;
  }
  *(byte **)param_1 = pbVar1;
  if (*(int *)(this + 0x30) != 0) goto LAB_00a5b730;
  if (*pbVar1 == 0) {
    lVar2 = *(long *)(param_1 + 8);
    uVar3 = 1;
  }
  else {
    ParseValue<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
              (this,param_1,param_2);
    if (*(int *)(this + 0x30) != 0) goto LAB_00a5b730;
    pbVar1 = *(byte **)param_1;
    while ((*pbVar1 < 0x21 && ((1L << ((ulong)*pbVar1 & 0x3f) & 0x100002600U) != 0))) {
      pbVar1 = pbVar1 + 1;
    }
    *(byte **)param_1 = pbVar1;
    if ((*(int *)(this + 0x30) != 0) || (*pbVar1 == 0)) goto LAB_00a5b730;
    lVar2 = *(long *)(param_1 + 8);
    uVar3 = 2;
  }
  *(undefined4 *)(this + 0x30) = uVar3;
  *(long *)(this + 0x38) = (long)pbVar1 - lVar2;
                    /* try { // try from 00a5b768 to 00b5b797 has its CatchHandler @ 00a5b80c */
LAB_00a5b730:
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 0x10);
  return *(undefined1 (*) [16])(this + 0x30);
}

