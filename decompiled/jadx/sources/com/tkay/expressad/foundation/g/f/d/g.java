package com.tkay.expressad.foundation.g.f.d;

import com.tkay.expressad.foundation.g.f.i;
import com.tkay.expressad.foundation.g.f.k;
import java.io.UnsupportedEncodingException;

/* JADX INFO: loaded from: classes3.dex */
public class g extends i<String> {
    private static final String c = g.class.getSimpleName();
    private String d;

    public g(int i, String str, String str2, com.tkay.expressad.foundation.g.f.e<String> eVar) {
        super(i, str, eVar);
        this.d = str2;
    }

    @Override // com.tkay.expressad.foundation.g.f.i
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

    @Override // com.tkay.expressad.foundation.g.f.i
    protected final k<String> a(com.tkay.expressad.foundation.g.f.f.c cVar) {
        try {
            return k.a(new String(cVar.b, com.tkay.expressad.foundation.g.f.g.e.a(cVar.d)), cVar);
        } catch (UnsupportedEncodingException e) {
            e.getMessage();
            return k.a(new com.tkay.expressad.foundation.g.f.a.a(8, cVar));
        }
    }
}
