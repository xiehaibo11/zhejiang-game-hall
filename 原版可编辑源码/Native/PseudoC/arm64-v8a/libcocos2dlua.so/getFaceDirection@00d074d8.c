
/* cocos2d::OBB::getFaceDirection(int) const */

void __thiscall cocos2d::OBB::getFaceDirection(OBB *this,int param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar5;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  Vec3 local_98 [8];
  float local_90;
  undefined8 local_8c;
  float local_84;
  undefined8 local_80;
  float local_78;
  Vec3 aVStack_74 [12];
  Vec3 aVStack_68 [12];
  undefined8 local_5c;
  float local_54;
  Vec3 aVStack_50 [12];
  Vec3 aVStack_44 [12];
  long local_38;
  float fVar4;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Vec3::Vec3(local_98);
  Vec3::Vec3((Vec3 *)&local_8c);
  Vec3::Vec3((Vec3 *)&local_80);
  Vec3::Vec3(aVStack_74);
  Vec3::Vec3(aVStack_68);
  Vec3::Vec3((Vec3 *)&local_5c);
  Vec3::Vec3(aVStack_50);
  Vec3::Vec3(aVStack_44);
  getCorners(this,local_98);
  Vec3::Vec3((Vec3 *)&local_a8);
  Vec3::Vec3((Vec3 *)&local_b8);
  Vec3::Vec3((Vec3 *)&local_c8);
  uVar3 = local_80;
  fVar5 = local_78;
  if (param_1 == 2) {
    lVar2 = 5;
    local_80 = local_8c;
    local_78 = local_84;
  }
  else if (param_1 == 1) {
    lVar2 = 3;
    local_80 = local_5c;
    local_78 = local_54;
  }
  else {
    if (param_1 != 0) goto LAB_00d0760c;
    lVar2 = 0;
    uVar3 = local_8c;
    fVar5 = local_84;
  }
  fVar4 = (float)((ulong)uVar3 >> 0x20);
  local_b8 = CONCAT44((float)((ulong)local_80 >> 0x20) - fVar4,(float)local_80 - (float)uVar3);
  local_b0 = local_78 - fVar5;
  local_c8 = CONCAT44((float)((ulong)*(undefined8 *)(local_98 + lVar2 * 0xc) >> 0x20) - fVar4,
                      (float)*(undefined8 *)(local_98 + lVar2 * 0xc) - (float)uVar3);
  local_c0 = (&local_90)[lVar2 * 3] - fVar5;
  Vec3::cross((Vec3 *)&local_b8,(Vec3 *)&local_c8,(Vec3 *)&local_a8);
  Vec3::normalize((Vec3 *)&local_a8);
LAB_00d0760c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_a8,uStack_a4,local_a0);
}

