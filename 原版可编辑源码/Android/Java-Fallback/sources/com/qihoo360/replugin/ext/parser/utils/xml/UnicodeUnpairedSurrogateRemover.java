package com.qihoo360.replugin.ext.parser.utils.xml;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class UnicodeUnpairedSurrogateRemover extends com.qihoo360.replugin.ext.parser.utils.xml.CodePointTranslator {
    UnicodeUnpairedSurrogateRemover() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean translate(int r1, java.io.Writer r2) throws java.io.IOException {
            r0 = this;
            r2 = 55296(0xd800, float:7.7486E-41)
            if (r1 < r2) goto Lc
            r2 = 57343(0xdfff, float:8.0355E-41)
            if (r1 > r2) goto Lc
            r1 = 1
            return r1
        Lc:
            r1 = 0
            return r1
    }
}
