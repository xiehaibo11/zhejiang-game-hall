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
import com.kwad.sdk.core.config.d;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.utils.AbiUtil;
import com.kwad.sdk.utils.aa;
import java.util.HashMap;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes2.dex */
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
        com.kwad.library.solder.a.a.a(context, bVar, new b.c() { // from class: com.kwad.components.offline.tk.b.a.1
            /* JADX INFO: Access modifiers changed from: private */
            @Override // com.kwad.library.solder.lib.ext.b.C0195b, com.kwad.library.solder.lib.ext.b
            public void a(com.kwad.library.solder.lib.b.c cVar) {
                super.a(cVar);
            }

            private void a(PluginError pluginError) {
                soLoadListener.onFailed(pluginError.getCode(), pluginError);
            }

            /* JADX INFO: Access modifiers changed from: private */
            @Override // com.kwad.library.solder.lib.ext.b.C0195b, com.kwad.library.solder.lib.ext.b
            /* JADX INFO: renamed from: b, reason: merged with bridge method [inline-methods] */
            public void c(com.kwad.library.solder.lib.b.c cVar) {
                super.c(cVar);
                soLoadListener.onPreUpdate();
                long unused = a.aaa = SystemClock.elapsedRealtime();
                TkLoggerReporter.get().reportTKSODownload(ILoggerReporter.Category.APM_LOG, new TKDownloadMsg().setDownloadState(0).setRetryCount(cVar.wu()).toJson());
            }

            /* JADX INFO: Access modifiers changed from: private */
            /* JADX WARN: Removed duplicated region for block: B:11:0x004f  */
            @Override // com.kwad.library.solder.lib.ext.b.C0195b, com.kwad.library.solder.lib.ext.b
            /* JADX INFO: renamed from: c, reason: merged with bridge method [inline-methods] */
            /*
                Code decompiled incorrectly, please refer to instructions dump.
                To view partially-correct add '--show-bad-code' argument
            */
            public void b(com.kwad.library.solder.lib.b.c r7) {
                /*
                    r6 = this;
                    super.b(r7)
                    int r0 = r7.getState()
                    r1 = 1
                    if (r0 != r1) goto L36
                    com.kwad.components.offline.api.tk.TkLoggerReporter r0 = com.kwad.components.offline.api.tk.TkLoggerReporter.get()
                    com.kwad.components.offline.api.tk.model.report.TKDownloadMsg r2 = new com.kwad.components.offline.api.tk.model.report.TKDownloadMsg
                    r2.<init>()
                    int r7 = r7.wu()
                    com.kwad.components.offline.api.tk.model.report.TKDownloadMsg r7 = r2.setRetryCount(r7)
                    long r2 = android.os.SystemClock.elapsedRealtime()
                    long r4 = com.kwad.components.offline.tk.b.a.sN()
                    long r2 = r2 - r4
                    com.kwad.components.offline.api.tk.model.report.TKDownloadMsg r7 = r7.setDownloadTime(r2)
                    com.kwad.components.offline.api.tk.model.report.TKDownloadMsg r7 = r7.setDownloadState(r1)
                    org.json.JSONObject r7 = r7.toJson()
                    java.lang.String r1 = "ad_client_apm_log"
                    r0.reportTKSODownload(r1, r7)
                    return
                L36:
                    java.lang.Throwable r0 = r7.wr()
                    if (r0 == 0) goto L4f
                    java.lang.Throwable r0 = r7.wr()
                    boolean r1 = r0 instanceof com.kwad.library.solder.lib.ext.PluginError
                    if (r1 == 0) goto L4f
                    com.kwad.library.solder.lib.ext.PluginError r0 = (com.kwad.library.solder.lib.ext.PluginError) r0
                    int r0 = r0.getCode()
                    java.lang.String r0 = java.lang.String.valueOf(r0)
                    goto L51
                L4f:
                    java.lang.String r0 = "other"
                L51:
                    com.kwad.components.offline.api.tk.TkLoggerReporter r1 = com.kwad.components.offline.api.tk.TkLoggerReporter.get()
                    com.kwad.components.offline.api.tk.model.report.TKDownloadMsg r2 = new com.kwad.components.offline.api.tk.model.report.TKDownloadMsg
                    r2.<init>()
                    int r7 = r7.wu()
                    com.kwad.components.offline.api.tk.model.report.TKDownloadMsg r7 = r2.setRetryCount(r7)
                    com.kwad.components.offline.api.tk.model.report.TKDownloadMsg r7 = r7.setErrorReason(r0)
                    r0 = 2
                    com.kwad.components.offline.api.tk.model.report.TKDownloadMsg r7 = r7.setDownloadState(r0)
                    org.json.JSONObject r7 = r7.toJson()
                    java.lang.String r0 = "ad_client_error_log"
                    r1.reportTKSODownload(r0, r7)
                    return
                */
                throw new UnsupportedOperationException("Method not decompiled: com.kwad.components.offline.tk.b.a.AnonymousClass1.b(com.kwad.library.solder.lib.b.c):void");
            }

            private void sI() {
                soLoadListener.onLoaded();
            }

            @Override // com.kwad.library.solder.lib.ext.b.C0195b, com.kwad.library.solder.lib.ext.b
            public final /* synthetic */ void a(f fVar, com.kwad.library.solder.lib.a.a aVar) {
                sI();
            }

            @Override // com.kwad.library.solder.lib.ext.b.C0195b, com.kwad.library.solder.lib.ext.b
            public final /* bridge */ /* synthetic */ void a(f fVar, PluginError pluginError) {
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
