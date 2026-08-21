package com.igexin.push.util;

public class EncryptUtils {
    private static final java.lang.String a = null;
    private static boolean b;
    private static int c;
    private static byte[] d;
    private static byte[] e;
    public static java.lang.String errorMsg;

    static {
            java.lang.Class<com.igexin.push.util.EncryptUtils> r0 = com.igexin.push.util.EncryptUtils.class
            java.lang.String r0 = r0.getName()
            com.igexin.push.util.EncryptUtils.a = r0
            java.lang.String r0 = ""
            com.igexin.push.util.EncryptUtils.errorMsg = r0
            r0 = 0
            boolean r1 = com.igexin.push.extension.mod.SecurityUtils.b     // Catch: java.lang.Throwable -> L41
            if (r1 == 0) goto L69
            byte[] r1 = initSocketAESKey()     // Catch: java.lang.Throwable -> L41
            com.igexin.push.util.EncryptUtils.d = r1     // Catch: java.lang.Throwable -> L41
            byte[] r1 = initHttpAESKey()     // Catch: java.lang.Throwable -> L41
            com.igexin.push.util.EncryptUtils.e = r1     // Catch: java.lang.Throwable -> L41
            byte[] r2 = com.igexin.push.util.EncryptUtils.d     // Catch: java.lang.Throwable -> L41
            if (r2 == 0) goto L3d
            if (r1 == 0) goto L3d
            byte[] r1 = getSocketAESKey()     // Catch: java.lang.Throwable -> L41
            if (r1 == 0) goto L3d
            byte[] r1 = getHttpAESKey()     // Catch: java.lang.Throwable -> L41
            if (r1 == 0) goto L3d
            byte[] r1 = getRSAKeyId()     // Catch: java.lang.Throwable -> L41
            if (r1 == 0) goto L3d
            java.lang.String r1 = getVersion()     // Catch: java.lang.Throwable -> L41
            if (r1 == 0) goto L3d
            r1 = 1
            goto L3e
        L3d:
            r1 = r0
        L3e:
            com.igexin.push.util.EncryptUtils.b = r1     // Catch: java.lang.Throwable -> L41
            goto L69
        L41:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = com.igexin.push.util.EncryptUtils.a
            r2.append(r3)
            java.lang.String r3 = "|load so error = "
            r2.append(r3)
            java.lang.String r3 = r1.toString()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.Object[] r3 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r2, r3)
            com.igexin.push.util.EncryptUtils.b = r0
            java.lang.String r1 = r1.getMessage()
            com.igexin.push.util.EncryptUtils.errorMsg = r1
        L69:
            java.lang.String r1 = com.igexin.push.util.EncryptUtils.errorMsg
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L75
            java.lang.String r1 = com.igexin.push.extension.mod.SecurityUtils.c
            com.igexin.push.util.EncryptUtils.errorMsg = r1
        L75:
            boolean r1 = com.igexin.push.util.EncryptUtils.b
            if (r1 != 0) goto L9e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.igexin.push.util.EncryptUtils.a
            r1.append(r2)
            java.lang.String r2 = "|load so error ++++++++"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r1, r0)
            java.lang.String r0 = com.igexin.push.util.EncryptUtils.errorMsg
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Lb6
            java.lang.String r0 = "value = null, normal error"
            com.igexin.push.util.EncryptUtils.errorMsg = r0
            goto Lb6
        L9e:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.igexin.push.util.EncryptUtils.a
            r1.append(r2)
            java.lang.String r2 = "|load so success ~~~~~~~"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r1, r0)
        Lb6:
            return
    }

    public EncryptUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static byte[] aesDecHttp(byte[] r1, byte[] r2) {
            byte[] r0 = com.igexin.push.util.EncryptUtils.e
            byte[] r1 = com.igexin.push.extension.mod.SecurityUtils.c(r0, r1, r2)
            return r1
    }

    public static byte[] aesDecSocket(byte[] r1, byte[] r2) {
            byte[] r0 = com.igexin.push.util.EncryptUtils.d
            byte[] r1 = com.igexin.push.extension.mod.SecurityUtils.g(r0, r1, r2)
            return r1
    }

    public static byte[] aesEncHttp(byte[] r1, byte[] r2) {
            byte[] r0 = com.igexin.push.util.EncryptUtils.e
            byte[] r1 = com.igexin.push.extension.mod.SecurityUtils.b(r0, r1, r2)
            return r1
    }

    public static byte[] aesEncSocket(byte[] r1, byte[] r2) {
            byte[] r0 = com.igexin.push.util.EncryptUtils.d
            byte[] r1 = com.igexin.push.extension.mod.SecurityUtils.f(r0, r1, r2)
            return r1
    }

    public static byte[] altAesDecSocket(byte[] r0, byte[] r1) {
            byte[] r0 = com.igexin.push.extension.mod.SecurityUtils.m(r0, r1)
            return r0
    }

    public static byte[] altAesEncSocket(byte[] r0, byte[] r1) {
            byte[] r0 = com.igexin.push.extension.mod.SecurityUtils.l(r0, r1)
            return r0
    }

    public static byte[] getBytesEncrypted(byte[] r1) {
            java.lang.String r0 = com.igexin.push.core.d.E
            byte[] r1 = com.igexin.b.a.a.a.d(r1, r0)
            return r1
    }

    public static byte[] getHttpAESKey() {
            byte[] r0 = com.igexin.push.util.EncryptUtils.e
            byte[] r0 = com.igexin.push.extension.mod.SecurityUtils.d(r0)
            return r0
    }

    public static java.lang.String getHttpGTCV() {
            byte[] r0 = getHttpAESKey()
            r1 = 16
            java.lang.String r1 = com.igexin.push.util.l.a(r1)
            byte[] r1 = r1.getBytes()
            int r2 = r1.length
            int r3 = r0.length
            int r2 = r2 + r3
            byte[] r2 = new byte[r2]
            int r3 = r1.length
            r4 = 0
            int r1 = com.igexin.b.a.b.f.a(r1, r4, r2, r4, r3)
            int r3 = r0.length
            com.igexin.b.a.b.f.a(r0, r4, r2, r1, r3)
            r0 = 2
            java.lang.String r0 = com.igexin.push.util.d.b(r2, r0)
            return r0
    }

    public static java.lang.String getHttpSignature(java.lang.String r3, byte[] r4) {
            byte[] r3 = r3.getBytes()
            int r0 = r3.length
            int r1 = r4.length
            int r0 = r0 + r1
            byte[] r0 = new byte[r0]
            int r1 = r3.length
            r2 = 0
            int r3 = com.igexin.b.a.b.f.a(r3, r2, r0, r2, r1)
            int r1 = r4.length
            if (r1 <= 0) goto L16
            int r1 = r4.length
            com.igexin.b.a.b.f.a(r4, r2, r0, r3, r1)
        L16:
            byte[] r3 = sha1(r0)
            r4 = 2
            java.lang.String r3 = com.igexin.push.util.d.b(r3, r4)
            return r3
    }

    public static byte[] getIV(byte[] r0) {
            byte[] r0 = md5(r0)
            return r0
    }

    public static int getPacketId() {
            int r0 = com.igexin.push.util.EncryptUtils.c
            int r1 = r0 + 1
            com.igexin.push.util.EncryptUtils.c = r1
            return r0
    }

    public static byte[] getRSAKeyId() {
            byte[] r0 = com.igexin.push.extension.mod.SecurityUtils.j()
            return r0
    }

    public static byte[] getSocketAESKey() {
            byte[] r0 = com.igexin.push.util.EncryptUtils.d
            byte[] r0 = com.igexin.push.extension.mod.SecurityUtils.h(r0)
            return r0
    }

    public static byte[] getSocketSignature(com.igexin.push.d.c.a r2, int r3, int r4) {
            int r0 = r2.a
            int r0 = r0 + 11
            byte[] r0 = new byte[r0]
            r1 = 0
            int r3 = com.igexin.b.a.b.f.a(r3, r0, r1)
            int r4 = com.igexin.b.a.b.f.a(r4, r0, r3)
            int r3 = r3 + r4
            int r4 = r2.a
            short r4 = (short) r4
            int r4 = com.igexin.b.a.b.f.b(r4, r0, r3)
            int r3 = r3 + r4
            byte r4 = r2.b
            int r4 = com.igexin.b.a.b.f.c(r4, r0, r3)
            int r3 = r3 + r4
            byte[] r4 = r2.e
            int r2 = r2.a
            com.igexin.b.a.b.f.a(r4, r1, r0, r3, r2)
            byte[] r2 = sha1(r0)
            return r2
    }

    public static java.lang.String getVersion() {
            byte[] r0 = com.igexin.push.extension.mod.SecurityUtils.k()
            if (r0 == 0) goto L28
            java.lang.String r1 = new java.lang.String
            r1.<init>(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = com.igexin.push.util.EncryptUtils.a
            r0.append(r2)
            java.lang.String r2 = "| so version is "
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r2 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r0, r2)
            return r1
        L28:
            r0 = 0
            return r0
    }

    public static byte[] initHttpAESKey() {
            byte[] r0 = com.igexin.push.extension.mod.SecurityUtils.a()
            return r0
    }

    public static byte[] initSocketAESKey() {
            byte[] r0 = com.igexin.push.extension.mod.SecurityUtils.e()
            return r0
    }

    public static boolean isLoadSuccess() {
            boolean r0 = com.igexin.push.util.EncryptUtils.b
            return r0
    }

    public static byte[] md5(byte[] r1) {
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.lang.Exception -> Le
            r0.update(r1)     // Catch: java.lang.Exception -> Le
            byte[] r1 = r0.digest()     // Catch: java.lang.Exception -> Le
            return r1
        Le:
            r1 = 0
            return r1
    }

    public static boolean reset() {
            r0 = 0
            boolean r1 = com.igexin.push.extension.mod.SecurityUtils.b     // Catch: java.lang.Throwable -> L35
            if (r1 == 0) goto L57
            byte[] r1 = initSocketAESKey()     // Catch: java.lang.Throwable -> L35
            com.igexin.push.util.EncryptUtils.d = r1     // Catch: java.lang.Throwable -> L35
            byte[] r1 = initHttpAESKey()     // Catch: java.lang.Throwable -> L35
            com.igexin.push.util.EncryptUtils.e = r1     // Catch: java.lang.Throwable -> L35
            byte[] r2 = com.igexin.push.util.EncryptUtils.d     // Catch: java.lang.Throwable -> L35
            if (r2 == 0) goto L31
            if (r1 == 0) goto L31
            byte[] r1 = getSocketAESKey()     // Catch: java.lang.Throwable -> L35
            if (r1 == 0) goto L31
            byte[] r1 = getHttpAESKey()     // Catch: java.lang.Throwable -> L35
            if (r1 == 0) goto L31
            byte[] r1 = getRSAKeyId()     // Catch: java.lang.Throwable -> L35
            if (r1 == 0) goto L31
            java.lang.String r1 = getVersion()     // Catch: java.lang.Throwable -> L35
            if (r1 == 0) goto L31
            r1 = 1
            goto L32
        L31:
            r1 = r0
        L32:
            com.igexin.push.util.EncryptUtils.b = r1     // Catch: java.lang.Throwable -> L35
            goto L57
        L35:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = com.igexin.push.util.EncryptUtils.a
            r2.append(r3)
            java.lang.String r3 = "|load so error = "
            r2.append(r3)
            java.lang.String r1 = r1.toString()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.Object[] r2 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r1, r2)
            com.igexin.push.util.EncryptUtils.b = r0
        L57:
            boolean r1 = com.igexin.push.util.EncryptUtils.b
            if (r1 != 0) goto L74
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.igexin.push.util.EncryptUtils.a
            r1.append(r2)
            java.lang.String r2 = "|load so error ++++++++"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r1, r0)
            goto L8c
        L74:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.igexin.push.util.EncryptUtils.a
            r1.append(r2)
            java.lang.String r2 = "|load so success ~~~~~~~"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r1, r0)
        L8c:
            boolean r0 = com.igexin.push.util.EncryptUtils.b
            return r0
    }

    public static byte[] rsaEnc(byte[] r9) {
            int r0 = r9.length
            r1 = 214(0xd6, float:3.0E-43)
            if (r0 > r1) goto La
            byte[] r9 = com.igexin.push.extension.mod.SecurityUtils.i(r9)
            return r9
        La:
            int r1 = r0 % 200
            if (r1 != 0) goto L11
            int r1 = r0 / 200
            goto L15
        L11:
            int r1 = r0 / 200
            int r1 = r1 + 1
        L15:
            int r2 = r1 * 256
            byte[] r2 = new byte[r2]
            r3 = 0
            r4 = r3
            r5 = r4
        L1c:
            if (r4 >= r1) goto L3d
            int r6 = r1 + (-1)
            if (r4 >= r6) goto L25
            r6 = 200(0xc8, float:2.8E-43)
            goto L29
        L25:
            int r6 = r4 * 200
            int r6 = r0 - r6
        L29:
            byte[] r7 = new byte[r6]
            int r8 = r4 * 200
            com.igexin.b.a.b.f.a(r9, r8, r7, r3, r6)
            byte[] r6 = com.igexin.push.extension.mod.SecurityUtils.i(r7)
            int r7 = r6.length
            int r6 = com.igexin.b.a.b.f.a(r6, r3, r2, r5, r7)
            int r5 = r5 + r6
            int r4 = r4 + 1
            goto L1c
        L3d:
            return r2
    }

    public static byte[] sha1(byte[] r1) {
            java.lang.String r0 = "SHA-1"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.lang.Exception -> Lb
            byte[] r1 = r0.digest(r1)     // Catch: java.lang.Exception -> Lb
            return r1
        Lb:
            r1 = 0
            return r1
    }
}
