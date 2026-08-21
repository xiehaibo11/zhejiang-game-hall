package com.xiaomi.push;

public class ce extends com.xiaomi.push.cj.b<java.lang.Long> {
    private long a;
    private java.lang.String a;

    public ce(java.lang.String r1, java.util.List<java.lang.String> r2, java.lang.String r3, java.lang.String[] r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, int r8, java.lang.String r9) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            r1 = 0
            r0.a = r1
            r0.a = r9
            return
    }

    public static com.xiaomi.push.ce a(java.lang.String r11) {
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.lang.String r0 = "count(*)"
            r2.add(r0)
            com.xiaomi.push.ce r10 = new com.xiaomi.push.ce
            r3 = 0
            r4 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            java.lang.String r9 = "job to get count of all message"
            r0 = r10
            r1 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            return r10
    }

    @Override
    public java.lang.Long a(android.content.Context r1, android.database.Cursor r2) {
            r0 = this;
            r1 = 0
            long r1 = r2.getLong(r1)
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            return r1
    }

    @Override
    public java.lang.Object a() {
            r2 = this;
            long r0 = r2.a
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            return r0
    }

    @Override
    public java.lang.Long a(android.content.Context r1, android.database.Cursor r2) {
            r0 = this;
            java.lang.Long r1 = r0.a(r1, r2)
            return r1
    }

    @Override
    public void a(android.content.Context r1, java.util.List<java.lang.Long> r2) {
            r0 = this;
            if (r1 == 0) goto L17
            if (r2 == 0) goto L17
            int r1 = r2.size()
            if (r1 <= 0) goto L17
            r1 = 0
            java.lang.Object r1 = r2.get(r1)
            java.lang.Long r1 = (java.lang.Long) r1
            long r1 = r1.longValue()
            r0.a = r1
        L17:
            return
    }
}
