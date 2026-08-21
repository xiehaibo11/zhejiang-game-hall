
/* cocos2d::TextRenderGroup::addRect(cocos2d::renderer::Texture*, cocos2d::Rect const&,
   cocos2d::Rect const&, cocos2d::Color4B const&, bool) */

void __thiscall
cocos2d::TextRenderGroup::addRect
          (TextRenderGroup *this,Texture *param_1,Rect *param_2,Rect *param_3,Color4B *param_4,
          bool param_5)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  Texture **ppTVar5;
  long lVar6;
  TextRenderGroupItem *this_00;
  long lVar7;
  __shared_weak_count *p_Var8;
  undefined1 auVar9 [16];
  Texture **local_78;
  __shared_weak_count *local_70;
  Texture *local_68 [2];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_78 = local_68;
  local_68[0] = param_1;
  auVar9 = std::__ndk1::
           __hash_table<std::__ndk1::__hash_value_type<cocos2d::renderer::Texture*,std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem>>,std::__ndk1::__unordered_map_hasher<cocos2d::renderer::Texture*,std::__ndk1::__hash_value_type<cocos2d::renderer::Texture*,std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem>>,std::__ndk1::hash<cocos2d::renderer::Texture*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::renderer::Texture*,std::__ndk1::__hash_value_type<cocos2d::renderer::Texture*,std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem>>,std::__ndk1::equal_to<cocos2d::renderer::Texture*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::renderer::Texture*,std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem>>>>
           ::
           __emplace_unique_key_args<cocos2d::renderer::Texture*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::renderer::Texture*const&>,std::__ndk1::tuple<>>
                     ((Texture **)this,(piecewise_construct_t *)local_68,(tuple *)&DAT_0188aad8,
                      (tuple *)&local_78);
  lVar6 = auVar9._0_8_;
  this_00 = *(TextRenderGroupItem **)(lVar6 + 0x18);
  if (this_00 == (TextRenderGroupItem *)0x0) {
    std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem>::make_shared<cocos2d::renderer::Texture*&>
              ((shared_ptr<cocos2d::TextRenderGroupItem> *)local_68,auVar9._8_8_);
    p_Var1 = local_70;
    ppTVar5 = local_78;
    local_78 = (Texture **)0x0;
    local_70 = (__shared_weak_count *)0x0;
    p_Var8 = *(__shared_weak_count **)(lVar6 + 0x20);
    *(Texture ***)(lVar6 + 0x18) = ppTVar5;
    *(__shared_weak_count **)(lVar6 + 0x20) = p_Var1;
    if (p_Var8 != (__shared_weak_count *)0x0) {
      p_Var1 = p_Var8 + 8;
      do {
        lVar7 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*(long *)p_Var8 + 0x10))(p_Var8);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var8);
      }
    }
    p_Var1 = local_70;
    if (local_70 != (__shared_weak_count *)0x0) {
      p_Var8 = local_70 + 8;
      do {
        lVar7 = *(long *)p_Var8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var8,0x10);
        if (bVar3) {
          *(long *)p_Var8 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*(long *)local_70 + 0x10))(local_70);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
      }
    }
    this_00 = *(TextRenderGroupItem **)(lVar6 + 0x18);
  }
  TextRenderGroupItem::addRect(this_00,param_2,param_3,param_4,param_5);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

