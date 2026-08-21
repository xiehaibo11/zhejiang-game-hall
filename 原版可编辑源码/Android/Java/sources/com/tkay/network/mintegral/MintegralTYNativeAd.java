package com.tkay.network.mintegral;

import android.content.Context;
import android.text.TextUtils;
import android.view.View;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.nativex.view.MBMediaView;
import com.mbridge.msdk.out.ApkDisplayInfo;
import com.mbridge.msdk.out.Campaign;
import com.mbridge.msdk.out.Frame;
import com.mbridge.msdk.out.MBBidNativeHandler;
import com.mbridge.msdk.out.MBNativeHandler;
import com.mbridge.msdk.out.NativeListener;
import com.mbridge.msdk.out.OnMBMediaViewListenerPlus;
import com.mbridge.msdk.widget.MBAdChoice;
import com.tkay.nativead.api.TYNativePrepareInfo;
import com.tkay.nativead.unitgroup.api.CustomNativeAd;
import java.lang.ref.WeakReference;
import java.util.List;
import java.util.Map;

public class MintegralTYNativeAd extends CustomNativeAd {
    Context a;
    MBNativeHandler b;
    MBBidNativeHandler c;
    Campaign d;
    String e;
    MBMediaView f;
    OnMBMediaViewListenerPlus g;
    boolean h;
    private final String i = MintegralTYNativeAd.class.getSimpleName();

    public MintegralTYNativeAd(Context context, String str, String str2, Campaign campaign, boolean z) {
        this.a = context.getApplicationContext();
        Map<String, Object> nativeProperties = z ? MBBidNativeHandler.getNativeProperties(str, str2) : MBNativeHandler.getNativeProperties(str, str2);
        this.d = campaign;
        if (z) {
            MBBidNativeHandler mBBidNativeHandler = new MBBidNativeHandler(nativeProperties, this.a);
            this.c = mBBidNativeHandler;
            mBBidNativeHandler.setAdListener(new NativeListener.NativeAdListener() {
                @Override
                public final void onAdFramesLoaded(List<Frame> list) {
                }

                @Override
                public final void onAdLoadError(String str3) {
                }

                @Override
                public final void onAdLoaded(List<Campaign> list, int i) {
                }

                @Override
                public final void onAdClick(Campaign campaign2) {
                    MintegralTYNativeAd.this.notifyAdClicked();
                }

                @Override
                public final void onLoggingImpression(int i) {
                    try {
                        MintegralTYInitManager.getInstance().a(MintegralTYNativeAd.this.getShowId(), new WeakReference(MintegralTYNativeAd.this.d));
                    } catch (Throwable unused) {
                    }
                    MintegralTYNativeAd.this.notifyAdImpression();
                }
            });
        } else {
            MBNativeHandler mBNativeHandler = new MBNativeHandler(nativeProperties, this.a);
            this.b = mBNativeHandler;
            mBNativeHandler.setAdListener(new NativeListener.NativeAdListener() {
                @Override
                public final void onAdFramesLoaded(List<Frame> list) {
                }

                @Override
                public final void onAdLoadError(String str3) {
                }

                @Override
                public final void onAdLoaded(List<Campaign> list, int i) {
                }

                @Override
                public final void onAdClick(Campaign campaign2) {
                    MintegralTYNativeAd.this.notifyAdClicked();
                }

                @Override
                public final void onLoggingImpression(int i) {
                    try {
                        MintegralTYInitManager.getInstance().a(MintegralTYNativeAd.this.getShowId(), new WeakReference(MintegralTYNativeAd.this.d));
                    } catch (Throwable unused) {
                    }
                    MintegralTYNativeAd.this.notifyAdImpression();
                }
            });
        }
        setAdData();
    }

    public void setAdData() {
        setTitle(this.d.getAppName());
        setDescriptionText(this.d.getAppDesc());
        setIconImageUrl(this.d.getIconUrl());
        setCallToActionText(this.d.getAdCall());
        setMainImageUrl(this.d.getImageUrl());
        setStarRating(Double.valueOf(this.d.getRating()));
        setVideoDuration(this.d.getVideoLength());
        MBAdChoice mBAdChoice = new MBAdChoice(this.a);
        mBAdChoice.setCampaign(this.d);
        setAdLogoView(mBAdChoice);
        CampaignEx campaignEx = (CampaignEx) this.d;
        if (campaignEx.getVideoUrlEncode() != null && campaignEx.getVideoUrlEncode().length() > 0) {
            this.mAdSourceType = "1";
        } else {
            this.mAdSourceType = "2";
        }
        ApkDisplayInfo apkDisplayInfo = this.d.getApkDisplayInfo();
        if (apkDisplayInfo != null) {
            long j = 0;
            try {
                j = Long.parseLong(this.d.getSize());
            } catch (Exception unused) {
            }
            setAdAppInfo(new MintegralATDownloadAppInfo(apkDisplayInfo, this.d.getPackageName(), j));
        }
    }

