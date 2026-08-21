package com.xiaomi.push;

import android.content.Context;
import android.text.TextUtils;
import java.util.Map;

public class ba implements au {
    private static volatile ba a;
    private int a = az.a;
    private au a;

    private ba(Context context) {
        this.a = az.a(context);
        com.xiaomi.channel.commonutils.logger.b.a("create id manager is: " + this.a);
    }

    public static ba a(Context context) {
        if (a == null) {
            synchronized (ba.class) {
                if (a == null) {
                    a = new ba(context.getApplicationContext());
                }
            }
        }
        return a;
    }

    private String a(String str) {
        return str == null ? "" : str;
    }

    @Override
    public String a() {
        return a(this.a.a());
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
        String strA = a();
        if (!TextUtils.isEmpty(strA)) {
            map.put("oaid", strA);
        }
        String strC = c();
        if (!TextUtils.isEmpty(strC)) {
            map.put("vaid", strC);
        }
        String strD = d();
        if (!TextUtils.isEmpty(strD)) {
            map.put("aaid", strD);
        }
        map.put("oaid_type", String.valueOf(this.a));
    }

    @Override
    public boolean a() {
        return this.a.a();
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
