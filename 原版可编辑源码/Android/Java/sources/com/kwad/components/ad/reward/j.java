package com.kwad.components.ad.reward;

import android.app.Activity;
import android.content.Context;
import android.content.DialogInterface;
import android.os.Handler;
import android.os.Looper;
import android.view.View;
import android.view.ViewGroup;
import com.kwad.components.ad.reward.KSRewardVideoActivityProxy;
import com.kwad.components.ad.reward.j.r;
import com.kwad.components.ad.reward.k;
import com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.i.a;
import com.kwad.components.core.playable.PlayableSource;
import com.kwad.components.core.webview.b.c.d;
import com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView;
import com.kwad.sdk.KsAdSDKImpl;
import com.kwad.sdk.api.KsVideoPlayConfig;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdMatrixInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.view.AdBaseFrameLayout;
import com.kwad.sdk.utils.bi;
import com.kwad.sdk.utils.bj;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.PriorityQueue;
import java.util.Set;
import java.util.concurrent.Callable;
import java.util.concurrent.CopyOnWriteArrayList;
import org.json.JSONObject;

public final class j extends com.kwad.components.core.l.a {
    public boolean fz;
    public com.kwad.components.ad.reward.e.b mAdOpenInteractionListener;
    public com.kwad.components.ad.reward.e.d mAdRewardStepListener;
    public com.kwad.components.core.e.d.c mApkDownloadHelper;
    public boolean mCheckExposureResult;
    private Handler mHandler;
    public long mPageEnterTime;
    public JSONObject mReportExtData;
    private boolean mRewardVerifyCalled;
    public AdBaseFrameLayout mRootContainer;
    public int mScreenOrientation;
    public bi mTimerHelper;
    public KsVideoPlayConfig mVideoPlayConfig;
    public boolean oU;
    public com.kwad.components.ad.reward.l.d oV;
    public IAdLiveOfflineView oW;
    public com.kwad.components.core.playable.a oX;
    public RewardActionBarControl oY;
    public l oZ;
    public com.kwad.components.ad.reward.k.b.a pA;
    public com.kwad.components.ad.reward.k.a.a pB;
    public int pC;
    private int pD;
    public long pE;
    public long pF;
    public boolean pG;
    private boolean pH;
    private boolean pI;
    public boolean pJ;
    public boolean pK;
    public boolean pL;
    public LoadStrategy pM;
    private RewardRenderResult pN;
    private List<a> pO;
    private List<b> pP;
    private List<a.a> pQ;
    public com.kwad.components.ad.k.a pa;
    public g pb;
    private final PriorityQueue<com.kwad.components.ad.reward.e.f> pc;
    public final List<com.kwad.components.ad.reward.j.a> pd;
    private final List<r> pe;
    public Set<com.kwad.components.ad.reward.e.e> pf;
    private com.kwad.components.core.webview.b.e.a pg;
    private boolean ph;
    private boolean pi;
    public boolean pj;
    public boolean pk;
    public boolean pl;
    public boolean pm;
    private boolean pn;
    public boolean po;
    public boolean pp;
    public List<Integer> pq;
    public int pr;
    public boolean ps;
    public com.kwad.components.ad.reward.m.p pt;
    public boolean pu;
    private PlayableSource pv;
    private boolean pw;
    private List<DialogInterface.OnDismissListener> px;
    public com.kwad.components.ad.reward.e.m py;
    public boolean pz;

    public interface a {
        void gj();

        void gk();

        void gl();

        void gm();
    }

    public interface b {
        boolean interceptPlayCardResume();
    }

