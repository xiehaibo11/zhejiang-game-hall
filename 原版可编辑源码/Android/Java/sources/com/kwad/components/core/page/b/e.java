package com.kwad.components.core.page.b;

import android.app.Activity;
import com.kwad.components.core.video.k;
import com.kwad.components.core.video.l;

public final class e extends c {
    private com.kwad.components.core.page.c.a mPlayModule;
    private k mVideoPlayStateListener = new l() {
        @Override
        public final void onMediaPlayCompleted() {
        }

        @Override
        public final void onMediaPlayError(int i, int i2) {
            Activity activity = e.this.MQ.getActivity();
            if (activity != null) {
                activity.finish();
            }
        }

        @Override
        public final void onMediaPlayStart() {
        }
    };

    @Override
    public final void ah() {
        super.ah();
        com.kwad.components.core.page.c.a aVar = this.MQ.mPlayModule;
        this.mPlayModule = aVar;
        aVar.a(this.mVideoPlayStateListener);
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        this.mPlayModule.b(this.mVideoPlayStateListener);
    }
}
