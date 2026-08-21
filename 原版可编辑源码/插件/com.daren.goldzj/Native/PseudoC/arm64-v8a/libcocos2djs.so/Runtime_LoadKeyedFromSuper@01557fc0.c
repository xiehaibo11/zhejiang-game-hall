
/* v8::internal::Runtime_LoadKeyedFromSuper(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_LoadKeyedFromSuper(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  uint uVar2;
  ulong *puVar3;
  Isolate *pIVar4;
  undefined8 uVar5;
  double dVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong *puVar10;
  uint local_54;
  ulong local_38;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar5 = FUN_015581e0(param_1,param_2,param_3);
    return uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar10 = param_2 + -1;
  uVar7 = *puVar10;
  if (((uVar7 & 1) == 0) ||
     (*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0xaa)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsJSObject()");
  }
  local_54 = 0;
  puVar3 = param_2 + -2;
  uVar7 = *puVar3;
  if ((uVar7 & 1) == 0) {
    if ((int)uVar7 < 0) {
LAB_015580bc:
      puVar3 = (ulong *)Object::ConvertToName(param_3,puVar3);
      goto LAB_015580cc;
    }
    dVar6 = (double)(uVar7 >> 1 & 0x7fffffff);
    local_54 = SUB84(dVar6,0);
LAB_01558150:
    pIVar4 = (Isolate *)FUN_0155a940(param_3,param_2,puVar10,dVar6);
joined_r0x01558134:
    if (pIVar4 != (Isolate *)0x0) goto LAB_0155815c;
  }
  else {
    uVar8 = uVar7 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar8 + *(uint *)(uVar7 - 1)) == 0x42) {
      dVar6 = *(double *)(uVar7 + 3) + 4503599627370496.0;
      if ((((ulong)dVar6 >> 0x20 == 0x43300000) &&
          (local_54 = SUB84(dVar6,0), local_54 != 0xffffffff)) &&
         (*(double *)(uVar7 + 3) == (double)((ulong)dVar6 & 0xffffffff))) goto LAB_01558150;
    }
    if (0x40 < *(ushort *)(uVar8 + *(uint *)(uVar7 - 1))) goto LAB_015580bc;
LAB_015580cc:
    if (puVar3 != (ulong *)0x0) {
      uVar7 = *puVar3;
      if (*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0x40) {
        uVar2 = *(uint *)(uVar7 + 3);
        local_38 = uVar7;
        if ((uVar2 & 0xc0000003) == 0) {
          local_54 = uVar2 >> 3 & 0xffffff;
        }
        else if (((uVar2 & 3) == 2) ||
                (uVar7 = String::SlowAsArrayIndex((String *)&local_38,&local_54), (uVar7 & 1) == 0))
        goto LAB_01558120;
        dVar6 = (double)(ulong)local_54;
        goto LAB_01558150;
      }
LAB_01558120:
      pIVar4 = (Isolate *)FUN_0155a64c(param_3,param_2,puVar10,puVar3);
      goto joined_r0x01558134;
    }
  }
  pIVar4 = param_3 + 0x180;
LAB_0155815c:
  uVar9 = *(undefined8 *)pIVar4;
  *(undefined8 *)(param_3 + 0x95a0) = uVar5;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar9;
}

