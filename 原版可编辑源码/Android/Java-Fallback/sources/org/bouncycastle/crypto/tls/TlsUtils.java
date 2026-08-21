package org.bouncycastle.crypto.tls;

public class TlsUtils {
    public TlsUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    protected static void PRF(byte[] r5, byte[] r6, byte[] r7, byte[] r8) {
            int r0 = r5.length
            int r0 = r0 + 1
            int r0 = r0 / 2
            byte[] r1 = new byte[r0]
            byte[] r2 = new byte[r0]
            r3 = 0
            java.lang.System.arraycopy(r5, r3, r1, r3, r0)
            int r4 = r5.length
            int r4 = r4 - r0
            java.lang.System.arraycopy(r5, r4, r2, r3, r0)
            int r5 = r6.length
            int r0 = r7.length
            int r5 = r5 + r0
            byte[] r5 = new byte[r5]
            int r0 = r6.length
            java.lang.System.arraycopy(r6, r3, r5, r3, r0)
            int r6 = r6.length
            int r0 = r7.length
            java.lang.System.arraycopy(r7, r3, r5, r6, r0)
            int r6 = r8.length
            byte[] r6 = new byte[r6]
            org.bouncycastle.crypto.digests.MD5Digest r7 = new org.bouncycastle.crypto.digests.MD5Digest
            r7.<init>()
            hmac_hash(r7, r1, r5, r6)
            org.bouncycastle.crypto.digests.SHA1Digest r7 = new org.bouncycastle.crypto.digests.SHA1Digest
            r7.<init>()
            hmac_hash(r7, r2, r5, r8)
        L33:
            int r5 = r8.length
            if (r3 >= r5) goto L41
            r5 = r8[r3]
            r7 = r6[r3]
            r5 = r5 ^ r7
            byte r5 = (byte) r5
            r8[r3] = r5
            int r3 = r3 + 1
            goto L33
        L41:
            return
    }

    protected static void checkVersion(java.io.InputStream r2, org.bouncycastle.crypto.tls.TlsProtocolHandler r3) throws java.io.IOException {
            int r0 = r2.read()
            int r2 = r2.read()
            r1 = 3
            if (r0 != r1) goto Le
            r0 = 1
            if (r2 == r0) goto L14
        Le:
            r2 = 2
            r0 = 70
            r3.failWithError(r2, r0)
        L14:
            return
    }

    protected static void checkVersion(byte[] r2, org.bouncycastle.crypto.tls.TlsProtocolHandler r3) throws java.io.IOException {
            r0 = 0
            r0 = r2[r0]
            r1 = 3
            if (r0 != r1) goto Lb
            r0 = 1
            r2 = r2[r0]
            if (r2 == r0) goto L11
        Lb:
            r2 = 2
            r0 = 70
            r3.failWithError(r2, r0)
        L11:
            return
    }

    private static void hmac_hash(org.bouncycastle.crypto.Digest r9, byte[] r10, byte[] r11, byte[] r12) {
            org.bouncycastle.crypto.macs.HMac r0 = new org.bouncycastle.crypto.macs.HMac
            r0.<init>(r9)
            org.bouncycastle.crypto.params.KeyParameter r1 = new org.bouncycastle.crypto.params.KeyParameter
            r1.<init>(r10)
            int r9 = r9.getDigestSize()
            int r10 = r12.length
            int r10 = r10 + r9
            int r10 = r10 + (-1)
            int r10 = r10 / r9
            int r2 = r0.getMacSize()
            byte[] r3 = new byte[r2]
            int r4 = r0.getMacSize()
            byte[] r4 = new byte[r4]
            r5 = 0
            r7 = r11
            r6 = 0
        L22:
            if (r6 >= r10) goto L4a
            r0.init(r1)
            int r8 = r7.length
            r0.update(r7, r5, r8)
            r0.doFinal(r3, r5)
            r0.init(r1)
            r0.update(r3, r5, r2)
            int r7 = r11.length
            r0.update(r11, r5, r7)
            r0.doFinal(r4, r5)
            int r7 = r9 * r6
            int r8 = r12.length
            int r8 = r8 - r7
            int r8 = java.lang.Math.min(r9, r8)
            java.lang.System.arraycopy(r4, r5, r12, r7, r8)
            int r6 = r6 + 1
            r7 = r3
            goto L22
        L4a:
            return
    }

