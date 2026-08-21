package com.tkay.core.common.e;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import com.tkay.core.api.AdError;
import com.tkay.core.api.TYSDK;
import com.tkay.core.c.b;
import com.tkay.core.common.b.m;
import com.tkay.core.common.h.k;
import com.tkay.core.common.k.c;
import com.tkay.core.common.l.h;
import com.tkay.core.common.l.p;
import java.net.URL;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Locale;

public class a {
    private static final String a = "DomainManager";
    private static final String b = "tkay_sdk";
    private static final String c = "cdn_request_time_key";
    private static final String d = "cur_using_domain_key";
    private static final String e = "ru";
    private static final String f = "api.";
    private static final int g = 24;
    private static final String h = "api.anythinktech.com";
    private static final String i = "api.toponadss.com";
    private static volatile a q;
    private volatile boolean l;
    private volatile boolean m;
    private volatile long n;
    private final Object j = new Object();
    private final List<String> k = Collections.synchronizedList(new ArrayList());
    private volatile String o = "";
    private volatile String p = "";

    private static void d() {
    }

    static boolean b(a aVar) {
        aVar.m = false;
        return false;
    }

    private a() {
    }

    public static a a() {
        if (q == null) {
            synchronized (a.class) {
                q = new a();
            }
        }
        return q;
    }

    public final void a(Context context) {
        if (TYSDK.isCnSDK()) {
            return;
        }
        if (context instanceof Activity) {
            context = context.getApplicationContext();
        }
        if (this.l) {
            return;
        }
        this.l = true;
        List<String> list = this.k;
        if (!b()) {
            list.add(h);
        }
        list.add(i);
        String strB = p.b(context, "tkay_sdk", d, "");
        d("initDomain() >>> curUseDomain = ".concat(String.valueOf(strB)));
        if (!TextUtils.isEmpty(strB)) {
            b(list, strB);
            a(list);
        } else {
            a(list);
        }
    }

    private void c(String str) {
        this.o = str;
        d("setCurrentDomain() >>> currentDomain = ".concat(String.valueOf(str)));
    }

    public final String a(String str) {
        if (TYSDK.isCnSDK()) {
            return str;
        }
        try {
            String str2 = this.o;
            return TextUtils.isEmpty(str2) ? str : str.replace(new URL(str).getHost(), str2);
        } catch (Exception e2) {
            d("replaceUrlDomain() >> exception:" + e2.getMessage());
            return str;
        }
    }

    public final void b(final String str) {
        final String host;
        d("tryGetDomainFromCdn() >>> start isTrying = " + this.m + " url = " + str);
        final Context contextF = m.a().f();
        if (TextUtils.isEmpty(str) || this.m || !h.a(contextF)) {
            return;
        }
        try {
            host = new URL(str).getHost();
        } catch (Exception e2) {
            d("tryGetDomainFromCdn() >>> " + e2.getMessage());
            host = "";
        }
        synchronized (this.j) {
            if (this.m) {
                return;
            }
            this.m = true;
            this.n = c(contextF).longValue();
            if (this.n > 0) {
                long jCurrentTimeMillis = (System.currentTimeMillis() - this.n) / 3600000;
                if (jCurrentTimeMillis < 24) {
                    d("tryGetDomainFromCdn() >>> intervalTime = ".concat(String.valueOf(jCurrentTimeMillis)));
                    a(this.k, "", host, str);
                    this.m = false;
                    return;
                }
            }
            new com.tkay.core.common.h.h().a(0, new k() {
                @Override
                public final void onLoadStart(int i2) {
                }

                @Override
                public final void onLoadFinish(int i2, Object obj) {
                    a.a(a.this, contextF);
                    if (obj != null) {
                        String str2 = a.f + obj.toString();
                        a aVar = a.this;
                        aVar.a(aVar.k, str2, host, str);
                    } else {
                        a aVar2 = a.this;
                        aVar2.a(aVar2.k, "", host, str);
                    }
                    a.b(a.this);
                }

                @Override
                public final void onLoadError(int i2, String str2, AdError adError) {
                    a aVar = a.this;
                    aVar.a(aVar.k, "", host, str);
                    a.b(a.this);
                }

                @Override
                public final void onLoadCanceled(int i2) {
                    a.b(a.this);
                }
            });
        }
    }

    private void a(List<String> list, String str, String str2, String str3) {
        boolean zA = a(list, str2);
        d("handleSwitchDomain() >>> isCanSwitch = ".concat(String.valueOf(zA)));
        if (zA) {
            if (TextUtils.isEmpty(str)) {
                a(list, str2, str3);
                return;
            }
            if (str.equals(str2)) {
                c(list, str2);
            } else {
                b(list, str);
            }
            a(list, str2, str3);
        }
    }

    private void a(List<String> list) {
        if (list == null || list.size() == 0) {
            return;
        }
        this.p = list.get(0);
        c(this.p);
    }

    private void a(List<String> list, String str, String str2) {
        if (list == null || list.size() == 0) {
            return;
        }
        if (!TextUtils.isEmpty(str)) {
            c(list, str);
        }
        String str3 = list.get(0);
        if (str3.equals(str)) {
            return;
        }
        c(str3);
        c();
        a(str3, str2);
        p.a(m.a().f(), "tkay_sdk", d, str3);
    }

    private static boolean a(List<String> list, String str) {
        if (TextUtils.isEmpty(str) || list.size() <= 0) {
            return false;
        }
        String str2 = list.get(0);
        d("isCanSwitchDomain() >>> firstDomain = " + str2 + " failedDomain = " + str);
        return str.equals(str2);
    }

    private static void b(List<String> list, String str) {
        if (TextUtils.isEmpty(str) || list == null) {
            return;
        }
        int iIndexOf = list.indexOf(str);
        if (iIndexOf > 0) {
            list.remove(str);
            list.add(0, str);
        } else if (iIndexOf < 0) {
            list.add(0, str);
        }
    }

    private static void c(List<String> list, String str) {
        if (TextUtils.isEmpty(str) || list == null) {
            return;
        }
        int iIndexOf = list.indexOf(str);
        if (iIndexOf >= 0 && iIndexOf < list.size() - 1) {
            list.remove(str);
            list.add(str);
        } else if (iIndexOf < 0) {
            list.add(str);
        }
    }

    private void b(Context context) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        this.n = jCurrentTimeMillis;
        p.a(context, "tkay_sdk", c, jCurrentTimeMillis);
    }

    private Long c(Context context) {
        long jLongValue = this.n;
        if (jLongValue == 0) {
            jLongValue = p.a(context, "tkay_sdk", c, (Long) 0L).longValue();
        }
        return Long.valueOf(jLongValue);
    }

    private static boolean b() {
        String language;
        try {
            language = Locale.getDefault().getLanguage();
        } catch (Exception unused) {
            language = "";
        }
        return language.equalsIgnoreCase("ru");
    }

    private static void c() {
        b.a(m.a().f()).b();
    }

    private static void d(String str) {
        StringBuilder sb = new StringBuilder();
        sb.append(str);
        sb.append(" threadId = ");
        sb.append(Thread.currentThread().getId());
    }

    private void a(String str, String str2) {
        c.c(this.p, str, str2, String.valueOf(c(m.a().f())));
    }

    static void a(a aVar, Context context) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        aVar.n = jCurrentTimeMillis;
        p.a(context, "tkay_sdk", c, jCurrentTimeMillis);
    }
}
