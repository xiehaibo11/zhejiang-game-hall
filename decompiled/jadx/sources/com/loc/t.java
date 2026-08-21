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

/* JADX INFO: compiled from: Privacy.java */
/* JADX INFO: loaded from: classes2.dex */
public final class t {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile b f3029a = b.Unknow;
    private static volatile d b = d.Unknow;
    private static volatile String c = "";
    private static volatile String d = "";
    private static volatile long e = -1;
    private static volatile a f = a.Unknow;
    private static volatile long g = -1;
    private static volatile String h = "";
    private static volatile String i = "";
    private static volatile long j = 0;
    private static volatile long k = 0;
    private static volatile boolean l = false;
    private static volatile boolean m = true;

    /* JADX INFO: compiled from: Privacy.java */
    public enum a {
        Unknow(-1),
        NotAgree(0),
        DidAgree(1);

        private int d;

        a(int i) {
            this.d = i;
        }

        public static a a(int i) {
            return i == NotAgree.a() ? NotAgree : i == DidAgree.a() ? DidAgree : Unknow;
        }

        public final int a() {
            return this.d;
        }
    }

    /* JADX INFO: compiled from: Privacy.java */
    public enum b {
        Unknow(-1),
        NotContain(0),
        DidContain(1);

        private int d;

        b(int i) {
            this.d = i;
        }

        public static b a(int i) {
            return i == NotContain.a() ? NotContain : i == DidContain.a() ? DidContain : Unknow;
        }

        public final int a() {
            return this.d;
        }
    }

    /* JADX INFO: compiled from: Privacy.java */
    public enum c {
        SuccessCode(0),
        ShowUnknowCode(555570),
        ShowNoShowCode(555571),
        InfoUnknowCode(555572),
        InfoNotContainCode(555573),
        AgreeUnknowCode(555574),
        AgreeNotAgreeCode(555575),
        InvaildUserKeyCode(10001),
        IllegalArgument(PushConsts.SETTAG_ERROR_COUNT);

        private final int j;

        c(int i) {
            this.j = i;
        }

        public final int a() {
            return this.j;
        }
    }

    /* JADX INFO: compiled from: Privacy.java */
    public enum d {
        Unknow(-1),
        NotShow(0),
        DidShow(1);

        private int d;

        d(int i) {
            this.d = i;
        }

        public static d a(int i) {
            return i == NotShow.a() ? NotShow : i == DidShow.a() ? DidShow : Unknow;
        }

        public final int a() {
            return this.d;
        }
    }

    public static synchronized u a(final Context context, w wVar) {
        boolean z;
        u uVar = null;
        if (context == null || wVar == null) {
            return new u(c.IllegalArgument, wVar);
        }
        if (!l) {
            e(context);
            l = true;
        }
        if (b != d.DidShow) {
            if (b == d.Unknow) {
                uVar = new u(c.ShowUnknowCode, wVar);
            } else if (b == d.NotShow) {
                uVar = new u(c.ShowNoShowCode, wVar);
            }
            z = false;
        } else {
            z = true;
        }
        if (z && f3029a != b.DidContain) {
            if (f3029a == b.Unknow) {
                uVar = new u(c.InfoUnknowCode, wVar);
            } else if (f3029a == b.NotContain) {
                uVar = new u(c.InfoNotContainCode, wVar);
            }
            z = false;
        }
        if (z && f != a.DidAgree) {
            if (f == a.Unknow) {
                uVar = new u(c.AgreeUnknowCode, wVar);
            } else if (f == a.NotAgree) {
                uVar = new u(c.AgreeNotAgreeCode, wVar);
            }
            z = false;
        }
        if (k != j) {
            final long j2 = j;
            k = j;
            try {
                final JSONObject jSONObject = new JSONObject();
                jSONObject.put("privacyInfo", f3029a.a());
                jSONObject.put("privacyShow", b.a());
                jSONObject.put("showTime", e);
                jSONObject.put("show2SDK", c);
                jSONObject.put("show2SDKVer", d);
                jSONObject.put("privacyAgree", f.a());
                jSONObject.put("agreeTime", g);
                jSONObject.put("agree2SDK", h);
                jSONObject.put("agree2SDKVer", i);
                final boolean z2 = m;
                cr.a().b(new cs() { // from class: com.loc.t.2
                    @Override // com.loc.cs
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
            cr.a().b(new cs() { // from class: com.loc.t.1
                @Override // com.loc.cs
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
            uVar = new u(c.InvaildUserKeyCode, wVar);
            Log.e(wVar.a(), String.format("获取apikey失败：\nerrorCode : %d\n原因：%s", Integer.valueOf(uVar.f3036a.a()), uVar.b));
        }
        if (z) {
            uVar = new u(c.SuccessCode, wVar);
        } else {
            Log.e(wVar.a(), String.format("隐私合规校验失败：\nerrorCode : %d\n原因：%s", Integer.valueOf(uVar.f3036a.a()), uVar.b));
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
        if (bVar != f3029a) {
            bool = Boolean.TRUE;
            f3029a = bVar;
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

    static /* synthetic */ void a(Context context, String str) {
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

    static /* synthetic */ void a(Context context, JSONObject jSONObject, long j2) {
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
        a(context, z ? a.DidAgree : a.NotAgree, wVar);
    }

    public static void a(Context context, boolean z, boolean z2, w wVar) {
        a(context, z2 ? d.DidShow : d.NotShow, z ? b.DidContain : b.NotContain, wVar);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static String b(long j2) {
        return String.format("%d-%s", Long.valueOf(j2), "privacy.data");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static ArrayList<File> b(String str) {
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

    static /* synthetic */ void b(Context context) {
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

    static /* synthetic */ void b(Context context, String str) {
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

    /* JADX INFO: Access modifiers changed from: private */
    public static boolean b(Context context, JSONObject jSONObject) {
        try {
            ax axVar = new ax();
            axVar.b = context;
            axVar.f2856a = jSONObject;
            new bo();
            bu buVarA = bo.a(axVar);
            if (buVarA == null) {
                return false;
            }
            JSONObject jSONObject2 = new JSONObject(x.a(buVarA.f2891a));
            if (jSONObject2.has("status")) {
                return jSONObject2.getInt("status") == 1;
            }
            return false;
        } catch (Throwable th) {
            th.printStackTrace();
            return false;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static synchronized void d(Context context) {
        if (context == null) {
            return;
        }
        if (!l) {
            e(context);
            l = true;
        }
        try {
            bd.a(context, "AMap.privacy.data", "AMap.privacy.data", String.format("%d&%d&%d&%s&%s&%d&%d&%s&%s&%d&%d", Integer.valueOf(f3029a.a()), Integer.valueOf(b.a()), Long.valueOf(e), c, d, Integer.valueOf(f.a()), Long.valueOf(g), h, i, Long.valueOf(j), Long.valueOf(k)));
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
            f3029a = b.a(Integer.parseInt(strArrSplit[0]));
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

    /* JADX INFO: Access modifiers changed from: private */
    public static String f(Context context) {
        return context.getFilesDir().getAbsolutePath() + "/AMap/Privacy/Upload";
    }

    private static String g(Context context) {
        return context.getFilesDir().getAbsolutePath() + "/AMap/Privacy/Reload";
    }
}
