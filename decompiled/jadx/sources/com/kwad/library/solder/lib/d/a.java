package com.kwad.library.solder.lib.d;

import android.os.Build;
import android.os.Process;
import com.kwad.sdk.utils.s;
import com.qihoo360.loader2.BuildCompat;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    private static String agI;
    private static String agJ;
    private static final Map<String, String> agK;

    static {
        HashMap map = new HashMap();
        agK = map;
        map.put("mips", "mips");
        agK.put("mips64", "mips64");
        agK.put("x86", "x86");
        agK.put("x86_64", "x86_64");
        agK.put(BuildCompat.ARM64, "arm64-v8a");
    }

    private static boolean is64Bit() {
        if (Build.VERSION.SDK_INT >= 23) {
            return Process.is64Bit();
        }
        if (Build.VERSION.SDK_INT < 21) {
            return false;
        }
        Boolean bool = null;
        try {
            bool = (Boolean) s.f(s.a("dalvik.system.VMRuntime", "getRuntime", new Object[0]), "is64Bit", new Object[0]);
        } catch (Exception e) {
            e.printStackTrace();
        }
        if (bool != null) {
            return bool.booleanValue();
        }
        return false;
    }

    public static String wO() {
        return is64Bit() ? "arm64-v8a" : "armeabi-v7a";
    }
}
