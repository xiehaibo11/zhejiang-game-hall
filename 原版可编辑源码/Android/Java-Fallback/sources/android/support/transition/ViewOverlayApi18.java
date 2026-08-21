package android.support.transition;

class ViewOverlayApi18 implements android.support.transition.ViewOverlayImpl {
    private final android.view.ViewOverlay mViewOverlay;

    ViewOverlayApi18(android.view.View r1) {
            r0 = this;
            r0.<init>()
            android.view.ViewOverlay r1 = r1.getOverlay()
            r0.mViewOverlay = r1
            return
    }

    @Override
    public void add(android.graphics.drawable.Drawable r2) {
            r1 = this;
            android.view.ViewOverlay r0 = r1.mViewOverlay
            r0.add(r2)
            return
    }

    @Override
    public void clear() {
            r1 = this;
            android.view.ViewOverlay r0 = r1.mViewOverlay
            r0.clear()
            return
    }

    @Override
    public void remove(android.graphics.drawable.Drawable r2) {
            r1 = this;
            android.view.ViewOverlay r0 = r1.mViewOverlay
            r0.remove(r2)
            return
    }
}
