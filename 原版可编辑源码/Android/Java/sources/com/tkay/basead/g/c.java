package com.tkay.basead.g;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.core.api.AdError;
import java.util.HashMap;
import java.util.Map;

public final class c extends com.tkay.core.common.h.a {
    String a;
    boolean b;

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

    public c(String str, String str2, boolean z) {
        this.b = false;
        this.b = z;
        this.a = str.replaceAll("\\{req_id\\}", str2 == null ? "" : str2);
    }

    @Override
    protected final String b() {
        return this.a;
    }

    @Override
    protected final Map<String, String> c() {
        if (!this.b) {
            return null;
        }
        HashMap map = new HashMap();
        String strI = com.tkay.core.common.l.d.i();
        if (!TextUtils.isEmpty(strI)) {
            map.put("User-Agent", strI);
        }
        return map;
    }
}
