
/* v8::internal::StringStream::PrintUsingMap(v8::internal::JSObject) */

void __thiscall v8::internal::StringStream::PrintUsingMap(StringStream *this,ulong param_2)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong local_70;
  ulong local_68;
  
  uVar13 = param_2 & 0xffffffff00000000;
  uVar14 = uVar13 | *(uint *)(param_2 - 1);
  uVar15 = (ulong)(*(uint *)(uVar14 + 0xb) >> 10) & 0x3ff;
  if ((int)uVar15 != 0) {
    uVar17 = uVar13 | *(uint *)(uVar14 + 0x17);
    uVar7 = uVar13 | 7;
    uVar16 = 0;
    do {
      uVar8 = uVar16 * 0xc00000000 + 0x1000000000 >> 0x20;
      uVar12 = uVar8 | 3;
      if ((*(uint *)(uVar12 + uVar17) >> 2 & 1) == 0) {
        uVar5 = *(uint *)((uVar17 - 1) + uVar8);
        local_70 = uVar13 | uVar5;
        if ((uVar5 & 1) == 0) {
LAB_011f4404:
          iVar6 = 3;
LAB_011f4408:
          uVar5 = iVar6 - 0x12;
          do {
            while( true ) {
              iVar6 = *(int *)(this + 0xc);
              uVar1 = *(uint *)(this + 0x10);
              if (iVar6 - uVar1 != 1) break;
LAB_011f4434:
              bVar2 = 0xfffffffe < uVar5;
              uVar5 = uVar5 + 1;
              if (bVar2) goto LAB_011f44ec;
            }
            if (uVar1 != iVar6 - 2U) {
              lVar3 = *(long *)(this + 0x18);
LAB_011f4414:
              *(undefined1 *)(lVar3 + (ulong)uVar1) = 0x20;
              *(undefined1 *)(*(long *)(this + 0x18) + (ulong)(*(int *)(this + 0x10) + 1)) = 0;
              *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
              goto LAB_011f4434;
            }
            local_68 = CONCAT44(local_68._4_4_,iVar6);
            lVar3 = (**(code **)(**(long **)this + 0x18))(*(long **)this,&local_68);
            uVar1 = *(uint *)(this + 0xc);
            if (uVar1 < (uint)local_68) {
              uVar1 = *(uint *)(this + 0x10);
              *(uint *)(this + 0xc) = (uint)local_68;
              *(long *)(this + 0x18) = lVar3;
              goto LAB_011f4414;
            }
            *(uint *)(this + 0x10) = uVar1 - 1;
            *(undefined1 *)(*(long *)(this + 0x18) + (ulong)(uVar1 - 5)) = 0x2e;
            *(undefined1 *)(*(long *)(this + 0x18) + (ulong)(*(int *)(this + 0x10) - 3)) = 0x2e;
            *(undefined1 *)(*(long *)(this + 0x18) + (ulong)(*(int *)(this + 0x10) - 2)) = 0x2e;
            *(undefined1 *)(*(long *)(this + 0x18) + (ulong)(*(int *)(this + 0x10) - 1)) = 10;
            *(undefined1 *)(*(long *)(this + 0x18) + (ulong)*(uint *)(this + 0x10)) = 0;
            bVar2 = uVar5 != 0xffffffff;
            uVar5 = uVar5 + 1;
          } while (bVar2);
LAB_011f44ec:
          if ((local_70 & 1) == 0) {
LAB_011f4520:
            Object::ShortPrint((Object *)&local_70,(__sFILE *)waitpid);
          }
          else {
LAB_011f44f4:
            if (0x3f < *(ushort *)
                        ((local_70 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_70 - 1)))
            goto LAB_011f4520;
            Put(this,local_70,0,*(undefined4 *)(local_70 + 7));
          }
          uVar4 = __strlen_chk(": ",3);
          Add(this,": ",uVar4,0,0);
          uVar5 = *(int *)((uVar12 | uVar13) + (ulong)*(uint *)(uVar14 + 0x17)) >> 1;
          uVar1 = uVar5 >> 0x13 & 0x3ff;
          iVar6 = (uint)*(byte *)(uVar14 + 3) - (uint)*(byte *)(uVar14 + 4);
          if ((int)uVar1 < iVar6) {
            uVar8 = (ulong)*(byte *)(uVar14 + 4) << 0x1c;
            iVar11 = (uVar1 + *(byte *)(uVar14 + 4)) * 4;
          }
          else {
            iVar11 = (uVar1 - iVar6) * 4 + 8;
            uVar8 = 0x20000000;
          }
          uVar5 = uVar5 >> 6 & 7;
          local_68 = CONCAT71(local_68._1_7_,(char)uVar5);
          if (4 < uVar5) {
            uVar4 = Representation::Mnemonic((Representation *)&local_68);
            PrintF("%s\n",uVar4);
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          uVar9 = (ulong)iVar11;
          uVar12 = (ulong)((int)uVar1 < iVar6) << 0xd | (long)iVar6 << 0x10 | uVar9;
          if (((uint)uVar12 >> 0xd & 1) == 0) {
            uVar5 = *(uint *)(param_2 + 3);
            if (((uVar5 & 1) == 0) || (uVar5 == *(uint *)(uVar13 + 0x168))) {
              uVar10 = *(ulong *)(uVar13 + 0x3b8);
            }
            else {
              uVar10 = uVar13 | uVar5;
            }
            uVar5 = *(uint *)(((uVar9 & 0x1ffc) - ((uVar12 | uVar8) >> 0x1a & 0x7c)) + uVar10 + 7);
          }
          else {
            uVar5 = *(uint *)((param_2 - 1) + (uVar9 & 0x1fff));
          }
          uVar4 = __strlen_chk(&DAT_019b01e7,4);
          local_68 = uVar13 | uVar5;
          Add(this,&DAT_019b01e7,uVar4,&local_68,1);
        }
        else if ((*(ushort *)(uVar7 + *(uint *)(local_70 - 1)) < 0x40) ||
                (*(short *)(uVar7 + *(uint *)(local_70 - 1)) == 0x42)) {
          if (0x3f < *(ushort *)(uVar7 + *(uint *)(local_70 - 1))) goto LAB_011f4404;
          iVar6 = *(int *)(local_70 + 7);
          if (iVar6 < 0x12) goto LAB_011f4408;
          if ((uVar5 & 1) != 0) goto LAB_011f44f4;
          goto LAB_011f4520;
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar15);
  }
  return;
}

