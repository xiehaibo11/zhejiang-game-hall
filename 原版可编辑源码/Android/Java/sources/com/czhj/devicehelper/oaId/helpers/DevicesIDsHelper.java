package com.czhj.devicehelper.oaId.helpers;

import android.content.Context;
import android.content.res.AssetManager;
import android.os.Build;
import android.support.v4.os.EnvironmentCompat;
import android.text.TextUtils;
import com.bianfeng.trackingio.TrackingIOInterface;
import com.czhj.sdk.logger.SigmobLog;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import com.ymnsdk.replugin.util.RomUtil;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.lang.reflect.InvocationHandler;
import java.lang.reflect.Method;
import java.lang.reflect.Proxy;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;

public class DevicesIDsHelper {
    private static AppIdsUpdater a = null;
    private static String b = null;
    private static int d = -1;
    private static int e;
    private static String f;
    private static Class<?> g;
    private static Class<?> h;
    private static Class<?> i;
    private static Class<?> j;
    private static String k;
    private static final List<String> l = new LinkedList<String>() {
        {
            add("00000000-0000-0000-0000-000000000000");
            add("00000000000000000000000000000000");
        }
    };
    private static final List<String> m = new LinkedList<String>() {
        {
            add("msaoaidsec");
            add("nllvm1632808251147706677");
            add("nllvm1630571663641560568");
            add("nllvm1623827671");
        }
    };
    private AppIdsUpdater c;

    public interface AppIdsUpdater {
        void OnIdsAvalid(String str);
    }

    static class IdentifyListenerHandler implements InvocationHandler {
        IdentifyListenerHandler() {
        }

        @Override
        public Object invoke(Object obj, Method method, Object[] objArr) throws Throwable {
            try {
                if (!"OnSupport".equalsIgnoreCase(method.getName())) {
                    return null;
                }
                Method declaredMethod = DevicesIDsHelper.h.getDeclaredMethod("getOAID", new Class[0]);
                String unused = DevicesIDsHelper.f = (String) (objArr.length == 1 ? declaredMethod.invoke(objArr[0], new Object[0]) : declaredMethod.invoke(objArr[1], new Object[0]));
                if (DevicesIDsHelper.a != null && !TextUtils.isEmpty(DevicesIDsHelper.f)) {
                    DevicesIDsHelper.a.OnIdsAvalid(DevicesIDsHelper.f);
                }
                SigmobLog.e("MdidSdkHelper oaid:" + DevicesIDsHelper.f);
                return null;
            } catch (Throwable unused2) {
                if (DevicesIDsHelper.a == null || TextUtils.isEmpty(DevicesIDsHelper.f)) {
                    return null;
                }
                DevicesIDsHelper.a.OnIdsAvalid(DevicesIDsHelper.f);
                return null;
            }
        }
    }

    static {
        i();
    }

    private static void a(Context context) {
        try {
            h();
            if (context != null && j != null && g != null && h != null) {
                if (TextUtils.isEmpty(f)) {
                    b(context);
                    return;
                } else {
                    if (a != null) {
                        a.OnIdsAvalid(f);
                        return;
                    }
                    return;
                }
            }
            SigmobLog.e("OAID 读取类创建失败");
            if (a != null) {
                a.OnIdsAvalid(f);
            }
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
            AppIdsUpdater appIdsUpdater = a;
            if (appIdsUpdater != null) {
                appIdsUpdater.OnIdsAvalid(f);
            }
        }
    }

    private void a(final Context context, final String str) {
        new Thread(new Runnable() {
            @Override
            public void run() {
                if ("ASUS".equals(str)) {
                    new a(context).a(DevicesIDsHelper.this.c);
                    return;
                }
                if ("HUAWEI".equals(str)) {
                    new b(context).a(DevicesIDsHelper.this.c);
                    return;
                }
                if (RomUtil.ROM_OPPO.equals(str)) {
                    new g(context).a(DevicesIDsHelper.this.c);
                    return;
                }
                if ("LENOVO".equals(str) || "MOTOLORA".equals(str)) {
                    c cVar = new c(context);
                    cVar.a(DevicesIDsHelper.this.c);
                    return;
                }
                if ("MEIZU".equals(str)) {
                    new d(context).a(DevicesIDsHelper.this.c);
                    return;
                }
                if ("SAMSUNG".equals(str)) {
                    new h(context).a(DevicesIDsHelper.this.c);
                } else if ("ONEPLUS".equals(str)) {
                    new f(context).a(DevicesIDsHelper.this.c);
                } else {
                    k kVar = ("ZTE".equals(str) || "FERRMEOS".equals(str) || DevicesIDsHelper.a() || "SSUI".equals(str) || !DevicesIDsHelper.b()) ? new k(context) : new k(context);
                    kVar.a(DevicesIDsHelper.this.c);
                }
            }
        }).start();
    }

    public static void a(String str) {
        b = str;
    }

    public static boolean a() {
        String strD = d("ro.build.freeme.label");
        return !TextUtils.isEmpty(strD) && strD.equalsIgnoreCase("FREEMEOS");
    }

