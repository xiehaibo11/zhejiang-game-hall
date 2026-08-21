package com.loc;

/* JADX INFO: compiled from: ADDNumEncryptProcessor.java */
/* JADX INFO: loaded from: classes2.dex */
public final class bf extends bh {
    bf() {
    }

    public bf(bh bhVar) {
        super(bhVar);
    }

    @Override // com.loc.bh
    protected final byte[] a(byte[] bArr) {
        return x.a(x.a(bArr) + "||1");
    }
}
