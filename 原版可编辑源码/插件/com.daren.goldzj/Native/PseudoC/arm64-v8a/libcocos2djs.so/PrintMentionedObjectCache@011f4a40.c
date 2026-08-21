
/* v8::internal::StringStream::PrintMentionedObjectCache(v8::internal::Isolate*) */

void __thiscall
v8::internal::StringStream::PrintMentionedObjectCache(StringStream *this,Isolate *param_1)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  double dVar10;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  
  if (*(int *)(this + 8) != 0) {
    plVar7 = *(long **)(param_1 + 47000);
    uVar4 = __strlen_chk(&DAT_019e2557,0x40);
    Add(this,&DAT_019e2557,uVar4,0,0);
    lVar5 = *plVar7;
    if (plVar7[1] != lVar5) {
      uVar8 = 0;
      do {
        uVar9 = **(ulong **)(lVar5 + uVar8 * 8);
        local_68 = uVar9;
        uVar4 = __strlen_chk(" #%d# %p: ",0xb);
        local_60 = CONCAT44(local_60._4_4_,(int)uVar8);
        local_58 = uVar9;
        Add(this," #%d# %p: ",uVar4,&local_60,2);
        Object::ShortPrint((Object *)&local_68,this);
        uVar4 = __strlen_chk(&DAT_018938a8,2);
        Add(this,&DAT_018938a8,uVar4,0,0);
        uVar6 = local_68 & 0xffffffff00000000;
        uVar9 = uVar6 | 7;
        sVar3 = *(short *)(uVar9 + *(uint *)(local_68 - 1));
        if (*(ushort *)(uVar9 + *(uint *)(local_68 - 1)) < 0xaa) {
          if (sVar3 == 0x85) {
            PrintByteArray(this);
          }
          else if (*(ushort *)(uVar9 + *(uint *)(local_68 - 1)) - 0x76 < 0xf) {
            uVar9 = local_68;
            uVar2 = *(int *)(local_68 + 3) >> 1;
            goto LAB_011f4c4c;
          }
        }
        else {
          if (sVar3 == 0x411) {
            uVar2 = *(uint *)(local_68 + 0xb);
            uVar4 = __strlen_chk("           value(): %o\n",0x18);
            local_60 = uVar6 | uVar2;
            Add(this,"           value(): %o\n",uVar4,&local_60,1);
          }
          PrintUsingMap(this,local_68);
          uVar6 = local_68 & 0xffffffff00000000;
          if ((*(short *)((uVar6 | 7) + (ulong)*(uint *)(local_68 - 1)) == 0x423) &&
             ((*(byte *)((uVar6 | 10) + (ulong)*(uint *)(local_68 - 1)) & 0xf0) == 0x10)) {
            uVar9 = uVar6 | *(uint *)(local_68 + 7);
            uVar2 = *(uint *)(local_68 + 0xb);
            uVar1 = *(int *)(uVar9 + 3) >> 1;
            if ((uVar2 & 1) == 0) {
              dVar10 = (double)((int)uVar2 >> 1);
            }
            else {
              dVar10 = *(double *)((uVar6 | uVar2) + 3);
            }
            uVar2 = (int)dVar10;
            if (uVar1 <= (uint)(int)dVar10) {
              uVar2 = uVar1;
            }
LAB_011f4c4c:
            PrintFixedArray(this,uVar9,uVar2);
          }
        }
        lVar5 = *plVar7;
        uVar8 = uVar8 + 1;
      } while (uVar8 < (ulong)(plVar7[1] - lVar5 >> 3));
    }
  }
  return;
}

