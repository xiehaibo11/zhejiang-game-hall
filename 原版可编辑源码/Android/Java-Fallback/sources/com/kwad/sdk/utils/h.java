package com.kwad.sdk.utils;

public final class h {
    private android.media.AudioManager.OnAudioFocusChangeListener aIa;
    private android.media.AudioManager avW;
    private com.kwad.sdk.utils.h.a gH;


    public interface a {
        void onAudioBeOccupied();

        void onAudioBeReleased();
    }

    public h(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "audio"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.media.AudioManager r2 = (android.media.AudioManager) r2
            r1.avW = r2
            com.kwad.sdk.utils.h$1 r2 = new com.kwad.sdk.utils.h$1
            r2.<init>(r1)
            r1.aIa = r2
            return
    }

    private android.media.AudioFocusRequest HU() {
            r3 = this;
            android.media.AudioAttributes$Builder r0 = new android.media.AudioAttributes$Builder
            r0.<init>()
            r1 = 3
            android.media.AudioAttributes$Builder r0 = r0.setLegacyStreamType(r1)
            r1 = 1
            android.media.AudioAttributes$Builder r0 = r0.setUsage(r1)
            r1 = 2
            android.media.AudioAttributes$Builder r0 = r0.setContentType(r1)
            android.media.AudioAttributes r0 = r0.build()
            android.media.AudioFocusRequest$Builder r2 = new android.media.AudioFocusRequest$Builder
            r2.<init>(r1)
            android.media.AudioFocusRequest$Builder r0 = r2.setAudioAttributes(r0)
            r1 = 0
            android.media.AudioFocusRequest$Builder r0 = r0.setAcceptsDelayedFocusGain(r1)
            android.media.AudioManager$OnAudioFocusChangeListener r1 = r3.aIa
            android.media.AudioFocusRequest$Builder r0 = r0.setOnAudioFocusChangeListener(r1)
            android.media.AudioFocusRequest r0 = r0.build()
            return r0
    }

    static com.kwad.sdk.utils.h.a a(com.kwad.sdk.utils.h r0) {
            com.kwad.sdk.utils.h$a r0 = r0.gH
            return r0
    }

    public final boolean HT() {
            r6 = this;
            android.media.AudioManager$OnAudioFocusChangeListener r0 = r6.aIa
            r1 = 0
            if (r0 == 0) goto L2c
            android.media.AudioManager r0 = r6.avW
            if (r0 != 0) goto La
            goto L2c
        La:
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 26
            r3 = 1
            if (r0 < r2) goto L1f
            android.media.AudioManager r0 = r6.avW
            android.media.AudioFocusRequest r2 = r6.HU()
            int r0 = r0.requestAudioFocus(r2)
            if (r3 != r0) goto L1e
            return r3
        L1e:
            return r1
        L1f:
            android.media.AudioManager r0 = r6.avW
            android.media.AudioManager$OnAudioFocusChangeListener r2 = r6.aIa
            r4 = 3
            r5 = 2
            int r0 = r0.requestAudioFocus(r2, r4, r5)
            if (r3 != r0) goto L2c
            return r3
        L2c:
            return r1
    }

    public final void c(com.kwad.sdk.utils.h.a r1) {
            r0 = this;
            r0.gH = r1
            return
    }
}
