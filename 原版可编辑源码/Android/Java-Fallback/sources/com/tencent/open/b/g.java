package com.tencent.open.b;

public class g {
    static void a() {
            android.content.Context r0 = com.tencent.open.utils.g.a()
            if (r0 != 0) goto L7
            return
        L7:
            java.lang.String r1 = "sdk_report.db"
            r0.deleteDatabase(r1)
            return
    }

    public static void a(java.lang.String r0) {
            return
    }

    public static void a(java.lang.String r0, java.util.List<java.io.Serializable> r1) {
            return
    }

    public static java.util.List<java.io.Serializable> b(java.lang.String r0) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.List r0 = java.util.Collections.synchronizedList(r0)
            return r0
    }
}
