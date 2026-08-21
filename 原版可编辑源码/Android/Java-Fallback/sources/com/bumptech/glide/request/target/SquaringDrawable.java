package com.bumptech.glide.request.target;

public class SquaringDrawable extends com.bumptech.glide.load.resource.drawable.GlideDrawable {
    private boolean mutated;
    private com.bumptech.glide.request.target.SquaringDrawable.State state;
    private com.bumptech.glide.load.resource.drawable.GlideDrawable wrapped;

    static class State extends android.graphics.drawable.Drawable.ConstantState {
        private final int side;
        private final android.graphics.drawable.Drawable.ConstantState wrapped;

        State(android.graphics.drawable.Drawable.ConstantState r1, int r2) {
                r0 = this;
                r0.<init>()
                r0.wrapped = r1
                r0.side = r2
                return
        }

        State(com.bumptech.glide.request.target.SquaringDrawable.State r2) {
                r1 = this;
                android.graphics.drawable.Drawable$ConstantState r0 = r2.wrapped
                int r2 = r2.side
                r1.<init>(r0, r2)
                return
        }

        static android.graphics.drawable.Drawable.ConstantState access$000(com.bumptech.glide.request.target.SquaringDrawable.State r0) {
                android.graphics.drawable.Drawable$ConstantState r0 = r0.wrapped
                return r0
        }

        static int access$100(com.bumptech.glide.request.target.SquaringDrawable.State r0) {
                int r0 = r0.side
                return r0
        }

        @Override
        public int getChangingConfigurations() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public android.graphics.drawable.Drawable newDrawable() {
                r1 = this;
                r0 = 0
                android.graphics.drawable.Drawable r0 = r1.newDrawable(r0)
                return r0
        }

        @Override
        public android.graphics.drawable.Drawable newDrawable(android.content.res.Resources r3) {
                r2 = this;
                com.bumptech.glide.request.target.SquaringDrawable r0 = new com.bumptech.glide.request.target.SquaringDrawable
                r1 = 0
                r0.<init>(r2, r1, r3)
                return r0
        }
    }

    public SquaringDrawable(com.bumptech.glide.load.resource.drawable.GlideDrawable r3, int r4) {
            r2 = this;
            com.bumptech.glide.request.target.SquaringDrawable$State r0 = new com.bumptech.glide.request.target.SquaringDrawable$State
            android.graphics.drawable.Drawable$ConstantState r1 = r3.getConstantState()
            r0.<init>(r1, r4)
            r4 = 0
            r2.<init>(r0, r3, r4)
            return
    }

    SquaringDrawable(com.bumptech.glide.request.target.SquaringDrawable.State r1, com.bumptech.glide.load.resource.drawable.GlideDrawable r2, android.content.res.Resources r3) {
            r0 = this;
            r0.<init>()
            r0.state = r1
            if (r2 != 0) goto L23
            if (r3 == 0) goto L16
            android.graphics.drawable.Drawable$ConstantState r1 = com.bumptech.glide.request.target.SquaringDrawable.State.access$000(r1)
            android.graphics.drawable.Drawable r1 = r1.newDrawable(r3)
            com.bumptech.glide.load.resource.drawable.GlideDrawable r1 = (com.bumptech.glide.load.resource.drawable.GlideDrawable) r1
            r0.wrapped = r1
            goto L25
        L16:
            android.graphics.drawable.Drawable$ConstantState r1 = com.bumptech.glide.request.target.SquaringDrawable.State.access$000(r1)
            android.graphics.drawable.Drawable r1 = r1.newDrawable()
            com.bumptech.glide.load.resource.drawable.GlideDrawable r1 = (com.bumptech.glide.load.resource.drawable.GlideDrawable) r1
            r0.wrapped = r1
            goto L25
        L23:
            r0.wrapped = r2
        L25:
            return
    }

    @Override
    public void clearColorFilter() {
            r1 = this;
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r1.wrapped
            r0.clearColorFilter()
            return
    }

    @Override
    public void draw(android.graphics.Canvas r2) {
            r1 = this;
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r1.wrapped
            r0.draw(r2)
            return
    }

    @Override
    public int getAlpha() {
            r1 = this;
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r1.wrapped
            int r0 = r0.getAlpha()
            return r0
    }

    @Override
    public android.graphics.drawable.Drawable.Callback getCallback() {
            r1 = this;
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r1.wrapped
            android.graphics.drawable.Drawable$Callback r0 = r0.getCallback()
            return r0
    }

    @Override
    public int getChangingConfigurations() {
            r1 = this;
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r1.wrapped
            int r0 = r0.getChangingConfigurations()
            return r0
    }

    @Override
    public android.graphics.drawable.Drawable.ConstantState getConstantState() {
            r1 = this;
            com.bumptech.glide.request.target.SquaringDrawable$State r0 = r1.state
            return r0
    }

    @Override
    public android.graphics.drawable.Drawable getCurrent() {
            r1 = this;
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r1.wrapped
            android.graphics.drawable.Drawable r0 = r0.getCurrent()
            return r0
    }

