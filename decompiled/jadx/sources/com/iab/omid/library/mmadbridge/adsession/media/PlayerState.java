package com.iab.omid.library.mmadbridge.adsession.media;

import com.ss.android.socialbase.downloader.BuildConfig;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;

/* JADX INFO: loaded from: classes2.dex */
public enum PlayerState {
    MINIMIZED("minimized"),
    COLLAPSED("collapsed"),
    NORMAL(BuildConfig.FLAVOR),
    EXPANDED(CallMraidJS.g),
    FULLSCREEN("fullscreen");

    private final String playerState;

    PlayerState(String str) {
        this.playerState = str;
    }

    @Override // java.lang.Enum
    public String toString() {
        return this.playerState;
    }
}
