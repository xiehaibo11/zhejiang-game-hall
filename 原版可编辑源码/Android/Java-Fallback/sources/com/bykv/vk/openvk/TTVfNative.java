package com.bykv.vk.openvk;

public interface TTVfNative {

    public interface BnVfListener extends com.bykv.vk.openvk.common.CommonListener {
        void onBnVbLoad(com.bykv.vk.openvk.TTBnObject r1);

        @Override
        void onError(int r1, java.lang.String r2);
    }

    public interface CSJSplashAdListener {
        void onSplashLoadFail(com.bykv.vk.openvk.CSJAdError r1);

        void onSplashLoadSuccess();

        void onSplashRenderFail(com.bykv.vk.openvk.CSJSplashAd r1, com.bykv.vk.openvk.CSJAdError r2);

        void onSplashRenderSuccess(com.bykv.vk.openvk.CSJSplashAd r1);
    }

    public interface DrawVfListListener extends com.bykv.vk.openvk.common.CommonListener {
        void onDrawFeedAdLoad(java.util.List<com.bykv.vk.openvk.TTDrawVfObject> r1);

        @Override
        void onError(int r1, java.lang.String r2);
    }

    public interface FullScreenVideoAdListener extends com.bykv.vk.openvk.common.CommonListener {
        @Override
        void onError(int r1, java.lang.String r2);

        @java.lang.Deprecated
        void onFullVideoCached();

        void onFullVideoCached(com.bykv.vk.openvk.TTFullVideoObject r1);

        void onFullVideoVsLoad(com.bykv.vk.openvk.TTFullVideoObject r1);
    }

    public interface InteractionViListener extends com.bykv.vk.openvk.common.CommonListener {
        @Override
        void onError(int r1, java.lang.String r2);

        void onInteractionViLoad(com.bykv.vk.openvk.TTInteractionVi r1);
    }

    public interface NtExpressVfListener extends com.bykv.vk.openvk.common.CommonListener {
        @Override
        void onError(int r1, java.lang.String r2);

        void onNtExpressVnLoad(java.util.List<com.bykv.vk.openvk.TTNtExpressObject> r1);
    }

    public interface NtVfListener extends com.bykv.vk.openvk.common.CommonListener {
        void onDrawVfLoad(java.util.List<com.bykv.vk.openvk.TTNtObject> r1);

        @Override
        void onError(int r1, java.lang.String r2);
    }

    public interface RdVideoVfListener extends com.bykv.vk.openvk.common.CommonListener {
        @Override
        void onError(int r1, java.lang.String r2);

        @java.lang.Deprecated
        void onRdVideoCached();

        void onRdVideoCached(com.bykv.vk.openvk.TTRdVideoObject r1);

        void onRdVideoVrLoad(com.bykv.vk.openvk.TTRdVideoObject r1);
    }

    public interface SphVfListener extends com.bykv.vk.openvk.common.CommonListener {
        @Override
        void onError(int r1, java.lang.String r2);

        void onSphVsLoad(com.bykv.vk.openvk.TTSphObject r1);

        void onTimeout();
    }

    public interface VfListListener extends com.bykv.vk.openvk.common.CommonListener {
        @Override
        void onError(int r1, java.lang.String r2);

        void onVfListLoad(java.util.List<com.bykv.vk.openvk.TTVfObject> r1);
    }

    void loadBnExpressVb(com.bykv.vk.openvk.VfSlot r1, com.bykv.vk.openvk.TTVfNative.NtExpressVfListener r2);

    void loadDrawVfList(com.bykv.vk.openvk.VfSlot r1, com.bykv.vk.openvk.TTVfNative.DrawVfListListener r2);

    void loadExpressDrawVf(com.bykv.vk.openvk.VfSlot r1, com.bykv.vk.openvk.TTVfNative.NtExpressVfListener r2);

    void loadFullVideoVs(com.bykv.vk.openvk.VfSlot r1, com.bykv.vk.openvk.TTVfNative.FullScreenVideoAdListener r2);

    @java.lang.Deprecated
    void loadItExpressVi(com.bykv.vk.openvk.VfSlot r1, com.bykv.vk.openvk.TTVfNative.NtExpressVfListener r2);

    void loadNativeVn(com.bykv.vk.openvk.VfSlot r1, com.bykv.vk.openvk.TTVfNative.NtVfListener r2);

    void loadNtExpressVn(com.bykv.vk.openvk.VfSlot r1, com.bykv.vk.openvk.TTVfNative.NtExpressVfListener r2);

    void loadRdVideoVr(com.bykv.vk.openvk.VfSlot r1, com.bykv.vk.openvk.TTVfNative.RdVideoVfListener r2);

    void loadSphVs(com.bykv.vk.openvk.VfSlot r1, com.bykv.vk.openvk.TTVfNative.CSJSplashAdListener r2, int r3);

    @java.lang.Deprecated
    void loadSphVs(com.bykv.vk.openvk.VfSlot r1, com.bykv.vk.openvk.TTVfNative.SphVfListener r2);

    @java.lang.Deprecated
    void loadSphVs(com.bykv.vk.openvk.VfSlot r1, com.bykv.vk.openvk.TTVfNative.SphVfListener r2, int r3);

    void loadStream(com.bykv.vk.openvk.VfSlot r1, com.bykv.vk.openvk.TTVfNative.VfListListener r2);

    void loadVfList(com.bykv.vk.openvk.VfSlot r1, com.bykv.vk.openvk.TTVfNative.VfListListener r2);
}
