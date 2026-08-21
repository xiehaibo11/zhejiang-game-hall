
/* cocostudio::DataReaderHelper::removeConfigFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocostudio::DataReaderHelper::removeConfigFile(DataReaderHelper *this,basic_string *param_1)

{
  size_t sVar1;
  size_t __n;
  basic_string bVar2;
  basic_string *pbVar3;
  basic_string *pbVar4;
  int iVar5;
  size_t sVar6;
  undefined8 uVar7;
  basic_string *pbVar8;
  basic_string *pbVar9;
  basic_string *pbVar10;
  basic_string *pbVar11;
  undefined8 uVar12;
  
  pbVar11 = DAT_01785730;
  if (DAT_01785730 == _configFileList) {
    return;
  }
  __n = *(size_t *)(param_1 + 8);
  pbVar9 = *(basic_string **)(param_1 + 0x10);
  pbVar10 = _configFileList;
  if (((byte)*param_1 & 1) == 0) {
    pbVar9 = param_1 + 1;
    __n = (ulong)((byte)*param_1 >> 1);
  }
  do {
    bVar2 = *pbVar10;
    sVar6 = (size_t)((byte)bVar2 >> 1);
    sVar1 = sVar6;
    if (((byte)bVar2 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar10 + 8);
    }
    if (sVar1 == __n) {
      pbVar8 = *(basic_string **)(pbVar10 + 0x10);
      if (((byte)bVar2 & 1) == 0) {
        pbVar8 = pbVar10 + 1;
      }
      pbVar3 = pbVar10;
      pbVar4 = pbVar9;
      sVar1 = __n;
      if (((byte)bVar2 & 1) == 0) {
        while( true ) {
          if (sVar1 == 0) goto LAB_00c4d274;
          if (pbVar3[1] != *pbVar4) break;
          sVar6 = sVar6 - 1;
          pbVar3 = pbVar3 + 1;
          pbVar4 = pbVar4 + 1;
          sVar1 = sVar6;
        }
      }
      else if ((__n == 0) || (iVar5 = memcmp(pbVar8,pbVar9,__n), iVar5 == 0)) {
LAB_00c4d274:
        if (pbVar10 + 0x18 != pbVar11) {
          pbVar9 = pbVar10;
          do {
            if (((byte)*pbVar9 & 1) == 0) {
              *(undefined2 *)pbVar9 = 0;
            }
            else {
              **(undefined1 **)(pbVar9 + 0x10) = 0;
              *(undefined8 *)(pbVar9 + 8) = 0;
              if (((byte)*pbVar9 & 1) != 0) {
                operator_delete(*(void **)(pbVar9 + 0x10));
                *(undefined8 *)pbVar9 = 0;
              }
            }
            uVar12 = *(undefined8 *)(pbVar9 + 0x20);
            uVar7 = *(undefined8 *)(pbVar9 + 0x28);
            pbVar10 = pbVar9 + 0x18;
            *(undefined8 *)(pbVar9 + 0x20) = 0;
            *(undefined8 *)(pbVar9 + 0x28) = 0;
            *(undefined8 *)(pbVar9 + 8) = uVar12;
            *(undefined8 *)pbVar9 = *(undefined8 *)(pbVar9 + 0x18);
            *(undefined8 *)(pbVar9 + 0x10) = uVar7;
            *(undefined8 *)(pbVar9 + 0x18) = 0;
            pbVar9 = pbVar10;
          } while (pbVar11 + -0x18 != pbVar10);
          pbVar11 = DAT_01785730;
          if (DAT_01785730 == pbVar10) {
            DAT_01785730 = pbVar10;
            return;
          }
        }
        bVar2 = pbVar11[-0x18];
        pbVar9 = pbVar11 + -0x18;
        while( true ) {
          pbVar8 = pbVar9;
          if (((byte)bVar2 & 1) != 0) {
            operator_delete(*(void **)(pbVar11 + -8));
          }
          if (pbVar10 == pbVar8) break;
          bVar2 = pbVar8[-0x18];
          pbVar9 = pbVar8 + -0x18;
          pbVar11 = pbVar8;
        }
        DAT_01785730 = pbVar10;
        return;
      }
    }
    pbVar10 = pbVar10 + 0x18;
    if (pbVar11 == pbVar10) {
      return;
    }
  } while( true );
}

