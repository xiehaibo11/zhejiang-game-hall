
/* cocos2d::Bundle3D::parseGLProgramAttribute(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined4 __thiscall
cocos2d::Bundle3D::parseGLProgramAttribute(Bundle3D *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  basic_string *pbVar6;
  
  bVar2 = *param_1;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  switch(uVar1) {
  case 0x13:
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    iVar4 = memcmp(pbVar6,"VERTEX_ATTRIB_COLOR",0x13);
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    return 1;
  case 0x14:
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    iVar4 = memcmp(pbVar6,"VERTEX_ATTRIB_NORMAL",0x14);
    bVar3 = iVar4 == 0;
    uVar5 = 6;
    break;
  case 0x15:
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    iVar4 = memcmp(pbVar6,"VERTEX_ATTRIB_TANGENT",0x15);
    bVar3 = iVar4 == 0;
    uVar5 = 9;
    break;
  case 0x16:
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    iVar4 = memcmp(pbVar6,"VERTEX_ATTRIB_POSITION",0x16);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = memcmp(pbVar6,"VERTEX_ATTRIB_BINORMAL",0x16);
    bVar3 = iVar4 == 0;
    uVar5 = 10;
    break;
  case 0x17:
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    iVar4 = memcmp(pbVar6,"VERTEX_ATTRIB_TEX_COORD",0x17);
    bVar3 = iVar4 == 0;
    uVar5 = 2;
    break;
  case 0x18:
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    iVar4 = memcmp(pbVar6,"VERTEX_ATTRIB_TEX_COORD1",0x18);
    if (iVar4 == 0) {
      return 3;
    }
    iVar4 = memcmp(pbVar6,"VERTEX_ATTRIB_TEX_COORD2",0x18);
    if (iVar4 == 0) {
      return 4;
    }
    iVar4 = memcmp(pbVar6,"VERTEX_ATTRIB_TEX_COORD3",0x18);
    bVar3 = iVar4 == 0;
    uVar5 = 5;
    break;
  case 0x19:
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    iVar4 = memcmp(pbVar6,"VERTEX_ATTRIB_BLEND_INDEX",0x19);
    bVar3 = iVar4 == 0;
    uVar5 = 8;
    break;
  case 0x1a:
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    iVar4 = memcmp(pbVar6,"VERTEX_ATTRIB_BLEND_WEIGHT",0x1a);
    bVar3 = iVar4 == 0;
    uVar5 = 7;
    break;
  default:
    return 0xffffffff;
  }
  if (!bVar3) {
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

