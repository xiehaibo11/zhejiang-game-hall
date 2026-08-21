
/* v8::internal::DateParser::KeywordTable::Lookup(unsigned int const*, int) */

void v8::internal::DateParser::KeywordTable::Lookup(uint *param_1,int param_2)

{
  ulong uVar1;
  char *pcVar2;
  
  uVar1 = 0;
  pcVar2 = 
  "n\x01\x01feb\x01\x02mar\x01\x03apr\x01\x04may\x01\x05jun\x01\x06jul\x01\aaug\x01\bsep\x01\toct\x01\nnov\x01\vdec\x01\fam"
  ;
  do {
    if ((*param_1 == (uint)(byte)pcVar2[-2]) && (param_1[1] == (uint)(byte)pcVar2[-1])) {
      if ((param_1[2] == (int)*pcVar2) && (param_2 < 4 || uVar1 < 0xc)) {
        return;
      }
    }
    uVar1 = uVar1 + 1;
    pcVar2 = pcVar2 + 5;
    if (uVar1 == 0x1b) {
      return;
    }
  } while( true );
}

