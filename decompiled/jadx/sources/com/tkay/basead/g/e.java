package com.tkay.basead.g;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.core.api.AdError;
import com.tkay.core.common.f.j;
import com.tkay.core.common.f.z;
import com.tkay.core.common.t;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class e extends com.tkay.core.common.h.a {
    private static String f = e.class.getSimpleName();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    int f5700a;
    String b;
    z c;
    Map<String, Object> d;
    boolean e = false;

    @Override // com.tkay.core.common.h.a
    protected final int a() {
        return 2;
    }

    @Override // com.tkay.core.common.h.a
    protected final Object a(String str) {
        return null;
    }

    @Override // com.tkay.core.common.h.a
    protected final void a(AdError adError) {
    }

    @Override // com.tkay.core.common.h.a
    protected final boolean a(int i) {
        return false;
    }

    @Override // com.tkay.core.common.h.a
    protected final void b(AdError adError) {
    }

    @Override // com.tkay.core.common.h.a
    protected final byte[] d() {
        return new byte[0];
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

    public e(int i, String str, z zVar, Map<String, Object> map) {
        this.f5700a = i;
        this.b = str;
        this.c = zVar;
        this.d = map;
    }

    public final void a(boolean z) {
        this.e = z;
    }

    @Override // com.tkay.core.common.h.a
    protected final String b() {
        if (this.d != null && !TextUtils.isEmpty(this.b)) {
            try {
                for (Map.Entry<String, Object> entry : this.d.entrySet()) {
                    String key = entry.getKey();
                    this.b = this.b.replaceAll("\\{" + key + "\\}", (String) entry.getValue());
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        return this.b;
    }

    @Override // com.tkay.core.common.h.a
    protected final Map<String, String> c() {
        if (this.c == null) {
            return null;
        }
        HashMap map = new HashMap();
        j jVarK = this.c.k();
        if (jVarK != null && com.tkay.basead.a.b.a(this.f5700a, jVarK)) {
            String strI = com.tkay.core.common.l.d.i();
            if (!TextUtils.isEmpty(strI)) {
                map.put("User-Agent", strI);
            }
        }
        return map;
    }

    @Override // com.tkay.core.common.h.a
    protected final void b(int i) {
        String string;
        if (this.e) {
            new StringBuilder("handleErrorStatusCode, start to check, url: ").append(this.b);
            t.a();
            if (t.a(i)) {
                try {
                    string = new JSONObject((Map<String, Object>) c()).toString();
                } catch (Throwable unused) {
                    string = new JSONObject().toString();
                }
                t.a().a(this.o, string, this.c.O());
            }
        }
    }

    private void p() {
        String string;
        try {
            string = new JSONObject((Map<String, Object>) c()).toString();
        } catch (Throwable unused) {
            string = new JSONObject().toString();
        }
        t.a().a(this.o, string, this.c.O());
    }
}
