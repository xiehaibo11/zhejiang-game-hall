package com.alipay.sdk.protocol;

public class b {
    private com.alipay.sdk.protocol.a a;
    private java.lang.String b;
    private java.lang.String[] c;

    public b(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            return
    }

    public b(java.lang.String r1, com.alipay.sdk.protocol.a r2) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.a = r2
            return
    }

    public static java.util.List<com.alipay.sdk.protocol.b> a(org.json.JSONObject r5) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            if (r5 != 0) goto L8
            return r0
        L8:
            java.lang.String r1 = "name"
            java.lang.String r2 = ""
            java.lang.String r5 = r5.optString(r1, r2)
            java.lang.String[] r5 = b(r5)
            r1 = 0
        L15:
            int r2 = r5.length
            if (r1 >= r2) goto L38
            r2 = r5[r1]
            com.alipay.sdk.protocol.a r2 = com.alipay.sdk.protocol.a.a(r2)
            com.alipay.sdk.protocol.a r3 = com.alipay.sdk.protocol.a.a
            if (r2 != r3) goto L23
            goto L35
        L23:
            com.alipay.sdk.protocol.b r3 = new com.alipay.sdk.protocol.b
            r4 = r5[r1]
            r3.<init>(r4, r2)
            r2 = r5[r1]
            java.lang.String[] r2 = a(r2)
            r3.c = r2
            r0.add(r3)
        L35:
            int r1 = r1 + 1
            goto L15
        L38:
            return r0
    }

    public static void a(com.alipay.sdk.protocol.b r4) {
            java.lang.String[] r4 = r4.c()
            int r0 = r4.length
            r1 = 3
            if (r0 == r1) goto L9
            return
        L9:
            r0 = 0
            r0 = r4[r0]
            java.lang.String r1 = "tid"
            boolean r0 = android.text.TextUtils.equals(r1, r0)
            if (r0 == 0) goto L3b
            com.alipay.sdk.sys.b r0 = com.alipay.sdk.sys.b.a()
            android.content.Context r0 = r0.b()
            com.alipay.sdk.tid.b r0 = com.alipay.sdk.tid.b.a(r0)
            r1 = 1
            r2 = r4[r1]
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L3b
            r2 = 2
            r3 = r4[r2]
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto L33
            goto L3b
        L33:
            r1 = r4[r1]
            r4 = r4[r2]
            r0.a(r1, r4)
        L3b:
            return
    }

    private static java.lang.String[] a(java.lang.String r7) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 40
            int r1 = r7.indexOf(r1)
            r2 = 41
            int r2 = r7.lastIndexOf(r2)
            r3 = -1
            if (r1 == r3) goto L4d
            if (r2 == r3) goto L4d
            if (r2 > r1) goto L19
            goto L4d
        L19:
            int r1 = r1 + 1
            java.lang.String r7 = r7.substring(r1, r2)
            java.lang.String r1 = "' *, *'"
            java.lang.String[] r7 = r7.split(r1, r3)
            int r1 = r7.length
            r2 = 0
            r3 = 0
        L28:
            if (r3 >= r1) goto L44
            r4 = r7[r3]
            java.lang.String r4 = r4.trim()
            java.lang.String r5 = ""
            java.lang.String r6 = "'"
            java.lang.String r4 = r4.replaceAll(r6, r5)
            java.lang.String r6 = "\""
            java.lang.String r4 = r4.replaceAll(r6, r5)
            r0.add(r4)
            int r3 = r3 + 1
            goto L28
        L44:
            java.lang.String[] r7 = new java.lang.String[r2]
            java.lang.Object[] r7 = r0.toArray(r7)
            java.lang.String[] r7 = (java.lang.String[]) r7
            return r7
        L4d:
            r7 = 0
            return r7
    }

    private static java.lang.String[] b(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto Ld
            java.lang.String r0 = ";"
            java.lang.String[] r1 = r1.split(r0)
            goto Le
        Ld:
            r1 = 0
        Le:
            return r1
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public com.alipay.sdk.protocol.a b() {
            r1 = this;
            com.alipay.sdk.protocol.a r0 = r1.a
            return r0
    }

    public java.lang.String[] c() {
            r1 = this;
            java.lang.String[] r0 = r1.c
            return r0
    }
}
