package android.support.v4.graphics;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public class TypefaceCompatUtil {
    private static final java.lang.String CACHE_FILE_PREFIX = ".font";
    private static final java.lang.String TAG = "TypefaceCompatUtil";

    private TypefaceCompatUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void closeQuietly(java.io.Closeable r0) {
            if (r0 == 0) goto L5
            r0.close()     // Catch: java.io.IOException -> L5
        L5:
            return
    }

    @android.support.annotation.RequiresApi(19)
    @android.support.annotation.Nullable
    public static java.nio.ByteBuffer copyToDirectBuffer(android.content.Context r1, android.content.res.Resources r2, int r3) {
            java.io.File r1 = getTempFile(r1)
            r0 = 0
            if (r1 != 0) goto L8
            return r0
        L8:
            boolean r2 = copyToFile(r1, r2, r3)     // Catch: java.lang.Throwable -> L1a
            if (r2 != 0) goto L12
            r1.delete()
            return r0
        L12:
            java.nio.ByteBuffer r2 = mmap(r1)     // Catch: java.lang.Throwable -> L1a
            r1.delete()
            return r2
        L1a:
            r2 = move-exception
            r1.delete()
            throw r2
    }

    public static boolean copyToFile(java.io.File r0, android.content.res.Resources r1, int r2) {
            java.io.InputStream r1 = r1.openRawResource(r2)     // Catch: java.lang.Throwable -> Le
            boolean r0 = copyToFile(r0, r1)     // Catch: java.lang.Throwable -> Lc
            closeQuietly(r1)
            return r0
        Lc:
            r0 = move-exception
            goto L10
        Le:
            r0 = move-exception
            r1 = 0
        L10:
            closeQuietly(r1)
            throw r0
    }

    public static boolean copyToFile(java.io.File r5, java.io.InputStream r6) {
            android.os.StrictMode$ThreadPolicy r0 = android.os.StrictMode.allowThreadDiskWrites()
            r1 = 0
            r2 = 0
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L28 java.io.IOException -> L2a
            r3.<init>(r5, r1)     // Catch: java.lang.Throwable -> L28 java.io.IOException -> L2a
            r5 = 1024(0x400, float:1.435E-42)
            byte[] r5 = new byte[r5]     // Catch: java.lang.Throwable -> L22 java.io.IOException -> L25
        Lf:
            int r2 = r6.read(r5)     // Catch: java.lang.Throwable -> L22 java.io.IOException -> L25
            r4 = -1
            if (r2 == r4) goto L1a
            r3.write(r5, r1, r2)     // Catch: java.lang.Throwable -> L22 java.io.IOException -> L25
            goto Lf
        L1a:
            r5 = 1
            closeQuietly(r3)
            android.os.StrictMode.setThreadPolicy(r0)
            return r5
        L22:
            r5 = move-exception
            r2 = r3
            goto L4c
        L25:
            r5 = move-exception
            r2 = r3
            goto L2b
        L28:
            r5 = move-exception
            goto L4c
        L2a:
            r5 = move-exception
        L2b:
            java.lang.String r6 = "TypefaceCompatUtil"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L28
            r3.<init>()     // Catch: java.lang.Throwable -> L28
            java.lang.String r4 = "Error copying resource contents to temp file: "
            r3.append(r4)     // Catch: java.lang.Throwable -> L28
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Throwable -> L28
            r3.append(r5)     // Catch: java.lang.Throwable -> L28
            java.lang.String r5 = r3.toString()     // Catch: java.lang.Throwable -> L28
            android.util.Log.e(r6, r5)     // Catch: java.lang.Throwable -> L28
            closeQuietly(r2)
            android.os.StrictMode.setThreadPolicy(r0)
            return r1
        L4c:
            closeQuietly(r2)
            android.os.StrictMode.setThreadPolicy(r0)
            throw r5
    }

    @android.support.annotation.Nullable
    public static java.io.File getTempFile(android.content.Context r5) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = ".font"
            r0.append(r1)
            int r1 = android.os.Process.myPid()
            r0.append(r1)
            java.lang.String r1 = "-"
            r0.append(r1)
            int r2 = android.os.Process.myTid()
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = 0
        L25:
            r2 = 100
            if (r1 >= r2) goto L4b
            java.io.File r2 = new java.io.File
            java.io.File r3 = r5.getCacheDir()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r0)
            r4.append(r1)
            java.lang.String r4 = r4.toString()
            r2.<init>(r3, r4)
            boolean r3 = r2.createNewFile()     // Catch: java.io.IOException -> L48
            if (r3 == 0) goto L48
            return r2
        L48:
            int r1 = r1 + 1
            goto L25
        L4b:
            r5 = 0
            return r5
    }

    @android.support.annotation.RequiresApi(19)
    @android.support.annotation.Nullable
    public static java.nio.ByteBuffer mmap(android.content.Context r8, android.os.CancellationSignal r9, android.net.Uri r10) {
            r8.getContentResolver()
            r8 = 0
            java.lang.String r0 = "r"
            android.content.Context r1 = com.qihoo360.replugin.RePlugin.getPluginContext()     // Catch: java.io.IOException -> L6a
            android.os.ParcelFileDescriptor r9 = com.qihoo360.replugin.loader.p.PluginProviderClient.openFileDescriptor(r1, r10, r0, r9)     // Catch: java.io.IOException -> L6a
            if (r9 != 0) goto L16
            if (r9 == 0) goto L15
            r9.close()     // Catch: java.io.IOException -> L6a
        L15:
            return r8
        L16:
            java.io.FileInputStream r10 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L50 java.lang.Throwable -> L53
            java.io.FileDescriptor r0 = r9.getFileDescriptor()     // Catch: java.lang.Throwable -> L50 java.lang.Throwable -> L53
            r10.<init>(r0)     // Catch: java.lang.Throwable -> L50 java.lang.Throwable -> L53
            java.nio.channels.FileChannel r1 = r10.getChannel()     // Catch: java.lang.Throwable -> L38 java.lang.Throwable -> L3b
            long r5 = r1.size()     // Catch: java.lang.Throwable -> L38 java.lang.Throwable -> L3b
            java.nio.channels.FileChannel$MapMode r2 = java.nio.channels.FileChannel.MapMode.READ_ONLY     // Catch: java.lang.Throwable -> L38 java.lang.Throwable -> L3b
            r3 = 0
            java.nio.MappedByteBuffer r0 = r1.map(r2, r3, r5)     // Catch: java.lang.Throwable -> L38 java.lang.Throwable -> L3b
            r10.close()     // Catch: java.lang.Throwable -> L50 java.lang.Throwable -> L53
            if (r9 == 0) goto L37
            r9.close()     // Catch: java.io.IOException -> L6a
        L37:
            return r0
        L38:
            r0 = move-exception
            r1 = r8
            goto L41
        L3b:
            r0 = move-exception
            throw r0     // Catch: java.lang.Throwable -> L3d
        L3d:
            r1 = move-exception
            r7 = r1
            r1 = r0
            r0 = r7
        L41:
            if (r1 == 0) goto L4c
            r10.close()     // Catch: java.lang.Throwable -> L47 java.lang.Throwable -> L50
            goto L4f
        L47:
            r10 = move-exception
            r1.addSuppressed(r10)     // Catch: java.lang.Throwable -> L50 java.lang.Throwable -> L53
            goto L4f
        L4c:
            r10.close()     // Catch: java.lang.Throwable -> L50 java.lang.Throwable -> L53
        L4f:
            throw r0     // Catch: java.lang.Throwable -> L50 java.lang.Throwable -> L53
        L50:
            r10 = move-exception
            r0 = r8
            goto L59
        L53:
            r10 = move-exception
            throw r10     // Catch: java.lang.Throwable -> L55
        L55:
            r0 = move-exception
            r7 = r0
            r0 = r10
            r10 = r7
        L59:
            if (r9 == 0) goto L69
            if (r0 == 0) goto L66
            r9.close()     // Catch: java.lang.Throwable -> L61 java.io.IOException -> L6a
            goto L69
        L61:
            r9 = move-exception
            r0.addSuppressed(r9)     // Catch: java.io.IOException -> L6a
            goto L69
        L66:
            r9.close()     // Catch: java.io.IOException -> L6a
        L69:
            throw r10     // Catch: java.io.IOException -> L6a
        L6a:
            return r8
    }

    @android.support.annotation.RequiresApi(19)
    @android.support.annotation.Nullable
    private static java.nio.ByteBuffer mmap(java.io.File r9) {
            r0 = 0
            java.io.FileInputStream r1 = new java.io.FileInputStream     // Catch: java.io.IOException -> L32
            r1.<init>(r9)     // Catch: java.io.IOException -> L32
            java.nio.channels.FileChannel r2 = r1.getChannel()     // Catch: java.lang.Throwable -> L1a java.lang.Throwable -> L1d
            long r6 = r2.size()     // Catch: java.lang.Throwable -> L1a java.lang.Throwable -> L1d
            java.nio.channels.FileChannel$MapMode r3 = java.nio.channels.FileChannel.MapMode.READ_ONLY     // Catch: java.lang.Throwable -> L1a java.lang.Throwable -> L1d
            r4 = 0
            java.nio.MappedByteBuffer r9 = r2.map(r3, r4, r6)     // Catch: java.lang.Throwable -> L1a java.lang.Throwable -> L1d
            r1.close()     // Catch: java.io.IOException -> L32
            return r9
        L1a:
            r9 = move-exception
            r2 = r0
            goto L23
        L1d:
            r9 = move-exception
            throw r9     // Catch: java.lang.Throwable -> L1f
        L1f:
            r2 = move-exception
            r8 = r2
            r2 = r9
            r9 = r8
        L23:
            if (r2 == 0) goto L2e
            r1.close()     // Catch: java.lang.Throwable -> L29 java.io.IOException -> L32
            goto L31
        L29:
            r1 = move-exception
            r2.addSuppressed(r1)     // Catch: java.io.IOException -> L32
            goto L31
        L2e:
            r1.close()     // Catch: java.io.IOException -> L32
        L31:
            throw r9     // Catch: java.io.IOException -> L32
        L32:
            return r0
    }
}
