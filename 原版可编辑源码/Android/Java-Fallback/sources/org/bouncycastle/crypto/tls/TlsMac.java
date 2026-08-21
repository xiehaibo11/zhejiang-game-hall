package org.bouncycastle.crypto.tls;

public class TlsMac {
    private org.bouncycastle.crypto.macs.HMac mac;
    private long seqNo;

    protected TlsMac(org.bouncycastle.crypto.Digest r2, byte[] r3, int r4, int r5) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.crypto.macs.HMac r0 = new org.bouncycastle.crypto.macs.HMac
            r0.<init>(r2)
            r1.mac = r0
            org.bouncycastle.crypto.params.KeyParameter r2 = new org.bouncycastle.crypto.params.KeyParameter
            r2.<init>(r3, r4, r5)
            org.bouncycastle.crypto.macs.HMac r3 = r1.mac
            r3.init(r2)
            r2 = 0
            r1.seqNo = r2
            return
    }

    protected byte[] calculateMac(short r6, byte[] r7, int r8, int r9) {
            r5 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream     // Catch: java.io.IOException -> L39
            r0.<init>()     // Catch: java.io.IOException -> L39
            long r1 = r5.seqNo     // Catch: java.io.IOException -> L39
            r3 = 1
            long r3 = r3 + r1
            r5.seqNo = r3     // Catch: java.io.IOException -> L39
            org.bouncycastle.crypto.tls.TlsUtils.writeUint64(r1, r0)     // Catch: java.io.IOException -> L39
            org.bouncycastle.crypto.tls.TlsUtils.writeUint8(r6, r0)     // Catch: java.io.IOException -> L39
            org.bouncycastle.crypto.tls.TlsUtils.writeVersion(r0)     // Catch: java.io.IOException -> L39
            org.bouncycastle.crypto.tls.TlsUtils.writeUint16(r9, r0)     // Catch: java.io.IOException -> L39
            r0.write(r7, r8, r9)     // Catch: java.io.IOException -> L39
            byte[] r6 = r0.toByteArray()     // Catch: java.io.IOException -> L39
            org.bouncycastle.crypto.macs.HMac r7 = r5.mac     // Catch: java.io.IOException -> L39
            int r8 = r6.length     // Catch: java.io.IOException -> L39
            r9 = 0
            r7.update(r6, r9, r8)     // Catch: java.io.IOException -> L39
            org.bouncycastle.crypto.macs.HMac r6 = r5.mac     // Catch: java.io.IOException -> L39
            int r6 = r6.getMacSize()     // Catch: java.io.IOException -> L39
            byte[] r6 = new byte[r6]     // Catch: java.io.IOException -> L39
            org.bouncycastle.crypto.macs.HMac r7 = r5.mac     // Catch: java.io.IOException -> L39
            r7.doFinal(r6, r9)     // Catch: java.io.IOException -> L39
            org.bouncycastle.crypto.macs.HMac r7 = r5.mac     // Catch: java.io.IOException -> L39
            r7.reset()     // Catch: java.io.IOException -> L39
            return r6
        L39:
            java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
            java.lang.String r7 = "Internal error during mac calculation"
            r6.<init>(r7)
            throw r6
    }

    protected int getSize() {
            r1 = this;
            org.bouncycastle.crypto.macs.HMac r0 = r1.mac
            int r0 = r0.getMacSize()
            return r0
    }
}
