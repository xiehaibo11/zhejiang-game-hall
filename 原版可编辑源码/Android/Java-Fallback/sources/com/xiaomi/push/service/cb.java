package com.xiaomi.push.service;

final class cb implements java.lang.Runnable {
    final android.content.Context a;
    final com.xiaomi.push.hn a;

    cb(android.content.Context r1, com.xiaomi.push.hn r2) {
            r0 = this;
            r0.a = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r5 = this;
            java.lang.Object r0 = com.xiaomi.push.service.ca.a
            monitor-enter(r0)
            r1 = 0
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L43
            android.content.Context r3 = r5.a     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L43
            java.io.File r3 = r3.getFilesDir()     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L43
            java.lang.String r4 = "tiny_data.lock"
            r2.<init>(r3, r4)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L43
            com.xiaomi.push.ab.a(r2)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L43
            java.io.RandomAccessFile r3 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L43
            java.lang.String r4 = "rw"
            r3.<init>(r2, r4)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L43
            java.nio.channels.FileChannel r2 = r3.getChannel()     // Catch: java.lang.Exception -> L3e java.lang.Throwable -> L5d
            java.nio.channels.FileLock r1 = r2.lock()     // Catch: java.lang.Exception -> L3e java.lang.Throwable -> L5d
            android.content.Context r2 = r5.a     // Catch: java.lang.Exception -> L3e java.lang.Throwable -> L5d
            com.xiaomi.push.hn r4 = r5.a     // Catch: java.lang.Exception -> L3e java.lang.Throwable -> L5d
            com.xiaomi.push.service.ca.b(r2, r4)     // Catch: java.lang.Exception -> L3e java.lang.Throwable -> L5d
            if (r1 == 0) goto L3a
            boolean r2 = r1.isValid()     // Catch: java.lang.Throwable -> L5b
            if (r2 == 0) goto L3a
            r1.release()     // Catch: java.io.IOException -> L36 java.lang.Throwable -> L5b
            goto L3a
        L36:
            r1 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r1)     // Catch: java.lang.Throwable -> L5b
        L3a:
            com.xiaomi.push.ab.a(r3)     // Catch: java.lang.Throwable -> L5b
            goto L59
        L3e:
            r2 = move-exception
            goto L45
        L40:
            r2 = move-exception
            r3 = r1
            goto L5e
        L43:
            r2 = move-exception
            r3 = r1
        L45:
            com.xiaomi.channel.commonutils.logger.b.a(r2)     // Catch: java.lang.Throwable -> L5d
            if (r1 == 0) goto L3a
            boolean r2 = r1.isValid()     // Catch: java.lang.Throwable -> L5b
            if (r2 == 0) goto L3a
            r1.release()     // Catch: java.io.IOException -> L54 java.lang.Throwable -> L5b
            goto L3a
        L54:
            r1 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r1)     // Catch: java.lang.Throwable -> L5b
            goto L3a
        L59:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5b
            return
        L5b:
            r1 = move-exception
            goto L72
        L5d:
            r2 = move-exception
        L5e:
            if (r1 == 0) goto L6e
            boolean r4 = r1.isValid()     // Catch: java.lang.Throwable -> L5b
            if (r4 == 0) goto L6e
            r1.release()     // Catch: java.lang.Throwable -> L5b java.io.IOException -> L6a
            goto L6e
        L6a:
            r1 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r1)     // Catch: java.lang.Throwable -> L5b
        L6e:
            com.xiaomi.push.ab.a(r3)     // Catch: java.lang.Throwable -> L5b
            throw r2     // Catch: java.lang.Throwable -> L5b
        L72:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5b
            throw r1
    }
}
