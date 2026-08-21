package com.qihoo360.replugin.ext.parser.utils.xml;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class AggregateTranslator extends com.qihoo360.replugin.ext.parser.utils.xml.CharSequenceTranslator {
    private final com.qihoo360.replugin.ext.parser.utils.xml.CharSequenceTranslator[] translators;

    public AggregateTranslator(com.qihoo360.replugin.ext.parser.utils.xml.CharSequenceTranslator... r1) {
            r0 = this;
            r0.<init>()
            r0.translators = r1
            return
    }

    @Override
    public int translate(java.lang.CharSequence r6, int r7, java.io.Writer r8) throws java.io.IOException {
            r5 = this;
            com.qihoo360.replugin.ext.parser.utils.xml.CharSequenceTranslator[] r0 = r5.translators
            int r1 = r0.length
            r2 = 0
            r3 = r2
        L5:
            if (r3 >= r1) goto L13
            r4 = r0[r3]
            int r4 = r4.translate(r6, r7, r8)
            if (r4 == 0) goto L10
            return r4
        L10:
            int r3 = r3 + 1
            goto L5
        L13:
            return r2
    }
}
