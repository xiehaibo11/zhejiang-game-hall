package com.tencent.open.utils;

import android.content.Context;
import java.io.File;

/* JADX INFO: compiled from: ProGuard */
/* JADX INFO: loaded from: classes3.dex */
public final class g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Context f5535a;

    public static final Context a() {
        Context context = f5535a;
        if (context == null) {
            return null;
        }
        return context;
    }

    public static final void a(Context context) {
        f5535a = context;
    }

    public static final String b() {
        return a() == null ? "" : a().getPackageName();
    }

    public static final File c() {
        if (a() == null) {
            return null;
        }
        return a().getFilesDir();
    }

    public static final File d() {
        Context contextA = a();
        if (contextA != null) {
            return contextA.getCacheDir();
        }
        return null;
    }

    public static final File e() {
        return a((String) null);
    }

    public static final File a(String str) {
        return m.h(a(), str);
    }
}
