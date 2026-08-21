package android.support.transition;

class ViewGroupOverlayApi14 extends android.support.transition.ViewOverlayApi14 implements android.support.transition.ViewGroupOverlayImpl {
    ViewGroupOverlayApi14(android.content.Context r1, android.view.ViewGroup r2, android.view.View r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    static android.support.transition.ViewGroupOverlayApi14 createFrom(android.view.ViewGroup r0) {
            android.support.transition.ViewOverlayApi14 r0 = android.support.transition.ViewOverlayApi14.createFrom(r0)
            android.support.transition.ViewGroupOverlayApi14 r0 = (android.support.transition.ViewGroupOverlayApi14) r0
            return r0
    }

    @Override
    public void add(android.view.View r2) {
            r1 = this;
            android.support.transition.ViewOverlayApi14$OverlayViewGroup r0 = r1.mOverlayViewGroup
            r0.add(r2)
            return
    }

    @Override
    public void remove(android.view.View r2) {
            r1 = this;
            android.support.transition.ViewOverlayApi14$OverlayViewGroup r0 = r1.mOverlayViewGroup
            r0.remove(r2)
            return
    }
}
