package com.tkay.core.common.h;

import android.content.Context;
import com.huawei.hms.framework.common.ContainerUtils;
import com.tkay.core.api.AdError;
import java.io.UnsupportedEncodingException;
import java.net.URLEncoder;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONObject;

public final class e extends a {
    @Override
    protected final int a() {
        return 1;
    }

    @Override
    protected final Object a(String str) {
        return str;
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
    protected final Context i() {
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
        com.tkay.core.common.i.a();
        return com.tkay.core.common.i.e();
    }

    @Override
    protected final Map<String, String> c() {
        HashMap map = new HashMap();
        map.put("Content-Encoding", "gzip");
        map.put("Content-Type", "application/json;charset=utf-8");
        return map;
    }

    @Override
    protected final byte[] d() {
        try {
            return g().getBytes("utf-8");
        } catch (Exception unused) {
            return g().getBytes();
        }
    }

    @Override
    protected final JSONObject e() {
        JSONObject jSONObjectE = super.e();
        try {
            jSONObjectE.put("app_id", com.tkay.core.common.b.m.a().o());
            jSONObjectE.put("curr_ts", System.currentTimeMillis());
        } catch (Exception unused) {
        }
        return jSONObjectE;
    }

    @Override
    protected final String g() {
        HashMap map = new HashMap();
        String strA = com.tkay.core.common.l.c.a(e().toString());
        map.put(c.O, "1.0");
        map.put("p", strA);
        ArrayList<String> arrayList = new ArrayList(map.size());
        arrayList.addAll(map.keySet());
        Collections.sort(arrayList);
        StringBuilder sb = new StringBuilder();
        for (String str : arrayList) {
            if (sb.length() > 0) {
                sb.append("&");
            }
            sb.append(str);
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(map.get(str));
        }
        try {
            map.put("sign", URLEncoder.encode(com.tkay.core.common.l.f.c(com.tkay.core.common.b.m.a().p() + sb.toString()), "utf-8"));
        } catch (UnsupportedEncodingException e) {
            e.printStackTrace();
        }
        return new JSONObject((Map<String, Object>) map).toString();
    }

    @Override
    protected final String h() {
        return com.tkay.core.common.b.m.a().o();
    }

    @Override
    protected final String j() {
        return com.tkay.core.common.b.m.a().p();
    }
}
