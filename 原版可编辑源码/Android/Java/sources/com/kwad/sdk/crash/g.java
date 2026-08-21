package com.kwad.sdk.crash;

import android.content.Context;
import android.text.TextUtils;
import com.kwad.library.solder.lib.ext.PluginError;
import com.kwad.library.solder.lib.ext.b;
import com.kwad.sdk.utils.AbiUtil;
import java.util.concurrent.atomic.AtomicBoolean;

public final class g {
    private static final AtomicBoolean ISLOADED = new AtomicBoolean(false);

    public interface a {
        void Ex();
    }

    private static void a(Context context, com.kwad.library.solder.lib.c.b bVar, final a aVar) {
        com.kwad.library.solder.a.a.a(context, bVar, new b.c() {
            private void EL() {
                com.kwad.sdk.core.e.c.d("ExceptionSoLoadHelper", "onFail thread=" + Thread.currentThread().getName());
            }

            @Override
            private void a(com.kwad.library.solder.lib.b.c cVar) {
                super.a(cVar);
                com.kwad.sdk.core.e.c.d("ExceptionSoLoadHelper", "onCanceled thread=" + Thread.currentThread().getName());
            }

            @Override
            private void b(com.kwad.library.solder.lib.b.c cVar) {
                super.b(cVar);
                com.kwad.sdk.core.e.c.d("ExceptionSoLoadHelper", "onPostUpdate thread=" + Thread.currentThread().getName());
            }

            private void sI() {
                com.kwad.sdk.core.e.c.d("ExceptionSoLoadHelper", "onPostLoad thread=" + Thread.currentThread().getName());
                a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.Ex();
                }
            }

            @Override
            public final void a(com.kwad.library.solder.lib.a.f fVar, com.kwad.library.solder.lib.a.a aVar2) {
                sI();
            }

            @Override
            public final void a(com.kwad.library.solder.lib.a.f fVar, PluginError pluginError) {
                EL();
            }
        });
    }

    public static void a(c cVar, a aVar) {
        String str;
        String str2;
        if (ISLOADED.get()) {
            aVar.Ex();
            return;
        }
        Context context = cVar.context;
        ISLOADED.set(true);
        if (AbiUtil.isArm64(context)) {
            str = cVar.azH;
            if (TextUtils.isEmpty(str)) {
                str = "https://static.yximgs.com/udata/pkg/KS-Android-KSAdSDk/ks_so-exceptionArm64v8aRelease-3.3.23.apk";
            }
            str2 = "exception-v8a";
        } else {
            str = cVar.azI;
            if (TextUtils.isEmpty(str)) {
                str = "https://static.yximgs.com/udata/pkg/KS-Android-KSAdSDk/ks_so-exceptionArmeabiv7aRelease-3.3.23.apk";
            }
            str2 = "exception-v7a";
        }
        com.kwad.library.solder.lib.c.b bVar = new com.kwad.library.solder.lib.c.b();
        bVar.agz = com.kwad.sdk.core.network.idc.a.Bo().dc(str);
        bVar.IH = true;
        bVar.agy = str2;
        bVar.version = "3.1";
        bVar.agC = false;
        a(context, bVar, aVar);
    }
}
