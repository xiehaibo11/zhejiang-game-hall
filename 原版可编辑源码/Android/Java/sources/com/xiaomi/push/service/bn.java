package com.xiaomi.push.service;

import android.content.Context;
import android.net.Uri;
import android.provider.Settings;

public class bn {
    private static bn a;
    private int a = 0;
    private Context a;

    private bn(Context context) {
        this.a = context.getApplicationContext();
    }

    public static bn a(Context context) {
        if (a == null) {
            a = new bn(context);
        }
        return a;
    }

    public int a() {
        int i = this.a;
        if (i != 0) {
            return i;
        }
        try {
            this.a = Settings.Global.getInt(this.a.getContentResolver(), "device_provisioned", 0);
        } catch (Exception unused) {
        }
        return this.a;
    }

    public Uri a() {
        return Settings.Global.getUriFor("device_provisioned");
    }

    public boolean a() {
        return com.xiaomi.push.ae.a.contains("xmsf") || com.xiaomi.push.ae.a.contains("xiaomi") || com.xiaomi.push.ae.a.contains("miui");
    }
}
