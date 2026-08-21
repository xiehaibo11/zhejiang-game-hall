
/* v8::internal::JSObject::JSObjectShortPrint(v8::internal::StringStream*) */

void __thiscall v8::internal::JSObject::JSObjectShortPrint(JSObject *this,StringStream *param_1)

{
  uint *puVar1;
  Heap *pHVar2;
  char *pcVar3;
  uint uVar4;
  short sVar5;
  ulong uVar6;
  undefined8 uVar7;
  char **ppcVar8;
  char **ppcVar9;
  undefined8 uVar10;
  uint *puVar11;
  int iVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  double dVar18;
  char *local_60;
  ulong uStack_58;
  
  ppcVar8 = &local_60;
  ppcVar9 = &local_60;
  uVar14 = *(ulong *)this;
  uVar15 = uVar14 & 0xffffffff00000000;
  switch(*(undefined2 *)((uVar15 | *(uint *)(uVar14 - 1)) + 7)) {
  case 0x417:
    pcVar13 = "<JSGenerator>";
    uVar7 = 0xe;
    break;
  case 0x418:
    pcVar13 = "<JSAsyncFunctionObject>";
    uVar7 = 0x18;
    break;
  case 0x419:
    pcVar13 = "<JS AsyncGenerator>";
    uVar7 = 0x14;
    break;
  default:
    puVar11 = (uint *)(uVar14 - 1);
    pHVar2 = (Heap *)(uVar15 + 0x8850);
    uVar16 = uVar15 | *puVar11;
    uVar14 = uVar15 | *(uint *)(uVar16 + 0x13);
    if ((*(uint *)(uVar16 + 0x13) & 1) != 0) {
      do {
        if (*(short *)((uVar15 | 7) + (ulong)*(uint *)(uVar14 - 1)) != 0xa2) break;
        puVar1 = (uint *)(uVar14 + 0x13);
        uVar14 = uVar15 | *puVar1;
      } while ((*puVar1 & 1) != 0);
    }
    if ((uVar14 & 1) == 0) {
LAB_010d31f0:
      sVar5 = *(short *)((uVar15 | 7) + (ulong)*puVar11);
      if ((uVar14 & 1) != 0) {
        uVar15 = uVar14 & 0xffffffff00000000;
        uVar17 = uVar15 | 7;
        if (*(short *)(uVar17 + *(uint *)(uVar14 - 1)) == 0x439) {
          uVar6 = Heap::Contains(pHVar2,uVar15 | *(uint *)(uVar14 + 0xb));
          if ((uVar6 & 1) == 0) {
            uVar7 = __strlen_chk("!!!INVALID SHARED ON CONSTRUCTOR!!!",0x24);
            StringStream::Add(param_1,"!!!INVALID SHARED ON CONSTRUCTOR!!!",uVar7,0,0);
          }
          else {
            uVar14 = uVar15 | *(uint *)(uVar14 + 0xb);
            uVar4 = *(uint *)(uVar14 + 7);
            pcVar13 = (char *)(uVar15 | uVar4);
            if (((uVar4 & 1) == 0) || (*(short *)(uVar17 + *(uint *)(pcVar13 + -1)) != 0x83)) {
              if (uVar4 != 0) goto joined_r0x010d367c;
LAB_010d36b4:
              pcVar13 = *(char **)(uVar15 + 200);
            }
            else {
              local_60 = pcVar13;
              uVar6 = ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_60);
              if ((uVar6 & 1) == 0) goto LAB_010d36b4;
              uVar4 = *(uint *)(uVar14 + 7);
              pcVar13 = (char *)(uVar15 | uVar4);
joined_r0x010d367c:
              if (((uVar4 & 1) != 0) && (*(short *)(uVar17 + *(uint *)(pcVar13 + -1)) == 0x83)) {
                local_60 = pcVar13;
                uVar14 = ScopeInfo::HasFunctionName((ScopeInfo *)&local_60);
                if ((uVar14 & 1) == 0) goto LAB_010d36b4;
                local_60 = pcVar13;
                pcVar13 = (char *)ScopeInfo::FunctionName((ScopeInfo *)&local_60);
              }
            }
            if (0 < *(int *)(pcVar13 + 7)) {
              pcVar3 = "<GlobalObject ";
              if (sVar5 != 0xab) {
                pcVar3 = "<";
              }
              uVar7 = __strlen_chk(pcVar3,0xf);
              StringStream::Add(param_1,pcVar3,uVar7,0,0);
              StringStream::Put(param_1,pcVar13);
              pcVar13 = " %smap = %p";
              pcVar3 = "";
              if ((*(uint *)(uVar16 + 0xb) & 0x1000000) != 0) {
                pcVar3 = "deprecated-";
              }
              uVar7 = __strlen_chk(" %smap = %p",0xc);
              uVar10 = 2;
              ppcVar9 = &local_60;
              local_60 = pcVar3;
              uStack_58 = uVar16;
              goto LAB_010d3794;
            }
          }
        }
        else if (*(short *)(uVar17 + *(uint *)(uVar14 - 1)) == 0x4e) {
          pcVar13 = "<RemoteObject>";
          uVar7 = 0xf;
          goto LAB_010d3624;
        }
      }
      pcVar13 = "<JS%sObject";
      pcVar3 = "Global ";
      if (sVar5 != 0xab) {
        pcVar3 = "";
      }
      uVar7 = __strlen_chk("<JS%sObject",0xc);
      uVar10 = 1;
      local_60 = pcVar3;
    }
    else {
      uVar15 = Heap::Contains(pHVar2,uVar14);
      if ((uVar15 & 1) != 0) {
        uVar15 = *(ulong *)this & 0xffffffff00000000;
        puVar11 = (uint *)(*(ulong *)this - 1);
        goto LAB_010d31f0;
      }
      pcVar13 = "!!!INVALID CONSTRUCTOR!!!";
      uVar7 = 0x1a;
LAB_010d3624:
      uVar7 = __strlen_chk(pcVar13,uVar7);
      uVar10 = 0;
      ppcVar9 = (char **)(undefined1 *)0x0;
    }
LAB_010d3794:
    StringStream::Add(param_1,pcVar13,uVar7,ppcVar9,uVar10);
    if (*(short *)((*(ulong *)this & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*(ulong *)this - 1))
        == 0x411) {
      uVar7 = __strlen_chk(" value = ",10);
      StringStream::Add(param_1," value = ",uVar7,0,0);
      local_60 = (char *)(*(ulong *)this & 0xffffffff00000000 |
                         (ulong)*(uint *)(*(ulong *)this + 0xb));
      Object::ShortPrint((Object *)&local_60,param_1);
    }
LAB_010d3800:
    StringStream::Put(param_1,'>');
    return;
  case 0x41e:
    pcVar13 = "<JSWeakMap>";
    goto LAB_010d3288;
  case 0x41f:
    pcVar13 = "<JSWeakSet>";
LAB_010d3288:
    uVar7 = 0xc;
    break;
  case 0x423:
    uVar4 = *(uint *)(uVar14 + 0xb);
    if ((uVar4 & 1) == 0) {
      dVar18 = (double)((int)uVar4 >> 1);
LAB_010d35d0:
      iVar12 = (int)dVar18;
    }
    else {
      if (uVar4 != *(uint *)(uVar15 + 0xa0)) {
        dVar18 = *(double *)((uVar15 | uVar4) + 3);
        goto LAB_010d35d0;
      }
      iVar12 = 0;
    }
    pcVar13 = "<JSArray[%u]>";
    uVar7 = __strlen_chk("<JSArray[%u]>",0xe);
    local_60 = (char *)CONCAT44(local_60._4_4_,iVar12);
    goto LAB_010d35f0;
  case 0x42e:
    uVar7 = __strlen_chk("<JSRegExp",10);
    StringStream::Add(param_1,"<JSRegExp",uVar7,0,0);
    uVar14 = *(ulong *)this;
    uVar15 = uVar14 & 0xffffffff00000000;
    if (*(ushort *)((uVar15 | 7) + (ulong)*(uint *)((uVar15 | *(uint *)(uVar14 + 0xf)) - 1)) < 0x40)
    {
      uVar7 = __strlen_chk(&DAT_019afa78,2);
      StringStream::Add(param_1,&DAT_019afa78,uVar7,0,0);
      local_60 = (char *)(uVar15 | *(uint *)(uVar14 + 0xf));
      String::StringShortPrint((String *)&local_60,param_1,true);
    }
    pcVar13 = ">";
    uVar7 = __strlen_chk(">",2);
    ppcVar8 = (char **)0x0;
    uVar10 = 0;
    goto LAB_010d3600;
  case 0x438:
    uVar7 = __strlen_chk("<JSBoundFunction",0x11);
    StringStream::Add(param_1,"<JSBoundFunction",uVar7,0,0);
    uVar4 = *(uint *)(uVar14 + 0xb);
    pcVar13 = " (BoundTargetFunction %p)>";
    uVar7 = __strlen_chk(" (BoundTargetFunction %p)>",0x1b);
    local_60 = (char *)(uVar15 | uVar4);
LAB_010d35f0:
    uVar10 = 1;
LAB_010d3600:
    StringStream::Add(param_1,pcVar13,uVar7,ppcVar8,uVar10);
    return;
  case 0x439:
    local_60 = (char *)(uVar15 | *(uint *)(uVar14 + 0xb));
    uVar16 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_60);
    if ((((uVar16 & 1) == 0) ||
        (0x3f < *(ushort *)((uVar16 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar16 - 1)))) ||
       (*(int *)(uVar16 + 7) < 1)) {
      uVar7 = __strlen_chk("<JSFunction",0xc);
      StringStream::Add(param_1,"<JSFunction",uVar7,0,0);
    }
    else {
      uVar7 = __strlen_chk("<JSFunction ",0xd);
      StringStream::Add(param_1,"<JSFunction ",uVar7,0,0);
      StringStream::Put(param_1,uVar16);
    }
    if (FLAG_trace_file_names != '\0') {
      uVar16 = uVar15 | *(uint *)((uVar15 | *(uint *)(uVar14 + 0xb)) + 0xf);
      if (*(short *)((uVar15 | 7) + (ulong)*(uint *)(uVar16 - 1)) == 0x5b) {
        uVar16 = uVar15 | *(uint *)(uVar16 + 0xb);
      }
      if ((((*(uint *)(uVar16 + 7) & 1) != 0) &&
          (uVar17 = uVar16 & 0xffffffff00000000 | (ulong)*(uint *)(uVar16 + 7),
          *(ushort *)((uVar16 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar17 - 1)) < 0x40)) &&
         (0 < *(int *)(uVar17 + 7))) {
        uVar7 = __strlen_chk(&DAT_019d6d01,3);
        StringStream::Add(param_1,&DAT_019d6d01,uVar7,0,0);
        StringStream::Put(param_1,uVar17);
        uVar7 = __strlen_chk(">",2);
        StringStream::Add(param_1,">",uVar7,0,0);
      }
    }
    uVar4 = *(uint *)(uVar14 + 0xb);
    uVar7 = __strlen_chk(" (sfi = %p)",0xc);
    local_60 = (char *)(uVar15 | uVar4);
    StringStream::Add(param_1," (sfi = %p)",uVar7,&local_60,1);
    goto LAB_010d3800;
  }
  uVar7 = __strlen_chk(pcVar13,uVar7);
  StringStream::Add(param_1,pcVar13,uVar7,0,0);
  return;
}

