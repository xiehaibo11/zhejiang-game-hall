package com.tkay.core.common.h;

import android.content.Context;
import com.tkay.core.api.AdError;
import java.util.Map;
import org.json.JSONObject;

public final class j extends a {
    @Override
    protected final int a() {
        return 2;
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
    protected final Map<String, String> c() {
        return null;
    }

    @Override
    protected final byte[] d() {
        return new byte[0];
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

    @Override
    protected final boolean n() {
        return true;
    }

    @Override
    protected final String b() {
        long jCurrentTimeMillis = System.currentTimeMillis();
        String strC = com.tkay.core.common.l.f.c(String.valueOf(jCurrentTimeMillis));
        StringBuilder sb = new StringBuilder();
        com.tkay.core.common.i.a();
        sb.append(com.tkay.core.common.i.d());
        sb.append("?t=");
        sb.append(jCurrentTimeMillis);
        sb.append("&sign=");
        sb.append(strC);
        return sb.toString();
    }

    @Override
    protected final Object a(String str) {
        try {
            return new JSONObject(str);
        } catch (Exception unused) {
            return null;
        }
    }
}
