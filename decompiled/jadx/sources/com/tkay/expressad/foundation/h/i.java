package com.tkay.expressad.foundation.h;

import android.content.Context;
import android.content.res.Resources;

/* JADX INFO: loaded from: classes3.dex */
public final class i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f6944a = "layout";
    public static final String b = "id";
    public static final String c = "drawable";
    public static final String d = "color";
    public static final String e = "style";
    public static final String f = "anim";
    public static final String g = "string";
    public static final int h = -1;
    private static final String i = "ResourceUtil";

    public static Resources a(Context context) {
        if (context != null) {
            try {
                return context.getResources();
            } catch (Exception e2) {
                new StringBuilder("Resource error:").append(e2.getMessage());
            }
        }
        return null;
    }

    public static int a(Context context, String str, String str2) {
        String packageName = "";
        try {
            packageName = com.tkay.expressad.foundation.b.b.b().a();
        } catch (Exception unused) {
        }
        try {
            if (w.a(packageName) && context != null) {
                packageName = context.getPackageName();
            }
            if (!w.a(packageName) && context != null) {
                return context.getResources().getIdentifier(str, str2, packageName);
            }
        } catch (Exception unused2) {
        }
        return -1;
    }
}
