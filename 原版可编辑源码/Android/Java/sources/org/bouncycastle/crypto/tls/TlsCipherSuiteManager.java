package org.bouncycastle.crypto.tls;

import java.io.IOException;
import java.io.OutputStream;
import org.bouncycastle.crypto.digests.SHA1Digest;
import org.bouncycastle.crypto.engines.AESFastEngine;
import org.bouncycastle.crypto.engines.DESedeEngine;
import org.bouncycastle.crypto.modes.CBCBlockCipher;

public class TlsCipherSuiteManager {
    private static final int TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA = 22;
    private static final int TLS_DHE_RSA_WITH_AES_128_CBC_SHA = 51;
    private static final int TLS_DHE_RSA_WITH_AES_256_CBC_SHA = 57;
    private static final int TLS_RSA_WITH_3DES_EDE_CBC_SHA = 10;
    private static final int TLS_RSA_WITH_AES_128_CBC_SHA = 47;
    private static final int TLS_RSA_WITH_AES_256_CBC_SHA = 53;

    protected static TlsCipherSuite getCipherSuite(int i, TlsProtocolHandler tlsProtocolHandler) throws IOException {
        if (i == 10) {
            return new TlsBlockCipherCipherSuite(new CBCBlockCipher(new DESedeEngine()), new CBCBlockCipher(new DESedeEngine()), new SHA1Digest(), new SHA1Digest(), 24, (short) 1);
        }
        if (i == 22) {
            return new TlsBlockCipherCipherSuite(new CBCBlockCipher(new DESedeEngine()), new CBCBlockCipher(new DESedeEngine()), new SHA1Digest(), new SHA1Digest(), 24, (short) 5);
        }
        if (i == 47) {
            return new TlsBlockCipherCipherSuite(new CBCBlockCipher(new AESFastEngine()), new CBCBlockCipher(new AESFastEngine()), new SHA1Digest(), new SHA1Digest(), 16, (short) 1);
        }
        if (i == 51) {
            return new TlsBlockCipherCipherSuite(new CBCBlockCipher(new AESFastEngine()), new CBCBlockCipher(new AESFastEngine()), new SHA1Digest(), new SHA1Digest(), 16, (short) 5);
        }
        if (i == 53) {
            return new TlsBlockCipherCipherSuite(new CBCBlockCipher(new AESFastEngine()), new CBCBlockCipher(new AESFastEngine()), new SHA1Digest(), new SHA1Digest(), 32, (short) 1);
        }
        if (i == 57) {
            return new TlsBlockCipherCipherSuite(new CBCBlockCipher(new AESFastEngine()), new CBCBlockCipher(new AESFastEngine()), new SHA1Digest(), new SHA1Digest(), 32, (short) 5);
        }
        tlsProtocolHandler.failWithError((short) 2, (short) 40);
        return null;
    }

    protected static void writeCipherSuites(OutputStream outputStream) throws IOException {
        TlsUtils.writeUint16(12, outputStream);
        TlsUtils.writeUint16(57, outputStream);
        TlsUtils.writeUint16(51, outputStream);
        TlsUtils.writeUint16(22, outputStream);
        TlsUtils.writeUint16(53, outputStream);
        TlsUtils.writeUint16(47, outputStream);
        TlsUtils.writeUint16(10, outputStream);
    }
}
