package org.apache.commons.codec1;

public class Charsets {

    @java.lang.Deprecated
    public static final java.nio.charset.Charset ISO_8859_1 = null;

    @java.lang.Deprecated
    public static final java.nio.charset.Charset US_ASCII = null;

    @java.lang.Deprecated
    public static final java.nio.charset.Charset UTF_16 = null;

    @java.lang.Deprecated
    public static final java.nio.charset.Charset UTF_16BE = null;

    @java.lang.Deprecated
    public static final java.nio.charset.Charset UTF_16LE = null;

    @java.lang.Deprecated
    public static final java.nio.charset.Charset UTF_8 = null;

    static {
            java.lang.String r0 = "ISO-8859-1"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            org.apache.commons.codec1.Charsets.ISO_8859_1 = r0
            java.lang.String r0 = "US-ASCII"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            org.apache.commons.codec1.Charsets.US_ASCII = r0
            java.lang.String r0 = "UTF-16"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            org.apache.commons.codec1.Charsets.UTF_16 = r0
            java.lang.String r0 = "UTF-16BE"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            org.apache.commons.codec1.Charsets.UTF_16BE = r0
            java.lang.String r0 = "UTF-16LE"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            org.apache.commons.codec1.Charsets.UTF_16LE = r0
            java.lang.String r0 = "UTF-8"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            org.apache.commons.codec1.Charsets.UTF_8 = r0
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