    public j(com.kwad.components.core.l.b<?> bVar) {
        super(bVar);
        this.oU = false;
        this.pc = new PriorityQueue<>();
        this.pd = new CopyOnWriteArrayList();
        this.pe = new CopyOnWriteArrayList();
        this.pf = new HashSet();
        this.ph = false;
        this.pi = false;
        this.pk = false;
        this.pl = false;
        this.pm = false;
        this.pn = false;
        this.po = false;
        this.mRewardVerifyCalled = false;
        this.pp = false;
        this.pq = new ArrayList();
        this.mCheckExposureResult = true;
        this.pr = 0;
        this.ps = false;
        this.pu = false;
        this.pv = null;
        this.pw = false;
        this.px = new CopyOnWriteArrayList();
        this.mHandler = new Handler(Looper.getMainLooper());
        this.pz = false;
        this.pD = 2;
        this.pH = false;
        this.pI = false;
        this.pJ = false;
        this.pK = false;
        this.pL = false;
        this.pM = LoadStrategy.FULL_TK;
        this.pO = new CopyOnWriteArrayList();
        this.pP = new CopyOnWriteArrayList();
        this.pQ = new CopyOnWriteArrayList();
        this.Lg.add(new com.kwad.components.core.l.a.a() {
            @Override
            public final void c(com.kwad.components.core.n.c cVar) {
                j.this.fL();
            }

            @Override
            public final void d(com.kwad.components.core.n.c cVar) {
                j.this.fM();
            }

            @Override
            public final void ge() {
                j.this.fK();
            }

            @Override
            public final void gf() {
                j.this.fN();
            }
        });
    }

    public static long a(long j, AdInfo adInfo) {
        return Math.min(com.kwad.sdk.core.response.b.a.Y(adInfo), j);
    }

    public static com.kwad.components.core.i.c a(List<com.kwad.components.core.i.c> list, long j) {
        if (j >= 0 && list != null) {
            for (com.kwad.components.core.i.c cVar : list) {
                if (com.kwad.sdk.core.response.b.d.cq(cVar.getAdTemplate()) == j) {
                    return cVar;
                }
            }
        }
        return null;
    }

    private void a(int i, com.kwad.sdk.core.report.j jVar) {
        if (jVar == null) {
            jVar = new com.kwad.sdk.core.report.j();
        }
        jVar.cg(i);
        jVar.c(this.mRootContainer.getTouchCoords());
        com.kwad.components.ad.reward.i.b.a(this.mAdTemplate, (String) null, (String) null, jVar, this.mReportExtData);
        com.kwad.components.ad.reward.c.a.gW().d(this.mAdTemplate, com.kwad.components.ad.reward.c.b.STATUS_NONE);
        this.mAdOpenInteractionListener.bE();
    }

    public static void a(Activity activity, j jVar) {
        com.kwad.sdk.core.e.c.d("RewardCallerContext", "showExtraDialog");
        com.kwad.components.ad.reward.j.a.b.a(jVar, activity, jVar.oV.getPlayDuration(), new DialogInterface.OnDismissListener() {
            @Override
            public final void onDismiss(DialogInterface dialogInterface) {
                j.this.d(dialogInterface);
                com.kwad.sdk.core.c.b.AU();
                Activity currentActivity = com.kwad.sdk.core.c.b.getCurrentActivity();
                if (currentActivity == null || !currentActivity.equals(j.this.getActivity())) {
                    return;
                }
                j.this.oV.resume();
            }
        }, new k.b() {
            @Override
            public final void gg() {
                j.this.oV.pause();
            }
        });
    }

    public static void a(Context context, j jVar, ViewGroup viewGroup) {
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(jVar.mAdTemplate);
        com.kwad.components.core.offline.api.a.a aVar = (com.kwad.components.core.offline.api.a.a) com.kwad.sdk.components.c.f(com.kwad.components.core.offline.api.a.a.class);
        if (aVar != null && aVar.hasLiveCompoReady() && com.kwad.sdk.core.response.b.a.cw(com.kwad.sdk.core.response.b.d.cg(jVar.mAdTemplate))) {
            IAdLiveOfflineView view = aVar.getView(context, com.kwad.sdk.core.response.b.a.aX(adInfoCg) == 8 ? 1 : 0);
            View view2 = view.getView();
            jVar.oW = view;
            viewGroup.addView(view2);
            jVar.oV.a(jVar.mAdTemplate, aVar.getAdLivePlayModule(view, KsAdSDKImpl.get().getAppId(), String.valueOf(com.kwad.sdk.core.response.b.a.bR(adInfoCg))));
        }
    }

