package com.kwad.components.core.offline.init.c;

import android.media.TimedText;
import com.kwad.components.core.video.b;
import com.kwad.components.core.video.h;
import com.kwad.components.core.video.k;
import com.kwad.components.offline.api.core.video.IMediaPlayer;
import com.kwad.components.offline.api.core.video.listener.OfflineMediaPlayStateListener;
import com.kwad.components.offline.api.core.video.listener.OfflineVideoPlayStateListener;
import com.kwad.components.offline.api.core.video.listener.ReleaseCallback;
import com.kwad.components.offline.api.core.video.mdoel.KsPlayerLogParams;
import com.kwad.components.offline.api.core.video.mdoel.PlayVideoInfo;
import com.kwad.sdk.contentalliance.a.a.b;
import com.kwad.sdk.core.video.a.c;

public final class d {
    public static b.a a(final ReleaseCallback releaseCallback) {
        if (releaseCallback == null) {
            return null;
        }
        return new b.a() {
            @Override
            public final void onReleaseSuccess() {
                releaseCallback.onReleaseSuccess();
            }
        };
    }

    public static h a(final OfflineMediaPlayStateListener offlineMediaPlayStateListener) {
        if (offlineMediaPlayStateListener == null) {
            return null;
        }
        return new h() {
            @Override
            public final void onMediaPlayCompleted() {
                offlineMediaPlayStateListener.onMediaPlayCompleted();
            }

            @Override
            public final void onMediaPlayError(int i, int i2) {
                offlineMediaPlayStateListener.onMediaPlayError(i, i2);
            }

            @Override
            public final void onMediaPlayPaused() {
                offlineMediaPlayStateListener.onMediaPlayPaused();
            }

            @Override
            public final void onMediaPlayProgress(long j, long j2) {
                offlineMediaPlayStateListener.onMediaPlayProgress(j, j2);
            }

            @Override
            public final void onMediaPlayStart() {
                offlineMediaPlayStateListener.onMediaPlayStart();
            }

            @Override
            public final void onMediaPlaying() {
                offlineMediaPlayStateListener.onMediaPlaying();
            }

            @Override
            public final void onMediaPrepared() {
                offlineMediaPlayStateListener.onMediaPrepared();
            }

            @Override
            public final void onMediaPreparing() {
                offlineMediaPlayStateListener.onMediaPreparing();
            }
        };
    }

    public static k a(final OfflineVideoPlayStateListener offlineVideoPlayStateListener) {
        if (offlineVideoPlayStateListener == null) {
            return null;
        }
        return new k() {
            @Override
            public final void onMediaPlayCompleted() {
                offlineVideoPlayStateListener.onMediaPlayCompleted();
            }

            @Override
            public final void onMediaPlayError(int i, int i2) {
                offlineVideoPlayStateListener.onMediaPlayError(i, i2);
            }

            @Override
            public final void onMediaPlayPaused() {
                offlineVideoPlayStateListener.onMediaPlayPaused();
            }

            @Override
            public final void onMediaPlayProgress(long j, long j2) {
                offlineVideoPlayStateListener.onMediaPlayProgress(j, j2);
            }

            @Override
            public final void onMediaPlayStart() {
                offlineVideoPlayStateListener.onMediaPlayStart();
            }

            @Override
            public final void onMediaPlaying() {
                offlineVideoPlayStateListener.onMediaPlaying();
            }

            @Override
            public final void onMediaPrepared() {
                offlineVideoPlayStateListener.onMediaPrepared();
            }

            @Override
            public final void onMediaPreparing() {
                offlineVideoPlayStateListener.onMediaPreparing();
            }

            @Override
            public final void onVideoPlayBufferingPaused() {
                offlineVideoPlayStateListener.onVideoPlayBufferingPaused();
            }

            @Override
            public final void onVideoPlayBufferingPlaying() {
                offlineVideoPlayStateListener.onVideoPlayBufferingPlaying();
            }
        };
    }

