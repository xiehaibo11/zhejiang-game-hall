package com.kwad.components.ad.interstitial.d;

import android.content.Context;
import android.graphics.Bitmap;
import android.os.Handler;
import android.os.Looper;
import android.support.v4.graphics.drawable.RoundedBitmapDrawable;
import android.support.v4.graphics.drawable.RoundedBitmapDrawableFactory;
import android.view.View;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.video.a;
import com.kwad.sdk.R;
import com.kwad.sdk.api.KsAdVideoPlayConfig;
import com.kwad.sdk.api.KsInterstitialAd;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.imageloader.core.assist.FailReason;
import com.kwad.sdk.core.imageloader.core.decode.DecodedResult;
import com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener;
import com.kwad.sdk.core.imageloader.utils.BlurUtils;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.ac;
import com.kwad.sdk.utils.ai;
import com.kwad.sdk.utils.bc;
import com.kwad.sdk.widget.KSFrameLayout;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;
import org.json.JSONObject;

public final class c extends com.kwad.sdk.mvp.a {
    public KsAdVideoPlayConfig dJ;
    public com.kwad.sdk.core.video.videoview.a ex;
    public com.kwad.components.core.webview.b.e.e gt;
    public com.kwad.components.ad.interstitial.d hG;
    public com.kwad.components.ad.interstitial.e.b hx;
    public KsInterstitialAd.AdInteractionListener hz;
    public com.kwad.components.ad.interstitial.f.f jg;
    public boolean ji;
    public boolean jj;
    public boolean jk;
    public a jl;
    public KSFrameLayout jo;
    public d jp;
    public boolean jt;
    public com.kwad.components.core.e.d.c mApkDownloadHelper;
    public List<a> jm = new CopyOnWriteArrayList();
    public List<h> jn = new CopyOnWriteArrayList();
    private Handler mHandler = new Handler(Looper.getMainLooper());
    public volatile boolean js = false;
    public int ju = -1;
    public List<a.c> jr = new CopyOnWriteArrayList();
    private List<e> jh = new CopyOnWriteArrayList();
    public List<c> jq = new ArrayList();

    final class 4 implements ImageLoadingListener {
        final View eX;
        final Context jz;

        4(Context context, View view) {
            this.jz = context;
            this.eX = view;
        }

        @Override
        public final boolean onDecode(String str, InputStream inputStream, DecodedResult decodedResult) {
            return false;
        }

        @Override
        public final void onLoadingCancelled(String str, View view) {
        }

        @Override
        public final void onLoadingComplete(String str, View view, final DecodedResult decodedResult) {
            com.kwad.sdk.utils.g.execute(new Runnable() {
                @Override
                public final void run() {
                    Bitmap bitmap = decodedResult.mBitmap;
                    com.kwad.sdk.core.e.c.d("InterstitialCallerContext", "onLoadingComplete before blur");
                    Bitmap bitmapStackBlur = BlurUtils.stackBlur(bitmap, 50, false);
                    com.kwad.sdk.core.e.c.d("InterstitialCallerContext", "onLoadingComplete after blur");
                    float dimension = 4.this.jz.getResources().getDimension(R.dimen.ksad_interstitial_icon_radius);
                    final RoundedBitmapDrawable roundedBitmapDrawableCreate = RoundedBitmapDrawableFactory.create(4.this.jz.getResources(), bitmapStackBlur);
                    roundedBitmapDrawableCreate.setCornerRadius(dimension);
                    4.this.eX.post(new Runnable() {
                        @Override
                        public final void run() {
                            4.this.eX.setBackground(roundedBitmapDrawableCreate);
                        }
                    });
                }
            });
        }

        @Override
        public final void onLoadingFailed(String str, View view, FailReason failReason) {
        }

        @Override
        public final void onLoadingStarted(String str, View view) {
        }
    }

    public interface a {
        void ck();
    }

    public static class b {
        private final Context context;
        private int jE;
        private boolean jF;
        private int jG;
        private boolean jH;
        private ac.a jI;
        public double jJ;
        public boolean jK;

        public b(Context context) {
            this.context = context;
        }

        public final b a(ac.a aVar) {
            this.jI = aVar;
            return this;
        }

        public final b c(double d) {
            this.jJ = d;
            return this;
        }

        public final int cV() {
            return this.jE;
        }

