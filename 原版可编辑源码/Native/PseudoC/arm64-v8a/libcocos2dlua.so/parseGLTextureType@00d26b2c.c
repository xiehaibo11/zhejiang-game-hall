
/* cocos2d::Bundle3D::parseGLTextureType(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined1 __thiscall cocos2d::Bundle3D::parseGLTextureType(Bundle3D *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string bVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  basic_string *pbVar6;
  
  bVar2 = *param_1;
  uVar4 = 0;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  switch(uVar1) {
  case 4:
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    if (*(int *)pbVar6 != 0x504d5542) {
      return *(int *)pbVar6 == 0x454e4f4e;
    }
    return 8;
  default:
    goto switchD_00d26b70_caseD_5;
  case 6:
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    iVar5 = memcmp(pbVar6,"NORMAL",6);
    bVar3 = iVar5 == 0;
    uVar4 = 7;
    break;
  case 7:
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    iVar5 = memcmp(pbVar6,"AMBIENT",7);
    if (iVar5 != 0) {
      iVar5 = memcmp(pbVar6,"DIFFUSE",7);
      return (iVar5 == 0) << 1;
    }
    return 4;
  case 8:
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    if (*(long *)pbVar6 == 0x4556495353494d45) {
      return 3;
    }
    bVar3 = *(long *)pbVar6 == 0x52414c5543455053;
    uVar4 = 5;
    break;
  case 9:
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    iVar5 = memcmp(pbVar6,"SHININESS",9);
    bVar3 = iVar5 == 0;
    uVar4 = 6;
    break;
  case 10:
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    iVar5 = memcmp(pbVar6,"REFLECTION",10);
    if (iVar5 == 0) {
      return 10;
    }
    return false;
  case 0xc:
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    iVar5 = memcmp(pbVar6,"TRANSPARENCY",0xc);
    bVar3 = iVar5 == 0;
    uVar4 = 9;
  }
  if (!bVar3) {
    uVar4 = 0;
  }
switchD_00d26b70_caseD_5:
  return uVar4;
}

