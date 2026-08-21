package com.tkay.core.common.b;

import android.app.ActivityManager;
import android.content.Context;
import android.content.SharedPreferences;
import android.os.Build;
import android.os.Debug;
import android.os.Process;
import android.text.TextUtils;
import com.xiaomi.mipush.sdk.Constants;
import java.io.PrintWriter;
import java.io.StringWriter;
import java.lang.Thread;
import java.net.URLEncoder;
import java.net.UnknownHostException;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import org.json.JSONArray;
import org.json.JSONObject;

public class g implements Thread.UncaughtExceptionHandler {
    private static volatile g d = null;
    private static final String j = "0";
    private static final String k = "1";
    private static final int l = 4;
    private Thread.UncaughtExceptionHandler b;
    private Context c;
    private SharedPreferences e;
    private final String f = "crash_type";
    private final String g = "crash_msg";
    private final String h = d.c;
    private final String i = "crash_sdk_type";
    String a = "com.tkay";

    public static g a(Context context) {
        if (d == null) {
            synchronized (g.class) {
                if (d == null) {
                    d = new g(context);
                }
            }
        }
        return d;
    }

    private g(Context context) {
        this.c = context;
        this.e = context.getSharedPreferences(f.t, 0);
    }

    public final void a() {
        com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(this.c).b(m.a().o());
        if (aVarB == null || aVarB.x() != 0) {
            try {
                com.tkay.core.common.l.b.a.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        g.a(g.this);
                    }
                });
                if (!(Thread.getDefaultUncaughtExceptionHandler() instanceof g)) {
                    this.b = Thread.getDefaultUncaughtExceptionHandler();
                }
                Thread.setDefaultUncaughtExceptionHandler(this);
            } catch (Exception unused) {
            }
        }
    }

    private void a(Throwable th) {
        try {
            String strB = b(th);
            if (a(strB)) {
                String strB2 = b(strB);
                String strC = c(strB);
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("crash_type", URLEncoder.encode(strB2));
                jSONObject.put("crash_msg", URLEncoder.encode(b() + "\n" + strB));
                jSONObject.put(d.c, m.a().q());
                jSONObject.put("crash_sdk_type", strC);
                SharedPreferences.Editor editorEdit = this.e.edit();
                editorEdit.putString(System.currentTimeMillis() + "_crash", jSONObject.toString());
                editorEdit.commit();
            }
        } catch (Throwable unused) {
        }
    }

    private String b() {
        try {
            Map<Thread, StackTraceElement[]> allStackTraces = Thread.getAllStackTraces();
            HashMap map = new HashMap(4);
            Iterator<Map.Entry<Thread, StackTraceElement[]>> it = allStackTraces.entrySet().iterator();
            int i = 0;
            while (it.hasNext()) {
                Thread key = it.next().getKey();
                if (key.getName().startsWith("tkay")) {
                    String str = key.getName() + Constants.ACCEPT_TIME_SEPARATOR_SERVER + key.getState();
                    if (map.containsKey(str)) {
                        map.put(str, Integer.valueOf(((Integer) map.get(str)).intValue() + 1));
                    } else {
                        map.put(str, 1);
                    }
                    i++;
                }
            }
            try {
                JSONObject jSONObject = new JSONObject((Map<String, Object>) map);
                jSONObject.put("tkay_thread_count", i);
                try {
                    ActivityManager activityManager = (ActivityManager) this.c.getSystemService("activity");
                    Debug.MemoryInfo[] processMemoryInfo = activityManager.getProcessMemoryInfo(new int[]{Process.myPid()});
                    if (processMemoryInfo.length > 0) {
                        jSONObject.put("app_memory", (processMemoryInfo[0].getTotalPss() / 1024) + "MB");
                    }
                    ActivityManager.MemoryInfo memoryInfo = new ActivityManager.MemoryInfo();
                    activityManager.getMemoryInfo(memoryInfo);
                    if (Build.VERSION.SDK_INT >= 16) {
                        jSONObject.put("sys_total_memory", (memoryInfo.totalMem / 1048576) + "MB");
                        jSONObject.put("sys_avail_memory", (memoryInfo.availMem / 1048576) + "MB");
                    }
                } catch (Throwable unused) {
                }
                return jSONObject.toString();
            } catch (Throwable th) {
                return th.getMessage();
            }
        } catch (Throwable th2) {
            return th2.getMessage();
        }
    }

    private boolean a(String str) {
        com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(this.c).b(m.a().o());
        if (aVarB != null) {
            if (aVarB.x() == 0) {
                return false;
            }
            String strZ = aVarB.z();
            try {
                if (TextUtils.isEmpty(strZ)) {
                    return true;
                }
                JSONArray jSONArray = new JSONArray(strZ);
                for (int i = 0; i < jSONArray.length(); i++) {
                    if (str.contains(jSONArray.optString(i))) {
                        return true;
                    }
                }
            } catch (Throwable unused) {
            }
        } else if (str.contains(this.a)) {
            return true;
        }
        return false;
    }

    private void c() {
        Map<String, ?> all = this.e.getAll();
        Iterator<?> it = all.values().iterator();
        while (it.hasNext()) {
            Object next = it.next();
            String string = next != null ? next.toString() : "";
            if (!TextUtils.isEmpty(string)) {
                try {
                    JSONObject jSONObject = new JSONObject(string);
                    com.tkay.core.common.k.c.b(jSONObject.optString("crash_type"), jSONObject.optString("crash_msg"), jSONObject.optString(d.c), jSONObject.optString("crash_sdk_type"));
                } catch (Exception unused) {
                }
            }
        }
        if (all.size() > 0) {
            this.e.edit().clear().commit();
        }
    }

    private static String b(Throwable th) throws Throwable {
        PrintWriter printWriter;
        if (th == null) {
            return "";
        }
        StringWriter stringWriter = null;
        try {
            for (Throwable th2 = new Throwable(com.tkay.core.common.l.g.a(), th); th2 != null; th2 = th2.getCause()) {
                if (th2 instanceof UnknownHostException) {
                    return "";
                }
            }
            StringWriter stringWriter2 = new StringWriter();
            try {
                printWriter = new PrintWriter(stringWriter2);
                try {
                    th.printStackTrace(printWriter);
                    printWriter.flush();
                    printWriter.close();
                    stringWriter2.close();
                    String string = stringWriter2.toString();
                    try {
                        stringWriter2.close();
                        stringWriter2.close();
                    } catch (Throwable unused) {
                    }
                    return string;
                } catch (Exception unused2) {
                    stringWriter = stringWriter2;
                    if (stringWriter != null) {
                        try {
                            stringWriter.close();
                        } catch (Throwable unused3) {
                            return "";
                        }
                    }
                    if (printWriter != null) {
                        stringWriter.close();
                    }
                    return "";
                } catch (Throwable th3) {
                    th = th3;
                    stringWriter = stringWriter2;
                    if (stringWriter != null) {
                        try {
                            stringWriter.close();
                        } catch (Throwable unused4) {
                            throw th;
                        }
                    }
                    if (printWriter != null) {
                        stringWriter.close();
                    }
                    throw th;
                }
            } catch (Exception unused5) {
                printWriter = null;
            } catch (Throwable th4) {
                th = th4;
                printWriter = null;
            }
        } catch (Exception unused6) {
            printWriter = null;
        } catch (Throwable th5) {
            th = th5;
            printWriter = null;
        }
    }

    private static String b(String str) {
        String strGroup;
        String str2 = "";
        try {
            Matcher matcher = Pattern.compile(".*?(Exception|Error|Death)", 2).matcher(str);
            strGroup = matcher.find() ? matcher.group(0) : "";
        } catch (Exception unused) {
        }
        try {
            return !TextUtils.isEmpty(strGroup) ? strGroup.replaceAll("Caused by:", "").replaceAll(" ", "") : strGroup;
        } catch (Exception unused2) {
            str2 = strGroup;
            return str2;
        }
    }

    private String c(String str) {
        String str2 = this.a;
        if (!TextUtils.isEmpty(str) && str.contains(str2)) {
            try {
                for (String str3 : str.split("Caused by:")) {
                    if (str3.contains(str2)) {
                        String[] strArrSplit = str3.split("\\n");
                        for (int i = 0; i < strArrSplit.length; i++) {
                            if (strArrSplit[i].contains(str2) && i <= 4) {
                                return "1";
                            }
                        }
                    }
                }
            } catch (Exception unused) {
            }
        }
        return "0";
    }

    @Override
    public void uncaughtException(Thread thread, Throwable th) {
        if (th == null) {
            return;
        }
        try {
            String strB = b(th);
            if (a(strB)) {
                String strB2 = b(strB);
                String strC = c(strB);
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("crash_type", URLEncoder.encode(strB2));
                jSONObject.put("crash_msg", URLEncoder.encode(b() + "\n" + strB));
                jSONObject.put(d.c, m.a().q());
                jSONObject.put("crash_sdk_type", strC);
                SharedPreferences.Editor editorEdit = this.e.edit();
                editorEdit.putString(System.currentTimeMillis() + "_crash", jSONObject.toString());
                editorEdit.commit();
            }
        } catch (Throwable unused) {
        }
        try {
            if (this.b == null || this.b == this || (this.b instanceof g)) {
                return;
            }
            this.b.uncaughtException(thread, th);
        } catch (Exception unused2) {
        }
    }

    static void a(g gVar) {
        Map<String, ?> all = gVar.e.getAll();
        Iterator<?> it = all.values().iterator();
        while (it.hasNext()) {
            Object next = it.next();
            String string = next != null ? next.toString() : "";
            if (!TextUtils.isEmpty(string)) {
                try {
                    JSONObject jSONObject = new JSONObject(string);
                    com.tkay.core.common.k.c.b(jSONObject.optString("crash_type"), jSONObject.optString("crash_msg"), jSONObject.optString(d.c), jSONObject.optString("crash_sdk_type"));
                } catch (Exception unused) {
                }
            }
        }
        if (all.size() > 0) {
            gVar.e.edit().clear().commit();
        }
    }
}
