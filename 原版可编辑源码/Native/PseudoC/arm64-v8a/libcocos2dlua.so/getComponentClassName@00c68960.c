
/* cocostudio::SceneReader::getComponentClassName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocostudio::SceneReader::getComponentClassName(basic_string *param_1)

{
  size_t __n;
  byte *pbVar1;
  byte bVar2;
  size_t sVar3;
  byte *pbVar4;
  size_t sVar5;
  int iVar6;
  byte *in_x1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  byte *pbVar7;
  size_t sVar8;
  
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  bVar2 = *in_x1;
  sVar8 = (size_t)(bVar2 >> 1);
  __n = sVar8;
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(in_x1 + 8);
  }
  switch(__n) {
  case 8:
    pbVar7 = *(byte **)(in_x1 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar7 = in_x1 + 1;
    }
    if (*(long *)pbVar7 == 0x6574697270534343) goto LAB_00c689e4;
  default:
    goto switchD_00c689b8_caseD_9;
  case 10:
    pbVar7 = *(byte **)(in_x1 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar7 = in_x1 + 1;
    }
    iVar6 = memcmp(pbVar7,"CCArmature",10);
    break;
  case 0xc:
    pbVar7 = *(byte **)(in_x1 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar7 = in_x1 + 1;
    }
    iVar6 = memcmp(pbVar7,"GUIComponent",0xc);
    break;
  case 0xd:
    pbVar7 = *(byte **)(in_x1 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar7 = in_x1 + 1;
    }
    iVar6 = memcmp(pbVar7,"CCTMXTiledMap",0xd);
    break;
  case 0x14:
    pbVar7 = *(byte **)(in_x1 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar7 = in_x1 + 1;
    }
    iVar6 = memcmp(pbVar7,"CCParticleSystemQuad",0x14);
  }
  if (iVar6 == 0) {
LAB_00c689e4:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(in_x8,"ComRender",9);
    return;
  }
switchD_00c689b8_caseD_9:
  sVar3 = (ulong)(ComAudio::COMPONENT_NAME >> 1);
  if ((ComAudio::COMPONENT_NAME & 1) != 0) {
    sVar3 = DAT_01785918;
  }
  if (__n == sVar3) {
    pbVar7 = *(byte **)(in_x1 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar7 = in_x1 + 1;
    }
    pbVar1 = DAT_01785920;
    if ((ComAudio::COMPONENT_NAME & 1) == 0) {
      pbVar1 = &DAT_01785911;
    }
    sVar3 = sVar8;
    pbVar4 = in_x1;
    sVar5 = __n;
    if ((bVar2 & 1) == 0) {
      while (sVar5 != 0) {
        if (pbVar4[1] != *pbVar1) goto LAB_00c68b08;
        pbVar1 = pbVar1 + 1;
        sVar3 = sVar3 - 1;
        pbVar4 = pbVar4 + 1;
        sVar5 = sVar3;
      }
      goto LAB_00c68ba0;
    }
    if ((__n == 0) || (iVar6 = memcmp(pbVar7,pbVar1,__n), iVar6 == 0)) goto LAB_00c68ba0;
  }
LAB_00c68b08:
  if (__n == 0x11) {
    pbVar7 = *(byte **)(in_x1 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar7 = in_x1 + 1;
    }
    iVar6 = memcmp(pbVar7,"CCBackgroundAudio",0x11);
    if (iVar6 == 0) {
LAB_00c68ba0:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(in_x8,"ComAudio",8);
      return;
    }
  }
  sVar3 = (ulong)(ComController::COMPONENT_NAME >> 1);
  if ((ComController::COMPONENT_NAME & 1) != 0) {
    sVar3 = DAT_017859a8;
  }
  if (__n == sVar3) {
    pbVar7 = *(byte **)(in_x1 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar7 = in_x1 + 1;
    }
    pbVar1 = DAT_017859b0;
    if ((ComController::COMPONENT_NAME & 1) == 0) {
      pbVar1 = &DAT_017859a1;
    }
    sVar3 = sVar8;
    pbVar4 = in_x1;
    sVar5 = __n;
    if ((bVar2 & 1) == 0) {
      while (sVar5 != 0) {
        if (pbVar4[1] != *pbVar1) goto LAB_00c68bc8;
        pbVar1 = pbVar1 + 1;
        sVar3 = sVar3 - 1;
        pbVar4 = pbVar4 + 1;
        sVar5 = sVar3;
      }
LAB_00c68c34:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(in_x8,"ComController",0xd);
      return;
    }
    if ((__n == 0) || (iVar6 = memcmp(pbVar7,pbVar1,__n), iVar6 == 0)) goto LAB_00c68c34;
  }
LAB_00c68bc8:
  sVar3 = (ulong)(ComAttribute::COMPONENT_NAME >> 1);
  if ((ComAttribute::COMPONENT_NAME & 1) != 0) {
    sVar3 = DAT_01785888;
  }
  if (__n == sVar3) {
    pbVar7 = *(byte **)(in_x1 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar7 = in_x1 + 1;
    }
    pbVar1 = DAT_01785890;
    if ((ComAttribute::COMPONENT_NAME & 1) == 0) {
      pbVar1 = &DAT_01785881;
    }
    pbVar4 = in_x1;
    sVar3 = __n;
    if ((bVar2 & 1) == 0) {
      while (sVar3 != 0) {
        if (pbVar4[1] != *pbVar1) goto LAB_00c68c5c;
        pbVar1 = pbVar1 + 1;
        sVar8 = sVar8 - 1;
        pbVar4 = pbVar4 + 1;
        sVar3 = sVar8;
      }
    }
    else if ((__n != 0) && (iVar6 = memcmp(pbVar7,pbVar1,__n), iVar6 != 0)) goto LAB_00c68c5c;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(in_x8,"ComAttribute",0xc);
  }
  else {
LAB_00c68c5c:
    if (__n == 7) {
      pbVar7 = *(byte **)(in_x1 + 0x10);
      if ((bVar2 & 1) == 0) {
        pbVar7 = in_x1 + 1;
      }
      iVar6 = memcmp(pbVar7,"CCScene",7);
      if (iVar6 == 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(in_x8,"Scene",5);
      }
    }
  }
  return;
}

