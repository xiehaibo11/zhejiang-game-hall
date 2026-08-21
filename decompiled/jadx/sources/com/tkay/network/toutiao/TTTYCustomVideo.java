package com.tkay.network.toutiao;

import com.bykv.vk.openvk.TTVfObject;
import com.tkay.core.api.TYCustomVideo;

/* JADX INFO: loaded from: classes3.dex */
public class TTTYCustomVideo implements TYCustomVideo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    TTVfObject.CustomizeVideo f7731a;

    public TTTYCustomVideo(TTVfObject.CustomizeVideo customizeVideo) {
        this.f7731a = customizeVideo;
    }

    @Override // com.tkay.core.api.TYCustomVideo
    public String getVideoUrl() {
        TTVfObject.CustomizeVideo customizeVideo = this.f7731a;
        if (customizeVideo != null) {
            return customizeVideo.getVideoUrl();
        }
        return null;
    }

    @Override // com.tkay.core.api.TYCustomVideo
    public void reportVideoStart() {
        TTVfObject.CustomizeVideo customizeVideo = this.f7731a;
        if (customizeVideo != null) {
            customizeVideo.reportVideoStart();
        }
    }

    @Override // com.tkay.core.api.TYCustomVideo
    public void reportVideoPause(long j) {
        TTVfObject.CustomizeVideo customizeVideo = this.f7731a;
        if (customizeVideo != null) {
            customizeVideo.reportVideoPause(j);
        }
    }

    @Override // com.tkay.core.api.TYCustomVideo
    public void reportVideoContinue(long j) {
        TTVfObject.CustomizeVideo customizeVideo = this.f7731a;
        if (customizeVideo != null) {
            customizeVideo.reportVideoContinue(j);
        }
    }

    @Override // com.tkay.core.api.TYCustomVideo
    public void reportVideoFinish() {
        TTVfObject.CustomizeVideo customizeVideo = this.f7731a;
        if (customizeVideo != null) {
            customizeVideo.reportVideoFinish();
        }
    }

    @Override // com.tkay.core.api.TYCustomVideo
    public void reportVideoBreak(long j) {
        TTVfObject.CustomizeVideo customizeVideo = this.f7731a;
        if (customizeVideo != null) {
            customizeVideo.reportVideoBreak(j);
        }
    }

    @Override // com.tkay.core.api.TYCustomVideo
    public void reportVideoAutoStart() {
        TTVfObject.CustomizeVideo customizeVideo = this.f7731a;
        if (customizeVideo != null) {
            customizeVideo.reportVideoAutoStart();
        }
    }

    @Override // com.tkay.core.api.TYCustomVideo
    public void reportVideoStartError(int i, int i2) {
        TTVfObject.CustomizeVideo customizeVideo = this.f7731a;
        if (customizeVideo != null) {
            customizeVideo.reportVideoStartError(i, i2);
        }
    }

    @Override // com.tkay.core.api.TYCustomVideo
    public void reportVideoError(long j, int i, int i2) {
        TTVfObject.CustomizeVideo customizeVideo = this.f7731a;
        if (customizeVideo != null) {
            customizeVideo.reportVideoError(j, i, i2);
        }
    }
}
