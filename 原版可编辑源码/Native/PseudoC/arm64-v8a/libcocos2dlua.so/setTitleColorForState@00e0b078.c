
/* cocos2d::extension::ControlButton::setTitleColorForState(cocos2d::Color3B const&,
   cocos2d::extension::Control::State) */

void __thiscall
cocos2d::extension::ControlButton::setTitleColorForState
          (ControlButton *this,undefined2 *param_1,int param_3)

{
  undefined2 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int local_5c [3];
  int *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_50 = (int *)CONCAT44(local_50._4_4_,param_3);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Color3B>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Color3B>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Color3B>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Color3B>>>
  ::__erase_unique<int>
            ((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Color3B>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Color3B>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Color3B>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Color3B>>>
              *)(this + 0x3d0),(int *)&local_50);
  local_50 = local_5c;
  local_5c[0] = param_3;
  lVar4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Color3B>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Color3B>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Color3B>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Color3B>>>
          ::
          __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int&&>,std::__ndk1::tuple<>>
                    ((int *)(this + 0x3d0),(piecewise_construct_t *)local_5c,(tuple *)&DAT_014220d0,
                     (tuple *)&local_50);
  uVar1 = *param_1;
  *(undefined1 *)(lVar4 + 0x16) = *(undefined1 *)(param_1 + 1);
  *(undefined2 *)(lVar4 + 0x14) = uVar1;
  iVar3 = (**(code **)(*(long *)this + 0x6b0))(this);
  if (iVar3 == param_3) {
    (**(code **)(*(long *)this + 0x680))(this);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

