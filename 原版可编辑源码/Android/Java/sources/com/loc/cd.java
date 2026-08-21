package com.loc;

import java.io.IOException;
import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;
import java.security.cert.CertificateException;
import java.security.spec.InvalidKeySpecException;
import javax.crypto.BadPaddingException;
import javax.crypto.IllegalBlockSizeException;
import javax.crypto.NoSuchPaddingException;

public final class cd extends ci {
    private bh a;

    public cd() {
        this.a = new bj();
    }

    public cd(ci ciVar) {
        super(ciVar);
        this.a = new bj();
    }

    @Override
    protected final byte[] a(byte[] bArr) throws BadPaddingException, NoSuchPaddingException, InvalidKeySpecException, IllegalBlockSizeException, NoSuchAlgorithmException, IOException, InvalidKeyException, CertificateException {
        return this.a.b(bArr);
    }
}
