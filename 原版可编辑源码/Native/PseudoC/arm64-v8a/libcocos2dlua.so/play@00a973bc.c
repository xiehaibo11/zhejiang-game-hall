
/* fairygui::Transition::play(int, float, float, float, std::__ndk1::function<void ()>, bool) */

void __thiscall
fairygui::Transition::play
          (float param_2,undefined4 param_3,undefined4 param_4,Transition *this,undefined4 param_1,
          long *param_6,byte param_7)

{
  basic_string bVar1;
  long lVar2;
  long *plVar3;
  GComponent *pGVar4;
  Transition *pTVar5;
  GTweener *pGVar6;
  code *pcVar7;
  basic_string *pbVar8;
  Transition *pTVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  float *pfVar13;
  basic_string *pbVar14;
  ulong uVar15;
  float *pfVar16;
  float fVar17;
  undefined **local_e0;
  code *local_d8;
  undefined8 uStack_d0;
  Transition *local_c8;
  long *local_c0;
  long alStack_b0 [4];
  long *local_90;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  stop(this,true,true);
  *(undefined4 *)(this + 0x60) = param_1;
  this[0xb4] = (Transition)(param_7 & 1);
  *(undefined4 *)(this + 0xcc) = param_3;
  *(undefined4 *)(this + 0xd0) = param_4;
  *(undefined2 *)(this + 0x68) = 1;
  plVar3 = (long *)param_6[4];
  if (plVar3 == (long *)0x0) {
    local_90 = (long *)0x0;
  }
  else if (param_6 == plVar3) {
    local_90 = alStack_b0;
    (**(code **)(*plVar3 + 0x18))(plVar3,alStack_b0);
  }
  else {
    local_90 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  FUN_008820fc(alStack_b0,this + 0x80);
  if (alStack_b0 == local_90) {
    pcVar7 = *(code **)(*local_90 + 0x20);
LAB_00a974a0:
    (*pcVar7)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar7 = *(code **)(*local_90 + 0x28);
    goto LAB_00a974a0;
  }
  lVar10 = *(long *)(this + 0x48);
  uVar11 = *(long *)(this + 0x50) - lVar10;
  if (0 < (int)(uVar11 >> 3)) {
    uVar15 = 0;
    do {
      pfVar16 = *(float **)(lVar10 + uVar15 * 8);
      pGVar4 = *(GComponent **)(pfVar16 + 0x22);
      if (pGVar4 == (GComponent *)0x0) {
        bVar1 = *(basic_string *)(pfVar16 + 2);
        if (((byte)bVar1 & 1) == 0) {
          pGVar4 = *(GComponent **)(this + 0x40);
          if ((byte)bVar1 >> 1 != 0) {
LAB_00a97528:
            pGVar4 = (GComponent *)GComponent::getChildById(pGVar4,(basic_string *)(pfVar16 + 2));
          }
        }
        else {
          pGVar4 = *(GComponent **)(this + 0x40);
          if (*(long *)(pfVar16 + 4) != 0) goto LAB_00a97528;
        }
        *(GComponent **)(pfVar16 + 0x22) = pGVar4;
        if (pGVar4 != (GComponent *)0x0) goto LAB_00a97534;
      }
      else if ((pGVar4 == *(GComponent **)(this + 0x40)) ||
              (*(GComponent **)(pGVar4 + 0xa0) == *(GComponent **)(this + 0x40))) {
LAB_00a97534:
        if (pfVar16[8] == 1.4013e-44) {
          pbVar14 = *(basic_string **)(pfVar16 + 0x12);
          pGVar4 = (GComponent *)__dynamic_cast(pGVar4,&GObject::typeinfo,&GComponent::typeinfo,0);
          pTVar5 = (Transition *)GComponent::getTransition(pGVar4,pbVar14);
          pTVar9 = (Transition *)0x0;
          if ((pTVar5 != this) && (pTVar5 != (Transition *)0x0)) {
            pbVar8 = pbVar14;
            fVar17 = -1.0;
            if ((*(int *)(pbVar14 + 0x18) == 0) && (fVar17 = 0.0, uVar15 != 0)) {
              uVar12 = uVar15;
              do {
                pfVar13 = *(float **)(*(long *)(this + 0x48) + -8 + uVar12 * 8);
                if ((pfVar13[8] == 1.4013e-44) &&
                   (*(Transition **)(*(basic_string **)(pfVar13 + 0x12) + 0x20) == pTVar5)) {
                  pTVar5 = (Transition *)0x0;
                  pbVar8 = *(basic_string **)(pfVar13 + 0x12);
                  fVar17 = *pfVar16 - *pfVar13;
                  break;
                }
                uVar12 = uVar12 - 1;
              } while (0 < (long)uVar12);
            }
            *(float *)(pbVar8 + 0x28) = fVar17;
            pTVar9 = pTVar5;
          }
          *(Transition **)(pbVar14 + 0x20) = pTVar9;
        }
      }
      else {
        pfVar16[0x22] = 0.0;
        pfVar16[0x23] = 0.0;
      }
      uVar15 = uVar15 + 1;
      if (uVar15 == (uVar11 >> 3 & 0xffffffff)) break;
      lVar10 = *(long *)(this + 0x48);
    } while( true );
  }
  if (param_2 == 0.0) {
    onDelayedPlay(this);
  }
  else {
    pGVar6 = (GTweener *)GTween::delayedCall(param_2);
    pGVar6 = (GTweener *)GTweener::setTarget(pGVar6,(Ref *)this);
    local_e0 = &PTR_FUN_016a7560;
    uStack_d0 = 0;
    local_d8 = onDelayedPlay;
    local_c8 = this;
    local_c0 = (long *)&local_e0;
    GTweener::onComplete(pGVar6,&local_e0);
    if (&local_e0 == (undefined ***)local_c0) {
      pcVar7 = *(code **)(*local_c0 + 0x20);
    }
    else {
      if (local_c0 == (long *)0x0) goto LAB_00a9767c;
      pcVar7 = *(code **)(*local_c0 + 0x28);
    }
    (*pcVar7)();
  }
LAB_00a9767c:
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

