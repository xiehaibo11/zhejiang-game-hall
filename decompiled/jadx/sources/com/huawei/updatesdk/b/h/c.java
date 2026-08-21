package com.huawei.updatesdk.b.h;

import android.content.Context;
import android.content.res.Resources;
import com.tkay.expressad.foundation.h.i;

/* JADX INFO: loaded from: classes2.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f2340a;
    private static Resources b;

    public static int a(Context context, String str) {
        return a(context, str, "id");
    }

    private static int a(Context context, String str, String str2) {
        if (b == null) {
            b = context.getResources();
        }
        return b.getIdentifier(str, str2, a(context));
    }

    private static String a(Context context) {
        if (f2340a == null) {
            f2340a = context.getPackageName();
        }
        return f2340a;
    }

    public static int b(Context context, String str) {
        return a(context, str, "layout");
    }

    public static int c(Context context, String str) {
        return a(context, str, i.g);
    }

    public static String d(Context context, String str) {
        try {
            return context.getResources().getString(a(context, str, i.g));
        } catch (Resources.NotFoundException unused) {
            com.huawei.updatesdk.a.a.a.a("UpdateSDK", "recource get error name: " + str);
            return "";
        }
    }
}
