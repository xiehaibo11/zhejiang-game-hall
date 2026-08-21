
/* btDbvtTreeCollider::Process(btDbvtNode const*, btDbvtNode const*) */

void __thiscall
btDbvtTreeCollider::Process(btDbvtTreeCollider *this,btDbvtNode *param_1,btDbvtNode *param_2)

{
  if (param_1 != param_2) {
    (**(code **)(**(long **)(*(long *)(this + 8) + 0xe0) + 0x10))
              (*(long **)(*(long *)(this + 8) + 0xe0),*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_2 + 0x28));
    *(int *)(*(long *)(this + 8) + 0xfc) = *(int *)(*(long *)(this + 8) + 0xfc) + 1;
  }
  return;
}

