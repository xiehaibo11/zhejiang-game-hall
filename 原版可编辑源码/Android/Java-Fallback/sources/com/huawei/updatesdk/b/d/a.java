package com.huawei.updatesdk.b.d;

public class a {
    public static boolean a(int r1) {
            r0 = 2
            if (r1 != r0) goto L5
            r1 = 1
            return r1
        L5:
            r1 = 0
            return r1
    }

    public static boolean b(int r1) {
            r0 = 8
            if (r1 == r0) goto Ld
            r0 = 6
            if (r1 == r0) goto Ld
            r0 = 5
            if (r1 != r0) goto Lb
            goto Ld
        Lb:
            r1 = 0
            return r1
        Ld:
            r1 = 1
            return r1
    }
}
