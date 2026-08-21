
/* cocos2d::Sequence::update(float) */

void __thiscall cocos2d::Sequence::update(Sequence *this,float param_1)

{
  long lVar1;
  Action *pAVar2;
  ulong uVar3;
  int iVar4;
  Sequence *pSVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float local_4c;
  long local_48;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00edcb00 with catch @ 00edcbe8
                        */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar9 = *(float *)(this + 0x68);
  if (fVar9 <= param_1) {
    fVar8 = 1.0;
    if (fVar9 != 1.0) {
      fVar8 = (param_1 - fVar9) / (1.0 - fVar9);
    }
    if (*(int *)(this + 0x6c) == 0) {
LAB_00edccc8:
      pAVar2 = *(Action **)(this + 0x58);
      local_4c = 1.0;
      if (*(int *)(this + 0x48) == 2) {
        uVar3 = ScriptEngineManager::sendActionEventToJS(pAVar2,0,&local_4c);
        if ((uVar3 & 1) == 0) {
          pAVar2 = *(Action **)(this + 0x58);
          goto LAB_00edccf4;
        }
      }
      else {
LAB_00edccf4:
        (**(code **)(*(long *)pAVar2 + 0x48))(0x3f800000);
      }
      (**(code **)(**(long **)(this + 0x58) + 0x38))();
    }
    else if (*(int *)(this + 0x6c) == -1) {
      (**(code **)(**(long **)(this + 0x58) + 0x30))
                (*(long **)(this + 0x58),*(undefined8 *)(this + 0x38));
      goto LAB_00edccc8;
    }
    lVar7 = 1;
  }
  else {
    fVar8 = param_1 / fVar9;
    if (fVar9 == 0.0) {
      fVar8 = 1.0;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00edca98 with catch @ 00edcc30
                        */
    if (*(int *)(this + 0x6c) == 1) {
      pAVar2 = *(Action **)(this + 0x60);
      local_4c = 0.0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00edc938 with catch @ 00edcc44
                        */
      if (*(int *)(this + 0x48) == 2) {
        uVar3 = ScriptEngineManager::sendActionEventToJS(pAVar2,0,&local_4c);
        if ((uVar3 & 1) == 0) {
          pAVar2 = *(Action **)(this + 0x60);
          goto LAB_00edcc5c;
        }
      }
      else {
LAB_00edcc5c:
        (**(code **)(*(long *)pAVar2 + 0x48))(0);
      }
      (**(code **)(**(long **)(this + 0x60) + 0x38))();
    }
    lVar7 = 0;
  }
  pSVar5 = this + 0x6c;
  iVar4 = *(int *)pSVar5;
  iVar6 = (int)lVar7;
  if (iVar6 == iVar4) {
    uVar3 = (**(code **)(**(long **)(this + lVar7 * 8 + 0x58) + 0x28))();
    if ((uVar3 & 1) != 0) goto LAB_00edcda0;
    iVar4 = *(int *)pSVar5;
  }
  if (iVar6 != iVar4) {
    (**(code **)(**(long **)(this + lVar7 * 8 + 0x58) + 0x30))
              (*(long **)(this + lVar7 * 8 + 0x58),*(undefined8 *)(this + 0x38));
  }
  pAVar2 = *(Action **)(this + lVar7 * 8 + 0x58);
  local_4c = fVar8;
  if (*(int *)(this + 0x48) == 2) {
    uVar3 = ScriptEngineManager::sendActionEventToJS(pAVar2,0,&local_4c);
    if ((uVar3 & 1) == 0) {
      pAVar2 = *(Action **)(this + lVar7 * 8 + 0x58);
      goto LAB_00edcd8c;
    }
  }
  else {
LAB_00edcd8c:
    (**(code **)(*(long *)pAVar2 + 0x48))(fVar8);
  }
  *(int *)pSVar5 = iVar6;
LAB_00edcda0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

