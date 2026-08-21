package com.mbridge.msdk.playercommon;

public class DefaultVideoPlayerStatusListener implements com.mbridge.msdk.playercommon.VideoPlayerStatusListener {
    protected static final java.lang.String TAG = "DefaultVideoPlayerStatusListener";

    public DefaultVideoPlayerStatusListener() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onBufferingEnd() {
            r2 = this;
            java.lang.String r0 = "DefaultVideoPlayerStatusListener"
            java.lang.String r1 = "OnBufferingEnd"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            return
    }

    @Override
    public void onBufferingStart(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "OnBufferingStart:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "DefaultVideoPlayerStatusListener"
            com.mbridge.msdk.foundation.tools.z.a(r0, r3)
            return
    }

    @Override
    public void onPlayCompleted() {
            r2 = this;
            java.lang.String r0 = "DefaultVideoPlayerStatusListener"
            java.lang.String r1 = "onPlayCompleted"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            return
    }

    @Override
    public void onPlayError(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onPlayError:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "DefaultVideoPlayerStatusListener"
            com.mbridge.msdk.foundation.tools.z.a(r0, r3)
            return
    }

    @Override
    public void onPlayProgress(int r3, int r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onPlayProgress:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = ",allDuration:"
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            java.lang.String r4 = "DefaultVideoPlayerStatusListener"
            com.mbridge.msdk.foundation.tools.z.a(r4, r3)
            return
    }

    @Override
    public void onPlayProgressMS(int r1, int r2) {
            r0 = this;
            java.lang.String r1 = "DefaultVideoPlayerStatusListener"
            java.lang.String r2 = "onPlayProgressMS:"
            com.mbridge.msdk.foundation.tools.z.a(r1, r2)
            return
    }

    @Override
    public void onPlaySetDataSourceError(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onPlaySetDataSourceError:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "DefaultVideoPlayerStatusListener"
            com.mbridge.msdk.foundation.tools.z.a(r0, r3)
            return
    }

    @Override
    public void onPlayStarted(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onPlayStarted:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "DefaultVideoPlayerStatusListener"
            com.mbridge.msdk.foundation.tools.z.a(r0, r3)
            return
    }
}
