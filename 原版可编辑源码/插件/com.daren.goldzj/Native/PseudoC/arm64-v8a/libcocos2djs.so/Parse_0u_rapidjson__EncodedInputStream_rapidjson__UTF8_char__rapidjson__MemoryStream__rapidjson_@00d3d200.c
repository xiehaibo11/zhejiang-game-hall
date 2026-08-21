
/* rapidjson::ParseResult rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>::Parse<0u, rapidjson::EncodedInputStream<rapidjson::UTF8<char>,
   rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>
   >(rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>&,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&) */

undefined1  [16] __thiscall
rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::
Parse<0u,rapidjson::EncodedInputStream<rapidjson::UTF8<char>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
          (GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator> *this,
          EncodedInputStream *param_1,GenericDocument *param_2)

{
  byte *pbVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  byte *pbVar5;
  
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  plVar2 = *(long **)param_1;
  pbVar1 = (byte *)*plVar2;
  pbVar5 = (byte *)plVar2[2];
  if (pbVar1 == pbVar5) {
LAB_00d3d27c:
    if ((pbVar1 == pbVar5) || (*pbVar1 == 0)) goto LAB_00d3d264;
    ParseValue<0u,rapidjson::EncodedInputStream<rapidjson::UTF8<char>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
              (this,param_1,param_2);
    if (*(int *)(this + 0x30) != 0) goto LAB_00d3d2fc;
    plVar2 = *(long **)param_1;
    pbVar1 = (byte *)*plVar2;
    pbVar5 = (byte *)plVar2[2];
    if (pbVar1 != pbVar5) {
      do {
        if ((0x20 < *pbVar1) || ((1L << ((ulong)*pbVar1 & 0x3f) & 0x100002600U) == 0))
        goto LAB_00d3d2ec;
        pbVar1 = pbVar1 + 1;
        *plVar2 = (long)pbVar1;
      } while (pbVar5 != pbVar1);
      goto LAB_00d3d2fc;
    }
LAB_00d3d2ec:
    if ((pbVar1 == pbVar5) || (*pbVar1 == 0)) goto LAB_00d3d2fc;
    lVar3 = plVar2[1];
    uVar4 = 2;
  }
  else {
    do {
      if ((0x20 < *pbVar1) || ((1L << ((ulong)*pbVar1 & 0x3f) & 0x100002600U) == 0))
      goto LAB_00d3d27c;
      pbVar1 = pbVar1 + 1;
      *plVar2 = (long)pbVar1;
    } while (pbVar5 != pbVar1);
LAB_00d3d264:
    lVar3 = plVar2[1];
    uVar4 = 1;
  }
  *(undefined4 *)(this + 0x30) = uVar4;
  *(long *)(this + 0x38) = (long)pbVar1 - lVar3;
LAB_00d3d2fc:
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 0x10);
  return *(undefined1 (*) [16])(this + 0x30);
}

