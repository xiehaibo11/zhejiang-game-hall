
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* initExtensions() */

void initExtensions(void)

{
  glGenVertexArraysOESEXT = eglGetProcAddress("glGenVertexArraysOES");
  glBindVertexArrayOESEXT = eglGetProcAddress("glBindVertexArrayOES");
  glDeleteVertexArraysOESEXT = eglGetProcAddress("glDeleteVertexArraysOES");
  return;
}

