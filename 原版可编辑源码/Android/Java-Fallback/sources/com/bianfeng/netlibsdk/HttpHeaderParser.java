package com.bianfeng.netlibsdk;

public class HttpHeaderParser {
    static final java.lang.String HEADER_CONTENT_TYPE = "Content-Type";

    public HttpHeaderParser() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String parseCharset(java.util.Map<java.lang.String, java.lang.String> r6, java.lang.String r7) {
            if (r6 != 0) goto L3
            return r7
        L3:
            java.lang.String r0 = "Content-Type"
            java.lang.Object r6 = r6.get(r0)
            java.lang.String r6 = (java.lang.String) r6
            if (r6 == 0) goto L39
            r0 = 0
            java.lang.String r1 = ";"
            java.lang.String[] r6 = r6.split(r1, r0)
            r1 = 1
            r2 = 1
        L16:
            int r3 = r6.length
            if (r2 >= r3) goto L39
            r3 = r6[r2]
            java.lang.String r3 = r3.trim()
            java.lang.String r4 = "="
            java.lang.String[] r3 = r3.split(r4, r0)
            int r4 = r3.length
            r5 = 2
            if (r4 != r5) goto L36
            r4 = r3[r0]
            java.lang.String r5 = "charset"
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L36
            r6 = r3[r1]
            return r6
        L36:
            int r2 = r2 + 1
            goto L16
        L39:
            return r7
    }
}
