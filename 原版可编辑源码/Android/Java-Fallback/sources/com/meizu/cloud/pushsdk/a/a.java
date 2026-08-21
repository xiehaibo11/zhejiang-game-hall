package com.meizu.cloud.pushsdk.a;

public class a {


    public static com.meizu.cloud.pushsdk.d.a.c a(android.content.Context r4) {
            com.meizu.cloud.pushsdk.d.a.c r0 = new com.meizu.cloud.pushsdk.d.a.c
            r0.<init>()
            com.meizu.cloud.pushsdk.a.b r4 = c(r4)
            java.util.Map r1 = r4.a()
            java.util.Map r2 = r4.b()
            java.util.Map r4 = r4.c()
            int r3 = r1.size()
            if (r3 <= 0) goto L20
            java.lang.String r3 = "di"
            r0.a(r3, r1)
        L20:
            int r1 = r2.size()
            if (r1 <= 0) goto L2b
            java.lang.String r1 = "ai"
            r0.a(r1, r2)
        L2b:
            int r1 = r4.size()
            if (r1 <= 0) goto L36
            java.lang.String r1 = "li"
            r0.a(r1, r4)
        L36:
            return r0
    }

    public static void b(android.content.Context r2) {
            com.meizu.cloud.pushsdk.b.c.a r0 = com.meizu.cloud.pushsdk.b.c.a.a()
            com.meizu.cloud.pushsdk.a.a$1 r1 = new com.meizu.cloud.pushsdk.a.a$1
            r1.<init>(r2)
            r0.execute(r1)
            return
    }

    private static com.meizu.cloud.pushsdk.a.b c(android.content.Context r1) {
            com.meizu.cloud.pushsdk.a.b$a r0 = new com.meizu.cloud.pushsdk.a.b$a
            r0.<init>()
            com.meizu.cloud.pushsdk.a.b$a r1 = r0.a(r1)
            com.meizu.cloud.pushsdk.a.b r1 = r1.a()
            return r1
    }
}
