package com.igexin.push.core.a;

import android.text.TextUtils;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONObject;

public class i extends a {
    private static final String a = com.igexin.push.config.i.a;
    private static Map<String, b> b;

    public i() {
        HashMap map = new HashMap();
        b = map;
        map.put("redirect_server", new q());
        b.put("response_deviceid", new t());
        b.put("pushmessage", new o());
        b.put("received", new p());
        b.put("sendmessage_feedback", new u());
        b.put("block_client", new d());
        b.put("settag_result", new v());
        b.put("response_bind", new c());
        b.put("response_unbind", new w());
    }

    @Override
    public boolean a(com.igexin.b.a.d.e eVar) {
        return false;
    }

    @Override
    public boolean a(Object obj) {
        b bVar;
        if (!(obj instanceof com.igexin.push.d.c.m)) {
            return false;
        }
        com.igexin.push.d.c.m mVar = (com.igexin.push.d.c.m) obj;
        if (!mVar.b() || mVar.e == null) {
            return false;
        }
        try {
            JSONObject jSONObject = new JSONObject((String) mVar.e);
            String strOptString = jSONObject.optString("action");
            if (!strOptString.equals("received") && !strOptString.equals("redirect_server") && jSONObject.has("id")) {
                e.a().a(jSONObject.getString("id"));
            }
            if (TextUtils.isEmpty(strOptString) || (bVar = b.get(strOptString)) == null) {
                return false;
            }
            return bVar.a(obj, jSONObject);
        } catch (Exception unused) {
            return false;
        }
    }
}
