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

public final class ar {
    private static volatile aq a;
    private static Properties b = b();

    private ar() {
    }

    public static aq a() {
        if (a == null) {
            synchronized (ar.class) {
                if (a == null) {
                    try {
                        aq aqVarA = a(Build.MANUFACTURER);
                        if ("".equals(aqVarA.a())) {
                            Iterator it = Arrays.asList(aq.a.a(), aq.b.a(), aq.c.a(), aq.d.a(), aq.e.a(), aq.f.a(), aq.g.a(), aq.i.a(), aq.j.a(), aq.k.a(), aq.l.a()).iterator();
                            while (true) {
                                if (!it.hasNext()) {
                                    aqVarA = aq.m;
                                    break;
                                }
                                aq aqVarA2 = a((String) it.next());
                                if (!"".equals(aqVarA2.a())) {
                                    aqVarA = aqVarA2;
                                    break;
                                }
                            }
                        }
                        a = aqVarA;
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                }
            }
        }
        return a;
    }

    private static aq a(String str) {
        if (str == null || str.length() <= 0) {
            return aq.m;
        }
        if (str.equals(aq.a.a())) {
            aq aqVar = aq.a;
            if (a(aqVar)) {
                return aqVar;
            }
        } else if (str.equals(aq.b.a())) {
            aq aqVar2 = aq.b;
            if (b(aqVar2)) {
                return aqVar2;
            }
        } else if (str.equals(aq.c.a())) {
            aq aqVar3 = aq.c;
            if (c(aqVar3)) {
                return aqVar3;
            }
        } else if (str.equals(aq.d.a())) {
            aq aqVar4 = aq.d;
            if (d(aqVar4)) {
                return aqVar4;
            }
        } else if (str.equals(aq.e.a())) {
            aq aqVar5 = aq.e;
            if (e(aqVar5)) {
                return aqVar5;
            }
        } else if (str.equals(aq.f.a())) {
            aq aqVar6 = aq.f;
            if (f(aqVar6)) {
                return aqVar6;
            }
        } else if (str.equals(aq.g.a())) {
            aq aqVar7 = aq.g;
            if (g(aqVar7)) {
                return aqVar7;
            }
        } else if (str.equals(aq.h.a())) {
            aq aqVar8 = aq.h;
            if (h(aqVar8)) {
                return aqVar8;
            }
        } else if (str.equals(aq.i.a())) {
            aq aqVar9 = aq.i;
            if (i(aqVar9)) {
                return aqVar9;
            }
        } else if (str.equals(aq.j.a())) {
            aq aqVar10 = aq.j;
            if (j(aqVar10)) {
                return aqVar10;
            }
        } else if (str.equals(aq.k.a())) {
            aq aqVar11 = aq.k;
            if (k(aqVar11)) {
                return aqVar11;
            }
        } else if (str.equals(aq.l.a())) {
            aq aqVar12 = aq.l;
            if (l(aqVar12)) {
                return aqVar12;
            }
        }
        return aq.m;
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
        String strB = b(com.alipay.sdk.m.c.a.a);
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
