
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
  if (param_1 == param_2) goto LAB_00ea94ac;
  cVar3 = *param_1;
  if (cVar3 < '\\') {
    if (cVar3 != '$') {
      if ((((cVar3 != '(') || (param_1 + 1 == param_2)) || (param_1[1] != '?')) ||
         (param_1 + 2 == param_2)) goto LAB_00ea94ac;
      cVar3 = param_1[2];
      if (cVar3 == '!') {
        locale::locale(alStack_a8);
        local_a0 = locale::use_facet(alStack_a8,(id *)&ctype<char>::id);
        uStack_98 = locale::use_facet(alStack_a8,(id *)&collate<char>::id);
        local_70 = 0;
        uStack_88 = 0;
        local_78 = (__shared_weak_count *)0x0;
        local_80 = 0;
        local_90 = (ulong)*(uint *)(this + 0x18);
        pcVar7 = __parse<char_const*>
                           ((basic_regex<char,std::__ndk1::regex_traits<char>> *)alStack_a8,
                            param_1 + 3,param_2);
        iVar6 = local_90._4_4_;
        uVar2 = *(undefined4 *)(this + 0x1c);
        puVar8 = operator_new(0x58);
                    /* try { // try from 00ea95fc to 00fa95ff has its CatchHandler @ 00ea968c */
        uVar9 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
        *puVar8 = &PTR____lookahead_016f4f60;
        puVar8[1] = uVar9;
        locale::locale((locale *)(puVar8 + 2),alStack_a8);
        puVar8[4] = uStack_98;
        puVar8[3] = local_a0;
        puVar8[6] = uStack_88;
        puVar8[5] = local_90;
        puVar8[7] = local_80;
        puVar8[8] = local_78;
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
        *(undefined4 *)(puVar8 + 10) = uVar2;
        *(undefined1 *)((long)puVar8 + 0x54) = 1;
        puVar8[9] = local_70;
        *(undefined8 **)(*(long *)(this + 0x38) + 8) = puVar8;
        uVar9 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
        *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + iVar6;
        *(undefined8 *)(this + 0x38) = uVar9;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ea95fc with catch @ 00ea968c
                        */
        if ((pcVar7 == param_2) || (*pcVar7 != ')')) {
                    /* WARNING: Subroutine does not return */
          FUN_00ea9db4();
        }
        param_1 = pcVar7 + 1;
        if (local_78 != (__shared_weak_count *)0x0) {
          p_Var1 = local_78 + 8;
          do {
            lVar10 = *(long *)p_Var1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar4) {
              *(long *)p_Var1 = lVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
LAB_00ea96b4:
          p_Var1 = local_78;
          if (lVar10 == 0) {
            (**(code **)(*(long *)local_78 + 0x10))(local_78);
            __shared_weak_count::__release_weak(p_Var1);
          }
        }
      }
      else {
        if (cVar3 != '=') goto LAB_00ea94ac;
        locale::locale(alStack_a8);
        local_a0 = locale::use_facet(alStack_a8,(id *)&ctype<char>::id);
                    /* try { // try from 00ea934c to 00fa93a7 has its CatchHandler @ 00ea934c
                       catch() { ... } // from try @ 00ea934c with catch @ 00ea934c
                       catch() { ... } // from try @ 00ea9428 with catch @ 00ea934c */
        uStack_98 = locale::use_facet(alStack_a8,(id *)&collate<char>::id);
        local_70 = 0;
        uStack_88 = 0;
        local_78 = (__shared_weak_count *)0x0;
        local_80 = 0;
        local_90 = (ulong)*(uint *)(this + 0x18);
        pcVar7 = __parse<char_const*>
                           ((basic_regex<char,std::__ndk1::regex_traits<char>> *)alStack_a8,
                            param_1 + 3,param_2);
        iVar6 = local_90._4_4_;
        uVar2 = *(undefined4 *)(this + 0x1c);
        puVar8 = operator_new(0x58);
        uVar9 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
                    /* try { // try from 00ea93a8 to 00fa93b3 has its CatchHandler @ 00ea94e4 */
        *puVar8 = &PTR____lookahead_016f4f60;
        puVar8[1] = uVar9;
        locale::locale((locale *)(puVar8 + 2),alStack_a8);
        puVar8[4] = uStack_98;
        puVar8[3] = local_a0;
        puVar8[6] = uStack_88;
        puVar8[5] = local_90;
        puVar8[7] = local_80;
        puVar8[8] = local_78;
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
        *(undefined4 *)(puVar8 + 10) = uVar2;
        *(undefined1 *)((long)puVar8 + 0x54) = 0;
        puVar8[9] = local_70;
        *(undefined8 **)(*(long *)(this + 0x38) + 8) = puVar8;
                    /* try { // try from 00ea9408 to 00fa9417 has its CatchHandler @ 00ea9450 */
        uVar9 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
        *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + iVar6;
        *(undefined8 *)(this + 0x38) = uVar9;
                    /* try { // try from 00ea941c to 00fa9427 has its CatchHandler @ 00ea9438 */
        if ((pcVar7 == param_2) || (*pcVar7 != ')')) {
                    /* WARNING: Subroutine does not return */
          FUN_00ea9db4();
        }
                    /* try { // try from 00ea9428 to 00fa954f has its CatchHandler @ 00ea934c */
        param_1 = pcVar7 + 1;
        if (local_78 != (__shared_weak_count *)0x0) {
          p_Var1 = local_78 + 8;
          do {
                    /* catch() { ... } // from try @ 00ea941c with catch @ 00ea9438 */
            lVar10 = *(long *)p_Var1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar4) {
              *(long *)p_Var1 = lVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          goto LAB_00ea96b4;
        }
      }
      locale::~locale(alStack_a8);
      goto LAB_00ea94ac;
    }
    puVar8 = operator_new(0x10);
    lVar10 = *(long *)(this + 0x38);
    uVar9 = *(undefined8 *)(lVar10 + 8);
    puVar11 = &__r_anchor<char>::vtable;
LAB_00ea9490:
    *puVar8 = puVar11 + 0x10;
    puVar8[1] = uVar9;
    *(undefined8 **)(lVar10 + 8) = puVar8;
    lVar10 = *(long *)(this + 0x38);
    param_1 = param_1 + 1;
  }
  else {
                    /* catch() { ... } // from try @ 00ea9408 with catch @ 00ea9450 */
    if (cVar3 != '\\') {
      if (cVar3 != '^') goto LAB_00ea94ac;
      puVar8 = operator_new(0x10);
      lVar10 = *(long *)(this + 0x38);
      uVar9 = *(undefined8 *)(lVar10 + 8);
      puVar11 = &__l_anchor<char>::vtable;
      goto LAB_00ea9490;
    }
                    /* catch() { ... } // from try @ 00ea93a8 with catch @ 00ea94e4 */
    if (param_1 + 1 == param_2) goto LAB_00ea94ac;
    cVar3 = param_1[1];
    if (cVar3 == 'B') {
      puVar8 = operator_new(0x30);
      uVar9 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
      *puVar8 = &PTR____word_boundary_016f4f18;
      puVar8[1] = uVar9;
      locale::locale((locale *)(puVar8 + 2),(locale *)this);
      uVar12 = *(undefined8 *)(this + 0x10);
      uVar9 = *(undefined8 *)(this + 8);
      *(undefined1 *)(puVar8 + 5) = 1;
    }
    else {
      if (cVar3 != 'b') goto LAB_00ea94ac;
      puVar8 = operator_new(0x30);
      uVar9 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
      *puVar8 = &PTR____word_boundary_016f4f18;
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
LAB_00ea94ac:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}

