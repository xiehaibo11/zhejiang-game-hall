package com.kwad.components.ad.feed;

import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import com.kwad.components.ad.widget.tailframe.appbar.TailFrameBarAppPortraitVertical;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.page.widget.TextProgressBar;
import com.kwad.components.core.widget.b;
import com.kwad.sdk.R;
import com.kwad.sdk.api.core.KsAdSdkDynamicImpl;
import com.kwad.sdk.api.proxy.app.FeedDownloadActivity;
import com.kwad.sdk.core.report.j;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.view.KsAdContainer;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import org.json.JSONObject;

@KsAdSdkDynamicImpl(FeedDownloadActivity.class)
public class FeedDownloadActivityProxy extends com.kwad.components.core.n.c implements View.OnClickListener {
    private static final boolean DEBUG = false;
    public static final String KEY_AD_DATA = "key_template_json";
    private static final String TAG = "FeedDownloadActivity";
    private static b.a sInnerAdInteractionListener;
    private KsAdContainer mAdContainer;
    private AdInfo mAdInfo;
    private AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private TailFrameBarAppPortraitVertical mAppTailFrameView;
    private TextProgressBar mProgressBarTv;

    private void bindDownloadListener() {
        this.mApkDownloadHelper = new com.kwad.components.core.e.d.c(this.mAdTemplate, null, new com.kwad.sdk.core.download.a.a() {
            @Override
            public final void onDownloadFailed() {
                FeedDownloadActivityProxy.this.mAppTailFrameView.z(FeedDownloadActivityProxy.this.mAdInfo);
                FeedDownloadActivityProxy.this.mProgressBarTv.e(com.kwad.sdk.core.response.b.a.aw(FeedDownloadActivityProxy.this.mAdInfo), FeedDownloadActivityProxy.this.mProgressBarTv.getMax());
            }

            @Override
            public final void onDownloadFinished() {
                FeedDownloadActivityProxy.this.mAppTailFrameView.z(FeedDownloadActivityProxy.this.mAdInfo);
                FeedDownloadActivityProxy.this.mProgressBarTv.e(com.kwad.sdk.core.response.b.a.aM(FeedDownloadActivityProxy.this.mAdTemplate), FeedDownloadActivityProxy.this.mProgressBarTv.getMax());
            }

            @Override
            public final void onIdle() {
                FeedDownloadActivityProxy.this.mAppTailFrameView.z(FeedDownloadActivityProxy.this.mAdInfo);
                FeedDownloadActivityProxy.this.mProgressBarTv.e(com.kwad.sdk.core.response.b.a.aw(FeedDownloadActivityProxy.this.mAdInfo), FeedDownloadActivityProxy.this.mProgressBarTv.getMax());
            }

            @Override
            public final void onInstalled() {
                FeedDownloadActivityProxy.this.mAppTailFrameView.z(FeedDownloadActivityProxy.this.mAdInfo);
                FeedDownloadActivityProxy.this.mProgressBarTv.e(com.kwad.sdk.core.response.b.a.U(FeedDownloadActivityProxy.this.mAdInfo), FeedDownloadActivityProxy.this.mProgressBarTv.getMax());
            }

            @Override
            public final void onPaused(int i) {
                FeedDownloadActivityProxy.this.mAppTailFrameView.z(FeedDownloadActivityProxy.this.mAdInfo);
                FeedDownloadActivityProxy.this.mProgressBarTv.e(com.kwad.sdk.core.response.b.a.cw(i), i);
            }

            @Override
            public final void onProgressUpdate(int i) {
                FeedDownloadActivityProxy.this.mAppTailFrameView.z(FeedDownloadActivityProxy.this.mAdInfo);
                FeedDownloadActivityProxy.this.mProgressBarTv.e(com.kwad.sdk.core.response.b.a.cv(i), i);
            }
        });
    }

    public static void launch(Context context, AdTemplate adTemplate, b.a aVar) {
        com.kwad.sdk.service.b.a(FeedDownloadActivity.class, FeedDownloadActivityProxy.class);
        Intent intent = new Intent(context, (Class<?>) FeedDownloadActivity.class);
        intent.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        intent.putExtra("key_template_json", adTemplate.toJson().toString());
        sInnerAdInteractionListener = aVar;
        context.startActivity(intent);
    }

    private void notifyAdClick() {
        com.kwad.sdk.core.report.a.a(this.mAdTemplate, new j().c(this.mAdContainer.getTouchCoords()), (JSONObject) null);
        b.a aVar = sInnerAdInteractionListener;
        if (aVar != null) {
            aVar.onAdClicked();
        }
    }

    public static void register() {
        com.kwad.sdk.service.b.a(FeedDownloadActivity.class, FeedDownloadActivityProxy.class);
    }

    @Override
    public boolean checkIntentData(Intent intent) {
        try {
            String stringExtra = getIntent().getStringExtra("key_template_json");
            AdTemplate adTemplate = new AdTemplate();
            adTemplate.parseJson(new JSONObject(stringExtra));
            this.mAdTemplate = adTemplate;
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTrace(th);
        }
        return this.mAdTemplate != null;
    }

    public void destroy() {
        TailFrameBarAppPortraitVertical tailFrameBarAppPortraitVertical = this.mAppTailFrameView;
        if (tailFrameBarAppPortraitVertical != null) {
            tailFrameBarAppPortraitVertical.kq();
            this.mAppTailFrameView.setVisibility(8);
        }
    }

    @Override
    public int getLayoutId() {
        return R.layout.ksad_activity_feed_download;
    }

    @Override
    public String getPageName() {
        return "FeedDownloadActivityProxy";
    }

    @Override
    public void initData() {
        this.mAdInfo = com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate);
    }

    @Override
    public void initView() {
        KsAdContainer ksAdContainer = (KsAdContainer) findViewById(R.id.ksad_container);
        this.mAdContainer = ksAdContainer;
        ksAdContainer.setOnClickListener(this);
        TailFrameBarAppPortraitVertical tailFrameBarAppPortraitVertical = (TailFrameBarAppPortraitVertical) findViewById(R.id.ksad_download_container);
        this.mAppTailFrameView = tailFrameBarAppPortraitVertical;
        tailFrameBarAppPortraitVertical.b(this.mAdTemplate);
        this.mAppTailFrameView.z(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate));
        this.mAppTailFrameView.setVisibility(0);
        TextProgressBar textProgressBar = this.mAppTailFrameView.getTextProgressBar();
        this.mProgressBarTv = textProgressBar;
        textProgressBar.setOnClickListener(this);
        bindDownloadListener();
    }

    @Override
    public void onClick(View view) {
        com.kwad.components.core.e.d.a.a(new a.a(view.getContext()).P(this.mAdTemplate).b(this.mApkDownloadHelper).ao(view == this.mProgressBarTv ? 1 : 2).am(view == this.mProgressBarTv).a(new a.b() {
            @Override
            public final void onAdClicked() {
                FeedDownloadActivityProxy.this.notifyAdClick();
            }
        }));
    }

    @Override
    public void onDestroy() {
        super.onDestroy();
        destroy();
    }

    @Override
    public void onPreCreate(Bundle bundle) {
        super.onPreCreate(bundle);
        try {
            getIntent().removeExtra("key_template");
        } catch (Throwable unused) {
        }
    }
}
