
/* void std::__ndk1::vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,
   std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>
   >::__push_back_slow_path<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>(cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam&&)
    */

void __thiscall
std::__ndk1::
vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>
::__push_back_slow_path<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>
          (vector<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::experimental::AudioPlayerProvider::PreloadCallbackParam>>
           *this,PreloadCallbackParam *param_1)

{
  long lVar1;
  void *pvVar2;
  PreloadCallbackParam *pPVar3;
  long *plVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  
  plVar11 = *(long **)this;
  plVar8 = *(long **)(this + 8);
  lVar10 = (long)plVar8 - (long)plVar11 >> 6;
  uVar12 = lVar10 + 1;
  if (uVar12 >> 0x3a != 0) {
LAB_00e6ea40:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((ulong)(*(long *)(this + 0x10) - (long)plVar11 >> 6) < 0x1ffffffffffffff) {
    uVar6 = *(long *)(this + 0x10) - (long)plVar11 >> 5;
    if (uVar12 <= uVar6) {
      uVar12 = uVar6;
    }
    if (uVar12 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_00e6ea54;
    }
    if (uVar12 >> 0x3a != 0) goto LAB_00e6ea40;
  }
  else {
    uVar12 = 0x3ffffffffffffff;
  }
  pvVar2 = operator_new(uVar12 << 6);
LAB_00e6ea54:
  pPVar3 = *(PreloadCallbackParam **)(param_1 + 0x20);
  pvVar9 = (void *)((long)pvVar2 + lVar10 * 0x40);
  if (pPVar3 == (PreloadCallbackParam *)0x0) {
    *(undefined8 *)((long)pvVar9 + 0x20) = 0;
  }
  else if (param_1 == pPVar3) {
    *(void **)((long)pvVar2 + lVar10 * 0x40 + 0x20) = pvVar9;
    (**(code **)(*(long *)pPVar3 + 0x18))(pPVar3,pvVar9);
    plVar11 = *(long **)this;
    plVar8 = *(long **)(this + 8);
  }
  else {
    *(PreloadCallbackParam **)((long)pvVar2 + lVar10 * 0x40 + 0x20) = pPVar3;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  lVar1 = (long)pvVar9 + 0x40;
  *(PreloadCallbackParam *)((long)pvVar2 + lVar10 * 0x40 + 0x30) = param_1[0x30];
  if (plVar8 != plVar11) {
    lVar10 = 0;
    do {
      lVar7 = *(long *)((long)plVar8 + lVar10 + -0x20);
      if (lVar7 == 0) {
        *(undefined8 *)((long)pvVar9 + lVar10 + -0x20) = 0;
      }
      else if ((long)plVar8 + lVar10 + -0x40 == lVar7) {
        *(long *)((long)pvVar9 + lVar10 + -0x20) = (long)pvVar9 + lVar10 + -0x40;
        plVar4 = *(long **)((long)plVar8 + lVar10 + -0x20);
        (**(code **)(*plVar4 + 0x18))(plVar4,(long)pvVar9 + lVar10 + -0x40);
      }
      else {
        *(long *)((long)pvVar9 + lVar10 + -0x20) = lVar7;
        *(undefined8 *)((long)plVar8 + lVar10 + -0x20) = 0;
      }
      lVar7 = lVar10 + -0x40;
      *(undefined1 *)((long)pvVar9 + lVar10 + -0x10) =
           *(undefined1 *)((long)plVar8 + lVar10 + -0x10);
      lVar10 = lVar7;
    } while ((long)plVar11 - (long)plVar8 != lVar7);
    plVar8 = *(long **)this;
    pvVar9 = (void *)((long)pvVar9 + lVar7);
  }
  plVar11 = *(long **)(this + 8);
  *(void **)this = pvVar9;
  *(long *)(this + 8) = lVar1;
  *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar12 * 0x40);
joined_r0x00e6eb48:
  if (plVar11 == plVar8) {
    if (plVar8 != (long *)0x0) {
      operator_delete(plVar8);
      return;
    }
    return;
  }
  plVar4 = (long *)plVar11[-4];
  plVar11 = plVar11 + -8;
  if (plVar11 != plVar4) goto code_r0x00e6eb90;
  pcVar5 = *(code **)(*plVar4 + 0x20);
  goto LAB_00e6eb74;
code_r0x00e6eb90:
  if (plVar4 != (long *)0x0) {
    pcVar5 = *(code **)(*plVar4 + 0x28);
LAB_00e6eb74:
    (*pcVar5)();
  }
  goto joined_r0x00e6eb48;
}

