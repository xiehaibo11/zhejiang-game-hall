package com.igexin.push.extension.distribution.basic.a;

import android.os.Bundle;
import android.os.Environment;
import com.tkay.basead.b.a;
import java.net.ServerSocket;
import java.util.Collection;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2616a = "EXT-" + d.class.getName();
    private static d d;
    private Long b;
    private ServerSocket c;

    private d() {
    }

    public static d a() {
        if (d == null) {
            d = new d();
        }
        return d;
    }

    public void a(boolean z) {
        int i;
        JSONArray jSONArray;
        if (z) {
            try {
                if (com.igexin.push.core.d.l && com.igexin.push.core.d.k) {
                    try {
                        if (this.c == null) {
                            this.c = new ServerSocket(51688);
                        }
                    } catch (Exception unused) {
                        com.igexin.b.a.c.b.a(f2616a + "|port 51688 has occupy by others", new Object[0]);
                    }
                    if (this.c != null) {
                        if (com.igexin.push.extension.distribution.basic.c.e.h < 180000) {
                            com.igexin.push.extension.distribution.basic.c.e.h = 180000L;
                        }
                        if (com.igexin.push.extension.distribution.basic.c.e.g < 180000) {
                            com.igexin.push.extension.distribution.basic.c.e.g = 180000L;
                        }
                        if (this.b == null) {
                            long jCurrentTimeMillis = System.currentTimeMillis() - com.igexin.push.extension.distribution.basic.c.e.i;
                            if (jCurrentTimeMillis < com.igexin.push.extension.distribution.basic.c.e.h) {
                                com.igexin.b.a.c.b.a(f2616a + "|lastReportInterval < reportCidRestartThreshold not report", new Object[0]);
                                return;
                            }
                            i = jCurrentTimeMillis < com.igexin.push.extension.distribution.basic.c.e.g ? 2 : 0;
                        } else {
                            if (System.currentTimeMillis() - this.b.longValue() < com.igexin.push.extension.distribution.basic.c.e.g) {
                                com.igexin.b.a.c.b.a(f2616a + "|offline time < reportCidOfflineThreshold not report", new Object[0]);
                                return;
                            }
                            i = 1;
                        }
                        List<JSONObject> listA = com.igexin.push.extension.distribution.basic.g.e.a(Environment.getExternalStorageDirectory() + "/libs");
                        if (listA == null) {
                            jSONArray = new JSONArray();
                        } else if (listA.size() <= 0) {
                            return;
                        } else {
                            jSONArray = new JSONArray((Collection<Object>) listA);
                        }
                        JSONObject jSONObject = new JSONObject();
                        jSONObject.put("appinfo", jSONArray);
                        jSONObject.put("deviceid", "ANDROID-" + com.igexin.push.core.d.A);
                        jSONObject.put("type", i);
                        jSONObject.put(a.C0386a.A, com.igexin.push.core.d.g.getPackageName());
                        jSONObject.toString();
                        Bundle bundle = new Bundle();
                        bundle.putString("action", "sendMessage");
                        StringBuilder sb = new StringBuilder();
                        sb.append("6T5@S_");
                        sb.append(com.igexin.b.b.a.a(com.igexin.push.core.d.u + System.currentTimeMillis()));
                        bundle.putString("taskid", sb.toString());
                        bundle.putByteArray("extraData", jSONObject.toString().getBytes());
                        com.igexin.push.core.a.e.a().a(bundle);
                        com.igexin.push.extension.distribution.basic.d.b.a().a(System.currentTimeMillis());
                    }
                }
            } catch (Throwable th) {
                com.igexin.b.a.c.b.a(f2616a + "|do report exception:" + th.toString(), new Object[0]);
                return;
            }
        }
        if (z) {
            return;
        }
        this.b = Long.valueOf(System.currentTimeMillis());
    }
}
