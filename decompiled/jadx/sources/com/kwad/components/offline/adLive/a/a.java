package com.kwad.components.offline.adLive.a;

import android.content.Context;
import com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo;
import com.kwad.components.offline.api.core.soloader.SoLoadListener;
import com.kwad.library.solder.lib.a.f;
import com.kwad.library.solder.lib.c.b;
import com.kwad.library.solder.lib.ext.PluginError;
import com.kwad.library.solder.lib.ext.b;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.utils.AbiUtil;
import com.kwad.sdk.utils.aa;
import java.util.HashMap;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    private static final AtomicBoolean Zm = new AtomicBoolean(false);
    private static final String Zn = aa.format("lib%s.so", "c++_shared");
    private static final String Zo = aa.format("lib%s.so", "kwaiplayer");
    private static final String Zp = aa.format("lib%s.so", "kste");
    private static final String Zq = aa.format("lib%s.so", "hodor");
    private static final String Zr = aa.format("lib%s.so", "aegon");
    private static final AtomicBoolean Zs = new AtomicBoolean(false);

    public static void a(Context context, final SoLoadListener soLoadListener) {
        String str;
        String str2;
        String str3;
        if (Zm.get()) {
            return;
        }
        Zm.set(true);
        HashMap<String, String> map = new HashMap<>();
        if (AbiUtil.isArm64(context)) {
            map.put(Zn, "dcd68cd059cb06a9596ba6839c2e8858");
            map.put(Zo, "f5d9ed20ecd348d291dc742508036c00");
            map.put(Zp, "ebb56fa9c5701350497e281c2446660f");
            map.put(Zq, "d2c9607f3ddbbefe6914f1e94e8c53ff");
            map.put(Zr, "e43929c76e20f091def8fe0579d16adc");
            str = "https://static.yximgs.com/udata/pkg/KS-Android-KSAdSDk/adLive/3.3.26.1/ks_so-adLiveArm64v8aRelease-3.3.26.1.apk";
            str2 = "adLive-v8a";
            str3 = "310fad205107df839a5026968c232766";
        } else {
            map.put(Zn, "e3fdbf82716c2cb9b666a3880ab94003");
            map.put(Zo, "ec3e4937f3c114dd36ed0cbd10585d22");
            map.put(Zp, "71a9baa45905a6f0e527e5a2e06e8808");
            map.put(Zq, "644a9dacce49b4c3226f5129267c0dad");
            map.put(Zr, "69828b232bd1c06552a81870a5d5e465");
            str = "https://static.yximgs.com/udata/pkg/KS-Android-KSAdSDk/adLive/3.3.26.1/ks_so-adLiveArmeabiv7aRelease-3.3.26.1.apk";
            str2 = "adLive-v7a";
            str3 = "e0f9628529f23e1928c8d3f61634c8f2";
        }
        b bVar = new b();
        com.kwad.library.solder.lib.a.a aVarH = com.kwad.library.solder.a.a.h(context, IAdLiveOfflineCompo.PACKAGE_NAME);
        c.d("AdLiveSoLoadHelper", "adLiveOfflineCompoPlugin: " + aVarH);
        if (aVarH instanceof com.kwad.library.b.a) {
            bVar.agH = ((com.kwad.library.b.a) aVarH).vV();
        }
        bVar.agz = com.kwad.sdk.core.network.idc.a.Bo().dc(str);
        bVar.IH = true;
        bVar.agy = str2;
        bVar.version = "3.6";
        bVar.agE = map;
        bVar.agB = str3;
        bVar.agC = true;
        com.kwad.library.solder.a.a.a(context, bVar, new b.c() { // from class: com.kwad.components.offline.adLive.a.a.1
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
            }

            /* JADX INFO: Access modifiers changed from: private */
            /* JADX WARN: Removed duplicated region for block: B:11:0x002b  */
            @Override // com.kwad.library.solder.lib.ext.b.C0195b, com.kwad.library.solder.lib.ext.b
            /* JADX INFO: renamed from: c, reason: merged with bridge method [inline-methods] */
            /*
                Code decompiled incorrectly, please refer to instructions dump.
                To view partially-correct add '--show-bad-code' argument
            */
            public void b(com.kwad.library.solder.lib.b.c r5) {
                /*
                    r4 = this;
                    super.b(r5)
                    int r0 = r5.getState()
                    java.lang.String r1 = "AdLiveSoLoadHelper"
                    r2 = 1
                    if (r0 != r2) goto L12
                    java.lang.String r5 = "onPostUpdate UPD_SUCCESS"
                    com.kwad.sdk.core.e.c.d(r1, r5)
                    return
                L12:
                    java.lang.Throwable r0 = r5.wr()
                    if (r0 == 0) goto L2b
                    java.lang.Throwable r0 = r5.wr()
                    boolean r2 = r0 instanceof com.kwad.library.solder.lib.ext.PluginError
                    if (r2 == 0) goto L2b
                    com.kwad.library.solder.lib.ext.PluginError r0 = (com.kwad.library.solder.lib.ext.PluginError) r0
                    int r0 = r0.getCode()
                    java.lang.String r0 = java.lang.String.valueOf(r0)
                    goto L2d
                L2b:
                    java.lang.String r0 = "other"
                L2d:
                    java.lang.StringBuilder r2 = new java.lang.StringBuilder
                    java.lang.String r3 = "onPostUpdate error: "
                    r2.<init>(r3)
                    r2.append(r0)
                    java.lang.String r0 = r2.toString()
                    java.lang.Throwable r5 = r5.wr()
                    android.util.Log.e(r1, r0, r5)
                    return
                */
                throw new UnsupportedOperationException("Method not decompiled: com.kwad.components.offline.adLive.a.a.AnonymousClass1.b(com.kwad.library.solder.lib.b.c):void");
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
}
