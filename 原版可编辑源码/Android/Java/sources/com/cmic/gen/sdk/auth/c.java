package com.cmic.gen.sdk.auth;

import android.content.Context;
import android.os.Handler;
import android.os.SystemClock;
import android.text.TextUtils;
import com.cmic.gen.sdk.e.e;
import com.cmic.gen.sdk.e.h;
import com.cmic.gen.sdk.e.j;
import com.cmic.gen.sdk.e.k;
import com.cmic.gen.sdk.e.m;
import com.cmic.gen.sdk.e.n;
import com.cmic.gen.sdk.e.o;
import com.cmic.gen.sdk.e.q;
import com.cmic.gen.sdk.e.r;
import org.json.JSONException;
import org.json.JSONObject;

public class c {
    public static final String SDK_VERSION = "quick_login_android_5.9.6";
    private static c f;
    protected final com.cmic.gen.sdk.auth.a a;
    protected final Context b;
    protected long c;
    protected final Handler d;
    protected String e;
    private final Object g;

    c(Context context) {
        this.c = 8000L;
        this.g = new Object();
        this.b = context.getApplicationContext();
        this.d = new Handler(this.b.getMainLooper());
        this.a = com.cmic.gen.sdk.auth.a.a(this.b);
        r.a(this.b);
        k.a(this.b);
        j.a(this.b);
        n.a(new n.a() {
            @Override
            protected void a() {
                String strB = k.b("AID", "");
                com.cmic.gen.sdk.e.c.b("AuthnHelperCore", "aid = " + strB);
                if (TextUtils.isEmpty(strB)) {
                    c.this.a();
                }
                if (com.cmic.gen.sdk.e.b.a(c.this.b, true)) {
                    com.cmic.gen.sdk.e.c.b("AuthnHelperCore", "生成androidkeystore成功");
                } else {
                    com.cmic.gen.sdk.e.c.b("AuthnHelperCore", "生成androidkeystore失败");
                }
            }
        });
    }

    private void a() {
        String str = "%" + q.b();
        com.cmic.gen.sdk.e.c.b("AuthnHelperCore", "generate aid = " + str);
        k.a("AID", str);
    }

    private c(Context context, String str) {
        this(context);
        this.e = str;
    }

    public static c getInstance(Context context) {
        if (f == null) {
            synchronized (c.class) {
                if (f == null) {
                    f = new c(context);
                }
            }
        }
        return f;
    }

    public static c getInstance(Context context, String str) {
        if (f == null) {
            synchronized (c.class) {
                if (f == null) {
                    f = new c(context, str);
                }
            }
        }
        return f;
    }

    public void loginAuth(final String str, final String str2, final GenTokenListener genTokenListener) {
        final com.cmic.gen.sdk.a aVarA = a(genTokenListener);
        n.a(new n.a(this.b, aVarA) {
            @Override
            protected void a() {
                if (c.this.a(aVarA, str, str2, "loginAuth", 1, genTokenListener)) {
                    c.this.a(aVarA);
                }
            }
        });
    }

    public void mobileAuth(final String str, final String str2, final GenTokenListener genTokenListener) {
        final com.cmic.gen.sdk.a aVarA = a(genTokenListener);
        n.a(new n.a(this.b, aVarA) {
            @Override
            protected void a() {
                if (c.this.a(aVarA, str, str2, "mobileAuth", 0, genTokenListener)) {
                    c.this.a(aVarA);
                }
            }
        });
    }

    public void getPhoneInfo(final String str, final String str2, final GenTokenListener genTokenListener) {
        final com.cmic.gen.sdk.a aVarA = a(genTokenListener);
        n.a(new n.a(this.b, aVarA) {
            @Override
            protected void a() {
                if (c.this.a(aVarA, str, str2, "preGetMobile", 3, genTokenListener)) {
                    c.this.a(aVarA);
                }
            }
        });
    }

