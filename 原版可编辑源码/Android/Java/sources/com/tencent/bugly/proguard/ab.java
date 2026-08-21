package com.tencent.bugly.proguard;

import android.app.ActivityManager;
import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.os.Build;
import android.os.Debug;
import android.os.Environment;
import android.os.Process;
import android.os.StatFs;
import android.support.v4.os.EnvironmentCompat;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import com.qihoo360.loader2.BuildCompat;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

public final class ab {
    private static final ArrayList<a> a = new ArrayList<a>() {
        {
            byte b2 = 0;
            add(new l(b2));
            add(new f(b2));
            add(new g(b2));
            add(new m(b2));
            add(new h(b2));
            add(new i(b2));
            add(new k(b2));
            add(new e(b2));
            add(new j(b2));
            add(new b(b2));
            add(new d(b2));
            add(new c(b2));
        }
    };
    private static final Map<Integer, String> b = new HashMap<Integer, String>() {
        {
            put(1, "GPRS");
            put(2, "EDGE");
            put(3, "UMTS");
            put(8, "HSDPA");
            put(9, "HSUPA");
            put(10, "HSPA");
            put(4, "CDMA");
            put(5, "EVDO_0");
            put(6, "EVDO_A");
            put(7, "1xRTT");
            put(11, "iDen");
            put(12, "EVDO_B");
            put(13, "LTE");
            put(14, "eHRPD");
            put(15, "HSPA+");
        }
    };
    private static final String[] c = {"/su", "/su/bin/su", "/sbin/su", "/data/local/xbin/su", "/data/local/bin/su", "/data/local/su", "/system/xbin/su", "/system/bin/su", "/system/sd/xbin/su", "/system/bin/failsafe/su", "/system/bin/cufsdosck", "/system/xbin/cufsdosck", "/system/bin/cufsmgr", "/system/xbin/cufsmgr", "/system/bin/cufaevdd", "/system/xbin/cufaevdd", "/system/bin/conbb", "/system/xbin/conbb"};

    public static String m() {
        return "";
    }

    public static String a() {
        try {
            return Build.MODEL;
        } catch (Throwable th) {
            if (al.a(th)) {
                return "fail";
            }
            th.printStackTrace();
            return "fail";
        }
    }

    public static String b() {
        try {
            return Build.VERSION.RELEASE;
        } catch (Throwable th) {
            if (al.a(th)) {
                return "fail";
            }
            th.printStackTrace();
            return "fail";
        }
    }

    public static int c() {
        try {
            return Build.VERSION.SDK_INT;
        } catch (Throwable th) {
            if (al.a(th)) {
                return -1;
            }
            th.printStackTrace();
            return -1;
        }
    }

    private static boolean s() {
        try {
            return Environment.getExternalStorageState().equals("mounted");
        } catch (Throwable th) {
            if (al.a(th)) {
                return false;
            }
            th.printStackTrace();
            return false;
        }
    }

    public static String d() {
        try {
            return String.valueOf(System.getProperty("os.arch"));
        } catch (Throwable th) {
            if (al.a(th)) {
                return "fail";
            }
            th.printStackTrace();
            return "fail";
        }
    }

    public static String a(Context context) {
        if (context != null && context.getApplicationInfo() != null) {
            String str = context.getApplicationInfo().nativeLibraryDir;
            if (TextUtils.isEmpty(str)) {
                return "fail";
            }
            if (str.endsWith(BuildCompat.ARM)) {
                return "armeabi-v7a";
            }
            if (str.endsWith(BuildCompat.ARM64)) {
                return "arm64-v8a";
            }
            if (str.endsWith("x86")) {
                return "x86";
            }
            if (str.endsWith("x86_64")) {
                return "x86_64";
            }
        }
        return "fail";
    }

    public static long e() {
        try {
            StatFs statFs = new StatFs(Environment.getDataDirectory().getPath());
            return ((long) statFs.getBlockCount()) * ((long) statFs.getBlockSize());
        } catch (Throwable th) {
            if (!al.a(th)) {
                th.printStackTrace();
            }
            return -1L;
        }
    }

