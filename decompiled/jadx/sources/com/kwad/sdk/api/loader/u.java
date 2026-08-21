package com.kwad.sdk.api.loader;

import android.content.Context;
import android.text.TextUtils;
import com.kwad.sdk.api.core.IKsAdSDK;
import com.kwad.sdk.api.loader.m;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes2.dex */
public final class u {
    private static final AtomicBoolean ajo = new AtomicBoolean();

    public static void a(final Context context, final IKsAdSDK iKsAdSDK) {
        if (com.kwad.sdk.api.c.yl() || ajo.get() || context == null || iKsAdSDK == null) {
            return;
        }
        ajo.set(true);
        com.kwad.sdk.api.a.a.submit(new Runnable() { // from class: com.kwad.sdk.api.loader.u.1
            @Override // java.lang.Runnable
            public final void run() {
                try {
                    if (Math.abs(System.currentTimeMillis() - t.v(context, "lastUpdateTime")) < t.v(context, "interval") * 1000) {
                        return;
                    }
                    m.yw().a(new v() { // from class: com.kwad.sdk.api.loader.u.1.1
                        @Override // com.kwad.sdk.api.loader.v
                        public final Context getContext() {
                            return context;
                        }

                        @Override // com.kwad.sdk.api.loader.v
                        public final IKsAdSDK yA() {
                            return iKsAdSDK;
                        }

                        @Override // com.kwad.sdk.api.loader.v
                        public final String yz() {
                            return u.yy();
                        }
                    }, new m.c<Boolean>() { // from class: com.kwad.sdk.api.loader.u.1.2
                        private static void c(Boolean bool) {
                            new StringBuilder("onNewResult: ").append(bool);
                        }

                        @Override // com.kwad.sdk.api.loader.m.c
                        public final /* synthetic */ void g(Boolean bool) {
                            c(bool);
                        }
                    });
                } catch (Throwable unused) {
                }
            }
        });
    }

    public static void aE(Context context) {
        g.k(context, "");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static String yy() {
        String strBU = com.kwad.sdk.api.c.bU("https://open.e.kuaishou.com/rest/e/v3/open/sdk2");
        return !TextUtils.isEmpty(strBU) ? strBU : "https://open.e.kuaishou.com/rest/e/v3/open/sdk2";
    }
}
