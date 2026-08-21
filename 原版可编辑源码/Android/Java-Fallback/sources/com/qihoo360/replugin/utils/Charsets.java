package com.qihoo360.replugin.utils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class Charsets {

    @java.lang.Deprecated
    public static final java.nio.charset.Charset UTF_8 = null;

    static {
            java.lang.String r0 = "UTF-8"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            com.qihoo360.replugin.utils.Charsets.UTF_8 = r0
            return
    }

    public Charsets() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.nio.charset.Charset toCharset(java.lang.String r0) {
            if (r0 != 0) goto L7
            java.nio.charset.Charset r0 = java.nio.charset.Charset.defaultCharset()
            goto Lb
        L7:
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
        Lb:
            return r0
    }

    public static java.nio.charset.Charset toCharset(java.nio.charset.Charset r0) {
            if (r0 != 0) goto L6
            java.nio.charset.Charset r0 = java.nio.charset.Charset.defaultCharset()
        L6:
            return r0
    }
}
