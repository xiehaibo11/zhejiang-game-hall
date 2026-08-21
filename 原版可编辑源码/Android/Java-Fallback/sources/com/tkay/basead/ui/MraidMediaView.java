package com.tkay.basead.ui;

public class MraidMediaView extends com.tkay.basead.ui.BaseMediaATView {
    private com.tkay.basead.ui.MraidContainerView g;
    private com.tkay.basead.ui.MraidMediaView.a h;

    final class 1 implements com.tkay.basead.ui.MraidContainerView.a {
        final com.tkay.basead.ui.MraidMediaView a;

        1(com.tkay.basead.ui.MraidMediaView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void a() {
                r1 = this;
                com.tkay.basead.ui.MraidMediaView r0 = r1.a
                com.tkay.basead.ui.MraidMediaView$a r0 = com.tkay.basead.ui.MraidMediaView.a(r0)
                if (r0 == 0) goto L11
                com.tkay.basead.ui.MraidMediaView r0 = r1.a
                com.tkay.basead.ui.MraidMediaView$a r0 = com.tkay.basead.ui.MraidMediaView.a(r0)
                r0.a()
            L11:
                return
        }

        @Override
        public final void a(java.lang.String r2) {
                r1 = this;
                com.tkay.basead.ui.MraidMediaView r0 = r1.a
                com.tkay.basead.ui.MraidMediaView$a r0 = com.tkay.basead.ui.MraidMediaView.a(r0)
                if (r0 == 0) goto L11
                com.tkay.basead.ui.MraidMediaView r0 = r1.a
                com.tkay.basead.ui.MraidMediaView$a r0 = com.tkay.basead.ui.MraidMediaView.a(r0)
                r0.a(r2)
            L11:
                return
        }

        @Override
        public final void b() {
                r0 = this;
                return
        }
    }

    public interface a {
        void a();

        void a(java.lang.String r1);
    }

    public MraidMediaView(android.content.Context r7) {
            r6 = this;
            r2 = 0
            r3 = 0
            r4 = 0
            r5 = 0
            r0 = r6
            r1 = r7
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public MraidMediaView(android.content.Context r1, com.tkay.core.common.f.h r2, com.tkay.core.common.f.i r3, boolean r4, com.tkay.basead.ui.BaseMediaATView.a r5) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    static com.tkay.basead.ui.MraidMediaView.a a(com.tkay.basead.ui.MraidMediaView r0) {
            com.tkay.basead.ui.MraidMediaView$a r0 = r0.h
            return r0
    }

    private void a() {
            r5 = this;
            com.tkay.basead.ui.MraidContainerView r0 = new com.tkay.basead.ui.MraidContainerView
            android.content.Context r1 = r5.getContext()
            com.tkay.core.common.f.h r2 = r5.a
            com.tkay.core.common.f.i r3 = r5.c
            com.tkay.basead.ui.MraidMediaView$1 r4 = new com.tkay.basead.ui.MraidMediaView$1
            r4.<init>(r5)
            r0.<init>(r1, r2, r3, r4)
            r5.g = r0
            r0.init()
            android.widget.FrameLayout r0 = r5.f
            if (r0 == 0) goto L31
            com.tkay.basead.ui.MraidContainerView r0 = r5.g
            if (r0 == 0) goto L31
            android.widget.FrameLayout r0 = r5.f
            r0.removeAllViews()
            android.widget.FrameLayout r0 = r5.f
            com.tkay.basead.ui.MraidContainerView r1 = r5.g
            android.view.ViewGroup$LayoutParams r2 = new android.view.ViewGroup$LayoutParams
            r3 = -1
            r2.<init>(r3, r3)
            r0.addView(r1, r2)
        L31:
            return
    }

    private static void a(java.lang.String r1) {
            java.lang.String r0 = "MraidMediaView"
            android.util.Log.d(r0, r1)
            return
    }

    @Override
    public void destroy() {
            r1 = this;
            super.destroy()
            com.tkay.basead.ui.MraidContainerView r0 = r1.g
            if (r0 == 0) goto La
            r0.release()
        La:
            return
    }

    public void fireAudioVolumeChange(boolean r2) {
            r1 = this;
            com.tkay.basead.ui.MraidContainerView r0 = r1.g
            if (r0 == 0) goto L7
            r0.fireAudioVolumeChange(r2)
        L7:
            return
    }

    @Override
    public void init(int r4, int r5) {
            r3 = this;
            super.init(r4, r5)
            com.tkay.basead.ui.MraidContainerView r4 = new com.tkay.basead.ui.MraidContainerView
            android.content.Context r5 = r3.getContext()
            com.tkay.core.common.f.h r0 = r3.a
            com.tkay.core.common.f.i r1 = r3.c
            com.tkay.basead.ui.MraidMediaView$1 r2 = new com.tkay.basead.ui.MraidMediaView$1
            r2.<init>(r3)
            r4.<init>(r5, r0, r1, r2)
            r3.g = r4
            r4.init()
            android.widget.FrameLayout r4 = r3.f
            if (r4 == 0) goto L34
            com.tkay.basead.ui.MraidContainerView r4 = r3.g
            if (r4 == 0) goto L34
            android.widget.FrameLayout r4 = r3.f
            r4.removeAllViews()
            android.widget.FrameLayout r4 = r3.f
            com.tkay.basead.ui.MraidContainerView r5 = r3.g
            android.view.ViewGroup$LayoutParams r0 = new android.view.ViewGroup$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            r4.addView(r5, r0)
        L34:
            return
    }

    @Override
    public void onDetachedFromWindow() {
            r0 = this;
            super.onDetachedFromWindow()
            return
    }

    @Override
    public void onWindowFocusChanged(boolean r2) {
            r1 = this;
            super.onWindowFocusChanged(r2)
            com.tkay.basead.ui.MraidContainerView r0 = r1.g
            if (r0 == 0) goto La
            r0.fireMraidIsViewable(r2)
        La:
            return
    }

    public void setMraidWebViewListener(com.tkay.basead.ui.MraidMediaView.a r1) {
            r0 = this;
            r0.h = r1
            return
    }
}
