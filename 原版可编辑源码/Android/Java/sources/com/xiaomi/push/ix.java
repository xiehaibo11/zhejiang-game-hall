package com.xiaomi.push;

import java.io.ByteArrayOutputStream;

public class ix extends ByteArrayOutputStream {
    public ix() {
    }

    public ix(int i) {
        super(i);
    }

    public int a() {
        return this.count;
    }

    public byte[] a() {
        return this.buf;
    }
}
