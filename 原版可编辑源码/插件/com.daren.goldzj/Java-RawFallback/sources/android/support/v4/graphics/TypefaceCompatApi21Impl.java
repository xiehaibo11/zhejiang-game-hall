package android.support.v4.graphics;

@android.support.annotation.RequiresApi(21)
@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
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
    public android.graphics.Typeface createFromFontInfo(android.content.Context r5, android.os.CancellationSignal r6, @android.support.annotation.NonNull android.support.v4.provider.FontsContractCompat.FontInfo[] r7, int r8) {
            r4 = this;
            int r0 = r7.length
            r1 = 0
            r2 = 1
            if (r0 >= r2) goto L6
            return r1
        L6:
            android.support.v4.provider.FontsContractCompat$FontInfo r7 = r4.findBestInfo(r7, r8)
            r5.getContentResolver()
            android.net.Uri r7 = r7.getUri()     // Catch: java.io.IOException -> L7a
            java.lang.String r8 = "r"
            android.content.Context r0 = com.qihoo360.replugin.RePlugin.getPluginContext()     // Catch: java.io.IOException -> L7a
            android.os.ParcelFileDescriptor r6 = com.qihoo360.replugin.loader.p.PluginProviderClient.openFileDescriptor(r0, r7, r8, r6)     // Catch: java.io.IOException -> L7a
            java.io.File r7 = r4.getFile(r6)     // Catch: java.lang.Throwable -> L60 java.lang.Throwable -> L63
            if (r7 == 0) goto L32
            boolean r8 = r7.canRead()     // Catch: java.lang.Throwable -> L60 java.lang.Throwable -> L63
            if (r8 != 0) goto L28
            goto L32
        L28:
            android.graphics.Typeface r5 = android.graphics.Typeface.createFromFile(r7)     // Catch: java.lang.Throwable -> L60 java.lang.Throwable -> L63
            if (r6 == 0) goto L31
            r6.close()     // Catch: java.io.IOException -> L7a
        L31:
            return r5
        L32:
            java.io.FileInputStream r7 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L60 java.lang.Throwable -> L63
            java.io.FileDescriptor r8 = r6.getFileDescriptor()     // Catch: java.lang.Throwable -> L60 java.lang.Throwable -> L63
            r7.<init>(r8)     // Catch: java.lang.Throwable -> L60 java.lang.Throwable -> L63
            android.graphics.Typeface r5 = super.createFromInputStream(r5, r7)     // Catch: java.lang.Throwable -> L48 java.lang.Throwable -> L4b
            r7.close()     // Catch: java.lang.Throwable -> L60 java.lang.Throwable -> L63
            if (r6 == 0) goto L47
            r6.close()     // Catch: java.io.IOException -> L7a
        L47:
            return r5
        L48:
            r5 = move-exception
            r8 = r1
            goto L51
        L4b:
            r5 = move-exception
            throw r5     // Catch: java.lang.Throwable -> L4d
        L4d:
            r8 = move-exception
            r3 = r8
            r8 = r5
            r5 = r3
        L51:
            if (r8 == 0) goto L5c
            r7.close()     // Catch: java.lang.Throwable -> L57 java.lang.Throwable -> L60
            goto L5f
        L57:
            r7 = move-exception
            r8.addSuppressed(r7)     // Catch: java.lang.Throwable -> L60 java.lang.Throwable -> L63
            goto L5f
        L5c:
            r7.close()     // Catch: java.lang.Throwable -> L60 java.lang.Throwable -> L63
        L5f:
            throw r5     // Catch: java.lang.Throwable -> L60 java.lang.Throwable -> L63
        L60:
            r5 = move-exception
            r7 = r1
            goto L69
        L63:
            r5 = move-exception
            throw r5     // Catch: java.lang.Throwable -> L65
        L65:
            r7 = move-exception
            r3 = r7
            r7 = r5
            r5 = r3
        L69:
            if (r6 == 0) goto L79
            if (r7 == 0) goto L76
            r6.close()     // Catch: java.lang.Throwable -> L71 java.io.IOException -> L7a
            goto L79
        L71:
            r6 = move-exception
            r7.addSuppressed(r6)     // Catch: java.io.IOException -> L7a
            goto L79
        L76:
            r6.close()     // Catch: java.io.IOException -> L7a
        L79:
            throw r5     // Catch: java.io.IOException -> L7a
        L7a:
            return r1
    }
}
