package com.tencent.open.b;

public class f {
    public static int a() {
            android.content.Context r0 = com.tencent.open.utils.g.a()
            r1 = 0
            com.tencent.open.utils.i r0 = com.tencent.open.utils.i.a(r0, r1)
            java.lang.String r1 = "Common_HttpRetryCount"
            int r0 = r0.a(r1)
            if (r0 != 0) goto L12
            r0 = 2
        L12:
            return r0
    }

    public static int a(java.lang.String r2) {
            android.content.Context r0 = com.tencent.open.utils.g.a()
            r1 = 100
            if (r0 != 0) goto L9
            return r1
        L9:
            android.content.Context r0 = com.tencent.open.utils.g.a()
            com.tencent.open.utils.i r2 = com.tencent.open.utils.i.a(r0, r2)
            java.lang.String r0 = "Common_BusinessReportFrequency"
            int r2 = r2.a(r0)
            if (r2 != 0) goto L1a
            goto L1b
        L1a:
            r1 = r2
        L1b:
            return r1
    }
}
