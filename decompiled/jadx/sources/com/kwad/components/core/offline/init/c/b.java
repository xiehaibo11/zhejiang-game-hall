package com.kwad.components.core.offline.init.c;

import android.content.Context;
import com.kwad.components.core.video.DetailVideoView;
import com.kwad.components.offline.api.core.video.BaseKsMediaPlayerView;
import com.kwad.components.offline.api.core.video.IKsMediaPlayer;
import com.kwad.components.offline.api.core.video.IKsMediaPlayerView;
import com.kwad.sdk.utils.ao;

/* JADX INFO: loaded from: classes2.dex */
final class b extends BaseKsMediaPlayerView {
    private DetailVideoView LZ;

    public b(Context context) {
        super(context);
    }

    public final b a(DetailVideoView detailVideoView) {
        ao.checkNotNull(detailVideoView);
        addView(detailVideoView);
        this.LZ = detailVideoView;
        return this;
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayerView
    public final void adaptVideoSize(int i, int i2) {
        this.LZ.adaptVideoSize(i, i2);
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayerView
    public final void fixWidth(boolean z) {
        this.LZ.fixWidth(z);
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayerView
    public final int getTextureViewGravity() {
        return this.LZ.getTextureViewGravity();
    }

    public final DetailVideoView oq() {
        return this.LZ;
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayerView
    public final void setAd(boolean z) {
        this.LZ.setAd(z);
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayerView
    public final void setClickListener(final IKsMediaPlayerView.VideoViewClickListener videoViewClickListener) {
        this.LZ.setClickListener(videoViewClickListener == null ? null : new DetailVideoView.a() { // from class: com.kwad.components.core.offline.init.c.b.1
            @Override // com.kwad.components.core.video.DetailVideoView.a
            public final void onClickRootView() {
                videoViewClickListener.onClickRootView();
            }

            @Override // com.kwad.components.core.video.DetailVideoView.a
            public final void onClickVideoView() {
                videoViewClickListener.onClickVideoView();
            }
        });
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayerView
    public final void setForce(boolean z) {
        this.LZ.setForce(z);
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayerView
    public final void setHorizontalVideo(boolean z) {
        this.LZ.setHorizontalVideo(z);
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayerView
    public final void setMediaPlayer(IKsMediaPlayer iKsMediaPlayer) {
        if (!(iKsMediaPlayer instanceof a)) {
            throw new IllegalArgumentException("mediaPlayer not instanceof KsMediaPlayer");
        }
        this.LZ.setMediaPlayer(((a) iKsMediaPlayer).oo());
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayerView
    public final void setRadius(float f) {
        this.LZ.setRadius(f);
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayerView
    public final void updateTextureViewGravity(int i) {
        this.LZ.updateTextureViewGravity(i);
    }
}
