
/* v8::internal::HeapEntry::Print(char const*, char const*, int, int) */

void __thiscall
v8::internal::HeapEntry::Print(HeapEntry *this,char *param_1,char *param_2,int param_3,int param_4)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  char acStack_a8 [64];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  base::OS::Print("%6zu @%6u %*c %s%s: ",*(undefined8 *)(this + 8),(ulong)*(uint *)(this + 0x20),
                  (ulong)(uint)param_4,0x20,param_1,param_2);
  pcVar3 = "/hidden/";
  switch(*(uint *)this & 0xf) {
  case 0:
    break;
  case 1:
    pcVar3 = "/array/";
    break;
  case 2:
    base::OS::Print("\"","/hidden/");
    pcVar3 = *(char **)(this + 0x18);
    cVar7 = *pcVar3;
    if (cVar7 != '\0') {
      do {
        pcVar3 = pcVar3 + 1;
        if (cVar7 == '\n') {
          base::OS::Print("\\n");
          cVar7 = *pcVar3;
        }
        else {
          base::OS::Print("%c");
          cVar7 = *pcVar3;
        }
      } while ((cVar7 != '\0') && ((long)pcVar3 - *(long *)(this + 0x18) < 0x29));
    }
    base::OS::Print("\"\n");
    if (param_3 == 1) goto LAB_0119d018;
    goto LAB_0119ce80;
  case 3:
    pcVar3 = "/object/";
    break;
  case 4:
    pcVar3 = "/code/";
    break;
  case 5:
    pcVar3 = "/closure/";
    break;
  case 6:
    pcVar3 = "/regexp/";
    break;
  case 7:
    pcVar3 = "/number/";
    break;
  case 8:
    pcVar3 = "/native/";
    break;
  case 9:
    pcVar3 = "/synthetic/";
    break;
  case 10:
    pcVar3 = "/concatenated string/";
    break;
  case 0xb:
    pcVar3 = "/sliced string/";
    break;
  case 0xc:
    pcVar3 = "/symbol/";
    break;
  case 0xd:
    pcVar3 = "/bigint/";
    break;
  default:
    pcVar3 = "???";
  }
  base::OS::Print("%s %.40s\n",pcVar3,*(undefined8 *)(this + 0x18));
  if (param_3 != 1) {
LAB_0119ce80:
    lVar8 = *(long *)(this + 0x10);
    if (*(uint *)this < 0x10) {
      puVar11 = *(undefined8 **)(lVar8 + 0x130);
      puVar12 = puVar11;
    }
    else {
      uVar1 = *(long *)(lVar8 + 0xf0) + (long)(int)((*(uint *)this >> 4) - 1);
      lVar9 = *(long *)(*(long *)(lVar8 + 0xd8) + (uVar1 / 0x66) * 8) + (uVar1 % 0x66) * 0x28;
      puVar11 = *(undefined8 **)(lVar8 + 0x130);
      puVar12 = (undefined8 *)
                (*(long *)(*(long *)(lVar9 + 0x10) + 0x130) + (ulong)*(uint *)(lVar9 + 4) * 8);
    }
    if (puVar11 + *(uint *)(this + 4) != puVar12) {
      do {
        puVar10 = (uint *)*puVar12;
        uVar6 = *puVar10 & 7;
        pcVar3 = "";
        pcVar4 = acStack_a8;
        switch(uVar6) {
        case 0:
          pcVar3 = "#";
          pcVar4 = *(char **)(puVar10 + 4);
          break;
        case 1:
          uVar6 = puVar10[4];
          pcVar5 = "%d";
          goto LAB_0119cfec;
        case 2:
          pcVar4 = *(char **)(puVar10 + 4);
          break;
        case 3:
          pcVar4 = *(char **)(puVar10 + 4);
          goto LAB_0119cfbc;
        case 4:
          SNPrintF(acStack_a8,0x40,"%d",puVar10[4]);
LAB_0119cfbc:
          pcVar3 = "$";
          break;
        case 5:
          pcVar3 = "^";
          pcVar4 = *(char **)(puVar10 + 4);
          break;
        case 6:
          pcVar3 = "w";
          pcVar4 = *(char **)(puVar10 + 4);
          break;
        default:
          pcVar5 = "!!! unknown edge type: %d ";
LAB_0119cfec:
          SNPrintF(acStack_a8,0x40,pcVar5,uVar6);
        }
        Print(*(HeapEntry **)(puVar10 + 2),pcVar3,pcVar4,param_3 + -1,param_4 + 2);
        puVar12 = puVar12 + 1;
      } while (puVar12 !=
               (undefined8 *)
               (*(long *)(*(long *)(this + 0x10) + 0x130) + (ulong)*(uint *)(this + 4) * 8));
    }
  }
LAB_0119d018:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

