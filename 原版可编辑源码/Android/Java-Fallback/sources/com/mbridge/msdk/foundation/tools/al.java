package com.mbridge.msdk.foundation.tools;

final class al {

    private static class a {
        static final java.security.SecureRandom a = null;
        static final char[] b = null;

        static {
                java.security.SecureRandom r0 = new java.security.SecureRandom
                r0.<init>()
                com.mbridge.msdk.foundation.tools.al.a.a = r0
                r0 = 16
                char[] r0 = new char[r0]
                r0 = {x0012: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102} // fill-array
                com.mbridge.msdk.foundation.tools.al.a.b = r0
                return
        }
    }

    static java.lang.String a() {
            r0 = 16
            byte[] r1 = new byte[r0]
            java.security.SecureRandom r2 = com.mbridge.msdk.foundation.tools.al.a.a
            r2.nextBytes(r1)
            r2 = 32
            char[] r2 = new char[r2]
            r3 = 0
        Le:
            if (r3 >= r0) goto L2b
            r4 = r1[r3]
            int r5 = r3 << 1
            char[] r6 = com.mbridge.msdk.foundation.tools.al.a.b
            int r7 = r4 >> 4
            r7 = r7 & 15
            char r6 = r6[r7]
            r2[r5] = r6
            int r5 = r5 + 1
            char[] r6 = com.mbridge.msdk.foundation.tools.al.a.b
            r4 = r4 & 15
            char r4 = r6[r4]
            r2[r5] = r4
            int r3 = r3 + 1
            goto Le
        L2b:
            java.lang.String r0 = new java.lang.String
            r0.<init>(r2)
            return r0
    }

    static void a(java.io.Closeable r0) {
            if (r0 == 0) goto L5
            r0.close()     // Catch: java.lang.Exception -> L5
        L5:
            return
    }

    static void a(java.io.File r2, byte[] r3, int r4) throws java.io.IOException {
            java.io.RandomAccessFile r0 = new java.io.RandomAccessFile
            java.lang.String r1 = "rw"
            r0.<init>(r2, r1)
            r2 = 0
        L8:
            if (r2 >= r4) goto L1a
            int r1 = r4 - r2
            int r1 = r0.read(r3, r2, r1)     // Catch: java.lang.Throwable -> L15
            if (r1 >= 0) goto L13
            goto L1a
        L13:
            int r2 = r2 + r1
            goto L8
        L15:
            r2 = move-exception
            a(r0)
            throw r2
        L1a:
            a(r0)
            return
    }

    static boolean a(java.io.File r3) throws java.io.IOException {
            boolean r0 = r3.isFile()
            r1 = 1
            if (r0 == 0) goto L8
            return r1
        L8:
            java.io.File r0 = r3.getParentFile()
            if (r0 == 0) goto L21
            boolean r2 = r0.isDirectory()
            if (r2 != 0) goto L1a
            boolean r0 = r0.mkdirs()
            if (r0 == 0) goto L21
        L1a:
            boolean r3 = r3.createNewFile()
            if (r3 == 0) goto L21
            goto L22
        L21:
            r1 = 0
        L22:
            return r1
    }

    static boolean a(java.io.File r5, byte[] r6) {
            r0 = 0
            java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> L4e
            java.lang.String r2 = r5.getParent()     // Catch: java.lang.Exception -> L4e
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4e
            r3.<init>()     // Catch: java.lang.Exception -> L4e
            java.lang.String r4 = r5.getName()     // Catch: java.lang.Exception -> L4e
            r3.append(r4)     // Catch: java.lang.Exception -> L4e
            java.lang.String r4 = ".tmp"
            r3.append(r4)     // Catch: java.lang.Exception -> L4e
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L4e
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> L4e
            boolean r2 = a(r1)     // Catch: java.lang.Exception -> L4e
            if (r2 != 0) goto L26
            return r0
        L26:
            java.io.RandomAccessFile r2 = new java.io.RandomAccessFile     // Catch: java.lang.Exception -> L4e
            java.lang.String r3 = "rw"
            r2.<init>(r1, r3)     // Catch: java.lang.Exception -> L4e
            int r3 = r6.length     // Catch: java.lang.Throwable -> L49
            long r3 = (long) r3     // Catch: java.lang.Throwable -> L49
            r2.setLength(r3)     // Catch: java.lang.Throwable -> L49
            r2.write(r6)     // Catch: java.lang.Throwable -> L49
            a(r2)     // Catch: java.lang.Exception -> L4e
            boolean r6 = r5.exists()     // Catch: java.lang.Exception -> L4e
            if (r6 == 0) goto L44
            boolean r6 = r5.delete()     // Catch: java.lang.Exception -> L4e
            if (r6 == 0) goto L4e
        L44:
            boolean r5 = r1.renameTo(r5)     // Catch: java.lang.Exception -> L4e
            return r5
        L49:
            r5 = move-exception
            a(r2)     // Catch: java.lang.Exception -> L4e
            throw r5     // Catch: java.lang.Exception -> L4e
        L4e:
            return r0
    }

    static int b() {
            java.lang.String r0 = "sun.misc.Unsafe"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r1 = "theUnsafe"
            java.lang.reflect.Field r1 = r0.getDeclaredField(r1)     // Catch: java.lang.Throwable -> L2e
            r2 = 1
            r1.setAccessible(r2)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r3 = "pageSize"
            r4 = 0
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Throwable -> L2e
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r3, r5)     // Catch: java.lang.Throwable -> L2e
            r0.setAccessible(r2)     // Catch: java.lang.Throwable -> L2e
            r2 = 0
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Throwable -> L2e
            java.lang.Object[] r2 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L2e
            java.lang.Object r0 = r0.invoke(r1, r2)     // Catch: java.lang.Throwable -> L2e
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.Throwable -> L2e
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> L2e
            return r0
        L2e:
            r0 = 4096(0x1000, float:5.74E-42)
            return r0
    }

    static byte[] b(java.io.File r6) throws java.io.IOException {
            boolean r0 = r6.isFile()
            if (r0 != 0) goto L8
            r6 = 0
            return r6
        L8:
            long r0 = r6.length()
            r2 = 32
            long r2 = r0 >> r2
            r4 = 0
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto L1d
            int r0 = (int) r0
            byte[] r1 = new byte[r0]
            a(r6, r1, r0)
            return r1
        L1d:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "file too large, path:"
            r1.append(r2)
            java.lang.String r6 = r6.getPath()
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            r0.<init>(r6)
            throw r0
    }

    static void c(java.io.File r1) {
            boolean r0 = r1.exists()     // Catch: java.lang.Exception -> L9
            if (r0 == 0) goto L9
            d(r1)     // Catch: java.lang.Exception -> L9
        L9:
            return
    }

    private static void d(java.io.File r4) {
            boolean r0 = r4.isDirectory()
            if (r0 == 0) goto L18
            java.io.File[] r0 = r4.listFiles()
            if (r0 == 0) goto L18
            int r1 = r0.length
            r2 = 0
        Le:
            if (r2 >= r1) goto L18
            r3 = r0[r2]
            d(r3)
            int r2 = r2 + 1
            goto Le
        L18:
            r4.delete()
            return
    }
}
