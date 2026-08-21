package com.tkay.expressad.foundation.g.f.d;

import com.tkay.expressad.foundation.g.f.k;
import java.io.UnsupportedEncodingException;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class d extends e<JSONObject> {
    private static final String c = d.class.getSimpleName();

    public d(int i, String str, String str2, com.tkay.expressad.foundation.g.f.e<JSONObject> eVar) {
        super(i, str, str2, eVar);
    }

    @Override // com.tkay.expressad.foundation.g.f.i
    protected final k<JSONObject> a(com.tkay.expressad.foundation.g.f.f.c cVar) {
        try {
            String str = new String(cVar.b, com.tkay.expressad.foundation.g.f.g.e.a(cVar.d));
            if (cVar.f6914a == 204) {
                return k.a(new JSONObject(), cVar);
            }
            return k.a(new JSONObject(str), cVar);
        } catch (UnsupportedEncodingException e) {
            e.getMessage();
            return k.a(new com.tkay.expressad.foundation.g.f.a.a(8, cVar));
        } catch (JSONException e2) {
            e2.getMessage();
            return k.a(new com.tkay.expressad.foundation.g.f.a.a(8, cVar));
        }
    }
}
