
/* v8::internal::FrameFunctionIterator::FindFirstNativeOrUserJavaScript() */

undefined8 __thiscall
v8::internal::FrameFunctionIterator::FindFirstNativeOrUserJavaScript(FrameFunctionIterator *this)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_8;
  
  uVar6 = **(ulong **)(this + 8);
  uVar5 = uVar6 & 0xffffffff00000000;
  uVar2 = *(uint *)((uVar5 | *(uint *)(uVar6 + 0xb)) + 0x1b);
  uVar3 = local_8;
  do {
    if ((uVar2 >> 5 & 1) != 0) {
      return 1;
    }
    uVar2 = *(uint *)((uVar5 | *(uint *)(uVar6 + 0xb)) + 0xf);
    local_8 = uVar5 | uVar2;
    if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(local_8 - 1)) == 0x5b) {
      puVar1 = (uint *)(local_8 + 0xb);
      local_8 = uVar5 | *puVar1;
      if ((*puVar1 & 1) != 0) goto LAB_00edb224;
LAB_00edb234:
      uVar6 = Script::IsUserJavaScript((Script *)&local_8);
      uVar3 = local_8;
      if ((uVar6 & 1) != 0) {
        return 1;
      }
    }
    else {
      if ((uVar2 & 1) == 0) goto LAB_00edb234;
LAB_00edb224:
      if ((int)local_8 != *(int *)((local_8 & 0xffffffff00000000) + 0xa0)) goto LAB_00edb234;
    }
    local_8 = uVar3;
    puVar4 = (ulong *)next(this);
    if (puVar4 == (ulong *)0x0) {
      *(undefined8 *)(this + 8) = 0;
      return 0;
    }
    *(ulong **)(this + 8) = puVar4;
    uVar6 = *puVar4;
    uVar5 = uVar6 & 0xffffffff00000000;
    uVar2 = *(uint *)((uVar5 | *(uint *)(uVar6 + 0xb)) + 0x1b);
    uVar3 = local_8;
  } while( true );
}

