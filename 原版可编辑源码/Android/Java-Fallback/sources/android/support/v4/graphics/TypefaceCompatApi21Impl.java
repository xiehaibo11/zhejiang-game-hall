package android.support.v4.graphics;

class TypefaceCompatApi21Impl extends android.support.v4.graphics.TypefaceCompatBaseImpl {
    private static final java.lang.String TAG = "TypefaceCompatApi21Impl";

    TypefaceCompatApi21Impl() {
            r0 = this;
            r0.<init>()
            return
    }

    private java.io.File getFile(android.os.ParcelFileDescriptor r4) {
            r3 = this;
            r0 = 0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: android.system.ErrnoException -> L2c
            r1.<init>()     // Catch: android.system.ErrnoException -> L2c
            java.lang.String r2 = "/proc/self/fd/"
            r1.append(r2)     // Catch: android.system.ErrnoException -> L2c
            int r4 = r4.getFd()     // Catch: android.system.ErrnoException -> L2c
            r1.append(r4)     // Catch: android.system.ErrnoException -> L2c
            java.lang.String r4 = r1.toString()     // Catch: android.system.ErrnoException -> L2c
            java.lang.String r4 = android.system.Os.readlink(r4)     // Catch: android.system.ErrnoException -> L2c
            android.system.StructStat r1 = android.system.Os.stat(r4)     // Catch: android.system.ErrnoException -> L2c
            int r1 = r1.st_mode     // Catch: android.system.ErrnoException -> L2c
            boolean r1 = android.system.OsConstants.S_ISREG(r1)     // Catch: android.system.ErrnoException -> L2c
            if (r1 == 0) goto L2c
            java.io.File r1 = new java.io.File     // Catch: android.system.ErrnoException -> L2c
            r1.<init>(r4)     // Catch: android.system.ErrnoException -> L2c
            return r1
        L2c:
            return r0
    }

    @Override
    public android.graphics.Typeface createFromFontInfo(android.content.Context r4, android.os.CancellationSignal r5, android.support.v4.provider.FontsContractCompat.FontInfo[] r6, int r7) {
            r3 = this;
            int r0 = r6.length
            r1 = 0
            r2 = 1
            if (r0 >= r2) goto L6
            return r1
        L6:
            android.support.v4.provider.FontsContractCompat$FontInfo r6 = r3.findBestInfo(r6, r7)
            android.content.ContentResolver r7 = r4.getContentResolver()
            android.net.Uri r6 = r6.getUri()     // Catch: java.io.IOException -> L5f
            java.lang.String r0 = "r"
            android.os.ParcelFileDescriptor r5 = r7.openFileDescriptor(r6, r0, r5)     // Catch: java.io.IOException -> L5f
            java.io.File r6 = r3.getFile(r5)     // Catch: java.lang.Throwable -> L51
            if (r6 == 0) goto L2f
            boolean r7 = r6.canRead()     // Catch: java.lang.Throwable -> L51
            if (r7 != 0) goto L25
            goto L2f
        L25:
            android.graphics.Typeface r4 = android.graphics.Typeface.createFromFile(r6)     // Catch: java.lang.Throwable -> L51
            if (r5 == 0) goto L2e
            r5.close()     // Catch: java.io.IOException -> L5f
        L2e:
            return r4
        L2f:
            java.io.FileInputStream r6 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L51
            java.io.FileDescriptor r7 = r5.getFileDescriptor()     // Catch: java.lang.Throwable -> L51
            r6.<init>(r7)     // Catch: java.lang.Throwable -> L51
            android.graphics.Typeface r4 = super.createFromInputStream(r4, r6)     // Catch: java.lang.Throwable -> L45
            r6.close()     // Catch: java.lang.Throwable -> L51
            if (r5 == 0) goto L44
            r5.close()     // Catch: java.io.IOException -> L5f
        L44:
            return r4
        L45:
            r4 = move-exception
            throw r4     // Catch: java.lang.Throwable -> L47
        L47:
            r7 = move-exception
            r6.close()     // Catch: java.lang.Throwable -> L4c
            goto L50
        L4c:
            r6 = move-exception
            r4.addSuppressed(r6)     // Catch: java.lang.Throwable -> L51
        L50:
            throw r7     // Catch: java.lang.Throwable -> L51
        L51:
            r4 = move-exception
            throw r4     // Catch: java.lang.Throwable -> L53
        L53:
            r6 = move-exception
            if (r5 == 0) goto L5e
            r5.close()     // Catch: java.lang.Throwable -> L5a
            goto L5e
        L5a:
            r5 = move-exception
            r4.addSuppressed(r5)     // Catch: java.io.IOException -> L5f
        L5e:
            throw r6     // Catch: java.io.IOException -> L5f
        L5f:
            return r1
    }
}
