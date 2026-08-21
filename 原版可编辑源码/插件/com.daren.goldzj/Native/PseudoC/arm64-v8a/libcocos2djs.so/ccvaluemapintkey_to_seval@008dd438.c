
/* ccvaluemapintkey_to_seval(std::__ndk1::unordered_map<int, cocos2d::Value, std::__ndk1::hash<int>,
   std::__ndk1::equal_to<int>, std::__ndk1::allocator<std::__ndk1::pair<int const, cocos2d::Value> >
   > const&, se::Value*) */

undefined4 ccvaluemapintkey_to_seval(unordered_map *param_1,Value *param_2)

{
  char *pcVar1;
  long lVar2;
  bool bVar3;
  Object *pOVar4;
  ulong uVar5;
  undefined4 uVar6;
  int iVar7;
  long *plVar8;
  byte local_1c0 [8];
  ulong local_1b8;
  char *local_1b0;
  Object *pOStack_1a8;
  Value aVStack_1a0 [16];
  undefined **local_190;
  undefined8 uStack_188;
  undefined **local_180;
  undefined **ppuStack_178;
  locale alStack_170 [8];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong local_138;
  undefined8 uStack_130;
  void *local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined **local_110 [17];
  undefined8 local_88;
  undefined4 local_80;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  pOVar4 = (Object *)se::Object::createPlainObject();
  se::HandleObject::HandleObject((HandleObject *)&pOStack_1a8,pOVar4);
  plVar8 = *(long **)(param_1 + 0x10);
  if (plVar8 != (long *)0x0) {
    bVar3 = true;
    do {
      local_180 = &PTR__basic_stringstream_01c66fb0;
      local_190 = (undefined **)0x1c670a0;
      local_110[0] = (undefined **)0x1c670c8;
      uStack_188 = 0;
      std::__ndk1::ios_base::init((ios_base *)local_110,&ppuStack_178);
      local_80 = 0xffffffff;
      local_190 = &PTR__basic_stringstream_01c66f88;
      local_180 = &PTR__basic_stringstream_01c66fb0;
      local_110[0] = &PTR__basic_stringstream_01c66fd8;
      local_88 = 0;
      ppuStack_178 = &PTR__basic_streambuf_01c671a8;
      std::__ndk1::locale::locale(alStack_170);
      uStack_150 = 0;
      local_158 = 0;
      uStack_140 = 0;
      uStack_148 = 0;
      uStack_160 = 0;
      local_168 = 0;
      uStack_130 = 0;
      local_138 = 0;
      uStack_120 = 0;
      local_128 = (void *)0x0;
      local_118 = 0x18;
      ppuStack_178 = &PTR__basic_stringbuf_01c67100;
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_180,(int)plVar8[2]);
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      uVar5 = (ulong)(local_1c0[0] >> 1);
      if ((local_1c0[0] & 1) != 0) {
        uVar5 = local_1b8;
      }
      if (uVar5 == 0) {
        iVar7 = 3;
      }
      else {
        se::Value::Value(aVStack_1a0);
        uVar5 = ccvalue_to_seval((Value *)(plVar8 + 3),aVStack_1a0);
        if ((uVar5 & 1) == 0) {
          se::Value::setUndefined(param_2);
          bVar3 = false;
          iVar7 = 2;
        }
        else {
          pcVar1 = (char *)((ulong)local_1c0 | 1);
          if ((local_1c0[0] & 1) != 0) {
            pcVar1 = local_1b0;
          }
          se::Object::setProperty(pOStack_1a8,pcVar1,aVStack_1a0);
          iVar7 = 0;
        }
        se::Value::~Value(aVStack_1a0);
      }
      if ((local_1c0[0] & 1) != 0) {
        operator_delete(local_1b0);
      }
      local_190 = &PTR__basic_stringstream_01c66f88;
      local_110[0] = &PTR__basic_stringstream_01c66fd8;
      local_180 = &PTR__basic_stringstream_01c66fb0;
      ppuStack_178 = &PTR__basic_stringbuf_01c67100;
      if ((local_138 & 1) != 0) {
        operator_delete(local_128);
      }
      ppuStack_178 = &PTR__basic_streambuf_01c671a8;
      std::__ndk1::locale::~locale(alStack_170);
      std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
    } while (((iVar7 == 3) || (iVar7 == 0)) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0));
    if (!bVar3) {
      uVar6 = 0;
      goto LAB_008dd6a8;
    }
  }
  se::Value::setObject(param_2,(HandleObject *)&pOStack_1a8,false);
  uVar6 = 1;
LAB_008dd6a8:
  se::HandleObject::~HandleObject((HandleObject *)&pOStack_1a8);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

