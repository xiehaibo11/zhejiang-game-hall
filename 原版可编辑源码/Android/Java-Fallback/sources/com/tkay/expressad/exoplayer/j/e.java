package com.tkay.expressad.exoplayer.j;

public final class e implements com.tkay.expressad.exoplayer.j.h {
    private final android.content.ContentResolver a;
    private final com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.e> b;
    private android.net.Uri c;
    private android.content.res.AssetFileDescriptor d;
    private java.io.FileInputStream e;
    private long f;
    private boolean g;

    public static class a extends java.io.IOException {
        public a(java.io.IOException r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    private e(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public e(android.content.Context r1, com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.e> r2) {
            r0 = this;
            r0.<init>()
            android.content.ContentResolver r1 = r1.getContentResolver()
            r0.a = r1
            r0.b = r2
            return
    }

    @Override
    public final int a(byte[] r9, int r10, int r11) {
            r8 = this;
            if (r11 != 0) goto L4
            r9 = 0
            return r9
        L4:
            long r0 = r8.f
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r3 = -1
            if (r2 != 0) goto Le
            return r3
        Le:
            r4 = -1
            int r2 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r2 != 0) goto L15
            goto L1b
        L15:
            long r6 = (long) r11
            long r0 = java.lang.Math.min(r0, r6)     // Catch: java.io.IOException -> L47
            int r11 = (int) r0     // Catch: java.io.IOException -> L47
        L1b:
            java.io.FileInputStream r0 = r8.e     // Catch: java.io.IOException -> L47
            int r9 = r0.read(r9, r10, r11)     // Catch: java.io.IOException -> L47
            if (r9 != r3) goto L35
            long r9 = r8.f
            int r9 = (r9 > r4 ? 1 : (r9 == r4 ? 0 : -1))
            if (r9 != 0) goto L2a
            return r3
        L2a:
            com.tkay.expressad.exoplayer.j.e$a r9 = new com.tkay.expressad.exoplayer.j.e$a
            java.io.EOFException r10 = new java.io.EOFException
            r10.<init>()
            r9.<init>(r10)
            throw r9
        L35:
            long r10 = r8.f
            int r0 = (r10 > r4 ? 1 : (r10 == r4 ? 0 : -1))
            if (r0 == 0) goto L3f
            long r0 = (long) r9
            long r10 = r10 - r0
            r8.f = r10
        L3f:
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.e> r10 = r8.b
            if (r10 == 0) goto L46
            r10.a(r9)
        L46:
            return r9
        L47:
            r9 = move-exception
            com.tkay.expressad.exoplayer.j.e$a r10 = new com.tkay.expressad.exoplayer.j.e$a
            r10.<init>(r9)
            throw r10
    }

    @Override
    public final long a(com.tkay.expressad.exoplayer.j.k r7) {
            r6 = this;
            android.net.Uri r0 = r7.c     // Catch: java.io.IOException -> L90
            r6.c = r0     // Catch: java.io.IOException -> L90
            android.content.ContentResolver r1 = r6.a     // Catch: java.io.IOException -> L90
            java.lang.String r2 = "r"
            android.content.res.AssetFileDescriptor r0 = r1.openAssetFileDescriptor(r0, r2)     // Catch: java.io.IOException -> L90
            r6.d = r0     // Catch: java.io.IOException -> L90
            if (r0 == 0) goto L7a
            java.io.FileInputStream r0 = new java.io.FileInputStream     // Catch: java.io.IOException -> L90
            android.content.res.AssetFileDescriptor r1 = r6.d     // Catch: java.io.IOException -> L90
            java.io.FileDescriptor r1 = r1.getFileDescriptor()     // Catch: java.io.IOException -> L90
            r0.<init>(r1)     // Catch: java.io.IOException -> L90
            r6.e = r0     // Catch: java.io.IOException -> L90
            android.content.res.AssetFileDescriptor r0 = r6.d     // Catch: java.io.IOException -> L90
            long r0 = r0.getStartOffset()     // Catch: java.io.IOException -> L90
            java.io.FileInputStream r2 = r6.e     // Catch: java.io.IOException -> L90
            long r3 = r7.f     // Catch: java.io.IOException -> L90
            long r3 = r3 + r0
            long r2 = r2.skip(r3)     // Catch: java.io.IOException -> L90
            long r2 = r2 - r0
            long r0 = r7.f     // Catch: java.io.IOException -> L90
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 != 0) goto L74
            long r0 = r7.g     // Catch: java.io.IOException -> L90
            r4 = -1
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r0 == 0) goto L40
            long r0 = r7.g     // Catch: java.io.IOException -> L90
            r6.f = r0     // Catch: java.io.IOException -> L90
            goto L67
        L40:
            android.content.res.AssetFileDescriptor r7 = r6.d     // Catch: java.io.IOException -> L90
            long r0 = r7.getLength()     // Catch: java.io.IOException -> L90
            int r7 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r7 != 0) goto L64
            java.io.FileInputStream r7 = r6.e     // Catch: java.io.IOException -> L90
            java.nio.channels.FileChannel r7 = r7.getChannel()     // Catch: java.io.IOException -> L90
            long r0 = r7.size()     // Catch: java.io.IOException -> L90
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto L5b
            goto L61
        L5b:
            long r2 = r7.position()     // Catch: java.io.IOException -> L90
            long r4 = r0 - r2
        L61:
            r6.f = r4     // Catch: java.io.IOException -> L90
            goto L67
        L64:
            long r0 = r0 - r2
            r6.f = r0     // Catch: java.io.IOException -> L90
        L67:
            r7 = 1
            r6.g = r7
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.e> r7 = r6.b
            if (r7 == 0) goto L71
            r7.b()
        L71:
            long r0 = r6.f
            return r0
        L74:
            java.io.EOFException r7 = new java.io.EOFException     // Catch: java.io.IOException -> L90
            r7.<init>()     // Catch: java.io.IOException -> L90
            throw r7     // Catch: java.io.IOException -> L90
        L7a:
            java.io.FileNotFoundException r7 = new java.io.FileNotFoundException     // Catch: java.io.IOException -> L90
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L90
            java.lang.String r1 = "Could not open file descriptor for: "
            r0.<init>(r1)     // Catch: java.io.IOException -> L90
            android.net.Uri r1 = r6.c     // Catch: java.io.IOException -> L90
            r0.append(r1)     // Catch: java.io.IOException -> L90
            java.lang.String r0 = r0.toString()     // Catch: java.io.IOException -> L90
            r7.<init>(r0)     // Catch: java.io.IOException -> L90
            throw r7     // Catch: java.io.IOException -> L90
        L90:
            r7 = move-exception
            com.tkay.expressad.exoplayer.j.e$a r0 = new com.tkay.expressad.exoplayer.j.e$a
            r0.<init>(r7)
            throw r0
    }

    @Override
    public final android.net.Uri a() {
            r1 = this;
            android.net.Uri r0 = r1.c
            return r0
    }

    @Override
    public final void b() {
            r4 = this;
            r0 = 0
            r4.c = r0
            r1 = 0
            java.io.FileInputStream r2 = r4.e     // Catch: java.lang.Throwable -> L41 java.io.IOException -> L43
            if (r2 == 0) goto Ld
            java.io.FileInputStream r2 = r4.e     // Catch: java.lang.Throwable -> L41 java.io.IOException -> L43
            r2.close()     // Catch: java.lang.Throwable -> L41 java.io.IOException -> L43
        Ld:
            r4.e = r0
            android.content.res.AssetFileDescriptor r2 = r4.d     // Catch: java.lang.Throwable -> L28 java.io.IOException -> L2a
            if (r2 == 0) goto L18
            android.content.res.AssetFileDescriptor r2 = r4.d     // Catch: java.lang.Throwable -> L28 java.io.IOException -> L2a
            r2.close()     // Catch: java.lang.Throwable -> L28 java.io.IOException -> L2a
        L18:
            r4.d = r0
            boolean r0 = r4.g
            if (r0 == 0) goto L27
            r4.g = r1
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.e> r0 = r4.b
            if (r0 == 0) goto L27
            r0.c()
        L27:
            return
        L28:
            r2 = move-exception
            goto L31
        L2a:
            r2 = move-exception
            com.tkay.expressad.exoplayer.j.e$a r3 = new com.tkay.expressad.exoplayer.j.e$a     // Catch: java.lang.Throwable -> L28
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L28
            throw r3     // Catch: java.lang.Throwable -> L28
        L31:
            r4.d = r0
            boolean r0 = r4.g
            if (r0 == 0) goto L40
            r4.g = r1
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.e> r0 = r4.b
            if (r0 == 0) goto L40
            r0.c()
        L40:
            throw r2
        L41:
            r2 = move-exception
            goto L4a
        L43:
            r2 = move-exception
            com.tkay.expressad.exoplayer.j.e$a r3 = new com.tkay.expressad.exoplayer.j.e$a     // Catch: java.lang.Throwable -> L41
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L41
            throw r3     // Catch: java.lang.Throwable -> L41
        L4a:
            r4.e = r0
            android.content.res.AssetFileDescriptor r3 = r4.d     // Catch: java.lang.Throwable -> L65 java.io.IOException -> L67
            if (r3 == 0) goto L55
            android.content.res.AssetFileDescriptor r3 = r4.d     // Catch: java.lang.Throwable -> L65 java.io.IOException -> L67
            r3.close()     // Catch: java.lang.Throwable -> L65 java.io.IOException -> L67
        L55:
            r4.d = r0
            boolean r0 = r4.g
            if (r0 == 0) goto L64
            r4.g = r1
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.e> r0 = r4.b
            if (r0 == 0) goto L64
            r0.c()
        L64:
            throw r2
        L65:
            r2 = move-exception
            goto L6e
        L67:
            r2 = move-exception
            com.tkay.expressad.exoplayer.j.e$a r3 = new com.tkay.expressad.exoplayer.j.e$a     // Catch: java.lang.Throwable -> L65
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L65
            throw r3     // Catch: java.lang.Throwable -> L65
        L6e:
            r4.d = r0
            boolean r0 = r4.g
            if (r0 == 0) goto L7d
            r4.g = r1
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.e> r0 = r4.b
            if (r0 == 0) goto L7d
            r0.c()
        L7d:
            throw r2
    }
}
