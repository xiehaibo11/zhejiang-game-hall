
/* v8::internal::CaptureAsyncStackTrace(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSPromise>, v8::internal::FrameArrayBuilder*) */

void v8::internal::CaptureAsyncStackTrace
               (Isolate *param_1,ulong *param_2,FrameArrayBuilder *param_3)

{
  Isolate *pIVar1;
  Builtins *this;
  uint uVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  ulong *puVar7;
  CanonicalHandleScope *this_00;
  ulong *puVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong local_38;
  
  if (*(int *)(**(long **)(param_3 + 0x20) + 7) >> 1 < *(int *)(param_3 + 0xc)) {
    pIVar1 = param_1 + 0x95a0;
    this = (Builtins *)(param_1 + 0x9e00);
    do {
      local_38 = *param_2;
      iVar5 = JSPromise::status((JSPromise *)&local_38);
      if (iVar5 != 0) {
        return;
      }
      uVar2 = *(uint *)(*param_2 + 0xb);
      if ((uVar2 & 1) == 0) {
        return;
      }
      uVar9 = *param_2 & 0xffffffff00000000;
      uVar13 = uVar9 | uVar2;
      if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 99) {
        return;
      }
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)pIVar1;
        if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar7 + 1;
        *puVar7 = uVar13;
        bVar3 = *(byte *)(uVar13 + 3);
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar13);
        uVar13 = *puVar7;
        bVar3 = *(byte *)(uVar13 + 3);
      }
      if ((bVar3 & 1) != 0) {
        return;
      }
      puVar10 = (uint *)(uVar13 + 0xb);
      uVar9 = uVar13 & 0xffffffff00000000;
      uVar11 = uVar9 | 7;
      if (*(short *)(uVar11 + *(uint *)((uVar9 | *puVar10) - 1)) == 0x439) {
        iVar5 = *(int *)((uVar9 | *puVar10) + 0x17);
        iVar6 = Builtins::builtin(this,0xd6);
        if (iVar5 != iVar6) {
          uVar13 = *puVar7;
          uVar9 = uVar13 & 0xffffffff00000000;
          puVar10 = (uint *)(uVar13 + 0xb);
          uVar11 = uVar9 | 7;
          goto LAB_00f4ccc8;
        }
LAB_00f4cd38:
        uVar13 = *puVar7 & 0xffffffff00000000;
        uVar13 = uVar13 | *(uint *)((uVar13 | *(uint *)(*puVar7 + 0xb)) + 0xf);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar7 = *(ulong **)pIVar1;
          if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
            puVar7 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar1 = puVar7 + 1;
          *puVar7 = uVar13;
        }
        else {
          puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar13);
          uVar13 = *puVar7;
        }
        uVar13 = uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 + 0xf);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar7 = *(ulong **)pIVar1;
          if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
            puVar7 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar1 = puVar7 + 1;
          *puVar7 = uVar13;
          iVar5 = *(int *)(uVar13 + 0x1f);
        }
        else {
          puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar13);
          iVar5 = *(int *)(*puVar7 + 0x1f);
        }
        if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","generator_object->is_suspended()");
        }
        FrameArrayBuilder::AppendAsyncFrame(param_3,puVar7);
        uVar13 = *puVar7;
        uVar9 = uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 + 0x27);
        if (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) == 0x418) {
LAB_00f4cbc4:
          this_00 = *(CanonicalHandleScope **)(param_1 + 0x95b8);
        }
        else {
          if (*(uint *)(uVar13 + 0x27) == *(uint *)(param_1 + 0xa0)) {
            return;
          }
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar7 = *(ulong **)pIVar1;
            if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
              puVar7 = (ulong *)HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar1 = puVar7 + 1;
            *puVar7 = uVar9;
          }
          else {
            puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
            uVar9 = *puVar7;
          }
          uVar2 = *(uint *)(uVar9 + 0xf);
          this_00 = *(CanonicalHandleScope **)(param_1 + 0x95b8);
