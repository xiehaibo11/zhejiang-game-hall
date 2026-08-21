package com.tkay.china.a;

import android.content.Context;
import android.os.Build;
import android.support.v4.os.EnvironmentCompat;
import android.text.TextUtils;
import com.bun.miitmdid.interfaces.IdSupplier;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import com.tkay.china.a.a.d;
import com.tkay.china.a.a.e;
import com.tkay.china.a.a.f;
import com.tkay.china.a.a.g;
import com.tkay.china.a.a.j;
import com.tkay.china.a.a.k;
import com.tkay.china.a.a.m;
import com.tkay.china.api.OaidSDKCallbackListener;
import com.tkay.china.api.TYChinaSDKHandler;
import com.ymnsdk.replugin.util.RomUtil;
import java.lang.reflect.Method;
import java.util.Arrays;

public final class b {
    public static void a(Context context, com.tkay.china.a.a aVar) {
        String strA;
        try {
            strA = a(context);
        } catch (Throwable unused) {
            strA = "";
        }
        if (!TextUtils.isEmpty(strA)) {
            aVar.a(strA, false);
            return;
        }
        String str = Build.MANUFACTURER;
        String strA2 = a("ro.build.freeme.label");
        boolean z = true;
        if (!TextUtils.isEmpty(strA2) && strA2.equalsIgnoreCase("FREEMEOS")) {
            str = "FERRMEOS";
        } else {
            String strA3 = a("ro.ssui.product");
            if (TextUtils.isEmpty(strA3) || strA3.equalsIgnoreCase(EnvironmentCompat.MEDIA_UNKNOWN)) {
                z = false;
            }
            if (z) {
                str = "SSUI";
            }
        }
        if (!TextUtils.isEmpty(str)) {
            String upperCase = str.toUpperCase();
            if (!Arrays.asList("ASUS", "HUAWEI", RomUtil.ROM_OPPO, "ONEPLUS", "ZTE", "FERRMEOS", "SSUI", "SAMSUNG", "MEIZU", "MOTOLORA", "LENOVO").contains(upperCase)) {
                if (RomUtil.ROM_VIVO.equals(upperCase)) {
                    strA = new k(context).a();
                } else if ("NUBIA".equals(upperCase)) {
                    strA = new f(context).a();
                } else {
                    c(context, aVar);
                }
            } else {
                com.tkay.core.common.l.b.a.a().a(new 1(aVar, context, upperCase));
            }
        }
        if (TextUtils.isEmpty(strA)) {
            return;
        }
        aVar.a(strA, false);
    }

    private static boolean a() {
        String strA = a("ro.build.freeme.label");
        return !TextUtils.isEmpty(strA) && strA.equalsIgnoreCase("FREEMEOS");
    }

    private static boolean b() {
        String strA = a("ro.ssui.product");
        return (TextUtils.isEmpty(strA) || strA.equalsIgnoreCase(EnvironmentCompat.MEDIA_UNKNOWN)) ? false : true;
    }

    private static String a(String str) {
        try {
            Class<?> cls = Class.forName("android.os.SystemProperties");
            return (String) cls.getMethod(MonitorConstants.CONNECT_TYPE_GET, String.class, String.class).invoke(cls, str, EnvironmentCompat.MEDIA_UNKNOWN);
        } catch (Exception unused) {
            return null;
        }
    }

    final class 1 implements Runnable {
        final com.tkay.china.a.a a;
        final Context b;
        final String c;

        1(com.tkay.china.a.a aVar, Context context, String str) {
            this.a = aVar;
            this.b = context;
            this.c = str;
        }

