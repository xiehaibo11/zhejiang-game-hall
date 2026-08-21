
/* cocos2d::extension::ControlSlider::needsLayout() */

void __thiscall cocos2d::extension::ControlSlider::needsLayout(ControlSlider *this)

{
  long lVar1;
  undefined8 *puVar2;
  float *pfVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  Rect aRStack_60 [16];
  float local_50;
  float fStack_4c;
  undefined1 auStack_48 [4];
  float local_44;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((((*(long **)(this + 0x370) != (long *)0x0) && (*(long *)(this + 0x378) != 0)) &&
      (*(long *)(this + 0x388) != 0)) && (*(long *)(this + 0x380) != 0)) {
    fVar5 = *(float *)(this + 0x358);
    fVar6 = *(float *)(this + 0x35c);
    fVar7 = *(float *)(this + 0x360);
    puVar2 = (undefined8 *)(**(code **)(**(long **)(this + 0x370) + 0xb0))();
    local_40 = *puVar2;
    pfVar3 = (float *)(**(code **)(**(long **)(this + 0x388) + 0x168))();
    local_40 = CONCAT44(local_40._4_4_,((fVar5 - fVar6) / (fVar7 - fVar6)) * *pfVar3);
    (**(code **)(**(long **)(this + 0x370) + 0x98))(*(long **)(this + 0x370),&local_40);
    (**(code **)(**(long **)(this + 0x378) + 0x98))(*(long **)(this + 0x378),&local_40);
    Rect::Rect((Rect *)&local_50,(Rect *)(*(long *)(this + 0x380) + 0x408));
    Rect::Rect(aRStack_60,local_50,fStack_4c,(float)local_40,local_44);
    Rect::operator=((Rect *)&local_50,aRStack_60);
    plVar4 = *(long **)(this + 0x380);
    (**(code **)(*plVar4 + 0x560))(plVar4,&local_50,(char)plVar4[0x83],auStack_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

