package com.mbridge.msdk.foundation.tools;

public class w {
    protected static char[] a = null;
    protected static java.security.MessageDigest b = null;
    private static java.lang.String c = "SameFileMD5";

    static {
            r0 = 16
            char[] r0 = new char[r0]
            r0 = {x0036: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102} // fill-array
            com.mbridge.msdk.foundation.tools.w.a = r0
            r0 = 0
            com.mbridge.msdk.foundation.tools.w.b = r0
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> L15
            com.mbridge.msdk.foundation.tools.w.b = r0     // Catch: java.security.NoSuchAlgorithmException -> L15
            goto L35
        L15:
            r0 = move-exception
            java.io.PrintStream r1 = java.lang.System.err
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.Class<com.mbridge.msdk.foundation.tools.w> r3 = com.mbridge.msdk.foundation.tools.w.class
            java.lang.String r3 = r3.getName()
            r2.append(r3)
            java.lang.String r3 = "初始化失败，MessageDigest不支持MD5Util."
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.println(r2)
            r0.printStackTrace()
        L35:
            return
    }

    public w() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(java.io.File r8) throws java.io.IOException {
            r0 = 0
            java.io.FileInputStream r1 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L31 java.lang.Exception -> L33
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L31 java.lang.Exception -> L33
            java.nio.channels.FileChannel r2 = r1.getChannel()     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            java.nio.channels.FileChannel$MapMode r3 = java.nio.channels.FileChannel.MapMode.READ_ONLY     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            r4 = 0
            long r6 = r8.length()     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            java.nio.MappedByteBuffer r8 = r2.map(r3, r4, r6)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            java.security.MessageDigest r0 = com.mbridge.msdk.foundation.tools.w.b     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            r0.update(r8)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            java.security.MessageDigest r8 = com.mbridge.msdk.foundation.tools.w.b     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            byte[] r8 = r8.digest()     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            r0 = 0
            int r2 = r8.length     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            java.lang.String r8 = a(r8, r0, r2)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            r1.close()
            return r8
        L2b:
            r8 = move-exception
            r0 = r1
            goto L43
        L2e:
            r8 = move-exception
            r0 = r1
            goto L34
        L31:
            r8 = move-exception
            goto L43
        L33:
            r8 = move-exception
        L34:
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.w.c     // Catch: java.lang.Throwable -> L31
            java.lang.String r2 = "FILE EXCEPTION"
            com.mbridge.msdk.foundation.tools.z.c(r1, r2, r8)     // Catch: java.lang.Throwable -> L31
            if (r0 == 0) goto L40
            r0.close()
        L40:
            java.lang.String r8 = ""
            return r8
        L43:
            if (r0 == 0) goto L48
            r0.close()
        L48:
            throw r8
    }

    private static java.lang.String a(byte[] r4, int r5, int r6) {
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            int r1 = r6 * 2
            r0.<init>(r1)
            int r6 = r6 + r5
        L8:
            if (r5 >= r6) goto L21
            r1 = r4[r5]
            char[] r2 = com.mbridge.msdk.foundation.tools.w.a
            r3 = r1 & 240(0xf0, float:3.36E-43)
            int r3 = r3 >> 4
            char r3 = r2[r3]
            r1 = r1 & 15
            char r1 = r2[r1]
            r0.append(r3)
            r0.append(r1)
            int r5 = r5 + 1
            goto L8
        L21:
            java.lang.String r4 = r0.toString()
            return r4
    }
}
