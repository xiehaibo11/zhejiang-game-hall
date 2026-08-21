package com.cmic.gen.sdk.d;

import android.content.Context;
import android.text.TextUtils;
import com.cmic.gen.sdk.e.f;
import com.cmic.gen.sdk.e.k;
import com.cmic.gen.sdk.e.m;
import java.util.HashMap;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: compiled from: SendLog.java */
/* JADX INFO: loaded from: classes.dex */
public class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private com.cmic.gen.sdk.a f1663a;

    private static void a(b bVar, com.cmic.gen.sdk.a aVar) {
        if (bVar == null || aVar == null) {
            return;
        }
        bVar.b(aVar.b("appid", ""));
        bVar.e(m.a());
        bVar.h(aVar.b("interfaceType", ""));
        bVar.g(aVar.b("interfaceCode", ""));
        bVar.f(aVar.b("interfaceElasped", ""));
        bVar.k(aVar.b("timeOut"));
        bVar.r(aVar.b("traceId"));
        bVar.m(aVar.b("simCardNum"));
        bVar.n(aVar.b("operatortype"));
        bVar.o(m.b());
        bVar.p(m.c());
        bVar.w(String.valueOf(aVar.b("networktype", 0)));
        bVar.s(aVar.b("starttime"));
        bVar.t(aVar.b("endtime"));
        bVar.l(String.valueOf(aVar.b("systemEndTime", 0L) - aVar.b("systemStartTime", 0L)));
        bVar.c(aVar.b("imsiState"));
        bVar.x(k.b("AID", ""));
        bVar.y(aVar.b("operatortype"));
        bVar.z(aVar.b("scripType"));
        bVar.A(aVar.b("networkTypeByAPI"));
        com.cmic.gen.sdk.e.c.a("SendLog", "traceId" + aVar.b("traceId"));
    }

    public void a(Context context, String str, com.cmic.gen.sdk.a aVar) {
        String str2 = "";
        try {
            b bVarA = aVar.a();
            String strB = f.b(context);
            bVarA.d(str);
            bVarA.u(aVar.b("loginMethod", ""));
            if (aVar.b("isCacheScrip", false)) {
                bVarA.q("scrip");
            } else {
                bVarA.q("pgw");
            }
            bVarA.i(f.a(context));
            if (!TextUtils.isEmpty(strB)) {
                str2 = strB;
            }
            bVarA.j(str2);
            a(bVarA, aVar);
            JSONArray jSONArray = null;
            if (bVarA.f1662a.size() > 0) {
                jSONArray = new JSONArray();
                for (Throwable th : bVarA.f1662a) {
                    StringBuffer stringBuffer = new StringBuffer();
                    JSONObject jSONObject = new JSONObject();
                    for (StackTraceElement stackTraceElement : th.getStackTrace()) {
                        stringBuffer.append("\n");
                        stringBuffer.append(stackTraceElement.toString());
                    }
                    jSONObject.put("message", th.toString());
                    jSONObject.put("stack", stringBuffer.toString());
                    jSONArray.put(jSONObject);
                }
                bVarA.f1662a.clear();
            }
            if (jSONArray != null && jSONArray.length() > 0) {
                bVarA.a(jSONArray);
            }
            com.cmic.gen.sdk.e.c.a("SendLog", "登录日志");
            a(bVarA.b(), aVar);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    protected void a(JSONObject jSONObject, com.cmic.gen.sdk.a aVar) {
        this.f1663a = aVar;
        a(jSONObject);
    }

    private void a(JSONObject jSONObject) {
        com.cmic.gen.sdk.c.c.a.a().a(jSONObject, this.f1663a, new com.cmic.gen.sdk.c.c.d() { // from class: com.cmic.gen.sdk.d.d.1
            @Override // com.cmic.gen.sdk.c.c.d
            public void a(String str, String str2, JSONObject jSONObject2) {
                com.cmic.gen.sdk.a.a aVarB = d.this.f1663a.b();
                HashMap map = new HashMap();
                if (!str.equals("103000")) {
                    if (aVarB.l() != 0 && aVarB.k() != 0) {
                        int iA = k.a("logFailTimes", 0) + 1;
                        if (iA >= aVarB.k()) {
                            map.put("logFailTimes", 0);
                            map.put("logCloseTime", Long.valueOf(System.currentTimeMillis()));
                        } else {
                            map.put("logFailTimes", Integer.valueOf(iA));
                        }
                    }
                } else {
                    map.put("logFailTimes", 0);
                    map.put("logCloseTime", 0L);
                }
                k.a(map);
            }
        });
    }
}
