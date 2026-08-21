
/* CocosDenshion::android::AndroidJavaEngine::playEffect(char const*, bool, float, float, float) */

int __thiscall
CocosDenshion::android::AndroidJavaEngine::playEffect
          (AndroidJavaEngine *this,char *param_1,bool param_2,float param_3,float param_4,
          float param_5)

{
  AndroidJavaEngine *pAVar1;
  long lVar2;
  int iVar3;
  AndroidJavaEngine *pAVar4;
  long *plVar5;
  long lVar6;
  void *__dest;
  void *pvVar7;
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  undefined4 in_register_00005044;
  undefined **local_d0;
  AndroidJavaEngine *pAStack_c8;
  void *local_c0;
  byte local_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined2 local_af;
  undefined1 local_ad;
  undefined4 uStack_ac;
  void *local_a8;
  undefined **local_a0;
  AndroidJavaEngine *pAStack_98;
  void *local_90;
  undefined ***local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (this[8] == (AndroidJavaEngine)0x0) {
    getFullPathWithoutAssetsPrefix((android *)param_1,param_1);
    pvVar7 = local_90;
    pAVar4 = pAStack_98;
    uStack_ac = 0;
    local_b8 = 0x14;
    local_af = 0x7463;
    local_a8 = (void *)0x0;
    uStack_b7 = 0x66664579616c70;
    uStack_b0 = 0x65;
    local_ad = 0;
    local_d0 = (undefined **)0x0;
    pAStack_c8 = (AndroidJavaEngine *)0x0;
    local_c0 = (void *)0x0;
    if (((ulong)local_a0 & 1) == 0) {
      pAStack_c8 = pAStack_98;
      local_d0 = local_a0;
      local_c0 = local_90;
    }
    else {
      if ((AndroidJavaEngine *)0xffffffffffffffef < pAStack_98) goto LAB_00df579c;
                    /* try { // try from 00df5694 to 00ef56bb has its CatchHandler @ 00df5694
                       catch() { ... } // from try @ 00df5694 with catch @ 00df5694
                       catch() { ... } // from try @ 00df56c0 with catch @ 00df5694 */
      if (pAStack_98 < (AndroidJavaEngine *)0x17) {
        __dest = (void *)((ulong)&local_d0 | 1);
        local_d0 = (undefined **)(ulong)(byte)((int)pAStack_98 << 1);
        if (pAStack_98 != (AndroidJavaEngine *)0x0) goto LAB_00df56e0;
      }
      else {
                    /* try { // try from 00df56c0 to 00ef56e7 has its CatchHandler @ 00df5694 */
        pAVar1 = pAStack_98 + 0x10;
        __dest = operator_new((ulong)pAVar1 & 0xfffffffffffffff0);
        local_d0 = (undefined **)((ulong)pAVar1 & 0xfffffffffffffff0 | 1);
                    /* catch() { ... } // from try @ 00df56bc with catch @ 00df56d4 */
        pAStack_c8 = pAVar4;
        local_c0 = __dest;
LAB_00df56e0:
        memcpy(__dest,pvVar7,(size_t)pAVar4);
      }
      *(AndroidJavaEngine *)((long)__dest + (long)pAVar4) = (AndroidJavaEngine)0x0;
    }
                    /* try { // try from 00df5710 to 00ef5713 has its CatchHandler @ 00df572c */
    iVar3 = cocos2d::JniHelper::
            callStaticIntMethod<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool,float,float,float>
                      (CONCAT44(in_register_00005004,param_3),CONCAT44(in_register_00005024,param_4)
                       ,CONCAT44(in_register_00005044,param_5),&DAT_01788b10,&local_b8,&local_d0,
                       param_2);
    if (((ulong)local_d0 & 1) != 0) {
      operator_delete(local_c0);
    }
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (((ulong)local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    goto LAB_00df573c;
  }
  pAStack_98 = (AndroidJavaEngine *)0x0;
  local_90 = (void *)0x0;
  local_a0 = (undefined **)0x0;
  pAVar4 = (AndroidJavaEngine *)strlen(param_1);
  if ((AndroidJavaEngine *)0xffffffffffffffef < pAVar4) {
LAB_00df579c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (pAVar4 < (AndroidJavaEngine *)0x17) {
    pvVar7 = (void *)((ulong)&local_a0 | 1);
    local_a0 = (undefined **)CONCAT71(local_a0._1_7_,(char)((int)pAVar4 << 1));
    if (pAVar4 != (AndroidJavaEngine *)0x0) goto LAB_00df55c4;
  }
  else {
    pvVar7 = operator_new((ulong)(pAVar4 + 0x10) & 0xfffffffffffffff0);
    local_a0 = (undefined **)((ulong)(pAVar4 + 0x10) & 0xfffffffffffffff0 | 1);
    pAStack_98 = pAVar4;
    local_90 = pvVar7;
LAB_00df55c4:
    memcpy(pvVar7,param_1,(size_t)pAVar4);
  }
  *(AndroidJavaEngine *)((long)pvVar7 + (long)pAVar4) = (AndroidJavaEngine)0x0;
  iVar3 = cocos2d::experimental::AudioEngine::play2d
                    ((basic_string *)&local_a0,param_2,*(float *)(this + 0xc),(AudioProfile *)0x0);
  if (((ulong)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (iVar3 != -1) {
    plVar5 = operator_new(0x18);
    *(int *)(plVar5 + 2) = iVar3;
    lVar6 = *(long *)(this + 0x10);
    *plVar5 = lVar6;
    plVar5[1] = (long)(this + 0x10);
    *(long **)(lVar6 + 8) = plVar5;
    *(long **)(this + 0x10) = plVar5;
    *(long *)(this + 0x20) = *(long *)(this + 0x20) + 1;
    local_a0 = &PTR_FUN_016e75c8;
    pAStack_98 = this;
    local_80 = &local_a0;
    cocos2d::experimental::AudioEngine::setFinishCallback(iVar3,(function *)&local_a0);
    if (&local_a0 == local_80) {
      (*(code *)(*local_80)[4])();
                    /* try { // try from 00df56bc to 00ef56bf has its CatchHandler @ 00df56d4 */
    }
    else if (local_80 != (undefined ***)0x0) {
      (*(code *)(*local_80)[5])();
    }
  }
LAB_00df573c:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00df5770 to 00ef5773 has its CatchHandler @ 00df5794 */
  return iVar3;
}

