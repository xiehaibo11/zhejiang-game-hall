package com.mbridge.msdk.widget.custom.baseview;

/* JADX INFO: compiled from: StateManager.java */
/* JADX INFO: loaded from: classes3.dex */
final class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private boolean f4466a;
    private int b;

    public e(MBCircularProgressButton mBCircularProgressButton) {
        this.f4466a = mBCircularProgressButton.isEnabled();
        this.b = mBCircularProgressButton.getProgress();
    }

    public final void a(MBCircularProgressButton mBCircularProgressButton) {
        this.b = mBCircularProgressButton.getProgress();
    }

    public final void b(MBCircularProgressButton mBCircularProgressButton) {
        if (mBCircularProgressButton.getProgress() != this.b) {
            mBCircularProgressButton.setProgress(mBCircularProgressButton.getProgress());
        } else if (mBCircularProgressButton.isEnabled() != this.f4466a) {
            mBCircularProgressButton.setEnabled(mBCircularProgressButton.isEnabled());
        }
    }
}
