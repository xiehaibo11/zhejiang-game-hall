package org.bouncycastle.util.encoders;

public class UrlBase64 {
    private static final org.bouncycastle.util.encoders.Encoder encoder = null;

    static {
            org.bouncycastle.util.encoders.UrlBase64Encoder r0 = new org.bouncycastle.util.encoders.UrlBase64Encoder
            r0.<init>()
            org.bouncycastle.util.encoders.UrlBase64.encoder = r0
            return
    }

    public UrlBase64() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int decode(java.lang.String r1, java.io.OutputStream r2) throws java.io.IOException {
            org.bouncycastle.util.encoders.Encoder r0 = org.bouncycastle.util.encoders.UrlBase64.encoder
            int r1 = r0.decode(r1, r2)
            return r1
    }

    public static int decode(byte[] r3, java.io.OutputStream r4) throws java.io.IOException {
            org.bouncycastle.util.encoders.Encoder r0 = org.bouncycastle.util.encoders.UrlBase64.encoder
            int r1 = r3.length
            r2 = 0
            int r3 = r0.decode(r3, r2, r1, r4)
            return r3
    }

    public static byte[] decode(java.lang.String r3) {
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            org.bouncycastle.util.encoders.Encoder r1 = org.bouncycastle.util.encoders.UrlBase64.encoder     // Catch: java.io.IOException -> Lf
            r1.decode(r3, r0)     // Catch: java.io.IOException -> Lf
            byte[] r3 = r0.toByteArray()
            return r3
        Lf:
            r3 = move-exception
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "exception decoding URL safe base64 string: "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public static byte[] decode(byte[] r4) {
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            org.bouncycastle.util.encoders.Encoder r1 = org.bouncycastle.util.encoders.UrlBase64.encoder     // Catch: java.io.IOException -> L11
            r2 = 0
            int r3 = r4.length     // Catch: java.io.IOException -> L11
            r1.decode(r4, r2, r3, r0)     // Catch: java.io.IOException -> L11
            byte[] r4 = r0.toByteArray()
            return r4
        L11:
            r4 = move-exception
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "exception decoding URL safe base64 string: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public static int encode(byte[] r3, java.io.OutputStream r4) throws java.io.IOException {
            org.bouncycastle.util.encoders.Encoder r0 = org.bouncycastle.util.encoders.UrlBase64.encoder
            int r1 = r3.length
            r2 = 0
            int r3 = r0.encode(r3, r2, r1, r4)
            return r3
    }

    public static byte[] encode(byte[] r4) {
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            org.bouncycastle.util.encoders.Encoder r1 = org.bouncycastle.util.encoders.UrlBase64.encoder     // Catch: java.io.IOException -> L11
            r2 = 0
            int r3 = r4.length     // Catch: java.io.IOException -> L11
            r1.encode(r4, r2, r3, r0)     // Catch: java.io.IOException -> L11
            byte[] r4 = r0.toByteArray()
            return r4
        L11:
            r4 = move-exception
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "exception encoding URL safe base64 string: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }
}
