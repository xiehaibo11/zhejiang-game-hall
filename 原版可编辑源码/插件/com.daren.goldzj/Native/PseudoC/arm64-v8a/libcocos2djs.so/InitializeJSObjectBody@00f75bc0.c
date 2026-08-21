
/* v8::internal::Factory::InitializeJSObjectBody(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::Handle<v8::internal::Map>, int) */

void __thiscall
v8::internal::Factory::InitializeJSObjectBody
          (Factory *this,long *param_2,long *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long local_28;
  long local_8;
  
  lVar8 = *param_3;
  iVar5 = (int)param_4;
  if (iVar5 != (uint)*(byte *)(lVar8 + 3) * 4) {
    lVar7 = *param_2;
    uVar4 = *(uint *)(lVar8 + 0xb) >> 0x1d;
    lVar6 = 0x88;
    if (uVar4 == 0) {
      lVar6 = 0xa0;
    }
    iVar1 = *(int *)(this + 0xa0);
    iVar2 = *(int *)(this + lVar6);
    lVar6 = (ulong)*(byte *)(lVar8 + 3) * 4;
    if (iVar2 != iVar1) {
      bVar3 = *(byte *)(lVar8 + 5);
      uVar9 = (uint)bVar3;
      if (2 < bVar3) {
        uVar9 = (uint)*(byte *)(lVar8 + 3) - (uint)bVar3;
      }
      lVar8 = lVar6 + (long)(int)uVar9 * -4;
      if (iVar5 < (int)lVar8) {
        param_4 = (long)iVar5;
        do {
          *(int *)(lVar7 + -1 + param_4) = iVar1;
          param_4 = param_4 + 4;
        } while (param_4 < lVar8);
      }
    }
    if ((int)param_4 < (int)lVar6) {
      lVar8 = (long)(int)param_4;
      do {
        *(int *)(lVar7 + -1 + lVar8) = iVar2;
        lVar8 = lVar8 + 4;
      } while (lVar8 < lVar6);
    }
    if (uVar4 != 0) {
      local_28 = *param_3;
      local_8 = Map::FindRootMap((Map *)&local_28,(Isolate *)this);
      if ((*(uint *)(local_8 + 0xb) >> 0x1d != 0) &&
         (uVar4 = *(uint *)(local_8 + 0xb),
         *(uint *)(local_8 + 0xb) =
              uVar4 + 0xe0000000 & 0xe0000000 | *(uint *)(local_8 + 0xb) & 0x1fffffff,
         uVar4 >> 0x1d == 1)) {
        Map::CompleteInobjectSlackTracking((Map *)&local_8,(Isolate *)this);
      }
    }
  }
  return;
}

