package com.sigmob.sdk.videocache.file;

class d {

    static class 1 {
    }

    private static final class a implements java.util.Comparator<java.io.File> {
        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        a(com.sigmob.sdk.videocache.file.d.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        private int a(long r1, long r3) {
                r0 = this;
                int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
                if (r1 >= 0) goto L6
                r1 = -1
                goto Lb
            L6:
                if (r1 != 0) goto La
                r1 = 0
                goto Lb
            La:
                r1 = 1
            Lb:
                return r1
        }

        public int a(java.io.File r3, java.io.File r4) {
                r2 = this;
                long r0 = r3.lastModified()
                long r3 = r4.lastModified()
                int r3 = r2.a(r0, r3)
                return r3
        }

        @Override
        public int compare(java.io.File r1, java.io.File r2) {
                r0 = this;
                java.io.File r1 = (java.io.File) r1
                java.io.File r2 = (java.io.File) r2
                int r1 = r0.a(r1, r2)
                return r1
        }
    }

    d() {
            r0 = this;
            r0.<init>()
            return
    }

    static void a(java.io.File r3) throws java.io.IOException {
            boolean r0 = r3.exists()
            if (r0 == 0) goto L29
            boolean r0 = r3.isDirectory()
            if (r0 == 0) goto Ld
            goto L2f
        Ld:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "File "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = " is not directory!"
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L29:
            boolean r0 = r3.mkdirs()
            if (r0 == 0) goto L30
        L2f:
            return
        L30:
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

    static java.util.List<java.io.File> b(java.io.File r2) {
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            java.io.File[] r2 = r2.listFiles()
            if (r2 == 0) goto L18
            java.util.List r0 = java.util.Arrays.asList(r2)
            com.sigmob.sdk.videocache.file.d$a r2 = new com.sigmob.sdk.videocache.file.d$a
            r1 = 0
            r2.<init>(r1)
            java.util.Collections.sort(r0, r2)
        L18:
            return r0
    }

    static void c(java.io.File r4) throws java.io.IOException {
            boolean r0 = r4.exists()
            if (r0 == 0) goto L44
            long r0 = java.lang.System.currentTimeMillis()
            boolean r2 = r4.setLastModified(r0)
            if (r2 != 0) goto L44
            d(r4)
            long r2 = r4.lastModified()
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 >= 0) goto L44
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Last modified date "
            r0.append(r1)
            java.util.Date r1 = new java.util.Date
            long r2 = r4.lastModified()
            r1.<init>(r2)
            r0.append(r1)
            java.lang.String r1 = " is not set for file "
            r0.append(r1)
            java.lang.String r4 = r4.getAbsolutePath()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.e(r4)
        L44:
            return
    }

    static void d(java.io.File r5) throws java.io.IOException {
            long r0 = r5.length()
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto Le
            e(r5)
            return
        Le:
            java.io.RandomAccessFile r2 = new java.io.RandomAccessFile
            java.lang.String r3 = "rwd"
            r2.<init>(r5, r3)
            r3 = 1
            long r0 = r0 - r3
            r2.seek(r0)
            byte r5 = r2.readByte()
            r2.seek(r0)
            r2.write(r5)
            r2.close()
            return
    }

    private static void e(java.io.File r3) throws java.io.IOException {
            boolean r0 = r3.delete()
            if (r0 == 0) goto Ld
            boolean r0 = r3.createNewFile()
            if (r0 == 0) goto Ld
            return
        Ld:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Error recreate zero-size file "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }
}
