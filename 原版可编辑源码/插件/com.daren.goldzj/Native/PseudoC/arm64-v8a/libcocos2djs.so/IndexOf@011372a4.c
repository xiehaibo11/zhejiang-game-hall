
/* v8::internal::String::IndexOf(v8::internal::Isolate*, v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Object>) */

ulong v8::internal::String::IndexOf(Factory *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  uint uVar5;
  double dVar6;
  char *local_40;
  undefined8 uStack_38;
  
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    if (((int)uVar4 == *(int *)(param_1 + 0xb0)) || ((int)uVar4 == *(int *)(param_1 + 0xa0))) {
      uStack_38 = __strlen_chk("String.prototype.indexOf",0x19);
      local_40 = "String.prototype.indexOf";
      lVar2 = Factory::NewStringFromOneByte(param_1,&local_40,0);
      if (lVar2 != 0) {
        puVar3 = (undefined8 *)Factory::NewTypeError(param_1,0x1a,lVar2,0,0);
        uVar4 = Isolate::Throw((Isolate *)param_1,*puVar3,0);
        return uVar4;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    if (*(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) < 0x40)
    goto LAB_011372e0;
  }
  param_2 = (ulong *)Object::ConvertToString(param_1,param_2);
LAB_011372e0:
  if (param_2 != (ulong *)0x0) {
    uVar4 = *param_3;
    if (((uVar4 & 1) == 0) ||
       (0x3f < *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)))) {
      param_3 = (ulong *)Object::ConvertToString(param_1,param_3);
    }
    if (param_3 != (ulong *)0x0) {
      if ((*param_4 & 1) != 0) {
        param_4 = (ulong *)Object::ConvertToInteger(param_1,param_4);
      }
      if (param_4 != (ulong *)0x0) {
        uVar4 = *param_4;
        if ((uVar4 & 1) == 0) {
          uVar5 = 0;
          if (1 < (int)uVar4) {
            uVar5 = (int)uVar4 >> 1;
          }
        }
        else if (1.0 <= *(double *)(uVar4 + 3)) {
          dVar6 = (double)NEON_fminnm(*(double *)(uVar4 + 3),0x41efffffffe00000);
          uVar5 = (int)dVar6;
        }
        else {
          uVar5 = 0;
        }
        uVar1 = *(uint *)(*param_2 + 7);
        if (uVar5 <= *(uint *)(*param_2 + 7)) {
          uVar1 = uVar5;
        }
        uVar4 = IndexOf(param_1,param_2,param_3,uVar1);
        return -(uVar4 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar4 & 0xffffffff) << 1;
      }
    }
  }
  return *(ulong *)(param_1 + 0x180);
}

