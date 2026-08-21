package com.kwad.components.core.offline.init.c;

import android.content.Context;
import android.net.Uri;
import android.view.Surface;
import android.view.SurfaceHolder;
import com.kwad.components.offline.api.core.video.IMediaPlayer;
import com.kwad.components.offline.api.core.video.mdoel.PlayVideoInfo;
import com.kwad.sdk.utils.ao;
import java.io.FileDescriptor;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
final class c implements IMediaPlayer {
    private com.kwad.sdk.core.video.a.c Mc;

    c() {
    }

    public final c b(com.kwad.sdk.core.video.a.c cVar) {
        ao.checkNotNull(cVar);
        this.Mc = cVar;
        return this;
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final int getAudioSessionId() {
        return this.Mc.getAudioSessionId();
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final String getCurrentPlayingUrl() {
        return this.Mc.getCurrentPlayingUrl();
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final long getCurrentPosition() {
        return this.Mc.getCurrentPosition();
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final String getDataSource() {
        return this.Mc.getDataSource();
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final long getDuration() {
        return this.Mc.getDuration();
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final int getMediaPlayerType() {
        return this.Mc.getMediaPlayerType();
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final int getVideoHeight() {
        return this.Mc.getVideoHeight();
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final int getVideoWidth() {
        return this.Mc.getVideoWidth();
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final boolean isLooping() {
        return this.Mc.isLooping();
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final boolean isPlaying() {
        return this.Mc.isPlaying();
    }

    public final com.kwad.sdk.core.video.a.c or() {
        return this.Mc;
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final void pause() {
        this.Mc.pause();
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final boolean prepareAsync() {
        return this.Mc.prepareAsync();
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final void release() {
        this.Mc.release();
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final void reset() {
        this.Mc.reset();
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final void seekTo(long j) {
        this.Mc.seekTo(j);
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final void setAudioStreamType(int i) {
        this.Mc.setAudioStreamType(i);
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final void setDataSource(Context context, Uri uri) {
        this.Mc.setDataSource(context, uri);
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final void setDataSource(Context context, Uri uri, Map<String, String> map) {
        this.Mc.setDataSource(context, uri, map);
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final void setDataSource(PlayVideoInfo playVideoInfo) {
        this.Mc.a(d.a(playVideoInfo));
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final void setDataSource(FileDescriptor fileDescriptor) {
        this.Mc.setDataSource(fileDescriptor);
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final void setDataSource(String str) {
        this.Mc.setDataSource(str);
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final void setDisplay(SurfaceHolder surfaceHolder) {
        this.Mc.setDisplay(surfaceHolder);
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final void setLooping(boolean z) {
        this.Mc.setLooping(z);
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final void setOnBufferingUpdateListener(IMediaPlayer.OnBufferingUpdateListener onBufferingUpdateListener) {
        this.Mc.a(d.a(this, onBufferingUpdateListener));
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final void setOnCompletionListener(IMediaPlayer.OnCompletionListener onCompletionListener) {
        this.Mc.a(d.a(this, onCompletionListener));
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final void setOnErrorListener(IMediaPlayer.OnErrorListener onErrorListener) {
        this.Mc.a(d.a(this, onErrorListener));
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final void setOnInfoListener(IMediaPlayer.OnInfoListener onInfoListener) {
        this.Mc.c(d.a(this, onInfoListener));
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final void setOnPreparedListener(IMediaPlayer.OnPreparedListener onPreparedListener) {
        this.Mc.b(d.a(this, onPreparedListener));
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final void setOnSeekCompleteListener(IMediaPlayer.OnSeekCompleteListener onSeekCompleteListener) {
        this.Mc.a(d.a(this, onSeekCompleteListener));
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final void setOnTimedTextListener(IMediaPlayer.OnTimedTextListener onTimedTextListener) {
        this.Mc.a(d.a(this, onTimedTextListener));
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final void setOnVideoSizeChangedListener(IMediaPlayer.OnVideoSizeChangedListener onVideoSizeChangedListener) {
        this.Mc.a(d.a(this, onVideoSizeChangedListener));
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final void setScreenOnWhilePlaying(boolean z) {
        this.Mc.setScreenOnWhilePlaying(z);
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final void setSpeed(float f) {
        this.Mc.setSpeed(f);
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final void setSurface(Surface surface) {
        this.Mc.setSurface(surface);
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final void setVolume(float f, float f2) {
        this.Mc.setVolume(f, f2);
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final void start() {
        this.Mc.start();
    }

    @Override // com.kwad.components.offline.api.core.video.IMediaPlayer
    public final void stop() {
        this.Mc.stop();
    }
}
