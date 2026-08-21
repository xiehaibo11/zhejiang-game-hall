package org.bouncycastle.crypto.io;

import java.io.FilterOutputStream;
import java.io.IOException;
import java.io.OutputStream;
import org.bouncycastle.crypto.Mac;

public class MacOutputStream extends FilterOutputStream {
    protected Mac mac;

    public MacOutputStream(OutputStream outputStream, Mac mac) {
        super(outputStream);
        this.mac = mac;
    }

    public Mac getMac() {
        return this.mac;
    }

    @Override
    public void write(int i) throws IOException {
        this.mac.update((byte) i);
        this.out.write(i);
    }

    @Override
    public void write(byte[] bArr, int i, int i2) throws IOException {
        this.mac.update(bArr, i, i2);
        this.out.write(bArr, i, i2);
    }
}
