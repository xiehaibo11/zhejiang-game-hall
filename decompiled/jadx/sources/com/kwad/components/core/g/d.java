package com.kwad.components.core.g;

import android.content.Context;
import android.widget.FrameLayout;
import android.widget.ImageView;
import com.kwad.components.offline.api.core.imageplayer.IImagePlayer;
import com.kwad.components.offline.api.core.video.listener.OfflineMediaPlayStateListener;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public final class d implements IImagePlayer {
    private c KE = new c();

    @Override // com.kwad.components.offline.api.core.imageplayer.IImagePlayer
    public final void destroy() {
        this.KE.destroy();
    }

    @Override // com.kwad.components.offline.api.core.imageplayer.IImagePlayer
    public final FrameLayout getImagePlayerView(Context context) {
        return this.KE.getImagePlayerView(context);
    }

    @Override // com.kwad.components.offline.api.core.imageplayer.IImagePlayer
    public final void pause() {
        this.KE.pause();
    }

    @Override // com.kwad.components.offline.api.core.imageplayer.IImagePlayer
    public final void play() {
        this.KE.play();
    }

    @Override // com.kwad.components.offline.api.core.imageplayer.IImagePlayer
    public final void prepareToPlay() {
    }

    @Override // com.kwad.components.offline.api.core.imageplayer.IImagePlayer
    public final void registerMediaPlayStateListener(OfflineMediaPlayStateListener offlineMediaPlayStateListener) {
        this.KE.c(com.kwad.components.core.offline.init.c.d.a(offlineMediaPlayStateListener));
    }

    @Override // com.kwad.components.offline.api.core.imageplayer.IImagePlayer
    public final void resume() {
        this.KE.resume();
    }

    @Override // com.kwad.components.offline.api.core.imageplayer.IImagePlayer
    public final void setDuration(long j) {
        this.KE.v(j * 1000);
    }

    @Override // com.kwad.components.offline.api.core.imageplayer.IImagePlayer
    public final void setEnableCache(boolean z) {
    }

    @Override // com.kwad.components.offline.api.core.imageplayer.IImagePlayer
    public final void setHorizontalGravity(int i) {
        this.KE.setHorizontalGravity(i);
    }

    @Override // com.kwad.components.offline.api.core.imageplayer.IImagePlayer
    public final void setImageResize(int i) {
        c cVar;
        ImageView.ScaleType scaleType;
        if (i == 0) {
            cVar = this.KE;
            scaleType = ImageView.ScaleType.FIT_CENTER;
        } else if (i == 1) {
            cVar = this.KE;
            scaleType = ImageView.ScaleType.CENTER_CROP;
        } else {
            if (i != 2) {
                if (i != 3) {
                    return;
                }
                this.KE.setImageScaleType(ImageView.ScaleType.CENTER);
                return;
            }
            cVar = this.KE;
            scaleType = ImageView.ScaleType.FIT_XY;
        }
        cVar.setImageScaleType(scaleType);
    }

    @Override // com.kwad.components.offline.api.core.imageplayer.IImagePlayer
    public final void setRadius(float f, float f2, float f3, float f4) {
        this.KE.setRadius(f, f2, f3, f4);
    }

    @Override // com.kwad.components.offline.api.core.imageplayer.IImagePlayer
    public final void setURLs(List<String> list) {
        this.KE.setURLs(list);
    }

    @Override // com.kwad.components.offline.api.core.imageplayer.IImagePlayer
    public final void setVerticalGravity(int i) {
        this.KE.setVerticalGravity(i);
    }

    @Override // com.kwad.components.offline.api.core.imageplayer.IImagePlayer
    public final void stop() {
        this.KE.stop();
    }

    @Override // com.kwad.components.offline.api.core.imageplayer.IImagePlayer
    public final void unregisterMediaPlayStateListener(OfflineMediaPlayStateListener offlineMediaPlayStateListener) {
        this.KE.d(com.kwad.components.core.offline.init.c.d.a(offlineMediaPlayStateListener));
    }
}
