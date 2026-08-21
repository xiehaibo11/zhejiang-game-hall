
/* cocos2d::Menu::alignItemsInColumns(int, std::__va_list) */

void __thiscall cocos2d::Menu::alignItemsInColumns(Menu *this,int param_1,long *param_3)

{
  int iVar1;
  long lVar2;
  Value *pVVar3;
  Value *pVVar4;
  int *piVar5;
  Value *local_60;
  Value *local_58;
  Value *pVStack_50;
  Value aVStack_48 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_58 = (Value *)0x0;
  pVStack_50 = (Value *)0x0;
  local_60 = (Value *)0x0;
  while (param_1 != 0) {
    while( true ) {
      cocos2d::Value::Value(aVStack_48,param_1);
      pVVar3 = local_58;
      if (local_58 < pVStack_50) {
        cocos2d::Value::Value(local_58,aVStack_48);
        local_58 = pVVar3 + 0x10;
      }
      else {
        std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
        __push_back_slow_path<cocos2d::Value>
                  ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)&local_60,
                   aVStack_48);
      }
      cocos2d::Value::~Value(aVStack_48);
      iVar1 = (int)param_3[3];
      if ((-1 < iVar1) || (*(int *)(param_3 + 3) = iVar1 + 8, 0 < iVar1 + 8)) break;
      param_1 = *(int *)(param_3[1] + (long)iVar1);
      if (param_1 == 0) goto LAB_00f1bc9c;
    }
    piVar5 = (int *)*param_3;
    *param_3 = (long)(piVar5 + 2);
    param_1 = *piVar5;
  }
LAB_00f1bc9c:
  alignItemsInColumnsWithArray(this,(vector *)&local_60);
  pVVar4 = local_60;
  pVVar3 = local_58;
  if (local_60 != (Value *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f1b56c with catch @ 00f1bcb8
                        */
    while (pVVar3 != pVVar4) {
      cocos2d::Value::~Value(pVVar3 + -0x10);
      pVVar3 = pVVar3 + -0x10;
    }
    local_58 = pVVar4;
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f1b528 with catch @ 00f1bd04
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

