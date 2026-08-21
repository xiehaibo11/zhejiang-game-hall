package com.mbridge.msdk.playercommon.exoplayer2;

import android.graphics.SurfaceTexture;
import android.media.PlaybackParams;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import android.view.Surface;
import android.view.SurfaceHolder;
import android.view.SurfaceView;
import android.view.TextureView;
import com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer;
import com.mbridge.msdk.playercommon.exoplayer2.Player;
import com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage;
import com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector;
import com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener;
import com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes;
import com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener;
import com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters;
import com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager;
import com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager;
import com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto;
import com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata;
import com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataOutput;
import com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource;
import com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray;
import com.mbridge.msdk.playercommon.exoplayer2.text.Cue;
import com.mbridge.msdk.playercommon.exoplayer2.text.TextOutput;
import com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray;
import com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector;
import com.mbridge.msdk.playercommon.exoplayer2.util.Clock;
import com.mbridge.msdk.playercommon.exoplayer2.util.Util;
import com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArraySet;
import java.util.concurrent.TimeoutException;

public class SimpleExoPlayer implements ExoPlayer, Player.TextComponent, Player.VideoComponent {
    private static final String TAG = "SimpleExoPlayer";
    private final AnalyticsCollector analyticsCollector;
    private AudioAttributes audioAttributes;
    private final CopyOnWriteArraySet<AudioRendererEventListener> audioDebugListeners;
    private DecoderCounters audioDecoderCounters;
    private Format audioFormat;
    private int audioSessionId;
    private float audioVolume;
    private final ComponentListener componentListener;
    private List<Cue> currentCues;
    private final Handler eventHandler;
    private MediaSource mediaSource;
    private final CopyOnWriteArraySet<MetadataOutput> metadataOutputs;
    private boolean ownsSurface;
    private final ExoPlayer player;
    protected final Renderer[] renderers;
    private Surface surface;
    private SurfaceHolder surfaceHolder;
    private final CopyOnWriteArraySet<TextOutput> textOutputs;
    private TextureView textureView;
    private final CopyOnWriteArraySet<VideoRendererEventListener> videoDebugListeners;
    private DecoderCounters videoDecoderCounters;
    private Format videoFormat;
    private final CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.video.VideoListener> videoListeners;
    private int videoScalingMode;

    public interface VideoListener extends com.mbridge.msdk.playercommon.exoplayer2.video.VideoListener {
    }

    @Override
    public Player.TextComponent getTextComponent() {
        return this;
    }

    @Override
    public Player.VideoComponent getVideoComponent() {
        return this;
    }

    protected SimpleExoPlayer(RenderersFactory renderersFactory, TrackSelector trackSelector, LoadControl loadControl, DrmSessionManager<FrameworkMediaCrypto> drmSessionManager) {
        this(renderersFactory, trackSelector, loadControl, drmSessionManager, new AnalyticsCollector.Factory());
    }

    protected SimpleExoPlayer(RenderersFactory renderersFactory, TrackSelector trackSelector, LoadControl loadControl, DrmSessionManager<FrameworkMediaCrypto> drmSessionManager, AnalyticsCollector.Factory factory) {
        this(renderersFactory, trackSelector, loadControl, drmSessionManager, factory, Clock.DEFAULT);
    }

