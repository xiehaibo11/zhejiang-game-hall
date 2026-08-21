package com.xiaomi.push;

import android.content.Context;
import android.text.TextUtils;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public class ba implements au {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile ba f8049a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private int f142a = az.f8047a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private au f143a;

    private ba(Context context) {
        this.f143a = az.a(context);
        com.xiaomi.channel.commonutils.logger.b.m43a("create id manager is: " + this.f142a);
    }

    public static ba a(Context context) {
        if (f8049a == null) {
            synchronized (ba.class) {
                if (f8049a == null) {
                    f8049a = new ba(context.getApplicationContext());
                }
            }
        }
        return f8049a;
    }

    private String a(String str) {
        return str == null ? "" : str;
    }

    @Override // com.xiaomi.push.au
    /* JADX INFO: renamed from: a */
    public String mo126a() {
        return a(this.f143a.mo126a());
    }

    public void a() {
    }

    public void a(Map<String, String> map) {
        if (map == null) {
            return;
        }
        String strB = b();
        if (!TextUtils.isEmpty(strB)) {
            map.put("udid", strB);
        }
        String strMo126a = mo126a();
        if (!TextUtils.isEmpty(strMo126a)) {
            map.put("oaid", strMo126a);
        }
        String strC = c();
        if (!TextUtils.isEmpty(strC)) {
            map.put("vaid", strC);
        }
        String strD = d();
        if (!TextUtils.isEmpty(strD)) {
            map.put("aaid", strD);
        }
        map.put("oaid_type", String.valueOf(this.f142a));
    }

    @Override // com.xiaomi.push.au
    /* JADX INFO: renamed from: a */
    public boolean mo127a() {
        return this.f143a.mo127a();
    }

    public String b() {
        return null;
    }

    public String c() {
        return null;
    }

    public String d() {
        return null;
    }
}
