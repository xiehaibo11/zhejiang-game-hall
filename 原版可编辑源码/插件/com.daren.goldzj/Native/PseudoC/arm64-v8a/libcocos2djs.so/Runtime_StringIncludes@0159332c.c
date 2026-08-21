
/* v8::internal::Runtime_StringIncludes(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_StringIncludes(int param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  long lVar2;
  ushort uVar3;
  int iVar4;
  ulong *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  double dVar14;
  char *local_60;
  undefined8 uStack_58;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar10 = FUN_015935cc(param_1,param_2,param_3);
    return uVar10;
  }
  uVar10 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar12 = *param_2;
  if ((uVar12 & 1) == 0) {
LAB_01593380:
    puVar5 = (ulong *)Object::ConvertToString(param_3,param_2);
LAB_01593390:
    if (puVar5 != (ulong *)0x0) {
      puVar8 = param_2 + -1;
      uVar3 = RegExpUtils::IsRegExp(param_3,puVar8);
      if ((uVar3 & 0xff) != 0) {
        if (0xff < uVar3) {
          local_60 = "String.prototype.includes";
          uStack_58 = 0x19;
          lVar6 = Factory::NewStringFromOneByte(param_3,&local_60,0);
          if (lVar6 == 0) {
LAB_015935b8:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","(location_) != nullptr");
          }
          uVar11 = 0x34;
          goto LAB_01593434;
        }
        uVar12 = *puVar8;
        if (((uVar12 & 1) == 0) ||
           (0x3f < *(ushort *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)))) {
          puVar8 = (ulong *)Object::ConvertToString(param_3,puVar8);
        }
        if (puVar8 != (ulong *)0x0) {
          puVar9 = param_2 + -2;
          if ((*puVar9 & 1) != 0) {
            puVar9 = (ulong *)Object::ConvertToInteger(param_3,puVar9);
          }
          if (puVar9 != (ulong *)0x0) {
            uVar12 = *puVar9;
            if ((uVar12 & 1) == 0) {
              uVar13 = 0;
              if (1 < (int)uVar12) {
                uVar13 = (int)uVar12 >> 1;
              }
            }
            else if (1.0 <= *(double *)(uVar12 + 3)) {
              dVar14 = (double)NEON_fminnm(*(double *)(uVar12 + 3),0x41efffffffe00000);
              uVar13 = (int)dVar14;
            }
            else {
              uVar13 = 0;
            }
            uVar1 = *(uint *)(*puVar5 + 7);
            if (uVar13 <= *(uint *)(*puVar5 + 7)) {
              uVar1 = uVar13;
            }
            iVar4 = String::IndexOf(param_3,puVar5,puVar8,uVar1);
            puVar7 = (undefined8 *)Factory::ToBoolean((Factory *)param_3,iVar4 != -1);
            uVar11 = *puVar7;
            goto LAB_015934ec;
          }
        }
      }
    }
    uVar11 = *(undefined8 *)(param_3 + 0x180);
  }
  else {
    if (((int)uVar12 != *(int *)(param_3 + 0xb0)) && ((int)uVar12 != *(int *)(param_3 + 0xa0))) {
      puVar5 = param_2;
      if (0x3f < *(ushort *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)))
      goto LAB_01593380;
      goto LAB_01593390;
    }
    uStack_58 = __strlen_chk("String.prototype.includes",0x1a);
    local_60 = "String.prototype.includes";
    lVar6 = Factory::NewStringFromOneByte(param_3,&local_60,0);
    if (lVar6 == 0) goto LAB_015935b8;
    uVar11 = 0x1a;
LAB_01593434:
    puVar7 = (undefined8 *)Factory::NewTypeError((Factory *)param_3,uVar11,lVar6,0,0);
    uVar11 = Isolate::Throw(param_3,*puVar7,0);
  }
LAB_015934ec:
  *(undefined8 *)(param_3 + 0x95a0) = uVar10;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar11;
}

