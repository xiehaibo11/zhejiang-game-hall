package com.loc;

import android.content.Context;
import android.util.Log;
import com.igexin.sdk.PushConsts;
import com.xiaomi.mipush.sdk.Constants;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.util.ArrayList;
import java.util.Iterator;
import org.json.JSONObject;

public final class t {
    private static volatile b a = b.a;
    private static volatile d b = d.a;
    private static volatile String c = "";
    private static volatile String d = "";
    private static volatile long e = -1;
    private static volatile a f = a.a;
    private static volatile long g = -1;
    private static volatile String h = "";
    private static volatile String i = "";
    private static volatile long j = 0;
    private static volatile long k = 0;
    private static volatile boolean l = false;
    private static volatile boolean m = true;

    public enum a {
        a(-1),
        b(0),
        c(1);

        private int d;

        a(int i) {
            this.d = i;
        }

        public static a a(int i) {
            return i == b.a() ? b : i == c.a() ? c : a;
        }

        public final int a() {
            return this.d;
        }
    }

    public enum b {
        a(-1),
        b(0),
        c(1);

        private int d;

        b(int i) {
            this.d = i;
        }

        public static b a(int i) {
            return i == b.a() ? b : i == c.a() ? c : a;
        }

        public final int a() {
            return this.d;
        }
    }

    public enum c {
        a(0),
        b(555570),
        c(555571),
        d(555572),
        e(555573),
        f(555574),
        g(555575),
        h(10001),
        i(PushConsts.SETTAG_ERROR_COUNT);

        private final int j;

        c(int i2) {
            this.j = i2;
        }

        public final int a() {
            return this.j;
        }
    }

    public enum d {
        a(-1),
        b(0),
        c(1);

        private int d;

        d(int i) {
            this.d = i;
        }

        public static d a(int i) {
            return i == b.a() ? b : i == c.a() ? c : a;
        }

        public final int a() {
            return this.d;
        }
    }

    public static synchronized u a(final Context context, w wVar) {
        boolean z;
        u uVar = null;
        if (context == null || wVar == null) {
            return new u(c.i, wVar);
        }
        if (!l) {
            e(context);
            l = true;
        }
        if (b != d.c) {
            if (b == d.a) {
                uVar = new u(c.b, wVar);
            } else if (b == d.b) {
                uVar = new u(c.c, wVar);
            }
            z = false;
        } else {
            z = true;
        }
        if (z && a != b.c) {
            if (a == b.a) {
                uVar = new u(c.d, wVar);
            } else if (a == b.b) {
                uVar = new u(c.e, wVar);
            }
            z = false;
        }
        if (z && f != a.c) {
            if (f == a.a) {
                uVar = new u(c.f, wVar);
            } else if (f == a.b) {
                uVar = new u(c.g, wVar);
            }
            z = false;
        }
        if (k != j) {
            final long j2 = j;
            k = j;
            try {
                final JSONObject jSONObject = new JSONObject();
                jSONObject.put("privacyInfo", a.a());
                jSONObject.put("privacyShow", b.a());
                jSONObject.put("showTime", e);
                jSONObject.put("show2SDK", c);
                jSONObject.put("show2SDKVer", d);
                jSONObject.put("privacyAgree", f.a());
                jSONObject.put("agreeTime", g);
                jSONObject.put("agree2SDK", h);
                jSONObject.put("agree2SDKVer", i);
                final boolean z2 = m;
                cr.a().b(new cs() {
                    @Override
                    public final void a() {
                        if (z2) {
                            Iterator it = t.b(t.f(context)).iterator();
                            while (it.hasNext()) {
                                t.a(context, ((File) it.next()).getName());
                            }
                        }
                        t.d(context);
                        t.a(context, jSONObject, j2);
                        boolean zB = t.b(context, jSONObject);
                        if (zB) {
                            t.b(context, t.b(j2));
                        }
                        if (z2) {
                            t.b(context);
                        }
                        if (zB) {
                            return;
                        }
                        t.a(context, t.b(j2));
                    }
                });
            } catch (Throwable unused) {
            }
        } else if (m) {
            cr.a().b(new cs() {
                @Override
                public final void a() {
                    Iterator it = t.b(t.f(context)).iterator();
                    while (it.hasNext()) {
                        t.a(context, ((File) it.next()).getName());
                    }
                    t.b(context);
                }
            });
        }
        m = false;
        String strF = l.f(context);
        if (strF == null || strF.length() <= 0) {
            uVar = new u(c.h, wVar);
            Log.e(wVar.a(), String.format("获取apikey失败：\nerrorCode : %d\n原因：%s", Integer.valueOf(uVar.a.a()), uVar.b));
        }
        if (z) {
            uVar = new u(c.a, wVar);
        } else {
            Log.e(wVar.a(), String.format("隐私合规校验失败：\nerrorCode : %d\n原因：%s", Integer.valueOf(uVar.a.a()), uVar.b));
        }
        return uVar;
    }

