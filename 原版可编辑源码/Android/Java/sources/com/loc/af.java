package com.loc;

import android.content.Context;
import com.loopj.android.http.RequestParams;
import java.util.HashMap;
import java.util.Map;

public class af extends r {
    public Context k;

    public af(Context context) {
        this.k = context;
        a(5000);
        b(5000);
    }

    @Override
    public final Map<String, String> a() {
        HashMap map = new HashMap();
        map.put("Content-Type", RequestParams.APPLICATION_JSON);
        map.put("Accept-Encoding", "gzip");
        map.put("User-Agent", "AMAP SDK Android core 4.3.6");
        map.put("platinfo", String.format("platform=Android&sdkversion=%s&product=%s", "4.3.6", "core"));
        map.put("logversion", "2.1");
        return map;
    }

    @Override
    public final String b() {
        return q.a().b() ? "https://restapi.amap.com/rest/aaid/get" : "http://restapi.amap.com/rest/aaid/get";
    }

    @Override
    public final String c_() {
        return "core";
    }

    @Override
    public final Map<String, String> e() {
        HashMap map = new HashMap();
        map.put("key", l.f(this.k));
        String strA = n.a();
        String strA2 = n.a(this.k, strA, x.b(map));
        map.put("ts", strA);
        map.put("scode", strA2);
        return map;
    }
}
