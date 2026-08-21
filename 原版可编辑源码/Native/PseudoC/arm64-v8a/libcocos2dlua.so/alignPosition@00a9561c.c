
/* fairygui::ScrollPane::alignPosition(cocos2d::Vec2&, bool) */

void fairygui::ScrollPane::alignPosition(Vec2 *param_1,bool param_2)

{
  long lVar1;
  float *pfVar2;
  byte in_w2;
  float fVar3;
  float in_s1;
  undefined8 local_40;
  long local_38;
  
  pfVar2 = (float *)(ulong)param_2;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1[0x58] == '\0') {
    if (param_1[0x4d] == '\0') goto LAB_00a95684;
    local_40 = CONCAT44(-(float)((ulong)*(undefined8 *)pfVar2 >> 0x20),-(float)*(undefined8 *)pfVar2
                       );
    fVar3 = (float)(**(code **)(**(long **)(param_1 + 0xf8) + 0xd0))
                             (*(long **)(param_1 + 0xf8),&local_40);
    if ((*pfVar2 < 0.0) && (-*(float *)(param_1 + 0x74) < *pfVar2)) {
      *pfVar2 = -fVar3;
    }
    if ((0.0 <= pfVar2[1]) || (pfVar2[1] <= -*(float *)(param_1 + 0x78))) goto LAB_00a95684;
    in_s1 = -in_s1;
  }
  else {
    fVar3 = (float)alignByPage((ScrollPane *)param_1,*pfVar2,0,(bool)(in_w2 & 1));
    *pfVar2 = fVar3;
    in_s1 = (float)alignByPage((ScrollPane *)param_1,pfVar2[1],1,(bool)(in_w2 & 1));
  }
  pfVar2[1] = in_s1;
LAB_00a95684:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

