package com.mbridge.msdk.foundation.entity;

public final class i {
    private java.lang.String a;
    private java.lang.String b;

    public i() {
            r0 = this;
            r0.<init>()
            return
    }

    public i(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    public static java.lang.String a(java.util.Set<com.mbridge.msdk.foundation.entity.i> r6) {
            if (r6 == 0) goto L66
            int r0 = r6.size()     // Catch: java.lang.Exception -> L66
            if (r0 <= 0) goto L66
            java.lang.String r0 = "[{$native_info}]"
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Exception -> L66
            r1.<init>()     // Catch: java.lang.Exception -> L66
            java.util.Iterator r6 = r6.iterator()     // Catch: java.lang.Exception -> L66
        L13:
            boolean r2 = r6.hasNext()     // Catch: java.lang.Exception -> L66
            java.lang.String r3 = ","
            if (r2 == 0) goto L56
            java.lang.Object r2 = r6.next()     // Catch: java.lang.Exception -> L66
            com.mbridge.msdk.foundation.entity.i r2 = (com.mbridge.msdk.foundation.entity.i) r2     // Catch: java.lang.Exception -> L66
            java.lang.String r4 = "{\"campaignId\":"
            r1.append(r4)     // Catch: java.lang.Exception -> L66
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L66
            r4.<init>()     // Catch: java.lang.Exception -> L66
            java.lang.String r5 = r2.a     // Catch: java.lang.Exception -> L66
            r4.append(r5)     // Catch: java.lang.Exception -> L66
            r4.append(r3)     // Catch: java.lang.Exception -> L66
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Exception -> L66
            r1.append(r3)     // Catch: java.lang.Exception -> L66
            java.lang.String r3 = "\"packageName\":"
            r1.append(r3)     // Catch: java.lang.Exception -> L66
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L66
            r3.<init>()     // Catch: java.lang.Exception -> L66
            java.lang.String r2 = r2.b     // Catch: java.lang.Exception -> L66
            r3.append(r2)     // Catch: java.lang.Exception -> L66
            java.lang.String r2 = "},"
            r3.append(r2)     // Catch: java.lang.Exception -> L66
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Exception -> L66
            r1.append(r2)     // Catch: java.lang.Exception -> L66
            goto L13
        L56:
            java.lang.String r6 = "{$native_info}"
            r2 = 0
            int r3 = r1.lastIndexOf(r3)     // Catch: java.lang.Exception -> L66
            java.lang.CharSequence r1 = r1.subSequence(r2, r3)     // Catch: java.lang.Exception -> L66
            java.lang.String r6 = r0.replace(r6, r1)     // Catch: java.lang.Exception -> L66
            return r6
        L66:
            r6 = 0
            return r6
    }

    public final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public final java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public final void b(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 != 0) goto L8
            return r1
        L8:
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L13
            return r1
        L13:
            com.mbridge.msdk.foundation.entity.i r5 = (com.mbridge.msdk.foundation.entity.i) r5
            java.lang.String r2 = r4.a
            if (r2 != 0) goto L1e
            java.lang.String r2 = r5.a
            if (r2 == 0) goto L27
            return r1
        L1e:
            java.lang.String r3 = r5.a
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L27
            return r1
        L27:
            java.lang.String r2 = r4.b
            if (r2 != 0) goto L30
            java.lang.String r5 = r5.b
            if (r5 == 0) goto L39
            return r1
        L30:
            java.lang.String r5 = r5.b
            boolean r5 = r2.equals(r5)
            if (r5 != 0) goto L39
            return r1
        L39:
            return r0
    }

    public final int hashCode() {
            r3 = this;
            java.lang.String r0 = r3.a
            r1 = 0
            if (r0 != 0) goto L7
            r0 = r1
            goto Lb
        L7:
            int r0 = r0.hashCode()
        Lb:
            r2 = 31
            int r0 = r0 + r2
            int r0 = r0 * r2
            java.lang.String r2 = r3.b
            if (r2 != 0) goto L14
            goto L18
        L14:
            int r1 = r2.hashCode()
        L18:
            int r0 = r0 + r1
            return r0
    }
}
