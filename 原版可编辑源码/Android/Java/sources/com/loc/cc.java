package com.loc;

import java.io.ByteArrayOutputStream;
import java.io.IOException;

public final class cc extends ci {
    ByteArrayOutputStream a;

    public cc() {
        this.a = new ByteArrayOutputStream();
    }

    public cc(ci ciVar) {
        super(ciVar);
        this.a = new ByteArrayOutputStream();
    }

    @Override
    protected final byte[] a(byte[] bArr) {
        byte[] byteArray = this.a.toByteArray();
        try {
            this.a.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
        this.a = new ByteArrayOutputStream();
        return byteArray;
    }

    @Override
    public final void b(byte[] bArr) {
        try {
            this.a.write(bArr);
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }
}
