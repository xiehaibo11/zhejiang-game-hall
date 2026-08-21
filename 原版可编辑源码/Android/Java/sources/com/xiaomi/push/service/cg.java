package com.xiaomi.push.service;

import android.content.Context;
import android.util.Log;
import com.xiaomi.mipush.sdk.Constants;
import com.xiaomi.push.ht;
import com.xiaomi.push.ii;
import com.xiaomi.push.service.XMPushService;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class cg implements XMPushService.n {
    private static Context a;
    private static final boolean a = Log.isLoggable("UNDatas", 3);
    private static final Map<Integer, Map<String, List<String>>> a = new HashMap();

    public cg(Context context) {
        a = context;
    }

    private static ii a(String str, String str2, String str3, String str4) {
        ii iiVar = new ii();
        if (str3 != null) {
            iiVar.c(str3);
        }
        if (str != null) {
            iiVar.b(str);
        }
        if (str2 != null) {
            iiVar.a(str2);
        }
        if (str4 != null) {
            iiVar.d(str4);
        }
        iiVar.a(false);
        return iiVar;
    }

    private static void a(Context context, ii iiVar) {
        if (a) {
            com.xiaomi.channel.commonutils.logger.b.b("UNDatas upload message notification:" + iiVar);
        }
        com.xiaomi.push.al.a(context).a(new ch(iiVar));
    }

    private static void b() {
        HashMap map = new HashMap();
        map.putAll(a);
        if (map.size() > 0) {
            for (Integer num : map.keySet()) {
                Map map2 = (Map) map.get(num);
                if (map2 != null && map2.size() > 0) {
                    StringBuilder sb = new StringBuilder();
                    for (String str : map2.keySet()) {
                        sb.append(str);
                        sb.append(Constants.COLON_SEPARATOR);
                        List list = (List) map2.get(str);
                        if (!com.xiaomi.push.w.a(list)) {
                            for (int i = 0; i < list.size(); i++) {
                                if (i != 0) {
                                    sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                                }
                                sb.append((String) list.get(i));
                            }
                        }
                        sb.append(";");
                    }
                    ii iiVarA = a(null, bd.a(), ht.Y.a, null);
                    iiVarA.a("removed_reason", String.valueOf(num));
                    iiVarA.a("all_delete_msgId_appId", sb.toString());
                    com.xiaomi.channel.commonutils.logger.b.b("UNDatas upload all removed messages reason: " + num + " allIds: " + sb.toString());
                    a(a, iiVarA);
                }
                a.remove(num);
            }
        }
    }

    @Override
    public void a() {
        if (a.size() > 0) {
            synchronized (a) {
                b();
            }
        }
    }
}
