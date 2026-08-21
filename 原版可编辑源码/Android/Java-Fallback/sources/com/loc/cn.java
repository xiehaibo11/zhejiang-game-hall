package com.loc;

public final class cn extends com.loc.co {
    protected int a;
    protected long b;
    private java.lang.String d;
    private android.content.Context e;

    public cn(android.content.Context r1, int r2, java.lang.String r3, com.loc.co r4) {
            r0 = this;
            r0.<init>(r4)
            r0.a = r2
            r0.d = r3
            r0.e = r1
            return
    }

    @Override
    public final void a(boolean r4) {
            r3 = this;
            super.a(r4)
            if (r4 == 0) goto L16
            java.lang.String r4 = r3.d
            long r0 = java.lang.System.currentTimeMillis()
            r3.b = r0
            android.content.Context r2 = r3.e
            java.lang.String r0 = java.lang.String.valueOf(r0)
            com.loc.at.a(r2, r4, r0)
        L16:
            return
    }

    @Override
    protected final boolean a() {
            r5 = this;
            long r0 = r5.b
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 != 0) goto L1d
            java.lang.String r0 = r5.d
            android.content.Context r1 = r5.e
            java.lang.String r0 = com.loc.at.a(r1, r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L17
            goto L1b
        L17:
            long r2 = java.lang.Long.parseLong(r0)
        L1b:
            r5.b = r2
        L1d:
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r5.b
            long r0 = r0 - r2
            int r2 = r5.a
            long r2 = (long) r2
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 >= 0) goto L2d
            r0 = 0
            return r0
        L2d:
            r0 = 1
            return r0
    }
}
