package com.huawei.hms.hatool;

public class t {
    public java.util.List<com.huawei.hms.hatool.q> a;
    public java.lang.String b;
    public java.lang.String c;
    public java.lang.String d;

    public t(java.util.List<com.huawei.hms.hatool.q> r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            r0.d = r4
            return
    }

    public void a() {
            r13 = this;
            java.lang.String r0 = r13.c
            java.lang.String r1 = "_default_config_tag"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L78
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            java.util.List<com.huawei.hms.hatool.q> r5 = r13.a
            java.util.Iterator r5 = r5.iterator()
        L24:
            boolean r6 = r5.hasNext()
            java.lang.String r7 = "diffprivacy"
            java.lang.String r8 = "preins"
            java.lang.String r9 = "maint"
            java.lang.String r10 = "oper"
            if (r6 == 0) goto L6b
            java.lang.Object r6 = r5.next()
            com.huawei.hms.hatool.q r6 = (com.huawei.hms.hatool.q) r6
            java.lang.String r11 = r6.c()
            boolean r12 = android.text.TextUtils.isEmpty(r11)
            if (r12 != 0) goto L67
            boolean r10 = r10.equals(r11)
            if (r10 == 0) goto L49
            goto L67
        L49:
            boolean r9 = r9.equals(r11)
            if (r9 == 0) goto L53
            r0.add(r6)
            goto L24
        L53:
            boolean r8 = r8.equals(r11)
            if (r8 == 0) goto L5d
            r2.add(r6)
            goto L24
        L5d:
            boolean r7 = r7.equals(r11)
            if (r7 == 0) goto L24
            r3.add(r6)
            goto L24
        L67:
            r4.add(r6)
            goto L24
        L6b:
            r13.a(r4, r10, r1)
            r13.a(r0, r9, r1)
            r13.a(r2, r8, r1)
            r13.a(r3, r7, r1)
            goto L81
        L78:
            java.util.List<com.huawei.hms.hatool.q> r0 = r13.a
            java.lang.String r1 = r13.c
            java.lang.String r2 = r13.b
            r13.a(r0, r1, r2)
        L81:
            return
    }

    public final void a(java.util.List<com.huawei.hms.hatool.q> r13, java.lang.String r14, java.lang.String r15) {
            r12 = this;
            boolean r0 = r13.isEmpty()
            if (r0 == 0) goto L7
            return
        L7:
            int r0 = r13.size()
            int r0 = r0 / 500
            int r0 = r0 + 1
            r1 = 0
        L10:
            if (r1 >= r0) goto L80
            int r2 = r1 * 500
            int r3 = r13.size()
            int r4 = r2 + 500
            int r3 = java.lang.Math.min(r3, r4)
            java.util.List r2 = r13.subList(r2, r3)
            java.util.UUID r3 = java.util.UUID.randomUUID()
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "-"
            java.lang.String r5 = ""
            java.lang.String r11 = r3.replace(r4, r5)
            long r3 = java.lang.System.currentTimeMillis()
            int r5 = com.huawei.hms.hatool.c.b(r15, r14)
            long r5 = (long) r5
            r7 = 86400000(0x5265c00, double:4.2687272E-316)
            long r5 = r5 * r7
            java.util.ArrayList r10 = new java.util.ArrayList
            r10.<init>()
            java.util.Iterator r2 = r2.iterator()
        L48:
            boolean r7 = r2.hasNext()
            if (r7 == 0) goto L62
            java.lang.Object r7 = r2.next()
            com.huawei.hms.hatool.q r7 = (com.huawei.hms.hatool.q) r7
            java.lang.String r8 = r7.b()
            boolean r8 = com.huawei.hms.hatool.p0.a(r8, r3, r5)
            if (r8 != 0) goto L48
            r10.add(r7)
            goto L48
        L62:
            int r2 = r10.size()
            if (r2 <= 0) goto L76
            com.huawei.hms.hatool.u r2 = new com.huawei.hms.hatool.u
            java.lang.String r9 = r12.d
            r6 = r2
            r7 = r15
            r8 = r14
            r6.<init>(r7, r8, r9, r10, r11)
            r2.a()
            goto L7d
        L76:
            java.lang.String r2 = "hmsSdk"
            java.lang.String r3 = "No data to report handler"
            com.huawei.hms.hatool.y.e(r2, r3)
        L7d:
            int r1 = r1 + 1
            goto L10
        L80:
            return
    }
}
