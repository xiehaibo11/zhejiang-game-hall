package com.sigmob.sdk.base.utils;

public final class a {

    private static class a extends android.os.AsyncTask<java.lang.String, java.lang.Void, java.lang.Boolean> {
        private final java.io.File a;
        private final java.io.File b;
        private final com.sigmob.sdk.base.utils.a.b c;

        a(java.io.File r1, java.io.File r2, com.sigmob.sdk.base.utils.a.b r3) {
                r0 = this;
                r0.<init>()
                r0.a = r2
                r0.b = r1
                r0.c = r3
                return
        }

        protected java.lang.Boolean a(java.lang.String[] r2) {
                r1 = this;
                java.io.File r2 = r1.a     // Catch: java.lang.Throwable -> Ld
                java.io.File r0 = r1.b     // Catch: java.lang.Throwable -> Ld
                com.sigmob.sdk.base.utils.a.a(r2, r0)     // Catch: java.lang.Throwable -> Ld
                r2 = 1
                java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)     // Catch: java.lang.Throwable -> Ld
                return r2
            Ld:
                r2 = move-exception
                java.lang.String r2 = r2.getMessage()
                com.czhj.sdk.logger.SigmobLog.e(r2)
                r2 = 0
                java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
                return r2
        }

        protected void a(java.lang.Boolean r2) {
                r1 = this;
                com.sigmob.sdk.base.utils.a$b r0 = r1.c
                if (r0 == 0) goto Lb
                boolean r2 = r2.booleanValue()
                r0.a(r2)
            Lb:
                return
        }

        @Override
        protected java.lang.Boolean doInBackground(java.lang.String[] r1) {
                r0 = this;
                java.lang.String[] r1 = (java.lang.String[]) r1
                java.lang.Boolean r1 = r0.a(r1)
                return r1
        }

