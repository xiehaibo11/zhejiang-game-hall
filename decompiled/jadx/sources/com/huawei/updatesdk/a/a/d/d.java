package com.huawei.updatesdk.a.a.d;

import java.io.Closeable;
import java.io.File;
import java.io.IOException;

/* JADX INFO: loaded from: classes2.dex */
public abstract class d {
    /* JADX WARN: Can't wrap try/catch for region: R(7:(5:70|5|6|68|7)|(5:8|(1:10)(1:72)|63|15|55)|11|(2:13|14)|63|15|55) */
    /* JADX WARN: Code restructure failed: missing block: B:54:0x0079, code lost:
    
        com.huawei.updatesdk.a.a.c.a.a.a.b("FileUtil", "Close FileInputStream failed!");
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r2v0, types: [boolean] */
    /* JADX WARN: Type inference failed for: r3v0 */
    /* JADX WARN: Type inference failed for: r3v1 */
    /* JADX WARN: Type inference failed for: r3v2, types: [java.io.FileInputStream] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static java.lang.String a(java.lang.String r10, java.lang.String r11) throws java.lang.Throwable {
        /*
            java.lang.String r0 = "Close FileInputStream failed!"
            java.lang.String r1 = "FileUtil"
            boolean r2 = android.text.TextUtils.isEmpty(r10)
            r3 = 0
            if (r2 == 0) goto Lc
            return r3
        Lc:
            java.security.MessageDigest r11 = java.security.MessageDigest.getInstance(r11)     // Catch: java.lang.Throwable -> L45 java.lang.IndexOutOfBoundsException -> L47 java.lang.IllegalArgumentException -> L51 java.io.IOException -> L5b java.io.FileNotFoundException -> L65 java.security.NoSuchAlgorithmException -> L6f
            java.io.FileInputStream r2 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L45 java.lang.IndexOutOfBoundsException -> L47 java.lang.IllegalArgumentException -> L51 java.io.IOException -> L5b java.io.FileNotFoundException -> L65 java.security.NoSuchAlgorithmException -> L6f
            r2.<init>(r10)     // Catch: java.lang.Throwable -> L45 java.lang.IndexOutOfBoundsException -> L47 java.lang.IllegalArgumentException -> L51 java.io.IOException -> L5b java.io.FileNotFoundException -> L65 java.security.NoSuchAlgorithmException -> L6f
            r10 = 1024(0x400, float:1.435E-42)
            byte[] r10 = new byte[r10]     // Catch: java.lang.IndexOutOfBoundsException -> L3b java.lang.IllegalArgumentException -> L3d java.io.IOException -> L3f java.io.FileNotFoundException -> L41 java.security.NoSuchAlgorithmException -> L43 java.lang.Throwable -> L7d
            r4 = 0
            r6 = r4
        L1c:
            int r8 = r2.read(r10)     // Catch: java.lang.IndexOutOfBoundsException -> L3b java.lang.IllegalArgumentException -> L3d java.io.IOException -> L3f java.io.FileNotFoundException -> L41 java.security.NoSuchAlgorithmException -> L43 java.lang.Throwable -> L7d
            r9 = -1
            if (r8 == r9) goto L2a
            r9 = 0
            r11.update(r10, r9, r8)     // Catch: java.lang.IndexOutOfBoundsException -> L3b java.lang.IllegalArgumentException -> L3d java.io.IOException -> L3f java.io.FileNotFoundException -> L41 java.security.NoSuchAlgorithmException -> L43 java.lang.Throwable -> L7d
            long r8 = (long) r8     // Catch: java.lang.IndexOutOfBoundsException -> L3b java.lang.IllegalArgumentException -> L3d java.io.IOException -> L3f java.io.FileNotFoundException -> L41 java.security.NoSuchAlgorithmException -> L43 java.lang.Throwable -> L7d
            long r6 = r6 + r8
            goto L1c
        L2a:
            int r10 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r10 <= 0) goto L37
            byte[] r10 = r11.digest()     // Catch: java.lang.IndexOutOfBoundsException -> L3b java.lang.IllegalArgumentException -> L3d java.io.IOException -> L3f java.io.FileNotFoundException -> L41 java.security.NoSuchAlgorithmException -> L43 java.lang.Throwable -> L7d
            java.lang.String r10 = com.huawei.updatesdk.a.a.d.b.a(r10)     // Catch: java.lang.IndexOutOfBoundsException -> L3b java.lang.IllegalArgumentException -> L3d java.io.IOException -> L3f java.io.FileNotFoundException -> L41 java.security.NoSuchAlgorithmException -> L43 java.lang.Throwable -> L7d
            r3 = r10
        L37:
            r2.close()     // Catch: java.io.IOException -> L79
            goto L7c
        L3b:
            r10 = move-exception
            goto L49
        L3d:
            r10 = move-exception
            goto L53
        L3f:
            r10 = move-exception
            goto L5d
        L41:
            r10 = move-exception
            goto L67
        L43:
            r10 = move-exception
            goto L71
        L45:
            r10 = move-exception
            goto L7f
        L47:
            r10 = move-exception
            r2 = r3
        L49:
            java.lang.String r11 = "getFileHashData IndexOutOfBoundsException"
            com.huawei.updatesdk.a.a.c.a.a.a.a(r1, r11, r10)     // Catch: java.lang.Throwable -> L7d
            if (r2 == 0) goto L7c
            goto L37
        L51:
            r10 = move-exception
            r2 = r3
        L53:
            java.lang.String r11 = "getFileHashData IllegalArgumentException"
            com.huawei.updatesdk.a.a.c.a.a.a.a(r1, r11, r10)     // Catch: java.lang.Throwable -> L7d
            if (r2 == 0) goto L7c
            goto L37
        L5b:
            r10 = move-exception
            r2 = r3
        L5d:
            java.lang.String r11 = "getFileHashData IOException"
            com.huawei.updatesdk.a.a.c.a.a.a.a(r1, r11, r10)     // Catch: java.lang.Throwable -> L7d
            if (r2 == 0) goto L7c
            goto L37
        L65:
            r10 = move-exception
            r2 = r3
        L67:
            java.lang.String r11 = "getFileHashData FileNotFoundException"
            com.huawei.updatesdk.a.a.c.a.a.a.a(r1, r11, r10)     // Catch: java.lang.Throwable -> L7d
            if (r2 == 0) goto L7c
            goto L37
        L6f:
            r10 = move-exception
            r2 = r3
        L71:
            java.lang.String r11 = "getFileHashData NoSuchAlgorithmException"
            com.huawei.updatesdk.a.a.c.a.a.a.a(r1, r11, r10)     // Catch: java.lang.Throwable -> L7d
            if (r2 == 0) goto L7c
            goto L37
        L79:
            com.huawei.updatesdk.a.a.c.a.a.a.b(r1, r0)
        L7c:
            return r3
        L7d:
            r10 = move-exception
            r3 = r2
        L7f:
            if (r3 == 0) goto L88
            r3.close()     // Catch: java.io.IOException -> L85
            goto L88
        L85:
            com.huawei.updatesdk.a.a.c.a.a.a.b(r1, r0)
        L88:
            throw r10
        */
        throw new UnsupportedOperationException("Method not decompiled: com.huawei.updatesdk.a.a.d.d.a(java.lang.String, java.lang.String):java.lang.String");
    }

    public static void a(Closeable closeable) {
        if (closeable != null) {
            try {
                closeable.close();
            } catch (IOException e) {
                com.huawei.updatesdk.a.a.c.a.a.a.a("FileUtil", "Closeable exception", e);
            }
        }
    }

    public static boolean a(File file) {
        if (file == null || !file.exists()) {
            return true;
        }
        if (file.isFile()) {
            return file.delete();
        }
        File[] fileArrListFiles = file.listFiles();
        if (fileArrListFiles != null && fileArrListFiles.length > 0) {
            for (File file2 : fileArrListFiles) {
                a(file2);
            }
        }
        return file.delete();
    }
}
