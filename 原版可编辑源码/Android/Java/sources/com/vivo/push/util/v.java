package com.vivo.push.util;

import android.content.ContentResolver;
import android.content.Context;
import android.provider.Settings;

final class v implements d {
    private ContentResolver a;

    v() {
    }

    @Override
    public final String a(String str, String str2) {
        try {
            return Settings.System.getString(this.a, str);
        } catch (Exception e) {
            e.printStackTrace();
            p.b("SettingsCache", "getString error by ".concat(String.valueOf(str)));
            return str2;
        }
    }

    @Override
    public final boolean a(Context context) {
        if (!j.b()) {
            return false;
        }
        this.a = context.getContentResolver();
        return true;
    }

    @Override
    public final void b(String str, String str2) {
        try {
            Settings.System.putString(this.a, str, str2);
        } catch (Exception e) {
            e.printStackTrace();
            p.b("SettingsCache", "putString error by ".concat(String.valueOf(str)));
        }
    }
}
