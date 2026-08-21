package com.huawei.hms.hatool;

import android.content.Context;
import java.util.LinkedHashMap;

/* JADX INFO: loaded from: classes.dex */
public abstract class j1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static h1 f2103a;

    public static synchronized h1 a() {
        if (f2103a == null) {
            f2103a = m1.c().b();
        }
        return f2103a;
    }

    public static void a(int i, String str, LinkedHashMap<String, String> linkedHashMap) {
        if (a() == null || !u0.b().a()) {
            return;
        }
        if (i == 1 || i == 0) {
            f2103a.a(i, str, linkedHashMap);
            return;
        }
        y.d("hmsSdk", "Data type no longer collects range.type: " + i);
    }

    @Deprecated
    public static void a(Context context, String str, String str2) {
        if (a() != null) {
            f2103a.a(context, str, str2);
        }
    }

    public static boolean b() {
        return m1.c().a();
    }

    public static void c() {
        if (a() == null || !u0.b().a()) {
            return;
        }
        f2103a.a(-1);
    }
}
