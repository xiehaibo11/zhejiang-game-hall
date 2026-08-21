
/* btSingleContactCallback::process(btBroadphaseProxy const*) */

undefined8 __thiscall
btSingleContactCallback::process(btSingleContactCallback *this,btBroadphaseProxy *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **local_b8 [6];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  long lStack_40;
  undefined8 local_38;
  
  lVar3 = *(long *)param_1;
  if ((lVar3 != *(long *)(this + 8)) &&
     (uVar1 = (**(code **)(**(long **)(this + 0x18) + 0x10))
                        (*(long **)(this + 0x18),*(undefined8 *)(lVar3 + 0xc0)), (uVar1 & 1) != 0))
  {
    local_48 = *(long *)(this + 8);
    uStack_50 = *(undefined8 *)(local_48 + 200);
    local_38 = 0xffffffffffffffff;
    local_58 = 0;
    lStack_40 = local_48 + 8;
    uStack_78 = *(undefined8 *)(lVar3 + 200);
    lStack_68 = lVar3 + 8;
    local_60 = 0xffffffffffffffff;
    local_80 = 0;
    local_70 = lVar3;
    plVar2 = (long *)(**(code **)(**(long **)(*(long *)(this + 0x10) + 0x28) + 0x10))
                               (*(long **)(*(long *)(this + 0x10) + 0x28),&local_58,&local_80,0);
    if (plVar2 != (long *)0x0) {
      uVar4 = *(undefined8 *)(this + 0x18);
      btManifoldResult::btManifoldResult
                ((btManifoldResult *)local_b8,(btCollisionObjectWrapper *)&local_58,
                 (btCollisionObjectWrapper *)&local_80);
      local_b8[0] = &PTR__Result_01731e88;
      local_88 = uVar4;
      (**(code **)(*plVar2 + 0x10))
                (plVar2,&local_58,&local_80,*(long *)(this + 0x10) + 0x30,local_b8);
      (**(code **)*plVar2)(plVar2);
      (**(code **)(**(long **)(*(long *)(this + 0x10) + 0x28) + 0x78))
                (*(long **)(*(long *)(this + 0x10) + 0x28),plVar2);
    }
  }
  return 1;
}

