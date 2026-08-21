package com.qihoo360.replugin.ext.parser.utils.xml;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
abstract class CodePointTranslator extends com.qihoo360.replugin.ext.parser.utils.xml.CharSequenceTranslator {
    CodePointTranslator() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final int translate(java.lang.CharSequence r1, int r2, java.io.Writer r3) throws java.io.IOException {
            r0 = this;
            int r1 = java.lang.Character.codePointAt(r1, r2)
            boolean r1 = r0.translate(r1, r3)
            return r1
    }

    public abstract boolean translate(int r1, java.io.Writer r2) throws java.io.IOException;
}
