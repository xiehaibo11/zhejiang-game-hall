package com.bytedance.pangle.util;

import android.content.SharedPreferences;
import com.bytedance.pangle.Zeus;
import com.bytedance.pangle.log.ZeusLogger;
import com.xiaomi.mipush.sdk.Constants;
import java.util.Locale;

public class l {
    private static volatile l b;
    public SharedPreferences a = Zeus.getAppApplication().getSharedPreferences("pangle_meta_data_sp", 0);

    public static l a() {
        if (b == null) {
            synchronized (l.class) {
                if (b == null) {
                    b = new l();
                }
            }
        }
        return b;
    }

    private l() {
    }

    public final int a(String str) {
        int i = this.a.getInt("PLUGIN_API_VERSION_".concat(String.valueOf(str)), 0);
        ZeusLogger.i(ZeusLogger.TAG_INIT, "ZeusSpUtils getPluginApiVersion pluginPKg = " + str + ", pluginApiVersion = " + i);
        return i;
    }

    public final String b(String str) {
        String string = this.a.getString("HOST_IDENTITY_".concat(String.valueOf(str)), "");
        ZeusLogger.i(ZeusLogger.TAG_INIT, "ZeusSpUtils getHostIdentity pluginPKg = " + str + ", hostIdentity = " + string);
        return string;
    }

    public final void a(String str, int i, boolean z) {
        SharedPreferences.Editor editorEdit = this.a.edit();
        String str2 = "INSTALLED_" + str + Constants.ACCEPT_TIME_SEPARATOR_SERVER + i;
        if (z) {
            editorEdit.putBoolean(str2, true);
        } else {
            editorEdit.remove(str2);
        }
        editorEdit.apply();
    }

    public final boolean a(String str, int i) {
        return this.a.getBoolean(String.format(Locale.getDefault(), "INSTALLED_%s-%d", str, Integer.valueOf(i)), false);
    }
}
