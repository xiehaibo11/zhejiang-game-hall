package com.bykv.vk.openvk;

import com.bykv.vk.openvk.common.CommonListener;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public interface TTVfNative {

    public interface BnVfListener extends CommonListener {
        void onBnVbLoad(TTBnObject tTBnObject);

        @Override // com.bykv.vk.openvk.common.CommonListener
        void onError(int i, String str);
    }

    public interface CSJSplashAdListener {
        void onSplashLoadFail(CSJAdError cSJAdError);

        void onSplashLoadSuccess();

        void onSplashRenderFail(CSJSplashAd cSJSplashAd, CSJAdError cSJAdError);

        void onSplashRenderSuccess(CSJSplashAd cSJSplashAd);
    }

    public interface DrawVfListListener extends CommonListener {
        void onDrawFeedAdLoad(List<TTDrawVfObject> list);

        @Override // com.bykv.vk.openvk.common.CommonListener
        void onError(int i, String str);
    }

    public interface FullScreenVideoAdListener extends CommonListener {
        @Override // com.bykv.vk.openvk.common.CommonListener
        void onError(int i, String str);

        @Deprecated
        void onFullVideoCached();

        void onFullVideoCached(TTFullVideoObject tTFullVideoObject);

        void onFullVideoVsLoad(TTFullVideoObject tTFullVideoObject);
    }

    public interface InteractionViListener extends CommonListener {
        @Override // com.bykv.vk.openvk.common.CommonListener
        void onError(int i, String str);

        void onInteractionViLoad(TTInteractionVi tTInteractionVi);
    }

    public interface NtExpressVfListener extends CommonListener {
        @Override // com.bykv.vk.openvk.common.CommonListener
        void onError(int i, String str);

        void onNtExpressVnLoad(List<TTNtExpressObject> list);
    }

    public interface NtVfListener extends CommonListener {
        void onDrawVfLoad(List<TTNtObject> list);

        @Override // com.bykv.vk.openvk.common.CommonListener
        void onError(int i, String str);
    }

    public interface RdVideoVfListener extends CommonListener {
        @Override // com.bykv.vk.openvk.common.CommonListener
        void onError(int i, String str);

        @Deprecated
        void onRdVideoCached();

        void onRdVideoCached(TTRdVideoObject tTRdVideoObject);

        void onRdVideoVrLoad(TTRdVideoObject tTRdVideoObject);
    }

    public interface SphVfListener extends CommonListener {
        @Override // com.bykv.vk.openvk.common.CommonListener
        void onError(int i, String str);

        void onSphVsLoad(TTSphObject tTSphObject);

        void onTimeout();
    }

    public interface VfListListener extends CommonListener {
        @Override // com.bykv.vk.openvk.common.CommonListener
        void onError(int i, String str);

        void onVfListLoad(List<TTVfObject> list);
    }

    void loadBnExpressVb(VfSlot vfSlot, NtExpressVfListener ntExpressVfListener);

    void loadDrawVfList(VfSlot vfSlot, DrawVfListListener drawVfListListener);

    void loadExpressDrawVf(VfSlot vfSlot, NtExpressVfListener ntExpressVfListener);

    void loadFullVideoVs(VfSlot vfSlot, FullScreenVideoAdListener fullScreenVideoAdListener);

    @Deprecated
    void loadItExpressVi(VfSlot vfSlot, NtExpressVfListener ntExpressVfListener);

    void loadNativeVn(VfSlot vfSlot, NtVfListener ntVfListener);

    void loadNtExpressVn(VfSlot vfSlot, NtExpressVfListener ntExpressVfListener);

    void loadRdVideoVr(VfSlot vfSlot, RdVideoVfListener rdVideoVfListener);

    void loadSphVs(VfSlot vfSlot, CSJSplashAdListener cSJSplashAdListener, int i);

    @Deprecated
    void loadSphVs(VfSlot vfSlot, SphVfListener sphVfListener);

    @Deprecated
    void loadSphVs(VfSlot vfSlot, SphVfListener sphVfListener, int i);

    void loadStream(VfSlot vfSlot, VfListListener vfListListener);

    void loadVfList(VfSlot vfSlot, VfListListener vfListListener);
}
