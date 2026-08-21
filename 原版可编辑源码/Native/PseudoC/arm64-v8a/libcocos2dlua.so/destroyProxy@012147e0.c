
/* btDbvtBroadphase::destroyProxy(btBroadphaseProxy*, btDispatcher*) */

void __thiscall
btDbvtBroadphase::destroyProxy
          (btDbvtBroadphase *this,btBroadphaseProxy *param_1,btDispatcher *param_2)

{
  btDbvtBroadphase *pbVar1;
  btDbvtNode *pbVar2;
  
  if (*(int *)(param_1 + 0x58) == 2) {
    pbVar2 = *(btDbvtNode **)(param_1 + 0x40);
    pbVar1 = this + 0x68;
  }
  else {
    pbVar2 = *(btDbvtNode **)(param_1 + 0x40);
    pbVar1 = this + 8;
  }
  btDbvt::remove((btDbvt *)pbVar1,pbVar2);
  pbVar1 = this + (long)*(int *)(param_1 + 0x58) * 8 + 200;
  if (*(long *)(param_1 + 0x48) != 0) {
    pbVar1 = (btDbvtBroadphase *)(*(long *)(param_1 + 0x48) + 0x50);
  }
  *(undefined8 *)pbVar1 = *(undefined8 *)(param_1 + 0x50);
  if (*(long *)(param_1 + 0x50) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x50) + 0x48) = *(undefined8 *)(param_1 + 0x48);
  }
  (**(code **)(**(long **)(this + 0xe0) + 0x20))(*(long **)(this + 0xe0),param_1,param_2);
  btAlignedFreeInternal(param_1);
  this[0x11e] = (btDbvtBroadphase)0x1;
  return;
}