    protected com.cmic.gen.sdk.a a(GenTokenListener genTokenListener) {
        com.cmic.gen.sdk.a aVar = new com.cmic.gen.sdk.a(64);
        String strC = q.c();
        aVar.a(new com.cmic.gen.sdk.d.b());
        aVar.a("traceId", strC);
        com.cmic.gen.sdk.e.c.a("traceId", strC);
        if (genTokenListener != null) {
            e.a(strC, genTokenListener);
        }
        return aVar;
    }

    protected class a implements Runnable {
        private final com.cmic.gen.sdk.a b;

        a(com.cmic.gen.sdk.a aVar) {
            this.b = aVar;
        }

        @Override
        public void run() {
            JSONObject jSONObjectA = d.a("200023", "登录超时");
            c.this.callBackResult(jSONObjectA.optString("resultCode", "200023"), jSONObjectA.optString("desc", "登录超时"), this.b, jSONObjectA);
        }
    }

    protected void a(com.cmic.gen.sdk.a aVar) {
        final a aVar2 = new a(aVar);
        this.d.postDelayed(aVar2, this.c);
        this.a.a(aVar, new b() {
            @Override
            public void a(String str, String str2, com.cmic.gen.sdk.a aVar3, JSONObject jSONObject) {
                c.this.d.removeCallbacks(aVar2);
                c.this.callBackResult(str, str2, aVar3, jSONObject);
            }
        });
    }

    protected boolean a(com.cmic.gen.sdk.a aVar, String str, String str2, String str3, int i, GenTokenListener genTokenListener) {
        boolean zA;
        com.cmic.gen.sdk.a.a aVarA = com.cmic.gen.sdk.a.c.a(this.b).a();
        aVar.a(aVarA);
        aVar.a("use2048PublicKey", "rsa2048".equals(this.e));
        aVar.a("systemStartTime", SystemClock.elapsedRealtime());
        aVar.a("starttime", o.a());
        aVar.a("loginMethod", str3);
        aVar.a("appkey", str2);
        aVar.a("appid", str);
        aVar.a("timeOut", String.valueOf(this.c));
        boolean zA2 = m.a(this.b);
        com.cmic.gen.sdk.b.a.a().a(this.b, zA2);
        String strB = j.a().b();
        String strC = j.a().c();
        String strA = j.a().a(strC);
        aVar.a("operator", strC);
        aVar.a("operatortype", strA);
        aVar.a("logintype", i);
        com.cmic.gen.sdk.e.c.b("AuthnHelperCore", "subId = " + strB);
        if (!TextUtils.isEmpty(strB)) {
            com.cmic.gen.sdk.e.c.a("AuthnHelperCore", "使用subId作为缓存key = " + strB);
            aVar.a("scripType", "subid");
            aVar.a("scripKey", strB);
        } else if (!TextUtils.isEmpty(strC)) {
            com.cmic.gen.sdk.e.c.a("AuthnHelperCore", "使用operator作为缓存key = " + strC);
            aVar.a("scripType", "operator");
            aVar.a("scripKey", strC);
        }
        int iA = m.a(this.b, zA2, aVar);
        aVar.a("networktype", iA);
        if (!zA2) {
            aVar.a("authType", String.valueOf(0));
            callBackResult("200010", "无法识别sim卡或没有sim卡", aVar, null);
            return false;
        }
        if (genTokenListener == null) {
            callBackResult("102203", "listener不能为空", aVar, null);
            return false;
        }
        if (aVarA.g()) {
            callBackResult("200082", "服务器繁忙，请稍后重试", aVar, null);
            return false;
        }
        if (TextUtils.isEmpty(str == null ? "" : str.trim())) {
            callBackResult("102203", "appId 不能为空", aVar, null);
            return false;
        }
        if (TextUtils.isEmpty(str2 == null ? "" : str2.trim())) {
            callBackResult("102203", "appkey不能为空", aVar, null);
            return false;
        }
        if (iA == 0) {
            callBackResult("102101", "未检测到网络", aVar, null);
            return false;
        }
        if ("2".equals(strA) && aVarA.f()) {
            callBackResult("200082", "服务器繁忙，请稍后重试", aVar, null);
            return false;
        }
        if ("3".equals(strA) && aVarA.e()) {
            callBackResult("200082", "服务器繁忙，请稍后重试", aVar, null);
            return false;
        }
        synchronized (this.g) {
            zA = h.a(aVar);
            if (zA) {
                aVar.a("securityphone", k.b("securityphone", ""));
                if (3 != i) {
                    String strA2 = h.a(this.b);
                    StringBuilder sb = new StringBuilder();
                    sb.append("解密phoneScript ");
                    sb.append(!TextUtils.isEmpty(strA2));
                    com.cmic.gen.sdk.e.c.b("AuthnHelperCore", sb.toString());
                    if (TextUtils.isEmpty(strA2)) {
                        zA = false;
                    } else {
                        aVar.a("phonescrip", strA2);
                    }
                    h.a(true, false);
                }
            }
            aVar.a("isCacheScrip", zA);
            com.cmic.gen.sdk.e.c.b("AuthnHelperCore", "isCachePhoneScrip = " + zA);
        }
        if (iA != 2 || zA) {
            return true;
        }
        callBackResult("102103", "无数据网络", aVar, null);
        return false;
    }

