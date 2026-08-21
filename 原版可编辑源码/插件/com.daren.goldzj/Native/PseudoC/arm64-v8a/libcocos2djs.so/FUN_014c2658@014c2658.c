
undefined1  [16] FUN_014c2658(DateParser *param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  
  puVar4 = (undefined8 *)v8::internal::String::Flatten(param_1,param_2,0);
  local_60 = *puVar4;
  auVar8 = v8::internal::String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_60);
  if (auVar8._8_8_ >> 0x20 == 1) {
    bVar2 = v8::internal::DateParser::Parse<unsigned_char_const>();
    if (bVar2) {
LAB_014c26c4:
      dVar5 = (double)FUN_014c290c(local_60,uStack_58,local_50);
      dVar7 = NAN;
      if (((((ABS(local_48) != INFINITY) && (!NAN(ABS(local_48)))) && (ABS(local_40) != INFINITY))
          && ((!NAN(ABS(local_40)) && (ABS(local_38) != INFINITY)))) &&
         ((!NAN(ABS(local_38)) && ((ABS(local_30) != INFINITY && (!NAN(ABS(local_30)))))))) {
        if (local_48 != 0.0) {
          local_48 = (double)(long)local_48;
        }
        bVar2 = local_40 < 0.0;
        if (local_40 != 0.0) {
          dVar7 = (double)(long)local_40;
          local_40 = (double)(long)local_40;
          if (bVar2) {
            local_40 = dVar7;
          }
        }
        if (local_38 != 0.0) {
          local_38 = (double)(long)local_38;
        }
        bVar2 = local_30 < 0.0;
        if (local_30 != 0.0) {
          dVar7 = (double)(long)local_30;
          local_30 = (double)(long)local_30;
          if (bVar2) {
            local_30 = dVar7;
          }
        }
        dVar7 = local_48 * 3600000.0 + local_40 * 60000.0 + local_38 * 1000.0 + local_30;
      }
      dVar6 = ABS(dVar5);
      bVar2 = true;
      if ((ABS(dVar7) != INFINITY) && (bVar2 = true, !NAN(ABS(dVar7)))) {
        bVar2 = false;
      }
      bVar1 = true;
      if ((!bVar2) && (bVar1 = false, !NAN(dVar6))) {
        bVar1 = dVar6 == INFINITY;
      }
      dVar7 = dVar5 * 86400000.0 + dVar7;
      bVar2 = true;
      if ((!bVar1) && (bVar2 = true, !NAN(dVar6))) {
        bVar2 = false;
      }
      if (bVar2) {
        dVar7 = NAN;
      }
      if (NAN(local_28)) {
        if (dVar7 < -8.640002592e+15) {
          return ZEXT816(0x7ff8000000000000);
        }
        if (8.640002592e+15 < dVar7) {
          return ZEXT816(0x7ff8000000000000);
        }
        iVar3 = (**(code **)(**(long **)(param_1 + 0xb638) + 0x18))
                          (0x7ff8000000000000,*(long **)(param_1 + 0xb638),(long)dVar7,0);
        dVar7 = (double)((long)dVar7 - (long)iVar3);
      }
      else {
        dVar7 = dVar7 + local_28 * -1000.0;
      }
      auVar8 = v8::internal::DateCache::TimeClip(dVar7);
      return auVar8;
    }
  }
  else {
    bVar2 = v8::internal::DateParser::Parse<unsigned_short_const>
                      (param_1,auVar8._0_8_,(long)auVar8._8_4_,&local_60);
    if (bVar2) goto LAB_014c26c4;
  }
  return ZEXT816(0x7ff8000000000000);
}

