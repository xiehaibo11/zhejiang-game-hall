package com.yxcorp.kuaishou.addfp.android.a;

import android.content.Context;
import android.os.Build;
import android.os.Environment;
import android.os.Process;
import android.os.StatFs;
import android.os.SystemClock;
import android.support.v4.os.EnvironmentCompat;
import android.text.TextUtils;
import android.util.Base64;
import com.huawei.hms.framework.common.ContainerUtils;
import com.xiaomi.mipush.sdk.Constants;
import com.yxcorp.kuaishou.addfp.KWEGIDDFP;
import com.yxcorp.kuaishou.addfp.ResponseDfpCallback;
import com.yxcorp.kuaishou.addfp.android.Orange;
import com.yxcorp.kuaishou.addfp.android.b.g;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.net.URLEncoder;
import java.util.Iterator;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.locks.ReentrantLock;
import java.util.zip.CRC32;
import org.json.JSONObject;

public class c {
    private static boolean d = true;
    private String a;
    private String b;
    private ReentrantLock c;

    private c() {
        this.b = "";
        this.c = new ReentrantLock();
    }

    public static String a(Context context) {
        boolean z;
        try {
            if (!d) {
                return "KWE_NPN";
            }
            boolean z2 = true;
            try {
            } catch (Throwable th) {
                th.printStackTrace();
            }
            boolean z3 = Build.VERSION.SDK_INT >= 26;
            if (!z3) {
                String strB = b();
                if (!TextUtils.isEmpty(strB)) {
                    return strB;
                }
            }
            if (Build.VERSION.SDK_INT >= 29) {
                String str = Build.MODEL;
                z = !TextUtils.isEmpty(str) && str.toLowerCase().contains("redmi") && str.toLowerCase().contains("note 7");
                if (Build.BRAND.equalsIgnoreCase("HONOR")) {
                    z = true;
                }
            } else {
                z = false;
            }
            if (!z) {
                String strGSer = Orange.getInstance().gSer();
                if (!TextUtils.isEmpty(strGSer) && !strGSer.startsWith("KWE")) {
                    return strGSer;
                }
            }
            String[] strArr = {"android.permission.READ_PHONE_STATE"};
            for (int i = 0; i <= 0; i++) {
                if (context.checkPermission(strArr[0], Process.myPid(), Process.myUid()) == -1) {
                    z2 = false;
                    break;
                }
            }
            if (z2) {
                String serial = Build.getSerial();
                if (!TextUtils.isEmpty(serial) && !serial.equals(EnvironmentCompat.MEDIA_UNKNOWN)) {
                    return serial;
                }
            }
            String str2 = Build.SERIAL;
            return !TextUtils.isEmpty(str2) ? !str2.equals(EnvironmentCompat.MEDIA_UNKNOWN) ? str2 : "KWE_N" : "KWE_N";
        } catch (Throwable th2) {
            th2.printStackTrace();
            return "KWE_N";
        }
    }

    private static String a(String str) {
        return TextUtils.isEmpty(str) ? "KWE_N" : str.replace(ContainerUtils.KEY_VALUE_DELIMITER, "").replace("&", "");
    }