    public static com.kwad.sdk.contentalliance.a.a.a a(KsPlayerLogParams ksPlayerLogParams) {
        if (ksPlayerLogParams == null) {
            return null;
        }
        com.kwad.sdk.contentalliance.a.a.a aVar = new com.kwad.sdk.contentalliance.a.a.a();
        aVar.photoId = ksPlayerLogParams.photoId;
        aVar.clickTime = ksPlayerLogParams.clickTime;
        aVar.adStyle = ksPlayerLogParams.adStyle;
        aVar.contentType = ksPlayerLogParams.contentType;
        return aVar;
    }

    public static com.kwad.sdk.contentalliance.a.a.b a(PlayVideoInfo playVideoInfo) {
        if (playVideoInfo == null) {
            return null;
        }
        return new b.a(playVideoInfo.videoUrl).co(playVideoInfo.manifest).b(a(playVideoInfo.ksplayerLogParams)).a(playVideoInfo.videoPlayerStatus).bd(playVideoInfo.isNoCache).yS();
    }

    public static c.a a(final IMediaPlayer iMediaPlayer, final IMediaPlayer.OnBufferingUpdateListener onBufferingUpdateListener) {
        if (onBufferingUpdateListener == null) {
            return null;
        }
        return new c.a() {
            @Override
            public final void aw(int i) {
                onBufferingUpdateListener.onBufferingUpdate(iMediaPlayer, i);
            }
        };
    }

    public static c.b a(final IMediaPlayer iMediaPlayer, final IMediaPlayer.OnCompletionListener onCompletionListener) {
        if (onCompletionListener == null) {
            return null;
        }
        return new c.b() {
            @Override
            public final void os() {
                onCompletionListener.onCompletion(iMediaPlayer);
            }
        };
    }

    public static c.c a(final IMediaPlayer iMediaPlayer, final IMediaPlayer.OnErrorListener onErrorListener) {
        if (onErrorListener == null) {
            return null;
        }
        return new c.c() {
            @Override
            public final boolean j(int i, int i2) {
                return onErrorListener.onError(iMediaPlayer, i, i2);
            }
        };
    }

    public static c.d a(final IMediaPlayer iMediaPlayer, final IMediaPlayer.OnInfoListener onInfoListener) {
        if (onInfoListener == null) {
            return null;
        }
        return new c.d() {
            @Override
            public final boolean k(int i, int i2) {
                return onInfoListener.onInfo(iMediaPlayer, i, i2);
            }
        };
    }

    public static c.e a(final IMediaPlayer iMediaPlayer, final IMediaPlayer.OnPreparedListener onPreparedListener) {
        if (onPreparedListener == null) {
            return null;
        }
        return new c.e() {
            @Override
            public final void a(com.kwad.sdk.core.video.a.c cVar) {
                onPreparedListener.onPrepared(iMediaPlayer);
            }
        };
    }

    public static c.f a(final IMediaPlayer iMediaPlayer, final IMediaPlayer.OnSeekCompleteListener onSeekCompleteListener) {
        if (onSeekCompleteListener == null) {
            return null;
        }
        return new c.f() {
            @Override
            public final void ot() {
                onSeekCompleteListener.onSeekComplete(iMediaPlayer);
            }
        };
    }

    public static c.g a(final IMediaPlayer iMediaPlayer, final IMediaPlayer.OnTimedTextListener onTimedTextListener) {
        if (onTimedTextListener == null) {
            return null;
        }
        return new c.g() {
            @Override
            public final void a(TimedText timedText) {
                onTimedTextListener.onTimedText(iMediaPlayer, timedText);
            }
        };
    }

    public static c.h a(final IMediaPlayer iMediaPlayer, final IMediaPlayer.OnVideoSizeChangedListener onVideoSizeChangedListener) {
        if (onVideoSizeChangedListener == null) {
            return null;
        }
        return new c.h() {
            @Override
            public final void i(int i, int i2) {
                onVideoSizeChangedListener.onVideoSizeChanged(iMediaPlayer, i, i2);
            }
        };
    }
}
