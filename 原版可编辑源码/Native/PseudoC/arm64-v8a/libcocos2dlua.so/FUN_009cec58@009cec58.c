
void FUN_009cec58(undefined8 param_1,long param_2,int param_3,long *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  undefined1 uVar9;
  int iVar10;
  double dVar11;
  
  uVar2 = lua_type(param_1,0xffffffff);
  switch(uVar2) {
  case 1:
    iVar3 = lua_toboolean(param_1,0xffffffff);
    uVar7 = *(uint *)((long)param_4 + 0xc);
    iVar1 = (int)param_4[1] + ~uVar7;
    if (iVar3 == 0) {
      if (iVar1 < 5) {
        strbuf_resize(param_4,uVar7 + 5);
        uVar7 = *(uint *)((long)param_4 + 0xc);
      }
      lVar8 = *param_4;
      *(undefined1 *)((undefined4 *)(lVar8 + (int)uVar7) + 1) = 0x65;
      *(undefined4 *)(lVar8 + (int)uVar7) = 0x736c6166;
      *(int *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) + 5;
      return;
    }
    if (iVar1 < 4) {
      strbuf_resize(param_4,uVar7 + 4);
      uVar7 = *(uint *)((long)param_4 + 0xc);
    }
    lVar8 = *param_4;
    uVar2 = 0x65757274;
    break;
  case 2:
    lVar8 = lua_touserdata(param_1,0xffffffff);
    if (lVar8 != 0) goto switchD_009cecb0_default;
  case 0:
    uVar7 = *(uint *)((long)param_4 + 0xc);
    if ((int)((int)param_4[1] + ~uVar7) < 4) {
      strbuf_resize(param_4,uVar7 + 4);
      uVar7 = *(uint *)((long)param_4 + 0xc);
    }
    lVar8 = *param_4;
    uVar2 = 0x6c6c756e;
    break;
  case 3:
    FUN_009cf444(param_1,param_2,param_4,0xffffffff);
    return;
  case 4:
                    /* try { // try from 009cedf4 to 00acedf7 has its CatchHandler @ 009cee54 */
                    /* try { // try from 009cedf8 to 00acee6f has its CatchHandler @ 009ced9c */
    FUN_009cf32c(param_1,param_4,0xffffffff);
    return;
  case 5:
    iVar1 = param_3 + 1;
    if ((*(int *)(param_2 + 0x52c) <= param_3) || (iVar3 = lua_checkstack(param_1,3), iVar3 == 0)) {
      if (*(int *)(param_2 + 0x538) == 0) {
        strbuf_free(param_4);
      }
      luaL_error(param_1,"Cannot serialise, excessive nesting (%d)",iVar1);
    }
    lua_pushnil(param_1);
                    /* catch() { ... } // from try @ 009cedf4 with catch @ 009cee54 */
    iVar3 = lua_next(param_1,0xfffffffe);
    if (iVar3 == 0) {
      iVar4 = 0;
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      iVar10 = 0;
      do {
                    /* try { // try from 009cee70 to 00aceff3 has its CatchHandler @ 009cee70
                       catch() { ... } // from try @ 009cee70 with catch @ 009cee70
                       catch() { ... } // from try @ 009cf0ec with catch @ 009cee70
                       catch() { ... } // from try @ 009cfbcc with catch @ 009cee70
                       catch() { ... } // from try @ 009cfe34 with catch @ 009cee70
                       catch() { ... } // from try @ 009d0540 with catch @ 009cee70
                       catch() { ... } // from try @ 009d07b8 with catch @ 009cee70
                       catch() { ... } // from try @ 009d0ecc with catch @ 009cee70
                       catch() { ... } // from try @ 009d1244 with catch @ 009cee70
                       catch() { ... } // from try @ 009d15cc with catch @ 009cee70
                       catch() { ... } // from try @ 009d196c with catch @ 009cee70
                       catch() { ... } // from try @ 009d1c70 with catch @ 009cee70
                       catch() { ... } // from try @ 009d2038 with catch @ 009cee70
                       catch() { ... } // from try @ 009d2200 with catch @ 009cee70
                       catch() { ... } // from try @ 009d2744 with catch @ 009cee70
                       catch() { ... } // from try @ 009d299c with catch @ 009cee70
                       catch() { ... } // from try @ 009d2c80 with catch @ 009cee70
                       catch() { ... } // from try @ 009d2fe0 with catch @ 009cee70
                       catch() { ... } // from try @ 009d332c with catch @ 009cee70
                       catch() { ... } // from try @ 009d3678 with catch @ 009cee70
                       catch() { ... } // from try @ 009d3a28 with catch @ 009cee70
                       catch() { ... } // from try @ 009d3bec with catch @ 009cee70
                       catch() { ... } // from try @ 009d3fe0 with catch @ 009cee70
                       catch() { ... } // from try @ 009d4318 with catch @ 009cee70
                       catch() { ... } // from try @ 009d459c with catch @ 009cee70
                       catch() { ... } // from try @ 009d4a08 with catch @ 009cee70
                       catch() { ... } // from try @ 009d4eb0 with catch @ 009cee70
                       catch() { ... } // from try @ 009d5328 with catch @ 009cee70
                       catch() { ... } // from try @ 009d5550 with catch @ 009cee70
                       catch() { ... } // from try @ 009d5c48 with catch @ 009cee70
                       catch() { ... } // from try @ 009d5e5c with catch @ 009cee70
                       catch() { ... } // from try @ 009d6334 with catch @ 009cee70
                       catch() { ... } // from try @ 009d65ec with catch @ 009cee70
                       catch() { ... } // from try @ 009d6874 with catch @ 009cee70
                       catch() { ... } // from try @ 009d6a0c with catch @ 009cee70
                       catch() { ... } // from try @ 009d6ba0 with catch @ 009cee70
                       catch() { ... } // from try @ 009d6f24 with catch @ 009cee70
                       catch() { ... } // from try @ 009d7268 with catch @ 009cee70
                       catch() { ... } // from try @ 009d75bc with catch @ 009cee70
                       catch() { ... } // from try @ 009d7a3c with catch @ 009cee70
                       catch() { ... } // from try @ 009d7e54 with catch @ 009cee70 */
        iVar4 = lua_type(param_1,0xfffffffe);
        if ((((iVar4 != 3) || (dVar11 = (double)lua_tonumber(param_1,0xfffffffe), dVar11 == 0.0)) ||
            (dVar11 < 1.0)) || ((double)(long)dVar11 != dVar11)) {
          lua_settop(param_1,0xfffffffd);
          goto LAB_009cf088;
        }
        iVar4 = (int)dVar11;
        if (dVar11 <= (double)iVar10) {
          iVar4 = iVar10;
        }
        iVar3 = iVar3 + 1;
        lua_settop(param_1,0xfffffffe);
        iVar5 = lua_next(param_1,0xfffffffe);
        iVar10 = iVar4;
      } while (iVar5 != 0);
    }
    if (((*(int *)(param_2 + 0x524) < 1) || (iVar4 <= *(int *)(param_2 + 0x524) * iVar3)) ||
       (iVar4 <= *(int *)(param_2 + 0x528))) {
      if (0 < iVar4) {
        uVar7 = *(uint *)((long)param_4 + 0xc);
        if ((int)((int)param_4[1] + ~uVar7) < 1) {
          strbuf_resize(param_4,uVar7 + 1);
          uVar7 = *(uint *)((long)param_4 + 0xc);
        }
                    /* try { // try from 009ceff4 to 00acf063 has its CatchHandler @ 009d81d8 */
        *(uint *)((long)param_4 + 0xc) = uVar7 + 1;
        *(undefined1 *)(*param_4 + (long)(int)uVar7) = 0x5b;
        iVar3 = 1;
        while( true ) {
          lua_rawgeti(param_1,0xffffffff,iVar3);
          FUN_009cec58(param_1,param_2,iVar1,param_4);
          lua_settop(param_1,0xfffffffe);
          if (iVar4 == iVar3) break;
          iVar3 = iVar3 + 1;
          uVar7 = *(uint *)((long)param_4 + 0xc);
                    /* try { // try from 009cf064 to 00acf077 has its CatchHandler @ 009d805c */
          if ((int)((int)param_4[1] + ~uVar7) < 1) {
            strbuf_resize(param_4,uVar7 + 1);
            uVar7 = *(uint *)((long)param_4 + 0xc);
                    /* try { // try from 009cf07c to 00acf0eb has its CatchHandler @ 009d81ac */
          }
          *(uint *)((long)param_4 + 0xc) = uVar7 + 1;
          *(undefined1 *)(*param_4 + (long)(int)uVar7) = 0x2c;
        }
        uVar7 = *(uint *)((long)param_4 + 0xc);
        if ((int)((int)param_4[1] + ~uVar7) < 1) {
          strbuf_resize(param_4,uVar7 + 1);
          uVar7 = *(uint *)((long)param_4 + 0xc);
        }
        lVar8 = *param_4;
        *(uint *)((long)param_4 + 0xc) = uVar7 + 1;
        uVar9 = 0x5d;
        goto LAB_009cf308;
      }
    }
    else if (*(int *)(param_2 + 0x520) == 0) {
      if (*(int *)(param_2 + 0x538) == 0) {
        strbuf_free(param_4);
      }
      uVar2 = lua_type(param_1,0xffffffff);
      uVar6 = lua_typename(param_1,uVar2);
      luaL_error(param_1,&DAT_012f06de,uVar6,"excessively sparse array");
    }
LAB_009cf088:
    uVar7 = *(uint *)((long)param_4 + 0xc);
    if ((int)((int)param_4[1] + ~uVar7) < 1) {
      strbuf_resize(param_4,uVar7 + 1);
      uVar7 = *(uint *)((long)param_4 + 0xc);
    }
    *(uint *)((long)param_4 + 0xc) = uVar7 + 1;
    *(undefined1 *)(*param_4 + (long)(int)uVar7) = 0x7b;
    lua_pushnil(param_1);
    iVar3 = lua_next(param_1,0xfffffffe);
    if (iVar3 != 0) {
      while( true ) {
        iVar3 = lua_type(param_1,0xfffffffe);
        if (iVar3 == 4) {
          FUN_009cf32c(param_1,param_4,0xfffffffe);
          uVar7 = *(uint *)((long)param_4 + 0xc);
          if ((int)((int)param_4[1] + ~uVar7) < 1) {
            strbuf_resize(param_4,uVar7 + 1);
            uVar7 = *(uint *)((long)param_4 + 0xc);
          }
          *(uint *)((long)param_4 + 0xc) = uVar7 + 1;
          *(undefined1 *)(*param_4 + (long)(int)uVar7) = 0x3a;
        }
        else if (iVar3 == 3) {
          uVar7 = *(uint *)((long)param_4 + 0xc);
          if ((int)((int)param_4[1] + ~uVar7) < 1) {
            strbuf_resize(param_4,uVar7 + 1);
            uVar7 = *(uint *)((long)param_4 + 0xc);
          }
          *(uint *)((long)param_4 + 0xc) = uVar7 + 1;
          *(undefined1 *)(*param_4 + (long)(int)uVar7) = 0x22;
          FUN_009cf444(param_1,param_2,param_4,0xfffffffe);
          uVar7 = *(uint *)((long)param_4 + 0xc);
          if ((int)((int)param_4[1] + ~uVar7) < 2) {
            strbuf_resize(param_4,uVar7 + 2);
            uVar7 = *(uint *)((long)param_4 + 0xc);
          }
          *(undefined2 *)(*param_4 + (long)(int)uVar7) = 0x3a22;
          *(int *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) + 2;
        }
        else {
          if (*(int *)(param_2 + 0x538) == 0) {
            strbuf_free(param_4);
          }
          uVar2 = lua_type(param_1,0xfffffffe);
          uVar6 = lua_typename(param_1,uVar2);
          luaL_error(param_1,&DAT_012f06de,uVar6,"table key must be a number or string");
        }
        FUN_009cec58(param_1,param_2,iVar1,param_4);
        lua_settop(param_1,0xfffffffe);
        iVar3 = lua_next(param_1,0xfffffffe);
        if (iVar3 == 0) break;
        uVar7 = *(uint *)((long)param_4 + 0xc);
        if ((int)((int)param_4[1] + ~uVar7) < 1) {
          strbuf_resize(param_4,uVar7 + 1);
          uVar7 = *(uint *)((long)param_4 + 0xc);
        }
        *(uint *)((long)param_4 + 0xc) = uVar7 + 1;
        *(undefined1 *)(*param_4 + (long)(int)uVar7) = 0x2c;
      }
    }
    uVar7 = *(uint *)((long)param_4 + 0xc);
    if ((int)((int)param_4[1] + ~uVar7) < 1) {
      strbuf_resize(param_4,uVar7 + 1);
      uVar7 = *(uint *)((long)param_4 + 0xc);
    }
    lVar8 = *param_4;
    *(uint *)((long)param_4 + 0xc) = uVar7 + 1;
    uVar9 = 0x7d;
LAB_009cf308:
    *(undefined1 *)(lVar8 + (int)uVar7) = uVar9;
    return;
  default:
switchD_009cecb0_default:
    if (*(int *)(param_2 + 0x538) == 0) {
      strbuf_free(param_4);
    }
    uVar2 = lua_type(param_1,0xffffffff);
    uVar6 = lua_typename(param_1,uVar2);
    luaL_error(param_1,&DAT_012f06de,uVar6,"type not supported");
    return;
  }
  *(undefined4 *)(lVar8 + (int)uVar7) = uVar2;
                    /* try { // try from 009ced9c to 00acedf3 has its CatchHandler @ 009ced9c
                       catch() { ... } // from try @ 009ced9c with catch @ 009ced9c
                       catch() { ... } // from try @ 009cedf8 with catch @ 009ced9c */
  *(int *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) + 4;
  return;
}

