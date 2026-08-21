
void FUN_00ffcd78(vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *param_1,
                 long param_2)

{
  Value *pVVar1;
  long lVar2;
  undefined8 *puVar3;
  Value *pVVar4;
  __String *this;
  char *pcVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  long *plVar9;
  long *plVar10;
  Value *local_a0;
  Value *local_98;
  void *local_90;
  Value aVStack_78 [16];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (param_2 != 0) {
    lVar7 = **(long **)(param_2 + 0x30);
    if (0 < lVar7) {
      plVar10 = (long *)(*(long **)(param_2 + 0x30))[2];
      plVar9 = plVar10 + lVar7 + -1;
      if (plVar10 <= plVar9) {
        lVar7 = *plVar10;
        while (lVar7 != 0) {
          cocos2d::Value::Value(aVStack_78);
          this = (__String *)
                 __dynamic_cast(lVar7,&cocos2d::Ref::typeinfo,&cocos2d::__String::typeinfo,0);
          if (this == (__String *)0x0) {
            lVar6 = __dynamic_cast(lVar7,&cocos2d::Ref::typeinfo,&cocos2d::__Dictionary::typeinfo,0)
            ;
            if (lVar6 == 0) {
              lVar6 = __dynamic_cast(lVar7,&cocos2d::Ref::typeinfo,&cocos2d::__Array::typeinfo,0);
              if (lVar6 == 0) {
                    /* try { // try from 00ffcf7c to 010fcf8b has its CatchHandler @ 00ffcfc4 */
                lVar6 = __dynamic_cast(lVar7,&cocos2d::Ref::typeinfo,&cocos2d::__Double::typeinfo,0)
                ;
                if (lVar6 == 0) {
                    /* catch() { ... } // from try @ 00ffcf7c with catch @ 00ffcfc4 */
                    /* catch() { ... } // from try @ 00ffcf48 with catch @ 00ffcfc8 */
                  lVar6 = __dynamic_cast(lVar7,&cocos2d::Ref::typeinfo,&cocos2d::__Float::typeinfo,0
                                        );
                  if (lVar6 == 0) {
                    lVar6 = __dynamic_cast(lVar7,&cocos2d::Ref::typeinfo,
                                           &cocos2d::__Integer::typeinfo,0);
                    if (lVar6 == 0) {
                      lVar7 = __dynamic_cast(lVar7,&cocos2d::Ref::typeinfo,
                                             &cocos2d::__Bool::typeinfo,0);
                      if (lVar7 == 0) goto LAB_00ffce70;
                      if (*(char *)(lVar7 + 0x30) == '\0') {
                        cocos2d::Value::Value((Value *)&local_a0,false);
                      }
                      else {
                        cocos2d::Value::Value((Value *)&local_a0,true);
                      }
                      cocos2d::Value::operator=(aVStack_78,(Value *)&local_a0);
                    }
                    else {
                      cocos2d::Value::Value((Value *)&local_a0,*(int *)(lVar6 + 0x30));
                      cocos2d::Value::operator=(aVStack_78,(Value *)&local_a0);
                    }
                  }
                  else {
                    cocos2d::Value::Value((Value *)&local_a0,*(float *)(lVar6 + 0x30));
                    cocos2d::Value::operator=(aVStack_78,(Value *)&local_a0);
                  }
                }
                else {
                    /* try { // try from 00ffcf8c to 010fcfe3 has its CatchHandler @ 00ffcefc */
                  cocos2d::Value::Value((Value *)&local_a0,*(double *)(lVar6 + 0x30));
                  cocos2d::Value::operator=(aVStack_78,(Value *)&local_a0);
                }
                goto LAB_00ffce68;
              }
              FUN_00ffcd78(&local_a0);
              cocos2d::Value::operator=(aVStack_78,(vector *)&local_a0);
              pVVar4 = local_a0;
              pVVar1 = local_98;
              if (local_a0 != (Value *)0x0) {
                    /* try { // try from 00ffcf48 to 010fcf57 has its CatchHandler @ 00ffcfc8 */
                while (pVVar1 != pVVar4) {
                    /* try { // try from 00ffcf58 to 010fcf7b has its CatchHandler @ 00ffcefc */
                  cocos2d::Value::~Value(pVVar1 + -0x10);
                  pVVar1 = pVVar1 + -0x10;
                }
                local_98 = pVVar4;
                operator_delete(local_a0);
              }
            }
            else {
              FUN_00ffc540(&local_a0);
              cocos2d::Value::operator=(aVStack_78,(unordered_map *)&local_a0);
              pVVar1 = local_a0;
              puVar3 = local_90;
              while (puVar3 != (void *)0x0) {
                pvVar8 = (void *)*puVar3;
                local_a0 = pVVar1;
                cocos2d::Value::~Value((Value *)(puVar3 + 5));
                if ((*(byte *)(puVar3 + 2) & 1) != 0) {
                  operator_delete((void *)puVar3[4]);
                }
                operator_delete(puVar3);
                pVVar1 = local_a0;
                puVar3 = pvVar8;
              }
                    /* try { // try from 00ffcefc to 010fcf47 has its CatchHandler @ 00ffcefc
                       catch() { ... } // from try @ 00ffcefc with catch @ 00ffcefc
                       catch() { ... } // from try @ 00ffcf58 with catch @ 00ffcefc
                       catch() { ... } // from try @ 00ffcf8c with catch @ 00ffcefc */
              local_a0 = (Value *)0x0;
              if (pVVar1 != (Value *)0x0) {
                operator_delete(pVVar1);
              }
            }
          }
          else {
            pcVar5 = (char *)cocos2d::__String::getCString(this);
            cocos2d::Value::Value((Value *)&local_a0,pcVar5);
            cocos2d::Value::operator=(aVStack_78,(Value *)&local_a0);
LAB_00ffce68:
            cocos2d::Value::~Value((Value *)&local_a0);
          }
LAB_00ffce70:
          pVVar1 = *(Value **)(param_1 + 8);
          if (pVVar1 == *(Value **)(param_1 + 0x10)) {
            std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
            __push_back_slow_path<cocos2d::Value_const&>(param_1,aVStack_78);
          }
          else {
            cocos2d::Value::Value(pVVar1,aVStack_78);
            *(Value **)(param_1 + 8) = pVVar1 + 0x10;
          }
          cocos2d::Value::~Value(aVStack_78);
          plVar10 = plVar10 + 1;
          if (plVar9 < plVar10) break;
          lVar7 = *plVar10;
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

