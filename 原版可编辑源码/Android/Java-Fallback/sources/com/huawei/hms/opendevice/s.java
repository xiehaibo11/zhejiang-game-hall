package com.huawei.hms.opendevice;

public abstract class s {
    public static java.lang.String a(java.io.InputStream r3) throws java.io.IOException {
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            int r1 = r3.read()
        L9:
            r2 = -1
            if (r2 == r1) goto L14
            r0.write(r1)
            int r1 = r3.read()
            goto L9
        L14:
            java.lang.String r1 = "UTF-8"
            java.lang.String r1 = r0.toString(r1)
            a(r3)
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r0)
            return r1
    }

    public static java.lang.String a(java.lang.String r5) {
            java.lang.String r0 = "StreamUtil"
            java.io.File r1 = new java.io.File
            r1.<init>(r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r2 = 0
            java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L39 java.io.FileNotFoundException -> L40
            java.io.FileInputStream r4 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L39 java.io.FileNotFoundException -> L40
            r4.<init>(r1)     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L39 java.io.FileNotFoundException -> L40
            java.lang.String r1 = "UTF-8"
            r3.<init>(r4, r1)     // Catch: java.lang.Throwable -> L36 java.io.IOException -> L39 java.io.FileNotFoundException -> L40
            java.io.BufferedReader r1 = new java.io.BufferedReader     // Catch: java.io.IOException -> L3a java.io.FileNotFoundException -> L41 java.lang.Throwable -> L51
            r1.<init>(r3)     // Catch: java.io.IOException -> L3a java.io.FileNotFoundException -> L41 java.lang.Throwable -> L51
        L1e:
            java.lang.String r2 = r1.readLine()     // Catch: java.lang.Throwable -> L2f java.io.IOException -> L32 java.io.FileNotFoundException -> L34
            if (r2 == 0) goto L28
            r5.append(r2)     // Catch: java.lang.Throwable -> L2f java.io.IOException -> L32 java.io.FileNotFoundException -> L34
            goto L1e
        L28:
            com.huawei.hms.utils.IOUtils.closeQuietly(r3)
            com.huawei.hms.utils.IOUtils.closeQuietly(r1)
            goto L4c
        L2f:
            r5 = move-exception
            r2 = r1
            goto L52
        L32:
            r2 = r1
            goto L3a
        L34:
            r2 = r1
            goto L41
        L36:
            r5 = move-exception
            r3 = r2
            goto L52
        L39:
            r3 = r2
        L3a:
            java.lang.String r1 = "read value IOException."
            com.huawei.hms.support.log.HMSLog.e(r0, r1)     // Catch: java.lang.Throwable -> L51
            goto L46
        L40:
            r3 = r2
        L41:
            java.lang.String r1 = "file not exist."
            com.huawei.hms.support.log.HMSLog.e(r0, r1)     // Catch: java.lang.Throwable -> L51
        L46:
            com.huawei.hms.utils.IOUtils.closeQuietly(r3)
            com.huawei.hms.utils.IOUtils.closeQuietly(r2)
        L4c:
            java.lang.String r5 = r5.toString()
            return r5
        L51:
            r5 = move-exception
        L52:
            com.huawei.hms.utils.IOUtils.closeQuietly(r3)
            com.huawei.hms.utils.IOUtils.closeQuietly(r2)
            throw r5
    }

    public static void a(java.io.Closeable r1) {
            if (r1 == 0) goto Ld
            r1.close()     // Catch: java.io.IOException -> L6
            goto Ld
        L6:
            java.lang.String r1 = "StreamUtil"
            java.lang.String r0 = "close IOException"
            com.huawei.hms.support.log.HMSLog.w(r1, r0)
        Ld:
            return
    }

    public static void a(java.io.File r2) throws java.io.IOException {
            boolean r0 = r2.exists()
            if (r0 == 0) goto L7
            return
        L7:
            java.io.File r0 = r2.getParentFile()
            java.lang.String r1 = "StreamUtil"
            if (r0 == 0) goto L45
            java.io.File r0 = r2.getParentFile()
            boolean r0 = r0.exists()
            if (r0 != 0) goto L31
            java.io.File r0 = r2.getParentFile()
            boolean r0 = r0.mkdirs()
            if (r0 == 0) goto L24
            goto L31
        L24:
            java.lang.String r2 = "make parent dirs failed."
            com.huawei.hms.support.log.HMSLog.e(r1, r2)
            java.io.IOException r2 = new java.io.IOException
            java.lang.String r0 = "make parent dirs failed"
            r2.<init>(r0)
            throw r2
        L31:
            boolean r2 = r2.createNewFile()
            if (r2 == 0) goto L38
            return
        L38:
            java.lang.String r2 = "create file failed."
            com.huawei.hms.support.log.HMSLog.e(r1, r2)
            java.io.IOException r2 = new java.io.IOException
            java.lang.String r0 = "create file failed"
            r2.<init>(r0)
            throw r2
        L45:
            java.lang.String r2 = "parent file is null."
            com.huawei.hms.support.log.HMSLog.e(r1, r2)
            java.io.IOException r2 = new java.io.IOException
            java.lang.String r0 = "parent file is null"
            r2.<init>(r0)
            throw r2
    }

    public static void a(java.net.HttpURLConnection r1) {
            if (r1 == 0) goto Ld
            r1.disconnect()     // Catch: java.lang.Throwable -> L6
            goto Ld
        L6:
            java.lang.String r1 = "StreamUtil"
            java.lang.String r0 = "close HttpURLConnection Exception"
            com.huawei.hms.support.log.HMSLog.w(r1, r0)
        Ld:
            return
    }
}
