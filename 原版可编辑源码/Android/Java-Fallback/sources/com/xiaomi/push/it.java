package com.xiaomi.push;

public class it {
    public static short a(android.content.Context r0, com.xiaomi.push.if r1) {
            java.lang.String r1 = r1.b
            short r0 = a(r0, r1)
            return r0
    }

    public static short a(android.content.Context r2, java.lang.String r3) {
            r0 = 0
            com.xiaomi.push.h$a r3 = com.xiaomi.push.h.a(r2, r3, r0)
            int r3 = r3.a()
            int r3 = r3 + r0
            boolean r1 = com.xiaomi.push.ak.b(r2)
            if (r1 == 0) goto L12
            r1 = 4
            goto L13
        L12:
            r1 = r0
        L13:
            int r3 = r3 + r1
            boolean r1 = com.xiaomi.push.ak.a(r2)
            if (r1 == 0) goto L1d
            r1 = 8
            goto L1e
        L1d:
            r1 = r0
        L1e:
            int r3 = r3 + r1
            boolean r2 = com.xiaomi.push.service.ax.a(r2)
            if (r2 == 0) goto L27
            r0 = 16
        L27:
            int r3 = r3 + r0
            short r2 = (short) r3
            return r2
    }

    public static <T extends com.xiaomi.push.iu<T, ?>> void a(T r4, byte[] r5) {
            if (r5 == 0) goto L12
            com.xiaomi.push.iy r0 = new com.xiaomi.push.iy
            com.xiaomi.push.jl$a r1 = new com.xiaomi.push.jl$a
            int r2 = r5.length
            r3 = 1
            r1.<init>(r3, r3, r2)
            r0.<init>(r1)
            r0.a(r4, r5)
            return
        L12:
            com.xiaomi.push.iz r4 = new com.xiaomi.push.iz
            java.lang.String r5 = "the message byte is empty."
            r4.<init>(r5)
            throw r4
    }

    public static <T extends com.xiaomi.push.iu<T, ?>> byte[] a(T r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            com.xiaomi.push.ja r1 = new com.xiaomi.push.ja     // Catch: com.xiaomi.push.iz -> L13
            com.xiaomi.push.jb$a r2 = new com.xiaomi.push.jb$a     // Catch: com.xiaomi.push.iz -> L13
            r2.<init>()     // Catch: com.xiaomi.push.iz -> L13
            r1.<init>(r2)     // Catch: com.xiaomi.push.iz -> L13
            byte[] r3 = r1.a(r3)     // Catch: com.xiaomi.push.iz -> L13
            return r3
        L13:
            r3 = move-exception
            java.lang.String r1 = "convertThriftObjectToBytes catch TException."
            com.xiaomi.channel.commonutils.logger.b.a(r1, r3)
            return r0
    }
}
