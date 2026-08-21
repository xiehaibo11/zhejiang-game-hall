package com.mbridge.msdk.foundation.same.net.d;

import com.mbridge.msdk.foundation.same.net.i;
import com.mbridge.msdk.foundation.same.net.k;
import com.mbridge.msdk.foundation.tools.z;
import java.io.UnsupportedEncodingException;

public class f extends i<String> {
    private static final String c = f.class.getSimpleName();
    private String d;

    public f(int i, String str, String str2, com.mbridge.msdk.foundation.same.net.e<String> eVar) {
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

    @Override
    protected final k<String> a(com.mbridge.msdk.foundation.same.net.e.c cVar) {
        try {
            return k.a(new String(cVar.b, com.mbridge.msdk.foundation.same.net.f.b.a(cVar.d)), cVar);
        } catch (UnsupportedEncodingException e) {
            z.d(c, e.getMessage());
            return k.a(new com.mbridge.msdk.foundation.same.net.a.a(8, cVar));
        }
    }
}
