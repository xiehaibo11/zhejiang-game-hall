package com.kwad.sdk.core.video.videoview;

public abstract class b extends android.widget.RelativeLayout {
    private java.lang.Runnable RZ;
    protected final com.kwad.sdk.core.video.videoview.c awf;


    public b(android.content.Context r1, com.kwad.sdk.core.video.videoview.c r2) {
            r0 = this;
            r0.<init>(r1)
            r0.awf = r2
            return
    }

    static java.lang.Runnable a(com.kwad.sdk.core.video.videoview.b r0) {
            java.lang.Runnable r0 = r0.RZ
            return r0
    }

    public void m(int r1, int r2) {
            r0 = this;
            return
    }

    protected abstract void onPlayStateChanged(int r1);

    protected abstract void qB();

    protected final void qH() {
            r1 = this;
            r1.qI()
            java.lang.Runnable r0 = r1.RZ
            if (r0 != 0) goto Le
            com.kwad.sdk.core.video.videoview.b$1 r0 = new com.kwad.sdk.core.video.videoview.b$1
            r0.<init>(r1)
            r1.RZ = r0
        Le:
            java.lang.Runnable r0 = r1.RZ
            r1.post(r0)
            return
    }

    protected final void qI() {
            r1 = this;
            java.lang.Runnable r0 = r1.RZ
            if (r0 == 0) goto La
            r1.removeCallbacks(r0)
            r0 = 0
            r1.RZ = r0
        La:
            return
    }

    protected abstract void reset();
}
