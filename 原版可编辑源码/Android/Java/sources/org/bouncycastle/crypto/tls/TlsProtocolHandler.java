package org.bouncycastle.crypto.tls;

import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.math.BigInteger;
import java.security.SecureRandom;
import org.bouncycastle.asn1.x509.RSAPublicKeyStructure;
import org.bouncycastle.crypto.InvalidCipherTextException;
import org.bouncycastle.crypto.encodings.PKCS1Encoding;
import org.bouncycastle.crypto.engines.RSABlindedEngine;
import org.bouncycastle.crypto.params.ParametersWithRandom;
import org.bouncycastle.crypto.params.RSAKeyParameters;
import org.bouncycastle.crypto.prng.ThreadedSeedGenerator;
import org.bouncycastle.util.BigIntegers;

public class TlsProtocolHandler {
    protected static final short AL_fatal = 2;
    protected static final short AL_warning = 1;
    protected static final short AP_access_denied = 49;
    protected static final short AP_bad_certificate = 42;
    protected static final short AP_bad_record_mac = 20;
    protected static final short AP_certificate_expired = 45;
    protected static final short AP_certificate_revoked = 44;
    protected static final short AP_certificate_unknown = 46;
    protected static final short AP_close_notify = 0;
    protected static final short AP_decode_error = 50;
    protected static final short AP_decompression_failure = 30;
    protected static final short AP_decrypt_error = 51;
    protected static final short AP_decryption_failed = 21;
    protected static final short AP_export_restriction = 60;
    protected static final short AP_handshake_failure = 40;
    protected static final short AP_illegal_parameter = 47;
    protected static final short AP_insufficient_security = 71;
    protected static final short AP_internal_error = 80;
    protected static final short AP_no_renegotiation = 100;
    protected static final short AP_protocol_version = 70;
    protected static final short AP_record_overflow = 22;
    protected static final short AP_unexpected_message = 10;
    protected static final short AP_unknown_ca = 48;
    protected static final short AP_unsupported_certificate = 43;
    protected static final short AP_user_canceled = 90;
    private static final short CS_CERTIFICATE_REQUEST_RECEIVED = 5;
    private static final short CS_CLIENT_CHANGE_CIPHER_SPEC_SEND = 8;
    private static final short CS_CLIENT_FINISHED_SEND = 9;
    private static final short CS_CLIENT_HELLO_SEND = 1;
    private static final short CS_CLIENT_KEY_EXCHANGE_SEND = 7;
    private static final short CS_DONE = 11;
    private static final short CS_SERVER_CERTIFICATE_RECEIVED = 3;
    private static final short CS_SERVER_CHANGE_CIPHER_SPEC_RECEIVED = 10;
    private static final short CS_SERVER_HELLO_DONE_RECEIVED = 6;
    private static final short CS_SERVER_HELLO_RECEIVED = 2;
    private static final short CS_SERVER_KEY_EXCHANGE_RECEIVED = 4;
    private static final short HP_CERTIFICATE = 11;
    private static final short HP_CERTIFICATE_REQUEST = 13;
    private static final short HP_CERTIFICATE_VERIFY = 15;
    private static final short HP_CLIENT_HELLO = 1;
    private static final short HP_CLIENT_KEY_EXCHANGE = 16;
    private static final short HP_FINISHED = 20;
    private static final short HP_HELLO_REQUEST = 0;
    private static final short HP_SERVER_HELLO = 2;
    private static final short HP_SERVER_HELLO_DONE = 14;
    private static final short HP_SERVER_KEY_EXCHANGE = 12;
    private static final short RL_ALERT = 21;
    private static final short RL_APPLICATION_DATA = 23;
    private static final short RL_CHANGE_CIPHER_SPEC = 20;
    private static final short RL_HANDSHAKE = 22;
    private static final String TLS_ERROR_MESSAGE = "Internal TLS error, this could be an attack";
    private static final byte[] emptybuf = new byte[0];
    private BigInteger Yc;
    private byte[] clientRandom;
    private short connection_state;
    private byte[] ms;
    private byte[] pms;
    private SecureRandom random;
    private RecordStream rs;
    private byte[] serverRandom;
    private ByteQueue applicationDataQueue = new ByteQueue();
    private ByteQueue changeCipherSpecQueue = new ByteQueue();
    private ByteQueue alertQueue = new ByteQueue();
    private ByteQueue handshakeQueue = new ByteQueue();
    private RSAKeyParameters serverRsaKey = null;
    private TlsInputStream tlsInputStream = null;
    private TlsOuputStream tlsOutputStream = null;
    private boolean closed = false;
    private boolean failedWithError = false;
    private boolean appDataReady = false;
    private TlsCipherSuite choosenCipherSuite = null;
    private CertificateVerifyer verifyer = null;

