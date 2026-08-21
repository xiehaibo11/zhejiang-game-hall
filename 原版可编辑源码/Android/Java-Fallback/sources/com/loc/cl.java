package com.loc;

public final class cl extends com.loc.co {
    private java.lang.String a;
    private android.content.Context b;
    private boolean d;
    private int e;
    private int f;
    private int g;

    public cl(android.content.Context r9, boolean r10, int r11, int r12, java.lang.String r13) {
            r8 = this;
            r8.<init>()
            java.lang.String r0 = "iKey"
            r8.a = r0
            r0 = 0
            r8.g = r0
            r7 = 0
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r1.a(r2, r3, r4, r5, r6, r7)
            return
    }

    public cl(android.content.Context r2, boolean r3, int r4, int r5, java.lang.String r6, int r7) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "iKey"
            r1.a = r0
            r0 = 0
            r1.g = r0
            r1.a(r2, r3, r4, r5, r6, r7)
            return
    }

    private void a(android.content.Context r1, boolean r2, int r3, int r4, java.lang.String r5, int r6) {
            r0 = this;
            r0.b = r1
            r0.d = r2
            r0.e = r3
            r0.f = r4
            r0.a = r5
            r0.g = r6
            return
    }

    @Override
    public final void a(int r6) {
            r5 = this;
            android.content.Context r0 = r5.b
            int r0 = com.loc.o.j(r0)
            r1 = 1
            if (r0 != r1) goto La
            return
        La:
            long r2 = java.lang.System.currentTimeMillis()
            java.lang.String r0 = "yyyyMMdd"
            java.lang.String r0 = com.loc.x.a(r2, r0)
            android.content.Context r2 = r5.b
            java.lang.String r3 = r5.a
            java.lang.String r2 = com.loc.at.a(r2, r3)
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L47
            java.lang.String r3 = "\\|"
            java.lang.String[] r2 = r2.split(r3)
            if (r2 == 0) goto L40
            int r3 = r2.length
            r4 = 2
            if (r3 >= r4) goto L2f
            goto L40
        L2f:
            r3 = 0
            r3 = r2[r3]
            boolean r3 = r0.equals(r3)
            if (r3 == 0) goto L47
            r1 = r2[r1]
            int r1 = java.lang.Integer.parseInt(r1)
            int r6 = r6 + r1
            goto L47
        L40:
            android.content.Context r1 = r5.b
            java.lang.String r2 = r5.a
            com.loc.at.b(r1, r2)
        L47:
            android.content.Context r1 = r5.b
            java.lang.String r2 = r5.a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            java.lang.String r0 = "|"
            r3.append(r0)
            r3.append(r6)
            java.lang.String r6 = r3.toString()
            com.loc.at.a(r1, r2, r6)
            return
    }

    @Override
    protected final boolean a() {
            r7 = this;
            android.content.Context r0 = r7.b
            int r0 = com.loc.o.j(r0)
            r1 = 1
            if (r0 != r1) goto La
            return r1
        La:
            boolean r0 = r7.d
            r2 = 0
            if (r0 != 0) goto L10
            return r2
        L10:
            android.content.Context r0 = r7.b
            java.lang.String r3 = r7.a
            java.lang.String r0 = com.loc.at.a(r0, r3)
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            if (r3 == 0) goto L1f
            return r1
        L1f:
            java.lang.String r3 = "\\|"
            java.lang.String[] r0 = r0.split(r3)
            if (r0 == 0) goto L4a
            int r3 = r0.length
            r4 = 2
            if (r3 >= r4) goto L2c
            goto L4a
        L2c:
            r3 = r0[r2]
            long r4 = java.lang.System.currentTimeMillis()
            java.lang.String r6 = "yyyyMMdd"
            java.lang.String r4 = com.loc.x.a(r4, r6)
            boolean r3 = r4.equals(r3)
            if (r3 == 0) goto L49
            r0 = r0[r1]
            int r0 = java.lang.Integer.parseInt(r0)
            int r3 = r7.f
            if (r0 < r3) goto L49
            return r2
        L49:
            return r1
        L4a:
            android.content.Context r0 = r7.b
            java.lang.String r2 = r7.a
            com.loc.at.b(r0, r2)
            return r1
    }

    @Override
    public final int b() {
            r3 = this;
            android.content.Context r0 = r3.b
            int r0 = com.loc.o.j(r0)
            r1 = 2147483647(0x7fffffff, float:NaN)
            r2 = 1
            if (r0 == r2) goto L13
            int r0 = r3.e
            if (r0 > 0) goto L11
            goto L13
        L11:
            r1 = r0
            goto L1a
        L13:
            int r0 = r3.g
            if (r0 <= 0) goto L1a
            if (r0 >= r1) goto L1a
            goto L11
        L1a:
            com.loc.co r0 = r3.c
            if (r0 == 0) goto L29
            com.loc.co r0 = r3.c
            int r0 = r0.b()
            int r0 = java.lang.Math.max(r1, r0)
            return r0
        L29:
            return r1
    }
}
