package com.mbridge.msdk.playercommon.exoplayer2.audio;

import android.os.Handler;
import com.mbridge.msdk.playercommon.exoplayer2.Format;
import com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters;
import com.mbridge.msdk.playercommon.exoplayer2.util.Assertions;

public interface AudioRendererEventListener {
    void onAudioDecoderInitialized(String str, long j, long j2);

    void onAudioDisabled(DecoderCounters decoderCounters);

    void onAudioEnabled(DecoderCounters decoderCounters);

    void onAudioInputFormatChanged(Format format);

    void onAudioSessionId(int i);

    void onAudioSinkUnderrun(int i, long j, long j2);

    public static final class EventDispatcher {
        private final Handler handler;
        private final AudioRendererEventListener listener;

        public EventDispatcher(Handler handler, AudioRendererEventListener audioRendererEventListener) {
            this.handler = audioRendererEventListener != null ? (Handler) Assertions.checkNotNull(handler) : null;
            this.listener = audioRendererEventListener;
        }

        public final void enabled(final DecoderCounters decoderCounters) {
            if (this.listener != null) {
                this.handler.post(new Runnable() {
                    @Override
                    public void run() {
                        EventDispatcher.this.listener.onAudioEnabled(decoderCounters);
                    }
                });
            }
        }

        public final void decoderInitialized(final String str, final long j, final long j2) {
            if (this.listener != null) {
                this.handler.post(new Runnable() {
                    @Override
                    public void run() {
                        EventDispatcher.this.listener.onAudioDecoderInitialized(str, j, j2);
                    }
                });
            }
        }

        public final void inputFormatChanged(final Format format) {
            if (this.listener != null) {
                this.handler.post(new Runnable() {
                    @Override
                    public void run() {
                        EventDispatcher.this.listener.onAudioInputFormatChanged(format);
                    }
                });
            }
        }

        public final void audioTrackUnderrun(final int i, final long j, final long j2) {
            if (this.listener != null) {
                this.handler.post(new Runnable() {
                    @Override
                    public void run() {
                        EventDispatcher.this.listener.onAudioSinkUnderrun(i, j, j2);
                    }
                });
            }
        }

        public final void disabled(final DecoderCounters decoderCounters) {
            if (this.listener != null) {
                this.handler.post(new Runnable() {
                    @Override
                    public void run() {
                        decoderCounters.ensureUpdated();
                        EventDispatcher.this.listener.onAudioDisabled(decoderCounters);
                    }
                });
            }
        }

        public final void audioSessionId(final int i) {
            if (this.listener != null) {
                this.handler.post(new Runnable() {
                    @Override
                    public void run() {
                        EventDispatcher.this.listener.onAudioSessionId(i);
                    }
                });
            }
        }
    }
}
