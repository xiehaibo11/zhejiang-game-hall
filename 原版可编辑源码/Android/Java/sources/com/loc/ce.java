package com.loc;

import android.content.Context;
import android.text.TextUtils;
import java.io.IOException;
import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;
import java.security.cert.CertificateException;
import java.security.spec.InvalidKeySpecException;
import javax.crypto.BadPaddingException;
import javax.crypto.IllegalBlockSizeException;
import javax.crypto.NoSuchPaddingException;

public final class ce extends ci {
    private Context a;
    private String b;
    private bh e;
    private Object[] f;

    public ce(Context context, ci ciVar, bh bhVar, String str, Object... objArr) {
        super(ciVar);
        this.a = context;
        this.b = str;
        this.e = bhVar;
        this.f = objArr;
    }

    private String b() {
        try {
            return String.format(x.c(this.b), this.f);
        } catch (Throwable th) {
            th.printStackTrace();
            av.b(th, "ofm", "gpj");
            return "";
        }
    }

    @Override
    protected final byte[] a(byte[] bArr) throws BadPaddingException, NoSuchPaddingException, InvalidKeySpecException, IllegalBlockSizeException, NoSuchAlgorithmException, IOException, InvalidKeyException, CertificateException {
        String strA = x.a(bArr);
        if (TextUtils.isEmpty(strA)) {
            return null;
        }
        return x.a("{\"pinfo\":\"" + x.a(this.e.b(x.a(b()))) + "\",\"els\":[" + strA + "]}");
    }
}
