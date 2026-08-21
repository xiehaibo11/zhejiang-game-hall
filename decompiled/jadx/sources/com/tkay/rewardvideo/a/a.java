package com.tkay.rewardvideo.a;

import android.app.Activity;
import android.content.Context;
import com.tkay.core.api.AdError;
import com.tkay.core.api.ErrorCode;
import com.tkay.core.api.IExHandler;
import com.tkay.core.api.TYAdStatusInfo;
import com.tkay.core.api.TYEventInterface;
import com.tkay.core.common.b.i;
import com.tkay.core.common.b.m;
import com.tkay.core.common.b.n;
import com.tkay.core.common.h;
import com.tkay.core.common.j;
import com.tkay.core.common.l.g;
import com.tkay.core.common.l.s;
import com.tkay.core.common.v;
import com.tkay.rewardvideo.api.TYRewardVideoAutoLoadListener;
import com.tkay.rewardvideo.api.TYRewardVideoListener;
import com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public class a extends com.tkay.core.common.f<f> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f7774a = a.class.getSimpleName();
    Runnable m;

    @Override // com.tkay.core.common.f
    protected final String a() {
        return "1";
    }

    @Override // com.tkay.core.common.f
    public final /* synthetic */ h a(j jVar) {
        f fVar = (f) jVar;
        b bVar = new b(fVar.a());
        bVar.a(fVar.d);
        return bVar;
    }

    public static a a(Context context, String str) {
        com.tkay.core.common.f fVarA = v.a().a(str, "1");
        if (fVarA == null || !(fVarA instanceof a)) {
            fVarA = new a(context, str);
            v.a().a(str, "1", fVarA);
        }
        return (a) fVarA;
    }

    private a(Context context, String str) {
        super(context, str);
        this.m = new Runnable() { // from class: com.tkay.rewardvideo.a.a.2
            @Override // java.lang.Runnable
            public final void run() {
                if (a.this.j()) {
                    a.this.a(m.a().D(), 4, (com.tkay.core.common.b.a) null, (com.tkay.core.common.b.b) null, (Map<String, Object>) null);
                }
            }
        };
    }

    public final synchronized void a(final Activity activity, final String str, final TYRewardVideoListener tYRewardVideoListener, final TYEventInterface tYEventInterface, final Map<String, Object> map) {
        final com.tkay.core.common.f.a aVarA = a((Context) activity, false, true, map);
        if (aVarA != null && (aVarA.e() instanceof CustomRewardVideoAdapter)) {
            a(aVarA);
            f();
            aVarA.a(aVarA.d() + 1);
            com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.rewardvideo.a.a.1
                @Override // java.lang.Runnable
                public final void run() {
                    com.tkay.core.common.f.d trackingInfo = aVarA.e().getTrackingInfo();
                    long jCurrentTimeMillis = System.currentTimeMillis();
                    if (trackingInfo != null) {
                        trackingInfo.v = a.this.g;
                        trackingInfo.C = str;
                        trackingInfo.h(g.a(trackingInfo.X(), trackingInfo.x(), jCurrentTimeMillis));
                        s.a(a.this.b, trackingInfo);
                        s.a((Map<String, Object>) map, trackingInfo);
                    }
                    com.tkay.core.common.a.a().a(a.this.b, aVarA);
                    com.tkay.core.common.k.a.a(a.this.b).a(13, trackingInfo, aVarA.e().getUnitGroupInfo(), jCurrentTimeMillis);
                    final CustomRewardVideoAdapter customRewardVideoAdapter = (CustomRewardVideoAdapter) aVarA.e();
                    Activity activity2 = activity;
                    if (activity2 != null) {
                        customRewardVideoAdapter.refreshActivityContext(activity2);
                    }
                    m.a().a(new Runnable() { // from class: com.tkay.rewardvideo.a.a.1.1
                        @Override // java.lang.Runnable
                        public final void run() {
                            customRewardVideoAdapter.setScenario(str);
                            IExHandler iExHandlerB = m.a().b();
                            if (iExHandlerB != null) {
                                CustomRewardVideoAdapter customRewardVideoAdapter2 = customRewardVideoAdapter;
                                customRewardVideoAdapter2.setAdDownloadListener(iExHandlerB.createDownloadListener(customRewardVideoAdapter2, null, tYEventInterface));
                            }
                            customRewardVideoAdapter.internalShow(activity, new e(customRewardVideoAdapter, m.a().A(), tYRewardVideoListener));
                        }
                    });
                }
            });
            return;
        }
        if (a((TYAdStatusInfo) null)) {
            a(m.a().D(), 7, (com.tkay.core.common.b.a) null, (com.tkay.core.common.b.b) null, map);
        }
        AdError errorCode = ErrorCode.getErrorCode(ErrorCode.noADError, "", "No Cache.");
        if (tYRewardVideoListener != null) {
            tYRewardVideoListener.onRewardedVideoAdPlayFailed(errorCode, i.a((n) null));
        }
    }

    public final void a(Context context, int i, com.tkay.core.common.b.a aVar, com.tkay.core.common.b.b bVar, Map<String, Object> map) {
        f fVar = new f();
        fVar.a(context);
        fVar.d = i;
        fVar.e = bVar;
        if (map != null) {
            try {
                fVar.g = new HashMap(map);
            } catch (Throwable unused) {
            }
        }
        super.a(this.b, "1", this.c, fVar, aVar);
    }

    private static h a(f fVar) {
        b bVar = new b(fVar.a());
        bVar.a(fVar.d);
        return bVar;
    }

    @Override // com.tkay.core.common.f
    public final TYAdStatusInfo a(Context context, Map<String, Object> map) {
        TYAdStatusInfo tYAdStatusInfoA = super.a(context, map);
        if (!c() && a(tYAdStatusInfoA)) {
            a(context, 5, (com.tkay.core.common.b.a) null, (com.tkay.core.common.b.b) null, (Map<String, Object>) null);
        }
        return tYAdStatusInfoA;
    }

    @Override // com.tkay.core.common.f
    protected final boolean j() {
        return v.a().e(this.c);
    }

    private void m() {
        m.a().a(this.m, ((long) Math.pow(2.0d, this.h)) * 1000);
    }

    @Override // com.tkay.core.common.f
    protected final void k() {
        m.a().c(this.m);
    }

    @Override // com.tkay.core.common.f
    protected final void b(AdError adError) {
        super.b(adError);
        if (j()) {
            m.a().a(this.m, ((long) Math.pow(2.0d, this.h)) * 1000);
            TYRewardVideoAutoLoadListener tYRewardVideoAutoLoadListener = d.a().b;
            if (tYRewardVideoAutoLoadListener != null) {
                tYRewardVideoAutoLoadListener.onRewardVideoAutoLoadFail(this.c, adError);
            }
        }
    }

    @Override // com.tkay.core.common.f
    protected final void l() {
        TYRewardVideoAutoLoadListener tYRewardVideoAutoLoadListener;
        super.l();
        if (!j() || (tYRewardVideoAutoLoadListener = d.a().b) == null) {
            return;
        }
        tYRewardVideoAutoLoadListener.onRewardVideoAutoLoaded(this.c);
    }
}
