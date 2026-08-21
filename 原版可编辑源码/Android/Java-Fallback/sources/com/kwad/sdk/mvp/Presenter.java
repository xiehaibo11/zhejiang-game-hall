package com.kwad.sdk.mvp;

public class Presenter {
    private final java.util.List<com.kwad.sdk.mvp.Presenter> aDf;
    private java.lang.Object aDg;
    private com.kwad.sdk.mvp.Presenter.PresenterState aDh;
    private android.view.View mRootView;

    static class 1 {
    }

    enum PresenterState extends java.lang.Enum<com.kwad.sdk.mvp.Presenter.PresenterState> {
        private static final com.kwad.sdk.mvp.Presenter.PresenterState[] $VALUES = null;
        public static final com.kwad.sdk.mvp.Presenter.PresenterState BIND = null;
        public static final com.kwad.sdk.mvp.Presenter.PresenterState CREATE = null;
        public static final com.kwad.sdk.mvp.Presenter.PresenterState DESTROY = null;
        public static final com.kwad.sdk.mvp.Presenter.PresenterState INIT = null;
        public static final com.kwad.sdk.mvp.Presenter.PresenterState UNBIND = null;
        private int mIndex;






        static {
                com.kwad.sdk.mvp.Presenter$PresenterState$1 r0 = new com.kwad.sdk.mvp.Presenter$PresenterState$1
                r1 = 0
                java.lang.String r2 = "INIT"
                r0.<init>(r2, r1, r1)
                com.kwad.sdk.mvp.Presenter.PresenterState.INIT = r0
                com.kwad.sdk.mvp.Presenter$PresenterState$2 r0 = new com.kwad.sdk.mvp.Presenter$PresenterState$2
                r2 = 1
                java.lang.String r3 = "CREATE"
                r0.<init>(r3, r2, r2)
                com.kwad.sdk.mvp.Presenter.PresenterState.CREATE = r0
                com.kwad.sdk.mvp.Presenter$PresenterState$3 r0 = new com.kwad.sdk.mvp.Presenter$PresenterState$3
                r3 = 2
                java.lang.String r4 = "BIND"
                r0.<init>(r4, r3, r3)
                com.kwad.sdk.mvp.Presenter.PresenterState.BIND = r0
                com.kwad.sdk.mvp.Presenter$PresenterState$4 r0 = new com.kwad.sdk.mvp.Presenter$PresenterState$4
                r4 = 3
                java.lang.String r5 = "UNBIND"
                r0.<init>(r5, r4, r4)
                com.kwad.sdk.mvp.Presenter.PresenterState.UNBIND = r0
                com.kwad.sdk.mvp.Presenter$PresenterState$5 r0 = new com.kwad.sdk.mvp.Presenter$PresenterState$5
                r5 = 4
                java.lang.String r6 = "DESTROY"
                r0.<init>(r6, r5, r5)
                com.kwad.sdk.mvp.Presenter.PresenterState.DESTROY = r0
                r6 = 5
                com.kwad.sdk.mvp.Presenter$PresenterState[] r6 = new com.kwad.sdk.mvp.Presenter.PresenterState[r6]
                com.kwad.sdk.mvp.Presenter$PresenterState r7 = com.kwad.sdk.mvp.Presenter.PresenterState.INIT
                r6[r1] = r7
                com.kwad.sdk.mvp.Presenter$PresenterState r1 = com.kwad.sdk.mvp.Presenter.PresenterState.CREATE
                r6[r2] = r1
                com.kwad.sdk.mvp.Presenter$PresenterState r1 = com.kwad.sdk.mvp.Presenter.PresenterState.BIND
                r6[r3] = r1
                com.kwad.sdk.mvp.Presenter$PresenterState r1 = com.kwad.sdk.mvp.Presenter.PresenterState.UNBIND
                r6[r4] = r1
                r6[r5] = r0
                com.kwad.sdk.mvp.Presenter.PresenterState.$VALUES = r6
                return
        }

        PresenterState(java.lang.String r1, int r2, int r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.mIndex = r3
                return
        }

        PresenterState(java.lang.String r1, int r2, int r3, com.kwad.sdk.mvp.Presenter.1 r4) {
                r0 = this;
                r0.<init>(r1, r2, r3)
                return
        }

