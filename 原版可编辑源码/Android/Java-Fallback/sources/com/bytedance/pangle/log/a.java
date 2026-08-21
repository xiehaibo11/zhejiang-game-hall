package com.bytedance.pangle.log;

public final class a {
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private long d;
    private long e;

    private a(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            r2.<init>()
            r2.a = r3
            r2.b = r4
            r2.c = r5
            long r3 = java.lang.System.currentTimeMillis()
            r2.e = r3
            r2.d = r3
            java.lang.String r3 = r2.a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = r2.b
            r4.append(r0)
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r5
            java.lang.String r5 = " watcher[%s]-start"
            java.lang.String r5 = java.lang.String.format(r5, r0)
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.bytedance.pangle.log.ZeusLogger.i(r3, r4)
            return
    }

    public static com.bytedance.pangle.log.a a(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            com.bytedance.pangle.log.a r0 = new com.bytedance.pangle.log.a
            r0.<init>(r1, r2, r3)
            return r0
    }

    public final long a() {
            r4 = this;
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r4.d
            long r0 = r0 - r2
            return r0
    }

    public final long a(java.lang.String r10) {
            r9 = this;
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r9.e
            long r0 = r0 - r2
            long r2 = java.lang.System.currentTimeMillis()
            long r4 = r9.d
            long r2 = r2 - r4
            java.lang.String r4 = r9.a
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = r9.b
            r5.append(r6)
            r6 = 4
            java.lang.Object[] r6 = new java.lang.Object[r6]
            java.lang.String r7 = r9.c
            r8 = 0
            r6[r8] = r7
            r7 = 1
            r6[r7] = r10
            java.lang.Long r10 = java.lang.Long.valueOf(r0)
            r0 = 2
            r6[r0] = r10
            java.lang.Long r10 = java.lang.Long.valueOf(r2)
            r0 = 3
            r6[r0] = r10
            java.lang.String r10 = " watcher[%s]-%s cost=%s, total=%s"
            java.lang.String r10 = java.lang.String.format(r10, r6)
            r5.append(r10)
            java.lang.String r10 = r5.toString()
            com.bytedance.pangle.log.ZeusLogger.i(r4, r10)
            return r2
    }
}
