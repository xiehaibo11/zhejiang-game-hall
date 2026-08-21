package com.kwad.components.ad.h;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import com.kwad.components.core.i.a;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.y;
import java.util.List;

public final class c implements Runnable {
    private static final Handler nV = new Handler(Looper.getMainLooper());
    private static volatile boolean nZ;
    private final long nW;
    private final AdTemplate nX;
    private boolean nY = false;
    private d oa;

    public c(com.kwad.components.core.internal.api.a aVar) {
        this.nX = aVar.getAdTemplate();
        this.nW = com.kwad.sdk.core.response.b.a.cE(com.kwad.sdk.core.response.b.d.cg(r3));
        com.kwad.sdk.core.e.c.d("PushAdManager", "PushAdManager create adTemplate: " + this.nX.hashCode() + ", " + this.nW);
    }

    private static void a(int i, Runnable runnable, long j) {
        Message messageObtain = Message.obtain(nV, runnable);
        messageObtain.what = i;
        nV.sendMessageDelayed(messageObtain, j);
    }

    static boolean access$002(boolean z) {
        nZ = false;
        return false;
    }

    private void ff() {
        d dVar;
        if (!b.fa().fc()) {
            com.kwad.sdk.core.e.c.d("PushAdManager", "run preCheckResult false");
            return;
        }
        nZ = false;
        if (this.nY || (dVar = this.oa) == null || !dVar.fk()) {
            return;
        }
        this.nY = true;
        this.oa.c(new com.kwad.components.ad.b.a.b() {
            @Override
            public final void T() {
                y.at(System.currentTimeMillis());
                e.fn().fj();
            }

            @Override
            public final void U() {
                com.kwad.sdk.core.e.c.d("PushAdManager", "onAdClose: ");
                e.fn().fl();
                b.fa().a(c.this);
            }
        });
    }

    public final void d(com.kwad.components.core.internal.api.a aVar) {
        AdTemplate adTemplate = aVar.getAdTemplate();
        if (!adTemplate.equals(this.nX)) {
            com.kwad.sdk.core.e.c.d("PushAdManager", "onAdExit not current ad");
            return;
        }
        com.kwad.sdk.core.e.c.d("PushAdManager", "onAdExit showPushAdDelayTime: " + this.nW + ", adTemplate: " + adTemplate.hashCode());
        if (aVar.ae()) {
            a(1000001, this, this.nW);
        }
    }

    public final void fe() {
        com.kwad.sdk.core.e.c.w("PushAdManager", "startRequestPushAd processingPush: " + nZ);
        if (nZ || this.nX.mAdScene == null) {
            return;
        }
        nZ = true;
        com.kwad.components.core.i.a.b(this.nX.mAdScene, new a.a() {
            @Override
            public final void c(List<com.kwad.components.core.i.c> list) {
                com.kwad.sdk.core.e.c.d("PushAdManager", "onInnerAdLoad: " + list);
                if (list == null || list.size() <= 0) {
                    c.access$002(false);
                    return;
                }
                AdTemplate adTemplate = list.get(0).getAdTemplate();
                if (!com.kwad.sdk.core.response.b.a.cC(com.kwad.sdk.core.response.b.d.cg(adTemplate))) {
                    c.access$002(false);
                    com.kwad.sdk.core.e.c.d("PushAdManager", "pushAdInfo templateId invalid");
                } else {
                    com.kwad.sdk.core.e.c.d("PushAdManager", "loadPushTK");
                    c.this.oa = new d(ServiceProvider.getContext(), adTemplate);
                }
            }

            @Override
            public final void onError(int i, String str) {
                com.kwad.sdk.core.e.c.d("PushAdManager", "onError: " + str);
                c.access$002(false);
            }

            @Override
            public final void onRequestResult(int i) {
            }
        });
    }

    public final void fg() {
        com.kwad.sdk.core.e.c.d("PushAdManager", "onOutSDKPage: ");
        if (nV.hasMessages(1000001)) {
            return;
        }
        com.kwad.sdk.core.e.c.d("PushAdManager", "onOutSDKPage: sendMessageDelay MSG_WHAT_PAGE_OUT");
        a(1000002, this, 500L);
    }

    @Override
    public final void run() {
        if (com.kwad.components.core.e.a.e.mN().isShowing()) {
            com.kwad.components.core.e.a.e.mN().a(new com.kwad.components.core.e.a.c() {
                @Override
                public final void fh() {
                    com.kwad.components.core.e.a.e.mN().b(this);
                    c.this.ff();
                }
            });
        } else {
            ff();
        }
    }
}
