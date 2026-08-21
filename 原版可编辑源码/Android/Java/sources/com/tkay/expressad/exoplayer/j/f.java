package com.tkay.expressad.exoplayer.j;

import android.net.Uri;
import android.util.Base64;
import com.tkay.expressad.exoplayer.k.af;
import com.xiaomi.mipush.sdk.Constants;
import java.net.URLDecoder;

public final class f implements h {
    public static final String a = "data";
    private k b;
    private int c;
    private byte[] d;

    @Override
    public final long a(k kVar) throws com.tkay.expressad.exoplayer.t {
        this.b = kVar;
        Uri uri = kVar.c;
        String scheme = uri.getScheme();
        if (!"data".equals(scheme)) {
            throw new com.tkay.expressad.exoplayer.t("Unsupported scheme: ".concat(String.valueOf(scheme)));
        }
        String[] strArrA = af.a(uri.getSchemeSpecificPart(), Constants.ACCEPT_TIME_SEPARATOR_SP);
        if (strArrA.length != 2) {
            throw new com.tkay.expressad.exoplayer.t("Unexpected URI format: ".concat(String.valueOf(uri)));
        }
        String str = strArrA[1];
        if (strArrA[0].contains(";base64")) {
            try {
                this.d = Base64.decode(str, 0);
            } catch (IllegalArgumentException e) {
                throw new com.tkay.expressad.exoplayer.t("Error while parsing Base64 encoded string: ".concat(String.valueOf(str)), e);
            }
        } else {
            this.d = URLDecoder.decode(str, "US-ASCII").getBytes();
        }
        return this.d.length;
    }

    @Override
    public final int a(byte[] bArr, int i, int i2) {
        if (i2 == 0) {
            return 0;
        }
        int length = this.d.length - this.c;
        if (length == 0) {
            return -1;
        }
        int iMin = Math.min(i2, length);
        System.arraycopy(this.d, this.c, bArr, i, iMin);
        this.c += iMin;
        return iMin;
    }

    @Override
    public final Uri a() {
        k kVar = this.b;
        if (kVar != null) {
            return kVar.c;
        }
        return null;
    }

    @Override
    public final void b() {
        this.b = null;
        this.d = null;
    }
}
