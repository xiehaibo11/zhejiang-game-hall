package com.mbridge.msdk.c;

import android.content.Context;
import android.os.Looper;
import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.tools.SameMD5;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.z;
import org.json.JSONArray;
import org.json.JSONObject;

public class c {
    private static final String a = c.class.getSimpleName();

    public final void a(final Context context, final String str, final String str2) {
        if (context == null) {
            return;
        }
        com.mbridge.msdk.foundation.same.net.g.d dVar = new com.mbridge.msdk.foundation.same.net.g.d();
        dVar.a("app_id", str);
        dVar.a("sign", SameMD5.getMD5(str + str2));
        dVar.a(com.tkay.expressad.d.a.b.bS, com.mbridge.msdk.d.b.a(context).c());
        dVar.a(com.tkay.expressad.d.a.b.bT, com.mbridge.msdk.d.b.a(context).a() + "");
        dVar.a(com.tkay.expressad.d.a.b.bU, com.mbridge.msdk.d.b.a(context).b());
        try {
            String strBc = b.a().g(str).bc();
            if (TextUtils.isEmpty(strBc)) {
                strBc = "";
            }
            dVar.a("vtag", strBc);
        } catch (Throwable th) {
            z.d(a, th.getMessage());
        }
        if (com.mbridge.msdk.foundation.same.net.f.d.a().F) {
            dVar.a(com.tkay.expressad.d.a.b.ei, com.mbridge.msdk.foundation.same.net.f.d.a().j + "");
        }
        com.mbridge.msdk.foundation.same.net.g.c cVar = new com.mbridge.msdk.foundation.same.net.g.c() {
            @Override
            public final void a(JSONObject jSONObject) {
                try {
                    String strB = c.this.b();
                    int i = com.mbridge.msdk.foundation.same.net.f.d.a().j;
                    if (ae.a(jSONObject)) {
                        if (jSONObject.optInt("vtag_status", 0) == 1) {
                            String strC = b.a().c(str);
                            if (!TextUtils.isEmpty(strC)) {
                                try {
                                    jSONObject = b.a().a(new JSONObject(strC), jSONObject);
                                } catch (Exception e) {
                                    e.printStackTrace();
                                }
                            }
                        }
                        try {
                            int iOptInt = jSONObject.optInt("use_thread_pool", 0);
                            if (context != null) {
                                context.getSharedPreferences("mb_optimization_setting", 0).edit().putInt("use_thread_pool", iOptInt).apply();
                            }
                        } catch (Exception unused) {
                            if (context != null) {
                                context.getSharedPreferences("mb_optimization_setting", 0).edit().putInt("use_thread_pool", 0).apply();
                            }
                        }
                        MBridgeConstans.ALLOW_APK_DOWNLOAD = jSONObject.optBoolean(com.tkay.expressad.d.a.b.w);
                        jSONObject.put("current_time", System.currentTimeMillis());
                        if (com.mbridge.msdk.foundation.same.net.f.d.a().i) {
                            if (TextUtils.isEmpty(jSONObject.optString(com.tkay.expressad.d.a.b.dE))) {
                                jSONObject.put(com.tkay.expressad.d.a.b.dE, com.mbridge.msdk.foundation.same.net.f.d.a().d);
                            }
                        } else if (TextUtils.isEmpty(jSONObject.optString(com.tkay.expressad.d.a.b.dD))) {
                            jSONObject.put(com.tkay.expressad.d.a.b.dD, com.mbridge.msdk.foundation.same.net.f.d.a().c);
                        }
                        b.a().b(str, jSONObject.toString());
                        com.mbridge.msdk.foundation.same.net.f.d.a().c();
                        if (!com.mbridge.msdk.c.b.a.a().c()) {
                            new Thread(new Runnable() {
                                @Override
                                public final void run() {
                                    Looper.prepare();
                                    com.mbridge.msdk.c.b.a.a().e();
                                    Looper.loop();
                                }
                            }).start();
                        } else {
                            com.mbridge.msdk.c.b.a.a().d();
                        }
                        new Thread(new Runnable() {
                            @Override
                            public final void run() {
                                com.mbridge.msdk.foundation.controller.a.g();
                            }
                        }).start();
                        try {
                            if (!TextUtils.isEmpty(jSONObject.optString(com.tkay.expressad.d.a.b.ds))) {
                                com.mbridge.msdk.c.b.b.a().a(context, jSONObject.optString(com.tkay.expressad.d.a.b.ds));
                            }
                        } catch (Exception e2) {
                            z.d(c.a, e2.getMessage());
                        }
                        if (!TextUtils.isEmpty(jSONObject.optString(com.tkay.expressad.d.a.b.dA))) {
                            com.mbridge.msdk.c.b.c.a().a(context, jSONObject.optString(com.tkay.expressad.d.a.b.dA));
                        }
                        c.a(c.this, context, str);
                    } else {
                        b bVarA = b.a();
                        String str3 = str;
                        try {
                            String strC2 = bVarA.c(str3);
                            if (!TextUtils.isEmpty(strC2)) {
                                JSONObject jSONObject2 = new JSONObject(strC2);
                                jSONObject2.put("current_time", System.currentTimeMillis());
                                bVarA.b(str3, jSONObject2.toString());
                            }
                        } catch (Throwable th2) {
                            z.d(b.a, th2.getMessage());
                        }
                    }
                    c.a(c.this, 1, i, "", strB);
                    c.b(c.this);
                } catch (Exception e3) {
                    z.d(c.a, e3.getMessage());
                }
            }

            @Override
            public final void a(String str3) {
                c.a(c.this, 2, com.mbridge.msdk.foundation.same.net.f.d.a().j, str3, c.this.b());
                if (!com.mbridge.msdk.foundation.same.net.f.d.a().i) {
                    com.mbridge.msdk.foundation.same.net.f.d.a().D++;
                } else {
                    com.mbridge.msdk.foundation.same.net.f.d.a().E++;
                }
                c.this.b(context, str, str2);
                c.b(c.this);
                z.d(c.a, "get app setting error" + str3);
            }
        };
        com.mbridge.msdk.c.a.c cVar2 = new com.mbridge.msdk.c.a.c(context);
        String str3 = com.mbridge.msdk.foundation.same.net.f.d.a().q;
        try {
            if (com.mbridge.msdk.foundation.same.net.f.d.a().i && com.mbridge.msdk.foundation.same.net.f.d.a().F && com.mbridge.msdk.foundation.same.net.f.d.a().E < com.mbridge.msdk.foundation.same.net.f.d.a().H.size()) {
                String str4 = com.mbridge.msdk.foundation.same.net.f.d.a().H.get(com.mbridge.msdk.foundation.same.net.f.d.a().E);
                if (!TextUtils.isEmpty(str4) && (str4.startsWith("http") || str4.startsWith("https"))) {
                    str3 = str4 + "/setting";
                }
            }
        } catch (Throwable th2) {
            z.d(a, th2.getMessage());
        }
        cVar2.get(1, str3, dVar, cVar);
    }

