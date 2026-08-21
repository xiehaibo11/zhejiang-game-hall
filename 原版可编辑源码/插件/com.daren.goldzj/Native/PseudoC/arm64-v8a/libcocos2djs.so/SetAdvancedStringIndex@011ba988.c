
/* v8::internal::RegExpUtils::SetAdvancedStringIndex(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSReceiver>, v8::internal::Handle<v8::internal::String>, bool)
    */

undefined8
v8::internal::RegExpUtils::SetAdvancedStringIndex
          (Isolate *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  
  puVar2 = (ulong *)Object::GetProperty(param_1,param_2,param_1 + 0x7b0);
  if (puVar2 != (ulong *)0x0) {
    uVar5 = *puVar2;
    if ((uVar5 & 1) == 0) {
      uVar5 = (ulong)(((uint)(uVar5 >> 1) & 0x7fffffff & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) << 1);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar2 = *(ulong **)(param_1 + 0x95a0);
        if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
          puVar2 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
        *puVar2 = uVar5;
        if (puVar2 == (ulong *)0x0) {
          return 0;
        }
        goto LAB_011baa10;
      }
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    }
    else {
      puVar2 = (ulong *)Object::ConvertToLength(param_1,puVar2);
    }
    if (puVar2 != (ulong *)0x0) {
LAB_011baa10:
      uVar5 = *puVar2;
      if ((uVar5 & 1) == 0) {
        iVar1 = 0;
        if (1 < (int)uVar5) {
          iVar1 = (int)uVar5 >> 1;
        }
        lVar4 = (long)iVar1;
      }
      else {
        dVar6 = *(double *)(uVar5 + 3);
        if (1.0 <= dVar6) {
          lVar4 = (long)dVar6;
          if (1.8446744073709552e+19 <= dVar6) {
            lVar4 = -1;
          }
        }
        else {
          lVar4 = 0;
        }
      }
      uVar3 = AdvanceStringIndex(param_3,lVar4,param_4 & 1);
      uVar3 = SetLastIndex(param_1,param_2,uVar3);
      return uVar3;
    }
  }
  return 0;
}

