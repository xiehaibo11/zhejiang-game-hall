package com.xiaomi.push;

import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import java.util.HashMap;

/* JADX INFO: loaded from: classes4.dex */
public final class ed {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile ed f8130a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private int f316a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Context f317a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private eh f318a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private String f319a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private HashMap<ef, eg> f320a;
    private String b;

    private ed(Context context) {
        HashMap<ef, eg> map = new HashMap<>();
        this.f320a = map;
        this.f317a = context;
        map.put(ef.SERVICE_ACTION, new ej());
        this.f320a.put(ef.SERVICE_COMPONENT, new ek());
        this.f320a.put(ef.ACTIVITY, new eb());
        this.f320a.put(ef.PROVIDER, new ei());
    }

    public static ed a(Context context) {
        if (f8130a == null) {
            synchronized (ed.class) {
                if (f8130a == null) {
                    f8130a = new ed(context);
                }
            }
        }
        return f8130a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(ef efVar, Context context, ec ecVar) {
        this.f320a.get(efVar).a(context, ecVar);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static boolean m310a(Context context) {
        return com.xiaomi.push.service.al.m621a(context, context.getPackageName());
    }

    public int a() {
        return this.f316a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public eh m311a() {
        return this.f318a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public String m312a() {
        return this.f319a;
    }

    public void a(int i) {
        this.f316a = i;
    }

    public void a(Context context, String str, int i, String str2, String str3) {
        if (context != null && !TextUtils.isEmpty(str) && !TextUtils.isEmpty(str2) && !TextUtils.isEmpty(str3)) {
            a(i);
            al.a(this.f317a).a(new ee(this, str, context, str2, str3));
        } else {
            dz.a(context, "" + str, 1008, "A receive a incorrect message");
        }
    }

    public void a(ef efVar, Context context, Intent intent, String str) {
        if (efVar != null) {
            this.f320a.get(efVar).a(context, intent, str);
        } else {
            dz.a(context, "null", 1008, "A receive a incorrect message with empty type");
        }
    }

    public void a(eh ehVar) {
        this.f318a = ehVar;
    }

    public void a(String str) {
        this.f319a = str;
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
