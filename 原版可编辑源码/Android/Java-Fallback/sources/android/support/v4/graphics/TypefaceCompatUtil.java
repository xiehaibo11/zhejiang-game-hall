package android.support.v4.graphics;

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

    public static java.nio.ByteBuffer mmap(android.content.Context r7, android.os.CancellationSignal r8, android.net.Uri r9) {
            android.content.ContentResolver r7 = r7.getContentResolver()
            r0 = 0
            java.lang.String r1 = "r"
            android.os.ParcelFileDescriptor r7 = r7.openFileDescriptor(r9, r1, r8)     // Catch: java.io.IOException -> L4f
            if (r7 != 0) goto L13
            if (r7 == 0) goto L12
            r7.close()     // Catch: java.io.IOException -> L4f
        L12:
            return r0
        L13:
            java.io.FileInputStream r8 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L41
            java.io.FileDescriptor r9 = r7.getFileDescriptor()     // Catch: java.lang.Throwable -> L41
            r8.<init>(r9)     // Catch: java.lang.Throwable -> L41
            java.nio.channels.FileChannel r1 = r8.getChannel()     // Catch: java.lang.Throwable -> L35
            long r5 = r1.size()     // Catch: java.lang.Throwable -> L35
            java.nio.channels.FileChannel$MapMode r2 = java.nio.channels.FileChannel.MapMode.READ_ONLY     // Catch: java.lang.Throwable -> L35
            r3 = 0
            java.nio.MappedByteBuffer r9 = r1.map(r2, r3, r5)     // Catch: java.lang.Throwable -> L35
            r8.close()     // Catch: java.lang.Throwable -> L41
            if (r7 == 0) goto L34
            r7.close()     // Catch: java.io.IOException -> L4f
        L34:
            return r9
        L35:
            r9 = move-exception
            throw r9     // Catch: java.lang.Throwable -> L37
        L37:
            r1 = move-exception
            r8.close()     // Catch: java.lang.Throwable -> L3c
            goto L40
        L3c:
            r8 = move-exception
            r9.addSuppressed(r8)     // Catch: java.lang.Throwable -> L41
        L40:
            throw r1     // Catch: java.lang.Throwable -> L41
        L41:
            r8 = move-exception
            throw r8     // Catch: java.lang.Throwable -> L43
        L43:
            r9 = move-exception
            if (r7 == 0) goto L4e
            r7.close()     // Catch: java.lang.Throwable -> L4a
            goto L4e
        L4a:
            r7 = move-exception
            r8.addSuppressed(r7)     // Catch: java.io.IOException -> L4f
        L4e:
            throw r9     // Catch: java.io.IOException -> L4f
        L4f:
            return r0
    }

    private static java.nio.ByteBuffer mmap(java.io.File r7) {
            java.io.FileInputStream r0 = new java.io.FileInputStream     // Catch: java.io.IOException -> L25
            r0.<init>(r7)     // Catch: java.io.IOException -> L25
            java.nio.channels.FileChannel r1 = r0.getChannel()     // Catch: java.lang.Throwable -> L19
            long r5 = r1.size()     // Catch: java.lang.Throwable -> L19
            java.nio.channels.FileChannel$MapMode r2 = java.nio.channels.FileChannel.MapMode.READ_ONLY     // Catch: java.lang.Throwable -> L19
            r3 = 0
            java.nio.MappedByteBuffer r7 = r1.map(r2, r3, r5)     // Catch: java.lang.Throwable -> L19
            r0.close()     // Catch: java.io.IOException -> L25
            return r7
        L19:
            r7 = move-exception
            throw r7     // Catch: java.lang.Throwable -> L1b
        L1b:
            r1 = move-exception
            r0.close()     // Catch: java.lang.Throwable -> L20
            goto L24
        L20:
            r0 = move-exception
            r7.addSuppressed(r0)     // Catch: java.io.IOException -> L25
        L24:
            throw r1     // Catch: java.io.IOException -> L25
        L25:
            r7 = 0
            return r7
    }
}