    @Override
    public void prepare(View view, TYNativePrepareInfo tYNativePrepareInfo) {
        try {
            List<View> clickViewList = tYNativePrepareInfo.getClickViewList();
            if (this.b != null) {
                this.b.registerView(view, clickViewList, this.d);
            }
            if (this.c != null) {
                this.c.registerView(view, clickViewList, this.d);
            }
            if (clickViewList.size() > 0) {
                view.setOnClickListener(null);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override
    public void clear(View view) {
        MBNativeHandler mBNativeHandler = this.b;
        if (mBNativeHandler != null) {
            mBNativeHandler.unregisterView(view, this.d);
        }
        MBBidNativeHandler mBBidNativeHandler = this.c;
        if (mBBidNativeHandler != null) {
            mBBidNativeHandler.unregisterView(view, this.d);
        }
    }

    @Override
    public View getAdMediaView(Object... objArr) {
        try {
            if (this.f == null) {
                MBMediaView mBMediaView = new MBMediaView(this.a);
                this.f = mBMediaView;
                mBMediaView.setIsAllowFullScreen(true);
                this.f.setNativeAd(this.d);
                if (!TextUtils.isEmpty(this.e)) {
                    String str = this.e;
                    byte b = -1;
                    int iHashCode = str.hashCode();
                    if (iHashCode != 48) {
                        if (iHashCode == 49 && str.equals("1")) {
                            b = 1;
                        }
                    } else if (str.equals("0")) {
                        b = 0;
                    }
                    if (b == 0) {
                        this.f.setVideoSoundOnOff(false);
                    } else if (b == 1) {
                        this.f.setVideoSoundOnOff(true);
                    }
                }
                OnMBMediaViewListenerPlus onMBMediaViewListenerPlus = new OnMBMediaViewListenerPlus() {
                    @Override
                    public final void onEnterFullscreen() {
                    }

                    @Override
                    public final void onExitFullscreen() {
                    }

                    @Override
                    public final void onFinishRedirection(Campaign campaign, String str2) {
                    }

                    @Override
                    public final void onRedirectionFailed(Campaign campaign, String str2) {
                    }

                    @Override
                    public final void onStartRedirection(Campaign campaign, String str2) {
                    }

                    @Override
                    public final void onVideoAdClicked(Campaign campaign) {
                        MintegralTYNativeAd.this.notifyAdClicked();
                    }

                    @Override
                    public final void onVideoStart() {
                        MintegralTYNativeAd.this.notifyAdVideoStart();
                    }

                    @Override
                    public final void onVideoComplete() {
                        MintegralTYNativeAd.this.notifyAdVideoEnd();
                    }
                };
                this.g = onMBMediaViewListenerPlus;
                this.f.setOnMediaViewListener(onMBMediaViewListenerPlus);
            }
            return this.f;
        } catch (Throwable th) {
            th.printStackTrace();
            return null;
        }
    }

    @Override
    public void setVideoMute(boolean z) {
        super.setVideoMute(z);
        MBMediaView mBMediaView = this.f;
        if (mBMediaView != null) {
            mBMediaView.setVideoSoundOnOff(!z);
        }
    }

    @Override
    public void destroy() {
        MBMediaView mBMediaView = this.f;
        if (mBMediaView != null) {
            this.g = null;
            mBMediaView.destory();
            this.f = null;
        }
        MBNativeHandler mBNativeHandler = this.b;
        if (mBNativeHandler != null) {
            mBNativeHandler.setAdListener(null);
            this.b.clearVideoCache();
            this.b.release();
            this.b = null;
        }
        MBBidNativeHandler mBBidNativeHandler = this.c;
        if (mBBidNativeHandler != null) {
            mBBidNativeHandler.setAdListener(null);
            this.c.clearVideoCache();
            this.c.bidRelease();
            this.c = null;
        }
        this.a = null;
        this.d = null;
    }

    private void a(boolean z) {
        this.h = z;
    }

    private void a(String str) {
        this.e = str;
    }
}
