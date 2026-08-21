
/* cocos2d::renderer::RenderFlow::insertNodeLevel(unsigned long,
   cocos2d::renderer::RenderFlow::LevelInfo const&) */

void __thiscall
cocos2d::renderer::RenderFlow::insertNodeLevel(RenderFlow *this,ulong param_1,LevelInfo *param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  vector<std::__ndk1::vector<cocos2d::renderer::RenderFlow::LevelInfo,std::__ndk1::allocator<cocos2d::renderer::RenderFlow::LevelInfo>>,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::renderer::RenderFlow::LevelInfo,std::__ndk1::allocator<cocos2d::renderer::RenderFlow::LevelInfo>>>>
  *this_00;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  this_00 = (vector<std::__ndk1::vector<cocos2d::renderer::RenderFlow::LevelInfo,std::__ndk1::allocator<cocos2d::renderer::RenderFlow::LevelInfo>>,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::renderer::RenderFlow::LevelInfo,std::__ndk1::allocator<cocos2d::renderer::RenderFlow::LevelInfo>>>>
             *)(this + 0x28);
  lVar4 = *(long *)this_00;
  lVar6 = *(long *)(this + 0x30);
  lVar8 = lVar6 - lVar4 >> 3;
  uVar9 = lVar8 * -0x5555555555555555;
  if (uVar9 < param_1 || uVar9 - param_1 == 0) {
    uVar1 = param_1 + 1;
    uVar2 = uVar1 + lVar8 * 0x5555555555555555;
    if (uVar1 < uVar9 || uVar2 == 0) {
      if (uVar1 < uVar9) {
        lVar8 = lVar4 + uVar1 * 0x18;
        if (lVar8 != lVar6) {
          puVar7 = (undefined8 *)(lVar6 + -0x18);
          do {
            pvVar3 = (void *)*puVar7;
            if (pvVar3 != (void *)0x0) {
              puVar7[1] = pvVar3;
              operator_delete(pvVar3);
            }
            puVar7 = puVar7 + -3;
          } while ((undefined8 *)(lVar4 + param_1 * 0x18) != puVar7);
        }
        *(long *)(this + 0x30) = lVar8;
      }
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::vector<cocos2d::renderer::RenderFlow::LevelInfo,std::__ndk1::allocator<cocos2d::renderer::RenderFlow::LevelInfo>>,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::renderer::RenderFlow::LevelInfo,std::__ndk1::allocator<cocos2d::renderer::RenderFlow::LevelInfo>>>>
      ::__append(this_00,uVar2);
    }
  }
  lVar4 = *(long *)this_00 + param_1 * 0x18;
  plVar5 = (long *)(lVar4 + 8);
  puVar7 = (undefined8 *)*plVar5;
  if (puVar7 != *(undefined8 **)(lVar4 + 0x10)) {
    uVar10 = *(undefined8 *)(param_2 + 0x20);
    uVar12 = *(undefined8 *)(param_2 + 0x38);
    uVar11 = *(undefined8 *)(param_2 + 0x30);
    uVar14 = *(undefined8 *)(param_2 + 8);
    uVar13 = *(undefined8 *)param_2;
    uVar16 = *(undefined8 *)(param_2 + 0x18);
    uVar15 = *(undefined8 *)(param_2 + 0x10);
    puVar7[5] = *(undefined8 *)(param_2 + 0x28);
    puVar7[4] = uVar10;
    puVar7[7] = uVar12;
    puVar7[6] = uVar11;
    puVar7[1] = uVar14;
    *puVar7 = uVar13;
    puVar7[3] = uVar16;
    puVar7[2] = uVar15;
    *plVar5 = *plVar5 + 0x40;
    return;
  }
  std::__ndk1::
  vector<cocos2d::renderer::RenderFlow::LevelInfo,std::__ndk1::allocator<cocos2d::renderer::RenderFlow::LevelInfo>>
  ::__push_back_slow_path<cocos2d::renderer::RenderFlow::LevelInfo_const&>
            ((vector<cocos2d::renderer::RenderFlow::LevelInfo,std::__ndk1::allocator<cocos2d::renderer::RenderFlow::LevelInfo>>
              *)(*(long *)this_00 + param_1 * 0x18),param_2);
  return;
}

