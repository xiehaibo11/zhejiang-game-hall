
/* cocos2d::Bundle3D::parseGLType(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

undefined4 __thiscall cocos2d::Bundle3D::parseGLType(Bundle3D *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  basic_string *pbVar6;
  
  bVar2 = *param_1;
  uVar5 = 0;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  switch(uVar1) {
  case 5:
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    iVar4 = memcmp(pbVar6,"CLAMP",5);
    bVar3 = iVar4 == 0;
    uVar5 = 0x812f;
    break;
  case 6:
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    iVar4 = memcmp(pbVar6,"GL_INT",6);
    if (iVar4 == 0) {
      return 0x1404;
    }
    iVar4 = memcmp(pbVar6,"REPEAT",6);
    bVar3 = iVar4 == 0;
    uVar5 = 0x2901;
    break;
  case 7:
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    iVar4 = memcmp(pbVar6,"GL_BYTE",7);
    bVar3 = iVar4 == 0;
    uVar5 = 0x1400;
    break;
  case 8:
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    if (*(long *)pbVar6 == 0x54524f48535f4c47) {
      return 0x1402;
    }
    bVar3 = *(long *)pbVar6 == 0x54414f4c465f4c47;
    uVar5 = 0x1406;
    break;
  default:
    goto switchD_00d22484_caseD_9;
  case 0xf:
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    iVar4 = memcmp(pbVar6,"GL_UNSIGNED_INT",0xf);
    bVar3 = iVar4 == 0;
    uVar5 = 0x1405;
    break;
  case 0x10:
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    iVar4 = memcmp(pbVar6,"GL_UNSIGNED_BYTE",0x10);
    bVar3 = iVar4 == 0;
    uVar5 = 0x1401;
    break;
  case 0x11:
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    iVar4 = memcmp(pbVar6,"GL_UNSIGNED_SHORT",0x11);
    bVar3 = iVar4 == 0;
    uVar5 = 0x1403;
  }
  if (!bVar3) {
    uVar5 = 0;
  }
switchD_00d22484_caseD_9:
  return uVar5;
}

