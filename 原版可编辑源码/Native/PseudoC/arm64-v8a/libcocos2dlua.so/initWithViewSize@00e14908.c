
/* cocos2d::extension::ScrollView::initWithViewSize(cocos2d::Size, cocos2d::Node*) */

void __thiscall
cocos2d::extension::ScrollView::initWithViewSize(ScrollView *this,Size *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 uVar5;
  void *pvVar6;
  long lVar7;
  undefined8 uVar8;
  Size aSStack_68 [8];
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = Layer::init((Layer *)this);
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    *(long *)(this + 0x340) = param_3;
    if (param_3 == 0) {
      plVar3 = (long *)Layer::create();
      *(long **)(this + 0x340) = plVar3;
      (**(code **)(*plVar3 + 0x1f0))(plVar3,0);
      local_60 = 0;
      (**(code **)(**(long **)(this + 0x340) + 0x148))(*(long **)(this + 0x340),&local_60);
    }
    Size::Size(aSStack_68,param_2);
    Size::operator=((Size *)(this + 0x390),aSStack_68);
    Node::setContentSize((Node *)this,aSStack_68);
    setTouchEnabled(this,true);
    pvVar6 = *(void **)(this + 0x378);
    if ((ulong)(*(long *)(this + 0x388) - (long)pvVar6 >> 3) < 0xf) {
                    /* catch() { ... } // from try @ 00e148ac with catch @ 00e149c4 */
      lVar7 = *(long *)(this + 0x380) - (long)pvVar6;
      pvVar4 = operator_new(0x78);
                    /* catch() { ... } // from try @ 00e1487c with catch @ 00e149d4 */
                    /* catch() { ... } // from try @ 00e14898 with catch @ 00e149dc */
      if (0 < lVar7) {
                    /* try { // try from 00e149f8 to 00f14aa3 has its CatchHandler @ 00e149f8
                       catch() { ... } // from try @ 00e149f8 with catch @ 00e149f8
                       catch() { ... } // from try @ 00e14ae8 with catch @ 00e149f8
                       catch() { ... } // from try @ 00e14d7c with catch @ 00e149f8 */
        __memcpy_chk(pvVar4,pvVar6,lVar7,0x78);
        pvVar6 = *(void **)(this + 0x378);
      }
      *(void **)(this + 0x378) = pvVar4;
      *(long *)(this + 0x380) = (long)pvVar4 + lVar7;
      *(long *)(this + 0x388) = (long)pvVar4 + 0x78;
      if (pvVar6 != (void *)0x0) {
        operator_delete(pvVar6);
      }
    }
    *(undefined2 *)(this + 0x35c) = 0x101;
    *(undefined8 *)(this + 0x328) = 0;
    *(undefined4 *)(this + 0x330) = 2;
    (**(code **)(**(long **)(this + 0x340) + 200))(0,0);
    *(undefined4 *)(this + 0x370) = 0;
    (**(code **)(*(long *)this + 0x208))(this,*(undefined8 *)(this + 0x340));
    uVar8 = NEON_fmov(0x3f800000,4);
    uVar5 = 1;
    *(undefined8 *)(this + 0x398) = uVar8;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

