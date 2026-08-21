
/* cocosbuilder::NodeLoader::parsePropTypePosition(cocos2d::Node*, cocos2d::Node*,
   cocosbuilder::CCBReader*, char const*) */

void cocosbuilder::NodeLoader::parsePropTypePosition
               (Node *param_1,Node *param_2,CCBReader *param_3,char *param_4)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  int iVar4;
  CCBAnimationManager *pCVar5;
  Size *pSVar6;
  __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *this;
  long lVar7;
  long lVar8;
  char *in_x4;
  float fVar9;
  float fVar10;
  undefined4 in_s1;
  Value *local_b8;
  Value *local_b0;
  Value *local_a8;
  Size aSStack_a0 [8];
  undefined4 local_98;
  undefined4 uStack_94;
  float local_90;
  float fStack_8c;
  void *local_80;
  Value aVStack_78 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  fVar9 = (float)CCBReader::readFloat((CCBReader *)param_4);
  fVar10 = (float)CCBReader::readFloat((CCBReader *)param_4);
  iVar4 = CCBReader::readInt((CCBReader *)param_4,false);
  pCVar5 = (CCBAnimationManager *)CCBReader::getAnimationManager((CCBReader *)param_4);
  pSVar6 = (Size *)CCBAnimationManager::getContainerSize(pCVar5,(Node *)param_3);
  cocos2d::Size::Size(aSStack_a0,pSVar6);
  local_90 = fVar9;
  fStack_8c = fVar10;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_b8,in_x4);
  local_98 = getAbsolutePosition(&local_90,iVar4,aSStack_a0,&local_b8);
  uStack_94 = in_s1;
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  (**(code **)(*(long *)param_2 + 0x98))(param_2,&local_98);
  this = (__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          *)CCBReader::getAnimatedProperties((CCBReader *)param_4);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_b8,in_x4);
  lVar7 = std::__ndk1::
          __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    (this,(basic_string *)&local_b8);
  lVar8 = CCBReader::getAnimatedProperties((CCBReader *)param_4);
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if (lVar8 + 8 != lVar7) {
    local_b0 = (Value *)0x0;
    local_a8 = (Value *)0x0;
    local_b8 = (Value *)0x0;
    cocos2d::Value::Value((Value *)&local_90,fVar9);
    pVVar2 = local_b0;
    if (local_b0 < local_a8) {
      cocos2d::Value::Value(local_b0,(Value *)&local_90);
      local_b0 = pVVar2 + 0x10;
    }
    else {
      std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
      __push_back_slow_path<cocos2d::Value>
                ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)&local_b8,
                 (Value *)&local_90);
    }
    cocos2d::Value::~Value((Value *)&local_90);
    cocos2d::Value::Value((Value *)&local_90,fVar10);
    pVVar2 = local_b0;
    if (local_b0 < local_a8) {
      cocos2d::Value::Value(local_b0,(Value *)&local_90);
      local_b0 = pVVar2 + 0x10;
    }
    else {
      std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
      __push_back_slow_path<cocos2d::Value>
                ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)&local_b8,
                 (Value *)&local_90);
    }
    cocos2d::Value::~Value((Value *)&local_90);
    cocos2d::Value::Value((Value *)&local_90,iVar4);
    pVVar2 = local_b0;
    if (local_b0 < local_a8) {
      cocos2d::Value::Value(local_b0,(Value *)&local_90);
      local_b0 = pVVar2 + 0x10;
    }
    else {
      std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
      __push_back_slow_path<cocos2d::Value>
                ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)&local_b8,
                 (Value *)&local_90);
    }
    cocos2d::Value::~Value((Value *)&local_90);
    pCVar5 = (CCBAnimationManager *)CCBReader::getAnimationManager((CCBReader *)param_4);
    cocos2d::Value::Value(aVStack_78,(vector *)&local_b8);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_90,in_x4);
    CCBAnimationManager::setBaseValue(pCVar5,aVStack_78,param_2,(basic_string *)&local_90);
    if (((uint)local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    cocos2d::Value::~Value(aVStack_78);
    pVVar3 = local_b8;
    pVVar2 = local_b0;
    if (local_b8 != (Value *)0x0) {
      while (pVVar2 != pVVar3) {
        cocos2d::Value::~Value(pVVar2 + -0x10);
        pVVar2 = pVVar2 + -0x10;
      }
      local_b0 = pVVar3;
      operator_delete(local_b8);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_98,uStack_94);
  }
  return;
}