    protected SimpleExoPlayer(RenderersFactory renderersFactory, TrackSelector trackSelector, LoadControl loadControl, DrmSessionManager<FrameworkMediaCrypto> drmSessionManager, AnalyticsCollector.Factory factory, Clock clock) {
        this.componentListener = new ComponentListener();
        this.videoListeners = new CopyOnWriteArraySet<>();
        this.textOutputs = new CopyOnWriteArraySet<>();
        this.metadataOutputs = new CopyOnWriteArraySet<>();
        this.videoDebugListeners = new CopyOnWriteArraySet<>();
        this.audioDebugListeners = new CopyOnWriteArraySet<>();
        Handler handler = new Handler(Looper.myLooper() != null ? Looper.myLooper() : Looper.getMainLooper());
        this.eventHandler = handler;
        ComponentListener componentListener = this.componentListener;
        this.renderers = renderersFactory.createRenderers(handler, componentListener, componentListener, componentListener, componentListener, drmSessionManager);
        this.audioVolume = 1.0f;
        this.audioSessionId = 0;
        this.audioAttributes = AudioAttributes.DEFAULT;
        this.videoScalingMode = 1;
        this.currentCues = Collections.emptyList();
        ExoPlayer exoPlayerCreateExoPlayerImpl = createExoPlayerImpl(this.renderers, trackSelector, loadControl, clock);
        this.player = exoPlayerCreateExoPlayerImpl;
        AnalyticsCollector analyticsCollectorCreateAnalyticsCollector = factory.createAnalyticsCollector(exoPlayerCreateExoPlayerImpl, clock);
        this.analyticsCollector = analyticsCollectorCreateAnalyticsCollector;
        addListener(analyticsCollectorCreateAnalyticsCollector);
        this.videoDebugListeners.add(this.analyticsCollector);
        this.audioDebugListeners.add(this.analyticsCollector);
        addMetadataOutput(this.analyticsCollector);
        if (drmSessionManager instanceof DefaultDrmSessionManager) {
            ((DefaultDrmSessionManager) drmSessionManager).addListener(this.eventHandler, this.analyticsCollector);
        }
    }

    @Override
    public void setVideoScalingMode(int i) {
        this.videoScalingMode = i;
        for (Renderer renderer : this.renderers) {
            if (renderer.getTrackType() == 2) {
                this.player.createMessage(renderer).setType(4).setPayload(Integer.valueOf(i)).send();
            }
        }
    }

    @Override
    public int getVideoScalingMode() {
        return this.videoScalingMode;
    }

    @Override
    public void clearVideoSurface() {
        setVideoSurface(null);
    }

    @Override
    public void setVideoSurface(Surface surface) {
        removeSurfaceCallbacks();
        setVideoSurfaceInternal(surface, false);
    }

