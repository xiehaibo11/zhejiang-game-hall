
/* fairygui::InputProcessor::onTouchEnded(cocos2d::Touch*, cocos2d::Event*) */

void fairygui::InputProcessor::onTouchEnded(Touch *param_1,Event *param_2)

{
  long lVar1;
  undefined8 uVar2;
  GObject *pGVar3;
  TouchInfo *pTVar4;
  clock_t cVar5;
  long *plVar6;
  InputProcessor *pIVar7;
  UIEventDispatcher *pUVar8;
  long lVar9;
  ulong uVar10;
  Vec2 *pVVar11;
  char *pcVar12;
  InputProcessor *pIVar13;
  long lVar14;
  WeakPtr *this;
  int iVar15;
  WeakPtr *pWVar16;
  ulong uVar17;
  long lVar18;
  undefined4 uVar19;
  undefined4 in_s1;
  WeakPtr aWStack_88 [8];
  undefined4 local_80 [2];
  undefined4 local_78 [4];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar2 = cocos2d::Camera::getVisitingCamera();
  local_80[0] = cocos2d::Touch::getLocation((Touch *)param_2);
  pGVar3 = (GObject *)
           (**(code **)(**(long **)(param_1 + 0x30) + 0x48))
                     (*(long **)(param_1 + 0x30),local_80,uVar2);
  if (pGVar3 == (GObject *)0x0) {
    pGVar3 = *(GObject **)(param_1 + 0x30);
  }
  iVar15 = 1;
  pTVar4 = (TouchInfo *)getTouch((InputProcessor *)param_1,*(int *)(param_2 + 0x24),true);
  uVar19 = GRoot::worldToRoot(GRoot::_inst,(Vec2 *)local_80);
  *(undefined4 *)(pTVar4 + 8) = uVar19;
  *(undefined4 *)(pTVar4 + 0xc) = in_s1;
  *(undefined4 *)(pTVar4 + 0x1c) = 0;
  *(Event **)pTVar4 = param_2;
  pTVar4[0x28] = (TouchInfo)0x0;
  cVar5 = clock();
  if ((float)((double)(cVar5 - *(long *)(pTVar4 + 0x30)) / 1000000.0) < 0.45) {
    iVar15 = 1;
    if (*(int *)(pTVar4 + 0x14) != 2) {
      iVar15 = *(int *)(pTVar4 + 0x14) + 1;
    }
  }
  uVar2 = *(undefined8 *)(pTVar4 + 8);
  *(int *)(pTVar4 + 0x14) = iVar15;
  *(clock_t *)(pTVar4 + 0x30) = cVar5;
  *(GObject **)(param_1 + 0x70) = pGVar3;
  uVar2 = NEON_scvtf(CONCAT44((int)(float)((ulong)uVar2 >> 0x20),(int)(float)uVar2),4);
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  *(int *)(param_1 + 0x8c) = iVar15;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(pTVar4 + 0x18);
  lVar14 = *(long *)pTVar4;
  *(long *)(param_1 + 0x78) = lVar14;
  if (lVar14 == 0) {
    uVar19 = 0xffffffff;
  }
  else {
    uVar19 = *(undefined4 *)(pTVar4 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x88) = uVar19;
  lVar14 = cocos2d::Director::getInstance();
  iVar15 = *(int *)(lVar14 + 0x14c);
  if (iVar15 == _touchOnUIFlagFrameId) {
    if (*(GObject **)(param_1 + 0x30) != pGVar3) {
      _touchOnUI = 1;
    }
  }
  else {
    _touchOnUI = *(GObject **)(param_1 + 0x30) != pGVar3;
  }
  plVar6 = *(long **)(param_1 + 0x60);
  _activeProcessor = param_1;
  _touchOnUIFlagFrameId = iVar15;
  if (plVar6 != (long *)0x0) {
    local_78[0] = 0xc;
    (**(code **)(*plVar6 + 0x30))(plVar6,local_78);
  }
  pIVar7 = (InputProcessor *)WeakPtr::WeakPtr(aWStack_88,pGVar3);
  pWVar16 = *(WeakPtr **)(pTVar4 + 0x58);
  lVar14 = *(long *)(pTVar4 + 0x60) - (long)pWVar16;
  if (lVar14 != 0) {
    lVar18 = 0;
    uVar17 = 0;
    do {
      pUVar8 = (UIEventDispatcher *)WeakPtr::ptr(pWVar16 + lVar18);
      if (((pUVar8 != (UIEventDispatcher *)0x0) && (pUVar8 != (UIEventDispatcher *)pGVar3)) &&
         ((lVar9 = __dynamic_cast(pUVar8,&GObject::typeinfo,&GComponent::typeinfo,0), lVar9 == 0 ||
          (uVar10 = GComponent::isAncestorOf((GComponent *)pUVar8,pGVar3), (uVar10 & 1) == 0)))) {
        UIEventDispatcher::dispatchEvent(pUVar8,0xc,(void *)0x0,(Value *)&cocos2d::Value::Null);
      }
      pWVar16 = *(WeakPtr **)(pTVar4 + 0x58);
      uVar17 = uVar17 + 1;
      lVar18 = lVar18 + 8;
    } while (uVar17 < (ulong)(lVar14 >> 3));
    this = *(WeakPtr **)(pTVar4 + 0x60);
    while (this != pWVar16) {
      this = this + -8;
      WeakPtr::~WeakPtr(this);
    }
    *(WeakPtr **)(pTVar4 + 0x60) = pWVar16;
    pIVar7 = (InputProcessor *)WeakPtr::ptr(aWStack_88);
    pGVar3 = (GObject *)pIVar7;
  }
  if (pGVar3 == (GObject *)0x0) {
    pIVar13 = (InputProcessor *)0x0;
  }
  else {
    UIEventDispatcher::bubbleEvent
              ((UIEventDispatcher *)pGVar3,0xc,(void *)0x0,(Value *)&cocos2d::Value::Null);
    pIVar7 = (InputProcessor *)WeakPtr::ptr(aWStack_88);
    pIVar13 = pIVar7;
  }
  pGVar3 = (GObject *)clickTest(pIVar7,pTVar4,(GObject *)pIVar13);
  pIVar7 = (InputProcessor *)0x0;
  if (pGVar3 != (GObject *)0x0) {
    WeakPtr::operator=(aWStack_88,pGVar3);
    uVar2 = *(undefined8 *)(pTVar4 + 8);
    *(GObject **)(param_1 + 0x70) = pGVar3;
    uVar2 = NEON_scvtf(CONCAT44((int)(float)((ulong)uVar2 >> 0x20),(int)(float)uVar2),4);
    *(undefined8 *)(param_1 + 0x80) = uVar2;
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(pTVar4 + 0x1c);
    *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)(pTVar4 + 0x14);
    lVar14 = *(long *)pTVar4;
    *(long *)(param_1 + 0x78) = lVar14;
    if (lVar14 == 0) {
      uVar19 = 0xffffffff;
    }
    else {
      uVar19 = *(undefined4 *)(pTVar4 + 0x10);
    }
    *(undefined4 *)(param_1 + 0x88) = uVar19;
    lVar14 = cocos2d::Director::getInstance();
    if (*(int *)(lVar14 + 0x14c) == _touchOnUIFlagFrameId) {
      if (*(GObject **)(param_1 + 0x30) != pGVar3) {
        _touchOnUI = 1;
      }
    }
    else {
      _touchOnUI = *(GObject **)(param_1 + 0x30) != pGVar3;
    }
    _touchOnUIFlagFrameId = *(int *)(lVar14 + 0x14c);
    pUVar8 = (UIEventDispatcher *)
             __dynamic_cast(pGVar3,&GObject::typeinfo,&GRichTextField::typeinfo,0);
    if (pUVar8 != (UIEventDispatcher *)0x0) {
      pVVar11 = (Vec2 *)0x0;
      if (*(long *)(pUVar8 + 0xa8) != 0) {
        pVVar11 = (Vec2 *)__dynamic_cast(*(long *)(pUVar8 + 0xa8),&cocos2d::Node::typeinfo,
                                         &FUIRichText::typeinfo,0);
      }
      pcVar12 = (char *)FUIRichText::hitTestLink(pVVar11);
      if (pcVar12 != (char *)0x0) {
        cocos2d::Value::Value((Value *)local_78,pcVar12);
        UIEventDispatcher::bubbleEvent(pUVar8,0x33,(void *)0x0,(Value *)local_78);
        cocos2d::Value::~Value((Value *)local_78);
        pGVar3 = (GObject *)WeakPtr::ptr(aWStack_88);
      }
    }
    UIEventDispatcher::bubbleEvent
              ((UIEventDispatcher *)pGVar3,0xd,(void *)0x0,(Value *)&cocos2d::Value::Null);
    pIVar7 = (InputProcessor *)WeakPtr::ptr(aWStack_88);
  }
  handleRollOver(pIVar7,pTVar4,(GObject *)0x0);
  *(undefined4 *)(pTVar4 + 0x10) = 0xffffffff;
  *(undefined4 *)(pTVar4 + 0x1c) = 0xffffffff;
  _activeProcessor = (Touch *)0x0;
  WeakPtr::~WeakPtr(aWStack_88);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

