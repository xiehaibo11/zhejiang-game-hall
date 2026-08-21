
/* v8::internal::GlobalHandles::Node::PostGarbageCollectionProcessing(v8::internal::Isolate*) */

void __thiscall
v8::internal::GlobalHandles::Node::PostGarbageCollectionProcessing(Node *this,Isolate *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  Isolate *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if (((byte)this[0xb] & 0x37) != 3) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsPendingFinalizer()");
  }
  this[0xb] = (Node)((byte)this[0xb] & 0xf8 | 4);
  uVar3 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 6;
  uVar1 = *(undefined8 *)(param_1 + 0x95a0);
  lVar2 = *(long *)(param_1 + 0x95a8);
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  uStack_60 = *(undefined8 *)(this + 0x10);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_68 = param_1;
  (**(code **)(this + 0x18))(&local_68);
  if (((byte)this[0xb] & 7) != 4) {
    *(undefined8 *)(param_1 + 0x95a0) = uVar1;
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
    if (*(long *)(param_1 + 0x95a8) != lVar2) {
      *(long *)(param_1 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_1);
    }
    *(undefined4 *)(param_1 + 0x2c60) = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","NEAR_DEATH != state()");
}

