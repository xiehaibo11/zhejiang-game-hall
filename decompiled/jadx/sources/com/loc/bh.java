package com.loc;

import java.io.IOException;
import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;
import java.security.cert.CertificateException;
import java.security.spec.InvalidKeySpecException;
import javax.crypto.BadPaddingException;
import javax.crypto.IllegalBlockSizeException;
import javax.crypto.NoSuchPaddingException;

/* JADX INFO: compiled from: EncryptProcessor.java */
/* JADX INFO: loaded from: classes2.dex */
public abstract class bh {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    bh f2861a;

    bh() {
    }

    bh(bh bhVar) {
        this.f2861a = bhVar;
    }

    protected abstract byte[] a(byte[] bArr) throws BadPaddingException, NoSuchPaddingException, InvalidKeySpecException, IllegalBlockSizeException, NoSuchAlgorithmException, IOException, InvalidKeyException, CertificateException;

    public final byte[] b(byte[] bArr) throws BadPaddingException, NoSuchPaddingException, InvalidKeySpecException, IllegalBlockSizeException, NoSuchAlgorithmException, IOException, InvalidKeyException, CertificateException {
        bh bhVar = this.f2861a;
        if (bhVar != null) {
            bArr = bhVar.b(bArr);
        }
        return a(bArr);
    }
}
