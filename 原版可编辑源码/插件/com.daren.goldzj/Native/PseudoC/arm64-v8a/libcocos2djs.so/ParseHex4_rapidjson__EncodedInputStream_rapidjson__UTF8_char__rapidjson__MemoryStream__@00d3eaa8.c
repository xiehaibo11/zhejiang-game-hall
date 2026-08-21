
/* unsigned int rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>::ParseHex4<rapidjson::EncodedInputStream<rapidjson::UTF8<char>,
   rapidjson::MemoryStream> >(rapidjson::EncodedInputStream<rapidjson::UTF8<char>,
   rapidjson::MemoryStream>&, unsigned long) */

uint __thiscall
rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::
ParseHex4<rapidjson::EncodedInputStream<rapidjson::UTF8<char>,rapidjson::MemoryStream>>
          (GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator> *this,
          EncodedInputStream *param_1,ulong param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  long *plVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  plVar7 = *(long **)param_1;
  pbVar6 = (byte *)*plVar7;
  pbVar9 = (byte *)plVar7[2];
  if (pbVar6 != pbVar9) {
    bVar2 = *pbVar6;
    if ((int)(char)bVar2 - 0x30U < 10) {
      iVar8 = -0x30;
    }
    else if ((int)(char)bVar2 - 0x41U < 6) {
      iVar8 = -0x37;
    }
    else {
      if (5 < (int)(char)bVar2 - 0x61U) goto LAB_00d3ec14;
      iVar8 = -0x57;
    }
    pbVar1 = pbVar6 + 1;
    *plVar7 = (long)pbVar1;
    if (pbVar1 != pbVar9) {
      bVar3 = *pbVar1;
      if ((int)(char)bVar3 - 0x30U < 10) {
        iVar10 = -0x30;
      }
      else if (bVar3 - 0x41 < 6) {
        iVar10 = -0x37;
      }
      else {
        if (5 < bVar3 - 0x61) goto LAB_00d3ec14;
        iVar10 = -0x57;
      }
      pbVar1 = pbVar6 + 2;
      *plVar7 = (long)pbVar1;
      if (pbVar1 != pbVar9) {
        bVar4 = *pbVar1;
        if ((int)(char)bVar4 - 0x30U < 10) {
          iVar11 = -0x30;
        }
        else if (bVar4 - 0x41 < 6) {
          iVar11 = -0x37;
        }
        else {
          if (5 < bVar4 - 0x61) goto LAB_00d3ec14;
          iVar11 = -0x57;
        }
        pbVar1 = pbVar6 + 3;
        *plVar7 = (long)pbVar1;
        if (pbVar1 != pbVar9) {
          bVar5 = *pbVar1;
          if ((int)(char)bVar5 - 0x30U < 10) {
            iVar12 = -0x30;
          }
          else if (bVar5 - 0x41 < 6) {
            iVar12 = -0x37;
          }
          else {
            if (5 < bVar5 - 0x61) goto LAB_00d3ec14;
            iVar12 = -0x57;
          }
          *plVar7 = (long)(pbVar6 + 4);
          return (int)(char)bVar5 +
                 ((int)(char)bVar4 +
                  ((int)(char)bVar3 + (iVar8 + (char)bVar2) * 0x10 + iVar10) * 0x10 + iVar11) * 0x10
                 + iVar12;
        }
      }
    }
  }
LAB_00d3ec14:
  *(undefined4 *)(this + 0x30) = 8;
  *(ulong *)(this + 0x38) = param_2;
  return 0;
}

