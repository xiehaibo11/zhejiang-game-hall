package com.kwad.components.ad.reward.presenter.b;

import android.text.TextUtils;
import android.view.View;
import com.kwad.components.ad.reward.m.p;
import com.kwad.components.ad.reward.m.r;
import com.kwad.components.ad.reward.model.AdLiveEndResultData;
import com.kwad.components.core.video.l;
import com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest;
import com.kwad.sdk.R;
import com.kwad.sdk.core.network.BaseResultData;
import com.kwad.sdk.core.network.m;
import com.kwad.sdk.core.report.j;
import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.response.b.d;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class b extends com.kwad.components.ad.reward.presenter.a {
    private IAdLiveEndRequest fH;
    private long gz;
    private p pt;
    private View tM;
    private final m<com.kwad.components.core.liveEnd.a, AdLiveEndResultData> mNetworking = new m<com.kwad.components.core.liveEnd.a, AdLiveEndResultData>() { // from class: com.kwad.components.ad.reward.presenter.b.b.1
        private static AdLiveEndResultData T(String str) {
            AdLiveEndResultData adLiveEndResultData = new AdLiveEndResultData();
            adLiveEndResultData.parseJson(new JSONObject(str));
            return adLiveEndResultData;
        }

        /* JADX INFO: Access modifiers changed from: private */
        @Override // com.kwad.sdk.core.network.a
        /* JADX INFO: renamed from: by, reason: merged with bridge method [inline-methods] */
        public com.kwad.components.core.liveEnd.a createRequest() {
            return new com.kwad.components.core.liveEnd.a(b.this.fH);
        }

        @Override // com.kwad.sdk.core.network.m
        public final boolean isPostByJson() {
            return false;
        }

        @Override // com.kwad.sdk.core.network.m
        public final /* synthetic */ BaseResultData parseData(String str) {
            return T(str);
        }
    };
    private final l ss = new l() { // from class: com.kwad.components.ad.reward.presenter.b.b.2
        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.g
        public final void onLivePlayEnd() {
            super.onLivePlayEnd();
            b.this.hV();
        }

        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.g
        public final void onLivePlayResume() {
            super.onLivePlayResume();
            b.this.hW();
        }

        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayProgress(long j, long j2) {
            super.onMediaPlayProgress(j, j2);
            b.this.gz = j2;
        }

        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayStart() {
            super.onMediaPlayStart();
            b.this.hW();
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public void hF() {
        j jVar = new j();
        z.a aVar = new z.a();
        jVar.cm(24);
        jVar.a(aVar);
        com.kwad.components.core.t.b.qj().a(this.qx.mAdTemplate, null, jVar);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void hV() {
        if (this.fH == null) {
            return;
        }
        this.mNetworking.request(new com.kwad.sdk.core.network.p<com.kwad.components.core.liveEnd.a, AdLiveEndResultData>() { // from class: com.kwad.components.ad.reward.presenter.b.b.3
            /* JADX INFO: Access modifiers changed from: private */
            @Override // com.kwad.sdk.core.network.p, com.kwad.sdk.core.network.h
            /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
            public void onStartRequest(com.kwad.components.core.liveEnd.a aVar) {
                super.onStartRequest(aVar);
            }

            /* JADX INFO: Access modifiers changed from: private */
            @Override // com.kwad.sdk.core.network.p, com.kwad.sdk.core.network.h
            /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
            public void onError(com.kwad.components.core.liveEnd.a aVar, int i, String str) {
                super.onError(aVar, i, str);
            }

            /* JADX INFO: Access modifiers changed from: private */
            @Override // com.kwad.sdk.core.network.p, com.kwad.sdk.core.network.h
            /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
            public void onSuccess(com.kwad.components.core.liveEnd.a aVar, final AdLiveEndResultData adLiveEndResultData) {
                super.onSuccess(aVar, adLiveEndResultData);
                if (adLiveEndResultData.mQLivePushEndInfo == null) {
                    return;
                }
                b.this.qx.mRootContainer.post(new Runnable() { // from class: com.kwad.components.ad.reward.presenter.b.b.3.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        if (b.this.pt == null) {
                            b.this.pt = new p(b.this.qx);
                        }
                        b.this.pt.h(b.this.qx.mRootContainer);
                        b.this.pt.b(r.C(b.this.qx.mAdTemplate));
                        b.this.pt.a(b.this.qx, adLiveEndResultData.mQLivePushEndInfo, b.this.gz);
                        b.this.qx.pt = b.this.pt;
                        b.this.tM = b.this.findViewById(R.id.ksad_live_end_page_layout_root);
                        b.this.tM.setVisibility(0);
                        b.this.hF();
                    }
                });
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void hW() {
        View view = this.tM;
        if (view != null) {
            view.setVisibility(8);
        }
    }

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        com.kwad.components.core.offline.api.a.a aVar;
        super.ah();
        if (this.qx.oV.jR()) {
            this.qx.oV.a(this.ss);
            String strAY = com.kwad.sdk.core.response.b.a.aY(d.cg(this.qx.mAdTemplate));
            if (TextUtils.isEmpty(strAY) || (aVar = (com.kwad.components.core.offline.api.a.a) com.kwad.sdk.components.c.f(com.kwad.components.core.offline.api.a.a.class)) == null) {
                return;
            }
            this.fH = aVar.getAdLiveEndRequest(strAY);
        }
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        this.mNetworking.cancel();
        if (this.qx.oV.jR()) {
            this.qx.oV.b(this.ss);
        }
    }
}
