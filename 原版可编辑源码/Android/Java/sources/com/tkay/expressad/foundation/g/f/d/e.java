package com.tkay.expressad.foundation.g.f.d;

import com.tkay.expressad.foundation.g.f.i;
import java.io.UnsupportedEncodingException;

public abstract class e<T> extends i<T> {
    private static final String c = e.class.getSimpleName();
    private final String d;

    public e(int i, String str, String str2, com.tkay.expressad.foundation.g.f.e<T> eVar) {
        super(i, str, eVar);
        this.d = str2;
    }

    @Override
    public final byte[] h() {
        try {
            if (this.d == null) {
                return null;
            }
            return this.d.getBytes("utf-8");
        } catch (UnsupportedEncodingException unused) {
            return null;
        }
    }
}
