package com.tkay.expressad.exoplayer.k;

public final class b {
    private static final java.lang.String a = "AtomicFile";
    private final java.io.File b;
    private final java.io.File c;

    private static final class a extends java.io.OutputStream {
        private final java.io.FileOutputStream a;
        private boolean b;

        public a(java.io.File r2) {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.b = r0
                java.io.FileOutputStream r0 = new java.io.FileOutputStream
                r0.<init>(r2)
                r1.a = r0
                return
        }

        @Override
        public final void close() {
                r3 = this;
                boolean r0 = r3.b
                if (r0 == 0) goto L5
                return
            L5:
                r0 = 1
                r3.b = r0
                r3.flush()
                java.io.FileOutputStream r0 = r3.a     // Catch: java.io.IOException -> L15
                java.io.FileDescriptor r0 = r0.getFD()     // Catch: java.io.IOException -> L15
                r0.sync()     // Catch: java.io.IOException -> L15
                goto L1d
            L15:
                r0 = move-exception
                java.lang.String r1 = "AtomicFile"
                java.lang.String r2 = "Failed to sync file descriptor:"
                android.util.Log.w(r1, r2, r0)
            L1d:
                java.io.FileOutputStream r0 = r3.a
                r0.close()
                return
        }

        @Override
        public final void flush() {
                r1 = this;
                java.io.FileOutputStream r0 = r1.a
                r0.flush()
                return
        }

        @Override
        public final void write(int r2) {
                r1 = this;
                java.io.FileOutputStream r0 = r1.a
                r0.write(r2)
                return
        }

        @Override
        public final void write(byte[] r2) {
                r1 = this;
                java.io.FileOutputStream r0 = r1.a
                r0.write(r2)
                return
        }

        @Override
        public final void write(byte[] r2, int r3, int r4) {
                r1 = this;
                java.io.FileOutputStream r0 = r1.a
                r0.write(r2, r3, r4)
                return
        }
    }

    public b(java.io.File r3) {
            r2 = this;
            r2.<init>()
            r2.b = r3
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = r3.getPath()
            r1.append(r3)
            java.lang.String r3 = ".bak"
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            r2.c = r0
            return
    }

    private void d() {
            r2 = this;
            java.io.File r0 = r2.c
            boolean r0 = r0.exists()
            if (r0 == 0) goto L14
            java.io.File r0 = r2.b
            r0.delete()
            java.io.File r0 = r2.c
            java.io.File r1 = r2.b
            r0.renameTo(r1)
        L14:
            return
    }

    public final void a() {
            r1 = this;
            java.io.File r0 = r1.b
            r0.delete()
            java.io.File r0 = r1.c
            r0.delete()
            return
    }

    public final void a(java.io.OutputStream r1) {
            r0 = this;
            r1.close()
            java.io.File r1 = r0.c
            r1.delete()
            return
    }

    public final java.io.OutputStream b() {
            r4 = this;
            java.io.File r0 = r4.b
            boolean r0 = r0.exists()
            if (r0 == 0) goto L3f
            java.io.File r0 = r4.c
            boolean r0 = r0.exists()
            if (r0 != 0) goto L3a
            java.io.File r0 = r4.b
            java.io.File r1 = r4.c
            boolean r0 = r0.renameTo(r1)
            if (r0 != 0) goto L3f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Couldn't rename file "
            r0.<init>(r1)
            java.io.File r1 = r4.b
            r0.append(r1)
            java.lang.String r1 = " to backup file "
            r0.append(r1)
            java.io.File r1 = r4.c
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "AtomicFile"
            android.util.Log.w(r1, r0)
            goto L3f
        L3a:
            java.io.File r0 = r4.b
            r0.delete()
        L3f:
            com.tkay.expressad.exoplayer.k.b$a r0 = new com.tkay.expressad.exoplayer.k.b$a     // Catch: java.io.FileNotFoundException -> L47
            java.io.File r1 = r4.b     // Catch: java.io.FileNotFoundException -> L47
            r0.<init>(r1)     // Catch: java.io.FileNotFoundException -> L47
            goto L5b
        L47:
            r0 = move-exception
            java.io.File r1 = r4.b
            java.io.File r1 = r1.getParentFile()
            boolean r1 = r1.mkdirs()
            if (r1 == 0) goto L73
            com.tkay.expressad.exoplayer.k.b$a r0 = new com.tkay.expressad.exoplayer.k.b$a     // Catch: java.io.FileNotFoundException -> L5c
            java.io.File r1 = r4.b     // Catch: java.io.FileNotFoundException -> L5c
            r0.<init>(r1)     // Catch: java.io.FileNotFoundException -> L5c
        L5b:
            return r0
        L5c:
            r0 = move-exception
            java.io.IOException r1 = new java.io.IOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "Couldn't create "
            r2.<init>(r3)
            java.io.File r3 = r4.b
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2, r0)
            throw r1
        L73:
            java.io.IOException r1 = new java.io.IOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "Couldn't create directory "
            r2.<init>(r3)
            java.io.File r3 = r4.b
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2, r0)
            throw r1
    }

    public final java.io.InputStream c() {
            r2 = this;
            java.io.File r0 = r2.c
            boolean r0 = r0.exists()
            if (r0 == 0) goto L14
            java.io.File r0 = r2.b
            r0.delete()
            java.io.File r0 = r2.c
            java.io.File r1 = r2.b
            r0.renameTo(r1)
        L14:
            java.io.FileInputStream r0 = new java.io.FileInputStream
            java.io.File r1 = r2.b
            r0.<init>(r1)
            return r0
    }
}
