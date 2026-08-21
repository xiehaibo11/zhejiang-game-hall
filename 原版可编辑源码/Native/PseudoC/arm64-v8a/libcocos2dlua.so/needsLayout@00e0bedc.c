
/* cocos2d::extension::ControlButton::needsLayout() */

void cocos2d::extension::ControlButton::needsLayout(void)

{
  byte *pbVar1;
  long lVar2;
  long *in_x0;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  float *pfVar6;
  long lVar7;
  pointer_____offset_0x10___ *in_x2;
  float fVar8;
  Size aSStack_90 [8];
  Rect aRStack_88 [8];
  float local_80;
  float fStack_7c;
  Rect aRStack_78 [16];
  float local_68;
  float local_64;
  float local_60;
  float fStack_5c;
  long lStack_58;
  long local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(char *)((long)in_x0 + 0x359) == '\0') goto LAB_00e0c338;
  plVar3 = (long *)in_x0[0x70];
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x170))(plVar3,0);
  }
  plVar3 = (long *)in_x0[0x71];
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x170))(plVar3,0);
  }
  (**(code **)(*in_x0 + 0x7b0))();
  (**(code **)(*in_x0 + 0x6b8))(&local_60);
  pbVar1 = (byte *)(in_x0 + 0x6c);
  if ((*(byte *)(in_x0 + 0x6c) & 1) == 0) {
    pbVar1[0] = 0;
    pbVar1[1] = 0;
  }
  else {
    *(undefined1 *)in_x0[0x6e] = 0;
    in_x0[0x6d] = 0;
    if ((*(byte *)(in_x0 + 0x6c) & 1) != 0) {
      operator_delete((void *)in_x0[0x6e]);
      in_x0[0x6c] = 0;
    }
  }
  in_x0[0x6e] = local_50;
  in_x0[0x6d] = lStack_58;
  *(ulong *)pbVar1 = CONCAT44(fStack_5c,local_60);
  uVar4 = (**(code **)(*in_x0 + 0x6c8))();
  *(short *)(in_x0 + 0x6f) = (short)uVar4;
  *(char *)((long)in_x0 + 0x37a) = (char)((ulong)uVar4 >> 0x10);
  (**(code **)(*in_x0 + 0x6d8))();
  (**(code **)(*in_x0 + 0x760))();
  plVar3 = (long *)in_x0[0x70];
  if (plVar3 != (long *)0x0) {
    in_x2 = &LabelProtocol::typeinfo;
    plVar5 = (long *)__dynamic_cast(plVar3,&Node::typeinfo,&LabelProtocol::typeinfo,
                                    0xfffffffffffffffe);
    if (plVar5 != (long *)0x0) {
      if ((*pbVar1 & 1) == 0) {
        if (*pbVar1 >> 1 != 0) {
LAB_00e0c03c:
          (**(code **)(*plVar5 + 0x10))(plVar5,pbVar1);
          plVar3 = (long *)in_x0[0x70];
          if (plVar3 == (long *)0x0) goto LAB_00e0c0b4;
        }
      }
      else if (in_x0[0x6d] != 0) goto LAB_00e0c03c;
    }
    (**(code **)(*plVar3 + 0x4c0))(plVar3,in_x0 + 0x6f);
    plVar3 = (long *)in_x0[0x70];
    if (plVar3 != (long *)0x0) {
      pfVar6 = (float *)(**(code **)(*in_x0 + 0x168))();
      fVar8 = *pfVar6;
      lVar7 = (**(code **)(*in_x0 + 0x168))();
      (**(code **)(*plVar3 + 200))(fVar8 * 0.5,*(float *)(lVar7 + 4) * 0.5,plVar3);
    }
  }
LAB_00e0c0b4:
  (**(code **)(*in_x0 + 0x718))();
  (**(code **)(*in_x0 + 0x770))();
  plVar3 = (long *)in_x0[0x71];
  if (plVar3 != (long *)0x0) {
    pfVar6 = (float *)(**(code **)(*in_x0 + 0x168))();
    fVar8 = *pfVar6;
    lVar7 = (**(code **)(*in_x0 + 0x168))();
    (**(code **)(*plVar3 + 200))(fVar8 * 0.5,*(float *)(lVar7 + 4) * 0.5,plVar3);
  }
  Size::Size((Size *)&local_68);
  if ((long *)in_x0[0x70] != (long *)0x0) {
    (**(code **)(*(long *)in_x0[0x70] + 0x370))(&local_60);
    Size::operator=((Size *)&local_68,(Size *)&lStack_58);
  }
  plVar3 = (long *)in_x0[0x71];
  if (*(char *)((long)in_x0 + 0x35a) == '\0') {
    if (plVar3 != (long *)0x0) {
      cocos2d::ui::Scale9Sprite::getPreferredSize();
      if (local_60 <= 0.0) {
        local_60 = local_68;
      }
      if (fStack_5c <= 0.0) {
        fStack_5c = local_64;
      }
      plVar3 = (long *)in_x0[0x71];
      lVar7 = *plVar3;
      goto LAB_00e0c1e8;
    }
  }
  else if (plVar3 != (long *)0x0) {
    Size::Size((Size *)&local_60,local_68 + (float)(*(int *)((long)in_x0 + 0x44c) << 1),
               local_64 + (float)((int)in_x0[0x89] << 1));
    lVar7 = *plVar3;
LAB_00e0c1e8:
    (**(code **)(lVar7 + 0x160))(plVar3,&local_60);
  }
  Rect::Rect((Rect *)&local_60);
  if ((long *)in_x0[0x70] != (long *)0x0) {
    (**(code **)(*(long *)in_x0[0x70] + 0x370))(aRStack_78);
    Rect::operator=((Rect *)&local_60,aRStack_78);
  }
  Rect::Rect(aRStack_78);
  if ((long *)in_x0[0x71] != (long *)0x0) {
    (**(code **)(*(long *)in_x0[0x71] + 0x370))(aRStack_88);
    Rect::operator=(aRStack_78,aRStack_88);
  }
  ControlUtils::RectUnion((ControlUtils *)&local_60,aRStack_78,(Rect *)in_x2);
  Size::Size(aSStack_90,local_80,fStack_7c);
  (**(code **)(*in_x0 + 0x160))();
  plVar3 = (long *)in_x0[0x70];
  if (plVar3 != (long *)0x0) {
    pfVar6 = (float *)(**(code **)(*in_x0 + 0x168))();
    fVar8 = *pfVar6;
    lVar7 = (**(code **)(*in_x0 + 0x168))();
    (**(code **)(*plVar3 + 200))(fVar8 * 0.5,*(float *)(lVar7 + 4) * 0.5,plVar3);
    (**(code **)(*(long *)in_x0[0x70] + 0x170))((long *)in_x0[0x70],1);
  }
  plVar3 = (long *)in_x0[0x71];
  if (plVar3 != (long *)0x0) {
    pfVar6 = (float *)(**(code **)(*in_x0 + 0x168))();
    fVar8 = *pfVar6;
    lVar7 = (**(code **)(*in_x0 + 0x168))();
    (**(code **)(*plVar3 + 200))(fVar8 * 0.5,*(float *)(lVar7 + 4) * 0.5,plVar3);
    (**(code **)(*(long *)in_x0[0x71] + 0x170))((long *)in_x0[0x71],1);
  }
LAB_00e0c338:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

