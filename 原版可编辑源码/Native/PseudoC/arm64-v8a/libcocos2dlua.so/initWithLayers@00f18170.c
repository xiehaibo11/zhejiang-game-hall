
/* cocos2d::LayerMultiplex::initWithLayers(cocos2d::Layer*, std::__va_list) */

undefined8 __thiscall
cocos2d::LayerMultiplex::initWithLayers(LayerMultiplex *this,Ref *param_1,long *param_3)

{
  int iVar1;
  long lVar2;
  Director *this_00;
  undefined8 uVar3;
  void *pvVar4;
  long *plVar5;
  Ref *pRVar6;
  void *pvVar7;
  long lVar8;
  long *plVar9;
  Ref *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this_00 = (Director *)Director::getInstance();
  uVar3 = Director::getWinSize(this_00);
  (**(code **)(*(long *)this + 0x160))(this,uVar3);
  plVar9 = *(long **)(this + 0x338);
  pvVar7 = *(void **)(this + 0x328);
  if ((ulong)((long)plVar9 - (long)pvVar7 >> 3) < 5) {
    lVar8 = *(long *)(this + 0x330) - (long)pvVar7;
    pvVar4 = operator_new(0x28);
    plVar9 = (long *)((long)pvVar4 + 0x28);
    if (0 < lVar8) {
      __memcpy_chk(pvVar4,pvVar7,lVar8,0x28);
      pvVar7 = *(void **)(this + 0x328);
    }
    *(void **)(this + 0x328) = pvVar4;
    *(long *)(this + 0x330) = (long)pvVar4 + lVar8;
    *(long **)(this + 0x338) = plVar9;
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
      plVar9 = *(long **)(this + 0x338);
    }
  }
  plVar5 = *(long **)(this + 0x330);
  local_70 = param_1;
  if (plVar5 == plVar9) goto LAB_00f18254;
  *plVar5 = (long)param_1;
  *(long **)(this + 0x330) = plVar5 + 1;
  local_70 = param_1;
  while( true ) {
    Ref::retain(local_70);
    iVar1 = (int)param_3[3];
    if ((iVar1 < 0) && (*(int *)(param_3 + 3) = iVar1 + 8, iVar1 + 8 < 1)) {
      pRVar6 = *(Ref **)(param_3[1] + (long)iVar1);
    }
    else {
      plVar9 = (long *)*param_3;
      *param_3 = (long)(plVar9 + 1);
      pRVar6 = (Ref *)*plVar9;
    }
    if (pRVar6 == (Ref *)0x0) break;
    plVar9 = *(long **)(this + 0x330);
    local_70 = pRVar6;
    if (plVar9 == *(long **)(this + 0x338)) {
LAB_00f18254:
      std::__ndk1::vector<cocos2d::Layer*,std::__ndk1::allocator<cocos2d::Layer*>>::
      __push_back_slow_path<cocos2d::Layer*const&>
                ((vector<cocos2d::Layer*,std::__ndk1::allocator<cocos2d::Layer*>> *)(this + 0x328),
                 (Layer **)&local_70);
    }
    else {
      *plVar9 = (long)pRVar6;
      *(long **)(this + 0x330) = plVar9 + 1;
    }
  }
  *(undefined4 *)(this + 800) = 0;
  (**(code **)(*(long *)this + 0x208))(this,**(undefined8 **)(this + 0x328));
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

