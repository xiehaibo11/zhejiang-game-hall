package com.kwad.sdk.utils;

import android.os.Build;
import android.support.v4.os.EnvironmentCompat;
import android.text.TextUtils;
import com.ymnsdk.replugin.util.RomUtil;

/* JADX INFO: loaded from: classes2.dex */
public final class as {
    private static String aJc;
    private static String aJd;

    public static boolean IS() {
        return W(RomUtil.ROM_EMUI);
    }

    public static boolean IT() {
        return W(RomUtil.ROM_MIUI);
    }

    public static boolean IU() {
        return W(RomUtil.ROM_FLYME);
    }

    private static boolean W(String str) {
        String upperCase;
        String str2 = aJc;
        if (str2 != null) {
            return str2.contains(str);
        }
        String str3 = bd.get("ro.build.version.opporom");
        aJd = str3;
        if (TextUtils.isEmpty(str3)) {
            String str4 = bd.get("ro.vivo.os.version");
            aJd = str4;
            if (TextUtils.isEmpty(str4)) {
                String str5 = bd.get(com.alipay.sdk.m.c.a.f1162a);
                aJd = str5;
                if (TextUtils.isEmpty(str5)) {
                    String str6 = bd.get("ro.miui.ui.version.name");
                    aJd = str6;
                    if (TextUtils.isEmpty(str6)) {
                        String str7 = bd.get("ro.product.system.manufacturer");
                        aJd = str7;
                        if (TextUtils.isEmpty(str7)) {
                            String str8 = bd.get("ro.smartisan.version");
                            aJd = str8;
                            if (TextUtils.isEmpty(str8)) {
                                String str9 = "SAMSUNG";
                                if (!bd.get("ro.product.manufacturer").toUpperCase().contains("SAMSUNG")) {
                                    String str10 = Build.DISPLAY;
                                    aJd = str10;
                                    String upperCase2 = str10.toUpperCase();
                                    str9 = RomUtil.ROM_FLYME;
                                    if (!upperCase2.contains(RomUtil.ROM_FLYME)) {
                                        aJd = EnvironmentCompat.MEDIA_UNKNOWN;
                                        upperCase = Build.MANUFACTURER.toUpperCase();
                                    }
                                }
                                aJc = str9;
                                return aJc.contains(str);
                            }
                            upperCase = RomUtil.ROM_SMARTISAN;
                        } else {
                            upperCase = "OnePlus";
                        }
                    } else {
                        upperCase = RomUtil.ROM_MIUI;
                    }
                } else {
                    upperCase = RomUtil.ROM_EMUI;
                }
            } else {
                upperCase = RomUtil.ROM_VIVO;
            }
        } else {
            upperCase = RomUtil.ROM_OPPO;
        }
        aJc = upperCase;
        return aJc.contains(str);
    }

    public static String getName() {
        if (aJc == null) {
            W("");
        }
        return aJc;
    }

    public static String getVersion() {
        if (aJd == null) {
            W("");
        }
        return aJd;
    }
}
