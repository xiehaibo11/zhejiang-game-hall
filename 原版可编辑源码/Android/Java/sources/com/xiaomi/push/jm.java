package com.xiaomi.push;

import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;

public class jm extends jp {
    protected InputStream a;
    protected OutputStream a;

    protected jm() {
        this.a = null;
        this.a = null;
    }

    public jm(OutputStream outputStream) {
        this.a = null;
        this.a = null;
        this.a = outputStream;
    }

    @Override
    public int a(byte[] bArr, int i, int i2) throws jq {
        InputStream inputStream = this.a;
        if (inputStream == null) {
            throw new jq(1, "Cannot read from null inputStream");
        }
        try {
            int i3 = inputStream.read(bArr, i, i2);
            if (i3 >= 0) {
                return i3;
            }
            throw new jq(4);
        } catch (IOException e) {
            throw new jq(0, e);
        }
    }

    @Override
    public void a(byte[] bArr, int i, int i2) throws jq {
        OutputStream outputStream = this.a;
        if (outputStream == null) {
            throw new jq(1, "Cannot write to null outputStream");
        }
        try {
            outputStream.write(bArr, i, i2);
        } catch (IOException e) {
            throw new jq(0, e);
        }
    }
}