    public static void a(j jVar, final k.c cVar, final k.a aVar) {
        if (!jVar.oV.jR()) {
            AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(jVar.mAdTemplate);
            bVarF = com.kwad.components.ad.reward.a.b.j(adInfoCg) || com.kwad.sdk.core.response.b.a.bN(adInfoCg) == 2 ? f(jVar) : null;
            if (bVarF == null) {
                bVarF = g(jVar);
            }
        }
        com.kwad.components.ad.reward.j.a.b bVar = bVarF;
        if (bVar != null) {
            com.kwad.components.ad.reward.j.a.b.a(bVar, jVar.getActivity(), jVar.oV.getPlayDuration(), aVar, new d.a() {
                @Override
                public final boolean gi() {
                    j.b(j.this, cVar, aVar);
                    return true;
                }
            });
        } else {
            b(jVar, cVar, aVar);
        }
    }

    public static <T> void a(List<T> list, com.kwad.sdk.g.a<T> aVar) {
        if (list != null) {
            Iterator<T> it = list.iterator();
            while (it.hasNext()) {
                aVar.accept(it.next());
            }
        }
    }

    public static boolean a(j jVar) {
        AdMatrixInfo.FullScreenInfo fullScreenInfoBM;
        return (!com.kwad.sdk.core.config.d.isCanUseTk() || com.kwad.sdk.core.response.b.a.aV(com.kwad.sdk.core.response.b.d.cg(jVar.mAdTemplate)) || (fullScreenInfoBM = com.kwad.sdk.core.response.b.b.bM(jVar.mAdTemplate)) == null || fullScreenInfoBM.renderType != 1 || com.kwad.sdk.core.response.b.a.aN(jVar.mAdTemplate)) ? false : true;
    }

    private static void b(j jVar, k.c cVar, k.a aVar) {
        boolean zE = e(jVar);
        com.kwad.sdk.core.e.c.d("RewardCallerContext", "showNativeCloseDialog isCloseDialogShowing: " + zE);
        if (zE) {
            return;
        }
        k.a(jVar.getActivity(), jVar.mAdTemplate, cVar, aVar);
    }

    public static boolean b(j jVar) {
        boolean z = false;
        if (jVar.oV.jR() || !com.kwad.sdk.core.config.d.isCanUseTk() || com.kwad.sdk.components.c.f(com.kwad.components.core.offline.api.b.c.class) == null) {
            return false;
        }
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(jVar.mAdTemplate);
        boolean z2 = (com.kwad.sdk.core.response.b.a.cq(adInfoCg) || (com.kwad.sdk.core.response.b.a.bv(adInfoCg) && com.kwad.components.ad.reward.a.b.gJ()) || com.kwad.sdk.core.response.b.d.cs(jVar.mAdTemplate)) ? false : true;
        jVar.pl = z2 && !jVar.pK;
        if (z2 && !jVar.pK) {
            z = true;
        }
        jVar.C(z);
        return z2;
    }

    public static boolean c(j jVar) {
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(jVar.mAdTemplate);
        boolean z = false;
        if (jVar.oV.jR() || com.kwad.sdk.core.response.b.a.cw(adInfoCg) || !com.kwad.sdk.core.config.d.isCanUseTk() || com.kwad.sdk.components.c.f(com.kwad.components.core.offline.api.b.c.class) == null || a(jVar)) {
            return false;
        }
        boolean z2 = com.kwad.components.ad.reward.a.b.j(adInfoCg) || !(com.kwad.components.ad.reward.a.b.i(adInfoCg) || com.kwad.sdk.core.response.b.d.ct(jVar.mAdTemplate) || com.kwad.sdk.core.response.b.a.cq(adInfoCg));
        if (z2 && !jVar.pK) {
            z = true;
        }
        jVar.pl = z;
        return z2;
    }

