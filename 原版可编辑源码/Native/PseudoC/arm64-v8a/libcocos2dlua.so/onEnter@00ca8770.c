
/* cocostudio::timeline::PlayableFrame::onEnter(cocostudio::timeline::Frame*, int) */

void cocostudio::timeline::PlayableFrame::onEnter(Frame *param_1,int param_2)

{
  size_t __n;
  size_t sVar1;
  Frame FVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  Frame *pFVar6;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar7;
  Frame *pFVar8;
  Node *this;
  ulong uVar9;
  
  this = *(Node **)(param_1 + 0x50);
  if ((this == (Node *)0x0) ||
     (plVar4 = (long *)__dynamic_cast(this,&cocos2d::Node::typeinfo,
                                      &cocos2d::PlayableProtocol::typeinfo,0xfffffffffffffffe),
     plVar4 == (long *)0x0)) {
    lVar5 = cocos2d::Node::getComponent(this,(basic_string *)PLAYABLE_EXTENTION);
    if (lVar5 == 0) {
      return;
    }
    plVar4 = (long *)__dynamic_cast(lVar5,&cocos2d::Component::typeinfo,
                                    &cocos2d::PlayableProtocol::typeinfo,0xfffffffffffffffe);
    if (plVar4 == (long *)0x0) {
      return;
    }
  }
  FVar2 = param_1[0x58];
  uVar9 = (ulong)((byte)FVar2 >> 1);
  __n = uVar9;
  if (((byte)FVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x60);
  }
  sVar1 = (ulong)(START_ACT >> 1);
  if ((START_ACT & 1) != 0) {
    sVar1 = DAT_01786940;
  }
  if (__n == sVar1) {
    pFVar8 = *(Frame **)(param_1 + 0x68);
    if (((byte)FVar2 & 1) == 0) {
      pFVar8 = param_1 + 0x59;
    }
    pFVar6 = DAT_01786948;
    if ((START_ACT & 1) == 0) {
      pFVar6 = (Frame *)&DAT_01786939;
    }
    if (((byte)FVar2 & 1) == 0) {
      if (__n != 0) {
        pFVar8 = param_1 + 0x59;
        uVar7 = uVar9;
        do {
          if (*pFVar8 != *pFVar6) goto LAB_00ca8880;
          uVar7 = uVar7 - 1;
          pFVar8 = pFVar8 + 1;
          pFVar6 = pFVar6 + 1;
        } while (uVar7 != 0);
      }
    }
    else if ((__n != 0) && (iVar3 = memcmp(pFVar8,pFVar6,__n), iVar3 != 0)) goto LAB_00ca8880;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
  }
  else {
LAB_00ca8880:
    sVar1 = (ulong)(STOP_ACT >> 1);
    if ((STOP_ACT & 1) != 0) {
      sVar1 = DAT_01786958;
    }
    if (__n != sVar1) {
      return;
    }
    pFVar8 = *(Frame **)(param_1 + 0x68);
    if (((byte)FVar2 & 1) == 0) {
      pFVar8 = param_1 + 0x59;
    }
    pFVar6 = DAT_01786960;
    if ((STOP_ACT & 1) == 0) {
      pFVar6 = (Frame *)&DAT_01786951;
    }
    if (((byte)FVar2 & 1) == 0) {
      if (__n != 0) {
        pFVar8 = param_1 + 0x59;
        do {
          if (*pFVar8 != *pFVar6) {
            return;
          }
          uVar9 = uVar9 - 1;
          pFVar8 = pFVar8 + 1;
          pFVar6 = pFVar6 + 1;
        } while (uVar9 != 0);
      }
    }
    else if ((__n != 0) && (iVar3 = memcmp(pFVar8,pFVar6,__n), iVar3 != 0)) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00ca8938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar4);
  return;
}

