
/* cocos2d::renderer::RenderDataList::updateMesh(unsigned long, se::Object*, se::Object*) */

void __thiscall
cocos2d::renderer::RenderDataList::updateMesh
          (RenderDataList *this,ulong param_1,Object *param_2,Object *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  Isolate *pIVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  RenderData *this_00;
  vector<cocos2d::renderer::RenderData,std::__ndk1::allocator<cocos2d::renderer::RenderData>>
  *this_01;
  undefined8 *puVar9;
  HandleScope aHStack_80 [24];
  long local_68;
  undefined8 *puVar10;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  this_01 = (vector<cocos2d::renderer::RenderData,std::__ndk1::allocator<cocos2d::renderer::RenderData>>
             *)(this + 0x10);
  lVar5 = *(long *)this_01;
  lVar6 = *(long *)(this + 0x18);
  lVar7 = lVar6 - lVar5 >> 3;
  uVar8 = lVar7 * 0x6db6db6db6db6db7;
  if (uVar8 < param_1 || uVar8 - param_1 == 0) {
    uVar1 = param_1 + 1;
    uVar2 = uVar1 + lVar7 * -0x6db6db6db6db6db7;
    if (uVar1 < uVar8 || uVar2 == 0) {
      if (uVar1 < uVar8) {
        lVar7 = lVar5 + uVar1 * 0x38;
        if (lVar7 != lVar6) {
          puVar9 = (undefined8 *)(lVar6 + -0x38);
          do {
            puVar10 = puVar9 + -7;
            (**(code **)*puVar9)(puVar9);
            puVar9 = puVar10;
          } while ((undefined8 *)(lVar5 + param_1 * 0x38) != puVar10);
        }
        *(long *)(this + 0x18) = lVar7;
      }
    }
    else {
      std::__ndk1::
      vector<cocos2d::renderer::RenderData,std::__ndk1::allocator<cocos2d::renderer::RenderData>>::
      __append(this_01,uVar2);
    }
  }
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  pIVar4 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope(aHStack_80,pIVar4);
  this_00 = (RenderData *)(*(long *)this_01 + param_1 * 0x38);
  RenderData::setVertices(this_00,param_2);
  RenderData::setIndices(this_00,param_3);
  v8::HandleScope::~HandleScope(aHStack_80);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

