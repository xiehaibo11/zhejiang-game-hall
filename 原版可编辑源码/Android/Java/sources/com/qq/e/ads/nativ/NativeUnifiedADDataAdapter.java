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

public class NativeUnifiedADDataAdapter implements NativeUnifiedADData, DownloadConfirmListener {
    private NativeUnifiedADData a;
    private NativeADEventListener b;
    private NativeADMediaListener c;
    private DownloadConfirmListener d;
    private NegativeFeedbackListener e;

    private class UnifiedAdListener implements ADListener {
        private UnifiedAdListener() {
        }

        @Override
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
        this.a = nativeUnifiedADData;
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
                case AdEventType.VIDEO_CLICKED:
                    nativeUnifiedADDataAdapter.c.onVideoClicked();
                    return true;
                case AdEventType.VIDEO_INIT:
                    nativeUnifiedADDataAdapter.c.onVideoInit();
                    return true;
                case AdEventType.VIDEO_READY:
                    nativeUnifiedADDataAdapter.c.onVideoReady();
                    return true;
                case AdEventType.VIDEO_LOADING:
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

    @Override
    public void bindAdToCustomVideo(ViewGroup viewGroup, Context context, List<View> list, List<View> list2) {
        this.a.bindAdToCustomVideo(viewGroup, context, list, list2);
    }

    @Override
    public void bindAdToView(Context context, NativeAdContainer nativeAdContainer, FrameLayout.LayoutParams layoutParams, List<View> list) {
        this.a.bindAdToView(context, nativeAdContainer, layoutParams, list);
    }

    @Override
    public void bindAdToView(Context context, NativeAdContainer nativeAdContainer, FrameLayout.LayoutParams layoutParams, List<View> list, List<View> list2) {
        this.a.bindAdToView(context, nativeAdContainer, layoutParams, list, list2);
    }

    @Override
    public void bindCTAViews(List<View> list) {
        this.a.bindCTAViews(list);
    }

    @Override
    public void bindImageViews(List<ImageView> list, int i) {
        this.a.bindImageViews(list, i);
    }

    @Override
    public void bindImageViews(List<ImageView> list, byte[] bArr) {
        this.a.bindImageViews(list, bArr);
    }

    @Override
    public void bindMediaView(MediaView mediaView, VideoOption videoOption, NativeADMediaListener nativeADMediaListener) {
        this.c = nativeADMediaListener;
        this.a.bindMediaView(mediaView, videoOption, nativeADMediaListener);
    }

    @Override
    public void destroy() {
        this.a.destroy();
    }

    @Override
    public boolean equalsAdData(NativeUnifiedADData nativeUnifiedADData) {
        return this.a.equalsAdData(nativeUnifiedADData);
    }

    public NativeUnifiedADData getAdData() {
        return this.a;
    }

    @Override
    public int getAdPatternType() {
        return this.a.getAdPatternType();
    }

    @Override
    public String getApkInfoUrl() {
        return this.a.getApkInfoUrl();
    }

    @Override
    public NativeUnifiedADAppMiitInfo getAppMiitInfo() {
        return this.a.getAppMiitInfo();
    }

    @Override
    public double getAppPrice() {
        return this.a.getAppPrice();
    }

    @Override
    public int getAppScore() {
        return this.a.getAppScore();
    }

    @Override
    public int getAppStatus() {
        return this.a.getAppStatus();
    }

    @Override
    public String getButtonText() {
        return this.a.getButtonText();
    }

    @Override
    public String getCTAText() {
        return this.a.getCTAText();
    }

    @Override
    public CustomizeVideo getCustomizeVideo() {
        return this.a.getCustomizeVideo();
    }

    @Override
    public String getDesc() {
        return this.a.getDesc();
    }

    @Override
    public long getDownloadCount() {
        return this.a.getDownloadCount();
    }

    @Override
    public int getECPM() {
        return this.a.getECPM();
    }

    @Override
    public String getECPMLevel() {
        return this.a.getECPMLevel();
    }

    @Override
    public Map<String, Object> getExtraInfo() {
        return this.a.getExtraInfo();
    }

    @Override
    public String getIconUrl() {
        return this.a.getIconUrl();
    }

    @Override
    public List<String> getImgList() {
        return this.a.getImgList();
    }

    @Override
    public String getImgUrl() {
        return this.a.getImgUrl();
    }

    @Override
    public int getPictureHeight() {
        return this.a.getPictureHeight();
    }

    @Override
    public int getPictureWidth() {
        return this.a.getPictureWidth();
    }

    @Override
    public int getProgress() {
        return this.a.getProgress();
    }

    @Override
    public String getTitle() {
        return this.a.getTitle();
    }

    @Override
    public int getVideoCurrentPosition() {
        return this.a.getVideoCurrentPosition();
    }

    @Override
    public int getVideoDuration() {
        return this.a.getVideoDuration();
    }

    @Override
    public boolean isAppAd() {
        return this.a.isAppAd();
    }

    @Override
    public boolean isValid() {
        return this.a.isValid();
    }

    @Override
    public boolean isWeChatCanvasAd() {
        return this.a.isWeChatCanvasAd();
    }

    @Override
    public void negativeFeedback() {
        this.a.negativeFeedback();
    }

    @Override
    public void onDownloadConfirm(Activity activity, int i, String str, DownloadConfirmCallBack downloadConfirmCallBack) {
        DownloadConfirmListener downloadConfirmListener = this.d;
        if (downloadConfirmListener != null) {
            downloadConfirmListener.onDownloadConfirm(activity, i, str, downloadConfirmCallBack);
        }
    }

    @Override
    public void pauseAppDownload() {
        this.a.pauseAppDownload();
    }

    @Override
    public void pauseVideo() {
        this.a.pauseVideo();
    }

    @Override
    public void resume() {
    }

    @Override
    public void resumeAppDownload() {
        this.a.resumeAppDownload();
    }

    @Override
    public void resumeVideo() {
        this.a.resumeVideo();
    }

    @Override
    public void sendLossNotification(int i, int i2, String str) {
        this.a.sendLossNotification(i, i2, str);
    }

    @Override
    public void sendLossNotification(Map<String, Object> map) {
        this.a.sendLossNotification(map);
    }

    @Override
    public void sendWinNotification(int i) {
        this.a.sendWinNotification(i);
    }

    @Override
    public void sendWinNotification(Map<String, Object> map) {
        this.a.sendWinNotification(map);
    }

    @Override
    public void setBidECPM(int i) {
        this.a.setBidECPM(i);
    }

    @Override
    public void setDownloadConfirmListener(DownloadConfirmListener downloadConfirmListener) {
        this.d = downloadConfirmListener;
        NativeUnifiedADData nativeUnifiedADData = this.a;
        if (nativeUnifiedADData != null) {
            nativeUnifiedADData.setDownloadConfirmListener(this);
        }
    }

    @Override
    public void setNativeAdEventListener(NativeADEventListener nativeADEventListener) {
        this.b = nativeADEventListener;
    }

    @Override
    public void setNegativeFeedbackListener(NegativeFeedbackListener negativeFeedbackListener) {
        this.e = negativeFeedbackListener;
    }

    @Override
    public void setVideoMute(boolean z) {
        this.a.setVideoMute(z);
    }

    @Override
    public void startVideo() {
        this.a.startVideo();
    }

    @Override
    public void stopVideo() {
        this.a.stopVideo();
    }
}
