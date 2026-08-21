
/* universe::Device::getBatteryState() */

void __thiscall universe::Device::getBatteryState(Device *this)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  int *piVar6;
  vector<int,std::__ndk1::allocator<int>> *in_x8;
  int *piVar7;
  long lVar8;
  _jclass *local_60;
  _jmethodID *p_Stack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  uVar4 = JniAssistant::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_60,"com/bianfeng/libuniverse/Device","getBatteryState"
                     ,"()[I");
  if ((uVar4 & 1) != 0) {
    uVar5 = _JNIEnv::CallStaticObjectMethod(local_60,p_Stack_58,local_50);
    piVar6 = (int *)(**(code **)(*(long *)local_60 + 0x5d8))(local_60,uVar5,0);
    if (piVar6 != (int *)0x0) {
      uVar3 = (**(code **)(*(long *)local_60 + 0x558))(local_60,uVar5);
      if (0 < (int)uVar3) {
        lVar8 = (ulong)uVar3 - 1;
        piVar7 = piVar6;
        while (std::__ndk1::vector<int,std::__ndk1::allocator<int>>::
               __push_back_slow_path<int_const&>(in_x8,piVar7), lVar8 != 0) {
          while( true ) {
            piVar1 = *(int **)(in_x8 + 8);
            piVar7 = piVar7 + 1;
            lVar8 = lVar8 + -1;
            if (piVar1 == *(int **)(in_x8 + 0x10)) break;
            *piVar1 = *piVar7;
            *(int **)(in_x8 + 8) = piVar1 + 1;
            if (lVar8 == 0) goto LAB_009dce0c;
          }
        }
      }
LAB_009dce0c:
      (**(code **)(*(long *)local_60 + 0x618))(local_60,uVar5,piVar6,0);
    }
    (**(code **)(*(long *)local_60 + 0xb8))(local_60,uVar5);
    (**(code **)(*(long *)local_60 + 0xb8))(local_60,p_Stack_58);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