    public static boolean d(j jVar) {
        if (jVar.oV.jR() || !com.kwad.sdk.core.config.d.isCanUseTk() || com.kwad.sdk.components.c.f(com.kwad.components.core.offline.api.b.c.class) == null || jVar.pJ) {
            return false;
        }
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(jVar.mAdTemplate);
        if (com.kwad.sdk.core.response.b.a.cA(adInfoCg)) {
            return true;
        }
        return (r(jVar.mAdTemplate) || s(jVar.mAdTemplate) || !(com.kwad.components.ad.reward.a.b.j(adInfoCg) || (!com.kwad.components.ad.reward.a.b.i(adInfoCg) && !com.kwad.sdk.core.response.b.a.cq(adInfoCg) && !(com.kwad.sdk.core.response.b.a.bv(adInfoCg) && com.kwad.components.ad.reward.a.b.gJ()) && !com.kwad.sdk.core.response.b.d.ct(jVar.mAdTemplate) && !com.kwad.sdk.core.response.b.a.aN(jVar.mAdTemplate)))) ? false : true;
    }

    public static boolean e(j jVar) {
        return jVar.ph;
    }

    private static com.kwad.components.ad.reward.j.a.b f(j jVar) {
        d.b bVar = new d.b();
        bVar.setAdTemplate(jVar.mAdTemplate);
        bVar.aO("ksad-video-confirm-card");
        bVar.aP(false);
        bVar.aQ(true);
        return com.kwad.components.ad.reward.j.a.b.a(jVar, bVar);
    }

    private void fK() {
        Iterator<a> it = this.pO.iterator();
        while (it.hasNext()) {
            it.next().gj();
        }
    }

    private void fL() {
        if (this.pi || this.ph || this.pH) {
            return;
        }
        boolean zInterceptPlayCardResume = false;
        Iterator<b> it = this.pP.iterator();
        while (it.hasNext()) {
            zInterceptPlayCardResume |= it.next().interceptPlayCardResume();
        }
        if (zInterceptPlayCardResume) {
            return;
        }
        Iterator<a> it2 = this.pO.iterator();
        while (it2.hasNext()) {
            it2.next().gk();
        }
    }

    private void fM() {
        Iterator<a> it = this.pO.iterator();
        while (it.hasNext()) {
            it.next().gl();
        }
    }

    private void fN() {
        Iterator<a> it = this.pO.iterator();
        while (it.hasNext()) {
            it.next().gm();
        }
    }

    private void fQ() {
        this.pc.clear();
        com.kwad.components.core.e.d.c cVar = this.mApkDownloadHelper;
        if (cVar != null) {
            cVar.clear();
        }
        l lVar = this.oZ;
        if (lVar != null) {
            lVar.release();
        }
        g gVar = this.pb;
        if (gVar != null) {
            gVar.release();
        }
        Set<com.kwad.components.ad.reward.e.e> set = this.pf;
        if (set != null) {
            set.clear();
        }
    }

    private void fS() {
        int size = this.pc.size();
        for (int i = 0; i < size; i++) {
            com.kwad.components.ad.reward.e.f fVarPoll = this.pc.poll();
            if (fVarPoll != null) {
                fVarPoll.bD();
            }
        }
    }

    private static com.kwad.components.ad.reward.j.a.b g(j jVar) {
        if (com.kwad.sdk.core.response.b.a.bN(com.kwad.sdk.core.response.b.d.cg(jVar.mAdTemplate)) != 4 && com.kwad.sdk.core.response.b.a.bN(com.kwad.sdk.core.response.b.d.cg(jVar.mAdTemplate)) != 3) {
            return null;
        }
        d.b bVar = new d.b();
        bVar.setAdTemplate(jVar.mAdTemplate);
        bVar.aO("ksad-video-confirm-card");
        bVar.aP(false);
        bVar.aQ(true);
        return com.kwad.components.ad.reward.j.a.b.a(jVar, bVar);
    }

    public static boolean g(AdInfo adInfo) {
        return com.kwad.sdk.core.response.b.b.g(adInfo) && !com.kwad.components.ad.reward.a.b.k(adInfo);
    }

