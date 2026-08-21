
/* cocostudio::ActionFrame::setEasingParameter(std::__ndk1::vector<float,
   std::__ndk1::allocator<float> >&) */

void __thiscall cocostudio::ActionFrame::setEasingParameter(ActionFrame *this,vector *param_1)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  
  puVar2 = *(undefined4 **)(this + 0x38);
  *(undefined4 **)(this + 0x40) = puVar2;
  lVar1 = *(long *)param_1;
  if (*(long *)(param_1 + 8) != lVar1) {
    lVar3 = 0;
    uVar4 = 1;
    while( true ) {
      if (puVar2 == *(undefined4 **)(this + 0x48)) {
        std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
        __push_back_slow_path<float_const&>
                  ((vector<float,std::__ndk1::allocator<float>> *)(this + 0x38),
                   (float *)(lVar1 + lVar3));
        lVar1 = *(long *)param_1;
      }
      else {
        *puVar2 = *(undefined4 *)(lVar1 + lVar3);
        *(undefined4 **)(this + 0x40) = puVar2 + 1;
      }
      if ((ulong)(*(long *)(param_1 + 8) - lVar1 >> 2) <= uVar4) break;
      puVar2 = *(undefined4 **)(this + 0x40);
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 4;
    }
  }
  return;
}

