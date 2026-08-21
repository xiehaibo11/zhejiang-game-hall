
/* tinyxml2::XMLDocument::SaveFile(char const*, bool) */

undefined4 __thiscall tinyxml2::XMLDocument::SaveFile(XMLDocument *this,char *param_1,bool param_2)

{
  undefined4 uVar1;
  FILE *__stream;
  
  __stream = fopen(param_1,"w");
  if (__stream == (FILE *)0x0) {
    uVar1 = 4;
    *(undefined4 *)(this + 0x5c) = 4;
    *(char **)(this + 0x68) = param_1;
    *(undefined8 *)(this + 0x70) = 0;
  }
  else {
    SaveFile(this,(__sFILE *)__stream,param_2);
    fclose(__stream);
    uVar1 = *(undefined4 *)(this + 0x5c);
  }
  return uVar1;
}

