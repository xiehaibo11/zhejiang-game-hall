package org.bouncycastle.crypto.tls;

import java.io.IOException;
import java.io.OutputStream;

public class TlsOuputStream extends OutputStream {
    private byte[] buf = new byte[1];
    private TlsProtocolHandler handler;

    TlsOuputStream(TlsProtocolHandler tlsProtocolHandler) {
        this.handler = tlsProtocolHandler;
    }

    @Override
    public void close() throws IOException {
        this.handler.close();
    }

    public void cose() throws IOException {
        this.handler.close();
    }

    @Override
    public void flush() throws IOException {
        this.handler.flush();
    }

    @Override
    public void write(int i) throws IOException {
        byte[] bArr = this.buf;
        bArr[0] = (byte) i;
        write(bArr, 0, 1);
    }

    @Override
    public void write(byte[] bArr, int i, int i2) throws IOException {
        this.handler.writeData(bArr, i, i2);
    }
}