    public static long f() {
        try {
            StatFs statFs = new StatFs(Environment.getDataDirectory().getPath());
            return ((long) statFs.getAvailableBlocks()) * ((long) statFs.getBlockSize());
        } catch (Throwable th) {
            if (!al.a(th)) {
                th.printStackTrace();
            }
            return -1L;
        }
    }

    public static long b(Context context) {
        long pss;
        try {
            ActivityManager activityManager = (ActivityManager) context.getSystemService("activity");
            if (activityManager == null) {
                return 0L;
            }
            pss = activityManager.getProcessMemoryInfo(new int[]{Process.myPid()})[0].getTotalPss();
        } catch (Throwable unused) {
            pss = Debug.getPss();
        }
        return pss * 1024;
    }

    /* JADX WARN: Code restructure failed: missing block: B:8:0x001d, code lost:
    
        r0 = java.lang.Long.parseLong(r2.replaceAll("[^\\d]", ""));
     */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:14:0x0034 -> B:33:0x0049). Please report as a decompilation issue!!! */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static long g() throws Throwable {
        BufferedReader bufferedReader;
        Throwable th;
        String line;
        long j2 = 0;
        BufferedReader bufferedReader2 = null;
        try {
        } catch (Throwable th2) {
            th = th2;
        }
        try {
            try {
                bufferedReader = new BufferedReader(new FileReader("/proc/self/status"));
            } catch (Throwable th3) {
                th3.printStackTrace();
            }
            try {
                line = bufferedReader.readLine();
            } catch (Throwable th4) {
                th = th4;
                al.a(th);
                if (bufferedReader != null) {
                    bufferedReader.close();
                }
                return j2 * 1024;
            }
        } catch (Throwable th5) {
            th = th5;
            if (0 != 0) {
                try {
                    bufferedReader2.close();
                } catch (Throwable th6) {
                    th6.printStackTrace();
                }
            }
            throw th;
        }
        while (true) {
            if (line == null) {
                break;
            }
            if (line.startsWith("VmSize")) {
                break;
            }
            line = bufferedReader.readLine();
            return j2 * 1024;
        }
        bufferedReader.close();
        return j2 * 1024;
    }

    public static long h() {
        return Runtime.getRuntime().totalMemory() - Runtime.getRuntime().freeMemory();
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r0v16 */
    /* JADX WARN: Type inference failed for: r0v2 */
    /* JADX WARN: Type inference failed for: r0v5, types: [java.io.BufferedReader] */
    public static long i() throws Throwable {
        FileReader fileReader;
        Throwable th;
        Throwable th2;
        BufferedReader bufferedReader;
        ?? r0 = "/proc/meminfo";
        try {
            try {
                fileReader = new FileReader("/proc/meminfo");
            } catch (Throwable th3) {
                th = th3;
            }
            try {
                bufferedReader = new BufferedReader(fileReader, 2048);
                try {
                    String line = bufferedReader.readLine();
                    if (line != null) {
                        long j2 = Long.parseLong(line.split(":\\s+", 2)[1].toLowerCase().replace("kb", "").trim()) * 1024;
                        try {
                            bufferedReader.close();
                        } catch (IOException e2) {
                            if (!al.a(e2)) {
                                e2.printStackTrace();
                            }
                        }
                        try {
                            fileReader.close();
                        } catch (IOException e3) {
                            if (!al.a(e3)) {
                                e3.printStackTrace();
                            }
                        }
                        return j2;
                    }
                    try {
                        bufferedReader.close();
                    } catch (IOException e4) {
                        if (!al.a(e4)) {
                            e4.printStackTrace();
                        }
                    }
                    try {
                        fileReader.close();
                        return -1L;
                    } catch (IOException e5) {
                        if (al.a(e5)) {
                            return -1L;
                        }
                        e5.printStackTrace();
                        return -1L;
                    }
                } catch (Throwable th4) {
                    th2 = th4;
                    if (!al.a(th2)) {
                        th2.printStackTrace();
                    }
                    if (bufferedReader != null) {
                        try {
                            bufferedReader.close();
                        } catch (IOException e6) {
                            if (!al.a(e6)) {
                                e6.printStackTrace();
                            }
                        }
                    }
                    if (fileReader == null) {
                        return -2L;
                    }
                    try {
                        fileReader.close();
                        return -2L;
                    } catch (IOException e7) {
                        if (al.a(e7)) {
                            return -2L;
                        }
                        e7.printStackTrace();
                        return -2L;
                    }
                }
            } catch (Throwable th5) {
                th = th5;
                r0 = 0;
                if (r0 != 0) {
                    try {
                        r0.close();
                    } catch (IOException e8) {
                        if (!al.a(e8)) {
                            e8.printStackTrace();
                        }
                    }
                }
                if (fileReader != null) {
                    try {
                        fileReader.close();
                    } catch (IOException e9) {
                        if (!al.a(e9)) {
                            e9.printStackTrace();
                        }
                    }
                }
                throw th;
            }
        } catch (Throwable th6) {
            fileReader = null;
            th = th6;
            r0 = 0;
        }
    }

    public static long j() throws Throwable {
        BufferedReader bufferedReader;
        FileReader fileReader;
        BufferedReader bufferedReader2 = null;
        try {
            try {
                fileReader = new FileReader("/proc/meminfo");
                try {
                    bufferedReader = new BufferedReader(fileReader, 2048);
                } catch (Throwable th) {
                    th = th;
                }
            } catch (Throwable th2) {
                th = th2;
                bufferedReader = null;
            }
        } catch (Throwable th3) {
            th = th3;
            bufferedReader = null;
            fileReader = null;
        }
        try {
            bufferedReader.readLine();
            String line = bufferedReader.readLine();
            if (line == null) {
                try {
                    bufferedReader.close();
                } catch (IOException e2) {
                    if (!al.a(e2)) {
                        e2.printStackTrace();
                    }
                }
                try {
                    fileReader.close();
                } catch (IOException e3) {
                    if (!al.a(e3)) {
                        e3.printStackTrace();
                    }
                }
                return -1L;
            }
            long j2 = (Long.parseLong(line.split(":\\s+", 2)[1].toLowerCase().replace("kb", "").trim()) * 1024) + 0;
            String line2 = bufferedReader.readLine();
            if (line2 == null) {
                try {
                    bufferedReader.close();
                } catch (IOException e4) {
                    if (!al.a(e4)) {
                        e4.printStackTrace();
                    }
                }
                try {
                    fileReader.close();
                } catch (IOException e5) {
                    if (!al.a(e5)) {
                        e5.printStackTrace();
                    }
                }
                return -1L;
            }
            long j3 = Long.parseLong(line2.split(":\\s+", 2)[1].toLowerCase().replace("kb", "").trim());
            Long.signum(j3);
            long j4 = j2 + (j3 * 1024);
            String line3 = bufferedReader.readLine();
            if (line3 == null) {
                try {
                    bufferedReader.close();
                } catch (IOException e6) {
                    if (!al.a(e6)) {
                        e6.printStackTrace();
                    }
                }
                try {
                    fileReader.close();
                } catch (IOException e7) {
                    if (!al.a(e7)) {
                        e7.printStackTrace();
                    }
                }
                return -1L;
            }
            long j5 = j4 + (Long.parseLong(line3.split(":\\s+", 2)[1].toLowerCase().replace("kb", "").trim()) * 1024);
            try {
                bufferedReader.close();
            } catch (IOException e8) {
                if (!al.a(e8)) {
                    e8.printStackTrace();
                }
            }
            try {
                fileReader.close();
            } catch (IOException e9) {
                if (!al.a(e9)) {
                    e9.printStackTrace();
                }
            }
            return j5;
        } catch (Throwable th4) {
            th = th4;
            bufferedReader2 = bufferedReader;
            if (!al.a(th)) {
                th.printStackTrace();
            }
            if (bufferedReader2 != null) {
                try {
                    bufferedReader2.close();
                } catch (IOException e10) {
                    if (!al.a(e10)) {
                        e10.printStackTrace();
                    }
                }
            }
            if (fileReader == null) {
                return -2L;
            }
            try {
                fileReader.close();
                return -2L;
            } catch (IOException e11) {
                if (al.a(e11)) {
                    return -2L;
                }
                e11.printStackTrace();
                return -2L;
            }
        }
    }

    public static long k() {
        if (!s()) {
            return 0L;
        }
        try {
            StatFs statFs = new StatFs(Environment.getExternalStorageDirectory().getPath());
            return ((long) statFs.getBlockCount()) * ((long) statFs.getBlockSize());
        } catch (Throwable th) {
            if (al.a(th)) {
                return -2L;
            }
            th.printStackTrace();
            return -2L;
        }
    }

    public static long l() {
        if (!s()) {
            return 0L;
        }
        try {
            StatFs statFs = new StatFs(Environment.getExternalStorageDirectory().getPath());
            return ((long) statFs.getAvailableBlocks()) * ((long) statFs.getBlockSize());
        } catch (Throwable th) {
            if (al.a(th)) {
                return -2L;
            }
            th.printStackTrace();
            return -2L;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:24:0x005e  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static String c(Context context) {
        NetworkInfo activeNetworkInfo;
        TelephonyManager telephonyManager;
        String str = EnvironmentCompat.MEDIA_UNKNOWN;
        try {
            activeNetworkInfo = ((ConnectivityManager) context.getSystemService("connectivity")).getActiveNetworkInfo();
        } catch (Exception e2) {
            e = e2;
        }
        if (activeNetworkInfo == null) {
            return null;
        }
        if (activeNetworkInfo.getType() == 1) {
            return "WIFI";
        }
        if (activeNetworkInfo.getType() == 0 && (telephonyManager = (TelephonyManager) context.getSystemService("phone")) != null) {
            int networkType = telephonyManager.getNetworkType();
            String str2 = b.get(Integer.valueOf(networkType));
            if (str2 != null) {
                return str2;
            }
            try {
                str = "MOBILE(" + networkType + ")";
            } catch (Exception e3) {
                e = e3;
                str = str2;
                if (!al.a(e)) {
                }
            }
        }
        return str;
        if (!al.a(e)) {
            e.printStackTrace();
        }
        return str;
    }

    public static String n() {
        Iterator<a> it = a.iterator();
        while (it.hasNext()) {
            String strA = it.next().a();
            if (!TextUtils.isEmpty(strA)) {
                return strA;
            }
        }
        return null;
    }

    public static boolean o() {
        return !TextUtils.isEmpty(new i((byte) 0).a());
    }

    public static boolean p() {
        return !TextUtils.isEmpty(new k((byte) 0).a());
    }

    public static boolean q() {
        boolean z;
        String[] strArr = c;
        int length = strArr.length;
        int i2 = 0;
        while (true) {
            if (i2 >= length) {
                z = false;
                break;
            }
            if (new File(strArr[i2]).exists()) {
                z = true;
                break;
            }
            i2++;
        }
        return (Build.TAGS != null && Build.TAGS.contains("test-keys")) || z;
    }

    public static boolean r() {
        float fMaxMemory = (float) ((Runtime.getRuntime().maxMemory() * 1.0d) / 1048576.0d);
        float f2 = (float) ((Runtime.getRuntime().totalMemory() * 1.0d) / 1048576.0d);
        float f3 = fMaxMemory - f2;
        al.c("maxMemory : %f", Float.valueOf(fMaxMemory));
        al.c("totalMemory : %f", Float.valueOf(f2));
        al.c("freeMemory : %f", Float.valueOf(f3));
        return f3 < 10.0f;
    }

    static abstract class a {
        public abstract String a();

        private a() {
        }

        a(byte b) {
            this();
        }
    }

    static class l extends a {
        private l() {
            super((byte) 0);
        }

        l(byte b) {
            this();
        }

        @Override
        public final String a() {
            String strA = ap.a("ro.miui.ui.version.name");
            if (ap.b(strA) || strA.equals("fail")) {
                return null;
            }
            return "XiaoMi/MIUI/".concat(String.valueOf(strA));
        }
    }

    static class f extends a {
        private f() {
            super((byte) 0);
        }

        f(byte b) {
            this();
        }

        @Override
        public final String a() {
            String strA = ap.a(com.alipay.sdk.m.c.a.a);
            if (ap.b(strA) || strA.equals("fail")) {
                return null;
            }
            return "HuaWei/EMOTION/".concat(String.valueOf(strA));
        }
    }

    static class g extends a {
        private g() {
            super((byte) 0);
        }

        g(byte b) {
            this();
        }

        @Override
        public final String a() {
            String strA = ap.a("ro.lenovo.series");
            if (ap.b(strA) || strA.equals("fail")) {
                return null;
            }
            return "Lenovo/VIBE/".concat(String.valueOf(ap.a("ro.build.version.incremental")));
        }
    }

    static class m extends a {
        private m() {
            super((byte) 0);
        }

        m(byte b) {
            this();
        }

        @Override
        public final String a() {
            String strA = ap.a("ro.build.nubia.rom.name");
            if (ap.b(strA) || strA.equals("fail")) {
                return null;
            }
            return "Zte/NUBIA/" + strA + "_" + ap.a("ro.build.nubia.rom.code");
        }
    }

    static class h extends a {
        private h() {
            super((byte) 0);
        }

        h(byte b) {
            this();
        }

        @Override
        public final String a() {
            String strA = ap.a("ro.meizu.product.model");
            if (ap.b(strA) || strA.equals("fail")) {
                return null;
            }
            return "Meizu/FLYME/" + ap.a("ro.build.display.id");
        }
    }

    static class i extends a {
        private i() {
            super((byte) 0);
        }

        i(byte b) {
            this();
        }

        @Override
        public final String a() {
            String strA = ap.a("ro.build.version.opporom");
            if (ap.b(strA) || strA.equals("fail")) {
                return null;
            }
            return "Oppo/COLOROS/".concat(String.valueOf(strA));
        }
    }

    static class k extends a {
        private k() {
            super((byte) 0);
        }

        k(byte b) {
            this();
        }

        @Override
        public final String a() {
            String strA = ap.a("ro.vivo.os.build.display.id");
            if (ap.b(strA) || strA.equals("fail")) {
                return null;
            }
            return "vivo/FUNTOUCH/".concat(String.valueOf(strA));
        }
    }

    static class e extends a {
        private e() {
            super((byte) 0);
        }

        e(byte b) {
            this();
        }

        @Override
        public final String a() {
            String strA = ap.a("ro.aa.romver");
            if (ap.b(strA) || strA.equals("fail")) {
                return null;
            }
            return "htc/" + strA + "/" + ap.a("ro.build.description");
        }
    }

    static class j extends a {
        private j() {
            super((byte) 0);
        }

        j(byte b) {
            this();
        }

        @Override
        public final String a() {
            String strA = ap.a("ro.lewa.version");
            if (ap.b(strA) || strA.equals("fail")) {
                return null;
            }
            return "tcl/" + strA + "/" + ap.a("ro.build.display.id");
        }
    }

    static class b extends a {
        private b() {
            super((byte) 0);
        }

        b(byte b) {
            this();
        }

        @Override
        public final String a() {
            String strA = ap.a("ro.gn.gnromvernumber");
            if (ap.b(strA) || strA.equals("fail")) {
                return null;
            }
            return "amigo/" + strA + "/" + ap.a("ro.build.display.id");
        }
    }

    static class d extends a {
        private d() {
            super((byte) 0);
        }

        d(byte b) {
            this();
        }

        @Override
        public final String a() {
            String strA = ap.a("ro.build.tyd.kbstyle_version");
            if (ap.b(strA) || strA.equals("fail")) {
                return null;
            }
            return "dido/".concat(String.valueOf(strA));
        }
    }

    static class c extends a {
        private c() {
            super((byte) 0);
        }

        c(byte b) {
            this();
        }

        @Override
        public final String a() {
            return ap.a("ro.build.fingerprint") + "/" + ap.a("ro.build.rom.id");
        }
    }
}
