package com.loc;

import java.io.IOException;
import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;
import java.security.cert.CertificateException;
import java.security.spec.InvalidKeySpecException;
import javax.crypto.BadPaddingException;
import javax.crypto.IllegalBlockSizeException;
import javax.crypto.NoSuchPaddingException;

/* JADX INFO: compiled from: EncryptRsaDataStrategy.java */
/* JADX INFO: loaded from: classes2.dex */
public final class cd extends ci {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private bh f2901a;

    public cd() {
        this.f2901a = new bj();
    }

    public cd(ci ciVar) {
        super(ciVar);
        this.f2901a = new bj();
    }

    @Override // com.loc.ci
    protected final byte[] a(byte[] bArr) throws BadPaddingException, NoSuchPaddingException, InvalidKeySpecException, IllegalBlockSizeException, NoSuchAlgorithmException, IOException, InvalidKeyException, CertificateException {
        return this.f2901a.b(bArr);
    }
}
