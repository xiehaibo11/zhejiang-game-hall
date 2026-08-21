
/* array_to_valuevector_deprecated(cocos2d::__Array&, std::__ndk1::vector<cocos2d::Value,
   std::__ndk1::allocator<cocos2d::Value> >&) */

void array_to_valuevector_deprecated(__Array *param_1,vector *param_2)

{
  long lVar1;
  __String *this;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  Value *this_00;
  long lVar7;
  Value *pVVar8;
  Value aVStack_78 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar5 = *(long **)(param_1 + 0x30);
  lVar6 = *plVar5;
  if (lVar6 == 0) {
    uVar4 = 0;
  }
  else {
    pVVar8 = *(Value **)param_2;
    this_00 = *(Value **)(param_2 + 8);
    if (this_00 != pVVar8) {
      do {
        this_00 = this_00 + -0x10;
        cocos2d::Value::~Value(this_00);
      } while (pVVar8 != this_00);
      plVar5 = *(long **)(param_1 + 0x30);
      lVar6 = *plVar5;
    }
    *(Value **)(param_2 + 8) = pVVar8;
    if (0 < lVar6) {
      lVar6 = 0;
      do {
        lVar7 = *(long *)(plVar5[2] + lVar6 * 8);
        if (lVar7 != 0) {
          this = (__String *)
                 __dynamic_cast(lVar7,&cocos2d::Ref::typeinfo,&cocos2d::__String::typeinfo,0);
          if (this == (__String *)0x0) {
            lVar3 = __dynamic_cast(lVar7,&cocos2d::Ref::typeinfo,&cocos2d::__Double::typeinfo,0);
            if (lVar3 == 0) {
              lVar3 = __dynamic_cast(lVar7,&cocos2d::Ref::typeinfo,&cocos2d::__Float::typeinfo,0);
              if (lVar3 == 0) {
                lVar3 = __dynamic_cast(lVar7,&cocos2d::Ref::typeinfo,&cocos2d::__Integer::typeinfo,0
                                      );
                if (lVar3 == 0) {
                  lVar7 = __dynamic_cast(lVar7,&cocos2d::Ref::typeinfo,&cocos2d::__Bool::typeinfo,0)
                  ;
                  if (lVar7 == 0) goto LAB_0089a840;
                  cocos2d::Value::Value(aVStack_78,*(bool *)(lVar7 + 0x30));
                  pVVar8 = *(Value **)(param_2 + 8);
                  if (pVVar8 < *(Value **)(param_2 + 0x10)) {
                    cocos2d::Value::Value(pVVar8,aVStack_78);
                    goto LAB_0089a9c4;
                  }
                  std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
                  __push_back_slow_path<cocos2d::Value>
                            ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)
                             param_2,aVStack_78);
                }
                else {
                  cocos2d::Value::Value(aVStack_78,*(int *)(lVar3 + 0x30));
                  pVVar8 = *(Value **)(param_2 + 8);
                  if (pVVar8 < *(Value **)(param_2 + 0x10)) {
                    cocos2d::Value::Value(pVVar8,aVStack_78);
                    goto LAB_0089a9c4;
                  }
                  std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
                  __push_back_slow_path<cocos2d::Value>
                            ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)
                             param_2,aVStack_78);
                }
              }
              else {
                cocos2d::Value::Value(aVStack_78,*(float *)(lVar3 + 0x30));
                pVVar8 = *(Value **)(param_2 + 8);
                if (pVVar8 < *(Value **)(param_2 + 0x10)) {
                  cocos2d::Value::Value(pVVar8,aVStack_78);
                  goto LAB_0089a9c4;
                }
                std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
                __push_back_slow_path<cocos2d::Value>
                          ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)param_2,
                           aVStack_78);
              }
            }
            else {
              cocos2d::Value::Value(aVStack_78,*(double *)(lVar3 + 0x30));
              pVVar8 = *(Value **)(param_2 + 8);
              if (pVVar8 < *(Value **)(param_2 + 0x10)) {
                cocos2d::Value::Value(pVVar8,aVStack_78);
                goto LAB_0089a9c4;
              }
              std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
              __push_back_slow_path<cocos2d::Value>
                        ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)param_2,
                         aVStack_78);
            }
          }
          else {
            pcVar2 = (char *)cocos2d::__String::getCString(this);
            cocos2d::Value::Value(aVStack_78,pcVar2);
            pVVar8 = *(Value **)(param_2 + 8);
            if (pVVar8 < *(Value **)(param_2 + 0x10)) {
              cocos2d::Value::Value(pVVar8,aVStack_78);
LAB_0089a9c4:
              *(Value **)(param_2 + 8) = pVVar8 + 0x10;
            }
            else {
              std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
              __push_back_slow_path<cocos2d::Value>
                        ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)param_2,
                         aVStack_78);
            }
          }
          cocos2d::Value::~Value(aVStack_78);
        }
LAB_0089a840:
        plVar5 = *(long **)(param_1 + 0x30);
        lVar6 = lVar6 + 1;
      } while (lVar6 < *plVar5);
    }
    uVar4 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

