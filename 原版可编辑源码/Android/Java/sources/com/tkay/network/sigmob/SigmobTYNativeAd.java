package com.tkay.network.sigmob;

import android.app.Activity;
import android.content.Context;
import android.graphics.Bitmap;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.ImageView;
import com.sigmob.windad.WindAdError;
import com.sigmob.windad.natives.NativeADEventListener;
import com.sigmob.windad.natives.WindNativeAdData;
import com.sigmob.windad.natives.WindNativeUnifiedAd;
import com.tkay.nativead.api.TYNativePrepareExInfo;
import com.tkay.nativead.api.TYNativePrepareInfo;
import com.tkay.nativead.unitgroup.api.CustomNativeAd;
import java.util.ArrayList;
import java.util.List;

public class SigmobTYNativeAd extends CustomNativeAd {
    FrameLayout a;
    ImageView b;
    ImageView c;
    ImageView d;
    List<ImageView> e = new ArrayList();
    WindNativeUnifiedAd f;
    TYNativePrepareInfo g;
    private Context h;
    private WindNativeAdData i;

    protected SigmobTYNativeAd(Context context, WindNativeAdData windNativeAdData, WindNativeUnifiedAd windNativeUnifiedAd) {
        this.a = null;
        this.b = null;
        this.c = null;
        this.d = null;
        this.h = context;
        this.i = windNativeAdData;
        this.f = windNativeUnifiedAd;
        setTitle(windNativeAdData.getTitle());
        setDescriptionText(windNativeAdData.getDesc());
        setIconImageUrl(windNativeAdData.getIconUrl());
        setCallToActionText(windNativeAdData.getCTAText());
        if (windNativeAdData.getAdPatternType() == 1) {
            this.mAdSourceType = "1";
            this.a = new FrameLayout(this.h);
            return;
        }
        this.mAdSourceType = "2";
        this.b = new ImageView(this.h);
        this.e.clear();
        this.e.add(this.b);
        if (this.i.getAdPatternType() == 3) {
            this.c = new ImageView(this.h);
            this.d = new ImageView(this.h);
            this.e.add(this.c);
            this.e.add(this.d);
        }
    }

    private void a(WindNativeAdData windNativeAdData) {
        setTitle(windNativeAdData.getTitle());
        setDescriptionText(windNativeAdData.getDesc());
        setIconImageUrl(windNativeAdData.getIconUrl());
        setCallToActionText(windNativeAdData.getCTAText());
        if (windNativeAdData.getAdPatternType() == 1) {
            this.mAdSourceType = "1";
            this.a = new FrameLayout(this.h);
            return;
        }
        this.mAdSourceType = "2";
        this.b = new ImageView(this.h);
        this.e.clear();
        this.e.add(this.b);
        if (this.i.getAdPatternType() == 3) {
            this.c = new ImageView(this.h);
            this.d = new ImageView(this.h);
            this.e.add(this.c);
            this.e.add(this.d);
        }
    }

