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

final class c implements IMediaPlayer {
    private com.kwad.sdk.core.video.a.c Mc;

    c() {
    }

    public final c b(com.kwad.sdk.core.video.a.c cVar) {
        ao.checkNotNull(cVar);
        this.Mc = cVar;
        return this;
    }

    @Override
    public final int getAudioSessionId() {
        return this.Mc.getAudioSessionId();
    }

    @Override
    public final String getCurrentPlayingUrl() {
        return this.Mc.getCurrentPlayingUrl();
    }

    @Override
    public final long getCurrentPosition() {
        return this.Mc.getCurrentPosition();
    }

    @Override
    public final String getDataSource() {
        return this.Mc.getDataSource();
    }

    @Override
    public final long getDuration() {
        return this.Mc.getDuration();
    }

    @Override
    public final int getMediaPlayerType() {
        return this.Mc.getMediaPlayerType();
    }

    @Override
    public final int getVideoHeight() {
        return this.Mc.getVideoHeight();
    }

    @Override
    public final int getVideoWidth() {
        return this.Mc.getVideoWidth();
    }

    @Override
    public final boolean isLooping() {
        return this.Mc.isLooping();
    }

    @Override
    public final boolean isPlaying() {
        return this.Mc.isPlaying();
    }

    public final com.kwad.sdk.core.video.a.c or() {
        return this.Mc;
    }

    @Override
    public final void pause() {
        this.Mc.pause();
    }

    @Override
    public final boolean prepareAsync() {
        return this.Mc.prepareAsync();
    }

    @Override
    public final void release() {
        this.Mc.release();
    }

    @Override
    public final void reset() {
        this.Mc.reset();
    }

    @Override
    public final void seekTo(long j) {
        this.Mc.seekTo(j);
    }

    @Override
    public final void setAudioStreamType(int i) {
        this.Mc.setAudioStreamType(i);
    }

    @Override
    public final void setDataSource(Context context, Uri uri) {
        this.Mc.setDataSource(context, uri);
    }

    @Override
    public final void setDataSource(Context context, Uri uri, Map<String, String> map) {
        this.Mc.setDataSource(context, uri, map);
    }

    @Override
    public final void setDataSource(PlayVideoInfo playVideoInfo) {
        this.Mc.a(d.a(playVideoInfo));
    }

    @Override
    public final void setDataSource(FileDescriptor fileDescriptor) {
        this.Mc.setDataSource(fileDescriptor);
    }

    @Override
    public final void setDataSource(String str) {
        this.Mc.setDataSource(str);
    }

    @Override
    public final void setDisplay(SurfaceHolder surfaceHolder) {
        this.Mc.setDisplay(surfaceHolder);
    }

    @Override
    public final void setLooping(boolean z) {
        this.Mc.setLooping(z);
    }

    @Override
    public final void setOnBufferingUpdateListener(IMediaPlayer.OnBufferingUpdateListener onBufferingUpdateListener) {
        this.Mc.a(d.a(this, onBufferingUpdateListener));
    }

    @Override
    public final void setOnCompletionListener(IMediaPlayer.OnCompletionListener onCompletionListener) {
        this.Mc.a(d.a(this, onCompletionListener));
    }

    @Override
    public final void setOnErrorListener(IMediaPlayer.OnErrorListener onErrorListener) {
        this.Mc.a(d.a(this, onErrorListener));
    }

    @Override
    public final void setOnInfoListener(IMediaPlayer.OnInfoListener onInfoListener) {
        this.Mc.c(d.a(this, onInfoListener));
    }

    @Override
    public final void setOnPreparedListener(IMediaPlayer.OnPreparedListener onPreparedListener) {
        this.Mc.b(d.a(this, onPreparedListener));
    }

    @Override
    public final void setOnSeekCompleteListener(IMediaPlayer.OnSeekCompleteListener onSeekCompleteListener) {
        this.Mc.a(d.a(this, onSeekCompleteListener));
    }

    @Override
    public final void setOnTimedTextListener(IMediaPlayer.OnTimedTextListener onTimedTextListener) {
        this.Mc.a(d.a(this, onTimedTextListener));
    }

    @Override
    public final void setOnVideoSizeChangedListener(IMediaPlayer.OnVideoSizeChangedListener onVideoSizeChangedListener) {
        this.Mc.a(d.a(this, onVideoSizeChangedListener));
    }

    @Override
    public final void setScreenOnWhilePlaying(boolean z) {
        this.Mc.setScreenOnWhilePlaying(z);
    }

    @Override
    public final void setSpeed(float f) {
        this.Mc.setSpeed(f);
    }

    @Override
    public final void setSurface(Surface surface) {
        this.Mc.setSurface(surface);
    }

    @Override
    public final void setVolume(float f, float f2) {
        this.Mc.setVolume(f, f2);
    }

    @Override
    public final void start() {
        this.Mc.start();
    }

    @Override
    public final void stop() {
        this.Mc.stop();
    }
}