        public final boolean cW() {
            return this.jF;
        }

        public final boolean cX() {
            return this.jH;
        }

        public final int cY() {
            return this.jG;
        }

        public final double cZ() {
            return this.jJ;
        }

        public final Context getContext() {
            return this.context;
        }

        public final ac.a getTouchCoords() {
            return this.jI;
        }

        public final b k(boolean z) {
            this.jF = z;
            return this;
        }

        public final b l(boolean z) {
            this.jH = true;
            return this;
        }

        public final b m(boolean z) {
            this.jK = true;
            return this;
        }

        public final b y(int i) {
            this.jE = i;
            return this;
        }

        public final b z(int i) {
            this.jG = i;
            return this;
        }
    }

    public interface c {
        void da();
    }

    public interface d {
        void db();
    }

    interface e {
        void onError();
    }

    private static int a(long j, AdTemplate adTemplate) {
        if (j == -1) {
            return -1;
        }
        float fH = com.kwad.sdk.core.response.b.a.H(com.kwad.sdk.core.response.b.d.cg(adTemplate)) / 1000.0f;
        if (fH != 0.0f) {
            return Math.round((j / fH) * 100.0f);
        }
        return -1;
    }

    private static long a(com.kwad.sdk.core.video.videoview.a aVar) {
        if (aVar == null) {
            return -1L;
        }
        return aVar.getCurrentPosition();
    }

    private void a(int i, int i2, Context context) {
        KsInterstitialAd.AdInteractionListener adInteractionListener;
        com.kwad.sdk.core.report.a.a(this.mAdTemplate, new com.kwad.sdk.core.report.j().ck(i).cg(i2).cr(ai.IN() ? 2 : 1).Ca(), (JSONObject) null);
        if (!this.jk && (adInteractionListener = this.hz) != null) {
            adInteractionListener.onAdClicked();
        }
        this.ji = true;
        if (this.jk) {
            return;
        }
        ck();
    }

    public static boolean a(Context context, AdInfo adInfo) {
        return com.kwad.sdk.core.response.b.a.aO(adInfo) && !ai.IN();
    }

    private static int b(com.kwad.sdk.core.video.videoview.a aVar) {
        if (aVar == null) {
            return -1;
        }
        long duration = aVar.getDuration();
        long currentPosition = aVar.getCurrentPosition();
        if (duration != 0) {
            return Math.round((currentPosition / duration) * 100.0f);
        }
        return -1;
    }

