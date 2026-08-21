package org.bouncycastle.crypto.tls;

public class TlsCipherSuiteManager {
    private static final int TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA = 22;
    private static final int TLS_DHE_RSA_WITH_AES_128_CBC_SHA = 51;
    private static final int TLS_DHE_RSA_WITH_AES_256_CBC_SHA = 57;
    private static final int TLS_RSA_WITH_3DES_EDE_CBC_SHA = 10;
    private static final int TLS_RSA_WITH_AES_128_CBC_SHA = 47;
    private static final int TLS_RSA_WITH_AES_256_CBC_SHA = 53;

    public TlsCipherSuiteManager() {
            r0 = this;
            r0.<init>()
            return
    }

    protected static org.bouncycastle.crypto.tls.TlsCipherSuite getCipherSuite(int r14, org.bouncycastle.crypto.tls.TlsProtocolHandler r15) throws java.io.IOException {
            r0 = 10
            if (r14 == r0) goto Le8
            r0 = 22
            if (r14 == r0) goto Lc0
            r0 = 47
            if (r14 == r0) goto L98
            r0 = 51
            if (r14 == r0) goto L70
            r0 = 53
            if (r14 == r0) goto L48
            r0 = 57
            if (r14 == r0) goto L20
            r14 = 2
            r0 = 40
            r15.failWithError(r14, r0)
            r14 = 0
            return r14
        L20:
            org.bouncycastle.crypto.tls.TlsBlockCipherCipherSuite r14 = new org.bouncycastle.crypto.tls.TlsBlockCipherCipherSuite
            org.bouncycastle.crypto.modes.CBCBlockCipher r1 = new org.bouncycastle.crypto.modes.CBCBlockCipher
            org.bouncycastle.crypto.engines.AESFastEngine r15 = new org.bouncycastle.crypto.engines.AESFastEngine
            r15.<init>()
            r1.<init>(r15)
            org.bouncycastle.crypto.modes.CBCBlockCipher r2 = new org.bouncycastle.crypto.modes.CBCBlockCipher
            org.bouncycastle.crypto.engines.AESFastEngine r15 = new org.bouncycastle.crypto.engines.AESFastEngine
            r15.<init>()
            r2.<init>(r15)
            org.bouncycastle.crypto.digests.SHA1Digest r3 = new org.bouncycastle.crypto.digests.SHA1Digest
            r3.<init>()
            org.bouncycastle.crypto.digests.SHA1Digest r4 = new org.bouncycastle.crypto.digests.SHA1Digest
            r4.<init>()
            r5 = 32
            r6 = 5
            r0 = r14
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return r14
        L48:
            org.bouncycastle.crypto.tls.TlsBlockCipherCipherSuite r14 = new org.bouncycastle.crypto.tls.TlsBlockCipherCipherSuite
            org.bouncycastle.crypto.modes.CBCBlockCipher r8 = new org.bouncycastle.crypto.modes.CBCBlockCipher
            org.bouncycastle.crypto.engines.AESFastEngine r15 = new org.bouncycastle.crypto.engines.AESFastEngine
            r15.<init>()
            r8.<init>(r15)
            org.bouncycastle.crypto.modes.CBCBlockCipher r9 = new org.bouncycastle.crypto.modes.CBCBlockCipher
            org.bouncycastle.crypto.engines.AESFastEngine r15 = new org.bouncycastle.crypto.engines.AESFastEngine
            r15.<init>()
            r9.<init>(r15)
            org.bouncycastle.crypto.digests.SHA1Digest r10 = new org.bouncycastle.crypto.digests.SHA1Digest
            r10.<init>()
            org.bouncycastle.crypto.digests.SHA1Digest r11 = new org.bouncycastle.crypto.digests.SHA1Digest
            r11.<init>()
            r12 = 32
            r13 = 1
            r7 = r14
            r7.<init>(r8, r9, r10, r11, r12, r13)
            return r14
        L70:
            org.bouncycastle.crypto.tls.TlsBlockCipherCipherSuite r14 = new org.bouncycastle.crypto.tls.TlsBlockCipherCipherSuite
            org.bouncycastle.crypto.modes.CBCBlockCipher r1 = new org.bouncycastle.crypto.modes.CBCBlockCipher
            org.bouncycastle.crypto.engines.AESFastEngine r15 = new org.bouncycastle.crypto.engines.AESFastEngine
            r15.<init>()
            r1.<init>(r15)
            org.bouncycastle.crypto.modes.CBCBlockCipher r2 = new org.bouncycastle.crypto.modes.CBCBlockCipher
            org.bouncycastle.crypto.engines.AESFastEngine r15 = new org.bouncycastle.crypto.engines.AESFastEngine
            r15.<init>()
            r2.<init>(r15)
            org.bouncycastle.crypto.digests.SHA1Digest r3 = new org.bouncycastle.crypto.digests.SHA1Digest
            r3.<init>()
            org.bouncycastle.crypto.digests.SHA1Digest r4 = new org.bouncycastle.crypto.digests.SHA1Digest
            r4.<init>()
            r5 = 16
            r6 = 5
            r0 = r14
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return r14
        L98:
            org.bouncycastle.crypto.tls.TlsBlockCipherCipherSuite r14 = new org.bouncycastle.crypto.tls.TlsBlockCipherCipherSuite
            org.bouncycastle.crypto.modes.CBCBlockCipher r8 = new org.bouncycastle.crypto.modes.CBCBlockCipher
            org.bouncycastle.crypto.engines.AESFastEngine r15 = new org.bouncycastle.crypto.engines.AESFastEngine
            r15.<init>()
            r8.<init>(r15)
            org.bouncycastle.crypto.modes.CBCBlockCipher r9 = new org.bouncycastle.crypto.modes.CBCBlockCipher
            org.bouncycastle.crypto.engines.AESFastEngine r15 = new org.bouncycastle.crypto.engines.AESFastEngine
            r15.<init>()
            r9.<init>(r15)
            org.bouncycastle.crypto.digests.SHA1Digest r10 = new org.bouncycastle.crypto.digests.SHA1Digest
            r10.<init>()
            org.bouncycastle.crypto.digests.SHA1Digest r11 = new org.bouncycastle.crypto.digests.SHA1Digest
            r11.<init>()
            r12 = 16
            r13 = 1
            r7 = r14
            r7.<init>(r8, r9, r10, r11, r12, r13)
            return r14
        Lc0:
            org.bouncycastle.crypto.tls.TlsBlockCipherCipherSuite r14 = new org.bouncycastle.crypto.tls.TlsBlockCipherCipherSuite
            org.bouncycastle.crypto.modes.CBCBlockCipher r1 = new org.bouncycastle.crypto.modes.CBCBlockCipher
            org.bouncycastle.crypto.engines.DESedeEngine r15 = new org.bouncycastle.crypto.engines.DESedeEngine
            r15.<init>()
            r1.<init>(r15)
            org.bouncycastle.crypto.modes.CBCBlockCipher r2 = new org.bouncycastle.crypto.modes.CBCBlockCipher
            org.bouncycastle.crypto.engines.DESedeEngine r15 = new org.bouncycastle.crypto.engines.DESedeEngine
            r15.<init>()
            r2.<init>(r15)
            org.bouncycastle.crypto.digests.SHA1Digest r3 = new org.bouncycastle.crypto.digests.SHA1Digest
            r3.<init>()
            org.bouncycastle.crypto.digests.SHA1Digest r4 = new org.bouncycastle.crypto.digests.SHA1Digest
            r4.<init>()
            r5 = 24
            r6 = 5
            r0 = r14
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return r14
        Le8:
            org.bouncycastle.crypto.tls.TlsBlockCipherCipherSuite r14 = new org.bouncycastle.crypto.tls.TlsBlockCipherCipherSuite
            org.bouncycastle.crypto.modes.CBCBlockCipher r8 = new org.bouncycastle.crypto.modes.CBCBlockCipher
            org.bouncycastle.crypto.engines.DESedeEngine r15 = new org.bouncycastle.crypto.engines.DESedeEngine
            r15.<init>()
            r8.<init>(r15)
            org.bouncycastle.crypto.modes.CBCBlockCipher r9 = new org.bouncycastle.crypto.modes.CBCBlockCipher
            org.bouncycastle.crypto.engines.DESedeEngine r15 = new org.bouncycastle.crypto.engines.DESedeEngine
            r15.<init>()
            r9.<init>(r15)
            org.bouncycastle.crypto.digests.SHA1Digest r10 = new org.bouncycastle.crypto.digests.SHA1Digest
            r10.<init>()
            org.bouncycastle.crypto.digests.SHA1Digest r11 = new org.bouncycastle.crypto.digests.SHA1Digest
            r11.<init>()
            r12 = 24
            r13 = 1
            r7 = r14
            r7.<init>(r8, r9, r10, r11, r12, r13)
            return r14
    }

    protected static void writeCipherSuites(java.io.OutputStream r1) throws java.io.IOException {
            r0 = 12
            org.bouncycastle.crypto.tls.TlsUtils.writeUint16(r0, r1)
            r0 = 57
            org.bouncycastle.crypto.tls.TlsUtils.writeUint16(r0, r1)
            r0 = 51
            org.bouncycastle.crypto.tls.TlsUtils.writeUint16(r0, r1)
            r0 = 22
            org.bouncycastle.crypto.tls.TlsUtils.writeUint16(r0, r1)
            r0 = 53
            org.bouncycastle.crypto.tls.TlsUtils.writeUint16(r0, r1)
            r0 = 47
            org.bouncycastle.crypto.tls.TlsUtils.writeUint16(r0, r1)
            r0 = 10
            org.bouncycastle.crypto.tls.TlsUtils.writeUint16(r0, r1)
            return
    }
}