    protected static void readFully(byte[] r3, java.io.InputStream r4) throws java.io.IOException {
            r0 = 0
        L1:
            int r1 = r3.length
            if (r0 == r1) goto L15
            int r1 = r3.length
            int r1 = r1 - r0
            int r1 = r4.read(r3, r0, r1)
            r2 = -1
            if (r1 == r2) goto Lf
            int r0 = r0 + r1
            goto L1
        Lf:
            java.io.EOFException r3 = new java.io.EOFException
            r3.<init>()
            throw r3
        L15:
            return
    }

    protected static int readUint16(java.io.InputStream r2) throws java.io.IOException {
            int r0 = r2.read()
            int r2 = r2.read()
            r1 = r0 | r2
            if (r1 < 0) goto L10
            int r0 = r0 << 8
            r2 = r2 | r0
            return r2
        L10:
            java.io.EOFException r2 = new java.io.EOFException
            r2.<init>()
            throw r2
    }

    protected static int readUint24(java.io.InputStream r3) throws java.io.IOException {
            int r0 = r3.read()
            int r1 = r3.read()
            int r3 = r3.read()
            r2 = r0 | r1
            r2 = r2 | r3
            if (r2 < 0) goto L18
            int r0 = r0 << 16
            int r1 = r1 << 8
            r0 = r0 | r1
            r3 = r3 | r0
            return r3
        L18:
            java.io.EOFException r3 = new java.io.EOFException
            r3.<init>()
            throw r3
    }

    protected static long readUint32(java.io.InputStream r6) throws java.io.IOException {
            int r0 = r6.read()
            int r1 = r6.read()
            int r2 = r6.read()
            int r6 = r6.read()
            r3 = r0 | r1
            r3 = r3 | r2
            r3 = r3 | r6
            if (r3 < 0) goto L27
            long r3 = (long) r0
            r0 = 24
            long r3 = r3 << r0
            long r0 = (long) r1
            r5 = 16
            long r0 = r0 << r5
            long r0 = r0 | r3
            long r2 = (long) r2
            r4 = 8
            long r2 = r2 << r4
            long r0 = r0 | r2
            long r2 = (long) r6
            long r0 = r0 | r2
            return r0
        L27:
            java.io.EOFException r6 = new java.io.EOFException
            r6.<init>()
            throw r6
    }

    protected static short readUint8(java.io.InputStream r1) throws java.io.IOException {
            int r1 = r1.read()
            r0 = -1
            if (r1 == r0) goto L9
            short r1 = (short) r1
            return r1
        L9:
            java.io.EOFException r1 = new java.io.EOFException
            r1.<init>()
            throw r1
    }

    static byte[] toByteArray(java.lang.String r4) {
            char[] r4 = r4.toCharArray()
            int r0 = r4.length
            byte[] r1 = new byte[r0]
            r2 = 0
        L8:
            if (r2 == r0) goto L12
            char r3 = r4[r2]
            byte r3 = (byte) r3
            r1[r2] = r3
            int r2 = r2 + 1
            goto L8
        L12:
            return r1
    }

    protected static void writeUint16(int r1, java.io.OutputStream r2) throws java.io.IOException {
            int r0 = r1 >> 8
            r2.write(r0)
            r2.write(r1)
            return
    }

    protected static void writeUint16(int r1, byte[] r2, int r3) {
            int r0 = r1 >> 8
            byte r0 = (byte) r0
            r2[r3] = r0
            int r3 = r3 + 1
            byte r1 = (byte) r1
            r2[r3] = r1
            return
    }

    protected static void writeUint24(int r1, java.io.OutputStream r2) throws java.io.IOException {
            int r0 = r1 >> 16
            r2.write(r0)
            int r0 = r1 >> 8
            r2.write(r0)
            r2.write(r1)
            return
    }

    protected static void writeUint24(int r2, byte[] r3, int r4) {
            int r0 = r2 >> 16
            byte r0 = (byte) r0
            r3[r4] = r0
            int r0 = r4 + 1
            int r1 = r2 >> 8
            byte r1 = (byte) r1
            r3[r0] = r1
            int r4 = r4 + 2
            byte r2 = (byte) r2
            r3[r4] = r2
            return
    }

