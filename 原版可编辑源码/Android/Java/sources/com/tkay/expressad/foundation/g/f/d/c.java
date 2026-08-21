package com.tkay.expressad.foundation.g.f.d;

import com.tkay.expressad.foundation.g.f.k;
import java.io.UnsupportedEncodingException;
import org.json.JSONArray;
import org.json.JSONException;

public class c extends e<JSONArray> {
    private static final String c = c.class.getSimpleName();

    public c(int i, String str, String str2, com.tkay.expressad.foundation.g.f.e<JSONArray> eVar) {
        super(i, str, str2, eVar);
    }

    @Override
    protected final k<JSONArray> a(com.tkay.expressad.foundation.g.f.f.c cVar) {
        try {
            return k.a(new JSONArray(new String(cVar.b, com.tkay.expressad.foundation.g.f.g.e.a(cVar.d))), cVar);
        } catch (UnsupportedEncodingException e) {
            e.getMessage();
            return k.a(new com.tkay.expressad.foundation.g.f.a.a(8, cVar));
        } catch (JSONException e2) {
            e2.getMessage();
            return k.a(new com.tkay.expressad.foundation.g.f.a.a(8, cVar));
        }
    }
}
