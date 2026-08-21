package com.igexin.push.core.c;

import com.igexin.push.config.SDKUrlConfig;
import com.igexin.push.config.l;
import com.igexin.push.core.a.q;
import com.igexin.push.core.b.i;
import com.igexin.push.f.a.b;
import com.igexin.push.util.d;
import org.json.JSONArray;

public class a extends b {
    public static JSONArray a;

    public a(String str, JSONArray jSONArray) {
        super(str);
        a(jSONArray);
    }

    @Override
    public void a(Exception exc) {
        i.a().b(System.currentTimeMillis());
        com.igexin.b.a.c.b.a("-> get idc config " + exc.toString(), new Object[0]);
    }

    public void a(JSONArray jSONArray) {
        a = jSONArray;
    }

    @Override
    public void a(byte[] bArr) throws Exception {
        if (bArr != null) {
            try {
                String str = new String(com.igexin.b.b.a.c(d.a(bArr, 0)));
                com.igexin.b.a.c.b.a("->get idc config server resp data : " + str, new Object[0]);
                com.igexin.push.config.a.a().b(str);
                l.a(str, true);
                i.a().b(0L);
                com.igexin.push.config.a.a().a(a.toString());
                SDKUrlConfig.setIdcConfigUrl(q.a(a));
            } catch (Exception e) {
                i.a().b(System.currentTimeMillis());
                throw e;
            }
        }
    }

    @Override
    public int b_() {
        return 0;
    }
}
