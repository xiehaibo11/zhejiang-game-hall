
/* v8::internal::JSFunction::CalculateInstanceSizeHelper(v8::internal::InstanceType, bool, int, int,
   int*, int*) */

void v8::internal::JSFunction::CalculateInstanceSizeHelper
               (undefined8 param_1,uint param_2,int param_3,int param_4,uint *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = JSObject::GetHeaderSize(param_1,param_2 & 1);
  if (param_3 != 0) {
    uVar3 = uVar3 + 7 & 0xfffffff8;
  }
  if ((int)uVar3 < 9) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","max_nof_fields <= JSObject::kMaxInObjectProperties");
  }
  uVar1 = (int)(0x3fc - uVar3) >> 2;
  iVar2 = uVar1 + param_3 * -2;
  if (uVar1 < (uint)(param_3 * 2)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",&DAT_019d7154);
  }
  if (iVar2 <= param_4) {
    param_4 = iVar2;
  }
  *param_6 = param_4;
  param_4 = param_4 + param_3 * 2;
  uVar3 = param_4 * 4 + uVar3;
  *param_5 = uVar3;
  if (*param_6 == (param_4 * 4 >> 2) + param_3 * -2) {
    if (uVar3 < 0x3fd) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "static_cast<unsigned>(*instance_size) <= static_cast<unsigned>(JSObject::kMaxInstanceSize)"
            );
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "*in_object_properties == ((*instance_size - header_size) >> kTaggedSizeLog2) - requested_embedder_fields"
          );
}

