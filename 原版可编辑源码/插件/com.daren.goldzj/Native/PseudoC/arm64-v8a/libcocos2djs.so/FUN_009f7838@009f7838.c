
void FUN_009f7838(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
                    /* catch() { ... } // from try @ 009f7524 with catch @ 009f7844
                       catch() { ... } // from try @ 009f765c with catch @ 009f7844 */
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(lVar4 + 0x118);
  if (lVar1 != *(long *)(lVar4 + 0x120)) {
    plVar3 = *(long **)(param_1 + 0x40);
                    /* catch() { ... } // from try @ 009f74f4 with catch @ 009f785c
                       catch() { ... } // from try @ 009f75d0 with catch @ 009f785c */
    if (plVar3 == (long *)0x0) {
      *(undefined8 *)(lVar1 + 0x20) = 0;
    }
    else if ((long *)(param_1 + 0x20) == plVar3) {
      *(long *)(lVar1 + 0x20) = lVar1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f7910 with catch @ 009f78a0
                       catch(type#1 @ 00000000) { ... } // from try @ 009f7940 with catch @ 009f78a0
                       catch(type#1 @ 00000000) { ... } // from try @ 009f7970 with catch @ 009f78a0
                       catch(type#1 @ 00000000) { ... } // from try @ 009f7998 with catch @ 009f78a0
                       catch(type#1 @ 00000000) { ... } // from try @ 009f79c4 with catch @ 009f78a0
                        */
      (**(code **)(**(long **)(param_1 + 0x40) + 0x18))(*(long **)(param_1 + 0x40),lVar1);
    }
    else {
      uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
      *(undefined8 *)(lVar1 + 0x20) = uVar2;
    }
    *(long *)(lVar4 + 0x118) = *(long *)(lVar4 + 0x118) + 0x30;
    return;
  }
  std::__ndk1::
  vector<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>::
  __push_back_slow_path<std::__ndk1::function<void()>const&>
            ((vector<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
              *)(lVar4 + 0x110),(function *)(param_1 + 0x20));
  return;
}

