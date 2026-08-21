
/* rapidjson::ParseResult rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>::Parse<1u, rapidjson::GenericInsituStringStream<rapidjson::UTF8<char> >,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>
   >(rapidjson::GenericInsituStringStream<rapidjson::UTF8<char> >&,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&) */

undefined1  [16] __thiscall
rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::
Parse<1u,rapidjson::GenericInsituStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
          (GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator> *this,
          GenericInsituStringStream *param_1,GenericDocument *param_2)

{
  byte *pbVar1;
  long lVar2;
  undefined4 uVar3;
  GenericInsituStringStream *pGVar4;
  
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  pGVar4 = param_1 + 8;
  pbVar1 = *(byte **)param_1;
  while ((*pbVar1 < 0x21 && ((1L << ((ulong)*pbVar1 & 0x3f) & 0x100002600U) != 0))) {
    pbVar1 = pbVar1 + 1;
  }
  *(byte **)param_1 = pbVar1;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)pGVar4 = *(undefined8 *)pGVar4;
  if (*(int *)(this + 0x30) != 0) goto LAB_00d2b8d8;
  if (*pbVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    uVar3 = 1;
  }
  else {
    ParseValue<1u,rapidjson::GenericInsituStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
              (this,param_1,param_2);
    if (*(int *)(this + 0x30) != 0) goto LAB_00d2b8d8;
    pbVar1 = *(byte **)param_1;
    while ((*pbVar1 < 0x21 && ((1L << ((ulong)*pbVar1 & 0x3f) & 0x100002600U) != 0))) {
      pbVar1 = pbVar1 + 1;
    }
    *(byte **)param_1 = pbVar1;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)pGVar4 = *(undefined8 *)pGVar4;
    if ((*(int *)(this + 0x30) != 0) || (*pbVar1 == 0)) goto LAB_00d2b8d8;
    lVar2 = *(long *)(param_1 + 0x10);
    uVar3 = 2;
  }
  *(undefined4 *)(this + 0x30) = uVar3;
  *(long *)(this + 0x38) = (long)pbVar1 - lVar2;
LAB_00d2b8d8:
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 0x10);
  return *(undefined1 (*) [16])(this + 0x30);
}