    public TlsProtocolHandler(InputStream inputStream, OutputStream outputStream) {
        ThreadedSeedGenerator threadedSeedGenerator = new ThreadedSeedGenerator();
        SecureRandom secureRandom = new SecureRandom();
        this.random = secureRandom;
        secureRandom.setSeed(threadedSeedGenerator.generateSeed(20, true));
        this.rs = new RecordStream(this, inputStream, outputStream);
    }

    public TlsProtocolHandler(InputStream inputStream, OutputStream outputStream, SecureRandom secureRandom) {
        this.random = secureRandom;
        this.rs = new RecordStream(this, inputStream, outputStream);
    }

    private void processAlert() throws IOException {
        while (this.alertQueue.size() >= 2) {
            byte[] bArr = new byte[2];
            this.alertQueue.read(bArr, 0, 2, 0);
            this.alertQueue.removeData(2);
            short s = bArr[0];
            short s2 = bArr[1];
            if (s == 2) {
                this.failedWithError = true;
                this.closed = true;
                try {
                    this.rs.close();
                } catch (Exception unused) {
                }
                throw new IOException(TLS_ERROR_MESSAGE);
            }
            if (s2 == 0) {
                failWithError((short) 1, (short) 0);
            }
        }
    }

    private void processApplicationData() {
    }

