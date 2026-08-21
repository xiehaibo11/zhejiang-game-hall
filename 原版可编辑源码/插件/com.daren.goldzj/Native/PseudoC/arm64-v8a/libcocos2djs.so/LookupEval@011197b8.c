
/* v8::internal::CompilationCacheTable::LookupEval(v8::internal::Handle<v8::internal::CompilationCacheTable>,
   v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Handle<v8::internal::Context>, v8::internal::LanguageMode, int) */

void __thiscall
v8::internal::CompilationCacheTable::LookupEval
          (undefined8 *param_1,CompilationCacheTable *this,undefined8 param_3,undefined8 *param_4,
          undefined8 *param_5,byte param_6,undefined4 param_7)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  undefined **local_c0;
  uint local_b8;
  undefined8 *local_b0;
  undefined8 *puStack_a8;
  byte local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uStack_80 = 0;
  local_88 = 0;
  local_78 = 0;
  uStack_70 = 0;
  lVar12 = (ulong)*(uint *)((long)param_5 + 4) << 0x20;
  puVar4 = (undefined8 *)String::Flatten(lVar12,param_3,0);
  param_6 = param_6 & 1;
  local_b8 = CompilationCacheShape::StringSharedHash(*puVar4,*param_4,param_6,param_7);
  local_c0 = &PTR_IsMatch_01cb4d88;
  uVar7 = *(ulong *)this;
  uVar1 = *(uint *)(lVar12 + 0xa0);
  uVar2 = (*(int *)(uVar7 + 0xf) >> 1) - 1;
  uVar13 = (ulong)(uVar2 & local_b8);
  uVar6 = *(uint *)(uVar7 + 7 + ((long)(uVar13 * 0xc00000000 + 0xc00000000) >> 0x20));
  local_b0 = puVar4;
  puStack_a8 = param_4;
  local_a0 = param_6;
  local_9c = param_7;
  if (uVar6 != uVar1) {
    iVar10 = 1;
    uVar11 = (uint)*(undefined8 *)(lVar12 + 0xa8);
    if (uVar6 != uVar11) goto LAB_011198cc;
    do {
      do {
        uVar13 = (ulong)((int)uVar13 + iVar10 & uVar2);
        uVar6 = *(uint *)(uVar7 + 7 + ((long)(uVar13 * 0xc00000000 + 0xc00000000) >> 0x20));
        iVar10 = iVar10 + 1;
        if (uVar6 == uVar1) goto LAB_011199b0;
      } while (uVar6 == uVar11);
LAB_011198cc:
      uVar5 = (*(code *)*local_c0)(&local_c0,uVar7 & 0xffffffff00000000 | (ulong)uVar6);
    } while ((uVar5 & 1) == 0);
    iVar10 = (int)uVar13 * 0xc;
    lVar12 = *(ulong *)this + 7;
    uVar1 = *(uint *)(lVar12 + (iVar10 + 0xc));
    if ((uVar1 & 1) != 0) {
      uVar7 = *(ulong *)this & 0xffffffff00000000;
      uVar13 = uVar7 | 7;
      if (*(ushort *)(uVar13 + *(uint *)((uVar7 | uVar1) - 1)) - 0x76 < 0xf) {
        uVar1 = *(uint *)(lVar12 + (iVar10 + 0x10));
        if (((uVar1 & 1) != 0) &&
           (uVar5 = uVar7 | uVar1, *(short *)(uVar13 + *(uint *)(uVar5 - 1)) == 0xa6)) {
          uVar6 = *(uint *)(lVar12 + (iVar10 + 0x14));
          if (((uVar6 & 1) != 0) &&
             ((uVar8 = uVar7 | uVar6, *(ushort *)(uVar13 + *(uint *)(uVar8 - 1)) - 0x97 < 2 &&
              (1 < (int)*(uint *)(uVar8 + 3))))) {
            uVar13 = 0;
            iVar9 = 4;
            do {
              if (*(uint *)(uVar8 + (long)(iVar9 + 3)) == ((uint)*param_5 | 2)) {
                if (-1 < (int)uVar13) {
                  uVar6 = *(uint *)((uVar7 | *(uint *)((iVar10 + 0x14) + lVar12)) + (long)iVar9 + 7)
                  ;
                  uVar13 = 0;
                  if (uVar6 != 3) {
                    uVar13 = uVar7 | (ulong)uVar6 & 0xfffffffd;
                  }
                  goto joined_r0x01119a1c;
                }
                break;
              }
              uVar13 = uVar13 + 2;
              iVar9 = iVar9 + 8;
            } while (uVar13 < *(uint *)(uVar8 + 3) >> 1);
          }
          uVar13 = 0;
joined_r0x01119a1c:
          if (uVar1 == 0) {
            *(undefined1 *)(param_1 + 1) = 0;
            *param_1 = 0;
          }
          else {
            IsCompiledScope::IsCompiledScope((IsCompiledScope *)&local_98,uVar5);
            *param_1 = local_98;
            param_1[1] = uStack_90;
          }
          param_1[2] = uVar5;
          param_1[3] = uVar13;
          goto LAB_011199c4;
        }
      }
    }
  }
LAB_011199b0:
  param_1[1] = CONCAT71(uStack_7f,uStack_80);
  *param_1 = local_88;
  param_1[3] = uStack_70;
  param_1[2] = local_78;
LAB_011199c4:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

