
/* spine::EventQueue::interrupt(spine::TrackEntry*) */

void __thiscall spine::EventQueue::interrupt(EventQueue *this,TrackEntry *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined **local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  TrackEntry *pTStack_78;
  undefined8 local_70;
  undefined **local_68;
  undefined8 local_60;
  TrackEntry *pTStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_88 = &PTR__SpineObject_01c8e3c0;
  local_80 = 1;
  local_70 = 0;
  uVar1 = *(ulong *)(this + 0x10);
  pTStack_78 = param_1;
  if (uVar1 == *(ulong *)(this + 0x18)) {
    local_60 = CONCAT44(uStack_7c,1);
    uVar6 = (uint)((float)uVar1 * 1.75);
    local_50 = 0;
    uVar8 = *(undefined8 *)(this + 0x20);
    if (uVar6 < 9) {
      uVar6 = 8;
    }
    *(long *)(this + 0x18) = (long)(int)uVar6;
    local_68 = local_88;
    pTStack_58 = param_1;
    plVar3 = (long *)SpineExtension::getInstance();
    lVar4 = (**(code **)(*plVar3 + 0x20))
                      (plVar3,uVar8,-(ulong)(uVar6 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar6 << 5
                       ,"F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0x6a);
    lVar7 = *(long *)(this + 0x10);
    *(long *)(this + 0x20) = lVar4;
    *(long *)(this + 0x10) = lVar7 + 1;
    puVar5 = SpineObject::operator_new(0x20,(void *)(lVar4 + lVar7 * 0x20));
    *puVar5 = &PTR__SpineObject_01c8e3c0;
    puVar5[3] = local_50;
    puVar5[2] = pTStack_58;
    puVar5[1] = local_60;
    SpineObject::~SpineObject((SpineObject *)&local_68);
  }
  else {
    *(ulong *)(this + 0x10) = uVar1 + 1;
    puVar5 = SpineObject::operator_new(0x20,(void *)(*(long *)(this + 0x20) + uVar1 * 0x20));
    *puVar5 = &PTR__SpineObject_01c8e3c0;
    puVar5[3] = local_70;
    puVar5[2] = pTStack_78;
    puVar5[1] = CONCAT44(uStack_7c,local_80);
  }
  SpineObject::~SpineObject((SpineObject *)&local_88);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