        @Override
        public final void run() {
            com.tkay.china.a.a aVar = new com.tkay.china.a.a() {
                @Override
                public final void a(String str, boolean z) {
                    if (1.this.a != null) {
                        1.this.a.a(str, z);
                    }
                }

                @Override
                public final void a() {
                    b.c(1.this.b, 1.this.a);
                }
            };
            try {
                switch (this.c) {
                    case "ASUS":
                        new com.tkay.china.a.a.b(this.b).a(aVar);
                        break;
                    case "OPPO":
                    case "ONEPLUS":
                        new g(this.b).a(aVar);
                        break;
                    case "ZTE":
                    case "FERRMEOS":
                    case "SSUI":
                        b.c(this.b, this.a);
                        break;
                    case "HUAWEI":
                        new d(this.b).a(aVar);
                        break;
                    case "SAMSUNG":
                        new j(this.b).a(aVar);
                        break;
                    case "LENOVO":
                    case "MOTOLORA":
                        new m(this.b).a(aVar);
                        break;
                    case "MEIZU":
                        new e(this.b).a(aVar);
                        break;
                    default:
                        b.c(this.b, this.a);
                        break;
                }
            } catch (Throwable th) {
                com.tkay.china.a.a aVar2 = this.a;
                if (aVar2 != null) {
                    th.getMessage();
                    aVar2.a();
                }
            }
        }
    }

    private static void a(Context context, String str, com.tkay.china.a.a aVar) {
        com.tkay.core.common.l.b.a.a().a(new 1(aVar, context, str));
    }

    private static void c(final Context context, final com.tkay.china.a.a aVar) {
        com.tkay.core.common.l.b.a.a().a(new Runnable() {
            @Override
            public final void run() {
                try {
                    TYChinaSDKHandler.handleInitOaidSDK(context.getApplicationContext(), new OaidSDKCallbackListener() {
                        @Override
                        public final void OnSupport(boolean z, IdSupplier idSupplier) {
                            b.a(idSupplier, aVar);
                        }

                        @Override
                        public final void onSupport(IdSupplier idSupplier) {
                            b.a(idSupplier, aVar);
                        }
                    });
                } catch (Throwable unused) {
                }
            }
        });
    }

    private static void b(IdSupplier idSupplier, com.tkay.china.a.a aVar) {
        String oaid = idSupplier != null ? idSupplier.getOAID() : "";
        if (TextUtils.isEmpty(oaid)) {
            if (aVar != null) {
                aVar.a();
            }
        } else if (aVar != null) {
            aVar.a(oaid, false);
        }
    }

    private static String a(Context context) {
        try {
            return new a(context).b;
        } catch (Throwable unused) {
            return "";
        }
    }

    static final class a {
        private static Object e;
        private static Class<?> f;
        private static Method g;
        private static Method h;
        private static Method i;
        private static Method j;
        final String a;
        final String b;
        final String c;
        final String d;

        static {
            try {
                Class<?> cls = Class.forName("com.android.id.impl.IdProviderImpl");
                f = cls;
                e = cls.newInstance();
                g = f.getMethod("getUDID", Context.class);
                h = f.getMethod("getOAID", Context.class);
                i = f.getMethod("getVAID", Context.class);
                j = f.getMethod("getAAID", Context.class);
            } catch (Throwable unused) {
            }
        }

        a(Context context) {
            this.a = a(context, g);
            this.b = a(context, h);
            this.c = a(context, i);
            this.d = a(context, j);
        }

        private static boolean a() {
            return (f == null || e == null) ? false : true;
        }

        private static String a(Context context, Method method) {
            Object obj = e;
            if (obj == null || method == null) {
                return null;
            }
            try {
                Object objInvoke = method.invoke(obj, context);
                if (objInvoke != null) {
                    return (String) objInvoke;
                }
                return null;
            } catch (Throwable unused) {
                return null;
            }
        }
    }

    static void a(IdSupplier idSupplier, com.tkay.china.a.a aVar) {
        String oaid = idSupplier != null ? idSupplier.getOAID() : "";
        if (TextUtils.isEmpty(oaid)) {
            if (aVar != null) {
                aVar.a();
            }
        } else if (aVar != null) {
            aVar.a(oaid, false);
        }
    }
}
