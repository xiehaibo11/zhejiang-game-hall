package com.xiaomi.push;

import android.text.TextUtils;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.xiaomi.push.dx;
import com.xiaomi.push.service.bg;
import java.util.HashMap;

class fk {
    public static void a(bg.b bVar, String str, fw fwVar) {
        String strA;
        dx.c cVar = new dx.c();
        if (!TextUtils.isEmpty(bVar.c)) {
            cVar.a(bVar.c);
        }
        if (!TextUtils.isEmpty(bVar.e)) {
            cVar.d(bVar.e);
        }
        if (!TextUtils.isEmpty(bVar.f)) {
            cVar.e(bVar.f);
        }
        cVar.b(bVar.a ? "1" : "0");
        if (TextUtils.isEmpty(bVar.d)) {
            cVar.c("XIAOMI-SASL");
        } else {
            cVar.c(bVar.d);
        }
        fl flVar = new fl();
        flVar.c(bVar.b);
        flVar.a(Integer.parseInt(bVar.g));
        flVar.b(bVar.a);
        flVar.a("BIND", (String) null);
        flVar.a(flVar.e());
        com.xiaomi.channel.commonutils.logger.b.a("[Slim]: bind id=" + flVar.e());
        HashMap map = new HashMap();
        map.put("challenge", str);
        map.put("token", bVar.c);
        map.put("chid", bVar.g);
        map.put("from", bVar.b);
        map.put("id", flVar.e());
        map.put(RemoteMessageConst.TO, "xiaomi.com");
        if (bVar.a) {
            map.put("kick", "1");
        } else {
            map.put("kick", "0");
        }
        if (TextUtils.isEmpty(bVar.e)) {
            map.put("client_attrs", "");
        } else {
            map.put("client_attrs", bVar.e);
        }
        if (TextUtils.isEmpty(bVar.f)) {
            map.put("cloud_attrs", "");
        } else {
            map.put("cloud_attrs", bVar.f);
        }
        if (bVar.d.equals("XIAOMI-PASS") || bVar.d.equals("XMPUSH-PASS")) {
            strA = bn.a(bVar.d, null, map, bVar.h);
        } else {
            bVar.d.equals("XIAOMI-SASL");
            strA = null;
        }
        cVar.f(strA);
        flVar.a(cVar.a(), (String) null);
        fwVar.b(flVar);
    }

    public static void a(String str, String str2, fw fwVar) {
        fl flVar = new fl();
        flVar.c(str2);
        flVar.a(Integer.parseInt(str));
        flVar.a("UBND", (String) null);
        fwVar.b(flVar);
    }
}