LAB_00f4d0f4:
          uVar9 = uVar9 & 0xffffffff00000000 | (ulong)uVar2;
        }
        if (this_00 == (CanonicalHandleScope *)0x0) {
          param_2 = *(ulong **)pIVar1;
          if (param_2 == *(ulong **)(param_1 + 0x95a8)) {
            param_2 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar1 = param_2 + 1;
          *param_2 = uVar9;
        }
        else {
          param_2 = (ulong *)CanonicalHandleScope::Lookup(this_00,uVar9);
        }
      }
      else {
LAB_00f4ccc8:
        uVar12 = uVar9 | *(uint *)(uVar13 + 0xb);
        if (*(short *)(uVar11 + *(uint *)(uVar12 - 1)) == 0x439) {
          iVar5 = *(int *)(uVar12 + 0x17);
          iVar6 = Builtins::builtin(this,0x26b);
          if (iVar5 == iVar6) goto LAB_00f4cd38;
          uVar13 = *puVar7;
          uVar9 = uVar13 & 0xffffffff00000000;
          puVar10 = (uint *)(uVar13 + 0xb);
          uVar11 = uVar9 | 7;
        }
        if (*(short *)(uVar11 + *(uint *)((uVar9 | *puVar10) - 1)) == 0x439) {
          iVar5 = *(int *)((uVar9 | *puVar10) + 0x17);
          iVar6 = Builtins::builtin(this,0x26d);
          if (iVar5 == iVar6) goto LAB_00f4cd38;
          uVar13 = *puVar7;
          uVar9 = uVar13 & 0xffffffff00000000;
          puVar10 = (uint *)(uVar13 + 0xb);
          uVar11 = uVar9 | 7;
        }
        if (*(short *)(uVar11 + *(uint *)((uVar9 | *puVar10) - 1)) == 0x439) {
          iVar5 = *(int *)((uVar9 | *puVar10) + 0x17);
          iVar6 = Builtins::builtin(this,0x1de);
          uVar13 = *puVar7;
          uVar9 = uVar13 & 0xffffffff00000000;
          puVar10 = (uint *)(uVar13 + 0xb);
          if (iVar5 != iVar6) {
            uVar11 = uVar9 | 7;
            goto LAB_00f4ceac;
          }
          uVar9 = uVar9 | *puVar10;
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar7 = *(ulong **)pIVar1;
            if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
              puVar7 = (ulong *)HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar1 = puVar7 + 1;
            *puVar7 = uVar9;
          }
          else {
            puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
            uVar9 = *puVar7;
          }
          uVar13 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 0xf);
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar8 = *(ulong **)pIVar1;
            if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
              puVar8 = (ulong *)HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar1 = puVar8 + 1;
            *puVar8 = uVar13;
          }
          else {
            puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar13);
          }
          local_38 = *puVar7;
          iVar5 = JSReceiver::GetIdentityHash((JSReceiver *)&local_38);
          FrameArrayBuilder::AppendPromiseAllFrame(param_3,puVar8,(iVar5 >> 1) + -1);
          uVar13 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0x13);
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar7 = *(ulong **)pIVar1;
            if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
              puVar7 = (ulong *)HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar1 = puVar7 + 1;
            *puVar7 = uVar13;
          }
          else {
            puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar13);
            uVar13 = *puVar7;
          }
          uVar9 = uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 + 3);
          sVar4 = *(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1));
LAB_00f4cbbc:
          if (sVar4 != 0x42d) {
            return;
          }
          goto LAB_00f4cbc4;
        }
LAB_00f4ceac:
        if (*(short *)(uVar11 + *(uint *)((uVar9 | *puVar10) - 1)) == 0x439) {
          iVar5 = *(int *)((uVar9 | *puVar10) + 0x17);
          iVar6 = Builtins::builtin(this,0x331);
          uVar13 = *puVar7;
          uVar9 = uVar13 & 0xffffffff00000000;
          if (iVar5 == iVar6) {
            uVar9 = uVar9 | *(uint *)(uVar13 + 0xb);
            if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar7 = *(ulong **)pIVar1;
              if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
                puVar7 = (ulong *)HandleScope::Extend(param_1);
              }
              *(ulong **)pIVar1 = puVar7 + 1;
              *puVar7 = uVar9;
            }
            else {
              puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
              uVar9 = *puVar7;
            }
            uVar9 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 0xf);
            if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar7 = *(ulong **)pIVar1;
              if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
                puVar7 = (ulong *)HandleScope::Extend(param_1);
              }
              *(ulong **)pIVar1 = puVar7 + 1;
              *puVar7 = uVar9;
            }
            else {
              puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
              uVar9 = *puVar7;
            }
            uVar2 = *(uint *)(uVar9 + 0xf);
            this_00 = *(CanonicalHandleScope **)(param_1 + 0x95b8);
            goto LAB_00f4d0f4;
          }
        }
        uVar9 = uVar9 | *(uint *)(uVar13 + 0xf);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          param_2 = *(ulong **)pIVar1;
          if (param_2 == *(ulong **)(param_1 + 0x95a8)) {
            param_2 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar1 = param_2 + 1;
          *param_2 = uVar9;
        }
        else {
          param_2 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
          uVar9 = *param_2;
        }
        uVar13 = uVar9 & 0xffffffff00000000 | 7;
        if (*(short *)(uVar13 + *(uint *)(uVar9 - 1)) != 0x42d) {
          if (*(short *)(uVar13 + *(uint *)(uVar9 - 1)) != 0x62) {
            if ((int)uVar9 == *(int *)(param_1 + 0xa0)) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","promise_or_capability->IsUndefined(isolate)");
          }
          uVar9 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 3);
          sVar4 = *(short *)(uVar13 + *(uint *)(uVar9 - 1));
          goto LAB_00f4cbbc;
        }
      }
    } while (*(int *)(**(long **)(param_3 + 0x20) + 7) >> 1 < *(int *)(param_3 + 0xc));
  }
  return;
}

