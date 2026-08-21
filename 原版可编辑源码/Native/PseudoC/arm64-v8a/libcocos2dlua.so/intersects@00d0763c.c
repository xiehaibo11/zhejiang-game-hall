
/* cocos2d::OBB::intersects(cocos2d::OBB const&) const */

void cocos2d::OBB::intersects(OBB *param_1)

{
  long lVar1;
  OBB *pOVar2;
  undefined8 uVar3;
  OBB *in_x1;
  int iVar4;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 extraout_s0_03;
  undefined4 extraout_s0_04;
  undefined4 extraout_s0_05;
  undefined4 extraout_s0_06;
  undefined4 extraout_s0_07;
  undefined4 extraout_s0_08;
  undefined4 extraout_s0_09;
  undefined4 extraout_s0_10;
  float local_78;
  float local_74;
  float fStack_70;
  float local_6c;
  undefined4 local_68 [4];
  undefined4 local_58 [4];
  undefined4 local_48 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pOVar2 = (OBB *)getFaceDirection(param_1,0);
  local_48[0] = extraout_s0;
  getInterval(pOVar2,param_1,(Vec3 *)local_48,&local_6c,&fStack_70);
  pOVar2 = (OBB *)getFaceDirection(param_1,0);
  local_48[0] = extraout_s0_00;
  getInterval(pOVar2,in_x1,(Vec3 *)local_48,&local_74,&local_78);
  uVar3 = 0;
  if (fStack_70 < local_74) goto LAB_00d078f4;
  if (local_6c <= local_78) {
    pOVar2 = (OBB *)getFaceDirection(param_1,1);
    local_48[0] = extraout_s0_01;
    getInterval(pOVar2,param_1,(Vec3 *)local_48,&local_6c,&fStack_70);
    pOVar2 = (OBB *)getFaceDirection(param_1,1);
    local_48[0] = extraout_s0_02;
    getInterval(pOVar2,in_x1,(Vec3 *)local_48,&local_74,&local_78);
    if ((local_74 <= fStack_70) && (local_6c <= local_78)) {
      pOVar2 = (OBB *)getFaceDirection(param_1,2);
      local_48[0] = extraout_s0_03;
      getInterval(pOVar2,param_1,(Vec3 *)local_48,&local_6c,&fStack_70);
      pOVar2 = (OBB *)getFaceDirection(param_1,2);
      local_48[0] = extraout_s0_04;
      getInterval(pOVar2,in_x1,(Vec3 *)local_48,&local_74,&local_78);
      if ((local_74 <= fStack_70) && (local_6c <= local_78)) {
        pOVar2 = (OBB *)getFaceDirection(in_x1,0);
        local_48[0] = extraout_s0_05;
        getInterval(pOVar2,param_1,(Vec3 *)local_48,&local_6c,&fStack_70);
        pOVar2 = (OBB *)getFaceDirection(in_x1,0);
        local_48[0] = extraout_s0_06;
        getInterval(pOVar2,in_x1,(Vec3 *)local_48,&local_74,&local_78);
        uVar3 = 0;
        if (fStack_70 < local_74) goto LAB_00d078f4;
        if (local_6c <= local_78) {
          pOVar2 = (OBB *)getFaceDirection(in_x1,1);
          local_48[0] = extraout_s0_07;
          getInterval(pOVar2,param_1,(Vec3 *)local_48,&local_6c,&fStack_70);
          pOVar2 = (OBB *)getFaceDirection(in_x1,1);
          local_48[0] = extraout_s0_08;
          getInterval(pOVar2,in_x1,(Vec3 *)local_48,&local_74,&local_78);
          if ((local_74 <= fStack_70) && (local_6c <= local_78)) {
            pOVar2 = (OBB *)getFaceDirection(in_x1,2);
            local_48[0] = extraout_s0_09;
            getInterval(pOVar2,param_1,(Vec3 *)local_48,&local_6c,&fStack_70);
            pOVar2 = (OBB *)getFaceDirection(in_x1,2);
            local_48[0] = extraout_s0_10;
            getInterval(pOVar2,in_x1,(Vec3 *)local_48,&local_74,&local_78);
            if ((local_74 <= fStack_70) && (local_6c <= local_78)) {
              iVar4 = 0;
              do {
                Vec3::Vec3((Vec3 *)local_48);
                local_58[0] = getEdgeDirection(param_1,iVar4);
                local_68[0] = getEdgeDirection(in_x1,0);
                pOVar2 = (OBB *)Vec3::cross((Vec3 *)local_58,(Vec3 *)local_68,(Vec3 *)local_48);
                pOVar2 = (OBB *)getInterval(pOVar2,param_1,(Vec3 *)local_48,&local_6c,&fStack_70);
                getInterval(pOVar2,in_x1,(Vec3 *)local_48,&local_74,&local_78);
                if ((fStack_70 < local_74) || (local_78 < local_6c)) goto LAB_00d078f0;
                Vec3::Vec3((Vec3 *)local_48);
                local_58[0] = getEdgeDirection(param_1,iVar4);
                local_68[0] = getEdgeDirection(in_x1,1);
                pOVar2 = (OBB *)Vec3::cross((Vec3 *)local_58,(Vec3 *)local_68,(Vec3 *)local_48);
                pOVar2 = (OBB *)getInterval(pOVar2,param_1,(Vec3 *)local_48,&local_6c,&fStack_70);
                getInterval(pOVar2,in_x1,(Vec3 *)local_48,&local_74,&local_78);
                if ((fStack_70 < local_74) || (local_78 < local_6c)) goto LAB_00d078f0;
                Vec3::Vec3((Vec3 *)local_48);
                local_58[0] = getEdgeDirection(param_1,iVar4);
                local_68[0] = getEdgeDirection(in_x1,2);
                pOVar2 = (OBB *)Vec3::cross((Vec3 *)local_58,(Vec3 *)local_68,(Vec3 *)local_48);
                pOVar2 = (OBB *)getInterval(pOVar2,param_1,(Vec3 *)local_48,&local_6c,&fStack_70);
                getInterval(pOVar2,in_x1,(Vec3 *)local_48,&local_74,&local_78);
                if ((fStack_70 < local_74) || (local_78 < local_6c)) goto LAB_00d078f0;
                iVar4 = iVar4 + 1;
                uVar3 = 1;
              } while (iVar4 != 3);
              goto LAB_00d078f4;
            }
          }
        }
      }
    }
  }
LAB_00d078f0:
  uVar3 = 0;
LAB_00d078f4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

