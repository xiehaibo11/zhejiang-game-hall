
/* spine::Cocos2dExtension::_readFile(spine::String const&, int*) */

void * __thiscall
spine::Cocos2dExtension::_readFile(Cocos2dExtension *this,String *param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  size_t sVar5;
  ulong uVar6;
  void *__src;
  char *__s;
  void *pvVar7;
  ulong local_98;
  size_t local_90;
  void *local_88;
  byte local_80 [16];
  void *local_70;
  Data aDStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *param_2 = 0;
  plVar3 = (long *)cocos2d::FileUtils::getInstance();
  plVar4 = (long *)cocos2d::FileUtils::getInstance();
  __s = *(char **)(param_1 + 0x10);
  local_98 = 0;
  local_90 = 0;
  local_88 = (void *)0x0;
  sVar5 = strlen(__s);
  if (0xffffffffffffffef < sVar5) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (sVar5 < 0x17) {
    pvVar7 = (void *)((ulong)&local_98 | 1);
    local_98 = CONCAT71(local_98._1_7_,(char)((int)sVar5 << 1));
    if (sVar5 == 0) goto LAB_00c0f150;
  }
  else {
    uVar6 = sVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar7 = operator_new(uVar6);
    local_98 = uVar6 | 1;
    local_90 = sVar5;
    local_88 = pvVar7;
  }
  memcpy(pvVar7,__s,sVar5);
LAB_00c0f150:
  *(undefined1 *)((long)pvVar7 + sVar5) = 0;
  (**(code **)(*plVar4 + 0x40))(local_80,plVar4,&local_98);
  (**(code **)(*plVar3 + 0x20))(aDStack_68,plVar3,local_80);
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  uVar6 = cocos2d::Data::isNull(aDStack_68);
  if ((uVar6 & 1) == 0) {
    sVar5 = cocos2d::Data::getSize(aDStack_68);
    pvVar7 = malloc(sVar5);
    __src = (void *)cocos2d::Data::getBytes(aDStack_68);
    sVar5 = cocos2d::Data::getSize(aDStack_68);
    memcpy(pvVar7,__src,sVar5);
    iVar2 = cocos2d::Data::getSize(aDStack_68);
    *param_2 = iVar2;
  }
  else {
    pvVar7 = (void *)0x0;
  }
  cocos2d::Data::~Data(aDStack_68);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pvVar7;
}

