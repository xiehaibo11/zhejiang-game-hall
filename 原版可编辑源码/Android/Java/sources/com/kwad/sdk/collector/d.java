package com.kwad.sdk.collector;

import android.content.Context;
import android.util.Log;
import com.kwad.library.solder.lib.ext.PluginError;
import com.kwad.library.solder.lib.ext.b;
import com.kwad.sdk.utils.AbiUtil;
import java.util.HashMap;
import java.util.concurrent.atomic.AtomicBoolean;

public final class d {
    private static final AtomicBoolean ISLOADED = new AtomicBoolean(false);

    public interface a {
        void cj(String str);

        void onLoaded();
    }

    public static void a(Context context, final a aVar) {
        String str;
        String str2;
        String str3;
        if (ISLOADED.get()) {
            return;
        }
        HashMap<String, String> map = new HashMap<>();
        if (AbiUtil.isArm64(context)) {
            map.put("libkwappstatus.so", "40eb0d1d346cab7ced4d02a3065b7a94");
            str = "https://static.yximgs.com/udata/pkg/KS-Android-KSAdSDk/ks_so-appStatusArm64v8aRelease-3.3.14.apk";
            str2 = "kwappstatus-v8a";
            str3 = "c66bf3f78bd997bbd5b6e5038a23dff6";
        } else {
            map.put("libkwappstatus.so", "b60d5c17b0cc4aa03e8180bc5cedaf3d");
            str = "https://static.yximgs.com/udata/pkg/KS-Android-KSAdSDk/ks_so-appStatusArmeabiv7aRelease-3.3.14.apk";
            str2 = "kwappstatus-v7a";
            str3 = "b9c0eff152a62bd5062844255107f3e0";
        }
        com.kwad.library.solder.lib.c.b bVar = new com.kwad.library.solder.lib.c.b();
        bVar.agz = com.kwad.sdk.core.network.idc.a.Bo().dc(str);
        bVar.IH = true;
        bVar.agy = str2;
        bVar.version = "3";
        bVar.agC = false;
        bVar.agB = str3;
        bVar.agE = map;
        com.kwad.library.solder.a.a.a(context, bVar, new b.c() {
            @Override
            private void a(com.kwad.library.solder.lib.b.c cVar) {
                super.a(cVar);
                a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.cj("load canceled");
                }
            }

            @Override
            private void a(com.kwad.library.solder.lib.b.c cVar, PluginError pluginError) {
                super.a(cVar, pluginError);
                if (aVar != null) {
                    aVar.cj(pluginError == null ? "load error" : pluginError.toString());
                }
            }

            @Override
            private void a(com.kwad.library.solder.lib.b.c cVar, com.kwad.library.solder.lib.h hVar) {
                super.a(cVar, hVar);
                d.a(aVar);
            }
        });
    }

    private static void a(a aVar) {
        try {
            System.loadLibrary("kwappstatus");
            ISLOADED.set(true);
            if (aVar != null) {
                aVar.onLoaded();
            }
        } catch (Throwable th) {
            if (aVar != null) {
                aVar.cj(Log.getStackTraceString(th));
            }
            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
            if (th instanceof UnsatisfiedLinkError) {
                return;
            }
            com.kwad.sdk.service.c.gatherException(th);
        }
    }

    public static boolean yG() {
        return ISLOADED.get();
    }
}
