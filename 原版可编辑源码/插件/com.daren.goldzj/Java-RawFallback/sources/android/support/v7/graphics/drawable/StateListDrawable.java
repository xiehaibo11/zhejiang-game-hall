package android.support.v7.graphics.drawable;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
class StateListDrawable extends android.support.v7.graphics.drawable.DrawableContainer {
    private static final boolean DEBUG = false;
    private static final java.lang.String TAG = "StateListDrawable";
    private boolean mMutated;
    private android.support.v7.graphics.drawable.StateListDrawable.StateListState mStateListState;

    static class StateListState extends android.support.v7.graphics.drawable.DrawableContainer.DrawableContainerState {
        int[][] mStateSets;

        StateListState(android.support.v7.graphics.drawable.StateListDrawable.StateListState r1, android.support.v7.graphics.drawable.StateListDrawable r2, android.content.res.Resources r3) {
                r0 = this;
                r0.<init>(r1, r2, r3)
                if (r1 == 0) goto La
                int[][] r1 = r1.mStateSets
                r0.mStateSets = r1
                goto L12
            La:
                int r1 = r0.getCapacity()
                int[][] r1 = new int[r1][]
                r0.mStateSets = r1
            L12:
                return
        }

        int addStateSet(int[] r2, android.graphics.drawable.Drawable r3) {
                r1 = this;
                int r3 = r1.addChild(r3)
                int[][] r0 = r1.mStateSets
                r0[r3] = r2
                return r3
        }

        @Override
        public void growArray(int r3, int r4) {
                r2 = this;
                super.growArray(r3, r4)
                int[][] r4 = new int[r4][]
                int[][] r0 = r2.mStateSets
                r1 = 0
                java.lang.System.arraycopy(r0, r1, r4, r1, r3)
                r2.mStateSets = r4
                return
        }

        int indexOfStateSet(int[] r5) {
                r4 = this;
                int[][] r0 = r4.mStateSets
                int r1 = r4.getChildCount()
                r2 = 0
            L7:
                if (r2 >= r1) goto L15
                r3 = r0[r2]
                boolean r3 = android.util.StateSet.stateSetMatches(r3, r5)
                if (r3 == 0) goto L12
                return r2
            L12:
                int r2 = r2 + 1
                goto L7
            L15:
                r5 = -1
                return r5
        }

        @Override
        void mutate() {
                r4 = this;
                int[][] r0 = r4.mStateSets
                int r1 = r0.length
                int[][] r1 = new int[r1][]
                int r0 = r0.length
                int r0 = r0 + (-1)
            L8:
                if (r0 < 0) goto L1f
                int[][] r2 = r4.mStateSets
                r3 = r2[r0]
                if (r3 == 0) goto L19
                r2 = r2[r0]
                java.lang.Object r2 = r2.clone()
                int[] r2 = (int[]) r2
                goto L1a
            L19:
                r2 = 0
            L1a:
                r1[r0] = r2
                int r0 = r0 + (-1)
                goto L8
            L1f:
                r4.mStateSets = r1
                return
        }

        @Override
        @android.support.annotation.NonNull
        public android.graphics.drawable.Drawable newDrawable() {
                r2 = this;
                android.support.v7.graphics.drawable.StateListDrawable r0 = new android.support.v7.graphics.drawable.StateListDrawable
                r1 = 0
                r0.<init>(r2, r1)
                return r0
        }

        @Override
        @android.support.annotation.NonNull
        public android.graphics.drawable.Drawable newDrawable(android.content.res.Resources r2) {
                r1 = this;
                android.support.v7.graphics.drawable.StateListDrawable r0 = new android.support.v7.graphics.drawable.StateListDrawable
                r0.<init>(r1, r2)
                return r0
        }
    }