    public final boolean M(Context context) {
        if (this.mAdTemplate != null && context != null) {
            return com.kwad.sdk.core.response.b.a.bv(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate));
        }
        com.kwad.sdk.core.e.c.w("InterstitialCallerContext", "isPlayable illegal params: " + this.mAdTemplate + ", context: " + context);
        return false;
    }

    public final void a(final Context context, final int i, int i2, int i3) {
        final int i4 = 9;
        com.kwad.components.core.e.d.a.a(new a.a(context).P(this.mAdTemplate).b(this.mApkDownloadHelper).am(false).ao(2).am(6).an(i).a(new a.b() {
            @Override
            public final void onAdClicked() {
                c.this.a(i4, i, context);
            }
        }));
    }

    public final void a(Context context, AdInfo adInfo, AdTemplate adTemplate, View view) {
        if (view == null) {
            return;
        }
        String url = com.kwad.sdk.core.response.b.a.bi(adInfo).getUrl();
        if (bc.isNullString(url)) {
            return;
        }
        KSImageLoader.loadImage(url, adTemplate, KSImageLoader.IMGOPTION_NORMAL, new 4(context, view));
    }

    public final void a(a aVar) {
        if (aVar == null) {
            return;
        }
        this.jm.add(aVar);
    }

    public final void a(final b bVar) {
        boolean z = bVar.cV() == 1;
        if ((com.kwad.components.ad.interstitial.a.b.cD() || z || bVar.cX() || bVar.jK) && com.kwad.components.core.e.d.a.a(new a.a(bVar.getContext()).P(this.mAdTemplate).b(this.mApkDownloadHelper).am(z).am(1).an(bVar.jG).ao(bVar.cV()).a(new a.b() {
            @Override
            public final void onAdClicked() {
                c.this.b(bVar);
            }
        })) == 0 && this.hG != null && com.kwad.components.ad.interstitial.a.b.cG()) {
            a(false, -1, this.ex);
            this.mHandler.postDelayed(new Runnable() {
                @Override
                public final void run() {
                    c.this.hG.dismiss();
                }
            }, 500L);
        }
    }

    public final void a(e eVar) {
        this.jh.add(eVar);
    }

    public final void a(h hVar) {
        if (hVar == null) {
            return;
        }
        this.jn.add(hVar);
    }

    public final void a(a.c cVar) {
        if (this.jr.contains(cVar)) {
            return;
        }
        this.jr.add(cVar);
    }

    public final void a(boolean z, int i, com.kwad.sdk.core.video.videoview.a aVar) {
        long jA;
        int iA;
        if (aVar != null) {
            jA = a(aVar);
            iA = b(aVar);
        } else {
            jA = i;
            iA = a(jA, this.mAdTemplate);
        }
        com.kwad.sdk.core.report.a.a(this.mAdTemplate, z ? 14 : 1, jA, iA, this.hG.getTimerHelper().getTime(), null);
    }

    public final void b(Context context, AdTemplate adTemplate) {
        if (this.js) {
            return;
        }
        com.kwad.components.core.page.a.launch(context, adTemplate);
        this.js = true;
    }

    public final void b(a aVar) {
        if (aVar == null) {
            return;
        }
        this.jm.remove(aVar);
    }

    public final void b(b bVar) {
        KsInterstitialAd.AdInteractionListener adInteractionListener;
        com.kwad.sdk.core.report.j jVar = new com.kwad.sdk.core.report.j();
        jVar.c(bVar.getTouchCoords());
        if (!bVar.cW() && !bVar.jH) {
            bVar.z(153);
        }
        com.kwad.sdk.core.report.a.a(this.mAdTemplate, new com.kwad.sdk.core.report.j().cg(bVar.cY()).c(bVar.getTouchCoords()).cr(ai.IN() ? 2 : 1).i(bVar.cZ()), (JSONObject) null);
        com.kwad.sdk.core.video.videoview.a aVar = this.ex;
        if (aVar != null) {
            long jA = a(aVar);
            int iB = b(this.ex);
            jVar.af(jA);
            jVar.cl(iB);
        }
        if (!this.jk && (adInteractionListener = this.hz) != null) {
            adInteractionListener.onAdClicked();
        }
        this.ji = true;
        if (this.jk) {
            return;
        }
        ck();
    }

    public final void b(h hVar) {
        if (hVar == null) {
            return;
        }
        this.jn.remove(hVar);
    }

    public final void b(a.c cVar) {
        this.jr.remove(cVar);
    }

    public final void cP() {
        List<e> list = this.jh;
        if (list == null || list.size() <= 0) {
            return;
        }
        for (e eVar : this.jh) {
            if (eVar != null) {
                eVar.onError();
            }
        }
    }

    public final void cQ() {
        d dVar = this.jp;
        if (dVar != null) {
            dVar.db();
        }
    }

    public final void cR() {
        Iterator<c> it = this.jq.iterator();
        while (it.hasNext()) {
            it.next().da();
        }
    }

    public final void cS() {
        Iterator<h> it = this.jn.iterator();
        while (it.hasNext()) {
            it.next().du();
        }
    }

    public final void cT() {
        Iterator<h> it = this.jn.iterator();
        while (it.hasNext()) {
            it.next().dv();
        }
    }

    public final boolean cU() {
        com.kwad.components.ad.interstitial.f.f fVar = this.jg;
        boolean z = fVar == null || fVar.getParent() == null;
        com.kwad.sdk.core.e.c.d("InterstitialCallerContext", "isH5Interstitial :" + z);
        return z;
    }

    public final void ck() {
        Iterator<a> it = this.jm.iterator();
        while (it.hasNext()) {
            it.next().ck();
        }
        a aVar = this.jl;
        if (aVar != null) {
            aVar.ck();
        }
    }

    @Override
    public final void release() {
        this.mHandler.removeCallbacksAndMessages(null);
        this.jr.clear();
        this.jh.clear();
        this.jq.clear();
        this.jn.clear();
        com.kwad.components.ad.interstitial.e.b bVar = this.hx;
        if (bVar != null) {
            bVar.sz();
        }
    }
}
