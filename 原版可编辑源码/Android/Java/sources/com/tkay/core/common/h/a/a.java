package com.tkay.core.common.h.a;

import android.text.TextUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.n;
import com.tkay.core.common.l.f;
import com.tkay.core.common.u;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONObject;

public final class a extends c {
    List<String> a;
    int b;
    boolean c;
    private final String k = getClass().getSimpleName();

    @Override
    public final int c() {
        return 2;
    }

    @Override
    public final int d() {
        return 3;
    }

    @Override
    public final boolean f() {
        return false;
    }

    @Override
    protected final int g() {
        return 4;
    }

    public a(List<String> list) {
        this.a = list;
        this.b = list.size();
    }

    public final void a() {
        this.c = true;
    }

    public final int b() {
        return this.b;
    }

    @Override
    public final byte[] e() {
        return a(i());
    }

    private String i() {
        JSONObject jSONObjectH = super.h();
        JSONObject jSONObjectA = com.tkay.core.common.h.c.a();
        if (jSONObjectH != null) {
            try {
                jSONObjectH.put("app_id", m.a().o());
                jSONObjectH.put("nw_ver", com.tkay.core.common.l.d.h());
                JSONArray jSONArray = new JSONArray();
                if (this.a != null && this.a.size() > 0) {
                    for (String str : this.a) {
                        if (!TextUtils.isEmpty(str)) {
                            jSONArray.put(new JSONObject(str));
                        }
                    }
                }
                jSONObjectH.put("data", jSONArray);
            } catch (Exception unused) {
            }
        }
        try {
            jSONObjectA.put(com.tkay.core.common.h.c.T, this.i);
            jSONObjectA.put(com.tkay.core.common.h.c.V, this.j);
        } catch (Exception unused2) {
        }
        HashMap map = new HashMap();
        String strA = com.tkay.core.common.l.c.a(jSONObjectH.toString());
        String strA2 = com.tkay.core.common.l.c.a(jSONObjectA.toString());
        map.put(com.tkay.core.common.h.c.O, "1.0");
        map.put("p", strA);
        map.put(com.tkay.core.common.h.c.X, strA2);
        ArrayList<String> arrayList = new ArrayList(map.size());
        arrayList.addAll(map.keySet());
        Collections.sort(arrayList);
        StringBuilder sb = new StringBuilder();
        for (String str2 : arrayList) {
            if (sb.length() > 0) {
                sb.append("&");
            }
            sb.append(str2);
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(map.get(str2));
        }
        map.put("sign", f.c(m.a().p() + sb.toString()));
        return new JSONObject((Map<String, Object>) map).toString();
    }

    @Override
    public final void a(String str, String str2, String str3, int i) {
        if (this.c) {
            u.a().a(3, "", "", i(), n.a(1001));
        }
    }
}