    protected static void writeUint32(long r2, java.io.OutputStream r4) throws java.io.IOException {
            r0 = 24
            long r0 = r2 >> r0
            int r1 = (int) r0
            r4.write(r1)
            r0 = 16
            long r0 = r2 >> r0
            int r1 = (int) r0
            r4.write(r1)
            r0 = 8
            long r0 = r2 >> r0
            int r1 = (int) r0
            r4.write(r1)
            int r3 = (int) r2
            r4.write(r3)
            return
    }

    protected static void writeUint32(long r3, byte[] r5, int r6) {
            r0 = 24
            long r0 = r3 >> r0
            int r1 = (int) r0
            byte r0 = (byte) r1
            r5[r6] = r0
            int r0 = r6 + 1
            r1 = 16
            long r1 = r3 >> r1
            int r2 = (int) r1
            byte r1 = (byte) r2
            r5[r0] = r1
            int r0 = r6 + 2
            r1 = 8
            long r1 = r3 >> r1
            int r2 = (int) r1
            byte r1 = (byte) r2
            r5[r0] = r1
            int r6 = r6 + 3
            int r4 = (int) r3
            byte r3 = (byte) r4
            r5[r6] = r3
            return
    }

    protected static void writeUint64(long r2, java.io.OutputStream r4) throws java.io.IOException {
            r0 = 56
            long r0 = r2 >> r0
            int r1 = (int) r0
            r4.write(r1)
            r0 = 48
            long r0 = r2 >> r0
            int r1 = (int) r0
            r4.write(r1)
            r0 = 40
            long r0 = r2 >> r0
            int r1 = (int) r0
            r4.write(r1)
            r0 = 32
            long r0 = r2 >> r0
            int r1 = (int) r0
            r4.write(r1)
            r0 = 24
            long r0 = r2 >> r0
            int r1 = (int) r0
            r4.write(r1)
            r0 = 16
            long r0 = r2 >> r0
            int r1 = (int) r0
            r4.write(r1)
            r0 = 8
            long r0 = r2 >> r0
            int r1 = (int) r0
            r4.write(r1)
            int r3 = (int) r2
            r4.write(r3)
            return
    }

    protected static void writeUint64(long r3, byte[] r5, int r6) {
            r0 = 56
            long r0 = r3 >> r0
            int r1 = (int) r0
            byte r0 = (byte) r1
            r5[r6] = r0
            int r0 = r6 + 1
            r1 = 48
            long r1 = r3 >> r1
            int r2 = (int) r1
            byte r1 = (byte) r2
            r5[r0] = r1
            int r0 = r6 + 2
            r1 = 40
            long r1 = r3 >> r1
            int r2 = (int) r1
            byte r1 = (byte) r2
            r5[r0] = r1
            int r0 = r6 + 3
            r1 = 32
            long r1 = r3 >> r1
            int r2 = (int) r1
            byte r1 = (byte) r2
            r5[r0] = r1
            int r0 = r6 + 4
            r1 = 24
            long r1 = r3 >> r1
            int r2 = (int) r1
            byte r1 = (byte) r2
            r5[r0] = r1
            int r0 = r6 + 5
            r1 = 16
            long r1 = r3 >> r1
            int r2 = (int) r1
            byte r1 = (byte) r2
            r5[r0] = r1
            int r0 = r6 + 6
            r1 = 8
            long r1 = r3 >> r1
            int r2 = (int) r1
            byte r1 = (byte) r2
            r5[r0] = r1
            int r6 = r6 + 7
            int r4 = (int) r3
            byte r3 = (byte) r4
            r5[r6] = r3
            return
    }

    protected static void writeUint8(short r0, java.io.OutputStream r1) throws java.io.IOException {
            r1.write(r0)
            return
    }

    protected static void writeUint8(short r0, byte[] r1, int r2) {
            byte r0 = (byte) r0
            r1[r2] = r0
            return
    }

    protected static void writeVersion(java.io.OutputStream r1) throws java.io.IOException {
            r0 = 3
            r1.write(r0)
            r0 = 1
            r1.write(r0)
            return
    }
}
