package com.bytedance.android.openliveplugin.material;

public class ZipFileUtil {
    private static final int NUM_2048 = 2048;

    private ZipFileUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String readTextFile(java.io.File r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.io.FileInputStream r1 = new java.io.FileInputStream     // Catch: java.lang.Exception -> L1a
            r1.<init>(r3)     // Catch: java.lang.Exception -> L1a
        La:
            int r3 = r1.read()     // Catch: java.lang.Exception -> L1a
            r2 = -1
            if (r3 == r2) goto L16
            char r3 = (char) r3     // Catch: java.lang.Exception -> L1a
            r0.append(r3)     // Catch: java.lang.Exception -> L1a
            goto La
        L16:
            r1.close()     // Catch: java.lang.Exception -> L1a
            goto L1e
        L1a:
            r3 = move-exception
            r3.printStackTrace()
        L1e:
            java.lang.String r3 = r0.toString()
            return r3
    }

    public static boolean removeDir(java.io.File r5) {
            boolean r0 = r5.isDirectory()
            if (r0 == 0) goto L30
            java.io.File[] r0 = r5.listFiles()
            if (r0 == 0) goto L2b
            int r1 = r0.length
            if (r1 != 0) goto L10
            goto L2b
        L10:
            int r1 = r0.length
            r2 = 0
        L12:
            if (r2 >= r1) goto L26
            r3 = r0[r2]
            boolean r4 = r3.isDirectory()
            if (r4 == 0) goto L20
            removeDir(r3)
            goto L23
        L20:
            r3.delete()
        L23:
            int r2 = r2 + 1
            goto L12
        L26:
            boolean r5 = r5.delete()
            return r5
        L2b:
            boolean r5 = r5.delete()
            return r5
        L30:
            boolean r5 = r5.delete()
            return r5
    }

    public static void unZipFolder(java.lang.String r4, java.lang.String r5) {
            java.util.zip.ZipInputStream r0 = new java.util.zip.ZipInputStream
            java.io.BufferedInputStream r1 = new java.io.BufferedInputStream
            java.io.FileInputStream r2 = new java.io.FileInputStream
            r2.<init>(r4)
            r1.<init>(r2)
            r0.<init>(r1)
        Lf:
            java.util.zip.ZipEntry r4 = r0.getNextEntry()
            if (r4 == 0) goto L94
            java.lang.String r1 = r4.getName()
            java.lang.String r2 = ".."
            boolean r2 = r1.contains(r2)
            if (r2 == 0) goto L22
            goto Lf
        L22:
            boolean r4 = r4.isDirectory()
            if (r4 == 0) goto L45
            java.io.File r4 = new java.io.File
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r5)
            java.lang.String r3 = java.io.File.separator
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r4.<init>(r1)
            r4.mkdirs()
            goto Lf
        L45:
            java.io.File r4 = new java.io.File
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r5)
            java.lang.String r3 = java.io.File.separator
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r4.<init>(r1)
            boolean r1 = r4.exists()
            if (r1 == 0) goto L68
            r4.delete()
            goto L6f
        L68:
            java.io.File r1 = r4.getParentFile()
            r1.mkdirs()
        L6f:
            r4.createNewFile()
            java.io.BufferedOutputStream r1 = new java.io.BufferedOutputStream
            java.io.FileOutputStream r2 = new java.io.FileOutputStream
            r2.<init>(r4)
            r1.<init>(r2)
            r4 = 2048(0x800, float:2.87E-42)
            byte[] r4 = new byte[r4]
        L80:
            int r2 = r0.read(r4)
            r3 = -1
            if (r2 == r3) goto L8c
            r3 = 0
            r1.write(r4, r3, r2)
            goto L80
        L8c:
            r1.flush()
            r1.close()
            goto Lf
        L94:
            r0.close()
            return
    }
}