    private static boolean isMainThread() {
        return Looper.getMainLooper() == Looper.myLooper();
    }

    public static boolean r(AdTemplate adTemplate) {
        return com.kwad.sdk.core.response.b.d.f(adTemplate, com.kwad.components.ad.reward.a.b.k(com.kwad.sdk.core.response.b.d.cg(adTemplate)));
    }

    public static boolean s(AdTemplate adTemplate) {
        return com.kwad.sdk.core.response.b.d.s(adTemplate);
    }

    public static boolean t(AdTemplate adTemplate) {
        if (com.kwad.sdk.core.response.b.a.cA(com.kwad.sdk.core.response.b.d.cg(adTemplate))) {
            return false;
        }
        return r(adTemplate) || s(adTemplate);
    }

    public final void A(boolean z) {
        this.pi = z;
        if (z) {
            fM();
        } else {
            fL();
        }
    }

    public final void B(boolean z) {
        this.pI = z;
    }

    public final void C(boolean z) {
        this.pn = z;
    }

    public final void D(boolean z) {
        this.pw = true;
    }

    public final void E(boolean z) {
        this.pH = true;
    }

    public final void F(boolean z) {
        this.ph = z;
    }

    public final void G(String str) {
        int iA = -1;
        try {
            if (com.kwad.sdk.core.config.d.xN()) {
                iA = com.kwad.components.ad.reward.i.a.a(getActivity());
            }
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
        }
        com.kwad.components.ad.reward.i.b.a(this.mContext, this.mAdTemplate, str, iA, this.mReportExtData);
    }

    public final void G(final boolean z) {
        if (z != this.mRewardVerifyCalled) {
            a(this.pe, new com.kwad.sdk.g.a<r>() {
                @Override
                private void accept(r rVar) {
                    rVar.ac(z);
                }
            });
        }
        this.mRewardVerifyCalled = z;
    }

    public final void K(int i) {
        this.pD = i;
    }

    public final void a(int i, Context context, int i2, int i3) {
        b(i, context, i2, i3);
    }

    public final void a(int i, Context context, int i2, int i3, long j) {
        a(1, context, 40, 1, j, false, null);
    }

    public final void a(int i, Context context, final int i2, int i3, long j, boolean z, final com.kwad.sdk.core.report.j jVar) {
        com.kwad.components.core.e.d.a.a(new a.a(context).P(this.mAdTemplate).b(this.mApkDownloadHelper).am(false).ao(i3).s(j).an(i2).am(i).al(fP()).a(new Callable<String>() {
            @Override
            private String call() {
                return j.this.oV.jS().getCurrentShowShopItemInfo().itemId;
            }
        }).a(new a.b() {
            @Override
            public final void onAdClicked() {
                j.this.a(i2, jVar);
            }
        }));
    }

    public final void a(long j, long j2, int i) {
        Iterator<com.kwad.components.ad.reward.e.e> it = this.pf.iterator();
        while (it.hasNext()) {
            it.next().bY();
        }
    }

    public final void a(DialogInterface.OnDismissListener onDismissListener) {
        this.px.add(onDismissListener);
    }

    public final void a(RewardRenderResult rewardRenderResult) {
        this.pN = rewardRenderResult;
    }

    public final void a(com.kwad.components.ad.reward.e.m mVar) {
        this.py = mVar;
    }

    public final void a(a aVar) {
        this.pO.add(aVar);
    }

    public final void a(b bVar) {
        this.pP.add(bVar);
    }

    public final void a(com.kwad.components.ad.reward.j.a aVar) {
        this.pd.add(aVar);
    }

    public final void a(r rVar) {
        this.pe.add(rVar);
    }

    public final void a(a.a aVar) {
        List<a.a> list = this.pQ;
        if (list != null) {
            list.add(aVar);
        }
    }

    public final void a(final com.kwad.components.core.i.c cVar) {
        final com.kwad.components.core.i.d dVarC = KSRewardVideoActivityProxy.a.C(this.mAdTemplate.getUniqueId());
        bj.runOnUiThread(new Runnable() {
            @Override
            public final void run() {
                com.kwad.components.core.i.d dVar = dVarC;
                if (dVar != null) {
                    dVar.c(cVar);
                }
            }
        });
    }

