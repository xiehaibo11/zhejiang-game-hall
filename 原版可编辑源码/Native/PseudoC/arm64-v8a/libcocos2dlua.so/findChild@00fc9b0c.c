
/* cocos2d::utils::findChild(cocos2d::Node*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

long cocos2d::utils::findChild(Node *param_1,basic_string *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = 0;
  if (param_1 != (Node *)0x0) {
    uVar1 = (ulong)((byte)*param_2 >> 1);
    if (((byte)*param_2 & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 8);
    }
    if (uVar1 == 0) {
LAB_00fc9b88:
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*(long *)param_1 + 0x230))(param_1,param_2);
      if (lVar4 == 0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x240))(param_1);
        puVar2 = (undefined8 *)plVar5[1];
        puVar3 = (undefined8 *)*plVar5;
        do {
          if (puVar3 == puVar2) goto LAB_00fc9b88;
          lVar4 = findChild((Node *)*puVar3,param_2);
          puVar3 = puVar3 + 1;
        } while (lVar4 == 0);
      }
    }
  }
  return lVar4;
}

