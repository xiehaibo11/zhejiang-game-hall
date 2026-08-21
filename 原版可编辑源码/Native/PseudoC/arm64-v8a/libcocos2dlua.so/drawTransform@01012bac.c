
/* btIDebugDraw::drawTransform(btTransform const&, float) */

void __thiscall btIDebugDraw::drawTransform(btIDebugDraw *this,btTransform *param_1,float param_2)

{
  btTransform *pbVar1;
  btTransform *pbVar2;
  btTransform *pbVar3;
  long lVar4;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  float local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  pbVar1 = param_1 + 0x10;
  pbVar2 = param_1 + 0x14;
  pbVar3 = param_1 + 0x18;
  uStack_68 = *(undefined8 *)(param_1 + 0x38);
  local_70 = *(undefined8 *)(param_1 + 0x30);
  local_90 = 0x3f333333;
  local_78 = *(float *)(param_1 + 0x20) * param_2 + *(float *)(param_1 + 0x24) * 0.0 +
             *(float *)(param_1 + 0x28) * 0.0 + (float)uStack_68;
                    /* try { // try from 01012c44 to 01112c9f has its CatchHandler @ 01012c44
                       catch() { ... } // from try @ 01012c44 with catch @ 01012c44
                       catch() { ... } // from try @ 01012cdc with catch @ 01012c44 */
  local_74 = 0;
  local_80 = CONCAT44(*(float *)pbVar1 * param_2 + *(float *)pbVar2 * 0.0 + *(float *)pbVar3 * 0.0 +
                      (float)((ulong)local_70 >> 0x20),
                      *(float *)param_1 * param_2 + *(float *)(param_1 + 4) * 0.0 +
                      *(float *)(param_1 + 8) * 0.0 + (float)local_70);
  local_88 = 0;
  (**(code **)(*(long *)this + 0x10))(this,&local_70,&local_80,&local_90);
                    /* try { // try from 01012ca0 to 01112cdb has its CatchHandler @ 01012d30 */
  local_90 = 0x3f33333300000000;
                    /* try { // try from 01012cdc to 01112d4b has its CatchHandler @ 01012c44 */
  local_78 = *(float *)(param_1 + 0x20) * 0.0 + *(float *)(param_1 + 0x24) * param_2 +
             *(float *)(param_1 + 0x28) * 0.0 + (float)uStack_68;
  local_74 = 0;
  local_80 = CONCAT44(*(float *)pbVar1 * 0.0 + *(float *)pbVar2 * param_2 + *(float *)pbVar3 * 0.0 +
                      (float)((ulong)local_70 >> 0x20),
                      *(float *)param_1 * 0.0 + *(float *)(param_1 + 4) * param_2 +
                      *(float *)(param_1 + 8) * 0.0 + (float)local_70);
  local_88 = 0;
  (**(code **)(*(long *)this + 0x10))(this,&local_70,&local_80,&local_90);
                    /* catch() { ... } // from try @ 01012ca0 with catch @ 01012d30 */
  local_78 = *(float *)(param_1 + 0x20) * 0.0 + *(float *)(param_1 + 0x24) * 0.0 +
             *(float *)(param_1 + 0x28) * param_2 + (float)uStack_68;
  local_74 = 0;
  local_90 = 0;
  local_88 = 0x3f333333;
  local_80 = CONCAT44(*(float *)pbVar1 * 0.0 + *(float *)pbVar2 * 0.0 + *(float *)pbVar3 * param_2 +
                      (float)((ulong)local_70 >> 0x20),
                      *(float *)param_1 * 0.0 + *(float *)(param_1 + 4) * 0.0 +
                      *(float *)(param_1 + 8) * param_2 + (float)local_70);
  (**(code **)(*(long *)this + 0x10))(this,&local_70,&local_80,&local_90);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

