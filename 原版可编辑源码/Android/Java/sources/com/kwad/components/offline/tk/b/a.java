package com.kwad.components.offline.tk.b;

import android.content.Context;
import android.os.SystemClock;
import android.text.TextUtils;
import com.kwad.components.offline.api.core.api.ILoggerReporter;
import com.kwad.components.offline.api.core.soloader.SoLoadListener;
import com.kwad.components.offline.api.tk.ITkOfflineCompo;
import com.kwad.components.offline.api.tk.TkLoggerReporter;
import com.kwad.components.offline.api.tk.model.report.TKDownloadMsg;
import com.kwad.library.solder.lib.a.f;
import com.kwad.library.solder.lib.c.b;
import com.kwad.library.solder.lib.ext.PluginError;
import com.kwad.library.solder.lib.ext.b;
import com.kwad.sdk.api.model.AdnName;
import com.kwad.sdk.core.config.d;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.utils.AbiUtil;
import com.kwad.sdk.utils.aa;
import java.util.HashMap;
import java.util.concurrent.atomic.AtomicBoolean;

public final class a {
    private static long aaa;
    private static final AtomicBoolean Zm = new AtomicBoolean(false);
    private static final String ZU = aa.format("lib%s.so", "tk_runtime_v0_0_38");
    private static final String ZV = aa.format("lib%s.so", "tk_runtime_lite_v0_0_38");
    private static final String ZW = aa.format("lib%s.so", "kwai-v8");
    private static final String ZX = aa.format("lib%s.so", "kwai-v8-lite");
    private static final String ZY = aa.format("lib%s.so", "kwad-fb");
    private static final String ZZ = aa.format("lib%s.so", "kwad-yoga");
    private static final String Zn = aa.format("lib%s.so", "c++_shared");
    private static Boolean aab = null;

