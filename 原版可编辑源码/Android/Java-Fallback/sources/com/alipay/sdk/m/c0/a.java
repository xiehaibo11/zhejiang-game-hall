package com.alipay.sdk.m.c0;

public final class a {
    public java.lang.String a;
    public java.lang.String b;
    public java.lang.String c;
    public java.lang.String d;
    public java.lang.String e;
    public java.lang.String f;
    public java.lang.String g;

    public a(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            r0.d = r4
            r0.e = r5
            r0.f = r6
            r0.g = r7
            return
    }

    public final java.lang.String toString() {
            r6 = this;
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "yyyyMMddHHmmssSSS"
            r0.<init>(r1)
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            java.util.Calendar r2 = java.util.Calendar.getInstance()
            java.util.Date r2 = r2.getTime()
            java.lang.String r0 = r0.format(r2)
            r1.<init>(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = ","
            r0.<init>(r2)
            java.lang.String r3 = r6.a
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r1.append(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r2)
            java.lang.String r3 = r6.b
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r1.append(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r2)
            java.lang.String r3 = r6.c
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r1.append(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r2)
            java.lang.String r3 = r6.d
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r1.append(r0)
            java.lang.String r0 = r6.e
            boolean r0 = com.alipay.sdk.m.z.a.a(r0)
            r3 = 0
            r4 = 20
            if (r0 != 0) goto L7e
            java.lang.String r0 = r6.e
            int r0 = r0.length()
            if (r0 >= r4) goto L72
            goto L7e
        L72:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r2)
            java.lang.String r5 = r6.e
            java.lang.String r5 = r5.substring(r3, r4)
            goto L85
        L7e:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r2)
            java.lang.String r5 = r6.e
        L85:
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            r1.append(r0)
            java.lang.String r0 = r6.f
            boolean r0 = com.alipay.sdk.m.z.a.a(r0)
            if (r0 != 0) goto Lac
            java.lang.String r0 = r6.f
            int r0 = r0.length()
            if (r0 >= r4) goto La0
            goto Lac
        La0:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r2)
            java.lang.String r5 = r6.f
            java.lang.String r5 = r5.substring(r3, r4)
            goto Lb3
        Lac:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r2)
            java.lang.String r5 = r6.f
        Lb3:
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            r1.append(r0)
            java.lang.String r0 = r6.g
            boolean r0 = com.alipay.sdk.m.z.a.a(r0)
            if (r0 != 0) goto Lda
            java.lang.String r0 = r6.g
            int r0 = r0.length()
            if (r0 >= r4) goto Lce
            goto Lda
        Lce:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r2)
            java.lang.String r2 = r6.g
            java.lang.String r2 = r2.substring(r3, r4)
            goto Le1
        Lda:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r2)
            java.lang.String r2 = r6.g
        Le1:
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            return r0
    }
}
