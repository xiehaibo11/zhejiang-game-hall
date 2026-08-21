package com.ta.utdid2.device;

public class b {
    private static com.ta.utdid2.device.a a;
    static final java.lang.Object d = null;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.ta.utdid2.device.b.d = r0
            return
    }

    static long a(com.ta.utdid2.device.a r4) {
            if (r4 == 0) goto L4c
            r0 = 5
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.String r2 = r4.getUtdid()
            r0[r1] = r2
            r1 = 1
            java.lang.String r2 = r4.getDeviceId()
            r0[r1] = r2
            r1 = 2
            long r2 = r4.a()
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            r0[r1] = r2
            r1 = 3
            java.lang.String r2 = r4.getImsi()
            r0[r1] = r2
            r1 = 4
            java.lang.String r4 = r4.getImei()
            r0[r1] = r4
            java.lang.String r4 = "%s%s%s%s%s"
            java.lang.String r4 = java.lang.String.format(r4, r0)
            boolean r0 = com.ta.utdid2.a.a.f.isEmpty(r4)
            if (r0 != 0) goto L4c
            java.util.zip.Adler32 r0 = new java.util.zip.Adler32
            r0.<init>()
            r0.reset()
            byte[] r4 = r4.getBytes()
            r0.update(r4)
            long r0 = r0.getValue()
            return r0
        L4c:
            r0 = 0
            return r0
    }

    private static com.ta.utdid2.device.a a(android.content.Context r6) {
            if (r6 == 0) goto L54
            java.lang.Object r0 = com.ta.utdid2.device.b.d
            monitor-enter(r0)
            com.ta.utdid2.device.c r1 = com.ta.utdid2.device.c.a(r6)     // Catch: java.lang.Throwable -> L51
            java.lang.String r1 = r1.getValue()     // Catch: java.lang.Throwable -> L51
            boolean r2 = com.ta.utdid2.a.a.f.isEmpty(r1)     // Catch: java.lang.Throwable -> L51
            if (r2 != 0) goto L4f
            java.lang.String r2 = "\n"
            boolean r2 = r1.endsWith(r2)     // Catch: java.lang.Throwable -> L51
            if (r2 == 0) goto L26
            r2 = 0
            int r3 = r1.length()     // Catch: java.lang.Throwable -> L51
            int r3 = r3 + (-1)
            java.lang.String r1 = r1.substring(r2, r3)     // Catch: java.lang.Throwable -> L51
        L26:
            com.ta.utdid2.device.a r2 = new com.ta.utdid2.device.a     // Catch: java.lang.Throwable -> L51
            r2.<init>()     // Catch: java.lang.Throwable -> L51
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L51
            java.lang.String r5 = com.ta.utdid2.a.a.d.getImei(r6)     // Catch: java.lang.Throwable -> L51
            java.lang.String r6 = com.ta.utdid2.a.a.d.getImsi(r6)     // Catch: java.lang.Throwable -> L51
            r2.b(r5)     // Catch: java.lang.Throwable -> L51
            r2.setImei(r5)     // Catch: java.lang.Throwable -> L51
            r2.b(r3)     // Catch: java.lang.Throwable -> L51
            r2.setImsi(r6)     // Catch: java.lang.Throwable -> L51
            r2.c(r1)     // Catch: java.lang.Throwable -> L51
            long r3 = a(r2)     // Catch: java.lang.Throwable -> L51
            r2.a(r3)     // Catch: java.lang.Throwable -> L51
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L51
            return r2
        L4f:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L51
            goto L54
        L51:
            r6 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L51
            throw r6
        L54:
            r6 = 0
            return r6
    }

    public static synchronized com.ta.utdid2.device.a b(android.content.Context r2) {
            java.lang.Class<com.ta.utdid2.device.b> r0 = com.ta.utdid2.device.b.class
            monitor-enter(r0)
            com.ta.utdid2.device.a r1 = com.ta.utdid2.device.b.a     // Catch: java.lang.Throwable -> L18
            if (r1 == 0) goto Lb
            com.ta.utdid2.device.a r2 = com.ta.utdid2.device.b.a     // Catch: java.lang.Throwable -> L18
            monitor-exit(r0)
            return r2
        Lb:
            if (r2 == 0) goto L15
            com.ta.utdid2.device.a r2 = a(r2)     // Catch: java.lang.Throwable -> L18
            com.ta.utdid2.device.b.a = r2     // Catch: java.lang.Throwable -> L18
            monitor-exit(r0)
            return r2
        L15:
            r2 = 0
            monitor-exit(r0)
            return r2
        L18:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }
}
