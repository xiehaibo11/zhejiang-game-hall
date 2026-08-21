
/* fairygui::Window::setDragArea(fairygui::GObject*) */

void __thiscall fairygui::Window::setDragArea(Window *this,GObject *param_1)

{
  long lVar1;
  GObject *pGVar2;
  long lVar3;
  code *pcVar4;
  UIEventDispatcher *pUVar5;
  float fVar6;
  float fVar7;
  Color4F aCStack_90 [16];
  undefined **local_80;
  code *local_78;
  undefined8 uStack_70;
  Window *local_68;
  undefined ***local_60;
  long local_48;
  
                    /* catch() { ... } // from try @ 00aa521c with catch @ 00aa531c */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pGVar2 = *(GObject **)(this + 0x2a8);
  if (pGVar2 != param_1) {
    if (pGVar2 != (GObject *)0x0) {
      GObject::setDraggable(pGVar2,false);
      pUVar5 = *(UIEventDispatcher **)(this + 0x2a8);
      EventTag::EventTag((EventTag *)&local_80,this);
      UIEventDispatcher::removeEventListener(pUVar5,0x3c,(EventTag *)&local_80);
      EventTag::~EventTag((EventTag *)&local_80);
      cocos2d::Ref::release(*(Ref **)(this + 0x2a8));
    }
    *(GObject **)(this + 0x2a8) = param_1;
    if (param_1 != (GObject *)0x0) {
      cocos2d::Ref::retain((Ref *)param_1);
      pGVar2 = *(GObject **)(this + 0x2a8);
      if (((pGVar2 != (GObject *)0x0) &&
          (lVar3 = __dynamic_cast(pGVar2,&GObject::typeinfo,&GGraph::typeinfo,0), lVar3 != 0)) &&
         (*(int *)(pGVar2 + 0x1d8) == 0)) {
        fVar6 = *(float *)(pGVar2 + 200);
        fVar7 = *(float *)(pGVar2 + 0xcc);
        cocos2d::Color4F::Color4F((Color4F *)&local_80,0.0,0.0,0.0,0.0);
        cocos2d::Color4F::Color4F(aCStack_90,0.0,0.0,0.0,0.0);
        GGraph::drawRect((GGraph *)pGVar2,fVar6,fVar7,0,(Color4F *)&local_80,aCStack_90);
        pGVar2 = *(GObject **)(this + 0x2a8);
      }
      GObject::setDraggable(pGVar2,true);
      pUVar5 = *(UIEventDispatcher **)(this + 0x2a8);
      local_60 = &local_80;
      local_80 = &PTR_FUN_016a7900;
      uStack_70 = 0;
      local_78 = onDragStart;
      local_68 = this;
      EventTag::EventTag((EventTag *)aCStack_90,this);
      UIEventDispatcher::addEventListener(pUVar5,0x3c,(function *)&local_80,(EventTag *)aCStack_90);
      EventTag::~EventTag((EventTag *)aCStack_90);
      if (&local_80 == local_60) {
        pcVar4 = (code *)(*local_60)[4];
      }
      else {
        if (local_60 == (undefined ***)0x0) goto LAB_00aa54ac;
        pcVar4 = (code *)(*local_60)[5];
      }
      (*pcVar4)();
    }
  }
LAB_00aa54ac:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

