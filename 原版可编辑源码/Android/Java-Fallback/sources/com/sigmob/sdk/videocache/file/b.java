package com.sigmob.sdk.videocache.file;

public class b implements com.sigmob.sdk.videocache.c {
    private static final java.lang.String b = ".download";
    public java.io.File a;
    private final com.sigmob.sdk.videocache.file.a c;
    private java.io.RandomAccessFile d;

    public b(java.io.File r2) throws com.sigmob.sdk.videocache.p {
            r1 = this;
            com.sigmob.sdk.videocache.file.i r0 = new com.sigmob.sdk.videocache.file.i
            r0.<init>()
            r1.<init>(r2, r0)
            return
    }

    public b(java.io.File r5, com.sigmob.sdk.videocache.file.a r6) throws com.sigmob.sdk.videocache.p {
            r4 = this;
            r4.<init>()
            if (r6 == 0) goto L49
            r4.c = r6     // Catch: java.io.IOException -> L47
            java.io.File r6 = r5.getParentFile()     // Catch: java.io.IOException -> L47
            com.sigmob.sdk.videocache.file.d.a(r6)     // Catch: java.io.IOException -> L47
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
            r4.a = r0     // Catch: java.io.IOException -> L47
            java.io.RandomAccessFile r0 = new java.io.RandomAccessFile     // Catch: java.io.IOException -> L47
            java.io.File r1 = r4.a     // Catch: java.io.IOException -> L47
            if (r6 == 0) goto L3f
            java.lang.String r6 = "r"
            goto L41
        L3f:
            java.lang.String r6 = "rw"
        L41:
            r0.<init>(r1, r6)     // Catch: java.io.IOException -> L47
            r4.d = r0     // Catch: java.io.IOException -> L47
            return
        L47:
            r6 = move-exception
            goto L4f
        L49:
            java.lang.NullPointerException r6 = new java.lang.NullPointerException     // Catch: java.io.IOException -> L47
            r6.<init>()     // Catch: java.io.IOException -> L47
            throw r6     // Catch: java.io.IOException -> L47
        L4f:
            com.sigmob.sdk.videocache.p r0 = new com.sigmob.sdk.videocache.p
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Error using file "
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = " as disc cache"
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5, r6)
            throw r0
    }

    private boolean a(java.io.File r2) {
            r1 = this;
            java.lang.String r2 = r2.getName()
            java.lang.String r0 = ".download"
            boolean r2 = r2.endsWith(r0)
            return r2
    }

    @Override
    public synchronized int a(byte[] r6, long r7, int r9) throws com.sigmob.sdk.videocache.p {
            r5 = this;
            monitor-enter(r5)
            r0 = 0
            java.io.RandomAccessFile r1 = r5.d     // Catch: java.lang.Throwable -> Lf java.io.IOException -> L11
            r1.seek(r7)     // Catch: java.lang.Throwable -> Lf java.io.IOException -> L11
            java.io.RandomAccessFile r1 = r5.d     // Catch: java.lang.Throwable -> Lf java.io.IOException -> L11
            int r6 = r1.read(r6, r0, r9)     // Catch: java.lang.Throwable -> Lf java.io.IOException -> L11
            monitor-exit(r5)
            return r6
        Lf:
            r6 = move-exception
            goto L41
        L11:
            r1 = move-exception
            java.lang.String r2 = "Error reading %d bytes with offset %d from file[%d bytes] to buffer[%d bytes]"
            com.sigmob.sdk.videocache.p r3 = new com.sigmob.sdk.videocache.p     // Catch: java.lang.Throwable -> Lf
            r4 = 4
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> Lf
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> Lf
            r4[r0] = r9     // Catch: java.lang.Throwable -> Lf
            r9 = 1
            java.lang.Long r7 = java.lang.Long.valueOf(r7)     // Catch: java.lang.Throwable -> Lf
            r4[r9] = r7     // Catch: java.lang.Throwable -> Lf
            r7 = 2
            long r8 = r5.a()     // Catch: java.lang.Throwable -> Lf
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
    public synchronized long a() throws com.sigmob.sdk.videocache.p {
            r4 = this;
            monitor-enter(r4)
            java.io.RandomAccessFile r0 = r4.d     // Catch: java.lang.Throwable -> Lb java.io.IOException -> Ld
            long r0 = r0.length()     // Catch: java.lang.Throwable -> Lb java.io.IOException -> Ld
            int r0 = (int) r0
            long r0 = (long) r0
            monitor-exit(r4)
            return r0
        Lb:
            r0 = move-exception
            goto L27
        Ld:
            r0 = move-exception
            com.sigmob.sdk.videocache.p r1 = new com.sigmob.sdk.videocache.p     // Catch: java.lang.Throwable -> Lb
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb
            r2.<init>()     // Catch: java.lang.Throwable -> Lb
            java.lang.String r3 = "Error reading length of file "
            r2.append(r3)     // Catch: java.lang.Throwable -> Lb
            java.io.File r3 = r4.a     // Catch: java.lang.Throwable -> Lb
            r2.append(r3)     // Catch: java.lang.Throwable -> Lb
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lb
            r1.<init>(r2, r0)     // Catch: java.lang.Throwable -> Lb
            throw r1     // Catch: java.lang.Throwable -> Lb
        L27:
            monitor-exit(r4)
            throw r0
    }

    @Override
    public synchronized void a(byte[] r6, int r7) throws com.sigmob.sdk.videocache.p {
            r5 = this;
            monitor-enter(r5)
            r0 = 0
            boolean r1 = r5.d()     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L38
            if (r1 != 0) goto L18
            java.io.RandomAccessFile r1 = r5.d     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L38
            long r2 = r5.a()     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L38
            r1.seek(r2)     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L38
            java.io.RandomAccessFile r1 = r5.d     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L38
            r1.write(r6, r0, r7)     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L38
            monitor-exit(r5)
            return
        L18:
            com.sigmob.sdk.videocache.p r1 = new com.sigmob.sdk.videocache.p     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L38
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L38
            r2.<init>()     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L38
            java.lang.String r3 = "Error append cache: cache file "
            r2.append(r3)     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L38
            java.io.File r3 = r5.a     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L38
            r2.append(r3)     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L38
            java.lang.String r3 = " is completed!"
            r2.append(r3)     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L38
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L38
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L38
            throw r1     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L38
        L36:
            r6 = move-exception
            goto L5b
        L38:
            r1 = move-exception
            java.lang.String r2 = "Error writing %d bytes to %s from buffer with size %d"
            com.sigmob.sdk.videocache.p r3 = new com.sigmob.sdk.videocache.p     // Catch: java.lang.Throwable -> L36
            r4 = 3
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L36
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Throwable -> L36
            r4[r0] = r7     // Catch: java.lang.Throwable -> L36
            r7 = 1
            java.io.RandomAccessFile r0 = r5.d     // Catch: java.lang.Throwable -> L36
            r4[r7] = r0     // Catch: java.lang.Throwable -> L36
            r7 = 2
            int r6 = r6.length     // Catch: java.lang.Throwable -> L36
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L36
            r4[r7] = r6     // Catch: java.lang.Throwable -> L36
            java.lang.String r6 = java.lang.String.format(r2, r4)     // Catch: java.lang.Throwable -> L36
            r3.<init>(r6, r1)     // Catch: java.lang.Throwable -> L36
            throw r3     // Catch: java.lang.Throwable -> L36
        L5b:
            monitor-exit(r5)
            throw r6
    }

    @Override
    public synchronized void b() throws com.sigmob.sdk.videocache.p {
            r4 = this;
            monitor-enter(r4)
            java.io.RandomAccessFile r0 = r4.d     // Catch: java.lang.Throwable -> Lf java.io.IOException -> L11
            r0.close()     // Catch: java.lang.Throwable -> Lf java.io.IOException -> L11
            com.sigmob.sdk.videocache.file.a r0 = r4.c     // Catch: java.lang.Throwable -> Lf java.io.IOException -> L11
            java.io.File r1 = r4.a     // Catch: java.lang.Throwable -> Lf java.io.IOException -> L11
            r0.a(r1)     // Catch: java.lang.Throwable -> Lf java.io.IOException -> L11
            monitor-exit(r4)
            return
        Lf:
            r0 = move-exception
            goto L2b
        L11:
            r0 = move-exception
            com.sigmob.sdk.videocache.p r1 = new com.sigmob.sdk.videocache.p     // Catch: java.lang.Throwable -> Lf
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf
            r2.<init>()     // Catch: java.lang.Throwable -> Lf
            java.lang.String r3 = "Error closing file "
            r2.append(r3)     // Catch: java.lang.Throwable -> Lf
            java.io.File r3 = r4.a     // Catch: java.lang.Throwable -> Lf
            r2.append(r3)     // Catch: java.lang.Throwable -> Lf
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lf
            r1.<init>(r2, r0)     // Catch: java.lang.Throwable -> Lf
            throw r1     // Catch: java.lang.Throwable -> Lf
        L2b:
            monitor-exit(r4)
            throw r0
    }

    @Override
    public synchronized void c() throws com.sigmob.sdk.videocache.p {
            r4 = this;
            monitor-enter(r4)
            boolean r0 = r4.d()     // Catch: java.lang.Throwable -> L91
            if (r0 == 0) goto L9
            monitor-exit(r4)
            return
        L9:
            r4.b()     // Catch: java.lang.Throwable -> L91
            java.io.File r0 = r4.a     // Catch: java.lang.Throwable -> L91
            java.lang.String r0 = r0.getName()     // Catch: java.lang.Throwable -> L91
            r1 = 0
            java.io.File r2 = r4.a     // Catch: java.lang.Throwable -> L91
            java.lang.String r2 = r2.getName()     // Catch: java.lang.Throwable -> L91
            int r2 = r2.length()     // Catch: java.lang.Throwable -> L91
            int r2 = r2 + (-9)
            java.lang.String r0 = r0.substring(r1, r2)     // Catch: java.lang.Throwable -> L91
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L91
            java.io.File r2 = r4.a     // Catch: java.lang.Throwable -> L91
            java.io.File r2 = r2.getParentFile()     // Catch: java.lang.Throwable -> L91
            r1.<init>(r2, r0)     // Catch: java.lang.Throwable -> L91
            java.io.File r0 = r4.a     // Catch: java.lang.Throwable -> L91
            boolean r0 = r0.renameTo(r1)     // Catch: java.lang.Throwable -> L91
            if (r0 == 0) goto L6b
            r4.a = r1     // Catch: java.lang.Throwable -> L91
            java.io.RandomAccessFile r0 = new java.io.RandomAccessFile     // Catch: java.io.IOException -> L4c java.lang.Throwable -> L91
            java.io.File r1 = r4.a     // Catch: java.io.IOException -> L4c java.lang.Throwable -> L91
            java.lang.String r2 = "r"
            r0.<init>(r1, r2)     // Catch: java.io.IOException -> L4c java.lang.Throwable -> L91
            r4.d = r0     // Catch: java.io.IOException -> L4c java.lang.Throwable -> L91
            com.sigmob.sdk.videocache.file.a r0 = r4.c     // Catch: java.io.IOException -> L4c java.lang.Throwable -> L91
            java.io.File r1 = r4.a     // Catch: java.io.IOException -> L4c java.lang.Throwable -> L91
            r0.a(r1)     // Catch: java.io.IOException -> L4c java.lang.Throwable -> L91
            monitor-exit(r4)
            return
        L4c:
            r0 = move-exception
            com.sigmob.sdk.videocache.p r1 = new com.sigmob.sdk.videocache.p     // Catch: java.lang.Throwable -> L91
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L91
            r2.<init>()     // Catch: java.lang.Throwable -> L91
            java.lang.String r3 = "Error opening "
            r2.append(r3)     // Catch: java.lang.Throwable -> L91
            java.io.File r3 = r4.a     // Catch: java.lang.Throwable -> L91
            r2.append(r3)     // Catch: java.lang.Throwable -> L91
            java.lang.String r3 = " as disc cache"
            r2.append(r3)     // Catch: java.lang.Throwable -> L91
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L91
            r1.<init>(r2, r0)     // Catch: java.lang.Throwable -> L91
            throw r1     // Catch: java.lang.Throwable -> L91
        L6b:
            com.sigmob.sdk.videocache.p r0 = new com.sigmob.sdk.videocache.p     // Catch: java.lang.Throwable -> L91
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L91
            r2.<init>()     // Catch: java.lang.Throwable -> L91
            java.lang.String r3 = "Error renaming file "
            r2.append(r3)     // Catch: java.lang.Throwable -> L91
            java.io.File r3 = r4.a     // Catch: java.lang.Throwable -> L91
            r2.append(r3)     // Catch: java.lang.Throwable -> L91
            java.lang.String r3 = " to "
            r2.append(r3)     // Catch: java.lang.Throwable -> L91
            r2.append(r1)     // Catch: java.lang.Throwable -> L91
            java.lang.String r1 = " for completion!"
            r2.append(r1)     // Catch: java.lang.Throwable -> L91
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L91
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L91
            throw r0     // Catch: java.lang.Throwable -> L91
        L91:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    @Override
    public synchronized boolean d() {
            r1 = this;
            monitor-enter(r1)
            java.io.File r0 = r1.a     // Catch: java.lang.Throwable -> Lb
            boolean r0 = r1.a(r0)     // Catch: java.lang.Throwable -> Lb
            r0 = r0 ^ 1
            monitor-exit(r1)
            return r0
        Lb:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public java.io.File e() {
            r1 = this;
            java.io.File r0 = r1.a
            return r0
    }
}
