
/* v8::internal::IC::SetCache(v8::internal::Handle<v8::internal::Name>,
   v8::internal::MaybeObjectHandle const&) */

void __thiscall v8::internal::IC::SetCache(IC *this,ulong *param_2,MaybeObjectHandle *param_3)

{
  IC *pIVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *puVar8;
  
  switch(*(undefined4 *)(this + 0x18)) {
  case 0:
  case 6:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 1:
    uVar3 = *(uint *)(this + 0x1c);
    if ((uVar3 | 1) != 7) {
      uVar6 = *(undefined8 *)(this + 0x20);
      puVar8 = (ulong *)0x0;
      if (uVar3 < 0xf) {
        uVar3 = 1 << (ulong)(uVar3 & 0x1f);
        uVar4 = uVar3 & 0x6308;
joined_r0x014fc5c4:
        puVar8 = param_2;
        if ((uVar4 == 0) && (puVar8 = (ulong *)0x0, (uVar3 & 0x402) != 0)) break;
      }
LAB_014fc5cc:
      FeedbackNexus::ConfigureMonomorphic((FeedbackNexus *)(this + 0x50),puVar8,uVar6,param_3);
      goto LAB_014fc688;
    }
    break;
  case 2:
  case 3:
    uVar3 = *(uint *)(this + 0x1c);
    if ((uVar3 | 1) != 7) {
      if ((uVar3 == 10) || (uVar3 == 1)) {
        uVar6 = *(undefined8 *)(this + 0x20);
        puVar8 = (ulong *)0x0;
        if (uVar3 < 0xb) {
          uVar3 = 1 << (ulong)(uVar3 & 0x1f);
          uVar4 = uVar3 & 0x308;
          goto joined_r0x014fc5c4;
        }
        goto LAB_014fc5cc;
      }
      goto switchD_014fc580_caseD_4;
    }
    break;
  case 4:
switchD_014fc580_caseD_4:
    uVar7 = UpdatePolymorphicIC(this,param_2,param_3);
    if ((uVar7 & 1) != 0) {
      return;
    }
    if (((0xe < *(uint *)(this + 0x1c)) ||
        ((1 << (ulong)(*(uint *)(this + 0x1c) & 0x1f) & 0x6308U) == 0)) ||
       (*(int *)(this + 0x18) == 3)) {
      CopyICToMegamorphicCache(this,param_2);
    }
    uVar7 = *param_2;
    if ((uVar7 & 1) == 0) {
      bVar5 = false;
    }
    else {
      bVar5 = *(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0x41;
    }
    FeedbackNexus::ConfigureMegamorphic((FeedbackNexus *)(this + 0x50),bVar5);
    this[0x10] = (IC)0x1;
    pIVar1 = this + 0x58;
    if (*(IC **)(this + 0x50) != (IC *)0x0) {
      pIVar1 = *(IC **)(this + 0x50);
    }
    OnFeedbackChanged(*(undefined8 *)(this + 8),*(undefined8 *)pIVar1);
  case 5:
    if (*(int *)(this + 0x1c) != 9) {
      puVar2 = (undefined8 *)(*(long *)(this + 8) + 0x9560);
      if (3 < *(int *)(this + 0x1c) - 5U) {
        puVar2 = (undefined8 *)(*(long *)(this + 8) + 0x9568);
      }
      puVar8 = *(ulong **)(param_3 + 8);
      if (*(int *)param_3 == 0) {
        if (puVar8 == (ulong *)0x0) goto LAB_014fc7a8;
        uVar7 = *puVar8 | 2;
      }
      else {
        if (puVar8 == (ulong *)0x0) {
LAB_014fc7a8:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","(location_) != nullptr",**(undefined8 **)(this + 0x20));
        }
        uVar7 = *puVar8;
      }
      StubCache::Set((StubCache *)*puVar2,*param_2,**(undefined8 **)(this + 0x20),uVar7);
    }
    this[0x10] = (IC)0x1;
switchD_014fc580_default:
    return;
  default:
    goto switchD_014fc580_default;
  }
  FeedbackNexus::ConfigureHandlerMode((FeedbackNexus *)(this + 0x50),param_3);
LAB_014fc688:
  this[0x10] = (IC)0x1;
  pIVar1 = this + 0x58;
  if (*(IC **)(this + 0x50) != (IC *)0x0) {
    pIVar1 = *(IC **)(this + 0x50);
  }
  OnFeedbackChanged(*(undefined8 *)(this + 8),*(undefined8 *)pIVar1);
  return;
}

