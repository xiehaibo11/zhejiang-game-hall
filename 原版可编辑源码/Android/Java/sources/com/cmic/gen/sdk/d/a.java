package com.cmic.gen.sdk.d;

import android.content.Context;
import android.text.TextUtils;
import com.cmic.gen.sdk.e.f;
import com.cmic.gen.sdk.e.m;
import com.cmic.gen.sdk.e.n;
import com.cmic.gen.sdk.e.o;
import java.util.HashMap;
import org.json.JSONObject;

public class a {
    private static a<String, String> a = new a<>();

    public static void a() {
        String strValueOf = String.valueOf(0);
        a.put("authPageIn", strValueOf);
        a.put("authPageOut", strValueOf);
        a.put("authClickFailed", strValueOf);
        a.put("authClickSuccess", strValueOf);
        a.put("timeOnAuthPage", strValueOf);
        a.put("authPrivacyState", strValueOf);
    }

    public static void a(String str) {
        try {
            String str2 = a.get(str);
            a.put(str, String.valueOf((TextUtils.isEmpty(str2) ? 0 : Integer.parseInt(str2)) + 1));
            a.put(str + "Time", o.a());
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static void a(String str, String str2) {
        a.put(str, str2);
    }

    public static void a(Context context, final com.cmic.gen.sdk.a aVar) {
        try {
            if (aVar.b().j()) {
                return;
            }
            com.cmic.gen.sdk.view.a aVar2 = new com.cmic.gen.sdk.view.a();
            String strValueOf = String.valueOf(0);
            aVar2.e(!a.a("authPageIn", strValueOf).equals(strValueOf) ? a.get("authPageIn") : null);
            aVar2.f(!a.a("authPageOut", strValueOf).equals(strValueOf) ? a.get("authPageOut") : null);
            aVar2.c(!a.a("authClickSuccess", strValueOf).equals(strValueOf) ? a.get("authClickSuccess") : null);
            aVar2.b(!a.a("authClickFailed", strValueOf).equals(strValueOf) ? a.get("authClickFailed") : null);
            aVar2.d(a.a("timeOnAuthPage", strValueOf).equals(strValueOf) ? null : a.get("timeOnAuthPage"));
            aVar2.a(a.a("authPrivacyState", strValueOf));
            JSONObject jSONObjectA = aVar2.a();
            final c cVar = new c();
            cVar.b(aVar.b("appid", ""));
            cVar.r(aVar.b("traceId"));
            cVar.b(aVar.b("appid"));
            cVar.i(f.a(context));
            cVar.j(f.b(context));
            cVar.k(aVar.b("timeOut"));
            cVar.s(a.a("authPageInTime", ""));
            cVar.t(a.a("authPageOutTime", ""));
            cVar.u("eventTracking5");
            cVar.n(aVar.b("operatortype", ""));
            cVar.w(aVar.b("networktype", 0) + "");
            cVar.e(m.a());
            cVar.o(m.b());
            cVar.p(m.c());
            cVar.m(aVar.b("simCardNum"));
            cVar.a(jSONObjectA);
            cVar.c(aVar.b("imsiState", "0"));
            cVar.l((System.currentTimeMillis() - aVar.b("methodTimes", 0L)) + "");
            n.a(new n.a() {
                @Override
                protected void a() {
                    new d().a(cVar.b(), aVar);
                }
            });
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private static class a<K, V> extends HashMap<K, V> {
        private a() {
        }

        public V a(Object obj, V v) {
            return (!containsKey(obj) || get(obj) == null) ? v : get(obj);
        }
    }
}
