
/* universe::Device::getBatteryState() */

void __thiscall universe::Device::getBatteryState(Device *this)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  int *piVar6;
  vector<int,std::__ndk1::allocator<int>> *in_x8;
  int *piVar7;
  long lVar8;
  _jclass *local_70;
  _jmethodID *p_Stack_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
                    /* try { // try from 009fa36c to 00afa387 has its CatchHandler @ 009f9ca4 */
  uVar4 = JniAssistant::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_70,"com/bianfeng/libuniverse/Device","getBatteryState"
                     ,"()[I");
  if ((uVar4 & 1) != 0) {
    uVar5 = _JNIEnv::CallStaticObjectMethod(local_70,p_Stack_68,local_60);
                    /* try { // try from 009fa388 to 00afa38f has its CatchHandler @ 009fa39c */
                    /* try { // try from 009fa390 to 00afa397 has its CatchHandler @ 009fa398 */
                    /* catch() { ... } // from try @ 009fa290 with catch @ 009fa398
                       catch() { ... } // from try @ 009fa390 with catch @ 009fa398
                       try { // try from 009fa398 to 00afa4c7 has its CatchHandler @ 009f9ca4 */
    piVar6 = (int *)(**(code **)(*(long *)local_70 + 0x5d8))(local_70,uVar5,0);
                    /* catch() { ... } // from try @ 009f9f40 with catch @ 009fa39c
                       catch() { ... } // from try @ 009fa388 with catch @ 009fa39c */
                    /* catch() { ... } // from try @ 009fa2d4 with catch @ 009fa3a0 */
    if (piVar6 != (int *)0x0) {
                    /* catch() { ... } // from try @ 009f9e64 with catch @ 009fa3b4 */
      iVar3 = (**(code **)(*(long *)local_70 + 0x558))(local_70,uVar5);
                    /* catch() { ... } // from try @ 009fa080 with catch @ 009fa3b8 */
      if (0 < iVar3) {
                    /* catch() { ... } // from try @ 009fa00c with catch @ 009fa3c8 */
        lVar8 = 1;
        piVar7 = piVar6;
                    /* catch() { ... } // from try @ 009f9ee8 with catch @ 009fa3d0 */
        while (std::__ndk1::vector<int,std::__ndk1::allocator<int>>::
               __push_back_slow_path<int_const&>(in_x8,piVar7), lVar8 < iVar3) {
          while( true ) {
                    /* catch() { ... } // from try @ 009fa130 with catch @ 009fa3e0 */
            piVar1 = *(int **)(in_x8 + 8);
                    /* catch() { ... } // from try @ 009f9cfc with catch @ 009fa3e4 */
            piVar7 = piVar7 + 1;
            lVar8 = lVar8 + 1;
            if (piVar1 == *(int **)(in_x8 + 0x10)) break;
            *piVar1 = *piVar7;
            *(int **)(in_x8 + 8) = piVar1 + 1;
            if (iVar3 <= lVar8) goto LAB_009fa420;
          }
        }
      }
LAB_009fa420:
                    /* catch() { ... } // from try @ 009fa0b8 with catch @ 009fa424 */
      (**(code **)(*(long *)local_70 + 0x618))(local_70,uVar5,piVar6,0);
    }
                    /* catch() { ... } // from try @ 009fa0b0 with catch @ 009fa43c
                       catch() { ... } // from try @ 009fa0e0 with catch @ 009fa43c */
    (**(code **)(*(long *)local_70 + 0xb8))(local_70,uVar5);
    (**(code **)(*(long *)local_70 + 0xb8))(local_70,p_Stack_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

