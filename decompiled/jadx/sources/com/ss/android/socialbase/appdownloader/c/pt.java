package com.ss.android.socialbase.appdownloader.c;

import android.os.Build;
import android.text.TextUtils;
import com.alipay.sdk.m.c.a;
import com.huawei.hms.common.PackageConstants;
import com.ss.android.socialbase.appdownloader.fw;
import com.ss.android.socialbase.downloader.constants.DownloadConstants;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.ss.android.socialbase.downloader.setting.DownloadSettingKeys;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;
import com.ymnsdk.replugin.util.RomUtil;
import java.io.BufferedReader;
import java.io.InputStreamReader;

/* JADX INFO: loaded from: classes3.dex */
public class pt {
    private static String c = null;
    public static String df = "";
    private static String fw = null;
    private static String pp = null;
    private static String pt = "";
    public static String q;
    public static String rg;

    public static boolean rg() {
        return rg(RomUtil.ROM_EMUI);
    }

    public static boolean df() {
        return rg(RomUtil.ROM_MIUI);
    }

    public static boolean q() {
        return rg(RomUtil.ROM_VIVO);
    }

    public static boolean pt() {
        v();
        return rg(rg);
    }

    public static boolean pp() {
        return rg(RomUtil.ROM_FLYME);
    }

    public static boolean c() {
        return rg("SAMSUNG");
    }

    public static String fw() {
        if (pp == null) {
            rg("");
        }
        return pp;
    }

    public static String ux() {
        if (c == null) {
            rg("");
        }
        return c;
    }

    public static String rz() {
        if (q == null) {
            rg("");
        }
        return q;
    }

    private static void v() {
        if (TextUtils.isEmpty(rg)) {
            DownloadComponentManager.ensureOPPO();
            rg = DownloadConstants.UPPER_OPPO;
            pt = "ro.build.version." + DownloadConstants.LOWER_OPPO + "rom";
            df = "com." + DownloadConstants.LOWER_OPPO + ".market";
        }
    }

    public static boolean rg(String str) {
        v();
        String str2 = pp;
        if (str2 != null) {
            return str2.equals(str);
        }
        String strPt = pt("ro.miui.ui.version.name");
        c = strPt;
        if (!TextUtils.isEmpty(strPt)) {
            pp = RomUtil.ROM_MIUI;
            q = "com.xiaomi.market";
            fw = c;
        } else {
            String strPt2 = pt(a.f1162a);
            c = strPt2;
            if (!TextUtils.isEmpty(strPt2)) {
                pp = RomUtil.ROM_EMUI;
                q = PackageConstants.SERVICES_PACKAGE_APPMARKET;
            } else {
                String strPt3 = pt(pt);
                c = strPt3;
                if (!TextUtils.isEmpty(strPt3)) {
                    pp = rg;
                    if (fw.rg(df) > -1) {
                        q = df;
                    } else {
                        q = "com.heytap.market";
                    }
                } else {
                    String strPt4 = pt("ro.vivo.os.version");
                    c = strPt4;
                    if (!TextUtils.isEmpty(strPt4)) {
                        pp = RomUtil.ROM_VIVO;
                        q = "com.bbk.appstore";
                    } else {
                        String strPt5 = pt("ro.smartisan.version");
                        c = strPt5;
                        if (!TextUtils.isEmpty(strPt5)) {
                            pp = RomUtil.ROM_SMARTISAN;
                            q = "com.smartisanos.appstore";
                        } else {
                            String strPt6 = pt("ro.gn.sv.version");
                            c = strPt6;
                            if (!TextUtils.isEmpty(strPt6)) {
                                pp = "QIONEE";
                                q = "com.gionee.aora.market";
                            } else {
                                String strPt7 = pt("ro.lenovo.lvp.version");
                                c = strPt7;
                                if (!TextUtils.isEmpty(strPt7)) {
                                    pp = "LENOVO";
                                    q = "com.lenovo.leos.appstore";
                                } else if (bm().toUpperCase().contains("SAMSUNG")) {
                                    pp = "SAMSUNG";
                                    q = "com.sec.android.app.samsungapps";
                                } else if (bm().toUpperCase().contains("ZTE")) {
                                    pp = "ZTE";
                                    q = "zte.com.market";
                                } else if (bm().toUpperCase().contains("NUBIA")) {
                                    pp = "NUBIA";
                                    q = "cn.nubia.neostore";
                                } else if (b().toUpperCase().contains(RomUtil.ROM_FLYME)) {
                                    pp = RomUtil.ROM_FLYME;
                                    q = "com.meizu.mstore";
                                    c = b();
                                } else if (bm().toUpperCase().contains("ONEPLUS")) {
                                    pp = "ONEPLUS";
                                    c = pt("ro.rom.version");
                                    if (fw.rg(df) > -1) {
                                        q = df;
                                    } else {
                                        q = "com.heytap.market";
                                    }
                                } else {
                                    pp = bm().toUpperCase();
                                    q = "";
                                    c = "";
                                }
                            }
                        }
                    }
                }
            }
        }
        return pp.equals(str);
    }

    public static String df(String str) {
        BufferedReader bufferedReader;
        try {
            bufferedReader = new BufferedReader(new InputStreamReader(Runtime.getRuntime().exec("getprop " + str).getInputStream()), 1024);
        } catch (Throwable unused) {
            bufferedReader = null;
        }
        try {
            String line = bufferedReader.readLine();
            bufferedReader.close();
            DownloadUtils.safeClose(bufferedReader);
            return line;
        } catch (Throwable unused2) {
            DownloadUtils.safeClose(bufferedReader);
            return null;
        }
    }

    public static String q(String str) throws Throwable {
        return (String) Class.forName("android.os.SystemProperties").getMethod(MonitorConstants.CONNECT_TYPE_GET, String.class).invoke(null, str);
    }

    public static String pt(String str) {
        if (DownloadSetting.getGlobalSettings().optBoolean(DownloadSettingKeys.ENABLE_REFLECT_SYSTEM_PROPERTIES, true)) {
            try {
                return q(str);
            } catch (Throwable th) {
                th.printStackTrace();
                return df(str);
            }
        }
        return df(str);
    }

    public static String bm() {
        return Build.MANUFACTURER == null ? "" : Build.MANUFACTURER.trim();
    }

    public static String b() {
        return Build.DISPLAY == null ? "" : Build.DISPLAY.trim();
    }

    public static boolean hq() {
        un();
        return "V10".equals(fw);
    }

    public static boolean oh() {
        un();
        return "V11".equals(fw);
    }

    public static boolean f() {
        un();
        return "V12".equals(fw);
    }

    private static void un() {
        if (fw == null) {
            try {
                fw = pt("ro.miui.ui.version.name");
            } catch (Exception e) {
                e.printStackTrace();
            }
            String str = fw;
            if (str == null) {
                str = "";
            }
            fw = str;
        }
    }
}