    @Override
    public void clearVideoSurface(Surface surface) {
        if (surface == null || surface != this.surface) {
            return;
        }
        setVideoSurface(null);
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x001a  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void setVideoSurfaceHolder(SurfaceHolder surfaceHolder) {
        Surface surface;
        removeSurfaceCallbacks();
        this.surfaceHolder = surfaceHolder;
        if (surfaceHolder == null) {
            surface = null;
        } else {
            surfaceHolder.addCallback(this.componentListener);
            surface = surfaceHolder.getSurface();
            if (surface == null || !surface.isValid()) {
            }
        }
        setVideoSurfaceInternal(surface, false);
    }

    @Override
    public void clearVideoSurfaceHolder(SurfaceHolder surfaceHolder) {
        if (surfaceHolder == null || surfaceHolder != this.surfaceHolder) {
            return;
        }
        setVideoSurfaceHolder(null);
    }

    @Override
    public void setVideoSurfaceView(SurfaceView surfaceView) {
        setVideoSurfaceHolder(surfaceView == null ? null : surfaceView.getHolder());
    }

    @Override
    public void clearVideoSurfaceView(SurfaceView surfaceView) {
        clearVideoSurfaceHolder(surfaceView == null ? null : surfaceView.getHolder());
    }

    @Override
    public void setVideoTextureView(TextureView textureView) {
        removeSurfaceCallbacks();
        this.textureView = textureView;
        Surface surface = null;
        if (textureView != null) {
            if (textureView.getSurfaceTextureListener() != null) {
                Log.w(TAG, "Replacing existing SurfaceTextureListener.");
            }
            textureView.setSurfaceTextureListener(this.componentListener);
            SurfaceTexture surfaceTexture = textureView.isAvailable() ? textureView.getSurfaceTexture() : null;
            if (surfaceTexture != null) {
                surface = new Surface(surfaceTexture);
            }
        }
        setVideoSurfaceInternal(surface, true);
    }

    @Override
    public void clearVideoTextureView(TextureView textureView) {
        if (textureView == null || textureView != this.textureView) {
            return;
        }
        setVideoTextureView(null);
    }

    public void setAudioStreamType(int i) {
        int audioUsageForStreamType = Util.getAudioUsageForStreamType(i);
        setAudioAttributes(new AudioAttributes.Builder().setUsage(audioUsageForStreamType).setContentType(Util.getAudioContentTypeForStreamType(i)).build());
    }

    public int getAudioStreamType() {
        return Util.getStreamTypeForAudioUsage(this.audioAttributes.usage);
    }

    public AnalyticsCollector getAnalyticsCollector() {
        return this.analyticsCollector;
    }

    public void addAnalyticsListener(AnalyticsListener analyticsListener) {
        this.analyticsCollector.addListener(analyticsListener);
    }

    public void removeAnalyticsListener(AnalyticsListener analyticsListener) {
        this.analyticsCollector.removeListener(analyticsListener);
    }

    public void setAudioAttributes(AudioAttributes audioAttributes) {
        this.audioAttributes = audioAttributes;
        for (Renderer renderer : this.renderers) {
            if (renderer.getTrackType() == 1) {
                this.player.createMessage(renderer).setType(3).setPayload(audioAttributes).send();
            }
        }
    }

    public AudioAttributes getAudioAttributes() {
        return this.audioAttributes;
    }

    public void setVolume(float f) {
        this.audioVolume = f;
        for (Renderer renderer : this.renderers) {
            if (renderer.getTrackType() == 1) {
                this.player.createMessage(renderer).setType(2).setPayload(Float.valueOf(f)).send();
            }
        }
    }

    public float getVolume() {
        return this.audioVolume;
    }

    public void setPlaybackParams(PlaybackParams playbackParams) {
        PlaybackParameters playbackParameters;
        if (playbackParams != null) {
            playbackParams.allowDefaults();
            playbackParameters = new PlaybackParameters(playbackParams.getSpeed(), playbackParams.getPitch());
        } else {
            playbackParameters = null;
        }
        setPlaybackParameters(playbackParameters);
    }

    public Format getVideoFormat() {
        return this.videoFormat;
    }

    public Format getAudioFormat() {
        return this.audioFormat;
    }

    public int getAudioSessionId() {
        return this.audioSessionId;
    }

    public DecoderCounters getVideoDecoderCounters() {
        return this.videoDecoderCounters;
    }

    public DecoderCounters getAudioDecoderCounters() {
        return this.audioDecoderCounters;
    }

    @Override
    public void addVideoListener(com.mbridge.msdk.playercommon.exoplayer2.video.VideoListener videoListener) {
        this.videoListeners.add(videoListener);
    }

    @Override
    public void removeVideoListener(com.mbridge.msdk.playercommon.exoplayer2.video.VideoListener videoListener) {
        this.videoListeners.remove(videoListener);
    }

    public void setVideoListener(VideoListener videoListener) {
        this.videoListeners.clear();
        if (videoListener != null) {
            addVideoListener(videoListener);
        }
    }

    public void clearVideoListener(VideoListener videoListener) {
        removeVideoListener(videoListener);
    }

    @Override
    public void addTextOutput(TextOutput textOutput) {
        if (!this.currentCues.isEmpty()) {
            textOutput.onCues(this.currentCues);
        }
        this.textOutputs.add(textOutput);
    }

    @Override
    public void removeTextOutput(TextOutput textOutput) {
        this.textOutputs.remove(textOutput);
    }

    public void setTextOutput(TextOutput textOutput) {
        this.textOutputs.clear();
        if (textOutput != null) {
            addTextOutput(textOutput);
        }
    }

    public void clearTextOutput(TextOutput textOutput) {
        removeTextOutput(textOutput);
    }

    public void addMetadataOutput(MetadataOutput metadataOutput) {
        this.metadataOutputs.add(metadataOutput);
    }

    public void removeMetadataOutput(MetadataOutput metadataOutput) {
        this.metadataOutputs.remove(metadataOutput);
    }

    public void setMetadataOutput(MetadataOutput metadataOutput) {
        this.metadataOutputs.retainAll(Collections.singleton(this.analyticsCollector));
        if (metadataOutput != null) {
            addMetadataOutput(metadataOutput);
        }
    }

    public void clearMetadataOutput(MetadataOutput metadataOutput) {
        removeMetadataOutput(metadataOutput);
    }

    public void setVideoDebugListener(VideoRendererEventListener videoRendererEventListener) {
        this.videoDebugListeners.retainAll(Collections.singleton(this.analyticsCollector));
        if (videoRendererEventListener != null) {
            addVideoDebugListener(videoRendererEventListener);
        }
    }

    public void addVideoDebugListener(VideoRendererEventListener videoRendererEventListener) {
        this.videoDebugListeners.add(videoRendererEventListener);
    }

    public void removeVideoDebugListener(VideoRendererEventListener videoRendererEventListener) {
        this.videoDebugListeners.remove(videoRendererEventListener);
    }

    public void setAudioDebugListener(AudioRendererEventListener audioRendererEventListener) {
        this.audioDebugListeners.retainAll(Collections.singleton(this.analyticsCollector));
        if (audioRendererEventListener != null) {
            addAudioDebugListener(audioRendererEventListener);
        }
    }

    public void addAudioDebugListener(AudioRendererEventListener audioRendererEventListener) {
        this.audioDebugListeners.add(audioRendererEventListener);
    }

    public void removeAudioDebugListener(AudioRendererEventListener audioRendererEventListener) {
        this.audioDebugListeners.remove(audioRendererEventListener);
    }

    @Override
    public Looper getPlaybackLooper() {
        return this.player.getPlaybackLooper();
    }

    @Override
    public void addListener(Player.EventListener eventListener) {
        this.player.addListener(eventListener);
    }

    @Override
    public void removeListener(Player.EventListener eventListener) {
        this.player.removeListener(eventListener);
    }

    @Override
    public int getPlaybackState() {
        return this.player.getPlaybackState();
    }

    @Override
    public ExoPlaybackException getPlaybackError() {
        return this.player.getPlaybackError();
    }

    @Override
    public void prepare(MediaSource mediaSource) {
        prepare(mediaSource, true, true);
    }

    @Override
    public void prepare(MediaSource mediaSource, boolean z, boolean z2) {
        MediaSource mediaSource2 = this.mediaSource;
        if (mediaSource2 != mediaSource) {
            if (mediaSource2 != null) {
                mediaSource2.removeEventListener(this.analyticsCollector);
                this.analyticsCollector.resetForNewMediaSource();
            }
            mediaSource.addEventListener(this.eventHandler, this.analyticsCollector);
            this.mediaSource = mediaSource;
        }
        this.player.prepare(mediaSource, z, z2);
    }

    @Override
    public void setPlayWhenReady(boolean z) {
        this.player.setPlayWhenReady(z);
    }

    @Override
    public boolean getPlayWhenReady() {
        return this.player.getPlayWhenReady();
    }

    @Override
    public int getRepeatMode() {
        return this.player.getRepeatMode();
    }

    @Override
    public void setRepeatMode(int i) {
        this.player.setRepeatMode(i);
    }

    @Override
    public void setShuffleModeEnabled(boolean z) {
        this.player.setShuffleModeEnabled(z);
    }

    @Override
    public boolean getShuffleModeEnabled() {
        return this.player.getShuffleModeEnabled();
    }

    @Override
    public boolean isLoading() {
        return this.player.isLoading();
    }

    @Override
    public void seekToDefaultPosition() {
        this.analyticsCollector.notifySeekStarted();
        this.player.seekToDefaultPosition();
    }

    @Override
    public void seekToDefaultPosition(int i) {
        this.analyticsCollector.notifySeekStarted();
        this.player.seekToDefaultPosition(i);
    }

    @Override
    public void seekTo(long j) {
        this.analyticsCollector.notifySeekStarted();
        this.player.seekTo(j);
    }

    @Override
    public void seekTo(int i, long j) {
        this.analyticsCollector.notifySeekStarted();
        this.player.seekTo(i, j);
    }

    @Override
    public void setPlaybackParameters(PlaybackParameters playbackParameters) {
        this.player.setPlaybackParameters(playbackParameters);
    }

    @Override
    public PlaybackParameters getPlaybackParameters() {
        return this.player.getPlaybackParameters();
    }

    @Override
    public void setSeekParameters(SeekParameters seekParameters) {
        this.player.setSeekParameters(seekParameters);
    }

    @Override
    public Object getCurrentTag() {
        return this.player.getCurrentTag();
    }

    @Override
    public void stop() {
        stop(false);
    }

    @Override
    public void stop(boolean z) {
        this.player.stop(z);
        MediaSource mediaSource = this.mediaSource;
        if (mediaSource != null) {
            mediaSource.removeEventListener(this.analyticsCollector);
            this.mediaSource = null;
            this.analyticsCollector.resetForNewMediaSource();
        }
        this.currentCues = Collections.emptyList();
    }

    @Override
    public void release() {
        this.player.release();
        removeSurfaceCallbacks();
        Surface surface = this.surface;
        if (surface != null) {
            if (this.ownsSurface) {
                surface.release();
            }
            this.surface = null;
        }
        MediaSource mediaSource = this.mediaSource;
        if (mediaSource != null) {
            mediaSource.removeEventListener(this.analyticsCollector);
        }
        this.currentCues = Collections.emptyList();
    }

    @Override
    public void sendMessages(ExoPlayer.ExoPlayerMessage... exoPlayerMessageArr) {
        this.player.sendMessages(exoPlayerMessageArr);
    }

    @Override
    public PlayerMessage createMessage(PlayerMessage.Target target) {
        return this.player.createMessage(target);
    }

    @Override
    public void blockingSendMessages(ExoPlayer.ExoPlayerMessage... exoPlayerMessageArr) {
        this.player.blockingSendMessages(exoPlayerMessageArr);
    }

    @Override
    public int getRendererCount() {
        return this.player.getRendererCount();
    }

    @Override
    public int getRendererType(int i) {
        return this.player.getRendererType(i);
    }

    @Override
    public TrackGroupArray getCurrentTrackGroups() {
        return this.player.getCurrentTrackGroups();
    }

    @Override
    public TrackSelectionArray getCurrentTrackSelections() {
        return this.player.getCurrentTrackSelections();
    }

    @Override
    public Timeline getCurrentTimeline() {
        return this.player.getCurrentTimeline();
    }

    @Override
    public Object getCurrentManifest() {
        return this.player.getCurrentManifest();
    }

    @Override
    public int getCurrentPeriodIndex() {
        return this.player.getCurrentPeriodIndex();
    }

    @Override
    public int getCurrentWindowIndex() {
        return this.player.getCurrentWindowIndex();
    }

    @Override
    public int getNextWindowIndex() {
        return this.player.getNextWindowIndex();
    }

    @Override
    public int getPreviousWindowIndex() {
        return this.player.getPreviousWindowIndex();
    }

    @Override
    public long getDuration() {
        return this.player.getDuration();
    }

    @Override
    public long getCurrentPosition() {
        return this.player.getCurrentPosition();
    }

    @Override
    public long getBufferedPosition() {
        return this.player.getBufferedPosition();
    }

    @Override
    public int getBufferedPercentage() {
        return this.player.getBufferedPercentage();
    }

    @Override
    public boolean isCurrentWindowDynamic() {
        return this.player.isCurrentWindowDynamic();
    }

    @Override
    public boolean isCurrentWindowSeekable() {
        return this.player.isCurrentWindowSeekable();
    }

    @Override
    public boolean isPlayingAd() {
        return this.player.isPlayingAd();
    }

    @Override
    public int getCurrentAdGroupIndex() {
        return this.player.getCurrentAdGroupIndex();
    }

    @Override
    public int getCurrentAdIndexInAdGroup() {
        return this.player.getCurrentAdIndexInAdGroup();
    }

    @Override
    public long getContentPosition() {
        return this.player.getContentPosition();
    }

    protected ExoPlayer createExoPlayerImpl(Renderer[] rendererArr, TrackSelector trackSelector, LoadControl loadControl, Clock clock) {
        return new ExoPlayerImpl(rendererArr, trackSelector, loadControl, clock);
    }

    private void removeSurfaceCallbacks() {
        TextureView textureView = this.textureView;
        if (textureView != null) {
            if (textureView.getSurfaceTextureListener() != this.componentListener) {
                Log.w(TAG, "SurfaceTextureListener already unset or replaced.");
            } else {
                this.textureView.setSurfaceTextureListener(null);
            }
            this.textureView = null;
        }
        SurfaceHolder surfaceHolder = this.surfaceHolder;
        if (surfaceHolder != null) {
            surfaceHolder.removeCallback(this.componentListener);
            this.surfaceHolder = null;
        }
    }

    private void setVideoSurfaceInternal(Surface surface, boolean z) {
        ArrayList arrayList = new ArrayList();
        for (Renderer renderer : this.renderers) {
            if (renderer.getTrackType() == 2) {
                arrayList.add(this.player.createMessage(renderer).setType(1).setPayload(surface).send());
            }
        }
        Surface surface2 = this.surface;
        if (surface2 != null && surface2 != surface) {
            try {
                Iterator it = arrayList.iterator();
                while (it.hasNext()) {
                    ((PlayerMessage) it.next()).blockUntilDelivered();
                }
            } catch (InterruptedException unused) {
                Thread.currentThread().interrupt();
            } catch (TimeoutException unused2) {
                this.player.stop(false);
            }
            if (this.ownsSurface) {
                this.surface.release();
            }
        }
        this.surface = surface;
        this.ownsSurface = z;
    }

    private final class ComponentListener implements SurfaceHolder.Callback, TextureView.SurfaceTextureListener, AudioRendererEventListener, MetadataOutput, TextOutput, VideoRendererEventListener {
        @Override
        public final void onSurfaceTextureSizeChanged(SurfaceTexture surfaceTexture, int i, int i2) {
        }

        @Override
        public final void onSurfaceTextureUpdated(SurfaceTexture surfaceTexture) {
        }

        @Override
        public final void surfaceChanged(SurfaceHolder surfaceHolder, int i, int i2, int i3) {
        }

        private ComponentListener() {
        }

        @Override
        public final void onVideoEnabled(DecoderCounters decoderCounters) {
            SimpleExoPlayer.this.videoDecoderCounters = decoderCounters;
            Iterator it = SimpleExoPlayer.this.videoDebugListeners.iterator();
            while (it.hasNext()) {
                ((VideoRendererEventListener) it.next()).onVideoEnabled(decoderCounters);
            }
        }

        @Override
        public final void onVideoDecoderInitialized(String str, long j, long j2) {
            Iterator it = SimpleExoPlayer.this.videoDebugListeners.iterator();
            while (it.hasNext()) {
                ((VideoRendererEventListener) it.next()).onVideoDecoderInitialized(str, j, j2);
            }
        }

        @Override
        public final void onVideoInputFormatChanged(Format format) {
            SimpleExoPlayer.this.videoFormat = format;
            Iterator it = SimpleExoPlayer.this.videoDebugListeners.iterator();
            while (it.hasNext()) {
                ((VideoRendererEventListener) it.next()).onVideoInputFormatChanged(format);
            }
        }

        @Override
        public final void onDroppedFrames(int i, long j) {
            Iterator it = SimpleExoPlayer.this.videoDebugListeners.iterator();
            while (it.hasNext()) {
                ((VideoRendererEventListener) it.next()).onDroppedFrames(i, j);
            }
        }

        @Override
        public final void onVideoSizeChanged(int i, int i2, int i3, float f) {
            Iterator it = SimpleExoPlayer.this.videoListeners.iterator();
            while (it.hasNext()) {
                ((com.mbridge.msdk.playercommon.exoplayer2.video.VideoListener) it.next()).onVideoSizeChanged(i, i2, i3, f);
            }
            Iterator it2 = SimpleExoPlayer.this.videoDebugListeners.iterator();
            while (it2.hasNext()) {
                ((VideoRendererEventListener) it2.next()).onVideoSizeChanged(i, i2, i3, f);
            }
        }

        @Override
        public final void onRenderedFirstFrame(Surface surface) {
            if (SimpleExoPlayer.this.surface == surface) {
                Iterator it = SimpleExoPlayer.this.videoListeners.iterator();
                while (it.hasNext()) {
                    ((com.mbridge.msdk.playercommon.exoplayer2.video.VideoListener) it.next()).onRenderedFirstFrame();
                }
            }
            Iterator it2 = SimpleExoPlayer.this.videoDebugListeners.iterator();
            while (it2.hasNext()) {
                ((VideoRendererEventListener) it2.next()).onRenderedFirstFrame(surface);
            }
        }

        @Override
        public final void onVideoDisabled(DecoderCounters decoderCounters) {
            Iterator it = SimpleExoPlayer.this.videoDebugListeners.iterator();
            while (it.hasNext()) {
                ((VideoRendererEventListener) it.next()).onVideoDisabled(decoderCounters);
            }
            SimpleExoPlayer.this.videoFormat = null;
            SimpleExoPlayer.this.videoDecoderCounters = null;
        }

        @Override
        public final void onAudioEnabled(DecoderCounters decoderCounters) {
            SimpleExoPlayer.this.audioDecoderCounters = decoderCounters;
            Iterator it = SimpleExoPlayer.this.audioDebugListeners.iterator();
            while (it.hasNext()) {
                ((AudioRendererEventListener) it.next()).onAudioEnabled(decoderCounters);
            }
        }

        @Override
        public final void onAudioSessionId(int i) {
            SimpleExoPlayer.this.audioSessionId = i;
            Iterator it = SimpleExoPlayer.this.audioDebugListeners.iterator();
            while (it.hasNext()) {
                ((AudioRendererEventListener) it.next()).onAudioSessionId(i);
            }
        }

        @Override
        public final void onAudioDecoderInitialized(String str, long j, long j2) {
            Iterator it = SimpleExoPlayer.this.audioDebugListeners.iterator();
            while (it.hasNext()) {
                ((AudioRendererEventListener) it.next()).onAudioDecoderInitialized(str, j, j2);
            }
        }

        @Override
        public final void onAudioInputFormatChanged(Format format) {
            SimpleExoPlayer.this.audioFormat = format;
            Iterator it = SimpleExoPlayer.this.audioDebugListeners.iterator();
            while (it.hasNext()) {
                ((AudioRendererEventListener) it.next()).onAudioInputFormatChanged(format);
            }
        }

        @Override
        public final void onAudioSinkUnderrun(int i, long j, long j2) {
            Iterator it = SimpleExoPlayer.this.audioDebugListeners.iterator();
            while (it.hasNext()) {
                ((AudioRendererEventListener) it.next()).onAudioSinkUnderrun(i, j, j2);
            }
        }

        @Override
        public final void onAudioDisabled(DecoderCounters decoderCounters) {
            Iterator it = SimpleExoPlayer.this.audioDebugListeners.iterator();
            while (it.hasNext()) {
                ((AudioRendererEventListener) it.next()).onAudioDisabled(decoderCounters);
            }
            SimpleExoPlayer.this.audioFormat = null;
            SimpleExoPlayer.this.audioDecoderCounters = null;
            SimpleExoPlayer.this.audioSessionId = 0;
        }

        @Override
        public final void onCues(List<Cue> list) {
            SimpleExoPlayer.this.currentCues = list;
            Iterator it = SimpleExoPlayer.this.textOutputs.iterator();
            while (it.hasNext()) {
                ((TextOutput) it.next()).onCues(list);
            }
        }

        @Override
        public final void onMetadata(Metadata metadata) {
            Iterator it = SimpleExoPlayer.this.metadataOutputs.iterator();
            while (it.hasNext()) {
                ((MetadataOutput) it.next()).onMetadata(metadata);
            }
        }

        @Override
        public final void surfaceCreated(SurfaceHolder surfaceHolder) {
            SimpleExoPlayer.this.setVideoSurfaceInternal(surfaceHolder.getSurface(), false);
        }

        @Override
        public final void surfaceDestroyed(SurfaceHolder surfaceHolder) {
            SimpleExoPlayer.this.setVideoSurfaceInternal(null, false);
        }

        @Override
        public final void onSurfaceTextureAvailable(SurfaceTexture surfaceTexture, int i, int i2) {
            SimpleExoPlayer.this.setVideoSurfaceInternal(new Surface(surfaceTexture), true);
        }

        @Override
        public final boolean onSurfaceTextureDestroyed(SurfaceTexture surfaceTexture) {
            SimpleExoPlayer.this.setVideoSurfaceInternal(null, true);
            return true;
        }
    }

    public final boolean isPlaying() {
        return getPlaybackState() == 3 && getPlayWhenReady();
    }
}
