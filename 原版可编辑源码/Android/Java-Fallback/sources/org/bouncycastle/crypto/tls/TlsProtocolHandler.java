package org.bouncycastle.crypto.tls;

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
    private static final java.lang.String TLS_ERROR_MESSAGE = "Internal TLS error, this could be an attack";
    private static final byte[] emptybuf = null;
    private java.math.BigInteger Yc;
    private org.bouncycastle.crypto.tls.ByteQueue alertQueue;
    private boolean appDataReady;
    private org.bouncycastle.crypto.tls.ByteQueue applicationDataQueue;
    private org.bouncycastle.crypto.tls.ByteQueue changeCipherSpecQueue;
    private org.bouncycastle.crypto.tls.TlsCipherSuite choosenCipherSuite;
    private byte[] clientRandom;
    private boolean closed;
    private short connection_state;
    private boolean failedWithError;
    private org.bouncycastle.crypto.tls.ByteQueue handshakeQueue;
    private byte[] ms;
    private byte[] pms;
    private java.security.SecureRandom random;
    private org.bouncycastle.crypto.tls.RecordStream rs;
    private byte[] serverRandom;
    private org.bouncycastle.crypto.params.RSAKeyParameters serverRsaKey;
    private org.bouncycastle.crypto.tls.TlsInputStream tlsInputStream;
    private org.bouncycastle.crypto.tls.TlsOuputStream tlsOutputStream;
    private org.bouncycastle.crypto.tls.CertificateVerifyer verifyer;

    static {
            r0 = 0
            byte[] r0 = new byte[r0]
            org.bouncycastle.crypto.tls.TlsProtocolHandler.emptybuf = r0
            return
    }

    public TlsProtocolHandler(java.io.InputStream r5, java.io.OutputStream r6) {
            r4 = this;
            r4.<init>()
            org.bouncycastle.crypto.tls.ByteQueue r0 = new org.bouncycastle.crypto.tls.ByteQueue
            r0.<init>()
            r4.applicationDataQueue = r0
            org.bouncycastle.crypto.tls.ByteQueue r0 = new org.bouncycastle.crypto.tls.ByteQueue
            r0.<init>()
            r4.changeCipherSpecQueue = r0
            org.bouncycastle.crypto.tls.ByteQueue r0 = new org.bouncycastle.crypto.tls.ByteQueue
            r0.<init>()
            r4.alertQueue = r0
            org.bouncycastle.crypto.tls.ByteQueue r0 = new org.bouncycastle.crypto.tls.ByteQueue
            r0.<init>()
            r4.handshakeQueue = r0
            r0 = 0
            r4.serverRsaKey = r0
            r4.tlsInputStream = r0
            r4.tlsOutputStream = r0
            r1 = 0
            r4.closed = r1
            r4.failedWithError = r1
            r4.appDataReady = r1
            r4.choosenCipherSuite = r0
            r4.verifyer = r0
            org.bouncycastle.crypto.prng.ThreadedSeedGenerator r0 = new org.bouncycastle.crypto.prng.ThreadedSeedGenerator
            r0.<init>()
            java.security.SecureRandom r1 = new java.security.SecureRandom
            r1.<init>()
            r4.random = r1
            r2 = 20
            r3 = 1
            byte[] r0 = r0.generateSeed(r2, r3)
            r1.setSeed(r0)
            org.bouncycastle.crypto.tls.RecordStream r0 = new org.bouncycastle.crypto.tls.RecordStream
            r0.<init>(r4, r5, r6)
            r4.rs = r0
            return
    }

    public TlsProtocolHandler(java.io.InputStream r3, java.io.OutputStream r4, java.security.SecureRandom r5) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.crypto.tls.ByteQueue r0 = new org.bouncycastle.crypto.tls.ByteQueue
            r0.<init>()
            r2.applicationDataQueue = r0
            org.bouncycastle.crypto.tls.ByteQueue r0 = new org.bouncycastle.crypto.tls.ByteQueue
            r0.<init>()
            r2.changeCipherSpecQueue = r0
            org.bouncycastle.crypto.tls.ByteQueue r0 = new org.bouncycastle.crypto.tls.ByteQueue
            r0.<init>()
            r2.alertQueue = r0
            org.bouncycastle.crypto.tls.ByteQueue r0 = new org.bouncycastle.crypto.tls.ByteQueue
            r0.<init>()
            r2.handshakeQueue = r0
            r0 = 0
            r2.serverRsaKey = r0
            r2.tlsInputStream = r0
            r2.tlsOutputStream = r0
            r1 = 0
            r2.closed = r1
            r2.failedWithError = r1
            r2.appDataReady = r1
            r2.choosenCipherSuite = r0
            r2.verifyer = r0
            r2.random = r5
            org.bouncycastle.crypto.tls.RecordStream r5 = new org.bouncycastle.crypto.tls.RecordStream
            r5.<init>(r2, r3, r4)
            r2.rs = r5
            return
    }

    private void processAlert() throws java.io.IOException {
            r5 = this;
        L0:
            org.bouncycastle.crypto.tls.ByteQueue r0 = r5.alertQueue
            int r0 = r0.size()
            r1 = 2
            if (r0 < r1) goto L36
            byte[] r0 = new byte[r1]
            org.bouncycastle.crypto.tls.ByteQueue r2 = r5.alertQueue
            r3 = 0
            r2.read(r0, r3, r1, r3)
            org.bouncycastle.crypto.tls.ByteQueue r2 = r5.alertQueue
            r2.removeData(r1)
            r2 = r0[r3]
            short r2 = (short) r2
            r4 = 1
            r0 = r0[r4]
            short r0 = (short) r0
            if (r2 == r1) goto L25
            if (r0 != 0) goto L0
            r5.failWithError(r4, r3)
            goto L0
        L25:
            r5.failedWithError = r4
            r5.closed = r4
            org.bouncycastle.crypto.tls.RecordStream r0 = r5.rs     // Catch: java.lang.Exception -> L2e
            r0.close()     // Catch: java.lang.Exception -> L2e
        L2e:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "Internal TLS error, this could be an attack"
            r0.<init>(r1)
            throw r0
        L36:
            return
    }

    private void processApplicationData() {
            r0 = this;
            return
    }

    private void processChangeCipherSpec() throws java.io.IOException {
            r4 = this;
        L0:
            org.bouncycastle.crypto.tls.ByteQueue r0 = r4.changeCipherSpecQueue
            int r0 = r0.size()
            if (r0 <= 0) goto L36
            r0 = 1
            byte[] r1 = new byte[r0]
            org.bouncycastle.crypto.tls.ByteQueue r2 = r4.changeCipherSpecQueue
            r3 = 0
            r2.read(r1, r3, r0, r3)
            org.bouncycastle.crypto.tls.ByteQueue r2 = r4.changeCipherSpecQueue
            r2.removeData(r0)
            r1 = r1[r3]
            r2 = 10
            r3 = 2
            if (r1 == r0) goto L21
            r4.failWithError(r3, r2)
            goto L0
        L21:
            short r0 = r4.connection_state
            r1 = 9
            if (r0 != r1) goto L30
            org.bouncycastle.crypto.tls.RecordStream r0 = r4.rs
            org.bouncycastle.crypto.tls.TlsCipherSuite r1 = r0.writeSuite
            r0.readSuite = r1
            r4.connection_state = r2
            goto L0
        L30:
            r0 = 40
            r4.failWithError(r3, r0)
            goto L0
        L36:
            return
    }

    private void processHandshake() throws java.io.IOException {
            r15 = this;
        L0:
            org.bouncycastle.crypto.tls.ByteQueue r0 = r15.handshakeQueue
            int r0 = r0.size()
            r1 = 4
            r2 = 0
            if (r0 < r1) goto L365
            byte[] r0 = new byte[r1]
            org.bouncycastle.crypto.tls.ByteQueue r3 = r15.handshakeQueue
            r3.read(r0, r2, r1, r2)
            java.io.ByteArrayInputStream r3 = new java.io.ByteArrayInputStream
            r3.<init>(r0)
            short r4 = org.bouncycastle.crypto.tls.TlsUtils.readUint8(r3)
            int r3 = org.bouncycastle.crypto.tls.TlsUtils.readUint24(r3)
            org.bouncycastle.crypto.tls.ByteQueue r5 = r15.handshakeQueue
            int r5 = r5.size()
            int r6 = r3 + 4
            if (r5 < r6) goto L365
            byte[] r5 = new byte[r3]
            org.bouncycastle.crypto.tls.ByteQueue r7 = r15.handshakeQueue
            r7.read(r5, r2, r3, r1)
            org.bouncycastle.crypto.tls.ByteQueue r7 = r15.handshakeQueue
            r7.removeData(r6)
            r6 = 20
            if (r4 == r6) goto L54
            org.bouncycastle.crypto.tls.RecordStream r7 = r15.rs
            org.bouncycastle.crypto.tls.CombinedHash r7 = r7.hash1
            r7.update(r0, r2, r1)
            org.bouncycastle.crypto.tls.RecordStream r7 = r15.rs
            org.bouncycastle.crypto.tls.CombinedHash r7 = r7.hash2
            r7.update(r0, r2, r1)
            org.bouncycastle.crypto.tls.RecordStream r0 = r15.rs
            org.bouncycastle.crypto.tls.CombinedHash r0 = r0.hash1
            r0.update(r5, r2, r3)
            org.bouncycastle.crypto.tls.RecordStream r0 = r15.rs
            org.bouncycastle.crypto.tls.CombinedHash r0 = r0.hash2
            r0.update(r5, r2, r3)
        L54:
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            r0.<init>(r5)
            r3 = 10
            r5 = 1
            r7 = 2
            if (r4 == r7) goto L32e
            r8 = 36
            r9 = 40
            r10 = 12
            if (r4 == r6) goto L2f4
            r11 = 0
            r12 = 5
            r13 = 3
            switch(r4) {
                case 11: goto L2a9;
                case 12: goto L1dc;
                case 13: goto L1ae;
                case 14: goto L6f;
                default: goto L6d;
            }
        L6d:
            goto L1b4
        L6f:
            short r4 = r15.connection_state
            if (r4 == r13) goto L7c
            if (r4 == r1) goto L87
            if (r4 == r12) goto L87
            r15.failWithError(r7, r9)
            goto L365
        L7c:
            org.bouncycastle.crypto.tls.TlsCipherSuite r1 = r15.choosenCipherSuite
            short r1 = r1.getKeyExchangeAlgorithm()
            if (r1 == r5) goto L87
            r15.failWithError(r7, r3)
        L87:
            r15.assertEmpty(r0)
            short r0 = r15.connection_state
            if (r0 != r12) goto L90
            r0 = 1
            goto L91
        L90:
            r0 = 0
        L91:
            r1 = 6
            r15.connection_state = r1
            if (r0 == 0) goto L99
            r15.sendClientCertificate()
        L99:
            org.bouncycastle.crypto.tls.TlsCipherSuite r0 = r15.choosenCipherSuite
            short r0 = r0.getKeyExchangeAlgorithm()
            r1 = 16
            r4 = 22
            r9 = 48
            if (r0 == r5) goto Ld3
            if (r0 == r12) goto Lae
            r15.failWithError(r7, r3)
            goto L12f
        Lae:
            java.math.BigInteger r0 = r15.Yc
            byte[] r0 = r0.toByteArray()
            java.io.ByteArrayOutputStream r3 = new java.io.ByteArrayOutputStream
            r3.<init>()
            org.bouncycastle.crypto.tls.TlsUtils.writeUint8(r1, r3)
            int r1 = r0.length
            int r1 = r1 + r7
            org.bouncycastle.crypto.tls.TlsUtils.writeUint24(r1, r3)
            int r1 = r0.length
            org.bouncycastle.crypto.tls.TlsUtils.writeUint16(r1, r3)
            r3.write(r0)
            byte[] r0 = r3.toByteArray()
            org.bouncycastle.crypto.tls.RecordStream r1 = r15.rs
            int r3 = r0.length
            r1.writeMessage(r4, r0, r2, r3)
            goto L12f
        Ld3:
            byte[] r0 = new byte[r9]
            r15.pms = r0
            r0[r2] = r13
            r0[r5] = r5
            r0 = 2
        Ldc:
            if (r0 >= r9) goto Lec
            byte[] r3 = r15.pms
            java.security.SecureRandom r12 = r15.random
            int r12 = r12.nextInt()
            byte r12 = (byte) r12
            r3[r0] = r12
            int r0 = r0 + 1
            goto Ldc
        Lec:
            org.bouncycastle.crypto.engines.RSABlindedEngine r0 = new org.bouncycastle.crypto.engines.RSABlindedEngine
            r0.<init>()
            org.bouncycastle.crypto.encodings.PKCS1Encoding r3 = new org.bouncycastle.crypto.encodings.PKCS1Encoding
            r3.<init>(r0)
            org.bouncycastle.crypto.params.ParametersWithRandom r0 = new org.bouncycastle.crypto.params.ParametersWithRandom
            org.bouncycastle.crypto.params.RSAKeyParameters r12 = r15.serverRsaKey
            java.security.SecureRandom r13 = r15.random
            r0.<init>(r12, r13)
            r3.init(r5, r0)
            byte[] r0 = r15.pms     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L10c
            byte[] r12 = r15.pms     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L10c
            int r12 = r12.length     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L10c
            byte[] r11 = r3.processBlock(r0, r2, r12)     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L10c
            goto L111
        L10c:
            r0 = 80
            r15.failWithError(r7, r0)
        L111:
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            org.bouncycastle.crypto.tls.TlsUtils.writeUint8(r1, r0)
            int r1 = r11.length
            int r1 = r1 + r7
            org.bouncycastle.crypto.tls.TlsUtils.writeUint24(r1, r0)
            int r1 = r11.length
            org.bouncycastle.crypto.tls.TlsUtils.writeUint16(r1, r0)
            r0.write(r11)
            byte[] r0 = r0.toByteArray()
            org.bouncycastle.crypto.tls.RecordStream r1 = r15.rs
            int r3 = r0.length
            r1.writeMessage(r4, r0, r2, r3)
        L12f:
            r0 = 7
            r15.connection_state = r0
            byte[] r0 = new byte[r5]
            r0[r2] = r5
            org.bouncycastle.crypto.tls.RecordStream r1 = r15.rs
            r1.writeMessage(r6, r0, r2, r5)
            r0 = 8
            r15.connection_state = r0
            byte[] r0 = new byte[r9]
            r15.ms = r0
            byte[] r0 = r15.clientRandom
            int r1 = r0.length
            byte[] r3 = r15.serverRandom
            int r3 = r3.length
            int r1 = r1 + r3
            byte[] r1 = new byte[r1]
            int r3 = r0.length
            java.lang.System.arraycopy(r0, r2, r1, r2, r3)
            byte[] r0 = r15.serverRandom
            byte[] r3 = r15.clientRandom
            int r3 = r3.length
            int r7 = r0.length
            java.lang.System.arraycopy(r0, r2, r1, r3, r7)
            byte[] r0 = r15.pms
            java.lang.String r3 = "master secret"
            byte[] r3 = org.bouncycastle.crypto.tls.TlsUtils.toByteArray(r3)
            byte[] r7 = r15.ms
            org.bouncycastle.crypto.tls.TlsUtils.PRF(r0, r3, r1, r7)
            org.bouncycastle.crypto.tls.RecordStream r0 = r15.rs
            org.bouncycastle.crypto.tls.TlsCipherSuite r1 = r15.choosenCipherSuite
            r0.writeSuite = r1
            org.bouncycastle.crypto.tls.RecordStream r0 = r15.rs
            org.bouncycastle.crypto.tls.TlsCipherSuite r0 = r0.writeSuite
            byte[] r1 = r15.ms
            byte[] r3 = r15.clientRandom
            byte[] r7 = r15.serverRandom
            r0.init(r1, r3, r7)
            byte[] r0 = new byte[r10]
            byte[] r1 = new byte[r8]
            org.bouncycastle.crypto.tls.RecordStream r3 = r15.rs
            org.bouncycastle.crypto.tls.CombinedHash r3 = r3.hash1
            r3.doFinal(r1, r2)
            byte[] r3 = r15.ms
            java.lang.String r7 = "client finished"
            byte[] r7 = org.bouncycastle.crypto.tls.TlsUtils.toByteArray(r7)
            org.bouncycastle.crypto.tls.TlsUtils.PRF(r3, r7, r1, r0)
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream
            r1.<init>()
            org.bouncycastle.crypto.tls.TlsUtils.writeUint8(r6, r1)
            org.bouncycastle.crypto.tls.TlsUtils.writeUint24(r10, r1)
            r1.write(r0)
            byte[] r0 = r1.toByteArray()
            org.bouncycastle.crypto.tls.RecordStream r1 = r15.rs
            int r3 = r0.length
            r1.writeMessage(r4, r0, r2, r3)
            r0 = 9
            r15.connection_state = r0
        L1ab:
            r2 = 1
            goto L365
        L1ae:
            short r4 = r15.connection_state
            if (r4 == r13) goto L1b9
            if (r4 == r1) goto L1c4
        L1b4:
            r15.failWithError(r7, r3)
            goto L365
        L1b9:
            org.bouncycastle.crypto.tls.TlsCipherSuite r1 = r15.choosenCipherSuite
            short r1 = r1.getKeyExchangeAlgorithm()
            if (r1 == r5) goto L1c4
            r15.failWithError(r7, r3)
        L1c4:
            short r1 = org.bouncycastle.crypto.tls.TlsUtils.readUint8(r0)
            byte[] r1 = new byte[r1]
            org.bouncycastle.crypto.tls.TlsUtils.readFully(r1, r0)
            int r1 = org.bouncycastle.crypto.tls.TlsUtils.readUint16(r0)
            byte[] r1 = new byte[r1]
            org.bouncycastle.crypto.tls.TlsUtils.readFully(r1, r0)
            r15.assertEmpty(r0)
            r15.connection_state = r12
            goto L1ab
        L1dc:
            short r4 = r15.connection_state
            if (r4 == r13) goto L1e1
            goto L1b4
        L1e1:
            org.bouncycastle.crypto.tls.TlsCipherSuite r4 = r15.choosenCipherSuite
            short r4 = r4.getKeyExchangeAlgorithm()
            if (r4 == r12) goto L1ec
            r15.failWithError(r7, r3)
        L1ec:
            int r3 = org.bouncycastle.crypto.tls.TlsUtils.readUint16(r0)
            byte[] r4 = new byte[r3]
            org.bouncycastle.crypto.tls.TlsUtils.readFully(r4, r0)
            int r6 = org.bouncycastle.crypto.tls.TlsUtils.readUint16(r0)
            byte[] r8 = new byte[r6]
            org.bouncycastle.crypto.tls.TlsUtils.readFully(r8, r0)
            int r9 = org.bouncycastle.crypto.tls.TlsUtils.readUint16(r0)
            byte[] r10 = new byte[r9]
            org.bouncycastle.crypto.tls.TlsUtils.readFully(r10, r0)
            int r12 = org.bouncycastle.crypto.tls.TlsUtils.readUint16(r0)
            byte[] r13 = new byte[r12]
            org.bouncycastle.crypto.tls.TlsUtils.readFully(r13, r0)
            r15.assertEmpty(r0)
            org.bouncycastle.crypto.tls.CombinedHash r0 = new org.bouncycastle.crypto.tls.CombinedHash
            r0.<init>()
            java.io.ByteArrayOutputStream r14 = new java.io.ByteArrayOutputStream
            r14.<init>()
            org.bouncycastle.crypto.tls.TlsUtils.writeUint16(r3, r14)
            r14.write(r4)
            org.bouncycastle.crypto.tls.TlsUtils.writeUint16(r6, r14)
            r14.write(r8)
            org.bouncycastle.crypto.tls.TlsUtils.writeUint16(r9, r14)
            r14.write(r10)
            byte[] r3 = r14.toByteArray()
            byte[] r6 = r15.clientRandom
            int r9 = r6.length
            r0.update(r6, r2, r9)
            byte[] r6 = r15.serverRandom
            int r9 = r6.length
            r0.update(r6, r2, r9)
            int r6 = r3.length
            r0.update(r3, r2, r6)
            int r3 = r0.getDigestSize()
            byte[] r6 = new byte[r3]
            r0.doFinal(r6, r2)
            org.bouncycastle.crypto.engines.RSABlindedEngine r0 = new org.bouncycastle.crypto.engines.RSABlindedEngine
            r0.<init>()
            org.bouncycastle.crypto.encodings.PKCS1Encoding r9 = new org.bouncycastle.crypto.encodings.PKCS1Encoding
            r9.<init>(r0)
            org.bouncycastle.crypto.params.RSAKeyParameters r0 = r15.serverRsaKey
            r9.init(r2, r0)
            r0 = 42
            byte[] r11 = r9.processBlock(r13, r2, r12)     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L262
            goto L265
        L262:
            r15.failWithError(r7, r0)
        L265:
            int r9 = r11.length
            if (r9 == r3) goto L26b
            r15.failWithError(r7, r0)
        L26b:
            int r3 = r11.length
            if (r2 >= r3) goto L27a
            r3 = r11[r2]
            r9 = r6[r2]
            if (r3 == r9) goto L277
            r15.failWithError(r7, r0)
        L277:
            int r2 = r2 + 1
            goto L26b
        L27a:
            java.math.BigInteger r0 = new java.math.BigInteger
            r0.<init>(r5, r4)
            java.math.BigInteger r2 = new java.math.BigInteger
            r2.<init>(r5, r8)
            java.math.BigInteger r3 = new java.math.BigInteger
            r3.<init>(r5, r10)
            java.math.BigInteger r4 = new java.math.BigInteger
            int r6 = r0.bitLength()
            int r6 = r6 - r5
            java.security.SecureRandom r7 = r15.random
            r4.<init>(r6, r7)
            java.math.BigInteger r2 = r2.modPow(r4, r0)
            r15.Yc = r2
            java.math.BigInteger r0 = r3.modPow(r4, r0)
            byte[] r0 = org.bouncycastle.util.BigIntegers.asUnsignedByteArray(r0)
            r15.pms = r0
            r15.connection_state = r1
            goto L1ab
        L2a9:
            short r1 = r15.connection_state
            if (r1 == r7) goto L2af
            goto L1b4
        L2af:
            org.bouncycastle.crypto.tls.Certificate r1 = org.bouncycastle.crypto.tls.Certificate.parse(r0)
            r15.assertEmpty(r0)
            org.bouncycastle.crypto.tls.CertificateVerifyer r0 = r15.verifyer
            org.bouncycastle.asn1.x509.X509CertificateStructure[] r3 = r1.getCerts()
            boolean r0 = r0.isValid(r3)
            if (r0 != 0) goto L2c7
            r0 = 90
            r15.failWithError(r7, r0)
        L2c7:
            org.bouncycastle.asn1.x509.X509CertificateStructure[] r0 = r1.certs     // Catch: java.lang.Exception -> L2dc
            r0 = r0[r2]     // Catch: java.lang.Exception -> L2dc
            org.bouncycastle.asn1.x509.TBSCertificateStructure r0 = r0.getTBSCertificate()     // Catch: java.lang.Exception -> L2dc
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r0 = r0.getSubjectPublicKeyInfo()     // Catch: java.lang.Exception -> L2dc
            org.bouncycastle.asn1.DERObject r0 = r0.getPublicKey()     // Catch: java.lang.Exception -> L2dc
            org.bouncycastle.asn1.x509.RSAPublicKeyStructure r11 = org.bouncycastle.asn1.x509.RSAPublicKeyStructure.getInstance(r0)     // Catch: java.lang.Exception -> L2dc
            goto L2e1
        L2dc:
            r0 = 43
            r15.failWithError(r7, r0)
        L2e1:
            org.bouncycastle.crypto.params.RSAKeyParameters r0 = new org.bouncycastle.crypto.params.RSAKeyParameters
            java.math.BigInteger r1 = r11.getModulus()
            java.math.BigInteger r3 = r11.getPublicExponent()
            r0.<init>(r2, r1, r3)
            r15.serverRsaKey = r0
            r15.connection_state = r13
            goto L1ab
        L2f4:
            short r1 = r15.connection_state
            if (r1 == r3) goto L2fa
            goto L1b4
        L2fa:
            byte[] r1 = new byte[r10]
            org.bouncycastle.crypto.tls.TlsUtils.readFully(r1, r0)
            r15.assertEmpty(r0)
            byte[] r0 = new byte[r10]
            byte[] r3 = new byte[r8]
            org.bouncycastle.crypto.tls.RecordStream r4 = r15.rs
            org.bouncycastle.crypto.tls.CombinedHash r4 = r4.hash2
            r4.doFinal(r3, r2)
            byte[] r4 = r15.ms
            java.lang.String r6 = "server finished"
            byte[] r6 = org.bouncycastle.crypto.tls.TlsUtils.toByteArray(r6)
            org.bouncycastle.crypto.tls.TlsUtils.PRF(r4, r6, r3, r0)
        L318:
            if (r2 >= r10) goto L326
            r3 = r1[r2]
            r4 = r0[r2]
            if (r3 == r4) goto L323
            r15.failWithError(r7, r9)
        L323:
            int r2 = r2 + 1
            goto L318
        L326:
            r0 = 11
            r15.connection_state = r0
            r15.appDataReady = r5
            goto L1ab
        L32e:
            short r1 = r15.connection_state
            if (r1 == r5) goto L334
            goto L1b4
        L334:
            org.bouncycastle.crypto.tls.TlsUtils.checkVersion(r0, r15)
            r1 = 32
            byte[] r1 = new byte[r1]
            r15.serverRandom = r1
            org.bouncycastle.crypto.tls.TlsUtils.readFully(r1, r0)
            short r1 = org.bouncycastle.crypto.tls.TlsUtils.readUint8(r0)
            byte[] r1 = new byte[r1]
            org.bouncycastle.crypto.tls.TlsUtils.readFully(r1, r0)
            int r1 = org.bouncycastle.crypto.tls.TlsUtils.readUint16(r0)
            org.bouncycastle.crypto.tls.TlsCipherSuite r1 = org.bouncycastle.crypto.tls.TlsCipherSuiteManager.getCipherSuite(r1, r15)
            r15.choosenCipherSuite = r1
            short r1 = org.bouncycastle.crypto.tls.TlsUtils.readUint8(r0)
            if (r1 == 0) goto L35e
            r1 = 47
            r15.failWithError(r7, r1)
        L35e:
            r15.assertEmpty(r0)
            r15.connection_state = r7
            goto L1ab
        L365:
            if (r2 != 0) goto L0
            return
    }

    private void sendClientCertificate() throws java.io.IOException {
            r5 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            r1 = 11
            org.bouncycastle.crypto.tls.TlsUtils.writeUint8(r1, r0)
            r1 = 3
            org.bouncycastle.crypto.tls.TlsUtils.writeUint24(r1, r0)
            r1 = 0
            org.bouncycastle.crypto.tls.TlsUtils.writeUint24(r1, r0)
            byte[] r0 = r0.toByteArray()
            org.bouncycastle.crypto.tls.RecordStream r2 = r5.rs
            int r3 = r0.length
            r4 = 22
            r2.writeMessage(r4, r0, r1, r3)
            return
    }

    protected void assertEmpty(java.io.ByteArrayInputStream r2) throws java.io.IOException {
            r1 = this;
            int r2 = r2.available()
            if (r2 <= 0) goto Lc
            r2 = 2
            r0 = 50
            r1.failWithError(r2, r0)
        Lc:
            return
    }

    public void close() throws java.io.IOException {
            r2 = this;
            boolean r0 = r2.closed
            if (r0 != 0) goto L9
            r0 = 1
            r1 = 0
            r2.failWithError(r0, r1)
        L9:
            return
    }

    public void connect(org.bouncycastle.crypto.tls.CertificateVerifyer r6) throws java.io.IOException {
            r5 = this;
            r5.verifyer = r6
            r6 = 32
            byte[] r6 = new byte[r6]
            r5.clientRandom = r6
            long r0 = java.lang.System.currentTimeMillis()
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 / r2
            int r6 = (int) r0
            byte[] r0 = r5.clientRandom
            int r1 = r6 >> 24
            byte r1 = (byte) r1
            r2 = 0
            r0[r2] = r1
            int r1 = r6 >> 16
            byte r1 = (byte) r1
            r3 = 1
            r0[r3] = r1
            int r1 = r6 >> 8
            byte r1 = (byte) r1
            r4 = 2
            r0[r4] = r1
            byte r6 = (byte) r6
            r1 = 3
            r0[r1] = r6
            r6 = 4
        L29:
            byte[] r0 = r5.clientRandom
            int r1 = r0.length
            if (r6 >= r1) goto L3a
            java.security.SecureRandom r1 = r5.random
            int r1 = r1.nextInt()
            byte r1 = (byte) r1
            r0[r6] = r1
            int r6 = r6 + 1
            goto L29
        L3a:
            java.io.ByteArrayOutputStream r6 = new java.io.ByteArrayOutputStream
            r6.<init>()
            org.bouncycastle.crypto.tls.TlsUtils.writeVersion(r6)
            byte[] r0 = r5.clientRandom
            r6.write(r0)
            org.bouncycastle.crypto.tls.TlsUtils.writeUint8(r2, r6)
            org.bouncycastle.crypto.tls.TlsCipherSuiteManager.writeCipherSuites(r6)
            byte[] r0 = new byte[r3]
            r0[r2] = r2
            short r1 = (short) r3
            org.bouncycastle.crypto.tls.TlsUtils.writeUint8(r1, r6)
            r6.write(r0)
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            org.bouncycastle.crypto.tls.TlsUtils.writeUint8(r3, r0)
            int r1 = r6.size()
            org.bouncycastle.crypto.tls.TlsUtils.writeUint24(r1, r0)
            byte[] r6 = r6.toByteArray()
            r0.write(r6)
            byte[] r6 = r0.toByteArray()
            org.bouncycastle.crypto.tls.RecordStream r0 = r5.rs
            r1 = 22
            int r4 = r6.length
            r0.writeMessage(r1, r6, r2, r4)
            r5.connection_state = r3
        L7c:
            short r6 = r5.connection_state
            r0 = 11
            if (r6 == r0) goto L88
            org.bouncycastle.crypto.tls.RecordStream r6 = r5.rs
            r6.readData()
            goto L7c
        L88:
            org.bouncycastle.crypto.tls.TlsInputStream r6 = new org.bouncycastle.crypto.tls.TlsInputStream
            r6.<init>(r5)
            r5.tlsInputStream = r6
            org.bouncycastle.crypto.tls.TlsOuputStream r6 = new org.bouncycastle.crypto.tls.TlsOuputStream
            r6.<init>(r5)
            r5.tlsOutputStream = r6
            return
    }

    protected void failWithError(short r6, short r7) throws java.io.IOException {
            r5 = this;
            boolean r0 = r5.closed
            java.lang.String r1 = "Internal TLS error, this could be an attack"
            if (r0 != 0) goto L2c
            r0 = 2
            byte[] r2 = new byte[r0]
            byte r3 = (byte) r6
            r4 = 0
            r2[r4] = r3
            byte r7 = (byte) r7
            r3 = 1
            r2[r3] = r7
            r5.closed = r3
            if (r6 != r0) goto L17
            r5.failedWithError = r3
        L17:
            org.bouncycastle.crypto.tls.RecordStream r7 = r5.rs
            r3 = 21
            r7.writeMessage(r3, r2, r4, r0)
            org.bouncycastle.crypto.tls.RecordStream r7 = r5.rs
            r7.close()
            if (r6 == r0) goto L26
            return
        L26:
            java.io.IOException r6 = new java.io.IOException
            r6.<init>(r1)
            throw r6
        L2c:
            java.io.IOException r6 = new java.io.IOException
            r6.<init>(r1)
            throw r6
    }

    protected void flush() throws java.io.IOException {
            r1 = this;
            org.bouncycastle.crypto.tls.RecordStream r0 = r1.rs
            r0.flush()
            return
    }

    public java.io.InputStream getInputStream() {
            r1 = this;
            org.bouncycastle.crypto.tls.TlsInputStream r0 = r1.tlsInputStream
            return r0
    }

    public java.io.OutputStream getOutputStream() {
            r1 = this;
            org.bouncycastle.crypto.tls.TlsOuputStream r0 = r1.tlsOutputStream
            return r0
    }

    public org.bouncycastle.crypto.tls.TlsInputStream getTlsInputStream() {
            r1 = this;
            org.bouncycastle.crypto.tls.TlsInputStream r0 = r1.tlsInputStream
            return r0
    }

    public org.bouncycastle.crypto.tls.TlsOuputStream getTlsOuputStream() {
            r1 = this;
            org.bouncycastle.crypto.tls.TlsOuputStream r0 = r1.tlsOutputStream
            return r0
    }

    protected void processData(short r2, byte[] r3, int r4, int r5) throws java.io.IOException {
            r1 = this;
            switch(r2) {
                case 20: goto L29;
                case 21: goto L20;
                case 22: goto L17;
                case 23: goto L4;
                default: goto L3;
            }
        L3:
            goto L31
        L4:
            boolean r2 = r1.appDataReady
            if (r2 != 0) goto Le
            r2 = 2
            r0 = 10
            r1.failWithError(r2, r0)
        Le:
            org.bouncycastle.crypto.tls.ByteQueue r2 = r1.applicationDataQueue
            r2.addData(r3, r4, r5)
            r1.processApplicationData()
            goto L31
        L17:
            org.bouncycastle.crypto.tls.ByteQueue r2 = r1.handshakeQueue
            r2.addData(r3, r4, r5)
            r1.processHandshake()
            goto L31
        L20:
            org.bouncycastle.crypto.tls.ByteQueue r2 = r1.alertQueue
            r2.addData(r3, r4, r5)
            r1.processAlert()
            goto L31
        L29:
            org.bouncycastle.crypto.tls.ByteQueue r2 = r1.changeCipherSpecQueue
            r2.addData(r3, r4, r5)
            r1.processChangeCipherSpec()
        L31:
            return
    }

    protected int readApplicationData(byte[] r4, int r5, int r6) throws java.io.IOException {
            r3 = this;
        L0:
            org.bouncycastle.crypto.tls.ByteQueue r0 = r3.applicationDataQueue
            int r0 = r0.size()
            if (r0 != 0) goto L35
            boolean r0 = r3.failedWithError
            if (r0 != 0) goto L2d
            boolean r0 = r3.closed
            if (r0 == 0) goto L12
            r4 = -1
            return r4
        L12:
            r0 = 80
            r1 = 2
            org.bouncycastle.crypto.tls.RecordStream r2 = r3.rs     // Catch: java.lang.RuntimeException -> L1b java.io.IOException -> L24
            r2.readData()     // Catch: java.lang.RuntimeException -> L1b java.io.IOException -> L24
            goto L0
        L1b:
            r4 = move-exception
            boolean r5 = r3.closed
            if (r5 != 0) goto L23
            r3.failWithError(r1, r0)
        L23:
            throw r4
        L24:
            r4 = move-exception
            boolean r5 = r3.closed
            if (r5 != 0) goto L2c
            r3.failWithError(r1, r0)
        L2c:
            throw r4
        L2d:
            java.io.IOException r4 = new java.io.IOException
            java.lang.String r5 = "Internal TLS error, this could be an attack"
            r4.<init>(r5)
            throw r4
        L35:
            org.bouncycastle.crypto.tls.ByteQueue r0 = r3.applicationDataQueue
            int r0 = r0.size()
            int r6 = java.lang.Math.min(r6, r0)
            org.bouncycastle.crypto.tls.ByteQueue r0 = r3.applicationDataQueue
            r1 = 0
            r0.read(r4, r5, r6, r1)
            org.bouncycastle.crypto.tls.ByteQueue r4 = r3.applicationDataQueue
            r4.removeData(r6)
            return r6
    }

    protected void writeData(byte[] r6, int r7, int r8) throws java.io.IOException {
            r5 = this;
            boolean r0 = r5.failedWithError
            if (r0 != 0) goto L3f
            boolean r0 = r5.closed
            if (r0 != 0) goto L37
            org.bouncycastle.crypto.tls.RecordStream r0 = r5.rs
            byte[] r1 = org.bouncycastle.crypto.tls.TlsProtocolHandler.emptybuf
            r2 = 0
            r3 = 23
            r0.writeMessage(r3, r1, r2, r2)
        L12:
            r0 = 16384(0x4000, float:2.2959E-41)
            int r0 = java.lang.Math.min(r8, r0)
            r1 = 80
            r2 = 2
            org.bouncycastle.crypto.tls.RecordStream r4 = r5.rs     // Catch: java.lang.RuntimeException -> L25 java.io.IOException -> L2e
            r4.writeMessage(r3, r6, r7, r0)     // Catch: java.lang.RuntimeException -> L25 java.io.IOException -> L2e
            int r7 = r7 + r0
            int r8 = r8 - r0
            if (r8 > 0) goto L12
            return
        L25:
            r6 = move-exception
            boolean r7 = r5.closed
            if (r7 != 0) goto L2d
            r5.failWithError(r2, r1)
        L2d:
            throw r6
        L2e:
            r6 = move-exception
            boolean r7 = r5.closed
            if (r7 != 0) goto L36
            r5.failWithError(r2, r1)
        L36:
            throw r6
        L37:
            java.io.IOException r6 = new java.io.IOException
            java.lang.String r7 = "Sorry, connection has been closed, you cannot write more data"
            r6.<init>(r7)
            throw r6
        L3f:
            java.io.IOException r6 = new java.io.IOException
            java.lang.String r7 = "Internal TLS error, this could be an attack"
            r6.<init>(r7)
            throw r6
    }
}
