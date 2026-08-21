
/* btDbvtBroadphase::resetPool(btDispatcher*) */

void btDbvtBroadphase::resetPool(btDispatcher *param_1)

{
  if (*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x7c) == 0) {
    btDbvt::clear((btDbvt *)(param_1 + 8));
    btDbvt::clear((btDbvt *)(param_1 + 0x68));
    *(undefined2 *)(param_1 + 0x11d) = 0x100;
    *(undefined8 *)(param_1 + 0xfc) = 1;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xf4) = 0xa00000000;
    *(undefined8 *)(param_1 + 0xec) = 0x100000000;
    *(undefined8 *)(param_1 + 0x114) = 0;
    *(undefined8 *)(param_1 + 0x10c) = 0;
    *(undefined8 *)(param_1 + 0x104) = 0;
  }
  return;
}

