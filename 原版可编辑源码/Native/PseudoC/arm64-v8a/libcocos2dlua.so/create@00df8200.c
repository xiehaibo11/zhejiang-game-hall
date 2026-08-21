
/* cocos2d::extension::AssetsManager::create(char const*, char const*, char const*,
   std::__ndk1::function<void (int)>, std::__ndk1::function<void (int)>, std::__ndk1::function<void
   ()>) */

Ref * cocos2d::extension::AssetsManager::create
                (char *param_1,char *param_2,char *param_3,long *param_4,long *param_5,long *param_6
                )

{
  AssetsManager *this;
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  this = operator_new(0x390,(nothrow_t *)&std::nothrow);
  if (this == (AssetsManager *)0x0) {
    this = (AssetsManager *)0x0;
  }
  else {
    AssetsManager(this,param_1,param_2,param_3);
  }
  puVar1 = operator_new(0xa0,(nothrow_t *)&std::nothrow);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_016e7bb0;
    plVar2 = (long *)param_4[4];
    if (plVar2 == (long *)0x0) {
      puVar1[6] = 0;
    }
    else if (param_4 == plVar2) {
      puVar1[6] = puVar1 + 2;
      (**(code **)(*plVar2 + 0x18))(plVar2,puVar1 + 2);
    }
    else {
                    /* try { // try from 00df829c to 00ef82a7 has its CatchHandler @ 00df8ff0 */
      uVar3 = (**(code **)(*plVar2 + 0x10))();
      puVar1[6] = uVar3;
    }
    plVar2 = (long *)param_5[4];
    if (plVar2 == (long *)0x0) {
      puVar1[0xc] = 0;
      plVar2 = (long *)param_6[4];
    }
    else if (param_5 == plVar2) {
      puVar1[0xc] = puVar1 + 8;
      (**(code **)(*plVar2 + 0x18))(plVar2,puVar1 + 8);
      plVar2 = (long *)param_6[4];
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x10))();
      puVar1[0xc] = uVar3;
      plVar2 = (long *)param_6[4];
    }
    if (plVar2 == (long *)0x0) {
      puVar1[0x12] = 0;
    }
    else if (param_6 == plVar2) {
      puVar1[0x12] = puVar1 + 0xe;
      (**(code **)(*plVar2 + 0x18))();
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x10))();
      puVar1[0x12] = uVar3;
    }
  }
  *(undefined8 **)(this + 0x380) = puVar1;
  *(Ref *)(this + 0x389) = (Ref)0x1;
  Ref::autorelease((Ref *)this);
  return (Ref *)this;
}

