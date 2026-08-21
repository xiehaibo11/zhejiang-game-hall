
/* cocostudio::ArmatureAnimation::update(float) */

void __thiscall cocostudio::ArmatureAnimation::update(ArmatureAnimation *this,float param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined4 in_register_00005004;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  ProcessBase::update((ProcessBase *)this,param_1);
  puVar1 = *(undefined8 **)(this + 0xa0);
  for (puVar8 = *(undefined8 **)(this + 0x98); puVar8 != puVar1; puVar8 = puVar8 + 1) {
    (**(code **)(*(long *)*puVar8 + 0x30))(CONCAT44(in_register_00005004,param_1));
  }
  if ((*(long *)(this + 0xe0) != 0) || (*(long *)(this + 0x110) != 0)) {
    cocos2d::Ref::retain(*(Ref **)(this + 0x70));
    cocos2d::Ref::autorelease(*(Ref **)(this + 0x70));
    lVar5 = *(long *)(this + 0xe0);
    while (lVar5 != 0) {
      uVar7 = *(ulong *)(this + 0xd8);
      puVar8 = *(undefined8 **)
                (*(long *)((long)*(undefined8 **)(this + 0xc0) + (uVar7 >> 6 & 0x3fffffffffffff8)) +
                (uVar7 & 0x1ff) * 8);
      *(ulong *)(this + 0xd8) = uVar7 + 1;
      *(long *)(this + 0xe0) = lVar5 + -1;
      if (0x3ff < uVar7 + 1) {
        operator_delete((void *)**(undefined8 **)(this + 0xc0));
        *(long *)(this + 0xc0) = *(long *)(this + 0xc0) + 8;
        *(long *)(this + 0xd8) = *(long *)(this + 0xd8) + -0x200;
      }
      this[0xb0] = (ArmatureAnimation)0x1;
      if (*(long *)(this + 0x170) != 0) {
        pcVar6 = *(code **)(this + 0x158);
        plVar4 = (long *)(*(long *)(this + 0x170) + ((long)*(ulong *)(this + 0x160) >> 1));
        if ((*(ulong *)(this + 0x160) & 1) != 0) {
          pcVar6 = *(code **)(pcVar6 + *plVar4);
        }
        (*pcVar6)(plVar4,*puVar8,puVar8 + 1,*(undefined4 *)(puVar8 + 4),
                  *(undefined4 *)((long)puVar8 + 0x24));
      }
      plVar4 = *(long **)(this + 0x1d0);
      if (plVar4 == (long *)0x0) {
        this[0xb0] = (ArmatureAnimation)0x0;
        if (puVar8 != (undefined8 *)0x0) {
          bVar2 = *(byte *)(puVar8 + 1);
          goto joined_r0x00c3b9bc;
        }
      }
      else {
        local_50 = *puVar8;
        local_54 = *(undefined4 *)(puVar8 + 4);
        local_58 = *(undefined4 *)((long)puVar8 + 0x24);
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_50,puVar8 + 1,&local_54,&local_58);
        this[0xb0] = (ArmatureAnimation)0x0;
        bVar2 = *(byte *)(puVar8 + 1);
joined_r0x00c3b9bc:
        if ((bVar2 & 1) != 0) {
          operator_delete((void *)puVar8[3]);
        }
        operator_delete(puVar8);
      }
      lVar5 = *(long *)(this + 0xe0);
    }
  }
LAB_00c3b9d4:
  if (*(long *)(this + 0x110) == 0) {
    if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  uVar7 = *(ulong *)(this + 0x108);
  puVar8 = *(undefined8 **)
            (*(long *)((long)*(undefined8 **)(this + 0xf0) + (uVar7 >> 6 & 0x3fffffffffffff8)) +
            (uVar7 & 0x1ff) * 8);
  *(ulong *)(this + 0x108) = uVar7 + 1;
  *(long *)(this + 0x110) = *(long *)(this + 0x110) + -1;
  if (0x3ff < uVar7 + 1) {
    operator_delete((void *)**(undefined8 **)(this + 0xf0));
    *(long *)(this + 0xf0) = *(long *)(this + 0xf0) + 8;
    *(long *)(this + 0x108) = *(long *)(this + 0x108) + -0x200;
  }
  if (*(long *)(this + 0x168) != 0) {
    pcVar6 = *(code **)(this + 0x148);
    plVar4 = (long *)(*(long *)(this + 0x168) + ((long)*(ulong *)(this + 0x150) >> 1));
    if ((*(ulong *)(this + 0x150) & 1) != 0) {
      pcVar6 = *(code **)(pcVar6 + *plVar4);
    }
    (*pcVar6)(plVar4,*puVar8,*(undefined4 *)(puVar8 + 1),puVar8 + 2);
  }
  plVar4 = *(long **)(this + 0x1a0);
  if (plVar4 == (long *)0x0) goto LAB_00c3ba94;
  local_50 = *puVar8;
  local_54 = *(undefined4 *)(puVar8 + 1);
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_50,&local_54,puVar8 + 2);
  bVar2 = *(byte *)(puVar8 + 2);
  goto joined_r0x00c3ba9c;
LAB_00c3ba94:
  if (puVar8 != (undefined8 *)0x0) {
    bVar2 = *(byte *)(puVar8 + 2);
joined_r0x00c3ba9c:
    if ((bVar2 & 1) != 0) {
      operator_delete((void *)puVar8[4]);
    }
    operator_delete(puVar8);
  }
  goto LAB_00c3b9d4;
}

