
/* seval_to_std_vector_uint16(se::Value const&, std::__ndk1::vector<unsigned short,
   std::__ndk1::allocator<unsigned short> >*) */

undefined4 seval_to_std_vector_uint16(Value *param_1,vector *param_2)

{
  ushort *puVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  Object *this;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong local_78;
  ushort local_6c [2];
  uchar *local_68;
  char local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1[8] != (Value)0x5) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                        ,0x32f,"seval_to_std_vector_uint16");
    __android_log_print(6,"jswrapper","Convert parameter to vector of uint16 failed!");
    uVar6 = 0;
    goto LAB_008d7964;
  }
  this = (Object *)se::Value::toObject(param_1);
  uVar5 = se::Object::isArray(this);
  if ((uVar5 & 1) == 0) {
    uVar5 = se::Object::isTypedArray(this);
    if ((uVar5 & 1) == 0) goto LAB_008d7940;
    local_68 = (uchar *)0x0;
    local_78 = 0;
    uVar4 = se::Object::getTypedArrayType(this);
    uVar5 = se::Object::getTypedArrayData(this,&local_68,&local_78);
    if (((uVar5 & 1) != 0) && (local_78 != 0)) {
      uVar5 = 0;
      lVar7 = 0;
      do {
        if ((uVar4 | 4) == 6) {
          puVar1 = *(ushort **)(param_2 + 8);
          if (puVar1 == *(ushort **)(param_2 + 0x10)) {
            std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
            __push_back_slow_path<unsigned_short_const&>
                      ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)param_2,
                       (ushort *)(local_68 + uVar5));
            lVar7 = 2;
          }
          else {
            lVar7 = 2;
            *puVar1 = *(ushort *)(local_68 + uVar5);
            *(ushort **)(param_2 + 8) = puVar1 + 1;
          }
        }
        else {
          __android_log_print(6,"jswrapper","Unsupported typed array: %d\n",uVar4);
        }
        uVar5 = lVar7 + uVar5;
      } while (uVar5 < local_78);
    }
  }
  else {
    local_78 = local_78 & 0xffffffff00000000;
    uVar5 = se::Object::getArrayLength(this,(uint *)&local_78);
    if ((uVar5 & 1) != 0) {
      se::Value::Value((Value *)&local_68);
      if ((uint)local_78 != 0) {
        uVar4 = 0;
        do {
          bVar3 = se::Object::getArrayElement(this,uVar4,(Value *)&local_68);
          if ((bVar3 & local_60 == '\x02') == 0) {
            uVar6 = 0;
            *(undefined8 *)(param_2 + 8) = *(undefined8 *)param_2;
            goto LAB_008d795c;
          }
          local_6c[0] = se::Value::toUint16((Value *)&local_68);
          puVar1 = *(ushort **)(param_2 + 8);
          if (puVar1 < *(ushort **)(param_2 + 0x10)) {
            *puVar1 = local_6c[0];
            *(ushort **)(param_2 + 8) = puVar1 + 1;
          }
          else {
            std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
            __push_back_slow_path<unsigned_short>
                      ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)param_2,
                       local_6c);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < (uint)local_78);
      }
      uVar6 = 1;
LAB_008d795c:
      se::Value::~Value((Value *)&local_68);
      goto LAB_008d7964;
    }
LAB_008d7940:
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)param_2;
  }
  uVar6 = 1;
LAB_008d7964:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}

