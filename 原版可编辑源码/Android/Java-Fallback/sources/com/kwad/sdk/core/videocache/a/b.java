package com.kwad.sdk.core.videocache.a;

public final class b implements com.kwad.sdk.core.videocache.a {
    private java.io.RandomAccessFile awX;
    private final com.kwad.sdk.core.videocache.a.a awj;
    public java.io.File file;

    public b(java.io.File r5, com.kwad.sdk.core.videocache.a.a r6) {
            r4 = this;
            r4.<init>()
            if (r6 == 0) goto L49
            r4.awj = r6     // Catch: java.io.IOException -> L47
            java.io.File r6 = r5.getParentFile()     // Catch: java.io.IOException -> L47
            com.kwad.sdk.core.videocache.a.d.u(r6)     // Catch: java.io.IOException -> L47
            boolean r6 = r5.exists()     // Catch: java.io.IOException -> L47
            if (r6 == 0) goto L16
            r0 = r5
            goto L34
        L16:
            java.io.File r0 = new java.io.File     // Catch: java.io.IOException -> L47
            java.io.File r1 = r5.getParentFile()     // Catch: java.io.IOException -> L47
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L47
            r2.<init>()     // Catch: java.io.IOException -> L47
            java.lang.String r3 = r5.getName()     // Catch: java.io.IOException -> L47
            r2.append(r3)     // Catch: java.io.IOException -> L47
            java.lang.String r3 = ".download"
            r2.append(r3)     // Catch: java.io.IOException -> L47
            java.lang.String r2 = r2.toString()     // Catch: java.io.IOException -> L47
            r0.<init>(r1, r2)     // Catch: java.io.IOException -> L47
        L34:
            r4.file = r0     // Catch: java.io.IOException -> L47
            java.io.RandomAccessFile r0 = new java.io.RandomAccessFile     // Catch: java.io.IOException -> L47
            java.io.File r1 = r4.file     // Catch: java.io.IOException -> L47
            if (r6 == 0) goto L3f
            java.lang.String r6 = "r"
            goto L41
        L3f:
            java.lang.String r6 = "rw"
        L41:
            r0.<init>(r1, r6)     // Catch: java.io.IOException -> L47
            r4.awX = r0     // Catch: java.io.IOException -> L47
            return
        L47:
            r6 = move-exception
            goto L4f
        L49:
            java.lang.NullPointerException r6 = new java.lang.NullPointerException     // Catch: java.io.IOException -> L47
            r6.<init>()     // Catch: java.io.IOException -> L47
            throw r6     // Catch: java.io.IOException -> L47
        L4f:
            com.kwad.sdk.core.videocache.ProxyCacheException r0 = new com.kwad.sdk.core.videocache.ProxyCacheException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Error using file "
            r1.<init>(r2)
            r1.append(r5)
            java.lang.String r5 = " as disc cache"
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5, r6)
            throw r0
    }

    private static boolean t(java.io.File r1) {
            java.lang.String r1 = r1.getName()
            java.lang.String r0 = ".download"
            boolean r1 = r1.endsWith(r0)
            return r1
    }

    @Override
    public final synchronized long DB() {
            r4 = this;
            monitor-enter(r4)
            java.io.RandomAccessFile r0 = r4.awX     // Catch: java.lang.Throwable -> Lb java.io.IOException -> Ld
            long r0 = r0.length()     // Catch: java.lang.Throwable -> Lb java.io.IOException -> Ld
            int r0 = (int) r0
            long r0 = (long) r0
            monitor-exit(r4)
            return r0
        Lb:
            r0 = move-exception
            goto L24
        Ld:
            r0 = move-exception
            com.kwad.sdk.core.videocache.ProxyCacheException r1 = new com.kwad.sdk.core.videocache.ProxyCacheException     // Catch: java.lang.Throwable -> Lb
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb
            java.lang.String r3 = "Error reading length of file "
            r2.<init>(r3)     // Catch: java.lang.Throwable -> Lb
            java.io.File r3 = r4.file     // Catch: java.lang.Throwable -> Lb
            r2.append(r3)     // Catch: java.lang.Throwable -> Lb
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lb
            r1.<init>(r2, r0)     // Catch: java.lang.Throwable -> Lb
            throw r1     // Catch: java.lang.Throwable -> Lb
        L24:
            monitor-exit(r4)
            throw r0
    }

    @Override
    public final synchronized int a(byte[] r6, long r7, int r9) {
            r5 = this;
            monitor-enter(r5)
            r0 = 0
            java.io.RandomAccessFile r1 = r5.awX     // Catch: java.lang.Throwable -> Lf java.io.IOException -> L11
            r1.seek(r7)     // Catch: java.lang.Throwable -> Lf java.io.IOException -> L11
            java.io.RandomAccessFile r1 = r5.awX     // Catch: java.lang.Throwable -> Lf java.io.IOException -> L11
            int r6 = r1.read(r6, r0, r9)     // Catch: java.lang.Throwable -> Lf java.io.IOException -> L11
            monitor-exit(r5)
            return r6
        Lf:
            r6 = move-exception
            goto L41
        L11:
            r1 = move-exception
            java.lang.String r2 = "Error reading %d bytes with offset %d from file[%d bytes] to buffer[%d bytes]"
            com.kwad.sdk.core.videocache.ProxyCacheException r3 = new com.kwad.sdk.core.videocache.ProxyCacheException     // Catch: java.lang.Throwable -> Lf
            r4 = 4
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> Lf
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> Lf
            r4[r0] = r9     // Catch: java.lang.Throwable -> Lf
            r9 = 1
            java.lang.Long r7 = java.lang.Long.valueOf(r7)     // Catch: java.lang.Throwable -> Lf
            r4[r9] = r7     // Catch: java.lang.Throwable -> Lf
            r7 = 2
            long r8 = r5.DB()     // Catch: java.lang.Throwable -> Lf
            java.lang.Long r8 = java.lang.Long.valueOf(r8)     // Catch: java.lang.Throwable -> Lf
            r4[r7] = r8     // Catch: java.lang.Throwable -> Lf
            r7 = 3
            int r6 = r6.length     // Catch: java.lang.Throwable -> Lf
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> Lf
            r4[r7] = r6     // Catch: java.lang.Throwable -> Lf
            java.lang.String r6 = java.lang.String.format(r2, r4)     // Catch: java.lang.Throwable -> Lf
            r3.<init>(r6, r1)     // Catch: java.lang.Throwable -> Lf
            throw r3     // Catch: java.lang.Throwable -> Lf
        L41:
            monitor-exit(r5)
            throw r6
    }

    @Override
    public final synchronized void close() {
            r4 = this;
            monitor-enter(r4)
            java.io.RandomAccessFile r0 = r4.awX     // Catch: java.lang.Throwable -> Lf java.io.IOException -> L11
            r0.close()     // Catch: java.lang.Throwable -> Lf java.io.IOException -> L11
            com.kwad.sdk.core.videocache.a.a r0 = r4.awj     // Catch: java.lang.Throwable -> Lf java.io.IOException -> L11
            java.io.File r1 = r4.file     // Catch: java.lang.Throwable -> Lf java.io.IOException -> L11
            r0.s(r1)     // Catch: java.lang.Throwable -> Lf java.io.IOException -> L11
            monitor-exit(r4)
            return
        Lf:
            r0 = move-exception
            goto L28
        L11:
            r0 = move-exception
            com.kwad.sdk.core.videocache.ProxyCacheException r1 = new com.kwad.sdk.core.videocache.ProxyCacheException     // Catch: java.lang.Throwable -> Lf
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf
            java.lang.String r3 = "Error closing file "
            r2.<init>(r3)     // Catch: java.lang.Throwable -> Lf
            java.io.File r3 = r4.file     // Catch: java.lang.Throwable -> Lf
            r2.append(r3)     // Catch: java.lang.Throwable -> Lf
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lf
            r1.<init>(r2, r0)     // Catch: java.lang.Throwable -> Lf
            throw r1     // Catch: java.lang.Throwable -> Lf
        L28:
            monitor-exit(r4)
            throw r0
    }

    @Override
    public final synchronized void complete() {
            r4 = this;
            monitor-enter(r4)
            boolean r0 = r4.isCompleted()     // Catch: java.lang.Throwable -> L8b
            if (r0 == 0) goto L9
            monitor-exit(r4)
            return
        L9:
            r4.close()     // Catch: java.lang.Throwable -> L8b
            java.io.File r0 = r4.file     // Catch: java.lang.Throwable -> L8b
            java.lang.String r0 = r0.getName()     // Catch: java.lang.Throwable -> L8b
            r1 = 0
            java.io.File r2 = r4.file     // Catch: java.lang.Throwable -> L8b
            java.lang.String r2 = r2.getName()     // Catch: java.lang.Throwable -> L8b
            int r2 = r2.length()     // Catch: java.lang.Throwable -> L8b
            int r2 = r2 + (-9)
            java.lang.String r0 = r0.substring(r1, r2)     // Catch: java.lang.Throwable -> L8b
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L8b
            java.io.File r2 = r4.file     // Catch: java.lang.Throwable -> L8b
            java.io.File r2 = r2.getParentFile()     // Catch: java.lang.Throwable -> L8b
            r1.<init>(r2, r0)     // Catch: java.lang.Throwable -> L8b
            java.io.File r0 = r4.file     // Catch: java.lang.Throwable -> L8b
            boolean r0 = r0.renameTo(r1)     // Catch: java.lang.Throwable -> L8b
            if (r0 == 0) goto L68
            r4.file = r1     // Catch: java.lang.Throwable -> L8b
            java.io.RandomAccessFile r0 = new java.io.RandomAccessFile     // Catch: java.io.IOException -> L4c java.lang.Throwable -> L8b
            java.io.File r1 = r4.file     // Catch: java.io.IOException -> L4c java.lang.Throwable -> L8b
            java.lang.String r2 = "r"
            r0.<init>(r1, r2)     // Catch: java.io.IOException -> L4c java.lang.Throwable -> L8b
            r4.awX = r0     // Catch: java.io.IOException -> L4c java.lang.Throwable -> L8b
            com.kwad.sdk.core.videocache.a.a r0 = r4.awj     // Catch: java.io.IOException -> L4c java.lang.Throwable -> L8b
            java.io.File r1 = r4.file     // Catch: java.io.IOException -> L4c java.lang.Throwable -> L8b
            r0.s(r1)     // Catch: java.io.IOException -> L4c java.lang.Throwable -> L8b
            monitor-exit(r4)
            return
        L4c:
            r0 = move-exception
            com.kwad.sdk.core.videocache.ProxyCacheException r1 = new com.kwad.sdk.core.videocache.ProxyCacheException     // Catch: java.lang.Throwable -> L8b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8b
            java.lang.String r3 = "Error opening "
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L8b
            java.io.File r3 = r4.file     // Catch: java.lang.Throwable -> L8b
            r2.append(r3)     // Catch: java.lang.Throwable -> L8b
            java.lang.String r3 = " as disc cache"
            r2.append(r3)     // Catch: java.lang.Throwable -> L8b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L8b
            r1.<init>(r2, r0)     // Catch: java.lang.Throwable -> L8b
            throw r1     // Catch: java.lang.Throwable -> L8b
        L68:
            com.kwad.sdk.core.videocache.ProxyCacheException r0 = new com.kwad.sdk.core.videocache.ProxyCacheException     // Catch: java.lang.Throwable -> L8b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8b
            java.lang.String r3 = "Error renaming file "
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L8b
            java.io.File r3 = r4.file     // Catch: java.lang.Throwable -> L8b
            r2.append(r3)     // Catch: java.lang.Throwable -> L8b
            java.lang.String r3 = " to "
            r2.append(r3)     // Catch: java.lang.Throwable -> L8b
            r2.append(r1)     // Catch: java.lang.Throwable -> L8b
            java.lang.String r1 = " for completion!"
            r2.append(r1)     // Catch: java.lang.Throwable -> L8b
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L8b
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L8b
            throw r0     // Catch: java.lang.Throwable -> L8b
        L8b:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    @Override
    public final synchronized void d(byte[] r5, int r6) {
            r4 = this;
            monitor-enter(r4)
            r0 = 0
            boolean r1 = r4.isCompleted()     // Catch: java.lang.Throwable -> L33 java.io.IOException -> L35
            if (r1 != 0) goto L18
            java.io.RandomAccessFile r1 = r4.awX     // Catch: java.lang.Throwable -> L33 java.io.IOException -> L35
            long r2 = r4.DB()     // Catch: java.lang.Throwable -> L33 java.io.IOException -> L35
            r1.seek(r2)     // Catch: java.lang.Throwable -> L33 java.io.IOException -> L35
            java.io.RandomAccessFile r1 = r4.awX     // Catch: java.lang.Throwable -> L33 java.io.IOException -> L35
            r1.write(r5, r0, r6)     // Catch: java.lang.Throwable -> L33 java.io.IOException -> L35
            monitor-exit(r4)
            return
        L18:
            com.kwad.sdk.core.videocache.ProxyCacheException r5 = new com.kwad.sdk.core.videocache.ProxyCacheException     // Catch: java.lang.Throwable -> L33 java.io.IOException -> L35
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L33 java.io.IOException -> L35
            java.lang.String r2 = "Error append cache: cache file "
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L33 java.io.IOException -> L35
            java.io.File r2 = r4.file     // Catch: java.lang.Throwable -> L33 java.io.IOException -> L35
            r1.append(r2)     // Catch: java.lang.Throwable -> L33 java.io.IOException -> L35
            java.lang.String r2 = " is completed!"
            r1.append(r2)     // Catch: java.lang.Throwable -> L33 java.io.IOException -> L35
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L33 java.io.IOException -> L35
            r5.<init>(r1)     // Catch: java.lang.Throwable -> L33 java.io.IOException -> L35
            throw r5     // Catch: java.lang.Throwable -> L33 java.io.IOException -> L35
        L33:
            r5 = move-exception
            goto L59
        L35:
            r5 = move-exception
            java.lang.String r1 = "Error writing %d bytes to %s from buffer with size %d"
            com.kwad.sdk.core.videocache.ProxyCacheException r2 = new com.kwad.sdk.core.videocache.ProxyCacheException     // Catch: java.lang.Throwable -> L33
            r3 = 3
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L33
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L33
            r3[r0] = r6     // Catch: java.lang.Throwable -> L33
            r6 = 1
            java.io.RandomAccessFile r0 = r4.awX     // Catch: java.lang.Throwable -> L33
            r3[r6] = r0     // Catch: java.lang.Throwable -> L33
            r6 = 2
            r0 = 8192(0x2000, float:1.148E-41)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Throwable -> L33
            r3[r6] = r0     // Catch: java.lang.Throwable -> L33
            java.lang.String r6 = java.lang.String.format(r1, r3)     // Catch: java.lang.Throwable -> L33
            r2.<init>(r6, r5)     // Catch: java.lang.Throwable -> L33
            throw r2     // Catch: java.lang.Throwable -> L33
        L59:
            monitor-exit(r4)
            throw r5
    }

    @Override
    public final synchronized boolean isCompleted() {
            r1 = this;
            monitor-enter(r1)
            java.io.File r0 = r1.file     // Catch: java.lang.Throwable -> Le
            boolean r0 = t(r0)     // Catch: java.lang.Throwable -> Le
            if (r0 != 0) goto Lc
            r0 = 1
        La:
            monitor-exit(r1)
            return r0
        Lc:
            r0 = 0
            goto La
        Le:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }
}