        @Override
        protected void onPostExecute(java.lang.Boolean r1) {
                r0 = this;
                java.lang.Boolean r1 = (java.lang.Boolean) r1
                r0.a(r1)
                return
        }
    }

    interface b {
        void a(boolean r1);
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.util.List<java.io.File> a(java.io.File r8, java.io.File r9) throws java.io.IOException, com.sigmob.sdk.archives.b {
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = r8.getAbsolutePath()
            r2 = 0
            r0[r2] = r1
            java.lang.String r1 = r9.getAbsolutePath()
            r3 = 1
            r0[r3] = r1
            java.lang.String r1 = "Untaring %s to dir %s."
            java.lang.String r0 = java.lang.String.format(r1, r0)
            com.czhj.sdk.logger.SigmobLog.i(r0)
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            java.io.FileInputStream r1 = new java.io.FileInputStream
            r1.<init>(r8)
            java.util.zip.GZIPInputStream r4 = new java.util.zip.GZIPInputStream     // Catch: java.lang.Throwable -> L2a
            r4.<init>(r1)     // Catch: java.lang.Throwable -> L2a
            goto L3b
        L2a:
            r4 = move-exception
            r1.close()
            java.io.FileInputStream r1 = new java.io.FileInputStream
            r1.<init>(r8)
            java.lang.String r8 = r4.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r8)
            r4 = 0
        L3b:
            java.lang.String r8 = "tar"
            com.sigmob.sdk.archives.d r5 = new com.sigmob.sdk.archives.d
            if (r4 == 0) goto L49
            r5.<init>()
            com.sigmob.sdk.archives.c r8 = r5.a(r8, r4)
            goto L50
        L49:
            r5.<init>()
            com.sigmob.sdk.archives.c r8 = r5.a(r8, r1)
        L50:
            com.sigmob.sdk.archives.tar.b r8 = (com.sigmob.sdk.archives.tar.b) r8
            boolean r5 = r9.exists()
            if (r5 != 0) goto L5b
            r9.mkdirs()
        L5b:
            com.sigmob.sdk.archives.a r5 = r8.a()
            com.sigmob.sdk.archives.tar.a r5 = (com.sigmob.sdk.archives.tar.a) r5
            if (r5 == 0) goto Le7
            java.io.File r6 = new java.io.File
            java.lang.String r7 = r5.a()
            r6.<init>(r9, r7)
            boolean r5 = r5.c()
            if (r5 == 0) goto Lb5
            java.lang.Object[] r5 = new java.lang.Object[r3]
            java.lang.String r7 = r6.getAbsolutePath()
            r5[r2] = r7
            java.lang.String r7 = "Attempting to write output directory %s."
            java.lang.String r5 = java.lang.String.format(r7, r5)
            com.czhj.sdk.logger.SigmobLog.i(r5)
            boolean r5 = r6.exists()
            if (r5 != 0) goto Le2
            java.lang.Object[] r5 = new java.lang.Object[r3]
            java.lang.String r7 = r6.getAbsolutePath()
            r5[r2] = r7
            java.lang.String r7 = "Attempting to create output directory %s."
            java.lang.String r5 = java.lang.String.format(r7, r5)
            com.czhj.sdk.logger.SigmobLog.i(r5)
            boolean r5 = r6.mkdirs()
            if (r5 == 0) goto La1
            goto Le2
        La1:
            java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
            java.lang.Object[] r9 = new java.lang.Object[r3]
            java.lang.String r0 = r6.getAbsolutePath()
            r9[r2] = r0
            java.lang.String r0 = "Couldn't create directory %s."
            java.lang.String r9 = java.lang.String.format(r0, r9)
            r8.<init>(r9)
            throw r8
        Lb5:
            java.lang.Object[] r5 = new java.lang.Object[r3]
            java.lang.String r7 = r6.getAbsolutePath()
            r5[r2] = r7
            java.lang.String r7 = "Creating output file %s."
            java.lang.String r5 = java.lang.String.format(r7, r5)
            com.czhj.sdk.logger.SigmobLog.i(r5)
            java.io.File r5 = r6.getParentFile()
            boolean r5 = r5.exists()
            if (r5 != 0) goto Ld7
            java.io.File r5 = r6.getParentFile()
            r5.mkdirs()
        Ld7:
            java.io.FileOutputStream r5 = new java.io.FileOutputStream
            r5.<init>(r6)
            com.sigmob.sdk.archives.utils.c.a(r8, r5)
            r5.close()
        Le2:
            r0.add(r6)
            goto L5b
        Le7:
            r8.close()
            if (r4 == 0) goto Lef
            r4.close()
        Lef:
            r1.close()
            return r0
    }

    public static void a(java.io.File r2, java.io.File r3, com.sigmob.sdk.base.utils.a.b r4) {
            com.sigmob.sdk.base.utils.a$a r0 = new com.sigmob.sdk.base.utils.a$a
            r0.<init>(r2, r3, r4)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "uncompressTarGzipAsync()  inputFile = ["
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = "], outputDir = ["
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = "], unCompressAsyncTaskListener = ["
            r0.append(r2)
            r0.append(r4)
            java.lang.String r2 = "]"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r2)
            return
    }

    public static byte[] a(java.lang.String r1) throws java.io.IOException {
            if (r1 == 0) goto L14
            int r0 = r1.length()
            if (r0 != 0) goto L9
            goto L14
        L9:
            java.lang.String r0 = "utf-8"
            byte[] r1 = r1.getBytes(r0)
            byte[] r1 = a(r1)
            return r1
        L14:
            r1 = 0
            return r1
    }

    private static byte[] a(byte[] r2) throws java.io.IOException {
            if (r2 == 0) goto L1b
            int r0 = r2.length
            if (r0 != 0) goto L6
            goto L1b
        L6:
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            java.util.zip.GZIPOutputStream r1 = new java.util.zip.GZIPOutputStream
            r1.<init>(r0)
            r1.write(r2)
            r1.close()
            byte[] r2 = r0.toByteArray()
            return r2
        L1b:
            r2 = 0
            return r2
    }

    public static java.lang.String b(java.lang.String r1) throws java.io.IOException {
            if (r1 == 0) goto L19
            int r0 = r1.length()
            if (r0 != 0) goto L9
            goto L19
        L9:
            java.lang.String r0 = "utf-8"
            byte[] r1 = r1.getBytes(r0)
            byte[] r1 = b(r1)
            java.lang.String r0 = new java.lang.String
            r0.<init>(r1)
            return r0
        L19:
            return r1
    }

    private static byte[] b(byte[] r5) throws java.io.IOException {
            if (r5 == 0) goto L2e
            int r0 = r5.length
            if (r0 != 0) goto L6
            goto L2e
        L6:
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream
            r1.<init>(r5)
            java.util.zip.GZIPInputStream r5 = new java.util.zip.GZIPInputStream
            r5.<init>(r1)
            r2 = 256(0x100, float:3.59E-43)
            byte[] r2 = new byte[r2]
        L19:
            int r3 = r5.read(r2)
            if (r3 < 0) goto L24
            r4 = 0
            r0.write(r2, r4, r3)
            goto L19
        L24:
            r5.close()
            r1.close()
            byte[] r5 = r0.toByteArray()
        L2e:
            return r5
    }
}
