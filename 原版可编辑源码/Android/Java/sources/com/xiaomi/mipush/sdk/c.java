package com.xiaomi.mipush.sdk;

import android.content.Context;
import com.xiaomi.push.dy;
import com.xiaomi.push.ed;
import com.xiaomi.push.eh;
import com.xiaomi.push.hj;
import com.xiaomi.push.ht;
import com.xiaomi.push.hw;
import com.xiaomi.push.ii;
import com.xiaomi.push.service.bd;
import java.util.HashMap;

public class c implements eh {
    @Override
    public void a(Context context, HashMap<String, String> map) {
        ii iiVar = new ii();
        iiVar.b(ed.a(context).a());
        iiVar.d(ed.a(context).b());
        iiVar.c(ht.I.a);
        iiVar.a(bd.a());
        iiVar.a = map;
        ao.a(context).a(iiVar, hj.i, true, (hw) null, true);
        com.xiaomi.channel.commonutils.logger.b.a("MoleInfo：\u3000send data in app layer");
    }

    @Override
    public void b(Context context, HashMap<String, String> map) {
        MiTinyDataClient.upload("category_awake_app", "wake_up_app", 1L, dy.a(map));
        com.xiaomi.channel.commonutils.logger.b.a("MoleInfo：\u3000send data in app layer");
    }

    @Override
    public void c(Context context, HashMap<String, String> map) {
        com.xiaomi.channel.commonutils.logger.b.a("MoleInfo：\u3000" + dy.b(map));
        String str = map.get("event_type");
        String str2 = map.get("awake_info");
        if (String.valueOf(1007).equals(str)) {
            o.a(context, str2);
        }
    }
}