    @Override
    public void prepare(View view, TYNativePrepareInfo tYNativePrepareInfo) {
        List<View> creativeClickViewList;
        WindNativeUnifiedAd windNativeUnifiedAd = this.f;
        if (windNativeUnifiedAd != null) {
            windNativeUnifiedAd.setBidEcpm(SigmobTYInitManager.getEcpmInt(windNativeUnifiedAd));
        }
        if (this.i != null) {
            this.g = tYNativePrepareInfo;
            List<View> clickViewList = tYNativePrepareInfo.getClickViewList();
            ArrayList arrayList = new ArrayList();
            if ((tYNativePrepareInfo instanceof TYNativePrepareExInfo) && (creativeClickViewList = ((TYNativePrepareExInfo) tYNativePrepareInfo).getCreativeClickViewList()) != null) {
                arrayList.addAll(creativeClickViewList);
            }
            if (clickViewList != null) {
                arrayList.addAll(clickViewList);
            }
            if (clickViewList == null || clickViewList.size() <= 0) {
                clickViewList = new ArrayList<>();
                clickViewList.add(view);
            }
            List<View> list = clickViewList;
            if (arrayList.size() == 0) {
                arrayList.add(view);
            }
            this.i.bindViewForInteraction(view, list, arrayList, tYNativePrepareInfo.getCloseView(), new NativeADEventListener() {
                @Override
                public final void onAdDetailDismiss() {
                }

                @Override
                public final void onAdDetailShow() {
                }

                @Override
                public final void onAdError(WindAdError windAdError) {
                }

                @Override
                public final void onAdExposed() {
                    SigmobTYNativeAd.this.notifyAdImpression();
                }

                @Override
                public final void onAdClicked() {
                    SigmobTYNativeAd.this.notifyAdClicked();
                }
            });
            if (this.i.getAdPatternType() == 1) {
                this.i.bindMediaView(this.a, new WindNativeAdData.NativeADMediaListener() {
                    @Override
                    public final void onVideoLoad() {
                    }

                    @Override
                    public final void onVideoPause() {
                    }

                    @Override
                    public final void onVideoResume() {
                    }

                    @Override
                    public final void onVideoError(WindAdError windAdError) {
                        SigmobTYNativeAd sigmobTYNativeAd = SigmobTYNativeAd.this;
                        StringBuilder sb = new StringBuilder();
                        sb.append(windAdError.getErrorCode());
                        sigmobTYNativeAd.notifyAdVideoVideoPlayFail(sb.toString(), windAdError.getMessage());
                    }

                    @Override
                    public final void onVideoStart() {
                        SigmobTYNativeAd.this.notifyAdVideoStart();
                    }

                    @Override
                    public final void onVideoCompleted() {
                        SigmobTYNativeAd.this.notifyAdVideoEnd();
                    }
                });
            } else {
                this.i.bindImageViews(this.e, 0);
            }
            if (view.getContext() == null || !(view.getContext() instanceof Activity)) {
                return;
            }
            bindDislikeListener(new View.OnClickListener() {
                @Override
                public final void onClick(View view2) {
                }
            });
            this.i.setDislikeInteractionCallback((Activity) view.getContext(), new WindNativeAdData.DislikeInteractionCallback() {
                @Override
                public final void onCancel() {
                }

                @Override
                public final void onShow() {
                }

                @Override
                public final void onSelected(int i, String str, boolean z) {
                    SigmobTYNativeAd.this.notifyAdDislikeClick();
                }
            });
        }
    }

    @Override
    public void clear(View view) {
        TYNativePrepareInfo tYNativePrepareInfo = this.g;
        if (tYNativePrepareInfo != null) {
            View closeView = tYNativePrepareInfo.getCloseView();
            if (closeView != null) {
                closeView.setOnTouchListener(null);
            }
            this.g = null;
        }
    }

    @Override
    public Bitmap getAdLogo() {
        WindNativeAdData windNativeAdData = this.i;
        if (windNativeAdData != null) {
            return windNativeAdData.getAdLogo();
        }
        return null;
    }

    @Override
    public View getAdMediaView(Object... objArr) {
        View view;
        WindNativeAdData windNativeAdData = this.i;
        if (windNativeAdData == null) {
            return null;
        }
        if (windNativeAdData.getAdPatternType() == 1) {
            view = this.a;
        } else {
            view = this.b;
        }
        ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
        if (layoutParams == null) {
            layoutParams = new ViewGroup.LayoutParams(-1, -2);
        }
        view.setLayoutParams(layoutParams);
        return view;
    }

    @Override
    public void destroy() {
        super.destroy();
        WindNativeAdData windNativeAdData = this.i;
        if (windNativeAdData != null) {
            windNativeAdData.destroy();
        }
    }

    @Override
    public void pauseVideo() {
        super.pauseVideo();
        WindNativeAdData windNativeAdData = this.i;
        if (windNativeAdData == null || windNativeAdData.getAdPatternType() != 1) {
            return;
        }
        this.i.pauseVideo();
    }

    @Override
    public void resumeVideo() {
        super.resumeVideo();
        WindNativeAdData windNativeAdData = this.i;
        if (windNativeAdData == null || windNativeAdData.getAdPatternType() != 1) {
            return;
        }
        this.i.resumeVideo();
    }

    public List<ImageView> getNativeImageViewList() {
        return this.e;
    }
}
