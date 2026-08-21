
undefined8 FUN_014bd97c(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  Isolate *pIVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  double dVar8;
  char *local_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if (((uVar6 & 1) == 0) ||
     (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x428)) {
    uStack_48 = __strlen_chk("Date.prototype.setTime",0x17);
    local_50 = "Date.prototype.setTime";
    lVar4 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_50,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar5 = (undefined8 *)
             v8::internal::Factory::NewTypeError((Factory *)param_3,0x3d,lVar4,param_2,0);
    uVar7 = v8::internal::Isolate::Throw(param_3,*puVar5,0);
  }
  else {
    pIVar3 = (Isolate *)(param_2 + -1);
    if (param_1 < 6) {
      pIVar3 = param_3 + 0xa0;
    }
    uVar6 = *(ulong *)pIVar3;
    if (((uVar6 & 1) != 0) &&
       (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x42)) {
      pIVar3 = (Isolate *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,pIVar3,0);
    }
    if (pIVar3 == (Isolate *)0x0) {
      uVar7 = *(undefined8 *)(param_3 + 0x180);
    }
    else {
      uVar6 = *(ulong *)pIVar3;
      if ((uVar6 & 1) == 0) {
        dVar8 = (double)((int)uVar6 >> 1);
      }
      else {
        dVar8 = *(double *)(uVar6 + 3);
      }
      v8::internal::DateCache::TimeClip(dVar8);
      puVar5 = (undefined8 *)v8::internal::JSDate::SetValue(param_2);
      uVar7 = *puVar5;
    }
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar7;
}

