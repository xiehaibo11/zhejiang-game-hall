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

/* JADX INFO: loaded from: classes4.dex */
public class cg implements XMPushService.n {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Context f8358a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final boolean f984a = Log.isLoggable("UNDatas", 3);

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final Map<Integer, Map<String, List<String>>> f983a = new HashMap();

    public cg(Context context) {
        f8358a = context;
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
        if (f984a) {
            com.xiaomi.channel.commonutils.logger.b.b("UNDatas upload message notification:" + iiVar);
        }
        com.xiaomi.push.al.a(context).a(new ch(iiVar));
    }

    private static void b() {
        HashMap map = new HashMap();
        map.putAll(f983a);
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
                    ii iiVarA = a(null, bd.a(), ht.NotificationRemoved.f519a, null);
                    iiVarA.a("removed_reason", String.valueOf(num));
                    iiVarA.a("all_delete_msgId_appId", sb.toString());
                    com.xiaomi.channel.commonutils.logger.b.b("UNDatas upload all removed messages reason: " + num + " allIds: " + sb.toString());
                    a(f8358a, iiVarA);
                }
                f983a.remove(num);
            }
        }
    }

    @Override // com.xiaomi.push.service.XMPushService.n
    /* JADX INFO: renamed from: a */
    public void mo407a() {
        if (f983a.size() > 0) {
            synchronized (f983a) {
                b();
            }
        }
    }
}
