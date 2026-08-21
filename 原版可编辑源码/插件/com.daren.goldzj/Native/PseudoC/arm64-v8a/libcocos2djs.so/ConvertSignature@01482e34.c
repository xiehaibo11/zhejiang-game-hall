
/* v8::internal::wasm::AsmJsParser::ConvertSignature(v8::internal::wasm::AsmType*,
   v8::internal::ZoneVector<v8::internal::wasm::AsmType*> const&) */

void __thiscall
v8::internal::wasm::AsmJsParser::ConvertSignature
          (AsmJsParser *this,AsmType *param_1,ZoneVector *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 uVar7;
  Zone *this_00;
  AsmType *this_01;
  ulong uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  
  this_00 = *(Zone **)this;
  uVar2 = AsmType::IsA(param_1,(AsmType *)0x11);
  puVar4 = *(undefined1 **)(this_00 + 0x10);
  uVar8 = *(long *)(param_2 + 8) - *(long *)param_2 >> 3;
  uVar6 = (long)(int)((int)uVar8 + ((uVar2 ^ 1) & 1)) + 7U & 0xfffffffffffffff8;
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar4) < uVar6) {
    puVar4 = (undefined1 *)Zone::NewExpand(this_00,uVar6);
  }
  else {
    *(undefined1 **)(this_00 + 0x10) = puVar4 + uVar6;
  }
  puVar9 = *(undefined8 **)param_2;
  puVar1 = *(undefined8 **)(param_2 + 8);
  uVar6 = (ulong)(uVar2 ^ 1) & 1;
  if (puVar9 != puVar1) {
    puVar10 = puVar4 + uVar6;
    do {
      this_01 = (AsmType *)*puVar9;
      uVar3 = AsmType::IsA(this_01,(AsmType *)0xed);
      if ((uVar3 & 1) == 0) {
        uVar3 = AsmType::IsA(this_01,(AsmType *)0xe00d);
        if ((uVar3 & 1) == 0) {
          uVar3 = AsmType::IsA(this_01,(AsmType *)0x301);
          if ((uVar3 & 1) == 0) goto LAB_01482fc8;
          uVar7 = 1;
        }
        else {
          uVar7 = 3;
        }
      }
      else {
        uVar7 = 4;
      }
      puVar9 = puVar9 + 1;
      *puVar10 = uVar7;
      puVar10 = puVar10 + 1;
    } while (puVar1 != puVar9);
  }
  uVar3 = AsmType::IsA(param_1,(AsmType *)0x11);
  if ((uVar3 & 1) == 0) {
    uVar3 = AsmType::IsA(param_1,(AsmType *)0xed);
    if ((uVar3 & 1) == 0) {
      uVar3 = AsmType::IsA(param_1,(AsmType *)0xe00d);
      if ((uVar3 & 1) == 0) {
        uVar3 = AsmType::IsA(param_1,(AsmType *)0x721);
        if ((uVar3 & 1) == 0) {
LAB_01482fc8:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        uVar7 = 1;
      }
      else {
        uVar7 = 3;
      }
    }
    else {
      uVar7 = 4;
    }
    *puVar4 = uVar7;
  }
  puVar5 = *(ulong **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar5) < 0x18) {
    puVar5 = (ulong *)Zone::NewExpand(this_00,0x18);
  }
  else {
    *(ulong **)(this_00 + 0x10) = puVar5 + 3;
  }
  *puVar5 = uVar6;
  puVar5[1] = uVar8;
  puVar5[2] = (ulong)puVar4;
  return;
}

