package com.huawei.updatesdk.a.a.b;

public final class a {
    private static final com.huawei.updatesdk.a.a.b.a b = null;
    private final java.util.Queue<byte[]> a;

    static {
            com.huawei.updatesdk.a.a.b.a r0 = new com.huawei.updatesdk.a.a.b.a
            r0.<init>()
            com.huawei.updatesdk.a.a.b.a.b = r0
            return
    }

    private a() {
            r2 = this;
            r2.<init>()
            java.util.ArrayDeque r0 = new java.util.ArrayDeque
            r1 = 0
            r0.<init>(r1)
            r2.a = r0
            return
    }

    public static com.huawei.updatesdk.a.a.b.a b() {
            com.huawei.updatesdk.a.a.b.a r0 = com.huawei.updatesdk.a.a.b.a.b
            return r0
    }

    public void a(byte[] r4) {
            r3 = this;
            int r0 = r4.length
            r1 = 65536(0x10000, float:9.1835E-41)
            if (r0 != r1) goto L26
            java.util.Queue<byte[]> r0 = r3.a
            monitor-enter(r0)
            java.util.Queue<byte[]> r1 = r3.a     // Catch: java.lang.Throwable -> L23
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L23
            r2 = 32
            if (r1 >= r2) goto L21
            java.util.Queue<byte[]> r1 = r3.a     // Catch: java.lang.Throwable -> L23
            boolean r4 = r1.offer(r4)     // Catch: java.lang.Throwable -> L23
            if (r4 != 0) goto L21
            java.lang.String r4 = "ByteArrayPool"
            java.lang.String r1 = "releaseBytes false"
            com.huawei.updatesdk.a.a.c.a.a.a.a(r4, r1)     // Catch: java.lang.Throwable -> L23
        L21:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L23
            goto L26
        L23:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L23
            throw r4
        L26:
            return
    }

    public byte[] a() {
            r2 = this;
            java.util.Queue<byte[]> r0 = r2.a
            monitor-enter(r0)
            java.util.Queue<byte[]> r1 = r2.a     // Catch: java.lang.Throwable -> L13
            java.lang.Object r1 = r1.poll()     // Catch: java.lang.Throwable -> L13
            byte[] r1 = (byte[]) r1     // Catch: java.lang.Throwable -> L13
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
            if (r1 != 0) goto L12
            r0 = 65536(0x10000, float:9.1835E-41)
            byte[] r1 = new byte[r0]
        L12:
            return r1
        L13:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
            throw r1
    }
}