    private void b(final Context context, final String str, final String str2) {
        if (!(!com.mbridge.msdk.foundation.same.net.f.d.a().d())) {
            a(context, str, str2);
            return;
        }
        try {
            if (com.mbridge.msdk.foundation.same.net.f.d.a().F) {
                return;
            }
            com.mbridge.msdk.foundation.same.net.f.d.a().F = true;
            if (System.currentTimeMillis() >= com.mbridge.msdk.foundation.a.a.a.a().a("mkey_spare_host_ts").longValue() + 86400000) {
                String strB = com.mbridge.msdk.foundation.a.a.a.a().b("mkey_spare_host");
                if (!TextUtils.isEmpty(strB)) {
                    for (String str3 : strB.split("\n")) {
                        if (!TextUtils.isEmpty(str3.trim()) && !com.mbridge.msdk.foundation.same.net.f.d.a().G.contains(str3.trim())) {
                            com.mbridge.msdk.foundation.same.net.f.d.a().G.add(str3.trim());
                            com.mbridge.msdk.foundation.same.net.f.d.a().H.add(str3.trim());
                        }
                    }
                    b(context, str, str2);
                    return;
                }
            }
            new com.mbridge.msdk.foundation.same.net.g.b(context.getApplicationContext()).get(0, com.mbridge.msdk.foundation.same.net.f.d.a().C, new com.mbridge.msdk.foundation.same.net.g.d(), new com.mbridge.msdk.foundation.same.net.b.a() {
                @Override
                public final void a(String str4) {
                    z.a(c.a, "fetch CNDSettingHost success, content = " + str4);
                    if (TextUtils.isEmpty(str4)) {
                        return;
                    }
                    com.mbridge.msdk.foundation.a.a.a.a().a("mkey_spare_host_ts", System.currentTimeMillis());
                    com.mbridge.msdk.foundation.a.a.a.a().a("mkey_spare_host", str4);
                    for (String str5 : str4.split("\n")) {
                        if (!TextUtils.isEmpty(str5.trim()) && !com.mbridge.msdk.foundation.same.net.f.d.a().G.contains(str5.trim())) {
                            com.mbridge.msdk.foundation.same.net.f.d.a().G.add(str5.trim());
                            com.mbridge.msdk.foundation.same.net.f.d.a().H.add(str5.trim());
                        }
                    }
                    c.this.b(context, str, str2);
                }

                @Override
                public final void b(String str4) {
                    com.mbridge.msdk.foundation.same.net.f.d.a().F = false;
                    z.a(c.a, "fetch CNDSettingHost failed, errorCode = " + str4);
                }
            });
        } catch (Throwable th) {
            com.mbridge.msdk.foundation.same.net.f.d.a().F = false;
            z.d(a, th.getMessage());
        }
    }

