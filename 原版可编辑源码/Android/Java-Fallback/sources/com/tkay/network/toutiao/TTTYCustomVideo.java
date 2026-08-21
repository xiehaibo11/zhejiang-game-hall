package com.tkay.network.toutiao;

public class TTTYCustomVideo implements com.tkay.core.api.TYCustomVideo {
    com.bykv.vk.openvk.TTVfObject.CustomizeVideo a;

    public TTTYCustomVideo(com.bykv.vk.openvk.TTVfObject.CustomizeVideo r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    @Override
    public java.lang.String getVideoUrl() {
            r1 = this;
            com.bykv.vk.openvk.TTVfObject$CustomizeVideo r0 = r1.a
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getVideoUrl()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public void reportVideoAutoStart() {
            r1 = this;
            com.bykv.vk.openvk.TTVfObject$CustomizeVideo r0 = r1.a
            if (r0 == 0) goto L7
            r0.reportVideoAutoStart()
        L7:
            return
    }

    @Override
    public void reportVideoBreak(long r2) {
            r1 = this;
            com.bykv.vk.openvk.TTVfObject$CustomizeVideo r0 = r1.a
            if (r0 == 0) goto L7
            r0.reportVideoBreak(r2)
        L7:
            return
    }

    @Override
    public void reportVideoContinue(long r2) {
            r1 = this;
            com.bykv.vk.openvk.TTVfObject$CustomizeVideo r0 = r1.a
            if (r0 == 0) goto L7
            r0.reportVideoContinue(r2)
        L7:
            return
    }

    @Override
    public void reportVideoError(long r2, int r4, int r5) {
            r1 = this;
            com.bykv.vk.openvk.TTVfObject$CustomizeVideo r0 = r1.a
            if (r0 == 0) goto L7
            r0.reportVideoError(r2, r4, r5)
        L7:
            return
    }

    @Override
    public void reportVideoFinish() {
            r1 = this;
            com.bykv.vk.openvk.TTVfObject$CustomizeVideo r0 = r1.a
            if (r0 == 0) goto L7
            r0.reportVideoFinish()
        L7:
            return
    }

    @Override
    public void reportVideoPause(long r2) {
            r1 = this;
            com.bykv.vk.openvk.TTVfObject$CustomizeVideo r0 = r1.a
            if (r0 == 0) goto L7
            r0.reportVideoPause(r2)
        L7:
            return
    }

    @Override
    public void reportVideoStart() {
            r1 = this;
            com.bykv.vk.openvk.TTVfObject$CustomizeVideo r0 = r1.a
            if (r0 == 0) goto L7
            r0.reportVideoStart()
        L7:
            return
    }

    @Override
    public void reportVideoStartError(int r2, int r3) {
            r1 = this;
            com.bykv.vk.openvk.TTVfObject$CustomizeVideo r0 = r1.a
            if (r0 == 0) goto L7
            r0.reportVideoStartError(r2, r3)
        L7:
            return
    }
}