        public static com.kwad.sdk.mvp.Presenter.PresenterState valueOf(java.lang.String r1) {
                java.lang.Class<com.kwad.sdk.mvp.Presenter$PresenterState> r0 = com.kwad.sdk.mvp.Presenter.PresenterState.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.kwad.sdk.mvp.Presenter$PresenterState r1 = (com.kwad.sdk.mvp.Presenter.PresenterState) r1
                return r1
        }

        public static com.kwad.sdk.mvp.Presenter.PresenterState[] values() {
                com.kwad.sdk.mvp.Presenter$PresenterState[] r0 = com.kwad.sdk.mvp.Presenter.PresenterState.$VALUES
                java.lang.Object r0 = r0.clone()
                com.kwad.sdk.mvp.Presenter$PresenterState[] r0 = (com.kwad.sdk.mvp.Presenter.PresenterState[]) r0
                return r0
        }

        public int index() {
                r1 = this;
                int r0 = r1.mIndex
                return r0
        }

        abstract void performCallState(com.kwad.sdk.mvp.Presenter r1);
    }

    public Presenter() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r1.aDf = r0
            com.kwad.sdk.mvp.Presenter$PresenterState r0 = com.kwad.sdk.mvp.Presenter.PresenterState.INIT
            r1.aDh = r0
            return
    }

    private boolean Gi() {
            r2 = this;
            com.kwad.sdk.mvp.Presenter$PresenterState r0 = r2.aDh
            int r0 = r0.index()
            com.kwad.sdk.mvp.Presenter$PresenterState r1 = com.kwad.sdk.mvp.Presenter.PresenterState.CREATE
            int r1 = r1.index()
            if (r0 < r1) goto L10
            r0 = 1
            return r0
        L10:
            r0 = 0
            return r0
    }

    private void b(com.kwad.sdk.mvp.Presenter r3) {
            r2 = this;
            com.kwad.sdk.mvp.Presenter$PresenterState r0 = r2.aDh
            int r0 = r0.index()
            com.kwad.sdk.mvp.Presenter$PresenterState r1 = com.kwad.sdk.mvp.Presenter.PresenterState.UNBIND
            int r1 = r1.index()
            if (r0 >= r1) goto L49
            com.kwad.sdk.mvp.Presenter$PresenterState r0 = r3.aDh
            int r0 = r0.index()
            com.kwad.sdk.mvp.Presenter$PresenterState r1 = com.kwad.sdk.mvp.Presenter.PresenterState.UNBIND
            int r1 = r1.index()
            if (r0 < r1) goto L1d
            goto L49
        L1d:
            boolean r0 = r2.Gi()
            if (r0 == 0) goto L30
            boolean r0 = r3.Gi()
            if (r0 != 0) goto L30
            android.view.View r0 = r2.mRootView
            if (r0 == 0) goto L30
            r3.F(r0)
        L30:
            boolean r0 = r2.isBound()
            if (r0 == 0) goto L49
            boolean r0 = r3.Gi()
            if (r0 == 0) goto L49
            boolean r0 = r3.isBound()
            if (r0 != 0) goto L49
            java.lang.Object r0 = r2.aDg
            if (r0 == 0) goto L49
            r3.k(r0)
        L49:
            return
    }

    static java.util.List c(com.kwad.sdk.mvp.Presenter r0) {
            java.util.List<com.kwad.sdk.mvp.Presenter> r0 = r0.aDf
            return r0
    }

    static android.view.View d(com.kwad.sdk.mvp.Presenter r0) {
            android.view.View r0 = r0.mRootView
            return r0
    }

    static java.lang.Object e(com.kwad.sdk.mvp.Presenter r0) {
            java.lang.Object r0 = r0.aDg
            return r0
    }

    private boolean isBound() {
            r2 = this;
            com.kwad.sdk.mvp.Presenter$PresenterState r0 = r2.aDh
            com.kwad.sdk.mvp.Presenter$PresenterState r1 = com.kwad.sdk.mvp.Presenter.PresenterState.BIND
            if (r0 != r1) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    public final void F(android.view.View r2) {
            r1 = this;
            com.kwad.sdk.mvp.Presenter$PresenterState r0 = com.kwad.sdk.mvp.Presenter.PresenterState.CREATE
            r1.aDh = r0
            r1.mRootView = r2
            r1.onCreate()
            com.kwad.sdk.mvp.Presenter$PresenterState r2 = r1.aDh
            r2.performCallState(r1)
            return
    }

    public final java.util.List<com.kwad.sdk.mvp.Presenter> Gj() {
            r1 = this;
            java.util.List<com.kwad.sdk.mvp.Presenter> r0 = r1.aDf
            return r0
    }

    public final java.lang.Object Gk() {
            r1 = this;
            java.lang.Object r0 = r1.aDg
            return r0
    }

    public final void a(com.kwad.sdk.mvp.Presenter r2) {
            r1 = this;
            java.util.List<com.kwad.sdk.mvp.Presenter> r0 = r1.aDf
            r0.add(r2)
            boolean r0 = r1.Gi()
            if (r0 == 0) goto L16
            boolean r2 = r2.Gi()
            if (r2 != 0) goto L16
            android.view.View r2 = r1.mRootView
            r1.F(r2)
        L16:
            return
    }

    public final void a(com.kwad.sdk.mvp.Presenter r1, boolean r2) {
            r0 = this;
            java.util.List<com.kwad.sdk.mvp.Presenter> r2 = r0.aDf
            r2.add(r1)
            r0.b(r1)     // Catch: java.lang.Throwable -> L9
            return
        L9:
            r1 = move-exception
            com.kwad.sdk.service.c.gatherException(r1)
            com.kwad.sdk.core.e.c.printStackTrace(r1)
            return
    }

    protected void ah() {
            r0 = this;
            return
    }

    public final void destroy() {
            r2 = this;
            com.kwad.sdk.mvp.Presenter$PresenterState r0 = r2.aDh
            com.kwad.sdk.mvp.Presenter$PresenterState r1 = com.kwad.sdk.mvp.Presenter.PresenterState.BIND
            if (r0 != r1) goto L9
            r2.lI()
        L9:
            com.kwad.sdk.mvp.Presenter$PresenterState r0 = com.kwad.sdk.mvp.Presenter.PresenterState.DESTROY
            r2.aDh = r0
            r2.onDestroy()
            com.kwad.sdk.mvp.Presenter$PresenterState r0 = r2.aDh
            r0.performCallState(r2)
            return
    }

    public final <T extends android.view.View> T findViewById(int r2) {
            r1 = this;
            android.view.View r0 = r1.mRootView
            android.view.View r2 = r0.findViewById(r2)
            return r2
    }

    public final android.app.Activity getActivity() {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            android.app.Activity r0 = com.kwad.sdk.m.l.dr(r0)
            return r0
    }

    public final android.content.Context getContext() {
            r1 = this;
            android.view.View r0 = r1.mRootView
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            android.content.Context r0 = r0.getContext()
            return r0
    }

    public final android.view.View getRootView() {
            r1 = this;
            android.view.View r0 = r1.mRootView
            return r0
    }

    public final void k(java.lang.Object r3) {
            r2 = this;
            com.kwad.sdk.mvp.Presenter$PresenterState r0 = r2.aDh
            com.kwad.sdk.mvp.Presenter$PresenterState r1 = com.kwad.sdk.mvp.Presenter.PresenterState.INIT
            if (r0 == r1) goto L8
            com.kwad.sdk.mvp.Presenter$PresenterState r0 = com.kwad.sdk.mvp.Presenter.PresenterState.DESTROY
        L8:
            com.kwad.sdk.mvp.Presenter$PresenterState r0 = r2.aDh
            com.kwad.sdk.mvp.Presenter$PresenterState r1 = com.kwad.sdk.mvp.Presenter.PresenterState.BIND
            if (r0 != r1) goto L11
            r2.lI()
        L11:
            com.kwad.sdk.mvp.Presenter$PresenterState r0 = com.kwad.sdk.mvp.Presenter.PresenterState.BIND
            r2.aDh = r0
            r2.aDg = r3
            r2.ah()
            com.kwad.sdk.mvp.Presenter$PresenterState r3 = r2.aDh
            r3.performCallState(r2)
            return
    }

    public final void lI() {
            r1 = this;
            com.kwad.sdk.mvp.Presenter$PresenterState r0 = com.kwad.sdk.mvp.Presenter.PresenterState.UNBIND
            r1.aDh = r0
            r1.onUnbind()
            com.kwad.sdk.mvp.Presenter$PresenterState r0 = r1.aDh
            r0.performCallState(r1)
            return
    }

    protected void onCreate() {
            r0 = this;
            return
    }

    protected void onDestroy() {
            r0 = this;
            return
    }

    protected void onUnbind() {
            r0 = this;
            return
    }
}