    public static void a(Context context, final SoLoadListener soLoadListener) {
        String strZf;
        String str;
        String str2;
        String str3;
        String str4;
        String str5;
        String str6;
        String str7;
        String str8;
        if (Zm.get()) {
            return;
        }
        Zm.set(true);
        HashMap<String, String> map = new HashMap<>();
        boolean zUseTkLite = useTkLite();
        if (AbiUtil.isArm64(context)) {
            strZf = d.zg();
            if (TextUtils.isEmpty(strZf)) {
                strZf = zUseTkLite ? "https://static.yximgs.com/udata/pkg/KS-Android-KSAdSDk/tachikoma/3.3.34/ks_so-tachikomaLiteSoArm64v8aRelease-3.3.34.apk" : "https://static.yximgs.com/udata/pkg/KS-Android-KSAdSDk/tachikoma/3.3.34/ks_so-tachikomaSoArm64v8aRelease-3.3.34.apk";
            }
            str = zUseTkLite ? "sotk-v8a-lite" : "sotk-v8a";
            str2 = zUseTkLite ? "39df505f83794e951720e9c753824d0c" : "2c0fb7069df4a3e6fd55e417229bcb6b";
            if (zUseTkLite) {
                map.put(ZV, "a5009e795307441cc05dbd3e8aeaead3");
                str7 = ZX;
                str8 = "77545ba1892c1a1d4a039db37b3249eb";
            } else {
                map.put(ZU, "e1478b9b4f377d667c7e510e88ae1bcb");
                str7 = ZW;
                str8 = "7316cd8d074b04e6cb21486288d314ce";
            }
            map.put(str7, str8);
            map.put(ZY, "31f065607e6da6b741330d1df0b35460");
            map.put(ZZ, "76308532f64b68fd5a930c42cceec22b");
            str5 = Zn;
            str6 = "6ca7958ee0b0192a7c52c16faffaa8ba";
        } else {
            strZf = d.zf();
            if (TextUtils.isEmpty(strZf)) {
                strZf = zUseTkLite ? "https://static.yximgs.com/udata/pkg/KS-Android-KSAdSDk/tachikoma/3.3.34/ks_so-tachikomaLiteSoArmeabiv7aRelease-3.3.34.apk" : "https://static.yximgs.com/udata/pkg/KS-Android-KSAdSDk/tachikoma/3.3.34/ks_so-tachikomaSoArmeabiv7aRelease-3.3.34.apk";
            }
            str = zUseTkLite ? "sotk-v7a-lite" : "sotk-v7a";
            str2 = zUseTkLite ? "a46a370ee3a1a61a0d6041b3c69c0ab7" : "f8d270613187202ab45cfec0dca9deee";
            if (zUseTkLite) {
                map.put(ZV, "8ffd76abe9e5fe33f4035b56b9d6e8e3");
                str3 = ZX;
                str4 = "2dbd72527a0739740746adaae48ed2e0";
            } else {
                map.put(ZU, "55e6b8f6cd2091d8f8412dafcf9f381a");
                str3 = ZW;
                str4 = "519ba633e88efafb8fbd536d800da734";
            }
            map.put(str3, str4);
            map.put(ZY, "eff11bebb8a3c872fa30b0484b460d12");
            map.put(ZZ, "2c6f402c6a565d2e6912b0013fa59380");
            str5 = Zn;
            str6 = "7cb16c2840085bbdf4be628e6604bac1";
        }
        map.put(str5, str6);
        b bVar = new b();
        bVar.agz = com.kwad.sdk.core.network.idc.a.Bo().dc(strZf);
        bVar.IH = true;
        bVar.agy = str;
        bVar.version = zUseTkLite ? "3.3.34-lite" : "3.3.34";
        bVar.agC = false;
        bVar.agB = str2;
        bVar.agE = map;
        final com.kwad.library.solder.lib.a.a aVarH = com.kwad.library.solder.a.a.h(context, ITkOfflineCompo.PACKAGE_NAME);
        c.d("TkSoLoadHelper", "tkOfflineCompoPlugin: " + aVarH);
        if (aVarH instanceof com.kwad.library.b.a) {
            bVar.agH = ((com.kwad.library.b.a) aVarH).vV();
        }
        com.kwad.library.solder.a.a.a(context, bVar, new b.c() {
            @Override
            private void a(com.kwad.library.solder.lib.b.c cVar) {
                super.a(cVar);
            }

            private void a(PluginError pluginError) {
                soLoadListener.onFailed(pluginError.getCode(), pluginError);
            }

            @Override
            private void c(com.kwad.library.solder.lib.b.c cVar) {
                super.c(cVar);
                soLoadListener.onPreUpdate();
                long unused = a.aaa = SystemClock.elapsedRealtime();
                TkLoggerReporter.get().reportTKSODownload(ILoggerReporter.Category.APM_LOG, new TKDownloadMsg().setDownloadState(0).setRetryCount(cVar.wu()).toJson());
            }

            /* JADX WARN: Removed duplicated region for block: B:11:0x004f  */
            @Override
            /*
                Code decompiled incorrectly, please refer to instructions dump.
            */
            private void b(com.kwad.library.solder.lib.b.c cVar) {
                String strValueOf;
                super.b(cVar);
                if (cVar.getState() == 1) {
                    TkLoggerReporter.get().reportTKSODownload(ILoggerReporter.Category.APM_LOG, new TKDownloadMsg().setRetryCount(cVar.wu()).setDownloadTime(SystemClock.elapsedRealtime() - a.aaa).setDownloadState(1).toJson());
                    return;
                }
                if (cVar.wr() != null) {
                    Throwable thWr = cVar.wr();
                    strValueOf = thWr instanceof PluginError ? String.valueOf(((PluginError) thWr).getCode()) : AdnName.OTHER;
                }
                TkLoggerReporter.get().reportTKSODownload(ILoggerReporter.Category.ERROR_LOG, new TKDownloadMsg().setRetryCount(cVar.wu()).setErrorReason(strValueOf).setDownloadState(2).toJson());
            }

            private void sI() {
                soLoadListener.onLoaded();
            }

            @Override
            public final void a(f fVar, com.kwad.library.solder.lib.a.a aVar) {
                sI();
            }

            @Override
            public final void a(f fVar, PluginError pluginError) {
                a(pluginError);
            }
        });
    }

    public static boolean useTkLite() {
        if (aab == null) {
            aab = Boolean.valueOf(!d.a(com.kwad.sdk.core.config.c.akI));
        }
        return aab.booleanValue();
    }
}
