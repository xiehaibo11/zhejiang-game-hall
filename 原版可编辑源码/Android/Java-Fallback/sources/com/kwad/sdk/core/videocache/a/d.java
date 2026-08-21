package com.kwad.sdk.core.videocache.a;

final class d {

    static final class a implements java.util.Comparator<java.io.File> {
        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        a(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        private int c(java.io.File r3, java.io.File r4) {
                r2 = this;
                long r0 = r3.lastModified()
                long r3 = r4.lastModified()
                int r3 = compareLong(r0, r3)
                return r3
        }

        private static int compareLong(long r0, long r2) {
                int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r0 >= 0) goto L6
                r0 = -1
                return r0
            L6:
                if (r0 != 0) goto La
                r0 = 0
                return r0
            La:
                r0 = 1
                return r0
        }

        @Override
        public final int compare(java.io.File r1, java.io.File r2) {
                r0 = this;
                java.io.File r1 = (java.io.File) r1
                java.io.File r2 = (java.io.File) r2
                int r1 = r0.c(r1, r2)
                return r1
        }
    }

    static void u(java.io.File r3) {
            boolean r0 = r3.exists()
            if (r0 == 0) goto L26
            boolean r0 = r3.isDirectory()
            if (r0 == 0) goto Ld
            goto L2c
        Ld:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "File "
            r1.<init>(r2)
            r1.append(r3)
            java.lang.String r3 = " is not directory!"
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L26:
            boolean r0 = r3.mkdirs()
            if (r0 == 0) goto L2d
        L2c:
            return
        L2d:
            java.io.IOException r0 = new java.io.IOException
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            java.lang.String r3 = r3.getAbsolutePath()
            r1[r2] = r3
            java.lang.String r3 = "Directory %s can't be created"
            java.lang.String r3 = java.lang.String.format(r3, r1)
            r0.<init>(r3)
            throw r0
    }

    static java.util.List<java.io.File> v(java.io.File r2) {
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            java.io.File[] r2 = r2.listFiles()
            if (r2 == 0) goto L18
            java.util.List r0 = java.util.Arrays.asList(r2)
            com.kwad.sdk.core.videocache.a.d$a r2 = new com.kwad.sdk.core.videocache.a.d$a
            r1 = 0
            r2.<init>(r1)
            java.util.Collections.sort(r0, r2)
        L18:
            return r0
    }

    static void w(java.io.File r5) {
            boolean r0 = r5.exists()
            if (r0 == 0) goto L3c
            long r0 = java.lang.System.currentTimeMillis()
            boolean r2 = r5.setLastModified(r0)
            if (r2 != 0) goto L3c
            x(r5)
            long r2 = r5.lastModified()
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 >= 0) goto L3c
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.util.Date r2 = new java.util.Date
            long r3 = r5.lastModified()
            r2.<init>(r3)
            r0[r1] = r2
            r1 = 1
            java.lang.String r5 = r5.getAbsolutePath()
            r0[r1] = r5
            java.lang.String r5 = "Last modified date %s is not set for file %s"
            java.lang.String r5 = java.lang.String.format(r5, r0)
            java.lang.String r0 = "Files"
            com.kwad.sdk.core.e.c.w(r0, r5)
        L3c:
            return
    }

    private static void x(java.io.File r6) {
            long r0 = r6.length()
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto Le
            y(r6)
            return
        Le:
            r2 = 0
            java.io.RandomAccessFile r3 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L30 java.io.IOException -> L32
            java.lang.String r4 = "rwd"
            r3.<init>(r6, r4)     // Catch: java.lang.Throwable -> L30 java.io.IOException -> L32
            r4 = 1
            long r0 = r0 - r4
            r3.seek(r0)     // Catch: java.lang.Throwable -> L2a java.io.IOException -> L2d
            byte r6 = r3.readByte()     // Catch: java.lang.Throwable -> L2a java.io.IOException -> L2d
            r3.seek(r0)     // Catch: java.lang.Throwable -> L2a java.io.IOException -> L2d
            r3.write(r6)     // Catch: java.lang.Throwable -> L2a java.io.IOException -> L2d
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            return
        L2a:
            r6 = move-exception
            r2 = r3
            goto L3a
        L2d:
            r6 = move-exception
            r2 = r3
            goto L33
        L30:
            r6 = move-exception
            goto L3a
        L32:
            r6 = move-exception
        L33:
            com.kwad.sdk.core.e.c.printStackTraceOnly(r6)     // Catch: java.lang.Throwable -> L30
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            return
        L3a:
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            throw r6
    }

    private static void y(java.io.File r3) {
            boolean r0 = r3.delete()
            if (r0 == 0) goto Ld
            boolean r0 = r3.createNewFile()
            if (r0 == 0) goto Ld
            return
        Ld:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Error recreate zero-size file "
            r1.<init>(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }
}
