package com.qq.e.ads.nativ;

public abstract class NativeExpressADView extends android.widget.FrameLayout implements com.qq.e.comm.compliance.DownloadConfirmListener, com.qq.e.comm.pi.LADI, com.qq.e.comm.pi.NFBI {

    public interface ViewBindStatusListener {
        void onAttachedToWindow();

        void onDetachedFromWindow();

        void onFinishTemporaryDetach();

        void onStartTemporaryDetach();
    }

    public NativeExpressADView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public abstract void destroy();

    public abstract com.qq.e.comm.pi.AdData getBoundData();

    public abstract void negativeFeedback();

    public abstract void preloadVideo();

    public abstract void render();

    @java.lang.Deprecated
    public abstract void setAdSize(com.qq.e.ads.nativ.ADSize r1);

    public abstract void setMediaListener(com.qq.e.ads.nativ.NativeExpressMediaListener r1);

    public abstract void setViewBindStatusListener(com.qq.e.ads.nativ.NativeExpressADView.ViewBindStatusListener r1);
}
