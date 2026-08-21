package org.bouncycastle.crypto.tls;

import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.math.BigInteger;
import java.security.SecureRandom;
import org.bouncycastle.crypto.params.RSAKeyParameters;
import org.bouncycastle.crypto.prng.ThreadedSeedGenerator;

/* JADX INFO: loaded from: classes4.dex */
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
        To view partially-correct add '--show-bad-code' argument
    */
    private void processHandshake() throws java.io.IOException {
        /*
            Method dump skipped, instruction units count: 884
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: org.bouncycastle.crypto.tls.TlsProtocolHandler.processHandshake():void");
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
