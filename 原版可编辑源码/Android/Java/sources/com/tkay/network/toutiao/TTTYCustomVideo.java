package com.tkay.network.toutiao;

import com.bykv.vk.openvk.TTVfObject;
import com.tkay.core.api.TYCustomVideo;

public class TTTYCustomVideo implements TYCustomVideo {
    TTVfObject.CustomizeVideo a;

    public TTTYCustomVideo(TTVfObject.CustomizeVideo customizeVideo) {
        this.a = customizeVideo;
    }

    @Override
    public String getVideoUrl() {
        TTVfObject.CustomizeVideo customizeVideo = this.a;
        if (customizeVideo != null) {
            return customizeVideo.getVideoUrl();
        }
        return null;
    }

    @Override
    public void reportVideoStart() {
        TTVfObject.CustomizeVideo customizeVideo = this.a;
        if (customizeVideo != null) {
            customizeVideo.reportVideoStart();
        }
    }

    @Override
    public void reportVideoPause(long j) {
        TTVfObject.CustomizeVideo customizeVideo = this.a;
        if (customizeVideo != null) {
            customizeVideo.reportVideoPause(j);
        }
    }

    @Override
    public void reportVideoContinue(long j) {
        TTVfObject.CustomizeVideo customizeVideo = this.a;
        if (customizeVideo != null) {
            customizeVideo.reportVideoContinue(j);
        }
    }

    @Override
    public void reportVideoFinish() {
        TTVfObject.CustomizeVideo customizeVideo = this.a;
        if (customizeVideo != null) {
            customizeVideo.reportVideoFinish();
        }
    }

    @Override
    public void reportVideoBreak(long j) {
        TTVfObject.CustomizeVideo customizeVideo = this.a;
        if (customizeVideo != null) {
            customizeVideo.reportVideoBreak(j);
        }
    }

    @Override
    public void reportVideoAutoStart() {
        TTVfObject.CustomizeVideo customizeVideo = this.a;
        if (customizeVideo != null) {
            customizeVideo.reportVideoAutoStart();
        }
    }

    @Override
    public void reportVideoStartError(int i, int i2) {
        TTVfObject.CustomizeVideo customizeVideo = this.a;
        if (customizeVideo != null) {
            customizeVideo.reportVideoStartError(i, i2);
        }
    }

    @Override
    public void reportVideoError(long j, int i, int i2) {
        TTVfObject.CustomizeVideo customizeVideo = this.a;
        if (customizeVideo != null) {
            customizeVideo.reportVideoError(j, i, i2);
        }
    }
}
