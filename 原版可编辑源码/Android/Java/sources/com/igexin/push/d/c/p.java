package com.igexin.push.d.c;

import kotlin.UByte;

public class p extends c {
    public int a;

    public p() {
        this.i = 20;
    }

    @Override
    public void a(byte[] bArr) {
        if (bArr.length == 1) {
            this.a = bArr[0] & UByte.MAX_VALUE;
        }
    }

    @Override
    public byte[] c() {
        return null;
    }
}
