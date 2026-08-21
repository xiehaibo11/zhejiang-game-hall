
/* cocos2d::CSLoader::isWidget(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

bool __thiscall cocos2d::CSLoader::isWidget(CSLoader *this,basic_string *param_1)

{
  size_t __n;
  basic_string bVar1;
  bool bVar2;
  int iVar3;
  basic_string *pbVar4;
  long lVar5;
  
  bVar1 = *param_1;
  bVar2 = false;
  __n = (ulong)((byte)bVar1 >> 1);
  if (((byte)bVar1 & 1) != 0) {
    __n = *(size_t *)(param_1 + 8);
  }
  lVar5 = __n - 4;
  switch(lVar5) {
  case 0:
switchD_00cb1ba0_caseD_0:
    pbVar4 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar1 & 1) == 0) {
      pbVar4 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar4,&DAT_012d9cdd,__n);
    if (iVar3 == 0) {
      return true;
    }
    break;
  case 1:
    pbVar4 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar1 & 1) == 0) {
      pbVar4 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar4,"Panel",5);
    if (iVar3 == 0) {
      return true;
    }
    bVar2 = false;
    switch(lVar5) {
    case 0:
      goto switchD_00cb1ba0_caseD_0;
    case 1:
      goto switchD_00cb1e0c_caseD_1;
    case 2:
      goto switchD_00cb1ba0_caseD_2;
    default:
      goto switchD_00cb1ba0_caseD_3;
    case 4:
      goto switchD_00cb1ba0_caseD_4;
    case 5:
      goto switchD_00cb1ba0_caseD_5;
    case 6:
      goto switchD_00cb1ba0_caseD_6;
    case 7:
      goto switchD_00cb1ba0_caseD_7;
    }
  case 2:
switchD_00cb1ba0_caseD_2:
    pbVar4 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar1 & 1) == 0) {
      pbVar4 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar4,"Button",__n);
    if (iVar3 == 0) {
      return true;
    }
    bVar2 = false;
    switch(lVar5) {
    case 0:
      goto switchD_00cb1ba0_caseD_0;
    case 1:
      goto switchD_00cb1e0c_caseD_1;
    case 2:
      goto switchD_00cb1e0c_caseD_2;
    default:
      goto switchD_00cb1ba0_caseD_3;
    case 4:
      goto switchD_00cb1ba0_caseD_4;
    case 5:
      goto switchD_00cb1ba0_caseD_5;
    case 6:
      goto switchD_00cb1ba0_caseD_6;
    case 7:
      goto switchD_00cb1ba0_caseD_7;
    }
  default:
    goto switchD_00cb1ba0_caseD_3;
  case 4:
switchD_00cb1ba0_caseD_4:
    pbVar4 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar1 & 1) == 0) {
      pbVar4 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar4,"CheckBox",__n);
    if (iVar3 == 0) {
      return true;
    }
    bVar2 = false;
    switch(lVar5) {
    case 0:
      goto switchD_00cb1ba0_caseD_0;
    case 1:
      goto switchD_00cb1e0c_caseD_1;
    case 2:
      goto switchD_00cb1e0c_caseD_2;
    default:
      goto switchD_00cb1ba0_caseD_3;
    case 4:
      goto switchD_00cb1e0c_caseD_4;
    case 5:
      goto switchD_00cb1ba0_caseD_5;
    case 6:
      goto switchD_00cb1ba0_caseD_6;
    case 7:
      goto switchD_00cb1ba0_caseD_7;
    }
  case 5:
switchD_00cb1ba0_caseD_5:
    pbVar4 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar1 & 1) == 0) {
      pbVar4 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar4,"ImageView",__n);
    if (iVar3 == 0) {
      return true;
    }
    bVar2 = false;
    switch(lVar5) {
    case 0:
      goto switchD_00cb1ba0_caseD_0;
    case 1:
      goto switchD_00cb1e0c_caseD_1;
    case 2:
      goto switchD_00cb1e0c_caseD_2;
    default:
      goto switchD_00cb1ba0_caseD_3;
    case 4:
      goto switchD_00cb1e0c_caseD_4;
    case 5:
      pbVar4 = *(basic_string **)(param_1 + 0x10);
      if (((byte)bVar1 & 1) == 0) {
        pbVar4 = param_1 + 1;
      }
      iVar3 = memcmp(pbVar4,"TextAtlas",__n);
      if (iVar3 == 0) {
        return true;
      }
      bVar2 = false;
      switch(lVar5) {
      case 0:
        goto switchD_00cb1ba0_caseD_0;
      case 1:
        goto switchD_00cb1e0c_caseD_1;
      case 2:
        goto switchD_00cb1e0c_caseD_2;
      default:
        goto switchD_00cb1ba0_caseD_3;
      case 4:
        goto switchD_00cb1e0c_caseD_4;
      case 5:
        goto switchD_00cb1e0c_caseD_5;
      case 6:
        goto switchD_00cb1ba0_caseD_6;
      case 7:
        goto switchD_00cb1ba0_caseD_7;
      }
    case 6:
      goto switchD_00cb1ba0_caseD_6;
    case 7:
      goto switchD_00cb1ba0_caseD_7;
    }
  case 6:
switchD_00cb1ba0_caseD_6:
    pbVar4 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar1 & 1) == 0) {
      pbVar4 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar4,"LabelAtlas",__n);
    if (iVar3 == 0) {
      return true;
    }
    bVar2 = false;
    switch(lVar5) {
    case 0:
      goto switchD_00cb1ba0_caseD_0;
    case 1:
      goto switchD_00cb1e0c_caseD_1;
    case 2:
      goto switchD_00cb1e0c_caseD_2;
    default:
      goto switchD_00cb1ba0_caseD_3;
    case 4:
      goto switchD_00cb1e0c_caseD_4;
    case 5:
      goto switchD_00cb1e0c_caseD_5;
    case 6:
      goto switchD_00cb1e0c_caseD_6;
    case 7:
      goto switchD_00cb1ba0_caseD_7;
    }
  case 7:
switchD_00cb1ba0_caseD_7:
    pbVar4 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar1 & 1) == 0) {
      pbVar4 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar4,"LabelBMFont",__n);
    if (iVar3 == 0) {
      return true;
    }
    bVar2 = false;
    switch(lVar5) {
    case 0:
      goto switchD_00cb1ba0_caseD_0;
    case 1:
      goto switchD_00cb1e0c_caseD_1;
    case 2:
      goto switchD_00cb1e0c_caseD_2;
    default:
      goto switchD_00cb1ba0_caseD_3;
    case 4:
      goto switchD_00cb1e0c_caseD_4;
    case 5:
      goto switchD_00cb1e0c_caseD_5;
    case 6:
switchD_00cb1e0c_caseD_6:
      pbVar4 = *(basic_string **)(param_1 + 0x10);
      if (((byte)bVar1 & 1) == 0) {
        pbVar4 = param_1 + 1;
      }
      iVar3 = memcmp(pbVar4,"TextBMFont",__n);
      if (iVar3 == 0) {
        return true;
      }
      bVar2 = false;
      switch(lVar5) {
      case 0:
        goto switchD_00cb1ba0_caseD_0;
      case 1:
        goto switchD_00cb1e0c_caseD_1;
      case 2:
        goto switchD_00cb1e0c_caseD_2;
      default:
        goto switchD_00cb1ba0_caseD_3;
      case 4:
        goto switchD_00cb1e0c_caseD_4;
      case 5:
        goto switchD_00cb1e0c_caseD_5;
      case 6:
        goto switchD_00cb1be8_caseD_a;
      }
    }
  }
  bVar2 = false;
  switch(__n) {
  case 5:
    break;
  case 6:
switchD_00cb1e0c_caseD_2:
    pbVar4 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar1 & 1) == 0) {
      pbVar4 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar4,"Slider",__n);
    if (iVar3 == 0) {
      return true;
    }
    bVar2 = false;
    switch(__n) {
    case 5:
      break;
    case 6:
      pbVar4 = *(basic_string **)(param_1 + 0x10);
      if (((byte)bVar1 & 1) == 0) {
        pbVar4 = param_1 + 1;
      }
      iVar3 = memcmp(pbVar4,"Layout",__n);
      if (iVar3 == 0) {
        return true;
      }
      bVar2 = false;
      switch(__n) {
      case 5:
        break;
      case 6:
        goto switchD_00cb1f24_caseD_6;
      default:
        goto switchD_00cb1ba0_caseD_3;
      case 8:
        goto switchD_00cb1e0c_caseD_4;
      case 10:
        goto switchD_00cb1e54_caseD_a;
      }
    default:
      goto switchD_00cb1ba0_caseD_3;
    case 8:
      goto switchD_00cb1e0c_caseD_4;
    case 10:
switchD_00cb1e54_caseD_a:
      pbVar4 = *(basic_string **)(param_1 + 0x10);
      if (((byte)bVar1 & 1) == 0) {
        pbVar4 = param_1 + 1;
      }
      iVar3 = memcmp(pbVar4,"ScrollView",__n);
      if (iVar3 == 0) {
        return true;
      }
      if (__n != 5) {
        if (__n == 6) goto switchD_00cb1f24_caseD_6;
        if (__n != 8) {
          return false;
        }
        goto switchD_00cb1e0c_caseD_4;
      }
    }
    break;
  default:
    goto switchD_00cb1ba0_caseD_3;
  case 8:
switchD_00cb1e0c_caseD_4:
    pbVar4 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar1 & 1) == 0) {
      pbVar4 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar4,&DAT_012d48e4,__n);
    if (iVar3 == 0) {
      return true;
    }
    if (__n != 5) {
      if (__n != 6) {
        if (__n != 8) {
          return false;
        }
        pbVar4 = *(basic_string **)(param_1 + 0x10);
        if (((byte)bVar1 & 1) == 0) {
          pbVar4 = param_1 + 1;
        }
        iVar3 = memcmp(pbVar4,"PageView",8);
        if (iVar3 != 0) {
          return false;
        }
        return true;
      }
switchD_00cb1f24_caseD_6:
      pbVar4 = *(basic_string **)(param_1 + 0x10);
      if (((byte)bVar1 & 1) == 0) {
        pbVar4 = param_1 + 1;
      }
      iVar3 = memcmp(pbVar4,"Widget",__n);
      if (iVar3 == 0) {
        return true;
      }
      if (__n != 5) {
        return false;
      }
    }
    break;
  case 9:
switchD_00cb1e0c_caseD_5:
    pbVar4 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar1 & 1) == 0) {
      pbVar4 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar4,"TextField",__n);
    if (iVar3 == 0) {
      return true;
    }
    bVar2 = false;
    switch(__n) {
    case 5:
      break;
    case 6:
      goto switchD_00cb1e0c_caseD_2;
    default:
      goto switchD_00cb1ba0_caseD_3;
    case 8:
      goto switchD_00cb1e0c_caseD_4;
    case 10:
      goto switchD_00cb1e54_caseD_a;
    }
  case 10:
switchD_00cb1be8_caseD_a:
    pbVar4 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar1 & 1) == 0) {
      pbVar4 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar4,&DAT_012da141,__n);
    if (iVar3 == 0) {
      return true;
    }
    bVar2 = false;
    switch(__n) {
    case 5:
      break;
    case 6:
      goto switchD_00cb1e0c_caseD_2;
    default:
      goto switchD_00cb1ba0_caseD_3;
    case 8:
      goto switchD_00cb1e0c_caseD_4;
    case 9:
      goto switchD_00cb1e0c_caseD_5;
    case 10:
      goto switchD_00cb1e54_caseD_a;
    }
  }
switchD_00cb1e0c_caseD_1:
  pbVar4 = *(basic_string **)(param_1 + 0x10);
  if (((byte)bVar1 & 1) == 0) {
    pbVar4 = param_1 + 1;
  }
  iVar3 = memcmp(pbVar4,"Label",__n);
  bVar2 = iVar3 == 0;
switchD_00cb1ba0_caseD_3:
  return bVar2;
}

