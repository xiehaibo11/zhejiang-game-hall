
/* cocostudio::Tween::arriveKeyFrame(cocostudio::FrameData*) */

void __thiscall cocostudio::Tween::arriveKeyFrame(Tween *this,FrameData *param_1)

{
  int iVar1;
  FrameData FVar2;
  DisplayManager *this_00;
  ulong uVar3;
  long *plVar4;
  
  if (param_1 != (FrameData *)0x0) {
    this_00 = (DisplayManager *)(**(code **)(**(long **)(this + 0x80) + 0x588))();
    iVar1 = *(int *)(param_1 + 0x74);
    uVar3 = (**(code **)(*(long *)this_00 + 0x58))();
    if ((uVar3 & 1) == 0) {
      DisplayManager::changeDisplayWithIndex(this_00,iVar1,false);
    }
    *(undefined4 *)(*(long *)(this + 0x60) + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    Bone::updateZOrder(*(Bone **)(this + 0x80));
    (**(code **)(**(long **)(this + 0x80) + 0x5a8))(*(long **)(this + 0x80),param_1 + 0x78);
    plVar4 = (long *)(**(code **)(**(long **)(this + 0x80) + 0x580))();
    if (plVar4 != (long *)0x0) {
      FVar2 = param_1[0x98];
      if (((byte)FVar2 & 1) == 0) {
        if ((byte)FVar2 >> 1 == 0) {
          return;
        }
      }
      else if (*(long *)(param_1 + 0xa0) == 0) {
        return;
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x588))();
                    /* WARNING: Could not recover jumptable at 0x00c3e404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0xd0))(plVar4,param_1 + 0x98,0xffffffff,0xffffffff);
      return;
    }
  }
  return;
}

