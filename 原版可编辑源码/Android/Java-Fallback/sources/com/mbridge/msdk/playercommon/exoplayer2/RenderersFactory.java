package com.mbridge.msdk.playercommon.exoplayer2;

public interface RenderersFactory {
    com.mbridge.msdk.playercommon.exoplayer2.Renderer[] createRenderers(android.os.Handler r1, com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener r2, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener r3, com.mbridge.msdk.playercommon.exoplayer2.text.TextOutput r4, com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataOutput r5, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r6);
}
