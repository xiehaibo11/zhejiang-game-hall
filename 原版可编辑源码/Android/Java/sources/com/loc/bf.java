package com.loc;

public final class bf extends bh {
    bf() {
    }

    public bf(bh bhVar) {
        super(bhVar);
    }

    @Override
    protected final byte[] a(byte[] bArr) {
        return x.a(x.a(bArr) + "||1");
    }
}
