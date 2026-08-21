
/* seval_to_std_vector_int(se::Value const&, std::__ndk1::vector<int, std::__ndk1::allocator<int>
   >*) */

undefined4 seval_to_std_vector_int(Value *param_1,vector *param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  Object *this;
  ulong uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong local_88;
  uint local_7c;
  uchar *local_78;
  char local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_1[8] != (Value)0x5) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                        ,0x2e4,"seval_to_std_vector_int");
    __android_log_print(6,"jswrapper","Convert parameter to vector of int failed!");
    uVar7 = 0;
    goto LAB_008d7708;
  }
  this = (Object *)se::Value::toObject(param_1);
  uVar6 = se::Object::isArray(this);
  if ((uVar6 & 1) == 0) {
    uVar6 = se::Object::isTypedArray(this);
    if ((uVar6 & 1) == 0) goto LAB_008d76e4;
    local_78 = (uchar *)0x0;
    local_88 = 0;
    uVar5 = se::Object::getTypedArrayType(this);
    uVar6 = se::Object::getTypedArrayData(this,&local_78,&local_88);
    if (((uVar6 & 1) != 0) && (local_88 != 0)) {
      uVar6 = 0;
      lVar8 = 0;
      do {
        if (uVar5 < 8) {
          uVar2 = 1 << (ulong)(uVar5 & 0x1f);
          if ((uVar2 & 0x32) == 0) {
            if ((uVar2 & 0x44) == 0) {
              if ((uVar2 & 0x88) == 0) goto LAB_008d7690;
              local_7c = *(uint *)(local_78 + uVar6);
              puVar1 = *(uint **)(param_2 + 8);
              if (puVar1 < *(uint **)(param_2 + 0x10)) {
                *puVar1 = local_7c;
                *(uint **)(param_2 + 8) = puVar1 + 1;
              }
              else {
                std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int>
                          ((vector<int,std::__ndk1::allocator<int>> *)param_2,(int *)&local_7c);
              }
              lVar8 = 4;
            }
            else {
              local_7c = (uint)*(ushort *)(local_78 + uVar6);
              puVar1 = *(uint **)(param_2 + 8);
              if (puVar1 < *(uint **)(param_2 + 0x10)) {
                *puVar1 = local_7c;
                *(uint **)(param_2 + 8) = puVar1 + 1;
                lVar8 = 2;
              }
              else {
                std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int>
                          ((vector<int,std::__ndk1::allocator<int>> *)param_2,(int *)&local_7c);
                lVar8 = 2;
              }
            }
          }
          else {
            local_7c = (uint)local_78[uVar6];
            puVar1 = *(uint **)(param_2 + 8);
            if (puVar1 < *(uint **)(param_2 + 0x10)) {
              *puVar1 = local_7c;
              *(uint **)(param_2 + 8) = puVar1 + 1;
              lVar8 = 1;
            }
            else {
              std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int>
                        ((vector<int,std::__ndk1::allocator<int>> *)param_2,(int *)&local_7c);
              lVar8 = 1;
            }
          }
        }
        else {
LAB_008d7690:
          __android_log_print(6,"jswrapper","Unsupported typed array: %d\n",uVar5);
        }
        uVar6 = lVar8 + uVar6;
      } while (uVar6 < local_88);
    }
  }
  else {
    local_88 = local_88 & 0xffffffff00000000;
    uVar6 = se::Object::getArrayLength(this,(uint *)&local_88);
    if ((uVar6 & 1) != 0) {
      se::Value::Value((Value *)&local_78);
      if ((uint)local_88 != 0) {
        uVar5 = 0;
        do {
          bVar4 = se::Object::getArrayElement(this,uVar5,(Value *)&local_78);
          if ((bVar4 & local_70 == '\x02') == 0) {
            uVar7 = 0;
            *(undefined8 *)(param_2 + 8) = *(undefined8 *)param_2;
            goto LAB_008d7700;
          }
          local_7c = se::Value::toInt32((Value *)&local_78);
          puVar1 = *(uint **)(param_2 + 8);
          if (puVar1 < *(uint **)(param_2 + 0x10)) {
            *puVar1 = local_7c;
            *(uint **)(param_2 + 8) = puVar1 + 1;
          }
          else {
            std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int>
                      ((vector<int,std::__ndk1::allocator<int>> *)param_2,(int *)&local_7c);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < (uint)local_88);
      }
      uVar7 = 1;
LAB_008d7700:
      se::Value::~Value((Value *)&local_78);
      goto LAB_008d7708;
    }
LAB_008d76e4:
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)param_2;
  }
  uVar7 = 1;
LAB_008d7708:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

