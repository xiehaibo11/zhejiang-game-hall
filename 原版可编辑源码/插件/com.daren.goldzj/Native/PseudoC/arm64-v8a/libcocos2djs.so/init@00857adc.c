
/* FileImplement::init() */

void FileImplement::init(void)

{
  FileInterface *pFVar1;
  
  pFVar1 = operator_new(8);
  *(undefined ***)pFVar1 = &PTR__FileInterface_01c66008;
  universe::FileInterface::setImpl(pFVar1);
  return;
}

