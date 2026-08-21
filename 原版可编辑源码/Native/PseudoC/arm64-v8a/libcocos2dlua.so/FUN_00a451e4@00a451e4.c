
long FUN_00a451e4(char *param_1,int param_2)

{
  char cVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if (param_2 < 0) {
    lVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      sVar3 = strlen(param_1);
    }
    else {
      sVar3 = (size_t)param_2;
    }
                    /* try { // try from 00a45228 to 00b4522b has its CatchHandler @ 00a45260 */
                    /* try { // try from 00a4522c to 00b45273 has its CatchHandler @ 00a451dc */
    uVar4 = sVar3 + 1;
    lVar2 = (*(code *)PTR_malloc_017699f8)(uVar4);
    if (lVar2 != 0) {
      if (sVar3 == 0) {
        lVar6 = 0;
      }
      else {
        uVar5 = uVar4;
        lVar7 = 0;
                    /* catch() { ... } // from try @ 00a45228 with catch @ 00a45260 */
        do {
          cVar1 = *param_1;
          switch(cVar1) {
          case '-':
          case '.':
          case '0':
          case '1':
          case '2':
          case '3':
          case '4':
          case '5':
          case '6':
          case '7':
          case '8':
          case '9':
          case 'A':
          case 'B':
          case 'C':
          case 'D':
          case 'E':
          case 'F':
          case 'G':
          case 'H':
          case 'I':
          case 'J':
          case 'K':
          case 'L':
          case 'M':
          case 'N':
          case 'O':
          case 'P':
          case 'Q':
          case 'R':
          case 'S':
          case 'T':
          case 'U':
          case 'V':
          case 'W':
          case 'X':
          case 'Y':
          case 'Z':
          case '_':
          case 'a':
          case 'b':
          case 'c':
          case 'd':
          case 'e':
          case 'f':
          case 'g':
          case 'h':
          case 'i':
          case 'j':
          case 'k':
          case 'l':
          case 'm':
          case 'n':
          case 'o':
          case 'p':
          case 'q':
          case 'r':
          case 's':
          case 't':
          case 'u':
          case 'v':
          case 'w':
          case 'x':
          case 'y':
          case 'z':
          case '~':
            lVar6 = lVar7 + 1;
            *(char *)(lVar2 + lVar7) = cVar1;
            break;
          default:
            uVar4 = uVar4 + 2;
                    /* try { // try from 00a45274 to 00b4535b has its CatchHandler @ 00a45274
                       catch() { ... } // from try @ 00a45274 with catch @ 00a45274
                       catch() { ... } // from try @ 00a453dc with catch @ 00a45274 */
            if (uVar5 < uVar4) {
              uVar5 = uVar5 << 1;
              lVar2 = FUN_00a4e398(lVar2,uVar5);
              if (lVar2 == 0) {
                return 0;
              }
            }
            FUN_00a241ac(lVar2 + lVar7,4,&DAT_013c5e48,cVar1);
            lVar6 = lVar7 + 3;
          }
          sVar3 = sVar3 - 1;
          param_1 = param_1 + 1;
          lVar7 = lVar6;
        } while (sVar3 != 0);
      }
      *(undefined1 *)(lVar2 + lVar6) = 0;
    }
  }
  return lVar2;
}

