package android.support.transition;

class ViewGroupOverlayApi18 implements android.support.transition.ViewGroupOverlayImpl {
    private final android.view.ViewGroupOverlay mViewGroupOverlay;

    ViewGroupOverlayApi18(android.view.ViewGroup r1) {
            r0 = this;
            r0.<init>()
            android.view.ViewGroupOverlay r1 = r1.getOverlay()
            r0.mViewGroupOverlay = r1
            return
    }

    @Override
    public void add(android.graphics.drawable.Drawable r2) {
            r1 = this;
            android.view.ViewGroupOverlay r0 = r1.mViewGroupOverlay
            r0.add(r2)
            return
    }

    @Override
    public void add(android.view.View r2) {
            r1 = this;
            android.view.ViewGroupOverlay r0 = r1.mViewGroupOverlay
            r0.add(r2)
            return
    }

    @Override
    public void clear() {
            r1 = this;
            android.view.ViewGroupOverlay r0 = r1.mViewGroupOverlay
            r0.clear()
            return
    }

    @Override
    public void remove(android.graphics.drawable.Drawable r2) {
            r1 = this;
            android.view.ViewGroupOverlay r0 = r1.mViewGroupOverlay
            r0.remove(r2)
            return
    }

    @Override
    public void remove(android.view.View r2) {
            r1 = this;
            android.view.ViewGroupOverlay r0 = r1.mViewGroupOverlay
            r0.remove(r2)
            return
    }
}