    private void processChangeCipherSpec() throws IOException {
        while (this.changeCipherSpecQueue.size() > 0) {
            byte[] bArr = new byte[1];
            this.changeCipherSpecQueue.read(bArr, 0, 1, 0);
            this.changeCipherSpecQueue.removeData(1);
            if (bArr[0] != 1) {
                failWithError((short) 2, (short) 10);
            } else if (this.connection_state == 9) {
                RecordStream recordStream = this.rs;
                recordStream.readSuite = recordStream.writeSuite;
                this.connection_state = (short) 10;
            } else {
                failWithError((short) 2, AP_handshake_failure);
            }
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:48:0x01b2, code lost:
    
        if (r4 != 4) goto L49;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void processHandshake() throws IOException {
        int i;
        do {
            i = 0;
            if (this.handshakeQueue.size() >= 4) {
                byte[] bArr = new byte[4];
                this.handshakeQueue.read(bArr, 0, 4, 0);
                ByteArrayInputStream byteArrayInputStream = new ByteArrayInputStream(bArr);
                short uint8 = TlsUtils.readUint8(byteArrayInputStream);
                int uint24 = TlsUtils.readUint24(byteArrayInputStream);
                int i2 = uint24 + 4;
                if (this.handshakeQueue.size() >= i2) {
                    byte[] bArr2 = new byte[uint24];
                    this.handshakeQueue.read(bArr2, 0, uint24, 4);
                    this.handshakeQueue.removeData(i2);
                    if (uint8 != 20) {
                        this.rs.hash1.update(bArr, 0, 4);
                        this.rs.hash2.update(bArr, 0, 4);
                        this.rs.hash1.update(bArr2, 0, uint24);
                        this.rs.hash2.update(bArr2, 0, uint24);
                    }
                    ByteArrayInputStream byteArrayInputStream2 = new ByteArrayInputStream(bArr2);
                    if (uint8 == 2) {
                        if (this.connection_state == 1) {
                            TlsUtils.checkVersion(byteArrayInputStream2, this);
                            byte[] bArr3 = new byte[32];
                            this.serverRandom = bArr3;
                            TlsUtils.readFully(bArr3, byteArrayInputStream2);
                            TlsUtils.readFully(new byte[TlsUtils.readUint8(byteArrayInputStream2)], byteArrayInputStream2);
                            this.choosenCipherSuite = TlsCipherSuiteManager.getCipherSuite(TlsUtils.readUint16(byteArrayInputStream2), this);
                            if (TlsUtils.readUint8(byteArrayInputStream2) != 0) {
                                failWithError((short) 2, AP_illegal_parameter);
                            }
                            assertEmpty(byteArrayInputStream2);
                            this.connection_state = (short) 2;
                            i = 1;
                        }
                        failWithError((short) 2, (short) 10);
                    } else if (uint8 != 20) {
                        byte[] bArrProcessBlock = null;
                        RSAPublicKeyStructure rSAPublicKeyStructure = null;
                        byte[] bArrProcessBlock2 = null;
                        switch (uint8) {
                            case 11:
                                if (this.connection_state == 2) {
                                    Certificate certificate = Certificate.parse(byteArrayInputStream2);
                                    assertEmpty(byteArrayInputStream2);
                                    if (!this.verifyer.isValid(certificate.getCerts())) {
                                        failWithError((short) 2, AP_user_canceled);
                                    }
                                    try {
                                        rSAPublicKeyStructure = RSAPublicKeyStructure.getInstance(certificate.certs[0].getTBSCertificate().getSubjectPublicKeyInfo().getPublicKey());
                                    } catch (Exception unused) {
                                        failWithError((short) 2, AP_unsupported_certificate);
                                    }
                                    this.serverRsaKey = new RSAKeyParameters(false, rSAPublicKeyStructure.getModulus(), rSAPublicKeyStructure.getPublicExponent());
                                    this.connection_state = CS_SERVER_CERTIFICATE_RECEIVED;
                                    i = 1;
                                }
                                failWithError((short) 2, (short) 10);
                                break;
                            case 12:
                                if (this.connection_state == 3) {
                                    if (this.choosenCipherSuite.getKeyExchangeAlgorithm() != 5) {
                                        failWithError((short) 2, (short) 10);
                                    }
                                    int uint16 = TlsUtils.readUint16(byteArrayInputStream2);
                                    byte[] bArr4 = new byte[uint16];
                                    TlsUtils.readFully(bArr4, byteArrayInputStream2);
                                    int uint162 = TlsUtils.readUint16(byteArrayInputStream2);
                                    byte[] bArr5 = new byte[uint162];
                                    TlsUtils.readFully(bArr5, byteArrayInputStream2);
                                    int uint163 = TlsUtils.readUint16(byteArrayInputStream2);
                                    byte[] bArr6 = new byte[uint163];
                                    TlsUtils.readFully(bArr6, byteArrayInputStream2);
                                    int uint164 = TlsUtils.readUint16(byteArrayInputStream2);
                                    byte[] bArr7 = new byte[uint164];
                                    TlsUtils.readFully(bArr7, byteArrayInputStream2);
                                    assertEmpty(byteArrayInputStream2);
                                    CombinedHash combinedHash = new CombinedHash();
                                    ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
                                    TlsUtils.writeUint16(uint16, byteArrayOutputStream);
                                    byteArrayOutputStream.write(bArr4);
                                    TlsUtils.writeUint16(uint162, byteArrayOutputStream);
                                    byteArrayOutputStream.write(bArr5);
                                    TlsUtils.writeUint16(uint163, byteArrayOutputStream);
                                    byteArrayOutputStream.write(bArr6);
                                    byte[] byteArray = byteArrayOutputStream.toByteArray();
                                    byte[] bArr8 = this.clientRandom;
                                    combinedHash.update(bArr8, 0, bArr8.length);
                                    byte[] bArr9 = this.serverRandom;
                                    combinedHash.update(bArr9, 0, bArr9.length);
                                    combinedHash.update(byteArray, 0, byteArray.length);
                                    int digestSize = combinedHash.getDigestSize();
                                    byte[] bArr10 = new byte[digestSize];
                                    combinedHash.doFinal(bArr10, 0);
                                    PKCS1Encoding pKCS1Encoding = new PKCS1Encoding(new RSABlindedEngine());
                                    pKCS1Encoding.init(false, this.serverRsaKey);
                                    try {
                                        bArrProcessBlock2 = pKCS1Encoding.processBlock(bArr7, 0, uint164);
                                    } catch (InvalidCipherTextException unused2) {
                                        failWithError((short) 2, AP_bad_certificate);
                                    }
                                    if (bArrProcessBlock2.length != digestSize) {
                                        failWithError((short) 2, AP_bad_certificate);
                                    }
                                    while (i < bArrProcessBlock2.length) {
                                        if (bArrProcessBlock2[i] != bArr10[i]) {
                                            failWithError((short) 2, AP_bad_certificate);
                                        }
                                        i++;
                                    }
                                    BigInteger bigInteger = new BigInteger(1, bArr4);
                                    BigInteger bigInteger2 = new BigInteger(1, bArr5);
                                    BigInteger bigInteger3 = new BigInteger(1, bArr6);
                                    BigInteger bigInteger4 = new BigInteger(bigInteger.bitLength() - 1, this.random);
                                    this.Yc = bigInteger2.modPow(bigInteger4, bigInteger);
                                    this.pms = BigIntegers.asUnsignedByteArray(bigInteger3.modPow(bigInteger4, bigInteger));
                                    this.connection_state = CS_SERVER_KEY_EXCHANGE_RECEIVED;
                                    i = 1;
                                }
                                failWithError((short) 2, (short) 10);
                                break;
                            case 13:
                                short s = this.connection_state;
                                if (s == 3) {
                                    if (this.choosenCipherSuite.getKeyExchangeAlgorithm() != 1) {
                                        failWithError((short) 2, (short) 10);
                                    }
                                }
                                TlsUtils.readFully(new byte[TlsUtils.readUint8(byteArrayInputStream2)], byteArrayInputStream2);
                                TlsUtils.readFully(new byte[TlsUtils.readUint16(byteArrayInputStream2)], byteArrayInputStream2);
                                assertEmpty(byteArrayInputStream2);
                                this.connection_state = CS_CERTIFICATE_REQUEST_RECEIVED;
                                i = 1;
                                break;
                            case 14:
                                short s2 = this.connection_state;
                                if (s2 != 3) {
                                    if (s2 != 4 && s2 != 5) {
                                        failWithError((short) 2, AP_handshake_failure);
                                    }
                                } else if (this.choosenCipherSuite.getKeyExchangeAlgorithm() != 1) {
                                    failWithError((short) 2, (short) 10);
                                }
                                assertEmpty(byteArrayInputStream2);
                                boolean z = this.connection_state == 5;
                                this.connection_state = CS_SERVER_HELLO_DONE_RECEIVED;
                                if (z) {
                                    sendClientCertificate();
                                }
                                short keyExchangeAlgorithm = this.choosenCipherSuite.getKeyExchangeAlgorithm();
                                if (keyExchangeAlgorithm == 1) {
                                    byte[] bArr11 = new byte[48];
                                    this.pms = bArr11;
                                    bArr11[0] = 3;
                                    bArr11[1] = 1;
                                    for (int i3 = 2; i3 < 48; i3++) {
                                        this.pms[i3] = (byte) this.random.nextInt();
                                    }
                                    PKCS1Encoding pKCS1Encoding2 = new PKCS1Encoding(new RSABlindedEngine());
                                    pKCS1Encoding2.init(true, new ParametersWithRandom(this.serverRsaKey, this.random));
                                    try {
                                        bArrProcessBlock = pKCS1Encoding2.processBlock(this.pms, 0, this.pms.length);
                                    } catch (InvalidCipherTextException unused3) {
                                        failWithError((short) 2, AP_internal_error);
                                    }
                                    ByteArrayOutputStream byteArrayOutputStream2 = new ByteArrayOutputStream();
                                    TlsUtils.writeUint8(HP_CLIENT_KEY_EXCHANGE, byteArrayOutputStream2);
                                    TlsUtils.writeUint24(bArrProcessBlock.length + 2, byteArrayOutputStream2);
                                    TlsUtils.writeUint16(bArrProcessBlock.length, byteArrayOutputStream2);
                                    byteArrayOutputStream2.write(bArrProcessBlock);
                                    byte[] byteArray2 = byteArrayOutputStream2.toByteArray();
                                    this.rs.writeMessage((short) 22, byteArray2, 0, byteArray2.length);
                                    break;
                                } else if (keyExchangeAlgorithm != 5) {
                                    failWithError((short) 2, (short) 10);
                                } else {
                                    byte[] byteArray3 = this.Yc.toByteArray();
                                    ByteArrayOutputStream byteArrayOutputStream3 = new ByteArrayOutputStream();
                                    TlsUtils.writeUint8(HP_CLIENT_KEY_EXCHANGE, byteArrayOutputStream3);
                                    TlsUtils.writeUint24(byteArray3.length + 2, byteArrayOutputStream3);
                                    TlsUtils.writeUint16(byteArray3.length, byteArrayOutputStream3);
                                    byteArrayOutputStream3.write(byteArray3);
                                    byte[] byteArray4 = byteArrayOutputStream3.toByteArray();
                                    this.rs.writeMessage((short) 22, byteArray4, 0, byteArray4.length);
                                }
                                this.connection_state = CS_CLIENT_KEY_EXCHANGE_SEND;
                                this.rs.writeMessage((short) 20, new byte[]{1}, 0, 1);
                                this.connection_state = CS_CLIENT_CHANGE_CIPHER_SPEC_SEND;
                                this.ms = new byte[48];
                                byte[] bArr12 = this.clientRandom;
                                byte[] bArr13 = new byte[bArr12.length + this.serverRandom.length];
                                System.arraycopy(bArr12, 0, bArr13, 0, bArr12.length);
                                byte[] bArr14 = this.serverRandom;
                                System.arraycopy(bArr14, 0, bArr13, this.clientRandom.length, bArr14.length);
                                TlsUtils.PRF(this.pms, TlsUtils.toByteArray("master secret"), bArr13, this.ms);
                                this.rs.writeSuite = this.choosenCipherSuite;
                                this.rs.writeSuite.init(this.ms, this.clientRandom, this.serverRandom);
                                byte[] bArr15 = new byte[12];
                                byte[] bArr16 = new byte[36];
                                this.rs.hash1.doFinal(bArr16, 0);
                                TlsUtils.PRF(this.ms, TlsUtils.toByteArray("client finished"), bArr16, bArr15);
                                ByteArrayOutputStream byteArrayOutputStream4 = new ByteArrayOutputStream();
                                TlsUtils.writeUint8((short) 20, byteArrayOutputStream4);
                                TlsUtils.writeUint24(12, byteArrayOutputStream4);
                                byteArrayOutputStream4.write(bArr15);
                                byte[] byteArray5 = byteArrayOutputStream4.toByteArray();
                                this.rs.writeMessage((short) 22, byteArray5, 0, byteArray5.length);
                                this.connection_state = CS_CLIENT_FINISHED_SEND;
                                i = 1;
                                break;
                            default:
                                failWithError((short) 2, (short) 10);
                                break;
                        }
                    } else {
                        if (this.connection_state == 10) {
                            byte[] bArr17 = new byte[12];
                            TlsUtils.readFully(bArr17, byteArrayInputStream2);
                            assertEmpty(byteArrayInputStream2);
                            byte[] bArr18 = new byte[12];
                            byte[] bArr19 = new byte[36];
                            this.rs.hash2.doFinal(bArr19, 0);
                            TlsUtils.PRF(this.ms, TlsUtils.toByteArray("server finished"), bArr19, bArr18);
                            while (i < 12) {
                                if (bArr17[i] != bArr18[i]) {
                                    failWithError((short) 2, AP_handshake_failure);
                                }
                                i++;
                            }
                            this.connection_state = (short) 11;
                            this.appDataReady = true;
                            i = 1;
                        }
                        failWithError((short) 2, (short) 10);
                    }
                }
            }
        } while (i != 0);
    }

    private void sendClientCertificate() throws IOException {
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        TlsUtils.writeUint8((short) 11, byteArrayOutputStream);
        TlsUtils.writeUint24(3, byteArrayOutputStream);
        TlsUtils.writeUint24(0, byteArrayOutputStream);
        byte[] byteArray = byteArrayOutputStream.toByteArray();
        this.rs.writeMessage((short) 22, byteArray, 0, byteArray.length);
    }

    protected void assertEmpty(ByteArrayInputStream byteArrayInputStream) throws IOException {
        if (byteArrayInputStream.available() > 0) {
            failWithError((short) 2, AP_decode_error);
        }
    }

    public void close() throws IOException {
        if (this.closed) {
            return;
        }
        failWithError((short) 1, (short) 0);
    }

    public void connect(CertificateVerifyer certificateVerifyer) throws IOException {
        this.verifyer = certificateVerifyer;
        this.clientRandom = new byte[32];
        int iCurrentTimeMillis = (int) (System.currentTimeMillis() / 1000);
        byte[] bArr = this.clientRandom;
        bArr[0] = (byte) (iCurrentTimeMillis >> 24);
        bArr[1] = (byte) (iCurrentTimeMillis >> 16);
        bArr[2] = (byte) (iCurrentTimeMillis >> 8);
        bArr[3] = (byte) iCurrentTimeMillis;
        int i = 4;
        while (true) {
            byte[] bArr2 = this.clientRandom;
            if (i >= bArr2.length) {
                break;
            }
            bArr2[i] = (byte) this.random.nextInt();
            i++;
        }
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        TlsUtils.writeVersion(byteArrayOutputStream);
        byteArrayOutputStream.write(this.clientRandom);
        TlsUtils.writeUint8((short) 0, byteArrayOutputStream);
        TlsCipherSuiteManager.writeCipherSuites(byteArrayOutputStream);
        TlsUtils.writeUint8((short) 1, byteArrayOutputStream);
        byteArrayOutputStream.write(new byte[]{0});
        ByteArrayOutputStream byteArrayOutputStream2 = new ByteArrayOutputStream();
        TlsUtils.writeUint8((short) 1, byteArrayOutputStream2);
        TlsUtils.writeUint24(byteArrayOutputStream.size(), byteArrayOutputStream2);
        byteArrayOutputStream2.write(byteArrayOutputStream.toByteArray());
        byte[] byteArray = byteArrayOutputStream2.toByteArray();
        this.rs.writeMessage((short) 22, byteArray, 0, byteArray.length);
        this.connection_state = (short) 1;
        while (this.connection_state != 11) {
            this.rs.readData();
        }
        this.tlsInputStream = new TlsInputStream(this);
        this.tlsOutputStream = new TlsOuputStream(this);
    }

    protected void failWithError(short s, short s2) throws IOException {
        if (this.closed) {
            throw new IOException(TLS_ERROR_MESSAGE);
        }
        byte[] bArr = {(byte) s, (byte) s2};
        this.closed = true;
        if (s == 2) {
            this.failedWithError = true;
        }
        this.rs.writeMessage((short) 21, bArr, 0, 2);
        this.rs.close();
        if (s == 2) {
            throw new IOException(TLS_ERROR_MESSAGE);
        }
    }

    protected void flush() throws IOException {
        this.rs.flush();
    }

    public InputStream getInputStream() {
        return this.tlsInputStream;
    }

    public OutputStream getOutputStream() {
        return this.tlsOutputStream;
    }

    public TlsInputStream getTlsInputStream() {
        return this.tlsInputStream;
    }

    public TlsOuputStream getTlsOuputStream() {
        return this.tlsOutputStream;
    }

    protected void processData(short s, byte[] bArr, int i, int i2) throws IOException {
        switch (s) {
            case 20:
                this.changeCipherSpecQueue.addData(bArr, i, i2);
                processChangeCipherSpec();
                break;
            case 21:
                this.alertQueue.addData(bArr, i, i2);
                processAlert();
                break;
            case 22:
                this.handshakeQueue.addData(bArr, i, i2);
                processHandshake();
                break;
            case 23:
                if (!this.appDataReady) {
                    failWithError((short) 2, (short) 10);
                }
                this.applicationDataQueue.addData(bArr, i, i2);
                processApplicationData();
                break;
        }
    }

    protected int readApplicationData(byte[] bArr, int i, int i2) throws IOException {
        while (this.applicationDataQueue.size() == 0) {
            if (this.failedWithError) {
                throw new IOException(TLS_ERROR_MESSAGE);
            }
            if (this.closed) {
                return -1;
            }
            try {
                this.rs.readData();
            } catch (IOException e) {
                if (!this.closed) {
                    failWithError((short) 2, AP_internal_error);
                }
                throw e;
            } catch (RuntimeException e2) {
                if (!this.closed) {
                    failWithError((short) 2, AP_internal_error);
                }
                throw e2;
            }
        }
        int iMin = Math.min(i2, this.applicationDataQueue.size());
        this.applicationDataQueue.read(bArr, i, iMin, 0);
        this.applicationDataQueue.removeData(iMin);
        return iMin;
    }

    protected void writeData(byte[] bArr, int i, int i2) throws IOException {
        if (this.failedWithError) {
            throw new IOException(TLS_ERROR_MESSAGE);
        }
        if (this.closed) {
            throw new IOException("Sorry, connection has been closed, you cannot write more data");
        }
        this.rs.writeMessage(RL_APPLICATION_DATA, emptybuf, 0, 0);
        do {
            int iMin = Math.min(i2, 16384);
            try {
                this.rs.writeMessage(RL_APPLICATION_DATA, bArr, i, iMin);
                i += iMin;
                i2 -= iMin;
            } catch (IOException e) {
                if (!this.closed) {
                    failWithError((short) 2, AP_internal_error);
                }
                throw e;
            } catch (RuntimeException e2) {
                if (!this.closed) {
                    failWithError((short) 2, AP_internal_error);
                }
                throw e2;
            }
        } while (i2 > 0);
    }
}
