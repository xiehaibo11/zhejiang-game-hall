package com.loc;

import android.app.ActivityManager;
import android.content.BroadcastReceiver;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.ServiceConnection;
import android.content.SharedPreferences;
import android.database.Cursor;
import android.net.ConnectivityManager;
import android.net.Network;
import android.net.NetworkInfo;
import android.net.NetworkRequest;
import android.net.Uri;
import android.os.Build;
import android.os.Environment;
import android.os.IBinder;
import android.os.Looper;
import android.os.Parcel;
import android.os.StatFs;
import android.os.storage.StorageManager;
import android.provider.Settings;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import android.util.DisplayMetrics;
import android.util.Xml;
import android.view.WindowManager;
import java.io.BufferedReader;
import java.io.ByteArrayOutputStream;
import java.io.Closeable;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileReader;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.lang.reflect.Array;
import java.lang.reflect.Method;
import java.security.MessageDigest;
import java.util.Map;
import java.util.UUID;
import kotlin.UByte;
import org.xmlpull.v1.XmlPullParser;

public final class o {
    private static String A = "";
    private static boolean B = false;
    private static String C = "";
    private static String D = "";
    private static String E = "";
    private static boolean F = false;
    private static boolean G = false;
    private static String H = "";
    private static boolean I = false;
    private static boolean J = false;
    private static long K = 0;
    private static int L = 0;
    private static String M = null;
    private static String N = "";
    private static boolean O = true;
    private static boolean P = false;
    private static String Q = "";
    private static boolean R = false;
    private static int S = -1;
    private static boolean T = false;
    private static Object U = null;
    private static int V = -1;
    private static boolean W = false;
    private static volatile b X = null;
    static String a = "";
    static String b = "";
    static volatile boolean c = true;
    public static boolean d = false;
    static String e = "";
    static boolean f = false;
    public static a g = null;
    static int h = -1;
    static String i = "";
    static String j = "";
    private static String k = null;
    private static boolean l = false;
    private static String m = "";
    private static volatile boolean n = false;
    private static String o = "";
    private static boolean p = false;
    private static String q = null;
    private static IBinder r = null;
    private static boolean s = false;
    private static boolean t = false;
    private static String u = "";
    private static String v = "";
    private static boolean w = false;
    private static boolean x = false;
    private static String y = "";
    private static boolean z;

    public interface a {
        bt a(byte[] bArr, Map<String, String> map);

        String a();

        String a(Context context, String str);

        String a(String str, String str2, String str3, String str4);

        Map<String, String> b();
    }

    public static class b {
        private static Context a;
        private static BroadcastReceiver b;
        private static ConnectivityManager c;
        private static NetworkRequest d;
        private static ConnectivityManager.NetworkCallback e;

        public final void a(Context context) {
            if (Build.VERSION.SDK_INT < 24) {
                if (context == null || b != null) {
                    return;
                }
                b = new BroadcastReceiver() {
                    @Override
                    public final void onReceive(Context context2, Intent intent) {
                        if (x.c("WYW5kcm9pZC5uZXQuY29ubi5DT05ORUNUSVZJVFlfQ0hBTkdF").equals(intent.getAction())) {
                            o.q();
                        }
                    }
                };
                IntentFilter intentFilter = new IntentFilter();
                intentFilter.addAction(x.c("WYW5kcm9pZC5uZXQuY29ubi5DT05ORUNUSVZJVFlfQ0hBTkdF"));
                context.registerReceiver(b, intentFilter);
                return;
            }
            if (o.b(context, x.c("AYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19ORVRXT1JLX1NUQVRF")) && context != null && c == null) {
                ConnectivityManager connectivityManager = (ConnectivityManager) context.getSystemService("connectivity");
                c = connectivityManager;
                if (connectivityManager != null) {
                    d = new NetworkRequest.Builder().addCapability(12).addTransportType(1).addTransportType(0).build();
                    ConnectivityManager.NetworkCallback networkCallback = new ConnectivityManager.NetworkCallback() {
                        @Override
                        public final void onAvailable(Network network) {
                            super.onAvailable(network);
                            o.q();
                        }

                        @Override
                        public final void onLost(Network network) {
                            super.onLost(network);
                            o.q();
                        }
                    };
                    e = networkCallback;
                    c.registerNetworkCallback(d, networkCallback);
                    a = context;
                }
            }
        }
    }

