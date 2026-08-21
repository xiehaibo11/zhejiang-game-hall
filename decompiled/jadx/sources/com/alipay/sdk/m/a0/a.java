package com.alipay.sdk.m.a0;

import android.content.Context;
import com.kuaishou.weapon.p0.bp;

/* JADX INFO: loaded from: classes.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static a f1154a = new a();

    public static a a() {
        return f1154a;
    }

    public static String a(Context context) {
        try {
            return context.getPackageManager().getPackageInfo(context.getPackageName(), 16).versionName;
        } catch (Exception unused) {
            return bp.e;
        }
    }
}
