
/* std::__ndk1::__wrap_iter<char const*> std::__ndk1::basic_regex<char,
   std::__ndk1::regex_traits<char> >::__parse_assertion<std::__ndk1::__wrap_iter<char const*>
   >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_assertion<std::__ndk1::__wrap_iter<char_const*>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_2,char *param_3)

{
  __shared_weak_count *p_Var1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  locale alStack_a8 [8];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  __shared_weak_count *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (param_2 == param_3) goto LAB_009c3a2c;
  cVar3 = *param_2;
  if (cVar3 < '\\') {
    if (cVar3 != '$') {
      if ((((cVar3 != '(') || (param_2 + 1 == param_3)) || (param_2[1] != '?')) ||
         (param_2 + 2 == param_3)) goto LAB_009c3a2c;
      cVar3 = param_2[2];
      if (cVar3 == '!') {
        locale::locale(alStack_a8);
        local_a0 = locale::use_facet(alStack_a8,(id *)&ctype<char>::id);
        uStack_98 = locale::use_facet(alStack_a8,(id *)&collate<char>::id);
        local_70 = 0;
        uStack_88 = 0;
        local_78 = (__shared_weak_count *)0x0;
        local_80 = 0;
        local_90 = (ulong)*(uint *)(this + 0x18);
        param_2 = (char *)__parse<std::__ndk1::__wrap_iter<char_const*>>
                                    ((basic_regex<char,std::__ndk1::regex_traits<char>> *)alStack_a8
                                     ,param_2 + 3,param_3);
        iVar6 = local_90._4_4_;
        uVar2 = *(undefined4 *)(this + 0x1c);
        puVar7 = operator_new(0x58);
        uVar8 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
        *puVar7 = &PTR____lookahead_01c66710;
        puVar7[1] = uVar8;
        locale::locale((locale *)(puVar7 + 2),alStack_a8);
        puVar7[4] = uStack_98;
        puVar7[3] = local_a0;
        puVar7[6] = uStack_88;
        puVar7[5] = local_90;
        puVar7[7] = local_80;
        puVar7[8] = local_78;
        if (local_78 != (__shared_weak_count *)0x0) {
          p_Var1 = local_78 + 8;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar4) {
              *(long *)p_Var1 = *(long *)p_Var1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        *(undefined4 *)(puVar7 + 10) = uVar2;
        *(undefined1 *)((long)puVar7 + 0x54) = 1;
        puVar7[9] = local_70;
        *(undefined8 **)(*(long *)(this + 0x38) + 8) = puVar7;
        uVar8 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
        *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + iVar6;
        *(undefined8 *)(this + 0x38) = uVar8;
        if ((param_2 == param_3) || (*param_2 != ')')) {
                    /* WARNING: Subroutine does not return */
          FUN_008640f8();
        }
        param_2 = param_2 + 1;
        if (local_78 != (__shared_weak_count *)0x0) {
          p_Var1 = local_78 + 8;
          do {
            lVar9 = *(long *)p_Var1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar4) {
              *(long *)p_Var1 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
LAB_009c3c34:
          p_Var1 = local_78;
          if (lVar9 == 0) {
            (**(code **)(*(long *)local_78 + 0x10))(local_78);
            __shared_weak_count::__release_weak(p_Var1);
          }
        }
      }
      else {
        if (cVar3 != '=') goto LAB_009c3a2c;
        locale::locale(alStack_a8);
        local_a0 = locale::use_facet(alStack_a8,(id *)&ctype<char>::id);
        uStack_98 = locale::use_facet(alStack_a8,(id *)&collate<char>::id);
        local_70 = 0;
        uStack_88 = 0;
        local_78 = (__shared_weak_count *)0x0;
        local_80 = 0;
        local_90 = (ulong)*(uint *)(this + 0x18);
        param_2 = (char *)__parse<std::__ndk1::__wrap_iter<char_const*>>
                                    ((basic_regex<char,std::__ndk1::regex_traits<char>> *)alStack_a8
                                     ,param_2 + 3,param_3);
        iVar6 = local_90._4_4_;
        uVar2 = *(undefined4 *)(this + 0x1c);
        puVar7 = operator_new(0x58);
        uVar8 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
        *puVar7 = &PTR____lookahead_01c66710;
        puVar7[1] = uVar8;
        locale::locale((locale *)(puVar7 + 2),alStack_a8);
        puVar7[4] = uStack_98;
        puVar7[3] = local_a0;
        puVar7[6] = uStack_88;
        puVar7[5] = local_90;
        puVar7[7] = local_80;
        puVar7[8] = local_78;
        if (local_78 != (__shared_weak_count *)0x0) {
          p_Var1 = local_78 + 8;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar4) {
              *(long *)p_Var1 = *(long *)p_Var1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        *(undefined4 *)(puVar7 + 10) = uVar2;
        *(undefined1 *)((long)puVar7 + 0x54) = 0;
        puVar7[9] = local_70;
        *(undefined8 **)(*(long *)(this + 0x38) + 8) = puVar7;
        uVar8 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
        *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + iVar6;
        *(undefined8 *)(this + 0x38) = uVar8;
        if ((param_2 == param_3) || (*param_2 != ')')) {
                    /* WARNING: Subroutine does not return */
          FUN_008640f8();
        }
        param_2 = param_2 + 1;
        if (local_78 != (__shared_weak_count *)0x0) {
          p_Var1 = local_78 + 8;
          do {
            lVar9 = *(long *)p_Var1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar4) {
              *(long *)p_Var1 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          goto LAB_009c3c34;
        }
      }
      locale::~locale(alStack_a8);
      goto LAB_009c3a2c;
    }
    puVar7 = operator_new(0x10);
    lVar9 = *(long *)(this + 0x38);
    uVar8 = *(undefined8 *)(lVar9 + 8);
    puVar10 = &__r_anchor<char>::vtable;
LAB_009c3a10:
    *puVar7 = puVar10 + 0x10;
    puVar7[1] = uVar8;
    *(undefined8 **)(lVar9 + 8) = puVar7;
    lVar9 = *(long *)(this + 0x38);
    param_2 = param_2 + 1;
  }
  else {
    if (cVar3 != '\\') {
      if (cVar3 != '^') goto LAB_009c3a2c;
      puVar7 = operator_new(0x10);
      lVar9 = *(long *)(this + 0x38);
      uVar8 = *(undefined8 *)(lVar9 + 8);
      puVar10 = &__l_anchor<char>::vtable;
      goto LAB_009c3a10;
    }
    if (param_2 + 1 == param_3) goto LAB_009c3a2c;
    cVar3 = param_2[1];
    if (cVar3 == 'B') {
      puVar7 = operator_new(0x30);
      uVar8 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
      *puVar7 = &PTR____word_boundary_01c666c8;
      puVar7[1] = uVar8;
      locale::locale((locale *)(puVar7 + 2),(locale *)this);
      uVar11 = *(undefined8 *)(this + 0x10);
      uVar8 = *(undefined8 *)(this + 8);
      *(undefined1 *)(puVar7 + 5) = 1;
    }
    else {
      if (cVar3 != 'b') goto LAB_009c3a2c;
      puVar7 = operator_new(0x30);
      uVar8 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
      *puVar7 = &PTR____word_boundary_01c666c8;
      puVar7[1] = uVar8;
      locale::locale((locale *)(puVar7 + 2),(locale *)this);
      uVar11 = *(undefined8 *)(this + 0x10);
      uVar8 = *(undefined8 *)(this + 8);
      *(undefined1 *)(puVar7 + 5) = 0;
    }
    puVar7[4] = uVar11;
    puVar7[3] = uVar8;
    param_2 = param_2 + 2;
    *(undefined8 **)(*(long *)(this + 0x38) + 8) = puVar7;
    lVar9 = *(long *)(this + 0x38);
  }
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(lVar9 + 8);
LAB_009c3a2c:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}

