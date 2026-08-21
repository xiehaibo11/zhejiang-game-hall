
void PEM_proc_type(char *buf,int type)

{
  char *pcVar1;
  
  if (type == 10) {
    pcVar1 = "ENCRYPTED";
  }
  else if (type == 0x14) {
    pcVar1 = "MIC-ONLY";
  }
  else if (type == 0x1e) {
    pcVar1 = "MIC-CLEAR";
  }
  else {
    pcVar1 = "BAD-TYPE";
  }
  OPENSSL_strlcat(buf,"Proc-Type: 4,",0x400);
  OPENSSL_strlcat(buf,pcVar1,0x400);
  OPENSSL_strlcat(buf,&DAT_013c61e6,0x400);
  return;
}