    static class c implements ServiceConnection {
        c() {
        }

        @Override
        public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            IBinder unused = o.r = iBinder;
        }

        @Override
        public final void onServiceDisconnected(ComponentName componentName) {
        }
    }

    private static String A(Context context) {
        if (x.c("IeGlhb21p").equalsIgnoreCase(Build.MANUFACTURER) || x.c("IeGlhb21p").equalsIgnoreCase(Build.BRAND) || x.c("IUkVETUk=").equalsIgnoreCase(Build.MANUFACTURER) || x.c("IUkVETUk=").equalsIgnoreCase(Build.BRAND)) {
            return y(context);
        }
        if (x.c("Idml2bw").equalsIgnoreCase(Build.MANUFACTURER) || x.c("Idml2bw").equalsIgnoreCase(Build.BRAND)) {
            return z(context);
        }
        if (x.c("IaHVhd2Vp").equalsIgnoreCase(Build.MANUFACTURER) || x.c("IaHVhd2Vp").equalsIgnoreCase(Build.BRAND) || x.c("ISE9OT1I=").equalsIgnoreCase(Build.MANUFACTURER)) {
            return a(context, 2);
        }
        if (x.c("Mc2Ftc3VuZw").equalsIgnoreCase(Build.MANUFACTURER) || x.c("Mc2Ftc3VuZw").equalsIgnoreCase(Build.BRAND)) {
            return a(context, 4);
        }
        if (x.c("IT1BQTw").equalsIgnoreCase(Build.MANUFACTURER) || x.c("IT1BQTw").equalsIgnoreCase(Build.BRAND) || x.c("MT25lUGx1cw").equalsIgnoreCase(Build.MANUFACTURER) || x.c("MT25lUGx1cw").equalsIgnoreCase(Build.BRAND) || x.c("IUkVBTE1F").equalsIgnoreCase(Build.BRAND)) {
            return a(context, 5);
        }
        p = true;
        return o;
    }

    private static String B(Context context) {
        if (!TextUtils.isEmpty(H)) {
            return H;
        }
        try {
            String strB = bd.b(context, "open_common", "a1", "");
            if (TextUtils.isEmpty(strB)) {
                H = "amap" + UUID.randomUUID().toString().replace("_", "").toLowerCase();
                SharedPreferences.Editor editorA = bd.a(context, "open_common");
                bd.a(editorA, "a1", x.b(H));
                bd.a(editorA);
            } else {
                H = x.c(strB);
            }
            return H;
        } catch (Throwable unused) {
            return H;
        }
    }

    private static String C(Context context) {
        if (R) {
            return Q;
        }
        L(context);
        TelephonyManager telephonyManagerG = G(context);
        if (telephonyManagerG == null) {
            return Q;
        }
        String simOperatorName = telephonyManagerG.getSimOperatorName();
        Q = simOperatorName;
        if (TextUtils.isEmpty(simOperatorName)) {
            Q = telephonyManagerG.getNetworkOperatorName();
        }
        R = true;
        return Q;
    }

    private static int D(Context context) {
        if (T) {
            return S;
        }
        L(context);
        if (context == null || !b(context, x.c("AYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19ORVRXT1JLX1NUQVRF"))) {
            return S;
        }
        ConnectivityManager connectivityManagerE = E(context);
        if (connectivityManagerE == null) {
            return S;
        }
        NetworkInfo activeNetworkInfo = connectivityManagerE.getActiveNetworkInfo();
        if (activeNetworkInfo == null) {
            T = true;
            return S;
        }
        int type = activeNetworkInfo.getType();
        S = type;
        T = true;
        return type;
    }

    private static ConnectivityManager E(Context context) {
        return (ConnectivityManager) context.getSystemService("connectivity");
    }

    private static int F(Context context) {
        ConnectivityManager connectivityManagerE;
        if (W) {
            return V;
        }
        L(context);
        if (b(context, x.c("AYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19ORVRXT1JLX1NUQVRF")) && (connectivityManagerE = E(context)) != null) {
            NetworkInfo activeNetworkInfo = connectivityManagerE.getActiveNetworkInfo();
            if (activeNetworkInfo != null && activeNetworkInfo.isAvailable()) {
                V = activeNetworkInfo.getSubtype();
                W = true;
            }
            return V;
        }
        return V;
    }

    private static TelephonyManager G(Context context) {
        return (TelephonyManager) context.getSystemService("phone");
    }

    private static String H(Context context) {
        if (!c) {
            return "";
        }
        String strI = null;
        try {
            strI = I(context);
        } catch (Throwable unused) {
        }
        if (TextUtils.isEmpty(strI)) {
            c = false;
            return "";
        }
        try {
            byte[] bytes = x.c("MAAAAAAAAAAAAAAAAAAAAAA").getBytes("UTF-8");
            return new String(p.a(x.c("HYW1hcGFkaXVhbWFwYWRpdWFtYXBhZGl1YW1hcGFkaXU").getBytes("UTF-8"), p.b(strI), bytes), "UTF-8");
        } catch (Throwable unused2) {
            c = false;
            return "";
        }
    }

    private static String I(Context context) {
        String strJ;
        try {
            strJ = J(context);
        } catch (Throwable unused) {
            strJ = "";
        }
        return !TextUtils.isEmpty(strJ) ? strJ : context == null ? "" : context.getSharedPreferences(x.c("SU2hhcmVkUHJlZmVyZW5jZUFkaXU"), 0).getString(s.a(x.c("RYW1hcF9kZXZpY2VfYWRpdQ")), "");
    }

    private static String J(Context context) {
        RandomAccessFile randomAccessFile;
        byte[] bArr;
        ByteArrayOutputStream byteArrayOutputStream;
        String[] strArrSplit;
        if (Build.VERSION.SDK_INT >= 19 && !b(context, x.c("EYW5kcm9pZC5wZXJtaXNzaW9uLlJFQURfRVhURVJOQUxfU1RPUkFHRQ=="))) {
            return "";
        }
        String strA = s.a(x.c("LYW1hcF9kZXZpY2VfYWRpdQ"));
        String strK = K(context);
        if (TextUtils.isEmpty(strK)) {
            return "";
        }
        File file = new File(strK + File.separator + x.c("KYmFja3Vwcw"), x.c("MLmFkaXU"));
        if (file.exists() && file.canRead()) {
            if (file.length() == 0) {
                file.delete();
                return "";
            }
            ByteArrayOutputStream byteArrayOutputStream2 = null;
            try {
                randomAccessFile = new RandomAccessFile(file, "r");
                try {
                    bArr = new byte[1024];
                    byteArrayOutputStream = new ByteArrayOutputStream();
                } catch (Throwable unused) {
                }
            } catch (Throwable unused2) {
                randomAccessFile = null;
            }
            while (true) {
                try {
                    int i2 = randomAccessFile.read(bArr);
                    if (i2 == -1) {
                        break;
                    }
                    byteArrayOutputStream.write(bArr, 0, i2);
                } catch (Throwable unused3) {
                    byteArrayOutputStream2 = byteArrayOutputStream;
                    a(byteArrayOutputStream2);
                }
                a(randomAccessFile);
            }
            String str = new String(byteArrayOutputStream.toByteArray(), "UTF-8");
            if (!TextUtils.isEmpty(str) && str.contains(x.c("SIw")) && (strArrSplit = str.split(x.c("SIw"))) != null && strArrSplit.length == 2 && TextUtils.equals(strA, strArrSplit[0])) {
                String str2 = strArrSplit[1];
                a(byteArrayOutputStream);
                a(randomAccessFile);
                return str2;
            }
            a(byteArrayOutputStream);
            a(randomAccessFile);
        }
        return "";
    }

    private static String K(Context context) {
        if (Build.VERSION.SDK_INT < 9) {
            return null;
        }
        try {
            StorageManager storageManager = (StorageManager) context.getSystemService("storage");
            Class<?> cls = Class.forName(x.c("SYW5kcm9pZC5vcy5zdG9yYWdlLlN0b3JhZ2VWb2x1bWU"));
            Method method = storageManager.getClass().getMethod(x.c("MZ2V0Vm9sdW1lTGlzdA"), new Class[0]);
            Method method2 = cls.getMethod(x.c("FZ2V0UGF0aA"), new Class[0]);
            Method method3 = cls.getMethod(x.c("DaXNSZW1vdmFibGU"), new Class[0]);
            Object objInvoke = method.invoke(storageManager, new Object[0]);
            int length = Array.getLength(objInvoke);
            for (int i2 = 0; i2 < length; i2++) {
                Object obj = Array.get(objInvoke, i2);
                String str = (String) method2.invoke(obj, new Object[0]);
                if (!((Boolean) method3.invoke(obj, new Object[0])).booleanValue()) {
                    return str;
                }
            }
        } catch (Throwable unused) {
        }
        return null;
    }

    private static synchronized b L(Context context) {
        if (X == null) {
            if (context == null) {
                return null;
            }
            b bVar = new b();
            X = bVar;
            bVar.a(context.getApplicationContext());
        }
        return X;
    }

    public static String a() {
        return k;
    }

    public static String a(final Context context) {
        if (!TextUtils.isEmpty(b)) {
            return b;
        }
        if (context == null) {
            return "";
        }
        String strH = H(context);
        b = strH;
        if (!TextUtils.isEmpty(strH)) {
            return b;
        }
        if (c() == null || n) {
            return "";
        }
        n = true;
        cr.a().b(new cs() {
            @Override
            public final void a() {
                try {
                    Map<String, String> mapB = o.g.b();
                    String strA = o.g.a(o.f(context), "", "", o.n());
                    if (TextUtils.isEmpty(strA)) {
                        return;
                    }
                    bo.a();
                    String strA2 = o.g.a(context, new String(bo.a(o.g.a(strA.getBytes(), mapB)).a));
                    if (TextUtils.isEmpty(strA2)) {
                        return;
                    }
                    o.b = strA2;
                } catch (Throwable unused) {
                }
            }
        });
        return "";
    }

    /* JADX WARN: Removed duplicated region for block: B:33:0x00c1 A[Catch: all -> 0x00ee, TRY_ENTER, TryCatch #2 {all -> 0x00ee, blocks: (B:3:0x0001, B:7:0x000f, B:9:0x0014, B:12:0x004f, B:17:0x0060, B:19:0x0068, B:21:0x006e, B:33:0x00c1, B:34:0x00c4, B:38:0x00d2, B:40:0x00d7, B:41:0x00dd, B:42:0x00de, B:43:0x00e5, B:44:0x00eb, B:10:0x002d, B:11:0x003d, B:37:0x00c9, B:32:0x00b3, B:26:0x007e, B:27:0x009f, B:28:0x00a5, B:29:0x00a9), top: B:53:0x0001, inners: #0, #1 }] */
    /* JADX WARN: Removed duplicated region for block: B:51:0x00b3 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static String a(Context context, int i2) {
        String strC;
        boolean z2;
        try {
            Intent intent = new Intent();
            if (i2 == 2) {
                intent.setAction(x.c("WY29tLnVvZGlzLm9wZW5kZXZpY2UuT1BFTklEU19TRVJWSUNF"));
                intent.setPackage(x.c("UY29tLmh1YXdlaS5od2lk"));
            } else if (i2 == 4) {
                intent.setClassName(x.c("WY29tLnNhbXN1bmcuYW5kcm9pZC5kZXZpY2VpZHNlcnZpY2U"), x.c("QY29tLnNhbXN1bmcuYW5kcm9pZC5kZXZpY2VpZHNlcnZpY2UuRGV2aWNlSWRTZXJ2aWNl"));
            } else {
                if (i2 != 5) {
                    p = true;
                    return o;
                }
                intent.setClassName(x.c("YY29tLmhleXRhcC5vcGVuaWQ"), x.c("SY29tLmhleXRhcC5vcGVuaWQuSWRlbnRpZnlTZXJ2aWNl"));
                intent.setAction(x.c("EYWN0aW9uLmNvbS5oZXl0YXAub3BlbmlkLk9QRU5fSURfU0VSVklDRQ"));
            }
            c cVar = new c();
            if (context.bindService(intent, cVar, 1)) {
                int i3 = 0;
                while (i3 < 100 && TextUtils.isEmpty(o)) {
                    i3++;
                    if (r != null) {
                        Parcel parcelObtain = Parcel.obtain();
                        Parcel parcelObtain2 = Parcel.obtain();
                        if (i2 == 2) {
                            strC = x.c("UY29tLnVvZGlzLm9wZW5kZXZpY2UuYWlkbC5PcGVuRGV2aWNlSWRlbnRpZmllclNlcnZpY2U");
                        } else if (i2 == 4) {
                            strC = x.c("UY29tLnNhbXN1bmcuYW5kcm9pZC5kZXZpY2VpZHNlcnZpY2UuSURldmljZUlkU2VydmljZQ");
                        } else if (i2 != 5) {
                            z2 = false;
                            if (z2) {
                                try {
                                    r.transact(1, parcelObtain, parcelObtain2, 0);
                                    parcelObtain2.readException();
                                    o = parcelObtain2.readString();
                                    parcelObtain2.recycle();
                                } finally {
                                    try {
                                    } catch (Throwable th) {
                                    }
                                }
                                parcelObtain.recycle();
                            } else {
                                parcelObtain2.recycle();
                                parcelObtain.recycle();
                            }
                        } else {
                            parcelObtain.writeInterfaceToken(x.c("KY29tLmhleXRhcC5vcGVuaWQuSU9wZW5JRA"));
                            parcelObtain.writeString(context.getPackageName());
                            parcelObtain.writeString(x(context));
                            parcelObtain.writeString(x.c("IT1VJRA"));
                            z2 = true;
                            if (z2) {
                            }
                        }
                        parcelObtain.writeInterfaceToken(strC);
                        z2 = true;
                        if (z2) {
                        }
                    }
                    Thread.sleep(15L);
                }
                context.unbindService(cVar);
                r = null;
            }
            return o;
        } catch (Throwable th2) {
            as.a(th2, "oa", String.valueOf(i2));
            p = true;
            return o;
        }
    }

    public static void a(a aVar) {
        if (g == null) {
            g = aVar;
        }
    }

    private static void a(Closeable closeable) {
        if (closeable != null) {
            try {
                closeable.close();
            } catch (Throwable unused) {
            }
        }
    }

    public static void a(String str) {
        k = str;
    }

    public static String b() {
        try {
            return !TextUtils.isEmpty(e) ? e : g == null ? "" : g.a();
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String b(Context context) {
        try {
            return C(context);
        } catch (Throwable th) {
            th.printStackTrace();
            return "";
        }
    }

    private static boolean b(Context context, String str) {
        return context != null && context.checkCallingOrSelfPermission(str) == 0;
    }

    public static int c(Context context) {
        try {
            return F(context);
        } catch (Throwable th) {
            th.printStackTrace();
            return -1;
        }
    }

    public static a c() {
        return g;
    }

    public static int d(Context context) {
        try {
            return D(context);
        } catch (Throwable th) {
            th.printStackTrace();
            return -1;
        }
    }

    public static String d() {
        if (Build.VERSION.SDK_INT >= 29) {
            return "";
        }
        try {
            String strN = n();
            return strN.length() < 5 ? "" : strN.substring(3, 5);
        } catch (Throwable th) {
            th.printStackTrace();
            return "";
        }
    }

    public static String e() {
        return "";
    }

    public static String e(final Context context) {
        if (p) {
            return "";
        }
        if (TextUtils.isEmpty(o) && !s) {
            if (Looper.getMainLooper() == Looper.myLooper()) {
                cr.a().b(new cs() {
                    @Override
                    public final void a() {
                        o.A(context);
                        o.r();
                    }
                });
                return o;
            }
            s = true;
            return A(context);
        }
        return o;
    }

    public static String f() {
        return "";
    }

    public static String f(Context context) {
        if (t) {
            String str = a;
            return str == null ? "" : str;
        }
        if (a != null && !"".equals(a)) {
            return a;
        }
        if (b(context, x.c("WYW5kcm9pZC5wZXJtaXNzaW9uLldSSVRFX1NFVFRJTkdT"))) {
            a = Settings.System.getString(context.getContentResolver(), "mqBRboGZkQPcAkyk");
        }
        if (!TextUtils.isEmpty(a)) {
            t = true;
            return a;
        }
        try {
            String strV = v(context);
            a = strV;
            if (!TextUtils.isEmpty(strV)) {
                t = true;
                return a;
            }
        } catch (Throwable unused) {
        }
        try {
            a = w(context);
            t = true;
        } catch (Throwable unused2) {
        }
        String str2 = a;
        return str2 == null ? "" : str2;
    }

    public static String g() {
        return "";
    }

    static String g(Context context) {
        try {
            TelephonyManager telephonyManagerG = G(context);
            if (telephonyManagerG == null) {
                return "";
            }
            String networkOperator = telephonyManagerG.getNetworkOperator();
            if (!TextUtils.isEmpty(networkOperator) && networkOperator.length() >= 3) {
                return networkOperator.substring(0, 3);
            }
            return "";
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String h() {
        return y;
    }

    static String h(Context context) {
        TelephonyManager telephonyManagerG;
        if (B) {
            return A;
        }
        try {
            L(context);
            telephonyManagerG = G(context);
        } catch (Throwable unused) {
        }
        if (telephonyManagerG == null) {
            return A;
        }
        String networkOperator = telephonyManagerG.getNetworkOperator();
        if (!TextUtils.isEmpty(networkOperator) && networkOperator.length() >= 3) {
            A = networkOperator.substring(3);
            B = true;
            return A;
        }
        B = true;
        return A;
    }

    public static int i(Context context) {
        try {
            return F(context);
        } catch (Throwable unused) {
            return -1;
        }
    }

    static String[] i() {
        return new String[]{"", ""};
    }

    public static int j(Context context) {
        try {
            return D(context);
        } catch (Throwable unused) {
            return -1;
        }
    }

    public static String j() {
        return i;
    }

    public static NetworkInfo k(Context context) {
        ConnectivityManager connectivityManagerE;
        if (b(context, x.c("AYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19ORVRXT1JLX1NUQVRF")) && (connectivityManagerE = E(context)) != null) {
            return connectivityManagerE.getActiveNetworkInfo();
        }
        return null;
    }

    public static String k() {
        return D;
    }

    static String l(Context context) {
        try {
            NetworkInfo networkInfoK = k(context);
            if (networkInfoK == null) {
                return null;
            }
            return networkInfoK.getExtraInfo();
        } catch (Throwable unused) {
            return null;
        }
    }

    public static void l() {
        try {
            ar.a();
        } catch (Throwable unused) {
        }
    }

    public static String m() {
        return "";
    }

    static String m(Context context) {
        StringBuilder sb;
        if (C != null && !"".equals(C)) {
            return C;
        }
        DisplayMetrics displayMetrics = new DisplayMetrics();
        WindowManager windowManager = (WindowManager) context.getSystemService("window");
        if (windowManager == null) {
            return "";
        }
        windowManager.getDefaultDisplay().getMetrics(displayMetrics);
        int i2 = displayMetrics.widthPixels;
        int i3 = displayMetrics.heightPixels;
        if (i3 > i2) {
            sb = new StringBuilder();
            sb.append(i2);
            sb.append("*");
            sb.append(i3);
        } else {
            sb = new StringBuilder();
            sb.append(i3);
            sb.append("*");
            sb.append(i2);
        }
        C = sb.toString();
        return C;
    }

    public static String n() {
        return "";
    }

    public static String n(Context context) {
        try {
            if (!b(context, x.c("WYW5kcm9pZC5wZXJtaXNzaW9uLlJFQURfUEhPTkVfU1RBVEU="))) {
                return N;
            }
            TelephonyManager telephonyManagerG = G(context);
            return telephonyManagerG == null ? "" : telephonyManagerG.getNetworkOperatorName();
        } catch (Throwable unused) {
            return "";
        }
    }

    public static long o() {
        long blockCount;
        long blockCount2;
        long j2 = K;
        if (j2 != 0) {
            return j2;
        }
        try {
            StatFs statFs = new StatFs(Environment.getRootDirectory().getAbsolutePath());
            StatFs statFs2 = new StatFs(Environment.getExternalStorageDirectory().getAbsolutePath());
            if (Build.VERSION.SDK_INT >= 18) {
                blockCount = (statFs.getBlockCountLong() * statFs.getBlockSizeLong()) / 1048576;
                blockCount2 = (statFs2.getBlockCountLong() * statFs2.getBlockSizeLong()) / 1048576;
            } else {
                blockCount = (((long) statFs.getBlockCount()) * ((long) statFs.getBlockSize())) / 1048576;
                blockCount2 = (((long) statFs2.getBlockCount()) * ((long) statFs2.getBlockSize())) / 1048576;
            }
            K = blockCount + blockCount2;
        } catch (Throwable unused) {
        }
        return K;
    }

    public static String o(Context context) {
        ConnectivityManager connectivityManagerE;
        NetworkInfo activeNetworkInfo;
        try {
            return (!b(context, x.c("AYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19ORVRXT1JLX1NUQVRF")) || (connectivityManagerE = E(context)) == null || (activeNetworkInfo = connectivityManagerE.getActiveNetworkInfo()) == null) ? "" : activeNetworkInfo.getTypeName();
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String p() {
        if (!TextUtils.isEmpty(M)) {
            return M;
        }
        String property = System.getProperty("os.arch");
        M = property;
        return property;
    }

    public static String p(Context context) {
        try {
            String strK = k();
            try {
                if (TextUtils.isEmpty(strK)) {
                    strK = a(context);
                }
                if (TextUtils.isEmpty(strK)) {
                    strK = f(context);
                }
                if (TextUtils.isEmpty(strK)) {
                    strK = e(context);
                }
                if (TextUtils.isEmpty(strK)) {
                    strK = g();
                }
                return TextUtils.isEmpty(strK) ? B(context) : strK;
            } catch (Throwable unused) {
                return strK;
            }
        } catch (Throwable unused2) {
            return "";
        }
    }

    public static String q(Context context) {
        return k() + "#" + a(context) + "#" + p(context);
    }

    public static void q() {
        S = -1;
        T = false;
        V = -1;
        W = false;
        Q = "";
        R = false;
        A = "";
        B = false;
    }

    public static int r(Context context) {
        BufferedReader bufferedReader;
        int i2 = L;
        if (i2 != 0) {
            return i2;
        }
        int iIntValue = 0;
        if (Build.VERSION.SDK_INT >= 16) {
            ActivityManager activityManager = (ActivityManager) context.getSystemService("activity");
            if (activityManager == null) {
                return 0;
            }
            ActivityManager.MemoryInfo memoryInfo = new ActivityManager.MemoryInfo();
            activityManager.getMemoryInfo(memoryInfo);
            iIntValue = (int) (memoryInfo.totalMem / 1024);
        } else {
            BufferedReader bufferedReader2 = null;
            try {
                try {
                    bufferedReader = new BufferedReader(new FileReader(new File("/proc/meminfo")));
                } catch (IOException unused) {
                }
                try {
                    iIntValue = Integer.valueOf(bufferedReader.readLine().split("\\s+")[1]).intValue();
                    bufferedReader.close();
                } catch (Throwable unused2) {
                    bufferedReader2 = bufferedReader;
                    if (bufferedReader2 != null) {
                        bufferedReader2.close();
                    }
                    int i3 = iIntValue / 1024;
                    L = i3;
                    return i3;
                }
            } catch (Throwable unused3) {
            }
        }
        int i32 = iIntValue / 1024;
        L = i32;
        return i32;
    }

    static boolean r() {
        s = true;
        return true;
    }

    static String s(Context context) {
        try {
            return C(context);
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String t(Context context) {
        try {
            if (TextUtils.isEmpty(m)) {
                m = ae.a(context);
            }
        } catch (Throwable unused) {
        }
        return m;
    }

    private static String v(Context context) {
        try {
            String strB = bd.b(context, "Alvin2", "UTDID2", "");
            return TextUtils.isEmpty(strB) ? bd.b(context, "Alvin2", "UTDID", "") : strB;
        } catch (Throwable unused) {
            return "";
        }
    }

    private static String w(Context context) {
        FileInputStream fileInputStream = null;
        try {
            if (x.a(context, com.kuaishou.weapon.p0.g.i) && "mounted".equals(Environment.getExternalStorageState())) {
                File file = new File(Environment.getExternalStorageDirectory().getAbsolutePath() + "/.UTSystemConfig/Global/Alvin2.xml");
                XmlPullParser xmlPullParserNewPullParser = Xml.newPullParser();
                FileInputStream fileInputStream2 = new FileInputStream(file);
                try {
                    xmlPullParserNewPullParser.setInput(fileInputStream2, "utf-8");
                    boolean z2 = false;
                    for (int eventType = xmlPullParserNewPullParser.getEventType(); 1 != eventType; eventType = xmlPullParserNewPullParser.next()) {
                        if (eventType != 2) {
                            if (eventType == 3) {
                                z2 = false;
                            } else if (eventType == 4 && z2) {
                                String text = xmlPullParserNewPullParser.getText();
                                try {
                                    fileInputStream2.close();
                                } catch (Throwable unused) {
                                }
                                return text;
                            }
                        } else if (xmlPullParserNewPullParser.getAttributeCount() > 0) {
                            int attributeCount = xmlPullParserNewPullParser.getAttributeCount();
                            for (int i2 = 0; i2 < attributeCount; i2++) {
                                String attributeValue = xmlPullParserNewPullParser.getAttributeValue(i2);
                                if ("UTDID2".equals(attributeValue) || "UTDID".equals(attributeValue)) {
                                    z2 = true;
                                }
                            }
                        }
                    }
                    fileInputStream = fileInputStream2;
                } catch (Throwable unused2) {
                    fileInputStream = fileInputStream2;
                    if (fileInputStream == null) {
                        return "";
                    }
                }
            }
            if (fileInputStream == null) {
                return "";
            }
        } catch (Throwable unused3) {
        }
        try {
            fileInputStream.close();
            return "";
        } catch (Throwable unused4) {
            return "";
        }
    }

    private static String x(Context context) {
        try {
            if (!TextUtils.isEmpty(q)) {
                return q;
            }
            byte[] bArrDigest = MessageDigest.getInstance(x.c("IU0hBMQ")).digest(context.getPackageManager().getPackageInfo(context.getPackageName(), 64).signatures[0].toByteArray());
            StringBuffer stringBuffer = new StringBuffer();
            for (byte b2 : bArrDigest) {
                stringBuffer.append(Integer.toHexString((b2 & UByte.MAX_VALUE) | 256).substring(1, 3));
            }
            String string = stringBuffer.toString();
            if (!TextUtils.isEmpty(string)) {
                q = string;
            }
            return string;
        } catch (Throwable unused) {
            return "";
        }
    }

    private static String y(Context context) {
        try {
            Class<?> cls = Class.forName(x.c("WY29tLmFuZHJvaWQuaWQuaW1wbC5JZFByb3ZpZGVySW1wbA"));
            Object objInvoke = cls.getMethod(x.c("MZ2V0T0FJRA"), Context.class).invoke(cls.newInstance(), context);
            if (objInvoke != null) {
                String str = (String) objInvoke;
                o = str;
                return str;
            }
        } catch (Throwable th) {
            as.a(th, "oa", "xm");
            p = true;
        }
        return o;
    }

    private static String z(Context context) {
        try {
            Cursor cursorQuery = context.getContentResolver().query(Uri.parse(x.c("QY29udGVudDovL2NvbS52aXZvLnZtcy5JZFByb3ZpZGVyL0lkZW50aWZpZXJJZC9PQUlE")), null, null, null, null);
            if (cursorQuery != null) {
                while (cursorQuery.moveToNext()) {
                    int columnCount = cursorQuery.getColumnCount();
                    int i2 = 0;
                    while (true) {
                        if (i2 >= columnCount) {
                            break;
                        }
                        if (x.c("IdmFsdWU").equals(cursorQuery.getColumnName(i2))) {
                            o = cursorQuery.getString(i2);
                            break;
                        }
                        i2++;
                    }
                }
                cursorQuery.close();
            }
        } catch (Throwable th) {
            p = true;
            as.a(th, "oa", "vivo");
        }
        return o;
    }
}
