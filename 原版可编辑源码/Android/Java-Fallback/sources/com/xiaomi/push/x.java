package com.xiaomi.push;

public final class x {
    private static final java.util.Set<java.lang.String> a = null;
    private android.content.Context a;
    private java.io.RandomAccessFile a;
    private java.lang.String a;
    private java.nio.channels.FileLock a;

    static {
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            java.util.Set r0 = java.util.Collections.synchronizedSet(r0)
            com.xiaomi.push.x.a = r0
            return
    }

    private x(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public static com.xiaomi.push.x a(android.content.Context r3, java.io.File r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Locking: "
            r0.append(r1)
            java.lang.String r1 = r4.getAbsolutePath()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r4 = r4.getAbsolutePath()
            r0.append(r4)
            java.lang.String r4 = ".LOCK"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.io.File r0 = new java.io.File
            r0.<init>(r4)
            boolean r1 = r0.exists()
            if (r1 != 0) goto L42
            java.io.File r1 = r0.getParentFile()
            r1.mkdirs()
            r0.createNewFile()
        L42:
            java.util.Set<java.lang.String> r1 = com.xiaomi.push.x.a
            boolean r1 = r1.add(r4)
            if (r1 == 0) goto La9
            com.xiaomi.push.x r1 = new com.xiaomi.push.x
            r1.<init>(r3)
            r1.a = r4
            java.io.RandomAccessFile r3 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L95
            java.lang.String r2 = "rw"
            r3.<init>(r0, r2)     // Catch: java.lang.Throwable -> L95
            r1.a = r3     // Catch: java.lang.Throwable -> L95
            java.nio.channels.FileChannel r3 = r3.getChannel()     // Catch: java.lang.Throwable -> L95
            java.nio.channels.FileLock r3 = r3.lock()     // Catch: java.lang.Throwable -> L95
            r1.a = r3     // Catch: java.lang.Throwable -> L95
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L95
            r3.<init>()     // Catch: java.lang.Throwable -> L95
            java.lang.String r0 = "Locked: "
            r3.append(r0)     // Catch: java.lang.Throwable -> L95
            r3.append(r4)     // Catch: java.lang.Throwable -> L95
            java.lang.String r4 = " :"
            r3.append(r4)     // Catch: java.lang.Throwable -> L95
            java.nio.channels.FileLock r4 = r1.a     // Catch: java.lang.Throwable -> L95
            r3.append(r4)     // Catch: java.lang.Throwable -> L95
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L95
            com.xiaomi.channel.commonutils.logger.b.c(r3)     // Catch: java.lang.Throwable -> L95
            java.nio.channels.FileLock r3 = r1.a
            if (r3 != 0) goto L94
            java.io.RandomAccessFile r3 = r1.a
            if (r3 == 0) goto L8d
            com.xiaomi.push.ab.a(r3)
        L8d:
            java.util.Set<java.lang.String> r3 = com.xiaomi.push.x.a
            java.lang.String r4 = r1.a
            r3.remove(r4)
        L94:
            return r1
        L95:
            r3 = move-exception
            java.nio.channels.FileLock r4 = r1.a
            if (r4 != 0) goto La8
            java.io.RandomAccessFile r4 = r1.a
            if (r4 == 0) goto La1
            com.xiaomi.push.ab.a(r4)
        La1:
            java.util.Set<java.lang.String> r4 = com.xiaomi.push.x.a
            java.lang.String r0 = r1.a
            r4.remove(r0)
        La8:
            throw r3
        La9:
            java.io.IOException r3 = new java.io.IOException
            java.lang.String r4 = "abtain lock failure"
            r3.<init>(r4)
            throw r3
    }

    public void a() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "unLock: "
            r0.append(r1)
            java.nio.channels.FileLock r1 = r2.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r0)
            java.nio.channels.FileLock r0 = r2.a
            if (r0 == 0) goto L28
            boolean r0 = r0.isValid()
            if (r0 == 0) goto L28
            java.nio.channels.FileLock r0 = r2.a     // Catch: java.io.IOException -> L25
            r0.release()     // Catch: java.io.IOException -> L25
        L25:
            r0 = 0
            r2.a = r0
        L28:
            java.io.RandomAccessFile r0 = r2.a
            if (r0 == 0) goto L2f
            com.xiaomi.push.ab.a(r0)
        L2f:
            java.util.Set<java.lang.String> r0 = com.xiaomi.push.x.a
            java.lang.String r1 = r2.a
            r0.remove(r1)
            return
    }
}
