package com.qq.e.ads.nativ;

import android.app.Activity;
import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.ImageView;
import com.qq.e.ads.cfg.VideoOption;
import com.qq.e.ads.nativ.widget.NativeAdContainer;
import com.qq.e.comm.adevent.ADEvent;
import com.qq.e.comm.adevent.ADEventListener;
import com.qq.e.comm.adevent.ADListener;
import com.qq.e.comm.adevent.AdEventType;
import com.qq.e.comm.compliance.DownloadConfirmCallBack;
import com.qq.e.comm.compliance.DownloadConfirmListener;
import com.qq.e.comm.listeners.NegativeFeedbackListener;
import com.qq.e.comm.util.AdErrorConvertor;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class NativeUnifiedADDataAdapter implements NativeUnifiedADData, DownloadConfirmListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private NativeUnifiedADData f4663a;
    private NativeADEventListener b;
    private NativeADMediaListener c;
    private DownloadConfirmListener d;
    private NegativeFeedbackListener e;

    private class UnifiedAdListener implements ADListener {
        private UnifiedAdListener() {
        }

        @Override // com.qq.e.comm.adevent.ADListener
        public void onADEvent(ADEvent aDEvent) {
            if (NativeUnifiedADDataAdapter.a(NativeUnifiedADDataAdapter.this, aDEvent) || NativeUnifiedADDataAdapter.b(NativeUnifiedADDataAdapter.this, aDEvent)) {
                return;
            }
            NativeUnifiedADDataAdapter nativeUnifiedADDataAdapter = NativeUnifiedADDataAdapter.this;
            if (nativeUnifiedADDataAdapter == null) {
                throw null;
            }
            NativeUnifiedADDataAdapter.c(nativeUnifiedADDataAdapter, aDEvent);
        }
    }

    public NativeUnifiedADDataAdapter(NativeUnifiedADData nativeUnifiedADData) {
        this.f4663a = nativeUnifiedADData;
        if (nativeUnifiedADData instanceof ADEventListener) {
            ((ADEventListener) nativeUnifiedADData).setAdListener(new UnifiedAdListener());
        }
    }

    static boolean a(NativeUnifiedADDataAdapter nativeUnifiedADDataAdapter, ADEvent aDEvent) {
        if (nativeUnifiedADDataAdapter.b != null) {
            int type = aDEvent.getType();
            if (type == 103) {
                nativeUnifiedADDataAdapter.b.onADExposed();
            } else if (type == 105) {
                NativeADEventListener nativeADEventListener = nativeUnifiedADDataAdapter.b;
                if (nativeADEventListener instanceof NativeADEventListenerWithClickInfo) {
                    ((NativeADEventListenerWithClickInfo) nativeUnifiedADDataAdapter.b).onADClicked((View) aDEvent.getParam(View.class));
                } else {
                    nativeADEventListener.onADClicked();
                }
            } else if (type == 107) {
                Integer num = (Integer) aDEvent.getParam(Integer.class);
                if (num != null) {
                    nativeUnifiedADDataAdapter.b.onADError(AdErrorConvertor.formatErrorCode(num.intValue()));
                }
            } else if (type == 111) {
                nativeUnifiedADDataAdapter.b.onADStatusChanged();
            }
            return true;
        }
        return false;
    }

    static boolean b(NativeUnifiedADDataAdapter nativeUnifiedADDataAdapter, ADEvent aDEvent) {
        if (nativeUnifiedADDataAdapter.c != null) {
            switch (aDEvent.getType()) {
                case 201:
                    Integer num = (Integer) aDEvent.getParam(Integer.class);
                    if (num != null) {
                        nativeUnifiedADDataAdapter.c.onVideoLoaded(num.intValue());
                    }
                    return true;
                case 202:
                    nativeUnifiedADDataAdapter.c.onVideoStart();
                    return true;
                case 203:
                    nativeUnifiedADDataAdapter.c.onVideoResume();
                    return true;
                case 204:
                    nativeUnifiedADDataAdapter.c.onVideoPause();
                    return true;
                case 205:
                    nativeUnifiedADDataAdapter.c.onVideoStop();
                    return true;
                case 206:
                    nativeUnifiedADDataAdapter.c.onVideoCompleted();
                    return true;
                case 207:
                    Integer num2 = (Integer) aDEvent.getParam(Integer.class);
                    if (num2 != null) {
                        nativeUnifiedADDataAdapter.c.onVideoError(AdErrorConvertor.formatErrorCode(num2.intValue()));
                    }
                    return true;
                case AdEventType.VIDEO_CLICKED /* 208 */:
                    nativeUnifiedADDataAdapter.c.onVideoClicked();
                    return true;
                case AdEventType.VIDEO_INIT /* 209 */:
                    nativeUnifiedADDataAdapter.c.onVideoInit();
                    return true;
                case AdEventType.VIDEO_READY /* 210 */:
                    nativeUnifiedADDataAdapter.c.onVideoReady();
                    return true;
                case AdEventType.VIDEO_LOADING /* 211 */:
                    nativeUnifiedADDataAdapter.c.onVideoLoading();
                    return true;
            }
        }
        return false;
    }

    static boolean c(NativeUnifiedADDataAdapter nativeUnifiedADDataAdapter, ADEvent aDEvent) {
        if (nativeUnifiedADDataAdapter.e == null || aDEvent.getType() != 304) {
            return false;
        }
        nativeUnifiedADDataAdapter.e.onComplainSuccess();
        return true;
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public void bindAdToCustomVideo(ViewGroup viewGroup, Context context, List<View> list, List<View> list2) {
        this.f4663a.bindAdToCustomVideo(viewGroup, context, list, list2);
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public void bindAdToView(Context context, NativeAdContainer nativeAdContainer, FrameLayout.LayoutParams layoutParams, List<View> list) {
        this.f4663a.bindAdToView(context, nativeAdContainer, layoutParams, list);
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public void bindAdToView(Context context, NativeAdContainer nativeAdContainer, FrameLayout.LayoutParams layoutParams, List<View> list, List<View> list2) {
        this.f4663a.bindAdToView(context, nativeAdContainer, layoutParams, list, list2);
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public void bindCTAViews(List<View> list) {
        this.f4663a.bindCTAViews(list);
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public void bindImageViews(List<ImageView> list, int i) {
        this.f4663a.bindImageViews(list, i);
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public void bindImageViews(List<ImageView> list, byte[] bArr) {
        this.f4663a.bindImageViews(list, bArr);
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public void bindMediaView(MediaView mediaView, VideoOption videoOption, NativeADMediaListener nativeADMediaListener) {
        this.c = nativeADMediaListener;
        this.f4663a.bindMediaView(mediaView, videoOption, nativeADMediaListener);
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public void destroy() {
        this.f4663a.destroy();
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public boolean equalsAdData(NativeUnifiedADData nativeUnifiedADData) {
        return this.f4663a.equalsAdData(nativeUnifiedADData);
    }

    public NativeUnifiedADData getAdData() {
        return this.f4663a;
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public int getAdPatternType() {
        return this.f4663a.getAdPatternType();
    }

    @Override // com.qq.e.comm.compliance.ApkDownloadComplianceInterface
    public String getApkInfoUrl() {
        return this.f4663a.getApkInfoUrl();
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public NativeUnifiedADAppMiitInfo getAppMiitInfo() {
        return this.f4663a.getAppMiitInfo();
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public double getAppPrice() {
        return this.f4663a.getAppPrice();
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public int getAppScore() {
        return this.f4663a.getAppScore();
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public int getAppStatus() {
        return this.f4663a.getAppStatus();
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public String getButtonText() {
        return this.f4663a.getButtonText();
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public String getCTAText() {
        return this.f4663a.getCTAText();
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public CustomizeVideo getCustomizeVideo() {
        return this.f4663a.getCustomizeVideo();
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public String getDesc() {
        return this.f4663a.getDesc();
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public long getDownloadCount() {
        return this.f4663a.getDownloadCount();
    }

    @Override // com.qq.e.comm.pi.LADI
    public int getECPM() {
        return this.f4663a.getECPM();
    }

    @Override // com.qq.e.comm.pi.LADI
    public String getECPMLevel() {
        return this.f4663a.getECPMLevel();
    }

    @Override // com.qq.e.comm.pi.LADI
    public Map<String, Object> getExtraInfo() {
        return this.f4663a.getExtraInfo();
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public String getIconUrl() {
        return this.f4663a.getIconUrl();
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public List<String> getImgList() {
        return this.f4663a.getImgList();
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public String getImgUrl() {
        return this.f4663a.getImgUrl();
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public int getPictureHeight() {
        return this.f4663a.getPictureHeight();
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public int getPictureWidth() {
        return this.f4663a.getPictureWidth();
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public int getProgress() {
        return this.f4663a.getProgress();
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public String getTitle() {
        return this.f4663a.getTitle();
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public int getVideoCurrentPosition() {
        return this.f4663a.getVideoCurrentPosition();
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public int getVideoDuration() {
        return this.f4663a.getVideoDuration();
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public boolean isAppAd() {
        return this.f4663a.isAppAd();
    }

    @Override // com.qq.e.comm.pi.LADI
    public boolean isValid() {
        return this.f4663a.isValid();
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public boolean isWeChatCanvasAd() {
        return this.f4663a.isWeChatCanvasAd();
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public void negativeFeedback() {
        this.f4663a.negativeFeedback();
    }

    @Override // com.qq.e.comm.compliance.DownloadConfirmListener
    public void onDownloadConfirm(Activity activity, int i, String str, DownloadConfirmCallBack downloadConfirmCallBack) {
        DownloadConfirmListener downloadConfirmListener = this.d;
        if (downloadConfirmListener != null) {
            downloadConfirmListener.onDownloadConfirm(activity, i, str, downloadConfirmCallBack);
        }
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public void pauseAppDownload() {
        this.f4663a.pauseAppDownload();
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public void pauseVideo() {
        this.f4663a.pauseVideo();
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public void resume() {
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public void resumeAppDownload() {
        this.f4663a.resumeAppDownload();
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public void resumeVideo() {
        this.f4663a.resumeVideo();
    }

    @Override // com.qq.e.comm.pi.IBidding
    public void sendLossNotification(int i, int i2, String str) {
        this.f4663a.sendLossNotification(i, i2, str);
    }

    @Override // com.qq.e.comm.pi.IBidding
    public void sendLossNotification(Map<String, Object> map) {
        this.f4663a.sendLossNotification(map);
    }

    @Override // com.qq.e.comm.pi.IBidding
    public void sendWinNotification(int i) {
        this.f4663a.sendWinNotification(i);
    }

    @Override // com.qq.e.comm.pi.IBidding
    public void sendWinNotification(Map<String, Object> map) {
        this.f4663a.sendWinNotification(map);
    }

    @Override // com.qq.e.comm.pi.IBidding
    public void setBidECPM(int i) {
        this.f4663a.setBidECPM(i);
    }

    @Override // com.qq.e.comm.compliance.ApkDownloadComplianceInterface
    public void setDownloadConfirmListener(DownloadConfirmListener downloadConfirmListener) {
        this.d = downloadConfirmListener;
        NativeUnifiedADData nativeUnifiedADData = this.f4663a;
        if (nativeUnifiedADData != null) {
            nativeUnifiedADData.setDownloadConfirmListener(this);
        }
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public void setNativeAdEventListener(NativeADEventListener nativeADEventListener) {
        this.b = nativeADEventListener;
    }

    @Override // com.qq.e.comm.pi.NFBI
    public void setNegativeFeedbackListener(NegativeFeedbackListener negativeFeedbackListener) {
        this.e = negativeFeedbackListener;
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public void setVideoMute(boolean z) {
        this.f4663a.setVideoMute(z);
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public void startVideo() {
        this.f4663a.startVideo();
    }

    @Override // com.qq.e.ads.nativ.NativeUnifiedADData
    public void stopVideo() {
        this.f4663a.stopVideo();
    }
}
