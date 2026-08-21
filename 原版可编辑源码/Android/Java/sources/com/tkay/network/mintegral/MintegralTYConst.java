package com.tkay.network.mintegral;

import android.text.TextUtils;
import java.lang.reflect.Field;
import java.lang.reflect.Modifier;

public class MintegralTYConst {
    public static final int NETWORK_FIRM_ID = 6;

    public static class DEBUGGER_CONFIG {
        public static final int Mintegral_INTERSTITIAL_IMAGE = 1;
        public static final int Mintegral_INTERSTITIAL_VIDEO = 2;
        public static final int Mintegral_NATIVE_SELF_RENDER = 1;
        public static final int Mintegral_NATIVE_TEMPLATE = 2;
        public static final int Mintegral_NETWORK = 6;
    }

    public static String getNetworkVersion() {
        try {
            Class<?> cls = Class.forName("com.mbridge.msdk.out.MBConfiguration");
            for (Field field : cls.getFields()) {
                field.setAccessible(true);
                if (field.getType().toString().endsWith("java.lang.String") && Modifier.isStatic(field.getModifiers())) {
                    String string = field.get(cls).toString();
                    if (string.startsWith("MAL")) {
                        return string;
                    }
                }
            }
            return "";
        } catch (Throwable unused) {
            return "";
        }
    }

    public static boolean isChinaSdk() {
        String networkVersion = getNetworkVersion();
        return !TextUtils.isEmpty(networkVersion) && networkVersion.endsWith("2");
    }
}
