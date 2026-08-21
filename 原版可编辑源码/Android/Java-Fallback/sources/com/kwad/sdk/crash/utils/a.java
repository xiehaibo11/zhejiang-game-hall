package com.kwad.sdk.crash.utils;

public final class a {
    public static final java.nio.charset.Charset US_ASCII = null;
    public static final java.nio.charset.Charset UTF_8 = null;

    static {
            java.lang.String r0 = "US-ASCII"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            com.kwad.sdk.crash.utils.a.US_ASCII = r0
            java.lang.String r0 = "UTF-8"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            com.kwad.sdk.crash.utils.a.UTF_8 = r0
            return
    }

    public static java.nio.charset.Charset a(java.nio.charset.Charset r0) {
            if (r0 != 0) goto L6
            java.nio.charset.Charset r0 = java.nio.charset.Charset.defaultCharset()
        L6:
            return r0
    }
}
