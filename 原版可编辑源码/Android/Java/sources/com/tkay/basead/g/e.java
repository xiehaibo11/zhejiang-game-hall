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

public class e extends com.tkay.core.common.h.a {
    private static String f = e.class.getSimpleName();
    int a;
    String b;
    z c;
    Map<String, Object> d;
    boolean e = false;

    @Override
    protected final int a() {
        return 2;
    }

    @Override
    protected final Object a(String str) {
        return null;
    }

    @Override
    protected final void a(AdError adError) {
    }

    @Override
    protected final boolean a(int i) {
        return false;
    }

    @Override
    protected final void b(AdError adError) {
    }

    @Override
    protected final byte[] d() {
        return new byte[0];
    }

    @Override
    protected final String g() {
        return "";
    }

    @Override
    protected final String h() {
        return null;
    }

    @Override
    protected final Context i() {
        return null;
    }

    @Override
    protected final String j() {
        return null;
    }

    @Override
    protected final String k() {
        return null;
    }

    @Override
    protected final Map<String, Object> l() {
        return null;
    }

    public e(int i, String str, z zVar, Map<String, Object> map) {
        this.a = i;
        this.b = str;
        this.c = zVar;
        this.d = map;
    }

    public final void a(boolean z) {
        this.e = z;
    }

    @Override
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

    @Override
    protected final Map<String, String> c() {
        if (this.c == null) {
            return null;
        }
        HashMap map = new HashMap();
        j jVarK = this.c.k();
        if (jVarK != null && com.tkay.basead.a.b.a(this.a, jVarK)) {
            String strI = com.tkay.core.common.l.d.i();
            if (!TextUtils.isEmpty(strI)) {
                map.put("User-Agent", strI);
            }
        }
        return map;
    }

    @Override
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
