package com.kwad.sdk.core.f;

import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import com.kwad.sdk.core.f.a.b;
import com.kwad.sdk.core.f.a.c;
import com.kwad.sdk.core.f.a.d;
import com.kwad.sdk.core.f.a.e;
import com.kwad.sdk.core.f.a.g;
import com.kwad.sdk.core.f.a.h;
import com.kwad.sdk.core.f.a.i;
import com.kwad.sdk.core.f.a.j;
import com.kwad.sdk.oaid.OADIDSDKHelper;
import com.kwad.sdk.oaid.OADIDSDKHelper25;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.service.a.f;
import com.kwad.sdk.utils.at;
import com.kwad.sdk.utils.aw;
import com.tencent.mm.opensdk.constants.ConstantsAPI;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    private static String aqh = "";
    private static boolean aqi;
    private static boolean sGetOaidFail;

    public static String ba(Context context) {
        if (at.Je() && !TextUtils.isEmpty(at.Jf())) {
            return at.Jf();
        }
        if (!TextUtils.isEmpty(aqh)) {
            return aqh;
        }
        if (at.Je() || ((f) ServiceProvider.get(f.class)).R(ConstantsAPI.AppSupportContentFlag.MMAPP_SUPPORT_XLSX)) {
            return aqh;
        }
        initAsync(context);
        return aqh;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void bb(Context context) {
        String oaid;
        if (!TextUtils.isEmpty(aqh) || context == null || aqi) {
            return;
        }
        aqi = true;
        if (sGetOaidFail) {
            return;
        }
        Context applicationContext = context.getApplicationContext();
        try {
            String upperCase = Build.MANUFACTURER.toUpperCase();
            switch (upperCase) {
                case "HUAWEI":
                    oaid = new b(applicationContext).getOAID();
                    aqh = oaid;
                    break;
                case "XIAOMI":
                case "BLACKSHARK":
                    oaid = new i(applicationContext).getOAID();
                    aqh = oaid;
                    break;
                case "OPPO":
                case "ONEPLUS":
                    oaid = new com.kwad.sdk.core.f.a.f(applicationContext).getOAID();
                    aqh = oaid;
                    break;
                case "VIVO":
                    oaid = new h(applicationContext).getOAID();
                    aqh = oaid;
                    break;
                case "LENOVO":
                case "MOTOLORA":
                    oaid = new c(applicationContext).getOAID();
                    aqh = oaid;
                    break;
                case "MEIZU":
                    oaid = new d(applicationContext).getOAID();
                    aqh = oaid;
                    break;
                case "NUBIA":
                    oaid = new e(applicationContext).getOAID();
                    aqh = oaid;
                    break;
                case "SAMSUNG":
                    oaid = new g(applicationContext).getOAID();
                    aqh = oaid;
                    break;
                case "ASUS":
                    oaid = new com.kwad.sdk.core.f.a.a(applicationContext).getOAID();
                    aqh = oaid;
                    break;
                case "ZTE":
                case "FERRMEOS":
                case "SSUI":
                    oaid = new j(applicationContext).getOAID();
                    aqh = oaid;
                    break;
            }
            com.kwad.sdk.core.e.c.i("OAIDHelper", "manufacturer:" + upperCase + "--OAID:" + aqh);
            if (TextUtils.isEmpty(aqh)) {
                sGetOaidFail = true;
            }
            aqi = false;
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
        }
    }

    public static void initAsync(final Context context) {
        if (!TextUtils.isEmpty(aqh) || context == null) {
            return;
        }
        com.kwad.sdk.utils.g.execute(new aw() { // from class: com.kwad.sdk.core.f.a.1
            @Override // com.kwad.sdk.utils.aw
            public final void doTask() {
                a.bb(context);
                if (OADIDSDKHelper.isSupport()) {
                    OADIDSDKHelper.getOAId(context, new OADIDSDKHelper.a() { // from class: com.kwad.sdk.core.f.a.1.1
                        @Override // com.kwad.sdk.oaid.OADIDSDKHelper.a
                        public final void dr(String str) {
                            String unused = a.aqh = str;
                            a.mI();
                        }
                    });
                } else if (OADIDSDKHelper25.isSupport()) {
                    OADIDSDKHelper25.getOAId(context, new OADIDSDKHelper25.a() { // from class: com.kwad.sdk.core.f.a.1.2
                        @Override // com.kwad.sdk.oaid.OADIDSDKHelper25.a
                        public final void dr(String str) {
                            String unused = a.aqh = str;
                            a.mI();
                        }
                    });
                }
            }
        });
    }

    static /* synthetic */ void mI() {
    }
}
