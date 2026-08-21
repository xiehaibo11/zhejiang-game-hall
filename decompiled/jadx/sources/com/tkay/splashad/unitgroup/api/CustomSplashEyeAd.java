package com.tkay.splashad.unitgroup.api;

import android.content.Context;
import android.graphics.Rect;
import android.view.View;
import android.view.ViewGroup;
import com.tkay.core.api.TYBaseAdAdapter;
import com.tkay.splashad.api.ITYSplashEyeAd;
import com.tkay.splashad.api.TYSplashEyeAdListener;

/* JADX INFO: loaded from: classes4.dex */
public abstract class CustomSplashEyeAd implements ITYSplashEyeAd {
    protected TYBaseAdAdapter mAtBaseAdAdapter;
    protected ViewGroup mEyeAdContainer;
    protected View mSplashView;
    protected TYSplashEyeAdListener mTYSplashEyeAdListener;

    public abstract void customResourceDestory();

    protected abstract void show(Context context, Rect rect);

    public CustomSplashEyeAd(TYBaseAdAdapter tYBaseAdAdapter) {
        this.mAtBaseAdAdapter = tYBaseAdAdapter;
    }

    public void setSplashView(View view) {
        this.mSplashView = view;
    }

    public TYSplashEyeAdListener getSplashEyeAdListener() {
        return this.mTYSplashEyeAdListener;
    }

    @Override // com.tkay.splashad.api.ITYSplashEyeAd
    public final void show(Context context, Rect rect, TYSplashEyeAdListener tYSplashEyeAdListener) {
        this.mTYSplashEyeAdListener = tYSplashEyeAdListener;
        show(context, rect);
    }

    @Override // com.tkay.splashad.api.ITYSplashEyeAd
    public void setEyeAdContainer(ViewGroup viewGroup) {
        this.mEyeAdContainer = viewGroup;
    }

    @Override // com.tkay.splashad.api.ITYSplashEyeAd
    public final void destroy() {
        try {
            if (this.mAtBaseAdAdapter != null) {
                if (this.mAtBaseAdAdapter instanceof CustomSplashAdapter) {
                    ((CustomSplashAdapter) this.mAtBaseAdAdapter).cleanImpressionListener();
                }
                this.mAtBaseAdAdapter.destory();
                this.mAtBaseAdAdapter = null;
            }
            this.mTYSplashEyeAdListener = null;
            if (this.mSplashView != null) {
                if (this.mSplashView.getParent() != null) {
                    ((ViewGroup) this.mSplashView.getParent()).removeView(this.mSplashView);
                }
                this.mSplashView = null;
            }
            if (this.mEyeAdContainer != null) {
                if (this.mEyeAdContainer.getParent() != null) {
                    ((ViewGroup) this.mEyeAdContainer.getParent()).removeView(this.mEyeAdContainer);
                }
                this.mEyeAdContainer = null;
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        try {
            customResourceDestory();
        } catch (Throwable th2) {
            th2.printStackTrace();
        }
    }
}
