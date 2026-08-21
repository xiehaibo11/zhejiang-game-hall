
/* cocos2d::ui::Helper::seekWidgetByName(cocos2d::ui::Widget*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

Widget * cocos2d::ui::Helper::seekWidgetByName(Widget *param_1,basic_string *param_2)

{
  size_t __n;
  size_t sVar1;
  basic_string bVar2;
  basic_string bVar3;
  int iVar4;
  basic_string *pbVar5;
  long *plVar6;
  long lVar7;
  Widget *pWVar8;
  basic_string *__s1;
  size_t sVar9;
  basic_string *__s2;
  long *plVar10;
  
  if (param_1 == (Widget *)0x0) {
    return (Widget *)0x0;
  }
  pbVar5 = (basic_string *)(**(code **)(*(long *)param_1 + 0x2c8))(param_1);
  bVar2 = *pbVar5;
  bVar3 = *param_2;
  sVar9 = (size_t)((byte)bVar2 >> 1);
  __n = sVar9;
  if (((byte)bVar2 & 1) != 0) {
    __n = *(size_t *)(pbVar5 + 8);
  }
  sVar1 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_2 + 8);
  }
  if (__n == sVar1) {
    __s1 = *(basic_string **)(pbVar5 + 0x10);
    __s2 = *(basic_string **)(param_2 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      __s1 = pbVar5 + 1;
    }
    if (((byte)bVar3 & 1) == 0) {
      __s2 = param_2 + 1;
    }
    if (((byte)bVar2 & 1) == 0) {
      while( true ) {
        if (__n == 0) {
          return param_1;
        }
        pbVar5 = pbVar5 + 1;
        if (*pbVar5 != *__s2) break;
        sVar9 = sVar9 - 1;
        __s2 = __s2 + 1;
        __n = sVar9;
      }
    }
    else {
      if (__n == 0) {
        return param_1;
      }
      iVar4 = memcmp(__s1,__s2,__n);
      if (iVar4 == 0) {
        return param_1;
      }
    }
  }
  plVar6 = (long *)(**(code **)(*(long *)param_1 + 0x240))(param_1);
  plVar10 = (long *)*plVar6;
  plVar6 = (long *)plVar6[1];
  if (plVar10 == plVar6) {
LAB_00db4950:
    pWVar8 = (Widget *)0x0;
  }
  else {
    lVar7 = *plVar10;
    if (lVar7 != 0) goto LAB_00db4928;
    do {
      do {
        plVar10 = plVar10 + 1;
        if (plVar6 == plVar10) goto LAB_00db4950;
        lVar7 = *plVar10;
      } while (lVar7 == 0);
LAB_00db4928:
      pWVar8 = (Widget *)__dynamic_cast(lVar7,&Node::typeinfo,&Widget::typeinfo,0);
    } while ((pWVar8 == (Widget *)0x0) ||
            (pWVar8 = (Widget *)seekWidgetByName(pWVar8,param_2), pWVar8 == (Widget *)0x0));
  }
  return pWVar8;
}

