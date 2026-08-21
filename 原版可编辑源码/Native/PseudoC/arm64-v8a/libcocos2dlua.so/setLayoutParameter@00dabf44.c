
/* cocos2d::ui::Widget::setLayoutParameter(cocos2d::ui::LayoutParameter*) */

void __thiscall cocos2d::ui::Widget::setLayoutParameter(Widget *this,LayoutParameter *param_1)

{
  long lVar1;
  undefined4 uVar2;
  int local_44;
  LayoutParameter *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != (LayoutParameter *)0x0) {
    local_44 = LayoutParameter::getLayoutType(param_1);
    local_40 = param_1;
    Ref::retain((Ref *)param_1);
    Map<int,cocos2d::ui::LayoutParameter*>::erase
              ((Map<int,cocos2d::ui::LayoutParameter*> *)(this + 1000),&local_44);
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::ui::LayoutParameter*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::ui::LayoutParameter*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::ui::LayoutParameter*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::ui::LayoutParameter*>>>
    ::__emplace_unique_key_args<int,int_const&,cocos2d::ui::LayoutParameter*&>
              ((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::ui::LayoutParameter*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::ui::LayoutParameter*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::ui::LayoutParameter*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::ui::LayoutParameter*>>>
                *)(this + 1000),&local_44,&local_44,&local_40);
    uVar2 = LayoutParameter::getLayoutType(param_1);
    *(undefined4 *)(this + 0x410) = uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

