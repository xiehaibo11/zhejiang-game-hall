
/* v8::internal::compiler::JsonPrintAllSourceWithPositions(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::OptimizedCompilationInfo*,
   v8::internal::Isolate*) */

void v8::internal::compiler::JsonPrintAllSourceWithPositions
               (basic_ostream *param_1,OptimizedCompilationInfo *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  void *pvVar6;
  undefined1 *puVar7;
  bool bVar8;
  undefined4 uVar9;
  ulong *puVar10;
  basic_ostream *pbVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong *puVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong local_b0;
  void *local_a8;
  void *local_a0;
  void *pvStack_98;
  void *local_90;
  int *piStack_88;
  int *local_80;
  int *local_78;
  undefined1 *local_70;
  ulong local_68;
  
  pIVar1 = param_3 + 0x95a0;
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\"sources\" : {",0xd);
  if (*(ulong **)(param_2 + 0x18) == (ulong *)0x0) {
    puVar10 = (ulong *)0x0;
  }
  else {
    uVar13 = **(ulong **)(param_2 + 0x18);
    uVar15 = *(uint *)(uVar13 + 0xf);
    uVar13 = uVar13 & 0xffffffff00000000;
    uVar16 = uVar13 | uVar15;
    if (*(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar16 - 1)) == 0x5b) {
      uVar15 = *(uint *)(uVar16 + 0xb);
    }
    if (uVar15 == 0) {
      puVar10 = (ulong *)0x0;
      puVar14 = *(ulong **)(param_2 + 0x18);
    }
    else {
      if (*(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar16 - 1)) == 0x5b) {
        uVar16 = uVar13 | *(uint *)(uVar16 + 0xb);
      }
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar10 = *(ulong **)pIVar1;
        if (puVar10 == *(ulong **)(param_3 + 0x95a8)) {
          puVar10 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar1 = puVar10 + 1;
        *puVar10 = uVar16;
        puVar14 = *(ulong **)(param_2 + 0x18);
      }
      else {
        puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar16);
        puVar14 = *(ulong **)(param_2 + 0x18);
      }
    }
    if (puVar14 != (ulong *)0x0) {
      local_68 = *puVar14;
      local_a0 = (void *)SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_68);
      String::ToCString(&local_70,&local_a0,1,1,0);
      uVar12 = *(undefined8 *)(param_2 + 0x18);
      goto LAB_016cbffc;
    }
  }
  local_70 = operator_new__(1);
  uVar12 = 0;
  *local_70 = 0;
LAB_016cbffc:
  JsonPrintFunctionSource(param_1,0xffffffff,&local_70,puVar10,param_3,uVar12,1);
  puVar7 = local_70;
  local_70 = (undefined1 *)0x0;
  if (puVar7 != (undefined1 *)0x0) {
    operator_delete__(puVar7);
  }
  lVar17 = *(long *)(param_2 + 0x58);
  lVar2 = *(long *)(param_2 + 0x60);
  piStack_88 = (int *)0x0;
  local_90 = (void *)0x0;
  local_78 = (int *)0x0;
  local_80 = (int *)0x0;
  pvStack_98 = (void *)0x0;
  local_a0 = (void *)0x0;
  lVar5 = lVar2 - lVar17;
  if (lVar5 != 0) {
    uVar13 = lVar5 >> 5;
    if (uVar13 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_a0 = operator_new(lVar5 >> 2);
    local_90 = (void *)((long)local_a0 + uVar13 * 8);
    pvStack_98 = local_a0;
    local_80 = operator_new(lVar5 >> 3);
    local_78 = local_80 + uVar13;
  }
  piStack_88 = local_80;
  if (lVar2 != lVar17) {
    uVar13 = 0;
    uVar16 = 1;
    do {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,", ",2);
      puVar10 = *(ulong **)(*(long *)(param_2 + 0x58) + uVar13 * 0x20);
      uVar9 = SourceIdAssigner::GetIdFor((SourceIdAssigner *)&local_a0,puVar10);
      local_b0 = *puVar10;
      local_68 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_b0);
      String::ToCString(&local_a8,&local_68,1,1,0);
      uVar13 = *puVar10 & 0xffffffff00000000;
      uVar18 = uVar13 | *(uint *)(*puVar10 + 0xf);
      if (*(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar18 - 1)) == 0x5b) {
        uVar18 = uVar13 | *(uint *)(uVar18 + 0xb);
      }
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar14 = *(ulong **)pIVar1;
        if (puVar14 == *(ulong **)(param_3 + 0x95a8)) {
          puVar14 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar1 = puVar14 + 1;
        *puVar14 = uVar18;
      }
      else {
        puVar14 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar18);
      }
      JsonPrintFunctionSource(param_1,uVar9,&local_a8,puVar14,param_3,puVar10,1);
      pvVar6 = local_a8;
      local_a8 = (void *)0x0;
      if (pvVar6 != (void *)0x0) {
        operator_delete__(pvVar6);
      }
      bVar8 = uVar16 < (ulong)(*(long *)(param_2 + 0x60) - *(long *)(param_2 + 0x58) >> 5);
      uVar13 = uVar16;
      uVar16 = (ulong)((int)uVar16 + 1);
    } while (bVar8);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"}, ",3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\"inlinings\" : {",0xf);
  lVar17 = *(long *)(param_2 + 0x58);
  if (*(long *)(param_2 + 0x60) != lVar17) {
    iVar3 = *piStack_88;
    pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (param_1,"\"",1);
    pbVar11 = (basic_ostream *)
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar11,0);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar11,"\" : ",4);
    pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (param_1,"{ \"inliningId\" : ",0x11);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar11,0);
    pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (param_1,", \"sourceId\" : ",0xf);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar11,iVar3);
    local_68 = *(ulong *)(lVar17 + 0x10);
    if ((local_68 & 0x7fffffffffff) != 0) {
      pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (param_1,", \"inliningPosition\" : ",0x17);
      SourcePosition::PrintJson((SourcePosition *)&local_68,pbVar11);
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"}",1);
    if (1 < (ulong)(*(long *)(param_2 + 0x60) - *(long *)(param_2 + 0x58) >> 5)) {
      uVar13 = 2;
      uVar16 = 1;
      do {
        uVar18 = uVar13;
        iVar4 = (int)uVar18 + -1;
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,", ",2);
        lVar17 = *(long *)(param_2 + 0x58);
        iVar3 = piStack_88[uVar16];
        pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (param_1,"\"",1);
        pbVar11 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar11,iVar4);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (pbVar11,"\" : ",4);
        pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (param_1,"{ \"inliningId\" : ",0x11);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar11,iVar4);
        pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (param_1,", \"sourceId\" : ",0xf);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar11,iVar3);
        local_68 = *(ulong *)(lVar17 + uVar16 * 0x20 + 0x10);
        if ((local_68 & 0x7fffffffffff) != 0) {
          pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (param_1,", \"inliningPosition\" : ",0x17);
          SourcePosition::PrintJson((SourcePosition *)&local_68,pbVar11);
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"}",1);
        uVar13 = (ulong)((int)uVar18 + 1);
        uVar16 = uVar18;
      } while (uVar18 < (ulong)(*(long *)(param_2 + 0x60) - *(long *)(param_2 + 0x58) >> 5));
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"}",1);
  if (piStack_88 != (int *)0x0) {
    local_80 = piStack_88;
    operator_delete(piStack_88);
  }
  if (local_a0 != (void *)0x0) {
    pvStack_98 = local_a0;
    operator_delete(local_a0);
  }
  return;
}