    StateListDrawable() {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r0)
            return
    }

    StateListDrawable(@android.support.annotation.Nullable android.support.v7.graphics.drawable.StateListDrawable.StateListState r1) {
            r0 = this;
            r0.<init>()
            if (r1 == 0) goto L8
            r0.setConstantState(r1)
        L8:
            return
    }

    StateListDrawable(android.support.v7.graphics.drawable.StateListDrawable.StateListState r2, android.content.res.Resources r3) {
            r1 = this;
            r1.<init>()
            android.support.v7.graphics.drawable.StateListDrawable$StateListState r0 = new android.support.v7.graphics.drawable.StateListDrawable$StateListState
            r0.<init>(r2, r1, r3)
            r1.setConstantState(r0)
            int[] r2 = r1.getState()
            r1.onStateChange(r2)
            return
    }

    private void inflateChildElements(android.content.Context r9, android.content.res.Resources r10, org.xmlpull.v1.XmlPullParser r11, android.util.AttributeSet r12, android.content.res.Resources.Theme r13) throws org.xmlpull.v1.XmlPullParserException, java.io.IOException {
            r8 = this;
            android.support.v7.graphics.drawable.StateListDrawable$StateListState r0 = r8.mStateListState
            int r1 = r11.getDepth()
            r2 = 1
            int r1 = r1 + r2
        L8:
            int r3 = r11.next()
            if (r3 == r2) goto L85
            int r4 = r11.getDepth()
            if (r4 >= r1) goto L17
            r5 = 3
            if (r3 == r5) goto L85
        L17:
            r5 = 2
            if (r3 == r5) goto L1b
            goto L8
        L1b:
            if (r4 > r1) goto L8
            java.lang.String r3 = r11.getName()
            java.lang.String r4 = "item"
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L2a
            goto L8
        L2a:
            int[] r3 = android.support.v7.appcompat.R.styleable.StateListDrawableItem
            android.content.res.TypedArray r3 = android.support.v4.content.res.TypedArrayUtils.obtainAttributes(r10, r13, r12, r3)
            r4 = 0
            int r6 = android.support.v7.appcompat.R.styleable.StateListDrawableItem_android_drawable
            r7 = -1
            int r6 = r3.getResourceId(r6, r7)
            if (r6 <= 0) goto L3e
            android.graphics.drawable.Drawable r4 = android.support.v7.content.res.AppCompatResources.getDrawable(r9, r6)
        L3e:
            r3.recycle()
            int[] r3 = r8.extractStateSet(r12)
            if (r4 != 0) goto L81
        L47:
            int r4 = r11.next()
            r6 = 4
            if (r4 != r6) goto L4f
            goto L47
        L4f:
            if (r4 != r5) goto L61
            int r4 = android.os.Build.VERSION.SDK_INT
            r5 = 21
            if (r4 < r5) goto L5c
            android.graphics.drawable.Drawable r4 = android.graphics.drawable.Drawable.createFromXmlInner(r10, r11, r12, r13)
            goto L81
        L5c:
            android.graphics.drawable.Drawable r4 = android.graphics.drawable.Drawable.createFromXmlInner(r10, r11, r12)
            goto L81
        L61:
            org.xmlpull.v1.XmlPullParserException r9 = new org.xmlpull.v1.XmlPullParserException
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = r11.getPositionDescription()
            r10.append(r11)
            java.lang.String r11 = ": <item> tag requires a 'drawable' attribute or "
            r10.append(r11)
            java.lang.String r11 = "child tag defining a drawable"
            r10.append(r11)
            java.lang.String r10 = r10.toString()
            r9.<init>(r10)
            throw r9
        L81:
            r0.addStateSet(r3, r4)
            goto L8
        L85:
            return
    }

    private void updateStateFromTypedArray(android.content.res.TypedArray r4) {
            r3 = this;
            android.support.v7.graphics.drawable.StateListDrawable$StateListState r0 = r3.mStateListState
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 21
            if (r1 < r2) goto L11
            int r1 = r0.mChangingConfigurations
            int r2 = r4.getChangingConfigurations()
            r1 = r1 | r2
            r0.mChangingConfigurations = r1
        L11:
            int r1 = android.support.v7.appcompat.R.styleable.StateListDrawable_android_variablePadding
            boolean r2 = r0.mVariablePadding
            boolean r1 = r4.getBoolean(r1, r2)
            r0.mVariablePadding = r1
            int r1 = android.support.v7.appcompat.R.styleable.StateListDrawable_android_constantSize
            boolean r2 = r0.mConstantSize
            boolean r1 = r4.getBoolean(r1, r2)
            r0.mConstantSize = r1
            int r1 = android.support.v7.appcompat.R.styleable.StateListDrawable_android_enterFadeDuration
            int r2 = r0.mEnterFadeDuration
            int r1 = r4.getInt(r1, r2)
            r0.mEnterFadeDuration = r1
            int r1 = android.support.v7.appcompat.R.styleable.StateListDrawable_android_exitFadeDuration
            int r2 = r0.mExitFadeDuration
            int r1 = r4.getInt(r1, r2)
            r0.mExitFadeDuration = r1
            int r1 = android.support.v7.appcompat.R.styleable.StateListDrawable_android_dither
            boolean r2 = r0.mDither
            boolean r4 = r4.getBoolean(r1, r2)
            r0.mDither = r4
            return
    }

    public void addState(int[] r2, android.graphics.drawable.Drawable r3) {
            r1 = this;
            if (r3 == 0) goto Le
            android.support.v7.graphics.drawable.StateListDrawable$StateListState r0 = r1.mStateListState
            r0.addStateSet(r2, r3)
            int[] r2 = r1.getState()
            r1.onStateChange(r2)
        Le:
            return
    }

    @Override
    @android.support.annotation.RequiresApi(21)
    public void applyTheme(@android.support.annotation.NonNull android.content.res.Resources.Theme r1) {
            r0 = this;
            super.applyTheme(r1)
            int[] r1 = r0.getState()
            r0.onStateChange(r1)
            return
    }

    @Override
    void clearMutated() {
            r1 = this;
            super.clearMutated()
            r0 = 0
            r1.mMutated = r0
            return
    }

    @Override
    android.support.v7.graphics.drawable.DrawableContainer.DrawableContainerState cloneConstantState() {
            r1 = this;
            android.support.v7.graphics.drawable.StateListDrawable$StateListState r0 = r1.cloneConstantState()
            return r0
    }

    @Override
    android.support.v7.graphics.drawable.StateListDrawable.StateListState cloneConstantState() {
            r3 = this;
            android.support.v7.graphics.drawable.StateListDrawable$StateListState r0 = new android.support.v7.graphics.drawable.StateListDrawable$StateListState
            android.support.v7.graphics.drawable.StateListDrawable$StateListState r1 = r3.mStateListState
            r2 = 0
            r0.<init>(r1, r3, r2)
            return r0
    }

    int[] extractStateSet(android.util.AttributeSet r9) {
            r8 = this;
            int r0 = r9.getAttributeCount()
            int[] r1 = new int[r0]
            r2 = 0
            r3 = 0
            r4 = 0
        L9:
            if (r3 >= r0) goto L2b
            int r5 = r9.getAttributeNameResource(r3)
            if (r5 == 0) goto L28
            r6 = 16842960(0x10100d0, float:2.369414E-38)
            if (r5 == r6) goto L28
            r6 = 16843161(0x1010199, float:2.3694704E-38)
            if (r5 == r6) goto L28
            int r6 = r4 + 1
            boolean r7 = r9.getAttributeBooleanValue(r3, r2)
            if (r7 == 0) goto L24
            goto L25
        L24:
            int r5 = -r5
        L25:
            r1[r4] = r5
            r4 = r6
        L28:
            int r3 = r3 + 1
            goto L9
        L2b:
            int[] r9 = android.util.StateSet.trimStateSet(r1, r4)
            return r9
    }

    int getStateCount() {
            r1 = this;
            android.support.v7.graphics.drawable.StateListDrawable$StateListState r0 = r1.mStateListState
            int r0 = r0.getChildCount()
            return r0
    }

    android.graphics.drawable.Drawable getStateDrawable(int r2) {
            r1 = this;
            android.support.v7.graphics.drawable.StateListDrawable$StateListState r0 = r1.mStateListState
            android.graphics.drawable.Drawable r2 = r0.getChild(r2)
            return r2
    }

    int getStateDrawableIndex(int[] r2) {
            r1 = this;
            android.support.v7.graphics.drawable.StateListDrawable$StateListState r0 = r1.mStateListState
            int r2 = r0.indexOfStateSet(r2)
            return r2
    }

    android.support.v7.graphics.drawable.StateListDrawable.StateListState getStateListState() {
            r1 = this;
            android.support.v7.graphics.drawable.StateListDrawable$StateListState r0 = r1.mStateListState
            return r0
    }

    int[] getStateSet(int r2) {
            r1 = this;
            android.support.v7.graphics.drawable.StateListDrawable$StateListState r0 = r1.mStateListState
            int[][] r0 = r0.mStateSets
            r2 = r0[r2]
            return r2
    }

    public void inflate(@android.support.annotation.NonNull android.content.Context r4, @android.support.annotation.NonNull android.content.res.Resources r5, @android.support.annotation.NonNull org.xmlpull.v1.XmlPullParser r6, @android.support.annotation.NonNull android.util.AttributeSet r7, @android.support.annotation.Nullable android.content.res.Resources.Theme r8) throws org.xmlpull.v1.XmlPullParserException, java.io.IOException {
            r3 = this;
            int[] r0 = android.support.v7.appcompat.R.styleable.StateListDrawable
            android.content.res.TypedArray r0 = android.support.v4.content.res.TypedArrayUtils.obtainAttributes(r5, r8, r7, r0)
            int r1 = android.support.v7.appcompat.R.styleable.StateListDrawable_android_visible
            r2 = 1
            boolean r1 = r0.getBoolean(r1, r2)
            r3.setVisible(r1, r2)
            r3.updateStateFromTypedArray(r0)
            r3.updateDensity(r5)
            r0.recycle()
            r3.inflateChildElements(r4, r5, r6, r7, r8)
            int[] r4 = r3.getState()
            r3.onStateChange(r4)
            return
    }

    @Override
    public boolean isStateful() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    @android.support.annotation.NonNull
    public android.graphics.drawable.Drawable mutate() {
            r1 = this;
            boolean r0 = r1.mMutated
            if (r0 != 0) goto L12
            android.graphics.drawable.Drawable r0 = super.mutate()
            if (r0 != r1) goto L12
            android.support.v7.graphics.drawable.StateListDrawable$StateListState r0 = r1.mStateListState
            r0.mutate()
            r0 = 1
            r1.mMutated = r0
        L12:
            return r1
    }

    @Override
    protected boolean onStateChange(int[] r3) {
            r2 = this;
            boolean r0 = super.onStateChange(r3)
            android.support.v7.graphics.drawable.StateListDrawable$StateListState r1 = r2.mStateListState
            int r3 = r1.indexOfStateSet(r3)
            if (r3 >= 0) goto L14
            android.support.v7.graphics.drawable.StateListDrawable$StateListState r3 = r2.mStateListState
            int[] r1 = android.util.StateSet.WILD_CARD
            int r3 = r3.indexOfStateSet(r1)
        L14:
            boolean r3 = r2.selectDrawable(r3)
            if (r3 != 0) goto L1f
            if (r0 == 0) goto L1d
            goto L1f
        L1d:
            r3 = 0
            goto L20
        L1f:
            r3 = 1
        L20:
            return r3
    }

    @Override
    protected void setConstantState(@android.support.annotation.NonNull android.support.v7.graphics.drawable.DrawableContainer.DrawableContainerState r2) {
            r1 = this;
            super.setConstantState(r2)
            boolean r0 = r2 instanceof android.support.v7.graphics.drawable.StateListDrawable.StateListState
            if (r0 == 0) goto Lb
            android.support.v7.graphics.drawable.StateListDrawable$StateListState r2 = (android.support.v7.graphics.drawable.StateListDrawable.StateListState) r2
            r1.mStateListState = r2
        Lb:
            return
    }
}
