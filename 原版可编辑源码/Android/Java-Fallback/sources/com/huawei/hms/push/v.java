package com.huawei.hms.push;

public abstract class v {
    public static final char[] a = null;

    static {
            r0 = 16
            char[] r0 = new char[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 65, 66, 67, 68, 69, 70} // fill-array
            com.huawei.hms.push.v.a = r0
            return
    }

    public static java.lang.String a(byte[] r2) {
            if (r2 != 0) goto L5
            java.lang.String r2 = ""
            return r2
        L5:
            java.lang.String r0 = new java.lang.String
            java.nio.charset.Charset r1 = com.huawei.hms.push.w.a
            r0.<init>(r2, r1)
            return r0
    }
}