    public final void a(Context context, final String str, String str2, final String str3) {
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
            str = com.mbridge.msdk.foundation.controller.a.f().k();
            str2 = com.mbridge.msdk.foundation.controller.a.f().l();
        }
        if (b.a().a(str3, str) && b.a().a(str, 2, str3)) {
            com.mbridge.msdk.foundation.same.net.g.d dVar = new com.mbridge.msdk.foundation.same.net.g.d();
            String str4 = "[" + str3 + "]";
            dVar.a("unit_ids", str4);
            dVar.a("app_id", str);
            dVar.a("sign", SameMD5.getMD5(str + str2));
            try {
                String strY = b.a().c(str, str4).y();
                if (TextUtils.isEmpty(strY)) {
                    strY = "";
                }
                dVar.a("vtag", strY);
            } catch (Throwable th) {
                z.d(a, th.getMessage());
            }
            new com.mbridge.msdk.c.a.c(context).get(1, com.mbridge.msdk.foundation.same.net.f.d.a().q, dVar, new com.mbridge.msdk.foundation.same.net.g.c() {
                @Override
                public final void a(JSONObject jSONObject) {
                    try {
                        if (ae.a(jSONObject)) {
                            String strOptString = jSONObject.optString("vtag", "");
                            JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("unitSetting");
                            if (jSONArrayOptJSONArray != null && jSONArrayOptJSONArray.length() > 0) {
                                JSONObject jSONObjectOptJSONObject = jSONArrayOptJSONArray.optJSONObject(0);
                                if (jSONObject.optInt("vtag_status", 0) == 1) {
                                    b.a();
                                    String strB = com.mbridge.msdk.foundation.a.a.a.a().b(str + "_" + str3);
                                    if (!TextUtils.isEmpty(strB)) {
                                        try {
                                            jSONObjectOptJSONObject = b.a().a(new JSONObject(strB), jSONObjectOptJSONObject);
                                        } catch (Exception e) {
                                            e.printStackTrace();
                                        }
                                    }
                                }
                                jSONObjectOptJSONObject.put("current_time", System.currentTimeMillis());
                                jSONObjectOptJSONObject.put("vtag", strOptString);
                                b.a().a(str, str3, jSONObjectOptJSONObject.toString());
                            }
                        } else {
                            b.a().g(str, str3);
                        }
                        c.a(c.this, 1, "");
                    } catch (Exception e2) {
                        z.d(c.a, e2.getMessage());
                    }
                }

                @Override
                public final void a(String str5) {
                    c.a(c.this, 2, str5);
                }
            });
        }
    }

    private String b() {
        String str = com.mbridge.msdk.foundation.same.net.f.d.a().i ? com.mbridge.msdk.foundation.same.net.f.d.a().v : com.mbridge.msdk.foundation.same.net.f.d.a().q;
        try {
            if (!com.mbridge.msdk.foundation.same.net.f.d.a().i || !com.mbridge.msdk.foundation.same.net.f.d.a().F || com.mbridge.msdk.foundation.same.net.f.d.a().E >= com.mbridge.msdk.foundation.same.net.f.d.a().H.size()) {
                return str;
            }
            String str2 = com.mbridge.msdk.foundation.same.net.f.d.a().H.get(com.mbridge.msdk.foundation.same.net.f.d.a().E);
            if (TextUtils.isEmpty(str2)) {
                return str;
            }
            if (!str2.startsWith("http") && !str2.startsWith("https")) {
                return str;
            }
            return str2 + "/setting";
        } catch (Throwable th) {
            z.d(a, th.getMessage());
            return str;
        }
    }

    static void a(c cVar, Context context, String str) {
        a aVarB;
        b bVarA = b.a();
        if (bVarA != null && (aVarB = bVarA.b(str)) != null) {
            MBridgeConstans.OMID_JS_SERVICE_URL = aVarB.aM();
            MBridgeConstans.OMID_JS_H5_URL = aVarB.aL();
        }
        com.mbridge.msdk.a.b.a(context);
        com.mbridge.msdk.a.b.b(context);
    }

    static void a(c cVar, int i, int i2, String str, String str2) {
        try {
            new com.mbridge.msdk.foundation.same.report.d(com.mbridge.msdk.foundation.controller.a.f().j()).a(i, i2, str, str2);
        } catch (Throwable th) {
            z.d(a, th.getMessage());
        }
    }

    static void b(c cVar) {
        try {
            new com.mbridge.msdk.foundation.same.report.d(com.mbridge.msdk.foundation.controller.a.f().j()).a();
        } catch (Throwable th) {
            z.d(a, th.getMessage());
        }
    }

    static void a(c cVar, int i, String str) {
        try {
            new com.mbridge.msdk.foundation.same.report.d(com.mbridge.msdk.foundation.controller.a.f().j()).a(i, com.mbridge.msdk.foundation.same.net.f.d.a().j, str, com.mbridge.msdk.foundation.same.net.f.d.a().i ? com.mbridge.msdk.foundation.same.net.f.d.a().v : com.mbridge.msdk.foundation.same.net.f.d.a().q);
        } catch (Throwable th) {
            z.d(a, th.getMessage());
        }
    }
}
