package com.mbridge.msdk.out;

public class NativeListener {

    public interface FilpListener {
        void filpEvent(int r1);
    }

    public interface NativeAdListener {
        void onAdClick(com.mbridge.msdk.out.Campaign r1);

        void onAdFramesLoaded(java.util.List<com.mbridge.msdk.out.Frame> r1);

        void onAdLoadError(java.lang.String r1);

        void onAdLoaded(java.util.List<com.mbridge.msdk.out.Campaign> r1, int r2);

        void onLoggingImpression(int r1);
    }

    public interface NativeTrackingListener extends com.mbridge.msdk.out.BaseTrackingListener {
        void onDismissLoading(com.mbridge.msdk.out.Campaign r1);

        void onDownloadFinish(com.mbridge.msdk.out.Campaign r1);

        void onDownloadProgress(int r1);

        void onDownloadStart(com.mbridge.msdk.out.Campaign r1);

        boolean onInterceptDefaultLoadingDialog();

        void onShowLoading(com.mbridge.msdk.out.Campaign r1);
    }

    public static class Template {
        private int adNum;
        private int id;

        public Template(int r1, int r2) {
                r0 = this;
                r0.<init>()
                r0.id = r1
                r0.adNum = r2
                return
        }

        public int getAdNum() {
                r1 = this;
                int r0 = r1.adNum
                return r0
        }

        public int getId() {
                r1 = this;
                int r0 = r1.id
                return r0
        }

        public void setAdNum(int r1) {
                r0 = this;
                r0.adNum = r1
                return
        }

        public void setId(int r1) {
                r0 = this;
                r0.id = r1
                return
        }
    }

    public interface TrackingExListener extends com.mbridge.msdk.out.NativeListener.NativeTrackingListener {
        void onLeaveApp();
    }

    public NativeListener() {
            r0 = this;
            r0.<init>()
            return
    }
}
