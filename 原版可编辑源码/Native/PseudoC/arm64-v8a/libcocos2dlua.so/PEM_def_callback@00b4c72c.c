
int PEM_def_callback(char *buf,int num,int w,void *key)

{
  char *prompt;
  int minlen;
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  
  if (key == (void *)0x0) {
    pcVar3 = EVP_get_pw_prompt();
    prompt = "Enter PEM pass phrase:";
    if (pcVar3 != (char *)0x0) {
      prompt = pcVar3;
    }
    minlen = (uint)(w != 0) * 4;
    iVar1 = EVP_read_pw_string_min(buf,minlen,num,prompt,w);
    if (iVar1 == 0) {
      if (w == 0) {
        sVar2 = strlen(buf);
        return (int)sVar2;
      }
      do {
        sVar2 = strlen(buf);
        if (minlen <= (int)sVar2) {
          return (int)sVar2;
        }
        fprintf((FILE *)pthread_rwlock_tryrdlock,
                "phrase is too short, needs to be at least %d chars\n",(ulong)(w != 0) << 2);
        iVar1 = EVP_read_pw_string_min(buf,minlen,num,prompt,w);
      } while (iVar1 == 0);
    }
    ERR_put_error(9,100,0x6d,"crypto/pem/pem_lib.c",0x40);
    memset(buf,0,(ulong)(uint)num);
    num = -1;
  }
  else {
    sVar2 = strlen(key);
    if ((int)sVar2 <= num) {
      num = (int)sVar2;
    }
    memcpy(buf,key,(long)num);
  }
  return num;
}

