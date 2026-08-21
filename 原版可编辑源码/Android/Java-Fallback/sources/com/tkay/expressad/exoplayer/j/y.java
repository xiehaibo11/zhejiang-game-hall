package com.tkay.expressad.exoplayer.j;

public final class y implements com.tkay.expressad.exoplayer.j.h {
    public static final java.lang.String a = "rawresource";
    private final android.content.res.Resources b;
    private final com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.y> c;
    private android.net.Uri d;
    private android.content.res.AssetFileDescriptor e;
    private java.io.InputStream f;
    private long g;
    private boolean h;

    public static class a extends java.io.IOException {
        public a(java.io.IOException r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public a(java.lang.String r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    private y(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public y(android.content.Context r1, com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.y> r2) {
            r0 = this;
            r0.<init>()
            android.content.res.Resources r1 = r1.getResources()
            r0.b = r1
            r0.c = r2
            return
    }

    private static android.net.Uri a(int r1) {
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r0 = "rawresource:///"
            java.lang.String r1 = r0.concat(r1)
            android.net.Uri r1 = android.net.Uri.parse(r1)
            return r1
    }

    @Override
    public final int a(byte[] r9, int r10, int r11) {
            r8 = this;
            if (r11 != 0) goto L4
            r9 = 0
            return r9
        L4:
            long r0 = r8.g
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
            java.io.InputStream r0 = r8.f     // Catch: java.io.IOException -> L47
            int r9 = r0.read(r9, r10, r11)     // Catch: java.io.IOException -> L47
            if (r9 != r3) goto L35
            long r9 = r8.g
            int r9 = (r9 > r4 ? 1 : (r9 == r4 ? 0 : -1))
            if (r9 != 0) goto L2a
            return r3
        L2a:
            com.tkay.expressad.exoplayer.j.y$a r9 = new com.tkay.expressad.exoplayer.j.y$a
            java.io.EOFException r10 = new java.io.EOFException
            r10.<init>()
            r9.<init>(r10)
            throw r9
        L35:
            long r10 = r8.g
            int r0 = (r10 > r4 ? 1 : (r10 == r4 ? 0 : -1))
            if (r0 == 0) goto L3f
            long r0 = (long) r9
            long r10 = r10 - r0
            r8.g = r10
        L3f:
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.y> r10 = r8.c
            if (r10 == 0) goto L46
            r10.a(r9)
        L46:
            return r9
        L47:
            r9 = move-exception
            com.tkay.expressad.exoplayer.j.y$a r10 = new com.tkay.expressad.exoplayer.j.y$a
            r10.<init>(r9)
            throw r10
    }

    @Override
    public final long a(com.tkay.expressad.exoplayer.j.k r6) {
            r5 = this;
            android.net.Uri r0 = r6.c     // Catch: java.io.IOException -> L87
            r5.d = r0     // Catch: java.io.IOException -> L87
            java.lang.String r1 = "rawresource"
            java.lang.String r0 = r0.getScheme()     // Catch: java.io.IOException -> L87
            boolean r0 = android.text.TextUtils.equals(r1, r0)     // Catch: java.io.IOException -> L87
            if (r0 == 0) goto L7f
            android.net.Uri r0 = r5.d     // Catch: java.lang.NumberFormatException -> L77 java.io.IOException -> L87
            java.lang.String r0 = r0.getLastPathSegment()     // Catch: java.lang.NumberFormatException -> L77 java.io.IOException -> L87
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.NumberFormatException -> L77 java.io.IOException -> L87
            android.content.res.Resources r1 = r5.b     // Catch: java.io.IOException -> L87
            android.content.res.AssetFileDescriptor r0 = r1.openRawResourceFd(r0)     // Catch: java.io.IOException -> L87
            r5.e = r0     // Catch: java.io.IOException -> L87
            java.io.FileInputStream r0 = new java.io.FileInputStream     // Catch: java.io.IOException -> L87
            android.content.res.AssetFileDescriptor r1 = r5.e     // Catch: java.io.IOException -> L87
            java.io.FileDescriptor r1 = r1.getFileDescriptor()     // Catch: java.io.IOException -> L87
            r0.<init>(r1)     // Catch: java.io.IOException -> L87
            r5.f = r0     // Catch: java.io.IOException -> L87
            android.content.res.AssetFileDescriptor r1 = r5.e     // Catch: java.io.IOException -> L87
            long r1 = r1.getStartOffset()     // Catch: java.io.IOException -> L87
            r0.skip(r1)     // Catch: java.io.IOException -> L87
            java.io.InputStream r0 = r5.f     // Catch: java.io.IOException -> L87
            long r1 = r6.f     // Catch: java.io.IOException -> L87
            long r0 = r0.skip(r1)     // Catch: java.io.IOException -> L87
            long r2 = r6.f     // Catch: java.io.IOException -> L87
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L71
            long r0 = r6.g     // Catch: java.io.IOException -> L87
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L53
            long r0 = r6.g     // Catch: java.io.IOException -> L87
            r5.g = r0     // Catch: java.io.IOException -> L87
            goto L64
        L53:
            android.content.res.AssetFileDescriptor r0 = r5.e     // Catch: java.io.IOException -> L87
            long r0 = r0.getLength()     // Catch: java.io.IOException -> L87
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 != 0) goto L5e
            goto L62
        L5e:
            long r2 = r6.f     // Catch: java.io.IOException -> L87
            long r2 = r0 - r2
        L62:
            r5.g = r2     // Catch: java.io.IOException -> L87
        L64:
            r6 = 1
            r5.h = r6
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.y> r6 = r5.c
            if (r6 == 0) goto L6e
            r6.b()
        L6e:
            long r0 = r5.g
            return r0
        L71:
            java.io.EOFException r6 = new java.io.EOFException     // Catch: java.io.IOException -> L87
            r6.<init>()     // Catch: java.io.IOException -> L87
            throw r6     // Catch: java.io.IOException -> L87
        L77:
            com.tkay.expressad.exoplayer.j.y$a r6 = new com.tkay.expressad.exoplayer.j.y$a     // Catch: java.io.IOException -> L87
            java.lang.String r0 = "Resource identifier must be an integer."
            r6.<init>(r0)     // Catch: java.io.IOException -> L87
            throw r6     // Catch: java.io.IOException -> L87
        L7f:
            com.tkay.expressad.exoplayer.j.y$a r6 = new com.tkay.expressad.exoplayer.j.y$a     // Catch: java.io.IOException -> L87
            java.lang.String r0 = "URI must use scheme rawresource"
            r6.<init>(r0)     // Catch: java.io.IOException -> L87
            throw r6     // Catch: java.io.IOException -> L87
        L87:
            r6 = move-exception
            com.tkay.expressad.exoplayer.j.y$a r0 = new com.tkay.expressad.exoplayer.j.y$a
            r0.<init>(r6)
            throw r0
    }

    @Override
    public final android.net.Uri a() {
            r1 = this;
            android.net.Uri r0 = r1.d
            return r0
    }

    @Override
    public final void b() {
            r4 = this;
            r0 = 0
            r4.d = r0
            r1 = 0
            java.io.InputStream r2 = r4.f     // Catch: java.lang.Throwable -> L41 java.io.IOException -> L43
            if (r2 == 0) goto Ld
            java.io.InputStream r2 = r4.f     // Catch: java.lang.Throwable -> L41 java.io.IOException -> L43
            r2.close()     // Catch: java.lang.Throwable -> L41 java.io.IOException -> L43
        Ld:
            r4.f = r0
            android.content.res.AssetFileDescriptor r2 = r4.e     // Catch: java.lang.Throwable -> L28 java.io.IOException -> L2a
            if (r2 == 0) goto L18
            android.content.res.AssetFileDescriptor r2 = r4.e     // Catch: java.lang.Throwable -> L28 java.io.IOException -> L2a
            r2.close()     // Catch: java.lang.Throwable -> L28 java.io.IOException -> L2a
        L18:
            r4.e = r0
            boolean r0 = r4.h
            if (r0 == 0) goto L27
            r4.h = r1
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.y> r0 = r4.c
            if (r0 == 0) goto L27
            r0.c()
        L27:
            return
        L28:
            r2 = move-exception
            goto L31
        L2a:
            r2 = move-exception
            com.tkay.expressad.exoplayer.j.y$a r3 = new com.tkay.expressad.exoplayer.j.y$a     // Catch: java.lang.Throwable -> L28
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L28
            throw r3     // Catch: java.lang.Throwable -> L28
        L31:
            r4.e = r0
            boolean r0 = r4.h
            if (r0 == 0) goto L40
            r4.h = r1
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.y> r0 = r4.c
            if (r0 == 0) goto L40
            r0.c()
        L40:
            throw r2
        L41:
            r2 = move-exception
            goto L4a
        L43:
            r2 = move-exception
            com.tkay.expressad.exoplayer.j.y$a r3 = new com.tkay.expressad.exoplayer.j.y$a     // Catch: java.lang.Throwable -> L41
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L41
            throw r3     // Catch: java.lang.Throwable -> L41
        L4a:
            r4.f = r0
            android.content.res.AssetFileDescriptor r3 = r4.e     // Catch: java.lang.Throwable -> L65 java.io.IOException -> L67
            if (r3 == 0) goto L55
            android.content.res.AssetFileDescriptor r3 = r4.e     // Catch: java.lang.Throwable -> L65 java.io.IOException -> L67
            r3.close()     // Catch: java.lang.Throwable -> L65 java.io.IOException -> L67
        L55:
            r4.e = r0
            boolean r0 = r4.h
            if (r0 == 0) goto L64
            r4.h = r1
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.y> r0 = r4.c
            if (r0 == 0) goto L64
            r0.c()
        L64:
            throw r2
        L65:
            r2 = move-exception
            goto L6e
        L67:
            r2 = move-exception
            com.tkay.expressad.exoplayer.j.y$a r3 = new com.tkay.expressad.exoplayer.j.y$a     // Catch: java.lang.Throwable -> L65
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L65
            throw r3     // Catch: java.lang.Throwable -> L65
        L6e:
            r4.e = r0
            boolean r0 = r4.h
            if (r0 == 0) goto L7d
            r4.h = r1
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.y> r0 = r4.c
            if (r0 == 0) goto L7d
            r0.c()
        L7d:
            throw r2
    }
}