    @Override
    public int getIntrinsicHeight() {
            r1 = this;
            com.bumptech.glide.request.target.SquaringDrawable$State r0 = r1.state
            int r0 = com.bumptech.glide.request.target.SquaringDrawable.State.access$100(r0)
            return r0
    }

    @Override
    public int getIntrinsicWidth() {
            r1 = this;
            com.bumptech.glide.request.target.SquaringDrawable$State r0 = r1.state
            int r0 = com.bumptech.glide.request.target.SquaringDrawable.State.access$100(r0)
            return r0
    }

    @Override
    public int getMinimumHeight() {
            r1 = this;
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r1.wrapped
            int r0 = r0.getMinimumHeight()
            return r0
    }

    @Override
    public int getMinimumWidth() {
            r1 = this;
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r1.wrapped
            int r0 = r0.getMinimumWidth()
            return r0
    }

    @Override
    public int getOpacity() {
            r1 = this;
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r1.wrapped
            int r0 = r0.getOpacity()
            return r0
    }

    @Override
    public boolean getPadding(android.graphics.Rect r2) {
            r1 = this;
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r1.wrapped
            boolean r2 = r0.getPadding(r2)
            return r2
    }

    @Override
    public void invalidateSelf() {
            r1 = this;
            super.invalidateSelf()
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r1.wrapped
            r0.invalidateSelf()
            return
    }

    @Override
    public boolean isAnimated() {
            r1 = this;
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r1.wrapped
            boolean r0 = r0.isAnimated()
            return r0
    }

    @Override
    public boolean isRunning() {
            r1 = this;
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r1.wrapped
            boolean r0 = r0.isRunning()
            return r0
    }

    @Override
    public android.graphics.drawable.Drawable mutate() {
            r2 = this;
            boolean r0 = r2.mutated
            if (r0 != 0) goto L20
            android.graphics.drawable.Drawable r0 = super.mutate()
            if (r0 != r2) goto L20
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r2.wrapped
            android.graphics.drawable.Drawable r0 = r0.mutate()
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = (com.bumptech.glide.load.resource.drawable.GlideDrawable) r0
            r2.wrapped = r0
            com.bumptech.glide.request.target.SquaringDrawable$State r0 = new com.bumptech.glide.request.target.SquaringDrawable$State
            com.bumptech.glide.request.target.SquaringDrawable$State r1 = r2.state
            r0.<init>(r1)
            r2.state = r0
            r0 = 1
            r2.mutated = r0
        L20:
            return r2
    }

    @Override
    public void scheduleSelf(java.lang.Runnable r2, long r3) {
            r1 = this;
            super.scheduleSelf(r2, r3)
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r1.wrapped
            r0.scheduleSelf(r2, r3)
            return
    }

    @Override
    public void setAlpha(int r2) {
            r1 = this;
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r1.wrapped
            r0.setAlpha(r2)
            return
    }

    @Override
    public void setBounds(int r2, int r3, int r4, int r5) {
            r1 = this;
            super.setBounds(r2, r3, r4, r5)
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r1.wrapped
            r0.setBounds(r2, r3, r4, r5)
            return
    }

    @Override
    public void setBounds(android.graphics.Rect r2) {
            r1 = this;
            super.setBounds(r2)
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r1.wrapped
            r0.setBounds(r2)
            return
    }

    @Override
    public void setChangingConfigurations(int r2) {
            r1 = this;
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r1.wrapped
            r0.setChangingConfigurations(r2)
            return
    }

    @Override
    public void setColorFilter(int r2, android.graphics.PorterDuff.Mode r3) {
            r1 = this;
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r1.wrapped
            r0.setColorFilter(r2, r3)
            return
    }

    @Override
    public void setColorFilter(android.graphics.ColorFilter r2) {
            r1 = this;
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r1.wrapped
            r0.setColorFilter(r2)
            return
    }

    @Override
    public void setDither(boolean r2) {
            r1 = this;
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r1.wrapped
            r0.setDither(r2)
            return
    }

    @Override
    public void setFilterBitmap(boolean r2) {
            r1 = this;
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r1.wrapped
            r0.setFilterBitmap(r2)
            return
    }

    @Override
    public void setLoopCount(int r2) {
            r1 = this;
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r1.wrapped
            r0.setLoopCount(r2)
            return
    }

    @Override
    public boolean setVisible(boolean r2, boolean r3) {
            r1 = this;
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r1.wrapped
            boolean r2 = r0.setVisible(r2, r3)
            return r2
    }

    @Override
    public void start() {
            r1 = this;
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r1.wrapped
            r0.start()
            return
    }

    @Override
    public void stop() {
            r1 = this;
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r1.wrapped
            r0.stop()
            return
    }

    @Override
    public void unscheduleSelf(java.lang.Runnable r2) {
            r1 = this;
            super.unscheduleSelf(r2)
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r1.wrapped
            r0.unscheduleSelf(r2)
            return
    }
}
