
/* void 
   v8::internal::JSObject::ApplyAttributesToDictionary<v8::internal::NumberDictionary>(v8::internal::Isolate*,
   v8::internal::ReadOnlyRoots, v8::internal::Handle<v8::internal::NumberDictionary>,
   v8::internal::PropertyAttributes) */

void v8::internal::JSObject::ApplyAttributesToDictionary<v8::internal::NumberDictionary>
               (undefined8 param_1,long param_2,ulong *param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  uVar9 = *param_3;
  if ((int)*(uint *)(uVar9 + 0xf) >> 1 != 0) {
    lVar8 = (long)((ulong)*(uint *)(uVar9 + 0xf) << 0x20) >> 0x21;
    lVar5 = 0x1400000000;
    lVar6 = 0x1800000000;
    lVar7 = 0x1000000000;
    while( true ) {
      lVar8 = lVar8 + -1;
      lVar1 = uVar9 + 7;
      uVar2 = *(uint *)(lVar1 + (lVar7 >> 0x20));
      if (((uVar2 != *(uint *)(param_2 + 0x28)) && (uVar2 != *(uint *)(param_2 + 0x20))) &&
         ((uVar9 = uVar9 & 0xffffffff00000000, (uVar2 & 1) == 0 ||
          ((*(short *)((uVar9 | 7) + (ulong)*(uint *)((uVar9 | uVar2) - 1)) != 0x40 ||
           ((*(byte *)((uVar9 | uVar2) + 7) & 1) == 0)))))) {
        uVar2 = *(uint *)(lVar1 + (lVar6 >> 0x20));
        uVar4 = param_4;
        if (((param_4 & 1) != 0) &&
           ((((uVar2 >> 1 & 1) != 0 &&
             (uVar3 = *(uint *)(lVar1 + (lVar5 >> 0x20)), (uVar3 & 1) != 0)) &&
            (uVar4 = param_4 & 0xfffffffe,
            *(short *)((uVar9 | 7) + (ulong)*(uint *)((uVar9 | uVar3) - 1)) != 0x52)))) {
          uVar4 = param_4;
        }
        *(uint *)((lVar6 >> 0x20) + lVar1) = uVar2 & 0xfffffffe | uVar4 << 4;
      }
      if (lVar8 == 0) break;
      uVar9 = *param_3;
      lVar5 = lVar5 + 0xc00000000;
      lVar6 = lVar6 + 0xc00000000;
      lVar7 = lVar7 + 0xc00000000;
    }
  }
  return;
}

