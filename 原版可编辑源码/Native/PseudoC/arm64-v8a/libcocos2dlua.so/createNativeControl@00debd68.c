
/* cocos2d::ui::EditBoxImplAndroid::createNativeControl(cocos2d::Rect const&) */

void cocos2d::ui::EditBoxImplAndroid::createNativeControl(Rect *param_1)

{
  long lVar1;
  int iVar2;
  Director *this;
  Size *pSVar3;
  long lVar4;
  long in_x1;
  GLView *this_00;
  piecewise_construct_t *ppVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float in_s1;
  float fVar13;
  piecewise_construct_t *local_c0 [2];
  void *local_b0;
  piecewise_construct_t *local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  this = (Director *)Director::getInstance();
  this_00 = *(GLView **)(this + 0x108);
  (**(code **)(*(long *)this_00 + 0x48))(&local_98,this_00);
  pSVar3 = (Size *)Director::getWinSize(this);
  Size::Size((Size *)&local_a0,pSVar3);
  fVar6 = (float)Node::convertToWorldSpace(*(Node **)(param_1 + 0x10),(Vec2 *)&Vec2::ZERO);
  fVar13 = in_s1;
  Size::Size((Size *)&local_a8,(Size *)(in_x1 + 8));
  local_c0[0] = local_a8;
  fVar7 = (float)Node::convertToWorldSpace(*(Node **)(param_1 + 0x10),(Vec2 *)local_c0);
  fVar8 = (float)GLView::getScaleX(this_00);
  fVar9 = (float)GLView::getScaleY(this_00);
  fVar10 = (float)GLView::getScaleX(this_00);
  fVar11 = (float)GLView::getScaleY(this_00);
  fVar12 = (float)GLView::getScaleX(this_00);
  __android_log_print((double)fVar12,6,&DAT_013c996e,"scaleX = %f");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_c0,"createEditBox");
  fVar12 = (float)GLView::getScaleX(this_00);
  iVar2 = JniHelper::callStaticIntMethod<int,int,int,int,float>
                    ((basic_string *)&DAT_01788ac8,(basic_string *)local_c0,
                     (int)(local_98 * 0.5 + fVar8 * (fVar6 - local_a0 * 0.5)),
                     (int)(local_94 * 0.5 - fVar9 * (fVar13 - local_9c * 0.5)),
                     (int)((fVar7 - fVar6) * fVar10),(int)((fVar13 - in_s1) * fVar11),fVar12);
  ppVar5 = (piecewise_construct_t *)(param_1 + 0xb8);
  *(int *)ppVar5 = iVar2;
  if (((ulong)local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
  local_c0[0] = ppVar5;
  lVar4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::ui::EditBoxImplAndroid*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::ui::EditBoxImplAndroid*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::ui::EditBoxImplAndroid*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::ui::EditBoxImplAndroid*>>>
          ::
          __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                    ((int *)&DAT_01788ae0,ppVar5,(tuple *)&DAT_01420696,(tuple *)local_c0);
  *(Rect **)(lVar4 + 0x18) = param_1;
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

