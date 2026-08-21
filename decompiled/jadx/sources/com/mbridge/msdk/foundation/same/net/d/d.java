package com.mbridge.msdk.foundation.same.net.d;

import com.mbridge.msdk.foundation.same.net.k;
import com.mbridge.msdk.foundation.tools.z;
import java.io.UnsupportedEncodingException;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: JsonObjectRequest.java */
/* JADX INFO: loaded from: classes2.dex */
public class d extends e<JSONObject> {
    private static final String c = d.class.getSimpleName();

    public d(int i, String str, String str2, com.mbridge.msdk.foundation.same.net.e<JSONObject> eVar) {
        super(i, str, str2, eVar);
    }

    @Override // com.mbridge.msdk.foundation.same.net.i
    protected final k<JSONObject> a(com.mbridge.msdk.foundation.same.net.e.c cVar) {
        try {
            String str = new String(cVar.b, com.mbridge.msdk.foundation.same.net.f.b.a(cVar.d));
            if (cVar.f3448a == 204) {
                return k.a(new JSONObject(), cVar);
            }
            return k.a(new JSONObject(str), cVar);
        } catch (UnsupportedEncodingException e) {
            z.d(c, e.getMessage());
            return k.a(new com.mbridge.msdk.foundation.same.net.a.a(8, cVar));
        } catch (JSONException e2) {
            z.d(c, e2.getMessage());
            return k.a(new com.mbridge.msdk.foundation.same.net.a.a(8, cVar));
        }
    }
}
