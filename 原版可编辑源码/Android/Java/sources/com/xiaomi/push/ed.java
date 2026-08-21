package com.xiaomi.push;

import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import java.util.HashMap;

public final class ed {
    private static volatile ed a;
    private int a;
    private Context a;
    private eh a;
    private String a;
    private HashMap<ef, eg> a;
    private String b;

    private ed(Context context) {
        HashMap<ef, eg> map = new HashMap<>();
        this.a = map;
        this.a = context;
        map.put(ef.b, new ej());
        this.a.put(ef.c, new ek());
        this.a.put(ef.a, new eb());
        this.a.put(ef.d, new ei());
    }

    public static ed a(Context context) {
        if (a == null) {
            synchronized (ed.class) {
                if (a == null) {
                    a = new ed(context);
                }
            }
        }
        return a;
    }

    private void a(ef efVar, Context context, ec ecVar) {
        this.a.get(efVar).a(context, ecVar);
    }

    public static boolean a(Context context) {
        return com.xiaomi.push.service.al.a(context, context.getPackageName());
    }

    public int a() {
        return this.a;
    }

    public eh a() {
        return this.a;
    }

    public String a() {
        return this.a;
    }

    public void a(int i) {
        this.a = i;
    }

    public void a(Context context, String str, int i, String str2, String str3) {
        if (context != null && !TextUtils.isEmpty(str) && !TextUtils.isEmpty(str2) && !TextUtils.isEmpty(str3)) {
            a(i);
            al.a(this.a).a(new ee(this, str, context, str2, str3));
        } else {
            dz.a(context, "" + str, 1008, "A receive a incorrect message");
        }
    }

    public void a(ef efVar, Context context, Intent intent, String str) {
        if (efVar != null) {
            this.a.get(efVar).a(context, intent, str);
        } else {
            dz.a(context, "null", 1008, "A receive a incorrect message with empty type");
        }
    }

    public void a(eh ehVar) {
        this.a = ehVar;
    }

    public void a(String str) {
        this.a = str;
    }

    public void a(String str, String str2, int i, eh ehVar) {
        a(str);
        b(str2);
        a(i);
        a(ehVar);
    }

    public String b() {
        return this.b;
    }

    public void b(String str) {
        this.b = str;
    }
}
