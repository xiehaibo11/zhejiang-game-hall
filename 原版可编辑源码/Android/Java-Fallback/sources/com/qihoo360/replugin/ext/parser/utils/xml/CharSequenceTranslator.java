package com.qihoo360.replugin.ext.parser.utils.xml;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
abstract class CharSequenceTranslator {
    CharSequenceTranslator() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String hex(int r1) {
            java.lang.String r1 = java.lang.Integer.toHexString(r1)
            java.util.Locale r0 = java.util.Locale.ENGLISH
            java.lang.String r1 = r1.toUpperCase(r0)
            return r1
    }

    public abstract int translate(java.lang.CharSequence r1, int r2, java.io.Writer r3) throws java.io.IOException;

    public final java.lang.String translate(java.lang.CharSequence r3) {
            r2 = this;
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            java.io.StringWriter r0 = new java.io.StringWriter     // Catch: java.io.IOException -> L17
            int r1 = r3.length()     // Catch: java.io.IOException -> L17
            int r1 = r1 * 2
            r0.<init>(r1)     // Catch: java.io.IOException -> L17
            r2.translate(r3, r0)     // Catch: java.io.IOException -> L17
            java.lang.String r3 = r0.toString()     // Catch: java.io.IOException -> L17
            return r3
        L17:
            r3 = move-exception
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            r0.<init>(r3)
            throw r0
    }

    public final void translate(java.lang.CharSequence r7, java.io.Writer r8) throws java.io.IOException {
            r6 = this;
            if (r8 == 0) goto L31
            if (r7 != 0) goto L5
            return
        L5:
            int r0 = r7.length()
            r1 = 0
            r2 = r1
        Lb:
            if (r2 >= r0) goto L30
            int r3 = r6.translate(r7, r2, r8)
            if (r3 != 0) goto L21
            int r3 = java.lang.Character.codePointAt(r7, r2)
            char[] r3 = java.lang.Character.toChars(r3)
            r8.write(r3)
            int r3 = r3.length
            int r2 = r2 + r3
            goto Lb
        L21:
            r4 = r1
        L22:
            if (r4 >= r3) goto Lb
            int r5 = java.lang.Character.codePointAt(r7, r2)
            int r5 = java.lang.Character.charCount(r5)
            int r2 = r2 + r5
            int r4 = r4 + 1
            goto L22
        L30:
            return
        L31:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "The Writer must not be null"
            r7.<init>(r8)
            throw r7
    }

    public final com.qihoo360.replugin.ext.parser.utils.xml.CharSequenceTranslator with(com.qihoo360.replugin.ext.parser.utils.xml.CharSequenceTranslator... r5) {
            r4 = this;
            int r0 = r5.length
            r1 = 1
            int r0 = r0 + r1
            com.qihoo360.replugin.ext.parser.utils.xml.CharSequenceTranslator[] r0 = new com.qihoo360.replugin.ext.parser.utils.xml.CharSequenceTranslator[r0]
            r2 = 0
            r0[r2] = r4
            int r3 = r5.length
            java.lang.System.arraycopy(r5, r2, r0, r1, r3)
            com.qihoo360.replugin.ext.parser.utils.xml.AggregateTranslator r5 = new com.qihoo360.replugin.ext.parser.utils.xml.AggregateTranslator
            r5.<init>(r0)
            return r5
    }
}
