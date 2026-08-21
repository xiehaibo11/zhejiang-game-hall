package com.xiaomi.push.service;

import android.content.Context;
import android.net.Uri;
import android.provider.Settings;

/* JADX INFO: loaded from: classes4.dex */
public class bn {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static bn f8340a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private int f957a = 0;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Context f958a;

    private bn(Context context) {
        this.f958a = context.getApplicationContext();
    }

    public static bn a(Context context) {
        if (f8340a == null) {
            f8340a = new bn(context);
        }
        return f8340a;
    }

    public int a() {
        int i = this.f957a;
        if (i != 0) {
            return i;
        }
        try {
            this.f957a = Settings.Global.getInt(this.f958a.getContentResolver(), "device_provisioned", 0);
        } catch (Exception unused) {
        }
        return this.f957a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public Uri m658a() {
        return Settings.Global.getUriFor("device_provisioned");
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m659a() {
        return com.xiaomi.push.ae.f106a.contains("xmsf") || com.xiaomi.push.ae.f106a.contains("xiaomi") || com.xiaomi.push.ae.f106a.contains("miui");
    }
}
