
/* cocostudio::timeline::Timeline::updateCurrentKeyFrame(unsigned int) */

void __thiscall cocostudio::timeline::Timeline::updateCurrentKeyFrame(Timeline *this,uint param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  
  if ((*(uint *)(this + 0x48) <= param_1) &&
     (param_1 < *(int *)(this + 0x54) + *(uint *)(this + 0x48))) {
    return;
  }
  puVar1 = *(undefined8 **)(this + 0x28);
  lVar11 = *(long *)(this + 0x30);
  uVar2 = (**(code **)(*(long *)*puVar1 + 0x18))();
  if (param_1 < uVar2) {
    plVar7 = (long *)**(undefined8 **)(this + 0x28);
    *(undefined4 *)(this + 0x48) = 0;
    iVar3 = (**(code **)(*plVar7 + 0x18))(plVar7);
    plVar9 = plVar7;
  }
  else {
    lVar11 = lVar11 - (long)puVar1 >> 3;
    uVar10 = lVar11 - 1;
    uVar2 = (**(code **)(**(long **)(*(long *)(this + 0x28) + uVar10 * 8) + 0x18))();
    if (uVar2 <= param_1) {
      param_1 = (**(code **)(**(long **)(*(long *)(this + 0x28) + uVar10 * 8) + 0x18))();
      if (param_1 <= *(uint *)(this + 0x48)) {
        return;
      }
    }
    while( true ) {
      *(uint *)(this + 0x4c) = *(uint *)(this + 0x50);
      plVar7 = *(long **)(*(long *)(this + 0x28) + (ulong)*(uint *)(this + 0x50) * 8);
      uVar4 = (**(code **)(*plVar7 + 0x18))(plVar7);
      *(undefined4 *)(this + 0x48) = uVar4;
      uVar2 = 0;
      if ((long)(ulong)(*(int *)(this + 0x4c) + 1) < lVar11) {
        uVar2 = *(int *)(this + 0x4c) + 1;
      }
      *(uint *)(this + 0x50) = uVar2;
      plVar8 = *(long **)(*(long *)(this + 0x28) + (ulong)uVar2 * 8);
      uVar2 = (**(code **)(*plVar7 + 0x18))(plVar7);
      if ((param_1 == uVar2) ||
         ((uVar2 = (**(code **)(*plVar7 + 0x18))(plVar7), uVar2 < param_1 &&
          (uVar2 = (**(code **)(*plVar8 + 0x18))(plVar8), param_1 < uVar2)))) break;
      uVar6 = (**(code **)(*plVar7 + 0x70))(plVar7);
      if ((uVar6 & 1) != 0) {
        uVar4 = (**(code **)(*plVar7 + 0x18))(plVar7);
        (**(code **)(*plVar7 + 0x78))(plVar7,plVar8,uVar4);
      }
    }
    plVar9 = plVar7;
    if (uVar10 != *(uint *)(this + 0x4c)) {
      plVar9 = plVar8;
    }
    iVar3 = (**(code **)(*plVar9 + 0x18))(plVar9);
    iVar5 = (**(code **)(*plVar7 + 0x18))(plVar7);
    iVar3 = iVar3 - iVar5;
  }
  *(int *)(this + 0x54) = iVar3;
  *(long **)(this + 0x40) = plVar7;
                    /* WARNING: Could not recover jumptable at 0x00ca9b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x78))(plVar7,plVar9,param_1);
  return;
}

