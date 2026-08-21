
void FUN_00a3fef0(long param_1)

{
  if (param_1 != 0) {
    thunk_FUN_00a5ce24(param_1,0);
    thunk_FUN_00a5ce24(param_1,1);
    if (*(int *)(param_1 + 0x264) != -1) {
      FUN_00a25eac(param_1);
    }
    if (*(int *)(param_1 + 0x260) != -1) {
      FUN_00a25eac(param_1);
    }
    if (*(int *)(param_1 + 0x268) != -1) {
      FUN_00a25eac(param_1);
    }
    if (*(int *)(param_1 + 0x26c) != -1) {
      FUN_00a25eac(param_1);
    }
    FUN_00a571c0(param_1);
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x218));
    *(undefined8 *)(param_1 + 0x218) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x220));
    *(undefined8 *)(param_1 + 0x220) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x230));
    *(undefined8 *)(param_1 + 0x230) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x228));
    *(undefined8 *)(param_1 + 0x228) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x188));
    *(undefined8 *)(param_1 + 0x188) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x148));
    *(undefined8 *)(param_1 + 0x148) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 400));
    *(undefined8 *)(param_1 + 400) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x150));
    *(undefined8 *)(param_1 + 0x150) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x420));
    *(undefined8 *)(param_1 + 0x420) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x428));
    *(undefined8 *)(param_1 + 0x428) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x438));
    *(undefined8 *)(param_1 + 0x438) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x430));
    *(undefined8 *)(param_1 + 0x430) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x468));
    *(undefined8 *)(param_1 + 0x468) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x440));
    *(undefined8 *)(param_1 + 0x440) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x448));
    *(undefined8 *)(param_1 + 0x448) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x450));
    *(undefined8 *)(param_1 + 0x450) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x458));
    *(undefined8 *)(param_1 + 0x458) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x460));
    *(undefined8 *)(param_1 + 0x460) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x608));
    *(undefined8 *)(param_1 + 0x608) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0xb0));
    *(undefined8 *)(param_1 + 0xb0) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd8) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0xd0));
    *(undefined8 *)(param_1 + 0xd0) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x158));
    *(undefined8 *)(param_1 + 0x158) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x118));
    *(undefined8 *)(param_1 + 0x118) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x488));
    *(undefined8 *)(param_1 + 0x488) = 0;
    FUN_00a4ab10(*(undefined8 *)(param_1 + 0x478),0);
    FUN_00a4ab10(*(undefined8 *)(param_1 + 0x480),0);
    *(undefined8 *)(param_1 + 0x480) = 0;
    *(undefined8 *)(param_1 + 0x478) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x700));
    *(undefined8 *)(param_1 + 0x700) = 0;
    FUN_00a2d4b4(param_1 + 0x338);
    FUN_00a2d4b4(param_1 + 0x378);
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x728));
                    /* try { // try from 00a40160 to 00b4034f has its CatchHandler @ 00a40160
                       catch() { ... } // from try @ 00a40160 with catch @ 00a40160
                       catch() { ... } // from try @ 00a403d0 with catch @ 00a40160 */
    *(undefined8 *)(param_1 + 0x728) = 0;
    (*(code *)PTR_free_01769a00)(param_1);
    return;
  }
  return;
}

