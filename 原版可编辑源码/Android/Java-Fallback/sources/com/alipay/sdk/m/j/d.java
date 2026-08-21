package com.alipay.sdk.m.j;

public class d {
    public static final int a = 1010;
    public static com.alipay.sdk.m.j.d.a b;

    public interface a {
        void a(boolean r1, org.json.JSONObject r2, java.lang.String r3);
    }

    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean a(com.alipay.sdk.m.s.a r5, int r6, int r7, android.content.Intent r8) {
            r0 = 0
            r1 = 1010(0x3f2, float:1.415E-42)
            if (r6 == r1) goto L6
            return r0
        L6:
            if (r8 != 0) goto L9
            return r0
        L9:
            com.alipay.sdk.m.j.d$a r6 = com.alipay.sdk.m.j.d.b
            r1 = 1
            if (r6 != 0) goto Lf
            return r1
        Lf:
            r2 = 0
            com.alipay.sdk.m.j.d.b = r2
            r3 = -1
            java.lang.String r4 = "biz"
            if (r7 == r3) goto L41
            java.lang.String r3 = ""
            if (r7 == 0) goto L30
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r3)
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            java.lang.String r7 = "TbUnknown"
            com.alipay.sdk.m.k.a.b(r5, r4, r7, r6)
            goto L53
        L30:
            if (r8 == 0) goto L36
            java.lang.String r3 = r8.toUri(r1)
        L36:
            java.lang.String r7 = "TbCancel"
            com.alipay.sdk.m.k.a.a(r5, r4, r7, r3)
            java.lang.String r5 = "CANCELED"
            r6.a(r0, r2, r5)
            goto L53
        L41:
            java.lang.String r7 = r8.toUri(r1)
            java.lang.String r0 = "TbOk"
            com.alipay.sdk.m.k.a.a(r5, r4, r0, r7)
            org.json.JSONObject r5 = com.alipay.sdk.m.u.n.a(r8)
            java.lang.String r7 = "OK"
            r6.a(r1, r5, r7)
        L53:
            return r1
    }

    public static boolean a(com.alipay.sdk.m.s.a r2, android.app.Activity r3, int r4, java.lang.String r5, java.lang.String r6, com.alipay.sdk.m.j.d.a r7) {
            java.lang.String r0 = "biz"
            java.lang.String r1 = "TbStart"
            com.alipay.sdk.m.k.a.a(r2, r0, r1)     // Catch: java.lang.Throwable -> L17
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Throwable -> L17
            android.net.Uri r5 = android.net.Uri.parse(r5)     // Catch: java.lang.Throwable -> L17
            r1.<init>(r6, r5)     // Catch: java.lang.Throwable -> L17
            r3.startActivityForResult(r1, r4)     // Catch: java.lang.Throwable -> L17
            com.alipay.sdk.m.j.d.b = r7     // Catch: java.lang.Throwable -> L17
            r2 = 1
            return r2
        L17:
            r3 = move-exception
            r4 = 0
            r5 = 0
            java.lang.String r6 = "UNKNOWN_ERROR"
            r7.a(r5, r4, r6)
            java.lang.String r4 = "TbActFail"
            com.alipay.sdk.m.k.a.a(r2, r0, r4, r3)
            return r5
    }

    public static boolean a(com.alipay.sdk.m.s.a r4, android.content.Context r5) {
            com.alipay.sdk.m.m.a$b r0 = new com.alipay.sdk.m.m.a$b
            r1 = 0
            java.lang.String r2 = "com.taobao.taobao"
            java.lang.String r3 = ""
            r0.<init>(r2, r1, r3)
            java.util.List r0 = java.util.Collections.singletonList(r0)
            boolean r4 = com.alipay.sdk.m.u.n.a(r4, r5, r0, r1)
            return r4
    }
}
