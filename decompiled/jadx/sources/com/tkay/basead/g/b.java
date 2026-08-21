package com.tkay.basead.g;

import android.content.Context;
import android.net.Uri;
import android.text.TextUtils;
import com.tkay.core.api.AdError;
import com.tkay.core.common.f.n;
import com.tkay.core.common.f.r;
import com.tkay.core.common.u;
import java.net.URLEncoder;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class b extends com.tkay.core.common.h.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f5697a;
    JSONObject b;

    @Override // com.tkay.core.common.h.a
    protected final int a() {
        return 1;
    }

    @Override // com.tkay.core.common.h.a
    protected final Object a(String str) {
        return null;
    }

    @Override // com.tkay.core.common.h.a
    protected final boolean a(int i) {
        return false;
    }

    @Override // com.tkay.core.common.h.a
    protected final void b(AdError adError) {
    }

    @Override // com.tkay.core.common.h.a
    protected final String g() {
        return "";
    }

    @Override // com.tkay.core.common.h.a
    protected final String h() {
        return null;
    }

    @Override // com.tkay.core.common.h.a
    protected final Context i() {
        return null;
    }

    @Override // com.tkay.core.common.h.a
    protected final String j() {
        return null;
    }

    @Override // com.tkay.core.common.h.a
    protected final String k() {
        return null;
    }

    @Override // com.tkay.core.common.h.a
    protected final Map<String, Object> l() {
        return null;
    }

    public b(int i, r rVar, String str) {
        String strQ = "";
        try {
            switch (i) {
                case 1:
                    strQ = rVar.Q();
                    break;
                case 2:
                    strQ = rVar.R();
                    break;
                case 3:
                    strQ = rVar.S();
                    break;
                case 4:
                    strQ = rVar.T();
                    break;
                case 5:
                    strQ = rVar.U();
                    break;
                case 6:
                    strQ = rVar.V();
                    break;
                case 7:
                    strQ = rVar.W();
                    break;
                case 8:
                    strQ = rVar.X();
                    break;
                case 9:
                    strQ = rVar.Y();
                    break;
            }
            Uri uri = Uri.parse(rVar.R(strQ));
            this.f5697a = uri.getScheme() + "://" + uri.getAuthority() + uri.getPath();
            this.b = new JSONObject();
            for (String str2 : uri.getQueryParameterNames()) {
                this.b.put(str2, URLEncoder.encode(uri.getQueryParameter(str2)));
            }
            this.b.put("req_id", str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public final void b(String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            this.b.put("scenario", str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override // com.tkay.core.common.h.a
    protected final String b() {
        return this.f5697a;
    }

    @Override // com.tkay.core.common.h.a
    protected final Map<String, String> c() {
        HashMap map = new HashMap();
        map.put("Content-Encoding", "gzip");
        map.put("Content-Type", "application/json;charset=utf-8");
        return map;
    }

    @Override // com.tkay.core.common.h.a
    protected final byte[] d() {
        JSONObject jSONObject = this.b;
        if (jSONObject == null) {
            return new byte[0];
        }
        try {
            jSONObject.put("t", String.valueOf(System.currentTimeMillis()));
        } catch (Exception unused) {
        }
        return c(this.b.toString());
    }

    @Override // com.tkay.core.common.h.a
    protected final void a(AdError adError) {
        JSONObject jSONObject = new JSONObject();
        Map<String, String> mapC = c();
        if (mapC != null) {
            try {
                for (String str : mapC.keySet()) {
                    jSONObject.put(str, mapC.get(str));
                }
            } catch (Exception unused) {
            }
        }
        String string = jSONObject.toString();
        JSONObject jSONObject2 = this.b;
        String string2 = jSONObject2 != null ? jSONObject2.toString() : "";
        u.a().a(1, b(), string, string2, n.a(1000));
        com.tkay.core.common.k.c.a("tk", adError.getPlatformCode(), adError.getPlatformMSG(), this.f5697a, "", "1", "");
    }
}
