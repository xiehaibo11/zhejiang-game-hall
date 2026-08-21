package com.igexin.push.d.c;

public class h extends c {
    public byte a;
    public byte b;

    public h() {
        this.i = 97;
    }

    @Override
    public void a(byte[] bArr) {
        this.a = bArr[0];
        this.b = bArr[1];
    }

    @Override
    public byte[] c() {
        return new byte[]{this.a, this.b};
    }
}
