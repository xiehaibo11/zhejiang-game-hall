package com.loc;

import android.os.Build;
import android.text.TextUtils;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Iterator;
import java.util.Properties;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* JADX INFO: compiled from: RomIdentifier.java */
/* JADX INFO: loaded from: classes2.dex */
public final class ar {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile aq f2846a;
    private static Properties b = b();

    private ar() {
    }

    public static aq a() {
        if (f2846a == null) {
            synchronized (ar.class) {
                if (f2846a == null) {
                    try {
                        aq aqVarA = a(Build.MANUFACTURER);
                        if ("".equals(aqVarA.a())) {
                            Iterator it = Arrays.asList(aq.MIUI.a(), aq.Flyme.a(), aq.RH.a(), aq.ColorOS.a(), aq.FuntouchOS.a(), aq.SmartisanOS.a(), aq.AmigoOS.a(), aq.Sense.a(), aq.LG.a(), aq.Google.a(), aq.NubiaUI.a()).iterator();
                            while (true) {
                                if (!it.hasNext()) {
                                    aqVarA = aq.Other;
                                    break;
                                }
                                aq aqVarA2 = a((String) it.next());
                                if (!"".equals(aqVarA2.a())) {
                                    aqVarA = aqVarA2;
                                    break;
                                }
                            }
                        }
                        f2846a = aqVarA;
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                }
            }
        }
        return f2846a;
    }

    private static aq a(String str) {
        if (str == null || str.length() <= 0) {
            return aq.Other;
        }
        if (str.equals(aq.MIUI.a())) {
            aq aqVar = aq.MIUI;
            if (a(aqVar)) {
                return aqVar;
            }
        } else if (str.equals(aq.Flyme.a())) {
            aq aqVar2 = aq.Flyme;
            if (b(aqVar2)) {
                return aqVar2;
            }
        } else if (str.equals(aq.RH.a())) {
            aq aqVar3 = aq.RH;
            if (c(aqVar3)) {
                return aqVar3;
            }
        } else if (str.equals(aq.ColorOS.a())) {
            aq aqVar4 = aq.ColorOS;
            if (d(aqVar4)) {
                return aqVar4;
            }
        } else if (str.equals(aq.FuntouchOS.a())) {
            aq aqVar5 = aq.FuntouchOS;
            if (e(aqVar5)) {
                return aqVar5;
            }
        } else if (str.equals(aq.SmartisanOS.a())) {
            aq aqVar6 = aq.SmartisanOS;
            if (f(aqVar6)) {
                return aqVar6;
            }
        } else if (str.equals(aq.AmigoOS.a())) {
            aq aqVar7 = aq.AmigoOS;
            if (g(aqVar7)) {
                return aqVar7;
            }
        } else if (str.equals(aq.EUI.a())) {
            aq aqVar8 = aq.EUI;
            if (h(aqVar8)) {
                return aqVar8;
            }
        } else if (str.equals(aq.Sense.a())) {
            aq aqVar9 = aq.Sense;
            if (i(aqVar9)) {
                return aqVar9;
            }
        } else if (str.equals(aq.LG.a())) {
            aq aqVar10 = aq.LG;
            if (j(aqVar10)) {
                return aqVar10;
            }
        } else if (str.equals(aq.Google.a())) {
            aq aqVar11 = aq.Google;
            if (k(aqVar11)) {
                return aqVar11;
            }
        } else if (str.equals(aq.NubiaUI.a())) {
            aq aqVar12 = aq.NubiaUI;
            if (l(aqVar12)) {
                return aqVar12;
            }
        }
        return aq.Other;
    }

    private static void a(aq aqVar, String str) {
        Matcher matcher = Pattern.compile("([\\d.]+)[^\\d]*").matcher(str);
        if (matcher.find()) {
            try {
                String strGroup = matcher.group(1);
                aqVar.a(strGroup);
                aqVar.a(Integer.parseInt(strGroup.split("\\.")[0]));
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    private static boolean a(aq aqVar) {
        if (TextUtils.isEmpty(b("ro.miui.ui.version.name"))) {
            return false;
        }
        String strB = b("ro.build.version.incremental");
        a(aqVar, strB);
        aqVar.b(strB);
        return true;
    }

    private static String b(String str) {
        String property = b.getProperty("[" + str + "]", null);
        return TextUtils.isEmpty(property) ? c(str) : property.replace("[", "").replace("]", "");
    }

    private static Properties b() {
        Properties properties = new Properties();
        try {
            properties.load(Runtime.getRuntime().exec("getprop").getInputStream());
        } catch (Exception e) {
            e.printStackTrace();
        }
        return properties;
    }

    private static boolean b(aq aqVar) {
        String strB = b("ro.flyme.published");
        String strB2 = b("ro.meizu.setupwizard.flyme");
        if (TextUtils.isEmpty(strB) && TextUtils.isEmpty(strB2)) {
            return false;
        }
        String strB3 = b("ro.build.display.id");
        a(aqVar, strB3);
        aqVar.b(strB3);
        return true;
    }

    private static String c(String str) throws Throwable {
        BufferedReader bufferedReader;
        BufferedReader bufferedReader2 = null;
        try {
            bufferedReader = new BufferedReader(new InputStreamReader(Runtime.getRuntime().exec("getprop ".concat(String.valueOf(str))).getInputStream()), 1024);
        } catch (IOException unused) {
            bufferedReader = null;
        } catch (Throwable th) {
            th = th;
        }
        try {
            String line = bufferedReader.readLine();
            bufferedReader.close();
            try {
                bufferedReader.close();
            } catch (IOException unused2) {
            }
            return line;
        } catch (IOException unused3) {
            if (bufferedReader != null) {
                try {
                    bufferedReader.close();
                } catch (IOException unused4) {
                }
            }
            return null;
        } catch (Throwable th2) {
            th = th2;
            bufferedReader2 = bufferedReader;
            if (bufferedReader2 != null) {
                try {
                    bufferedReader2.close();
                } catch (IOException unused5) {
                }
            }
            throw th;
        }
    }

    private static boolean c(aq aqVar) {
        String strB = b(com.alipay.sdk.m.c.a.f1162a);
        if (TextUtils.isEmpty(strB)) {
            return false;
        }
        a(aqVar, strB);
        aqVar.b(strB);
        return true;
    }

    private static boolean d(aq aqVar) {
        String strB = b("ro.build.version.opporom");
        if (TextUtils.isEmpty(strB)) {
            return false;
        }
        a(aqVar, strB);
        aqVar.b(strB);
        return true;
    }

    private static boolean e(aq aqVar) {
        String strB = b("ro.vivo.os.build.display.id");
        if (TextUtils.isEmpty(strB)) {
            return false;
        }
        a(aqVar, strB);
        aqVar.b(strB);
        return true;
    }

    private static boolean f(aq aqVar) {
        String strB = b("ro.smartisan.version");
        if (TextUtils.isEmpty(strB)) {
            return false;
        }
        a(aqVar, strB);
        aqVar.b(strB);
        return true;
    }

    private static boolean g(aq aqVar) {
        String strB = b("ro.build.display.id");
        if (TextUtils.isEmpty(strB) || !strB.matches("amigo([\\d.]+)[a-zA-Z]*")) {
            return false;
        }
        a(aqVar, strB);
        aqVar.b(strB);
        return true;
    }

    private static boolean h(aq aqVar) {
        String strB = b("ro.letv.release.version");
        if (TextUtils.isEmpty(strB)) {
            return false;
        }
        a(aqVar, strB);
        aqVar.b(strB);
        return true;
    }

    private static boolean i(aq aqVar) {
        String strB = b("ro.build.sense.version");
        if (TextUtils.isEmpty(strB)) {
            return false;
        }
        a(aqVar, strB);
        aqVar.b(strB);
        return true;
    }

    private static boolean j(aq aqVar) {
        String strB = b("sys.lge.lgmdm_version");
        if (TextUtils.isEmpty(strB)) {
            return false;
        }
        a(aqVar, strB);
        aqVar.b(strB);
        return true;
    }

    private static boolean k(aq aqVar) {
        if (!"android-google".equals(b("ro.com.google.clientidbase"))) {
            return false;
        }
        String strB = b("ro.build.version.release");
        aqVar.a(Build.VERSION.SDK_INT);
        aqVar.b(strB);
        return true;
    }

    private static boolean l(aq aqVar) {
        String strB = b("ro.build.nubia.rom.code");
        if (TextUtils.isEmpty(strB)) {
            return false;
        }
        a(aqVar, strB);
        aqVar.b(strB);
        return true;
    }
}
