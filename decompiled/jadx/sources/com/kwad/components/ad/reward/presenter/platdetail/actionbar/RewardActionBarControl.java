package com.kwad.components.ad.reward.presenter.platdetail.actionbar;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.view.View;
import com.kwad.components.ad.reward.j;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

/* JADX INFO: loaded from: classes2.dex */
public final class RewardActionBarControl {
    private AdInfo mAdInfo;
    private AdTemplate mAdTemplate;
    private Context mContext;
    private j qx;
    private b uB;
    private e uF;
    private c uG;
    private d uH;
    private final long uJ;
    private a uI = new a(0);
    private Handler mHandler = new Handler(Looper.getMainLooper());
    private boolean uK = false;
    private boolean uL = false;

    public enum ShowActionBarResult {
        SHOW_NATIVE_DEFAULT,
        SHOW_H5_SUCCESS,
        SHOW_H5_FAILURE,
        SHOW_ORDER,
        TK,
        SHOW_NATIVE_ORDER,
        SHOW_NATIVE_JINNIU,
        SHOW_NATIVE_PLAYABLE_PORTRAIT,
        SHOW_NATIVE_LIVE_SUBSCRIBE,
        SHOW_NATIVE_ORIGIN_LIVE
    }

    static class a implements com.kwad.components.ad.reward.presenter.platdetail.actionbar.a {
        private List<com.kwad.components.ad.reward.presenter.platdetail.actionbar.a> uQ;
        private ShowActionBarResult uR;

        private a() {
            this.uQ = new CopyOnWriteArrayList();
        }

        /* synthetic */ a(byte b) {
            this();
        }

        @Override // com.kwad.components.ad.reward.presenter.platdetail.actionbar.a
        public final void a(ShowActionBarResult showActionBarResult, View view) {
            com.kwad.sdk.core.e.c.d("ActionBarControl", "onActionBarShown result: " + showActionBarResult);
            this.uR = showActionBarResult;
            Iterator<com.kwad.components.ad.reward.presenter.platdetail.actionbar.a> it = this.uQ.iterator();
            while (it.hasNext()) {
                it.next().a(showActionBarResult, view);
            }
        }

        public final void c(com.kwad.components.ad.reward.presenter.platdetail.actionbar.a aVar) {
            this.uQ.add(aVar);
        }

        public final void d(com.kwad.components.ad.reward.presenter.platdetail.actionbar.a aVar) {
            this.uQ.remove(aVar);
        }
    }

    public interface b {
        void a(boolean z, com.kwad.components.ad.reward.presenter.platdetail.actionbar.a aVar);
    }

    public interface c {
        void e(com.kwad.components.ad.reward.presenter.platdetail.actionbar.a aVar);
    }

    public interface d {
        void f(com.kwad.components.ad.reward.presenter.platdetail.actionbar.a aVar);
    }

    public interface e {
        boolean g(com.kwad.components.ad.reward.presenter.platdetail.actionbar.a aVar);
    }

    public RewardActionBarControl(j jVar, Context context, AdTemplate adTemplate) {
        this.qx = jVar;
        this.mContext = context;
        this.mAdTemplate = adTemplate;
        this.mAdInfo = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        long jAW = com.kwad.sdk.core.response.b.b.aW(adTemplate) > 0 ? com.kwad.sdk.core.response.b.b.aW(adTemplate) : 1000L;
        this.uJ = jAW > 0 ? jAW : 1000L;
    }