    public static void setDebugMode(boolean z) {
        com.cmic.gen.sdk.e.c.a(z);
    }

    public void callBackResult(String str, String str2, com.cmic.gen.sdk.a aVar, JSONObject jSONObject) {
        final JSONObject jSONObjectA;
        try {
            String strB = aVar.b("traceId");
            final int iB = aVar.b("SDKRequestCode", -1);
            if (e.a(strB)) {
                return;
            }
            synchronized (this) {
                final GenTokenListener genTokenListenerC = e.c(strB);
                if (jSONObject == null || !jSONObject.optBoolean("keepListener", false)) {
                    e.b(strB);
                }
                if (genTokenListenerC == null) {
                    return;
                }
                aVar.a("systemEndTime", SystemClock.elapsedRealtime());
                aVar.a("endtime", o.a());
                int iC = aVar.c("logintype");
                if (jSONObject == null) {
                    jSONObject = d.a(str, str2);
                }
                if (iC == 3) {
                    jSONObjectA = d.a(str, aVar, jSONObject);
                } else {
                    jSONObjectA = d.a(str, str2, aVar, jSONObject);
                }
                jSONObjectA.put("traceId", strB);
                jSONObjectA.put("scripExpiresIn", String.valueOf(h.a()));
                this.d.post(new Runnable() {
                    @Override
                    public void run() {
                        genTokenListenerC.onGetTokenComplete(iB, jSONObjectA);
                    }
                });
                com.cmic.gen.sdk.a.c.a(this.b).a(aVar);
                if (aVar.b().j() || q.a(aVar.b())) {
                    return;
                }
                a(this.b, str, aVar);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private void a(final Context context, final String str, final com.cmic.gen.sdk.a aVar) {
        n.a(new n.a() {
            @Override
            protected void a() {
                if ("200023".equals(str)) {
                    SystemClock.sleep(8000L);
                }
                new com.cmic.gen.sdk.d.d().a(context, str, aVar);
            }
        });
    }

    public void setOverTime(long j) {
        this.c = j;
    }

    public JSONObject getNetworkType(Context context) {
        JSONObject jSONObject = new JSONObject();
        try {
            try {
                boolean zA = m.a(this.b);
                com.cmic.gen.sdk.b.a.a().a(context, zA);
                String strA = j.a().a((String) null);
                int iA = m.a(context, zA, new com.cmic.gen.sdk.a(1));
                jSONObject.put("operatortype", strA);
                jSONObject.put("networktype", iA + "");
                com.cmic.gen.sdk.e.c.b("AuthnHelperCore", "网络类型: " + iA);
                com.cmic.gen.sdk.e.c.b("AuthnHelperCore", "运营商类型: " + strA);
                return jSONObject;
            } catch (JSONException e) {
                e.printStackTrace();
                return jSONObject;
            }
        } catch (Exception unused) {
            jSONObject.put("errorDes", "发生未知错误");
            return jSONObject;
        }
    }

    public void delScrip() {
        try {
            h.a(true, true);
            com.cmic.gen.sdk.e.c.b("AuthnHelperCore", "删除scrip");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