    public final void a(com.kwad.components.core.webview.b.e.a aVar) {
        this.pg = aVar;
    }

    public final void b(int i, Context context, int i2, int i3) {
        a(i, context, i2, i3, 0L, false, null);
    }

    public final void b(DialogInterface.OnDismissListener onDismissListener) {
        this.px.remove(onDismissListener);
    }

    public final void b(com.kwad.components.ad.reward.c.b bVar) {
        com.kwad.components.ad.reward.c.a.gW().a(this.mAdTemplate, bVar);
    }

    public final void b(com.kwad.components.ad.reward.e.f fVar) {
        this.pc.offer(fVar);
    }

    public final void b(a aVar) {
        this.pO.remove(aVar);
    }

    public final void b(b bVar) {
        this.pP.remove(bVar);
    }

    public final void b(com.kwad.components.ad.reward.j.a aVar) {
        this.pd.remove(aVar);
    }

    public final void b(r rVar) {
        this.pe.remove(rVar);
    }

    public final void b(a.a aVar) {
        List<a.a> list = this.pQ;
        if (list != null) {
            list.remove(aVar);
        }
    }

    public final void b(final com.kwad.components.core.i.c cVar) {
        final com.kwad.components.core.i.d dVarC = KSRewardVideoActivityProxy.a.C(this.mAdTemplate.getUniqueId());
        bj.runOnUiThread(new Runnable() {
            @Override
            public final void run() {
                com.kwad.components.core.i.d dVar = dVarC;
                if (dVar != null) {
                    dVar.d(cVar);
                }
            }
        });
    }

    public final void c(com.kwad.components.ad.reward.e.f fVar) {
        this.pc.remove(fVar);
    }

    public final void c(final boolean z, final boolean z2) {
        if (this.oV.jR()) {
            bj.runOnUiThreadDelay(new Runnable() {
                @Override
                public final void run() {
                    j.this.oV.jS().setAudioEnabled(z, z2);
                }
            }, 500L);
        }
    }

    public final void d(DialogInterface dialogInterface) {
        Iterator<DialogInterface.OnDismissListener> it = this.px.iterator();
        while (it.hasNext()) {
            it.next().onDismiss(dialogInterface);
        }
    }

    public final void d(PlayableSource playableSource) {
        this.pv = playableSource;
    }

    public final boolean fO() {
        return this.pi;
    }

    public final String fP() {
        if (this.mAdTemplate.tkLiveShopItemInfo == null) {
            return null;
        }
        return this.mAdTemplate.tkLiveShopItemInfo.itemId;
    }

    public final void fR() {
        if (isMainThread()) {
            fS();
        } else {
            this.mHandler.post(new Runnable() {
                @Override
                public final void run() {
                    j.this.fS();
                }
            });
        }
    }

    public final boolean fT() {
        return this.pI;
    }

    public final void fU() {
        com.kwad.components.core.webview.b.e.a aVar = this.pg;
        if (aVar == null) {
            return;
        }
        aVar.ck();
    }

    public final boolean fV() {
        return this.pn;
    }

    public final PlayableSource fW() {
        return this.pv;
    }

    public final boolean fX() {
        return this.pw;
    }

    public final List<a.a> fY() {
        return this.pQ;
    }

    public final RewardRenderResult fZ() {
        return this.pN;
    }

    public final boolean ga() {
        return this.pH;
    }

    public final boolean gb() {
        return this.ph;
    }

    public final boolean gc() {
        return this.mRewardVerifyCalled;
    }

    public final void gd() {
        long j = this.pF;
        com.kwad.sdk.core.report.a.d(this.mAdTemplate, com.kwad.sdk.core.response.b.a.W(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate)), j != 0 ? (int) (j / 1000) : 0);
    }

    @Override
    public final void release() {
        fQ();
        this.oV.release();
    }
}