    public static void a(JSONObject jSONObject) {
        try {
            Iterator<String> itKeys = jSONObject.keys();
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                if ("64".equals(next) && jSONObject.optInt(next, 1) == 0) {
                    d = false;
                }
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:35:0x003c A[EXC_TOP_SPLITTER, PHI: r2
      0x003c: PHI (r2v2 java.io.BufferedReader) = (r2v1 java.io.BufferedReader), (r2v6 java.io.BufferedReader) binds: [B:22:0x003a, B:17:0x0032] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static String b() {
        BufferedReader bufferedReader;
        try {
            File file = new File("/sys/class/android_usb/android0/iSerial");
            if (file.exists()) {
                bufferedReader = new BufferedReader(new FileReader(file));
                try {
                    String line = bufferedReader.readLine();
                    if (!TextUtils.isEmpty(line)) {
                        String strTrim = line.trim();
                        try {
                            bufferedReader.close();
                        } catch (Throwable th) {
                            th.printStackTrace();
                        }
                        return strTrim;
                    }
                } catch (Throwable th2) {
                    th = th2;
                    try {
                        th.printStackTrace();
                    } finally {
                        if (bufferedReader != null) {
                            try {
                                bufferedReader.close();
                            } catch (Throwable th3) {
                                th3.printStackTrace();
                            }
                        }
                    }
                }
            } else {
                bufferedReader = null;
            }
        } catch (Throwable th4) {
            th = th4;
            bufferedReader = null;
        }
        if (bufferedReader != null) {
        }
        return null;
    }

    public static c c() {
        return b.a;
    }

    public String a() {
        try {
            return !TextUtils.isEmpty(this.a) ? this.a : "KWE_N";
        } catch (Throwable th) {
            th.printStackTrace();
            return "KWE_N";
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:107:0x0289  */
    /* JADX WARN: Removed duplicated region for block: B:113:0x029d A[Catch: all -> 0x02e3, TryCatch #2 {all -> 0x02e3, blocks: (B:110:0x0293, B:113:0x029d, B:115:0x02b1, B:116:0x02bc, B:117:0x02bf), top: B:147:0x0293, outer: #1 }] */
    /* JADX WARN: Removed duplicated region for block: B:135:0x0361  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public String a(Context context, ResponseDfpCallback responseDfpCallback, boolean z) {
        String str;
        long jCurrentTimeMillis;
        String eGidLocal;
        String strReplace;
        long blockCount;
        int i;
        int i2;
        StatFs statFs;
        long jCurrentTimeMillis2 = System.currentTimeMillis();
        try {
            this.c.lock();
        } catch (Throwable th) {
            th = th;
            str = "KWE_N";
        }
        try {
            if (!TextUtils.isEmpty(this.b)) {
                return this.b;
            }
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("k23", g.a(a(Build.MANUFACTURER)));
            jSONObject.put("k61", g.a(a(Build.BRAND)));
            jSONObject.put("k27", g.a(a(Build.MODEL)));
            jSONObject.put("k64", g.a(a(context)));
            jSONObject.put("k31", g.a(com.yxcorp.kuaishou.addfp.android.b.d.c(false)));
            jSONObject.put("k117", g.a(com.yxcorp.kuaishou.addfp.android.b.d.c(true)));
            jSONObject.put("k66", g.a(com.yxcorp.kuaishou.addfp.android.b.d.a(false)));
            jSONObject.put("k116", g.a(com.yxcorp.kuaishou.addfp.android.b.d.a(true)));
            long j = 0;
            try {
                jCurrentTimeMillis = System.currentTimeMillis() - SystemClock.elapsedRealtime();
            } catch (Throwable th2) {
                th2.printStackTrace();
                jCurrentTimeMillis = 0;
            }
            jSONObject.put("k39", g.a(Long.toString(jCurrentTimeMillis)));
            jSONObject.put("k101", g.a(g.b(new String(Base64.decode("Y2F0IC9zeXMvZGV2aWNlcy9zb2MwL3NlcmlhbF9udW1iZXI=", 0)))));
            jSONObject.put("k102", g.a(g.b(new String(Base64.decode("Y2F0IC9wcm9jL3N5cy9rZXJuZWwvcmFuZG9tL2Jvb3RfaWQ=", 0)))));
            jSONObject.put("k57", g.a(com.yxcorp.kuaishou.addfp.android.b.d.b(false)));
            jSONObject.put("k118", g.a(com.yxcorp.kuaishou.addfp.android.b.d.b(true)));
            jSONObject.put("k68", g.a(com.yxcorp.kuaishou.addfp.android.b.d.e(false)));
            jSONObject.put("k120", g.a(com.yxcorp.kuaishou.addfp.android.b.d.e(true)));
            jSONObject.put("k105", g.a(Orange.getInstance().gRdi()));
            try {
                eGidLocal = KWEGIDDFP.instance().getEGidLocal(context, c().a(), false);
                if (TextUtils.isEmpty(eGidLocal)) {
                    eGidLocal = "KWE_N";
                }
            } catch (Throwable th3) {
                th3.printStackTrace();
                eGidLocal = "KWE_PE";
            }
            jSONObject.put("k83", g.a(eGidLocal));
            jSONObject.put("k86", g.a(com.yxcorp.kuaishou.addfp.c.a.a.a(context)));
            try {
                strReplace = context.getPackageName().replace(ContainerUtils.KEY_VALUE_DELIMITER, "").replace("&", "");
            } catch (Throwable th4) {
                th4.printStackTrace();
                strReplace = "KWE_PE";
            }
            jSONObject.put("k3", g.a(strReplace));
            jSONObject.put("k109", g.a(Orange.getInstance().gProps()));
            jSONObject.put("k36", g.a("1.3.6.92.f75f436d"));
            jSONObject.put("k14", g.a("AD_AND"));
            try {
                statFs = new StatFs(Environment.getDataDirectory().getPath());
                str = "KWE_N";
            } catch (Throwable unused) {
                str = "KWE_N";
            }
            try {
                blockCount = ((long) statFs.getBlockCount()) * ((long) statFs.getBlockSize());
            } catch (Throwable unused2) {
                blockCount = 0;
            }
            try {
                jSONObject.put("k5", g.a(Long.toString(blockCount)));
                BufferedReader bufferedReader = null;
                try {
                    try {
                        BufferedReader bufferedReader2 = new BufferedReader(new FileReader("/proc/meminfo"), 8192);
                        try {
                            j = Long.parseLong(bufferedReader2.readLine().split("\\s+")[1]) * 1024;
                            bufferedReader2.close();
                        } catch (Throwable th5) {
                            th = th5;
                            bufferedReader = bufferedReader2;
                            try {
                                th.printStackTrace();
                                if (bufferedReader != null) {
                                    bufferedReader.close();
                                }
                                jSONObject.put("k46", g.a(Long.toString(j)));
                                jSONObject.put("k110", g.a(Orange.getInstance().gKpsd()));
                                jSONObject.put("k111", g.a("KWE_NPN"));
                                jSONObject.put("k113", g.a(Orange.getInstance().gManu(context, com.yxcorp.kuaishou.addfp.c.a.a.a())));
                                jSONObject.put("k115", g.a(com.yxcorp.kuaishou.addfp.android.b.d.d(true)));
                                String strD = com.yxcorp.kuaishou.addfp.android.b.d.d(false);
                                if (z) {
                                    i = 1;
                                    jSONObject.put("k97", g.a(strD));
                                    CRC32 crc32 = new CRC32();
                                    while (i2 <= 120) {
                                    }
                                    jSONObject.put("k14", g.a("AD_AND" + Constants.COLON_SEPARATOR + String.valueOf(crc32.getValue())));
                                    StringBuilder sb = new StringBuilder("mimi :");
                                    sb.append(jSONObject.toString());
                                    sb.append(" ");
                                    sb.append(jSONObject.toString().getBytes().length);
                                    sb.append(" ");
                                    sb.append(System.currentTimeMillis() - jCurrentTimeMillis2);
                                    byte[] magicWrapper = Orange.getInstance().getMagicWrapper(context, jSONObject.toString().getBytes(), 0);
                                    new StringBuilder("get mini lenth ").append(magicWrapper.length);
                                    this.b = URLEncoder.encode(Base64.encodeToString(magicWrapper, 0), "utf-8");
                                }
                                this.c.unlock();
                                if (TextUtils.isEmpty(this.b)) {
                                }
                                return this.b;
                            } finally {
                            }
                        }
                    } catch (Throwable th6) {
                        th = th6;
                    }
                } catch (IOException unused3) {
                }
                jSONObject.put("k46", g.a(Long.toString(j)));
                jSONObject.put("k110", g.a(Orange.getInstance().gKpsd()));
                jSONObject.put("k111", g.a("KWE_NPN"));
                jSONObject.put("k113", g.a(Orange.getInstance().gManu(context, com.yxcorp.kuaishou.addfp.c.a.a.a())));
                jSONObject.put("k115", g.a(com.yxcorp.kuaishou.addfp.android.b.d.d(true)));
                String strD2 = com.yxcorp.kuaishou.addfp.android.b.d.d(false);
                if (z || strD2.equals("KWE_NPN") || !strD2.startsWith("KWE")) {
                    i = 1;
                } else {
                    if (Build.VERSION.SDK_INT >= 29) {
                        i = 1;
                        try {
                            new CountDownLatch(1).await(1000L, TimeUnit.MILLISECONDS);
                        } catch (InterruptedException e) {
                            e.printStackTrace();
                        }
                    } else {
                        i = 1;
                    }
                    strD2 = com.yxcorp.kuaishou.addfp.android.b.d.d(false);
                }
                jSONObject.put("k97", g.a(strD2));
                try {
                    CRC32 crc322 = new CRC32();
                    for (i2 = i; i2 <= 120; i2++) {
                        String str2 = "k" + i2;
                        if (jSONObject.has(str2)) {
                            crc322.update(jSONObject.optString(str2).getBytes());
                        }
                    }
                    jSONObject.put("k14", g.a("AD_AND" + Constants.COLON_SEPARATOR + String.valueOf(crc322.getValue())));
                } catch (Throwable th7) {
                    th7.printStackTrace();
                }
                StringBuilder sb2 = new StringBuilder("mimi :");
                sb2.append(jSONObject.toString());
                sb2.append(" ");
                sb2.append(jSONObject.toString().getBytes().length);
                sb2.append(" ");
                sb2.append(System.currentTimeMillis() - jCurrentTimeMillis2);
                byte[] magicWrapper2 = Orange.getInstance().getMagicWrapper(context, jSONObject.toString().getBytes(), 0);
                new StringBuilder("get mini lenth ").append(magicWrapper2.length);
                this.b = URLEncoder.encode(Base64.encodeToString(magicWrapper2, 0), "utf-8");
            } catch (Throwable th8) {
                th = th8;
                th.printStackTrace();
                this.b = "KWE_PE";
                responseDfpCallback.onFailed(-1, g.a(th));
            }
            this.c.unlock();
            if (TextUtils.isEmpty(this.b)) {
                this.b = str;
            }
            return this.b;
            th.printStackTrace();
            this.b = "KWE_PE";
            responseDfpCallback.onFailed(-1, g.a(th));
            this.c.unlock();
            if (TextUtils.isEmpty(this.b)) {
            }
            return this.b;
        } finally {
            this.c.unlock();
        }
    }

    public void b(String str) {
        this.a = str;
    }
}
