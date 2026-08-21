package com.mbridge.msdk.out;

import android.content.Context;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.View;
import android.widget.RelativeLayout;
import com.mbridge.msdk.foundation.b.b;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.mbbanner.a.a;

public class MBBannerView extends RelativeLayout {
    private String bidToken;
    private a controller;
    private boolean hadAttached;
    private boolean isVisible;
    private BannerAdListener mBannerAdListener;
    private MBridgeIds mBridgeIds;

    public MBBannerView(Context context) {
        this(context, null);
    }

    public MBBannerView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public MBBannerView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.hadAttached = false;
        this.isVisible = false;
        com.mbridge.msdk.foundation.controller.a.f().a(context);
    }

    public void init(BannerSize bannerSize, String str, String str2) {
        this.mBridgeIds = new MBridgeIds(str, str2);
        String strF = ae.f(str2);
        if (!TextUtils.isEmpty(strF)) {
            ae.a(str2, strF);
        }
        a aVar = new a(this, bannerSize, str, str2);
        this.controller = aVar;
        aVar.c(this.isVisible);
        this.controller.b(this.hadAttached);
    }

    public void updateBannerSize(BannerSize bannerSize) {
        a aVar = this.controller;
        if (aVar != null) {
            aVar.a(bannerSize);
        }
    }

    public void setRefreshTime(int i) {
        a aVar = this.controller;
        if (aVar == null || i < 0) {
            return;
        }
        aVar.a(i);
    }

    public void setAllowShowCloseBtn(boolean z) {
        a aVar = this.controller;
        if (aVar != null) {
            aVar.a(z);
        }
    }

    public void load() {
        a aVar = this.controller;
        if (aVar != null) {
            aVar.b(this.hadAttached);
            this.controller.a("");
        } else {
            BannerAdListener bannerAdListener = this.mBannerAdListener;
            if (bannerAdListener != null) {
                bannerAdListener.onLoadFailed(this.mBridgeIds, com.tkay.expressad.mbbanner.a.a.a);
            }
        }
    }

    public String getRequestId() {
        a aVar = this.controller;
        return aVar != null ? aVar.a() : "";
    }

    public void loadFromBid(String str) {
        this.bidToken = str;
        if (this.controller != null) {
            if (!TextUtils.isEmpty(str)) {
                this.controller.b(this.hadAttached);
                this.controller.a(0);
                this.controller.a(str);
                return;
            } else {
                BannerAdListener bannerAdListener = this.mBannerAdListener;
                if (bannerAdListener != null) {
                    bannerAdListener.onLoadFailed(this.mBridgeIds, com.tkay.expressad.mbbanner.a.a.b);
                    return;
                }
                return;
            }
        }
        BannerAdListener bannerAdListener2 = this.mBannerAdListener;
        if (bannerAdListener2 != null) {
            bannerAdListener2.onLoadFailed(this.mBridgeIds, com.tkay.expressad.mbbanner.a.a.a);
        }
    }

    public void setBannerAdListener(BannerAdListener bannerAdListener) {
        this.mBannerAdListener = bannerAdListener;
        a aVar = this.controller;
        if (aVar != null) {
            aVar.a(bannerAdListener);
        }
    }

    public void release() {
        if (this.mBannerAdListener != null) {
            this.mBannerAdListener = null;
        }
        a aVar = this.controller;
        if (aVar != null) {
            aVar.a((BannerAdListener) null);
            this.controller.b();
        }
        removeAllViews();
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        updateAttachedState(true);
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        updateAttachedState(false);
    }

    private void updateAttachedState(boolean z) {
        this.hadAttached = z;
        a aVar = this.controller;
        if (aVar != null) {
            aVar.b(z);
        }
    }

    @Override
    protected void onWindowVisibilityChanged(int i) {
        super.onWindowVisibilityChanged(i);
        this.isVisible = i == 0;
        if (this.controller != null) {
            if (i == 0) {
                delayedNotify();
            } else {
                if (b.c) {
                    return;
                }
                this.controller.c(false);
            }
        }
    }

    @Override
    protected void onVisibilityChanged(View view, int i) {
        super.onVisibilityChanged(view, i);
        this.isVisible = i == 0;
        a aVar = this.controller;
        if (aVar != null) {
            if (i == 0) {
                delayedNotify();
            } else {
                aVar.c(false);
            }
        }
    }

    private void delayedNotify() {
        postDelayed(new Runnable() {
            @Override
            public void run() {
                if (MBBannerView.this.controller == null || b.c) {
                    return;
                }
                MBBannerView.this.controller.c(true);
            }
        }, 200L);
    }

    @Override
    protected void onSizeChanged(int i, int i2, int i3, int i4) {
        super.onSizeChanged(i, i2, i3, i4);
        a aVar = this.controller;
        if (aVar != null) {
            aVar.a(i, i2, i3, i4);
        }
    }

    public void onPause() {
        if (this.controller == null || !TextUtils.isEmpty(this.bidToken)) {
            return;
        }
        this.controller.d();
    }

    public void onResume() {
        if (this.controller == null || !TextUtils.isEmpty(this.bidToken) || b.c) {
            return;
        }
        this.controller.e();
    }
}
