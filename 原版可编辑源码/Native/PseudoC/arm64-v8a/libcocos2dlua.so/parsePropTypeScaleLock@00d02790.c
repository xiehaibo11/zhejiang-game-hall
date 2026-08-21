
/* cocosbuilder::NodeLoader::parsePropTypeScaleLock(cocos2d::Node*, cocos2d::Node*,
   cocosbuilder::CCBReader*, char const*) */

void __thiscall
cocosbuilder::NodeLoader::parsePropTypeScaleLock
          (NodeLoader *this,Node *param_1,Node *param_2,CCBReader *param_3,char *param_4)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  int iVar4;
  __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *this_00;
  long lVar5;
  long lVar6;
  CCBAnimationManager *this_01;
  undefined4 *puVar7;
  float fVar8;
  ulong uVar9;
  ulong uVar10;
  Value *local_a8;
  Value *local_a0;
  Value *local_98;
  Value local_90 [16];
  void *local_80;
  Value aVStack_78 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar9 = CCBReader::readFloat(param_3);
  uVar10 = CCBReader::readFloat(param_3);
  iVar4 = CCBReader::readInt(param_3,false);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_a8,param_4);
  setRelativeScale(uVar9,uVar10,param_1,iVar4,&local_a8);
  if (((ulong)local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  this_00 = (__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)CCBReader::getAnimatedProperties(param_3);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_a8,param_4);
  lVar5 = std::__ndk1::
          __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    (this_00,(basic_string *)&local_a8);
  lVar6 = CCBReader::getAnimatedProperties(param_3);
  if (((ulong)local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if (lVar6 + 8 != lVar5) {
    local_a0 = (Value *)0x0;
    local_98 = (Value *)0x0;
    local_a8 = (Value *)0x0;
    cocos2d::Value::Value(local_90,(float)uVar9);
    pVVar2 = local_a0;
    if (local_a0 < local_98) {
      cocos2d::Value::Value(local_a0,local_90);
      local_a0 = pVVar2 + 0x10;
    }
    else {
      std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
      __push_back_slow_path<cocos2d::Value>
                ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)&local_a8,local_90
                );
    }
    cocos2d::Value::~Value(local_90);
    cocos2d::Value::Value(local_90,(float)uVar10);
    pVVar2 = local_a0;
    if (local_a0 < local_98) {
      cocos2d::Value::Value(local_a0,local_90);
      local_a0 = pVVar2 + 0x10;
    }
    else {
      std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
      __push_back_slow_path<cocos2d::Value>
                ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)&local_a8,local_90
                );
    }
    cocos2d::Value::~Value(local_90);
    cocos2d::Value::Value(local_90,iVar4);
    pVVar2 = local_a0;
    if (local_a0 < local_98) {
      cocos2d::Value::Value(local_a0,local_90);
      local_a0 = pVVar2 + 0x10;
    }
    else {
      std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
      __push_back_slow_path<cocos2d::Value>
                ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)&local_a8,local_90
                );
    }
    cocos2d::Value::~Value(local_90);
    this_01 = (CCBAnimationManager *)CCBReader::getAnimationManager(param_3);
    cocos2d::Value::Value(aVStack_78,(vector *)&local_a8);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               local_90,param_4);
    CCBAnimationManager::setBaseValue(this_01,aVStack_78,param_1,(basic_string *)local_90);
    if (((byte)local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
    cocos2d::Value::~Value(aVStack_78);
    pVVar3 = local_a8;
    pVVar2 = local_a0;
    if (local_a8 != (Value *)0x0) {
      while (pVVar2 != pVVar3) {
        cocos2d::Value::~Value(pVVar2 + -0x10);
        pVVar2 = pVVar2 + -0x10;
      }
      local_a0 = pVVar3;
      operator_delete(local_a8);
    }
  }
  if (iVar4 == 1) {
    fVar8 = (float)CCBReader::getResolutionScale();
    uVar9 = (ulong)(uint)((float)uVar9 * fVar8);
    fVar8 = (float)CCBReader::getResolutionScale();
    uVar10 = (ulong)(uint)((float)uVar10 * fVar8);
  }
  puVar7 = operator_new__(8,(nothrow_t *)&std::nothrow);
  *puVar7 = (int)uVar9;
  puVar7[1] = (int)uVar10;
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

