package com.tkay.expressad.foundation.h;

public class l {
    protected static char[] a = null;
    protected static java.security.MessageDigest b = null;
    private static java.lang.String c = "SameFileMD5";

    static {
            r0 = 16
            char[] r0 = new char[r0]
            r0 = {x0036: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102} // fill-array
            com.tkay.expressad.foundation.h.l.a = r0
            r0 = 0
            com.tkay.expressad.foundation.h.l.b = r0
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> L15
            com.tkay.expressad.foundation.h.l.b = r0     // Catch: java.security.NoSuchAlgorithmException -> L15
            return
        L15:
            r0 = move-exception
            java.io.PrintStream r1 = java.lang.System.err
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.Class<com.tkay.expressad.foundation.h.l> r3 = com.tkay.expressad.foundation.h.l.class
            java.lang.String r3 = r3.getName()
            r2.append(r3)
            java.lang.String r3 = "Init fail,MessageDigest not support MD5Util."
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.println(r2)
            r0.printStackTrace()
            return
    }

    public l() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(java.io.File r8) {
            r0 = 0
            java.io.FileInputStream r1 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L2f java.lang.Exception -> L36
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L2f java.lang.Exception -> L36
            java.nio.channels.FileChannel r2 = r1.getChannel()     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            java.nio.channels.FileChannel$MapMode r3 = java.nio.channels.FileChannel.MapMode.READ_ONLY     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            r4 = 0
            long r6 = r8.length()     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            java.nio.MappedByteBuffer r8 = r2.map(r3, r4, r6)     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            java.security.MessageDigest r0 = com.tkay.expressad.foundation.h.l.b     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            r0.update(r8)     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            java.security.MessageDigest r8 = com.tkay.expressad.foundation.h.l.b     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            byte[] r8 = r8.digest()     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            int r0 = r8.length     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            java.lang.String r8 = a(r8, r0)     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            r1.close()
            return r8
        L2a:
            r8 = move-exception
            r0 = r1
            goto L30
        L2d:
            r0 = r1
            goto L36
        L2f:
            r8 = move-exception
        L30:
            if (r0 == 0) goto L35
            r0.close()
        L35:
            throw r8
        L36:
            if (r0 == 0) goto L3b
            r0.close()
        L3b:
            java.lang.String r8 = ""
            return r8
    }

    private static java.lang.String a(java.lang.String r1) {
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            java.lang.String r1 = a(r0)
            return r1
    }

    private static java.lang.String a(byte[] r1) {
            int r0 = r1.length
            java.lang.String r1 = a(r1, r0)
            return r1
    }

    private static java.lang.String a(byte[] r3, int r4) {
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            int r1 = r4 * 2
            r0.<init>(r1)
            r1 = 0
            int r4 = r4 + r1
        L9:
            if (r1 >= r4) goto L13
            r2 = r3[r1]
            a(r2, r0)
            int r1 = r1 + 1
            goto L9
        L13:
            java.lang.String r3 = r0.toString()
            return r3
    }

    private static void a(byte r2, java.lang.StringBuffer r3) {
            char[] r0 = com.tkay.expressad.foundation.h.l.a
            r1 = r2 & 240(0xf0, float:3.36E-43)
            int r1 = r1 >> 4
            char r1 = r0[r1]
            r2 = r2 & 15
            char r2 = r0[r2]
            r3.append(r1)
            r3.append(r2)
            return
    }
}
