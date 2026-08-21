package com.kwad.sdk.core.a;

import android.content.Context;
import android.text.TextUtils;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.ay;
import com.kwad.sdk.utils.p;
import java.util.Map;

public final class a implements f {
    private static String aof;

    private static String AI() {
        if (!TextUtils.isEmpty(aof)) {
            return aof;
        }
        Context context = ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getContext();
        if (context == null) {
            return "";
        }
        String str = context.getPackageName() + ay.cW(context);
        aof = str;
        return str;
    }

    @Override
    public final void a(String str, Map<String, String> map, String str2) {
        e.a(str, map, str2);
    }

    @Override
    public final String cQ(String str) throws Throwable {
        try {
            String strDb = p.db(0);
            return new String(c.AJ().encode(b.d(strDb.getBytes("UTF-8"), b.f(str.getBytes()))), "UTF-8");
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
            return str;
        }
    }

    @Override
    public final void e(Map<String, String> map) {
        map.put("Ks-PkgId", AI());
        map.put("Ks-Encoding", "2");
    }

    @Override
    public final String getResponseData(String str) {
        try {
            return new String(b.g(b.a(p.db(0), c.AL().decode(str.getBytes()))), "UTF-8");
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
            return str;
        }
    }
}
