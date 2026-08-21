package com.qihoo360.replugin.ext.parser.utils.xml;

import java.io.IOException;
import java.io.Writer;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class UnicodeUnpairedSurrogateRemover extends CodePointTranslator {
    @Override
    public boolean translate(int i, Writer writer) throws IOException {
        return i >= 55296 && i <= 57343;
    }

    UnicodeUnpairedSurrogateRemover() {
    }
}