    private static synchronized void a(Context context, a aVar, w wVar) {
        if (context == null || wVar == null) {
            return;
        }
        if (!l) {
            e(context);
            l = true;
        }
        Boolean bool = Boolean.FALSE;
        if (aVar != f) {
            Boolean bool2 = Boolean.TRUE;
            f = aVar;
            h = wVar.a();
            i = wVar.b();
            long jCurrentTimeMillis = System.currentTimeMillis();
            g = jCurrentTimeMillis;
            j = jCurrentTimeMillis;
            d(context);
        }
    }

    private static synchronized void a(Context context, d dVar, b bVar, w wVar) {
        if (context == null || wVar == null) {
            return;
        }
        if (!l) {
            e(context);
            l = true;
        }
        Boolean bool = Boolean.FALSE;
        if (dVar != b) {
            bool = Boolean.TRUE;
            b = dVar;
        }
        if (bVar != a) {
            bool = Boolean.TRUE;
            a = bVar;
        }
        if (bool.booleanValue()) {
            c = wVar.a();
            d = wVar.b();
            long jCurrentTimeMillis = System.currentTimeMillis();
            e = jCurrentTimeMillis;
            j = jCurrentTimeMillis;
            d(context);
        }
    }

    static void a(Context context, String str) {
        if (str == null || str.length() == 0) {
            return;
        }
        try {
            File file = new File(f(context) + "/" + str);
            if (file.exists()) {
                File file2 = new File(g(context) + "/" + str);
                if (!file2.getParentFile().exists()) {
                    file2.getParentFile().mkdirs();
                }
                file.renameTo(file2);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    static void a(Context context, JSONObject jSONObject, long j2) {
        FileOutputStream fileOutputStream = null;
        try {
            byte[] bArrA = bd.a(context, jSONObject.toString().getBytes());
            String strB = b(j2);
            File file = new File(f(context) + "/" + strB);
            if (!file.getParentFile().exists()) {
                file.getParentFile().mkdirs();
            }
            FileOutputStream fileOutputStream2 = new FileOutputStream(file);
            try {
                fileOutputStream2.write(bArrA);
                try {
                    fileOutputStream2.close();
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            } catch (Throwable th2) {
                fileOutputStream = fileOutputStream2;
                th = th2;
                try {
                    th.printStackTrace();
                    if (fileOutputStream != null) {
                        try {
                            fileOutputStream.close();
                        } catch (Throwable th3) {
                            th3.printStackTrace();
                        }
                    }
                } catch (Throwable th4) {
                    if (fileOutputStream != null) {
                        try {
                            fileOutputStream.close();
                        } catch (Throwable th5) {
                            th5.printStackTrace();
                        }
                    }
                    throw th4;
                }
            }
        } catch (Throwable th6) {
            th = th6;
        }
    }

    public static void a(Context context, boolean z, w wVar) {
        a(context, z ? a.c : a.b, wVar);
    }

    public static void a(Context context, boolean z, boolean z2, w wVar) {
        a(context, z2 ? d.c : d.b, z ? b.c : b.b, wVar);
    }

    private static String b(long j2) {
        return String.format("%d-%s", Long.valueOf(j2), "privacy.data");
    }

    private static ArrayList<File> b(String str) {
        ArrayList<File> arrayList = new ArrayList<>();
        if (str != null && str.length() != 0) {
            File file = new File(str);
            if (!file.exists()) {
                return arrayList;
            }
            File[] fileArrListFiles = file.listFiles();
            for (File file2 : fileArrListFiles) {
                if (file2.isFile()) {
                    arrayList.add(file2);
                }
            }
        }
        return arrayList;
    }

    static void b(Context context) {
        String[] strArrSplit;
        try {
            for (File file : b(g(context))) {
                try {
                    String name = file.getName();
                    if (name.endsWith("-privacy.data") && (((strArrSplit = name.split(Constants.ACCEPT_TIME_SEPARATOR_SERVER)) != null || strArrSplit.length == 2) && Long.parseLong(strArrSplit[0]) > 0)) {
                        FileInputStream fileInputStream = new FileInputStream(file);
                        byte[] bArr = new byte[fileInputStream.available()];
                        fileInputStream.read(bArr);
                        if (b(context, new JSONObject(new String(bd.b(context, bArr))))) {
                            file.delete();
                        }
                    } else {
                        file.delete();
                    }
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
        } catch (Throwable th2) {
            th2.printStackTrace();
        }
    }

    static void b(Context context, String str) {
        if (str == null || str.length() == 0) {
            return;
        }
        try {
            File file = new File(f(context) + "/" + str);
            if (file.exists()) {
                file.delete();
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    private static boolean b(Context context, JSONObject jSONObject) {
        try {
            ax axVar = new ax();
            axVar.b = context;
            axVar.a = jSONObject;
            new bo();
            bu buVarA = bo.a(axVar);
            if (buVarA == null) {
                return false;
            }
            JSONObject jSONObject2 = new JSONObject(x.a(buVarA.a));
            if (jSONObject2.has("status")) {
                return jSONObject2.getInt("status") == 1;
            }
            return false;
        } catch (Throwable th) {
            th.printStackTrace();
            return false;
        }
    }

    private static synchronized void d(Context context) {
        if (context == null) {
            return;
        }
        if (!l) {
            e(context);
            l = true;
        }
        try {
            bd.a(context, "AMap.privacy.data", "AMap.privacy.data", String.format("%d&%d&%d&%s&%s&%d&%d&%s&%s&%d&%d", Integer.valueOf(a.a()), Integer.valueOf(b.a()), Long.valueOf(e), c, d, Integer.valueOf(f.a()), Long.valueOf(g), h, i, Long.valueOf(j), Long.valueOf(k)));
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    private static void e(Context context) {
        if (context == null) {
            return;
        }
        String strA = null;
        try {
            strA = bd.a(context, "AMap.privacy.data", "AMap.privacy.data");
        } catch (Throwable th) {
            th.printStackTrace();
        }
        if (strA == null) {
            return;
        }
        String[] strArrSplit = strA.split("&");
        if (strArrSplit.length != 11) {
            return;
        }
        try {
            a = b.a(Integer.parseInt(strArrSplit[0]));
            b = d.a(Integer.parseInt(strArrSplit[1]));
            e = Long.parseLong(strArrSplit[2]);
            d = strArrSplit[3];
            d = strArrSplit[4];
            f = a.a(Integer.parseInt(strArrSplit[5]));
            g = Long.parseLong(strArrSplit[6]);
            h = strArrSplit[7];
            i = strArrSplit[8];
            j = Long.parseLong(strArrSplit[9]);
            k = Long.parseLong(strArrSplit[10]);
        } catch (Throwable th2) {
            th2.printStackTrace();
        }
    }

    private static String f(Context context) {
        return context.getFilesDir().getAbsolutePath() + "/AMap/Privacy/Upload";
    }

    private static String g(Context context) {
        return context.getFilesDir().getAbsolutePath() + "/AMap/Privacy/Reload";
    }
}
