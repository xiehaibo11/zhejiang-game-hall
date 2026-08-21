package org.bouncycastle.crypto.tls;

public class ByteQueue {
    private static final int INITBUFSIZE = 1024;
    private int available;
    private byte[] databuf;
    private int skipped;

    public ByteQueue() {
            r1 = this;
            r1.<init>()
            r0 = 1024(0x400, float:1.435E-42)
            byte[] r0 = new byte[r0]
            r1.databuf = r0
            r0 = 0
            r1.skipped = r0
            r1.available = r0
            return
    }

    public static final int nextTwoPow(int r1) {
            int r0 = r1 >> 1
            r1 = r1 | r0
            int r0 = r1 >> 2
            r1 = r1 | r0
            int r0 = r1 >> 4
            r1 = r1 | r0
            int r0 = r1 >> 8
            r1 = r1 | r0
            int r0 = r1 >> 16
            r1 = r1 | r0
            int r1 = r1 + 1
            return r1
    }

    public void addData(byte[] r6, int r7, int r8) {
            r5 = this;
            int r0 = r5.skipped
            int r1 = r5.available
            int r0 = r0 + r1
            int r0 = r0 + r8
            byte[] r1 = r5.databuf
            int r1 = r1.length
            if (r0 <= r1) goto L20
            int r0 = r6.length
            int r0 = nextTwoPow(r0)
            byte[] r0 = new byte[r0]
            byte[] r1 = r5.databuf
            int r2 = r5.skipped
            int r3 = r5.available
            r4 = 0
            java.lang.System.arraycopy(r1, r2, r0, r4, r3)
            r5.skipped = r4
            r5.databuf = r0
        L20:
            byte[] r0 = r5.databuf
            int r1 = r5.skipped
            int r2 = r5.available
            int r1 = r1 + r2
            java.lang.System.arraycopy(r6, r7, r0, r1, r8)
            int r6 = r5.available
            int r6 = r6 + r8
            r5.available = r6
            return
    }

    public void read(byte[] r3, int r4, int r5, int r6) {
            r2 = this;
            int r0 = r2.available
            int r0 = r0 - r6
            if (r0 < r5) goto L37
            int r0 = r3.length
            int r0 = r0 - r4
            if (r0 < r5) goto L12
            byte[] r0 = r2.databuf
            int r1 = r2.skipped
            int r1 = r1 + r6
            java.lang.System.arraycopy(r0, r1, r3, r4, r5)
            return
        L12:
            org.bouncycastle.crypto.tls.TlsRuntimeException r4 = new org.bouncycastle.crypto.tls.TlsRuntimeException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "Buffer size of "
            r6.append(r0)
            int r3 = r3.length
            r6.append(r3)
            java.lang.String r3 = " is too small for a read of "
            r6.append(r3)
            r6.append(r5)
            java.lang.String r3 = " bytes"
            r6.append(r3)
            java.lang.String r3 = r6.toString()
            r4.<init>(r3)
            throw r4
        L37:
            org.bouncycastle.crypto.tls.TlsRuntimeException r3 = new org.bouncycastle.crypto.tls.TlsRuntimeException
            java.lang.String r4 = "Not enough data to read"
            r3.<init>(r4)
            throw r3
    }

    public void removeData(int r4) {
            r3 = this;
            int r0 = r3.available
            if (r4 > r0) goto L1a
            int r0 = r0 - r4
            r3.available = r0
            int r1 = r3.skipped
            int r1 = r1 + r4
            r3.skipped = r1
            byte[] r4 = r3.databuf
            int r2 = r4.length
            int r2 = r2 / 2
            if (r1 <= r2) goto L19
            r2 = 0
            java.lang.System.arraycopy(r4, r1, r4, r2, r0)
            r3.skipped = r2
        L19:
            return
        L1a:
            org.bouncycastle.crypto.tls.TlsRuntimeException r0 = new org.bouncycastle.crypto.tls.TlsRuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Cannot remove "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = " bytes, only got "
            r1.append(r4)
            int r4 = r3.available
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public int size() {
            r1 = this;
            int r0 = r1.available
            return r0
    }
}
