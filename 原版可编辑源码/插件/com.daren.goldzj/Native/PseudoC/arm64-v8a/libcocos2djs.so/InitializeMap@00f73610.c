
/* v8::internal::Factory::InitializeMap(v8::internal::Map, v8::internal::InstanceType, int,
   v8::internal::ElementsKind, int) */

ulong __thiscall
v8::internal::Factory::InitializeMap
          (Factory *this,ulong param_2,undefined2 param_3,uint param_4,byte param_5,int param_6)

{
  uint uVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  Logger *this_00;
  ulong uVar5;
  ulong local_38;
  
  *(undefined2 *)(param_2 + 7) = param_3;
  *(undefined4 *)(param_2 + 0xf) = *(undefined4 *)(this + 0xb0);
  *(undefined4 *)(param_2 + 0x13) = *(undefined4 *)(this + 0xb0);
  local_38 = param_2;
  if ((param_4 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsAligned(value, kTaggedSize)");
  }
  if ((uint)((int)param_4 >> 2) < 0x100) {
    *(char *)(param_2 + 3) = (char)(param_4 >> 2);
    if (*(ushort *)(param_2 + 7) < 0xaa) {
      *(undefined1 *)(param_2 + 4) = 0;
      *(undefined4 *)(param_2 + 0x1f) = 0;
    }
    else {
      uVar1 = param_4 + 3;
      if (-1 < (int)param_4) {
        uVar1 = param_4;
      }
      uVar1 = ((int)uVar1 >> 2) - param_6;
      if (0xff < uVar1) goto LAB_00f73878;
      *(char *)(param_2 + 4) = (char)uVar1;
      uVar5 = *(ulong *)(this + 0xe98);
      *(int *)(param_2 + 0x1f) = (int)uVar5;
      if ((uVar5 & 1) != 0) {
        uVar3 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar3 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(param_2,param_2 + 0x1f,uVar5);
          uVar3 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar3 & 0x18) != 0) && ((*(byte *)((param_2 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(param_2,param_2 + 0x1f,uVar5);
        }
      }
    }
    *(undefined4 *)(param_2 + 0x1b) = *(undefined4 *)(this + 0x420);
    *(undefined4 *)(local_38 + 0x23) = 0;
    if (*(ushort *)(local_38 + 7) < 0xaa) {
      if (param_6 != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","0 == value");
      }
      *(undefined1 *)(local_38 + 5) = 0;
    }
    else {
      if (param_6 < 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","0 <= value");
      }
      uVar1 = (((uint)*(byte *)(local_38 + 3) - param_6) - (uint)*(byte *)(local_38 + 4)) +
              (uint)*(byte *)(local_38 + 4);
      if (0xff < uVar1) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","static_cast<unsigned>(value) <= 255");
      }
      *(char *)(local_38 + 5) = (char)uVar1;
    }
    Map::SetInstanceDescriptors((Map *)&local_38,this,*(undefined8 *)(this + 0x170),0);
    uVar1 = Map::GetVisitorId(local_38);
    if (0xff < uVar1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","static_cast<unsigned>(id) < 256");
    }
    *(char *)(local_38 + 6) = (char)uVar1;
    *(undefined1 *)(local_38 + 9) = 0;
    *(undefined1 *)(local_38 + 10) = 1;
    *(undefined4 *)(local_38 + 0xb) = 0x84003ff;
    if (param_5 < 0x1c) {
      *(byte *)(local_38 + 10) = *(byte *)(local_38 + 10) & 7 | param_5 << 3;
      lVar4 = *(long *)(this + 0x9520);
      if (*(char *)(lVar4 + 0x17d8) == '\0') {
        *(char *)(lVar4 + 0x17d8) = '\x01';
        piVar2 = (int *)StatsCounterBase::FindLocationInStatsTable
                                  ((StatsCounterBase *)(lVar4 + 0x17c0));
        *(int **)(lVar4 + 0x17d0) = piVar2;
      }
      else {
        piVar2 = *(int **)(lVar4 + 0x17d0);
      }
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar2 + 1;
      }
      if (FLAG_trace_maps != '\0') {
        this_00 = *(Logger **)(this + 0x9558);
        uVar5 = Logger::is_logging(this_00);
        if ((uVar5 & 1) != 0) {
          Logger::MapCreate(this_00,local_38);
        }
      }
      return local_38;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","static_cast<int>(elements_kind) < kElementsKindCount");
  }
LAB_00f73878:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","static_cast<unsigned>(value) < 256");
}

