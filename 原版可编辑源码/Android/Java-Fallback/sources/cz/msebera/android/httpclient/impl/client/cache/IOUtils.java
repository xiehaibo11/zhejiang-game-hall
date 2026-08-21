package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.Immutable
class IOUtils {
    IOUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    static void closeSilently(java.io.Closeable r0) {
            r0.close()     // Catch: java.io.IOException -> L3
        L3:
            return
    }

    static void consume(cz.msebera.android.httpclient.HttpEntity r1) throws java.io.IOException {
            if (r1 != 0) goto L3
            return
        L3:
            boolean r0 = r1.isStreaming()
            if (r0 == 0) goto L12
            java.io.InputStream r1 = r1.getContent()
            if (r1 == 0) goto L12
            r1.close()
        L12:
            return
    }

    static void copy(java.io.InputStream r3, java.io.OutputStream r4) throws java.io.IOException {
            r0 = 2048(0x800, float:2.87E-42)
            byte[] r0 = new byte[r0]
        L4:
            int r1 = r3.read(r0)
            r2 = -1
            if (r1 == r2) goto L10
            r2 = 0
            r4.write(r0, r2, r1)
            goto L4
        L10:
            return
    }

    static void copyAndClose(java.io.InputStream r1, java.io.OutputStream r2) throws java.io.IOException {
            copy(r1, r2)     // Catch: java.io.IOException -> La
            r1.close()     // Catch: java.io.IOException -> La
            r2.close()     // Catch: java.io.IOException -> La
            return
        La:
            r0 = move-exception
            closeSilently(r1)
            closeSilently(r2)
            throw r0
    }

    static void copyFile(java.io.File r8, java.io.File r9) throws java.io.IOException {
            java.io.RandomAccessFile r0 = new java.io.RandomAccessFile
            java.lang.String r1 = "r"
            r0.<init>(r8, r1)
            java.io.RandomAccessFile r8 = new java.io.RandomAccessFile
            java.lang.String r1 = "rw"
            r8.<init>(r9, r1)
            java.nio.channels.FileChannel r9 = r0.getChannel()     // Catch: java.io.IOException -> L36
            java.nio.channels.FileChannel r1 = r8.getChannel()     // Catch: java.io.IOException -> L36
            r3 = 0
            long r5 = r0.length()     // Catch: java.io.IOException -> L2e
            r2 = r9
            r7 = r1
            r2.transferTo(r3, r5, r7)     // Catch: java.io.IOException -> L2e
            r9.close()     // Catch: java.io.IOException -> L2e
            r1.close()     // Catch: java.io.IOException -> L2e
            r0.close()     // Catch: java.io.IOException -> L36
            r8.close()     // Catch: java.io.IOException -> L36
            return
        L2e:
            r2 = move-exception
            closeSilently(r9)     // Catch: java.io.IOException -> L36
            closeSilently(r1)     // Catch: java.io.IOException -> L36
            throw r2     // Catch: java.io.IOException -> L36
        L36:
            r9 = move-exception
            closeSilently(r0)
            closeSilently(r8)
            throw r9
    }
}
