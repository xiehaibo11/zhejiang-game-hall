package com.tkay.network.gdt;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import android.view.View;
import com.qq.e.ads.cfg.VideoOption;
import com.qq.e.ads.nativ.ADSize;
import com.qq.e.ads.nativ.NativeExpressAD;
import com.qq.e.ads.nativ.NativeExpressADView;
import com.qq.e.ads.nativ.NativeExpressMediaListener;
import com.qq.e.comm.compliance.DownloadConfirmCallBack;
import com.qq.e.comm.compliance.DownloadConfirmListener;
import com.qq.e.comm.constants.LoadAdParams;
import com.qq.e.comm.pi.AdData;
import com.qq.e.comm.util.AdError;
import com.tkay.nativead.unitgroup.api.CustomNativeAd;
import java.lang.ref.WeakReference;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class GDTTYNativeExpressAd extends CustomNativeAd {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    NativeExpressAD f7562a;
    NativeExpressADView b;
    a c;
    String d;

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a
    public boolean isNativeExpress() {
        return true;
    }

    protected GDTTYNativeExpressAd(Context context, String str, int i, int i2, int i3, int i4, int i5, String str2) {
        int iA;
        int iA2;
        this.d = str2;
        NativeExpressAD.NativeExpressADListener nativeExpressADListener = new NativeExpressAD.NativeExpressADListener() { // from class: com.tkay.network.gdt.GDTTYNativeExpressAd.1
            @Override // com.qq.e.ads.nativ.NativeExpressAD.NativeExpressADListener
            public final void onADLeftApplication(NativeExpressADView nativeExpressADView) {
            }

            @Override // com.qq.e.ads.NativeAbstractAD.BasicADListener
            public final void onNoAD(AdError adError) {
                if (GDTTYNativeExpressAd.this.c != null) {
                    a aVar = GDTTYNativeExpressAd.this.c;
                    StringBuilder sb = new StringBuilder();
                    sb.append(adError.getErrorCode());
                    aVar.notifyError(sb.toString(), adError.getErrorMsg());
                }
                GDTTYNativeExpressAd.this.c = null;
            }

            @Override // com.qq.e.ads.nativ.NativeExpressAD.NativeExpressADListener
            public final void onADLoaded(List<NativeExpressADView> list) {
                if (list.size() > 0) {
                    NativeExpressADView nativeExpressADView = list.get(0);
                    GDTTYNativeExpressAd.this.setNetworkInfoMap(nativeExpressADView.getExtraInfo());
                    nativeExpressADView.render();
                } else {
                    if (GDTTYNativeExpressAd.this.c != null) {
                        GDTTYNativeExpressAd.this.c.notifyError("", "GDT Ad request success but no Ad return.");
                    }
                    GDTTYNativeExpressAd.this.c = null;
                }
            }

            @Override // com.qq.e.ads.nativ.NativeExpressAD.NativeExpressADListener
            public final void onRenderFail(NativeExpressADView nativeExpressADView) {
                if (GDTTYNativeExpressAd.this.c != null) {
                    GDTTYNativeExpressAd.this.c.notifyError("", "GDT onRenderFail");
                }
                GDTTYNativeExpressAd.this.c = null;
            }

            @Override // com.qq.e.ads.nativ.NativeExpressAD.NativeExpressADListener
            public final void onRenderSuccess(NativeExpressADView nativeExpressADView) {
                GDTTYNativeExpressAd.this.b = nativeExpressADView;
                AdData boundData = GDTTYNativeExpressAd.this.b.getBoundData();
                if (boundData != null) {
                    if (boundData.getAdPatternType() == 2) {
                        GDTTYNativeExpressAd.this.mAdSourceType = "1";
                    } else {
                        GDTTYNativeExpressAd.this.mAdSourceType = "2";
                    }
                }
                GDTTYNativeExpressAd.this.setVideoDuration(boundData != null ? boundData.getVideoDuration() / 1000 : 0.0d);
                GDTTYNativeExpressAd.this.b.setMediaListener(new NativeExpressMediaListener() { // from class: com.tkay.network.gdt.GDTTYNativeExpressAd.1.1
                    @Override // com.qq.e.ads.nativ.NativeExpressMediaListener
                    public final void onVideoCached(NativeExpressADView nativeExpressADView2) {
                    }

                    @Override // com.qq.e.ads.nativ.NativeExpressMediaListener
                    public final void onVideoInit(NativeExpressADView nativeExpressADView2) {
                    }

                    @Override // com.qq.e.ads.nativ.NativeExpressMediaListener
                    public final void onVideoLoading(NativeExpressADView nativeExpressADView2) {
                    }

                    @Override // com.qq.e.ads.nativ.NativeExpressMediaListener
                    public final void onVideoPageClose(NativeExpressADView nativeExpressADView2) {
                    }

                    @Override // com.qq.e.ads.nativ.NativeExpressMediaListener
                    public final void onVideoPageOpen(NativeExpressADView nativeExpressADView2) {
                    }

                    @Override // com.qq.e.ads.nativ.NativeExpressMediaListener
                    public final void onVideoPause(NativeExpressADView nativeExpressADView2) {
                    }

                    @Override // com.qq.e.ads.nativ.NativeExpressMediaListener
                    public final void onVideoReady(NativeExpressADView nativeExpressADView2, long j) {
                    }

                    @Override // com.qq.e.ads.nativ.NativeExpressMediaListener
                    public final void onVideoStart(NativeExpressADView nativeExpressADView2) {
                        GDTTYNativeExpressAd.this.notifyAdVideoStart();
                    }

                    @Override // com.qq.e.ads.nativ.NativeExpressMediaListener
                    public final void onVideoComplete(NativeExpressADView nativeExpressADView2) {
                        GDTTYNativeExpressAd.this.notifyAdVideoEnd();
                    }

                    @Override // com.qq.e.ads.nativ.NativeExpressMediaListener
                    public final void onVideoError(NativeExpressADView nativeExpressADView2, AdError adError) {
                        GDTTYNativeExpressAd gDTTYNativeExpressAd = GDTTYNativeExpressAd.this;
                        StringBuilder sb = new StringBuilder();
                        sb.append(adError.getErrorCode());
                        gDTTYNativeExpressAd.notifyAdVideoVideoPlayFail(sb.toString(), adError.getErrorMsg());
                    }
                });
                if (GDTTYNativeExpressAd.this.c != null) {
                    GDTTYNativeExpressAd.this.c.notifyLoaded(GDTTYNativeExpressAd.this);
                }
                GDTTYNativeExpressAd.this.c = null;
            }

            @Override // com.qq.e.ads.nativ.NativeExpressAD.NativeExpressADListener
            public final void onADExposure(NativeExpressADView nativeExpressADView) {
                GDTTYInitManager.getInstance().a(GDTTYNativeExpressAd.this.getShowId(), new WeakReference(GDTTYNativeExpressAd.this.b));
                GDTTYNativeExpressAd.this.notifyAdImpression();
            }

            @Override // com.qq.e.ads.nativ.NativeExpressAD.NativeExpressADListener
            public final void onADClicked(NativeExpressADView nativeExpressADView) {
                GDTTYNativeExpressAd.this.notifyAdClicked();
            }

            @Override // com.qq.e.ads.nativ.NativeExpressAD.NativeExpressADListener
            public final void onADClosed(NativeExpressADView nativeExpressADView) {
                GDTTYNativeExpressAd.this.notifyAdDislikeClick();
            }
        };
        if (i > 0) {
            GDTTYInitManager.getInstance();
            iA = GDTTYInitManager.a(context, i);
        } else {
            iA = -1;
        }
        if (i2 > 0) {
            GDTTYInitManager.getInstance();
            iA2 = GDTTYInitManager.a(context, i2);
        } else {
            iA2 = -2;
        }
        if (TextUtils.isEmpty(str2)) {
            this.f7562a = new NativeExpressAD(context, new ADSize(iA, iA2), str, nativeExpressADListener);
        } else {
            this.f7562a = new NativeExpressAD(context, new ADSize(iA, iA2), str, nativeExpressADListener, str2);
        }
        this.f7562a.setVideoOption(new VideoOption.Builder().setAutoPlayMuted(i3 == 1).setDetailPageMuted(i3 == 1).setAutoPlayPolicy(i4).build());
        if (i5 != -1) {
            this.f7562a.setMaxVideoDuration(i5);
        }
    }

    protected final void a(a aVar, LoadAdParams loadAdParams) {
        this.c = aVar;
        if (TextUtils.isEmpty(this.d)) {
            this.f7562a.loadAD(1, loadAdParams);
        } else {
            this.f7562a.loadAD(1);
        }
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a, com.tkay.core.api.IATThirdPartyMaterial
    public View getAdMediaView(Object... objArr) {
        return this.b;
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd
    public void registerDownloadConfirmListener() {
        NativeExpressADView nativeExpressADView = this.b;
        if (nativeExpressADView != null) {
            nativeExpressADView.setDownloadConfirmListener(new DownloadConfirmListener() { // from class: com.tkay.network.gdt.GDTTYNativeExpressAd.2
                @Override // com.qq.e.comm.compliance.DownloadConfirmListener
                public final void onDownloadConfirm(Activity activity, int i, String str, DownloadConfirmCallBack downloadConfirmCallBack) {
                    GDTDownloadFirmInfo gDTDownloadFirmInfo = new GDTDownloadFirmInfo();
                    gDTDownloadFirmInfo.appInfoUrl = str;
                    gDTDownloadFirmInfo.scenes = i;
                    gDTDownloadFirmInfo.confirmCallBack = downloadConfirmCallBack;
                    GDTTYNativeExpressAd.this.notifyDownloadConfirm(activity, null, gDTDownloadFirmInfo);
                }
            });
        }
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.core.api.BaseAd
    public void destroy() {
        NativeExpressADView nativeExpressADView = this.b;
        if (nativeExpressADView != null) {
            nativeExpressADView.setMediaListener(null);
            this.b.destroy();
        }
        this.b = null;
        this.c = null;
        this.f7562a = null;
    }
}