    private static void b(Context context) {
        try {
            c(context);
            try {
                if (i != null && i.getField("classLoader").get(i) == null) {
                    i.getDeclaredMethod("InitEntry", Context.class).invoke(i, context);
                }
            } catch (Exception unused) {
            }
            int iIntValue = ((Integer) j.getDeclaredMethod("InitSdk", Context.class, Boolean.TYPE, g).invoke(null, context, true, Proxy.newProxyInstance(context.getClassLoader(), new Class[]{g}, new IdentifyListenerHandler()))).intValue();
            SigmobLog.e("MdidSdkHelper ErrorCode : " + iIntValue);
            if (iIntValue == 1008614 || iIntValue == 1008610 || a == null || TextUtils.isEmpty(f)) {
                return;
            }
            a.OnIdsAvalid(f);
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
            if (a == null || TextUtils.isEmpty(f)) {
                return;
            }
            a.OnIdsAvalid(f);
        }
    }

    public static void b(Context context, AppIdsUpdater appIdsUpdater) {
        a = appIdsUpdater;
        a(context);
    }

    public static void b(String str) {
        k = str;
    }

    public static boolean b() {
        String strD = d("ro.ssui.product");
        return (TextUtils.isEmpty(strD) || strD.equalsIgnoreCase(EnvironmentCompat.MEDIA_UNKNOWN)) ? false : true;
    }

    private static void c(Context context) {
        try {
            String strD = !TextUtils.isEmpty(b) ? b : d(context);
            if (TextUtils.isEmpty(strD)) {
                return;
            }
            j.getDeclaredMethod("InitCert", Context.class, String.class).invoke(null, context, strD);
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
        }
    }

    private static String d(Context context) {
        InputStream inputStreamOpen;
        try {
            String str = context.getPackageName() + TrackingIOInterface.ASSET_FILE_NAME_CERT;
            AssetManager assets = context.getAssets();
            if (TextUtils.isEmpty(k)) {
                inputStreamOpen = assets.open(str);
            } else {
                try {
                    inputStreamOpen = assets.open(k);
                } catch (IOException unused) {
                    inputStreamOpen = assets.open(str);
                }
            }
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(inputStreamOpen));
            StringBuilder sb = new StringBuilder();
            while (true) {
                String line = bufferedReader.readLine();
                if (line == null) {
                    return sb.toString();
                }
                sb.append(line);
                sb.append('\n');
            }
        } catch (IOException unused2) {
            SigmobLog.d("loadPemFromAssetFile failed");
            return "";
        }
    }

    private static String d(String str) {
        if (str == null) {
            return null;
        }
        try {
            Class<?> cls = Class.forName("android.os.SystemProperties");
            return (String) cls.getMethod(MonitorConstants.CONNECT_TYPE_GET, String.class, String.class).invoke(cls, str, EnvironmentCompat.MEDIA_UNKNOWN);
        } catch (Exception unused) {
            return null;
        }
    }

    private static String f() {
        return Build.BRAND.toUpperCase();
    }

    private static String g() {
        return Build.MANUFACTURER.toUpperCase();
    }

    private static void h() {
        try {
            j = Class.forName("com.bun.miitmdid.core.MdidSdkHelper");
            try {
                try {
                    try {
                        g = Class.forName("com.bun.miitmdid.interfaces.IIdentifierListener");
                        h = Class.forName("com.bun.miitmdid.interfaces.IdSupplier");
                    } catch (Exception unused) {
                        g = Class.forName("com.bun.supplier.IIdentifierListener");
                        h = Class.forName("com.bun.supplier.IdSupplier");
                        i = Class.forName("com.bun.miitmdid.core.JLibrary");
                    }
                } catch (Exception unused2) {
                }
            } catch (Exception unused3) {
                g = Class.forName("com.bun.miitmdid.core.IIdentifierListener");
                h = Class.forName("com.bun.miitmdid.supplier.IdSupplier");
                i = Class.forName("com.bun.miitmdid.core.JLibrary");
            }
        } catch (ClassNotFoundException e2) {
            SigmobLog.e(e2.getMessage());
        }
    }

    private static void i() {
        Iterator<String> it = m.iterator();
        while (it.hasNext()) {
            try {
                System.loadLibrary(it.next());
                return;
            } catch (Throwable unused) {
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:4:0x002a  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void a(Context context, AppIdsUpdater appIdsUpdater) {
        String strA;
        this.c = appIdsUpdater;
        SigmobLog.d("getManufacturer ===> " + g());
        String upperCase = g().toUpperCase();
        if (!"ASUS".equals(upperCase) && !"HUAWEI".equals(upperCase) && !"LENOVO".equals(upperCase) && !"MOTOLORA".equals(upperCase) && !"MEIZU".equals(upperCase)) {
            if ("NUBIA".equals(upperCase)) {
                strA = new e(context).a();
            } else if (RomUtil.ROM_OPPO.equals(upperCase) || "SAMSUNG".equals(upperCase)) {
                a(context, upperCase);
                strA = null;
            } else if (RomUtil.ROM_VIVO.equals(upperCase)) {
                strA = new i(context).a();
            } else if ("XIAOMI".equals(upperCase) || "BLACKSHARK".equals(upperCase)) {
                j jVar = new j(context);
                strA = jVar.a();
            } else {
                if (!"ONEPLUS".equals(upperCase) && !"ZTE".equals(upperCase) && !"FERRMEOS".equals(upperCase) && !a() && !"SSUI".equals(upperCase)) {
                    b();
                }
                a(context, upperCase);
                strA = null;
            }
        }
        AppIdsUpdater appIdsUpdater2 = this.c;
        if (appIdsUpdater2 != null) {
            appIdsUpdater2.OnIdsAvalid(strA);
        }
    }
}
