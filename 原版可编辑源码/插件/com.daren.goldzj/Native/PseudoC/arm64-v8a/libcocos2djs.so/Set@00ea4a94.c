
/* v8::Template::Set(v8::Local<v8::Name>, v8::Local<v8::Data>, v8::PropertyAttribute) */

void __thiscall v8::Template::Set(Template *this,undefined8 param_2,ulong *param_3,ulong param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  Isolate *pIVar8;
  long lVar9;
  undefined8 uVar10;
  
  uVar4 = *(uint *)(this + 4);
  pIVar8 = (Isolate *)((ulong)uVar4 << 0x20);
  piVar1 = (int *)((ulong)uVar4 << 0x20 | 0x95b0);
  uVar5 = *(undefined4 *)(pIVar8 + 0x2c60);
  *(undefined4 *)(pIVar8 + 0x2c60) = 5;
  puVar2 = (undefined8 *)((ulong)uVar4 << 0x20 | 0x95a0);
  plVar3 = (long *)((ulong)uVar4 << 0x20 | 0x95a8);
  uVar10 = *puVar2;
  lVar9 = *plVar3;
  *piVar1 = *piVar1 + 1;
  uVar6 = *param_3;
  if ((uVar6 & 1) != 0) {
    uVar7 = uVar6 & 0xffffffff00000000 | 7;
    if ((0xa8 < *(ushort *)(uVar7 + *(uint *)(uVar6 - 1))) &&
       ((*(ushort *)(uVar7 + *(uint *)(uVar6 - 1)) & 0xfffe) != 0x4e)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!value_obj->IsJSReceiver() || value_obj->IsTemplateInfo()",
               param_2,param_3,param_4 & 0xffffffff);
    }
    if (*(short *)(uVar7 + *(uint *)(uVar6 - 1)) == 0x4f) {
      *(undefined4 *)(*(long *)this + 7) = 0;
      uVar6 = *(ulong *)this;
      if (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x4e) {
        *(uint *)(uVar6 + 0x2b) = *(uint *)(uVar6 + 0x2b) & 0xfffffffe | 0x20;
      }
    }
  }
  internal::ApiNatives::AddDataProperty(pIVar8,this);
  if (uVar4 != 0) {
    *puVar2 = uVar10;
    *piVar1 = *piVar1 + -1;
    if (*plVar3 != lVar9) {
      *plVar3 = lVar9;
      internal::HandleScope::DeleteExtensions(pIVar8);
    }
  }
  *(undefined4 *)(pIVar8 + 0x2c60) = uVar5;
  return;
}

