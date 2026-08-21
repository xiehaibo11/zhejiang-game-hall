
/* v8::internal::JSArray::AnythingToArrayLength(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, unsigned int*) */

undefined8
v8::internal::JSArray::AnythingToArrayLength(Isolate *param_1,ulong *param_2,uint *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  ulong local_48;
  
  uVar5 = *param_2;
  if ((uVar5 & 1) == 0) {
    if ((int)uVar5 < 0) goto LAB_0110ef88;
  }
  else {
    if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x42) {
      dVar7 = *(double *)(uVar5 + 3);
      dVar8 = dVar7 + 4503599627370496.0;
      if ((ulong)dVar8 >> 0x20 == 0x43300000) {
        *param_3 = SUB84(dVar8,0);
        if (dVar7 == (double)((ulong)dVar8 & 0xffffffff)) {
          return 1;
        }
        uVar5 = *param_2;
      }
    }
LAB_0110ef88:
    if (((uVar5 & 1) != 0) &&
       (*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0x40)) {
      uVar3 = *(uint *)(uVar5 + 3);
      if ((uVar3 & 0xc0000003) == 0) {
        uVar3 = uVar3 >> 3 & 0xffffff;
        goto LAB_0110ef30;
      }
      local_48 = uVar5;
      if (((uVar3 & 3) != 2) &&
         (uVar5 = String::SlowAsArrayIndex((String *)&local_48,param_3), (uVar5 & 1) != 0)) {
        return 1;
      }
    }
    iVar4 = (int)*param_2;
    if ((*param_2 & 1) == 0) {
      uVar5 = 0;
      if (1 < iVar4) {
        uVar5 = (ulong)(uint)(iVar4 >> 1) << 1;
      }
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar1 = *(ulong **)(param_1 + 0x95a0);
        if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
          puVar1 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
        *puVar1 = uVar5;
      }
      else {
        puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
      }
    }
    else {
      puVar1 = (ulong *)Object::ConvertToUint32(param_1,param_2);
    }
    if (puVar1 == (ulong *)0x0) {
      return 0;
    }
    uVar5 = *param_2;
    if (((uVar5 & 1) != 0) &&
       (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x42)) {
      param_2 = (ulong *)Object::ConvertToNumberOrNumeric(param_1,param_2,0);
    }
    if (param_2 == (ulong *)0x0) {
      return 0;
    }
    uVar5 = *puVar1;
    if ((uVar5 & 1) == 0) {
      dVar7 = (double)((int)uVar5 >> 1);
      uVar6 = *param_2;
      if ((uVar6 & 1) != 0) goto LAB_0110f058;
LAB_0110f094:
      if (dVar7 != (double)((int)uVar6 >> 1)) goto LAB_0110f0a4;
    }
    else {
      dVar7 = *(double *)(uVar5 + 3);
      uVar6 = *param_2;
      if ((uVar6 & 1) == 0) goto LAB_0110f094;
LAB_0110f058:
      if (dVar7 != *(double *)(uVar6 + 3)) {
LAB_0110f0a4:
        puVar2 = (undefined8 *)Factory::NewRangeError((Factory *)param_1,0xbe,0,0,0);
        Isolate::Throw(param_1,*puVar2,0);
        return 0;
      }
    }
    if ((uVar5 & 1) != 0) {
      if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x42) {
        dVar7 = *(double *)(uVar5 + 3);
        dVar8 = dVar7 + 4503599627370496.0;
        if (((ulong)dVar8 >> 0x20 == 0x43300000) &&
           (*param_3 = SUB84(dVar8,0), dVar7 == (double)((ulong)dVar8 & 0xffffffff))) {
          return 1;
        }
      }
LAB_0110f164:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","uint32_v->ToArrayLength(output)");
    }
    if ((int)uVar5 < 0) goto LAB_0110f164;
  }
  uVar3 = (uint)(uVar5 >> 1) & 0x7fffffff;
LAB_0110ef30:
  *param_3 = uVar3;
  return 1;
}

