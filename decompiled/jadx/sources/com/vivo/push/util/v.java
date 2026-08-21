package com.vivo.push.util;

import android.content.ContentResolver;
import android.content.Context;
import android.provider.Settings;

/* JADX INFO: loaded from: classes4.dex */
final class v implements d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private ContentResolver f7955a;

    v() {
    }

    @Override // com.vivo.push.util.d
    public final String a(String str, String str2) {
        try {
            return Settings.System.getString(this.f7955a, str);
        } catch (Exception e) {
            e.printStackTrace();
            p.b("SettingsCache", "getString error by ".concat(String.valueOf(str)));
            return str2;
        }
    }

    @Override // com.vivo.push.util.d
    public final boolean a(Context context) {
        if (!j.b()) {
            return false;
        }
        this.f7955a = context.getContentResolver();
        return true;
    }

    @Override // com.vivo.push.util.d
    public final void b(String str, String str2) {
        try {
            Settings.System.putString(this.f7955a, str, str2);
        } catch (Exception e) {
            e.printStackTrace();
            p.b("SettingsCache", "putString error by ".concat(String.valueOf(str)));
        }
    }
}
