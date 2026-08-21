
/* char const* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__parse_assertion<char const*>(char const*, char const*) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::__parse_assertion<char_const*>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_1,char *param_2)

{
  __shared_weak_count *p_Var1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  locale alStack_98 [8];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  __shared_weak_count *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if (param_1 == param_2) goto LAB_0086348c;
  cVar3 = *param_1;
  if (cVar3 < '\\') {
    if (cVar3 != '$') {
      if ((((cVar3 != '(') || (param_1 + 1 == param_2)) || (param_1[1] != '?')) ||
         (param_1 + 2 == param_2)) goto LAB_0086348c;
      cVar3 = param_1[2];
      if (cVar3 == '!') {
        locale::locale(alStack_98);
        local_90 = locale::use_facet(alStack_98,(id *)&ctype<char>::id);
        uStack_88 = locale::use_facet(alStack_98,(id *)&collate<char>::id);
        local_60 = 0;
        uStack_78 = 0;
        local_68 = (__shared_weak_count *)0x0;
        local_70 = 0;
        local_80 = (ulong)*(uint *)(this + 0x18);
        pcVar7 = __parse<char_const*>
                           ((basic_regex<char,std::__ndk1::regex_traits<char>> *)alStack_98,
                            param_1 + 3,param_2);
        iVar6 = local_80._4_4_;
        uVar2 = *(undefined4 *)(this + 0x1c);
        puVar8 = operator_new(0x58);
        uVar9 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
        *puVar8 = &PTR____lookahead_01c66710;
        puVar8[1] = uVar9;
        locale::locale((locale *)(puVar8 + 2),alStack_98);
        puVar8[4] = uStack_88;
        puVar8[3] = local_90;
        puVar8[6] = uStack_78;
        puVar8[5] = local_80;
        puVar8[7] = local_70;
        puVar8[8] = local_68;
        if (local_68 != (__shared_weak_count *)0x0) {
          p_Var1 = local_68 + 8;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar4) {
              *(long *)p_Var1 = *(long *)p_Var1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        *(undefined4 *)(puVar8 + 10) = uVar2;
        *(undefined1 *)((long)puVar8 + 0x54) = 1;
        puVar8[9] = local_60;
        *(undefined8 **)(*(long *)(this + 0x38) + 8) = puVar8;
        uVar9 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
        *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + iVar6;
        *(undefined8 *)(this + 0x38) = uVar9;
        if ((pcVar7 == param_2) || (*pcVar7 != ')')) {
LAB_008636b0:
                    /* WARNING: Subroutine does not return */
          FUN_008640f8();
        }
        param_1 = pcVar7 + 1;
        if (local_68 != (__shared_weak_count *)0x0) {
          p_Var1 = local_68 + 8;
          do {
            lVar10 = *(long *)p_Var1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar4) {
              *(long *)p_Var1 = lVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
LAB_00863684:
          p_Var1 = local_68;
          if (lVar10 == 0) {
            (**(code **)(*(long *)local_68 + 0x10))(local_68);
            __shared_weak_count::__release_weak(p_Var1);
          }
        }
      }
      else {
        if (cVar3 != '=') goto LAB_0086348c;
        locale::locale(alStack_98);
        local_90 = locale::use_facet(alStack_98,(id *)&ctype<char>::id);
        uStack_88 = locale::use_facet(alStack_98,(id *)&collate<char>::id);
        local_60 = 0;
        uStack_78 = 0;
        local_68 = (__shared_weak_count *)0x0;
        local_70 = 0;
        local_80 = (ulong)*(uint *)(this + 0x18);
        pcVar7 = __parse<char_const*>
                           ((basic_regex<char,std::__ndk1::regex_traits<char>> *)alStack_98,
                            param_1 + 3,param_2);
        iVar6 = local_80._4_4_;
        uVar2 = *(undefined4 *)(this + 0x1c);
        puVar8 = operator_new(0x58);
        uVar9 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
        *puVar8 = &PTR____lookahead_01c66710;
        puVar8[1] = uVar9;
        locale::locale((locale *)(puVar8 + 2),alStack_98);
        puVar8[4] = uStack_88;
        puVar8[3] = local_90;
        puVar8[6] = uStack_78;
        puVar8[5] = local_80;
        puVar8[7] = local_70;
        puVar8[8] = local_68;
        if (local_68 != (__shared_weak_count *)0x0) {
          p_Var1 = local_68 + 8;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar4) {
              *(long *)p_Var1 = *(long *)p_Var1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        *(undefined4 *)(puVar8 + 10) = uVar2;
        *(undefined1 *)((long)puVar8 + 0x54) = 0;
        puVar8[9] = local_60;
        *(undefined8 **)(*(long *)(this + 0x38) + 8) = puVar8;
        uVar9 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
        *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + iVar6;
        *(undefined8 *)(this + 0x38) = uVar9;
        if ((pcVar7 == param_2) || (*pcVar7 != ')')) goto LAB_008636b0;
        param_1 = pcVar7 + 1;
        if (local_68 != (__shared_weak_count *)0x0) {
          p_Var1 = local_68 + 8;
          do {
            lVar10 = *(long *)p_Var1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar4) {
              *(long *)p_Var1 = lVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          goto LAB_00863684;
        }
      }
      locale::~locale(alStack_98);
      goto LAB_0086348c;
    }
    puVar8 = operator_new(0x10);
    lVar10 = *(long *)(this + 0x38);
    uVar9 = *(undefined8 *)(lVar10 + 8);
    puVar11 = &__r_anchor<char>::vtable;
LAB_00863470:
    *puVar8 = puVar11 + 0x10;
    puVar8[1] = uVar9;
    *(undefined8 **)(lVar10 + 8) = puVar8;
    lVar10 = *(long *)(this + 0x38);
    param_1 = param_1 + 1;
  }
  else {
    if (cVar3 != '\\') {
      if (cVar3 != '^') goto LAB_0086348c;
      puVar8 = operator_new(0x10);
      lVar10 = *(long *)(this + 0x38);
      uVar9 = *(undefined8 *)(lVar10 + 8);
      puVar11 = &__l_anchor<char>::vtable;
      goto LAB_00863470;
    }
    if (param_1 + 1 == param_2) goto LAB_0086348c;
    cVar3 = param_1[1];
    if (cVar3 == 'B') {
      puVar8 = operator_new(0x30);
      uVar9 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
      *puVar8 = &PTR____word_boundary_01c666c8;
      puVar8[1] = uVar9;
      locale::locale((locale *)(puVar8 + 2),(locale *)this);
      uVar12 = *(undefined8 *)(this + 0x10);
      uVar9 = *(undefined8 *)(this + 8);
      *(undefined1 *)(puVar8 + 5) = 1;
    }
    else {
      if (cVar3 != 'b') goto LAB_0086348c;
      puVar8 = operator_new(0x30);
      uVar9 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
      *puVar8 = &PTR____word_boundary_01c666c8;
      puVar8[1] = uVar9;
      locale::locale((locale *)(puVar8 + 2),(locale *)this);
      uVar12 = *(undefined8 *)(this + 0x10);
      uVar9 = *(undefined8 *)(this + 8);
      *(undefined1 *)(puVar8 + 5) = 0;
    }
    puVar8[4] = uVar12;
    puVar8[3] = uVar9;
    param_1 = param_1 + 2;
    *(undefined8 **)(*(long *)(this + 0x38) + 8) = puVar8;
    lVar10 = *(long *)(this + 0x38);
  }
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(lVar10 + 8);
LAB_0086348c:
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}

