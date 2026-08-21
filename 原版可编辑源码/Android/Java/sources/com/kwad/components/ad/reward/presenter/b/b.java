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

public final class b extends com.kwad.components.ad.reward.presenter.a {
    private IAdLiveEndRequest fH;
    private long gz;
    private p pt;
    private View tM;
    private final m<com.kwad.components.core.liveEnd.a, AdLiveEndResultData> mNetworking = new m<com.kwad.components.core.liveEnd.a, AdLiveEndResultData>() {
        private static AdLiveEndResultData T(String str) {
            AdLiveEndResultData adLiveEndResultData = new AdLiveEndResultData();
            adLiveEndResultData.parseJson(new JSONObject(str));
            return adLiveEndResultData;
        }

        @Override
        private com.kwad.components.core.liveEnd.a createRequest() {
            return new com.kwad.components.core.liveEnd.a(b.this.fH);
        }

        @Override
        public final boolean isPostByJson() {
            return false;
        }

        @Override
        public final BaseResultData parseData(String str) {
            return T(str);
        }
    };
    private final l ss = new l() {
        @Override
        public final void onLivePlayEnd() {
            super.onLivePlayEnd();
            b.this.hV();
        }

        @Override
        public final void onLivePlayResume() {
            super.onLivePlayResume();
            b.this.hW();
        }

        @Override
        public final void onMediaPlayProgress(long j, long j2) {
            super.onMediaPlayProgress(j, j2);
            b.this.gz = j2;
        }

        @Override
        public final void onMediaPlayStart() {
            super.onMediaPlayStart();
            b.this.hW();
        }
    };

    private void hF() {
        j jVar = new j();
        z.a aVar = new z.a();
        jVar.cm(24);
        jVar.a(aVar);
        com.kwad.components.core.t.b.qj().a(this.qx.mAdTemplate, null, jVar);
    }

    private void hV() {
        if (this.fH == null) {
            return;
        }
        this.mNetworking.request(new com.kwad.sdk.core.network.p<com.kwad.components.core.liveEnd.a, AdLiveEndResultData>() {
            @Override
            private void onStartRequest(com.kwad.components.core.liveEnd.a aVar) {
                super.onStartRequest(aVar);
            }

            @Override
            private void onError(com.kwad.components.core.liveEnd.a aVar, int i, String str) {
                super.onError(aVar, i, str);
            }

            @Override
            private void onSuccess(com.kwad.components.core.liveEnd.a aVar, final AdLiveEndResultData adLiveEndResultData) {
                super.onSuccess(aVar, adLiveEndResultData);
                if (adLiveEndResultData.mQLivePushEndInfo == null) {
                    return;
                }
                b.this.qx.mRootContainer.post(new Runnable() {
                    @Override
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

    private void hW() {
        View view = this.tM;
        if (view != null) {
            view.setVisibility(8);
        }
    }

    @Override
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

    @Override
    public final void onUnbind() {
        super.onUnbind();
        this.mNetworking.cancel();
        if (this.qx.oV.jR()) {
            this.qx.oV.b(this.ss);
        }
    }
}
