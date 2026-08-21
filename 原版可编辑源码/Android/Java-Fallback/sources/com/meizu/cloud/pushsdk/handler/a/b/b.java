package com.meizu.cloud.pushsdk.handler.a.b;

public class b {
    private final java.io.File a;

    public b(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            r1.a = r0
            return
    }

    private void a(java.io.File r7, java.util.zip.ZipOutputStream r8, java.lang.String r9) {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r9)
            java.lang.String r9 = r9.trim()
            int r9 = r9.length()
            if (r9 != 0) goto L15
            java.lang.String r9 = ""
            goto L17
        L15:
            java.lang.String r9 = java.io.File.separator
        L17:
            r0.append(r9)
            java.lang.String r9 = r7.getName()
            r0.append(r9)
            java.lang.String r9 = r0.toString()
            boolean r0 = r7.isDirectory()
            r1 = 0
            if (r0 == 0) goto L3c
            java.io.File[] r7 = r7.listFiles()
            int r0 = r7.length
            int r0 = r7.length
        L32:
            if (r1 >= r0) goto La7
            r2 = r7[r1]
            r6.a(r2, r8, r9)
            int r1 = r1 + 1
            goto L32
        L3c:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "current file "
            r0.append(r2)
            r0.append(r9)
            java.lang.String r2 = "/"
            r0.append(r2)
            java.lang.String r2 = r7.getName()
            r0.append(r2)
            java.lang.String r2 = " size is "
            r0.append(r2)
            long r2 = r7.length()
            r4 = 1024(0x400, double:5.06E-321)
            long r2 = r2 / r4
            r0.append(r2)
            java.lang.String r2 = "KB"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "ZipTask"
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r0)
            long r2 = r7.length()
            r4 = 10485760(0xa00000, double:5.180654E-317)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 >= 0) goto La7
            r0 = 1048576(0x100000, float:1.469368E-39)
            byte[] r2 = new byte[r0]
            java.io.BufferedInputStream r3 = new java.io.BufferedInputStream
            java.io.FileInputStream r4 = new java.io.FileInputStream
            r4.<init>(r7)
            r3.<init>(r4, r0)
            java.util.zip.ZipEntry r7 = new java.util.zip.ZipEntry
            r7.<init>(r9)
            r8.putNextEntry(r7)
        L93:
            int r7 = r3.read(r2)
            r9 = -1
            if (r7 == r9) goto L9e
            r8.write(r2, r1, r7)
            goto L93
        L9e:
            r3.close()
            r8.flush()
            r8.closeEntry()
        La7:
            return
    }

    private void a(java.util.Collection<java.io.File> r4, java.io.File r5) {
            r3 = this;
            java.util.zip.ZipOutputStream r0 = new java.util.zip.ZipOutputStream
            java.io.BufferedOutputStream r1 = new java.io.BufferedOutputStream
            java.io.FileOutputStream r2 = new java.io.FileOutputStream
            r2.<init>(r5)
            r5 = 1048576(0x100000, float:1.469368E-39)
            r1.<init>(r2, r5)
            r0.<init>(r1)
            java.util.Iterator r4 = r4.iterator()
        L15:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L27
            java.lang.Object r5 = r4.next()
            java.io.File r5 = (java.io.File) r5
            java.lang.String r1 = ""
            r3.a(r5, r0, r1)
            goto L15
        L27:
            r0.close()
            return
    }

    public void a(java.util.List<java.lang.String> r6) {
            r5 = this;
            java.io.File r0 = r5.a
            boolean r0 = r0.exists()
            if (r0 != 0) goto L11
            java.io.File r0 = r5.a
            java.io.File r0 = r0.getParentFile()
            r0.mkdirs()
        L11:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.io.File r1 = android.os.Environment.getExternalStorageDirectory()
            java.lang.String r1 = r1.getAbsolutePath()
            java.util.Iterator r6 = r6.iterator()
        L22:
            boolean r2 = r6.hasNext()
            if (r2 == 0) goto L4c
            java.lang.Object r2 = r6.next()
            java.lang.String r2 = (java.lang.String) r2
            java.io.File r3 = new java.io.File
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r1)
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r3.<init>(r2)
            boolean r2 = r3.exists()
            if (r2 == 0) goto L22
            r0.add(r3)
            goto L22
        L4c:
            java.io.File r6 = r5.a
            r5.a(r0, r6)
            return
    }
}
