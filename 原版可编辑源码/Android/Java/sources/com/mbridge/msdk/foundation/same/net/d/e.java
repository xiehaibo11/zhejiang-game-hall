package com.mbridge.msdk.foundation.same.net.d;

import com.mbridge.msdk.foundation.same.net.i;
import com.mbridge.msdk.foundation.tools.z;
import java.io.UnsupportedEncodingException;

public abstract class e<T> extends i<T> {
    private static final String c = e.class.getSimpleName();
    private final String d;

    public e(int i, String str, String str2, com.mbridge.msdk.foundation.same.net.e<T> eVar) {
        super(i, str, eVar);
        this.d = str2;
    }

    @Override
    public final byte[] e() {
        try {
            if (this.d == null) {
                return null;
            }
            return this.d.getBytes("utf-8");
        } catch (UnsupportedEncodingException unused) {
            z.d(c, "Unsupported Encoding while trying to get the bytes of " + this.d + " using utf-8");
            return null;
        }
    }
}
