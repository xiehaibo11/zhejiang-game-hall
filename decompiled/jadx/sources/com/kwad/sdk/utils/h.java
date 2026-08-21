package com.kwad.sdk.utils;

import android.content.Context;
import android.media.AudioAttributes;
import android.media.AudioFocusRequest;
import android.media.AudioManager;
import android.os.Build;

/* JADX INFO: loaded from: classes2.dex */
public final class h {
    private AudioManager.OnAudioFocusChangeListener aIa = new AudioManager.OnAudioFocusChangeListener() { // from class: com.kwad.sdk.utils.h.1
        @Override // android.media.AudioManager.OnAudioFocusChangeListener
        public final void onAudioFocusChange(final int i) {
            if (h.this.gH == null) {
                return;
            }
            bj.postOnUiThread(new Runnable() { // from class: com.kwad.sdk.utils.h.1.1
                @Override // java.lang.Runnable
                public final void run() {
                    if (i < 0) {
                        h.this.gH.onAudioBeOccupied();
                    } else {
                        h.this.gH.onAudioBeReleased();
                    }
                }
            });
        }
    };
    private AudioManager avW;
    private a gH;

    public interface a {
        void onAudioBeOccupied();

        void onAudioBeReleased();
    }

    public h(Context context) {
        this.avW = (AudioManager) context.getSystemService("audio");
    }

    private AudioFocusRequest HU() {
        return new AudioFocusRequest.Builder(2).setAudioAttributes(new AudioAttributes.Builder().setLegacyStreamType(3).setUsage(1).setContentType(2).build()).setAcceptsDelayedFocusGain(false).setOnAudioFocusChangeListener(this.aIa).build();
    }

    public final boolean HT() {
        if (this.aIa != null && this.avW != null) {
            if (Build.VERSION.SDK_INT >= 26) {
                return 1 == this.avW.requestAudioFocus(HU());
            }
            if (1 == this.avW.requestAudioFocus(this.aIa, 3, 2)) {
                return true;
            }
        }
        return false;
    }

    public final void c(a aVar) {
        this.gH = aVar;
    }
}