    private ShowActionBarResult R(boolean z) {
        c cVar;
        d dVar;
        if (j.d(this.qx) && (dVar = this.uH) != null) {
            dVar.f(this.uI);
            return ShowActionBarResult.TK;
        }
        if (com.kwad.components.ad.reward.a.b.i(this.mAdInfo) && (cVar = this.uG) != null) {
            cVar.e(this.uI);
            return ShowActionBarResult.SHOW_ORDER;
        }
        if (!com.kwad.sdk.core.response.b.b.aX(this.mAdTemplate) || com.kwad.sdk.core.response.b.a.aV(this.mAdInfo) || this.uF == null) {
            S(z);
            return ShowActionBarResult.SHOW_NATIVE_DEFAULT;
        }
        com.kwad.sdk.core.e.c.d("ActionBarControl", "showWebActionBar success in " + this.uJ);
        return this.uF.g(this.uI) ? ShowActionBarResult.SHOW_H5_SUCCESS : ShowActionBarResult.SHOW_H5_FAILURE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void S(boolean z) {
        if (this.uB != null) {
            com.kwad.sdk.core.e.c.d("ActionBarControl", "showNativeActionBar");
            this.uL = true;
            this.uB.a(z, this.uI);
        }
    }

    public static void a(final com.kwad.components.ad.reward.presenter.platdetail.actionbar.a aVar, final View view, final ShowActionBarResult showActionBarResult) {
        if (aVar != null) {
            view.post(new Runnable() { // from class: com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.2
                @Override // java.lang.Runnable
                public final void run() {
                    aVar.a(showActionBarResult, view);
                }
            });
        }
    }

    static /* synthetic */ boolean a(RewardActionBarControl rewardActionBarControl, boolean z) {
        rewardActionBarControl.uK = true;
        return true;
    }

    public final void Q(boolean z) {
        ShowActionBarResult showActionBarResultR = R(z);
        com.kwad.sdk.core.e.c.d("ActionBarControl", "showActionBarOnVideoStart result: " + showActionBarResultR);
        if (showActionBarResultR != ShowActionBarResult.SHOW_H5_FAILURE) {
            return;
        }
        this.mHandler.postDelayed(new Runnable() { // from class: com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.1
            @Override // java.lang.Runnable
            public final void run() {
                RewardActionBarControl.a(RewardActionBarControl.this, true);
                com.kwad.sdk.core.e.c.d("ActionBarControl", "mHasOutTime");
                if (RewardActionBarControl.this.uF != null && !RewardActionBarControl.this.uL && RewardActionBarControl.this.uF.g(RewardActionBarControl.this.uI)) {
                    com.kwad.sdk.core.e.c.d("ActionBarControl", "showWebActionBar success on " + RewardActionBarControl.this.uJ);
                } else {
                    com.kwad.sdk.core.e.c.d("ActionBarControl", "showWebActionBar out " + RewardActionBarControl.this.uJ);
                    com.kwad.components.core.o.a.pA().h(RewardActionBarControl.this.mAdTemplate, RewardActionBarControl.this.uJ);
                    com.kwad.components.ad.reward.monitor.a.a(RewardActionBarControl.this.qx.pj, "play_card", com.kwad.sdk.core.response.b.b.aV(RewardActionBarControl.this.qx.mAdTemplate), RewardActionBarControl.this.uJ, 1);
                    RewardActionBarControl.this.S(true);
                }
            }
        }, this.uJ);
    }

    public final void a(b bVar) {
        this.uB = bVar;
    }

    public final void a(c cVar) {
        this.uG = cVar;
    }

    public final void a(d dVar) {
        this.uH = dVar;
    }

    public final void a(e eVar) {
        this.uF = eVar;
    }

    public final void a(com.kwad.components.ad.reward.presenter.platdetail.actionbar.a aVar) {
        this.uI.c(aVar);
    }

    public final void b(com.kwad.components.ad.reward.presenter.platdetail.actionbar.a aVar) {
        this.uI.d(aVar);
    }

    public final void im() {
        if (this.uK) {
            com.kwad.sdk.core.e.c.i("ActionBarControl", "showWebActionBar time out on pageStatus");
        } else {
            this.mHandler.removeCallbacksAndMessages(null);
            R(true);
        }
    }

    public final ShowActionBarResult in() {
        return this.uI.uR;
    }
}
