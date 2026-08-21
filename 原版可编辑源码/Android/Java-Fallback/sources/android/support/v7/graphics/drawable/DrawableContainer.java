package android.support.v7.graphics.drawable;

class DrawableContainer extends android.graphics.drawable.Drawable implements android.graphics.drawable.Drawable.Callback {
    private static final boolean DEBUG = false;
    private static final boolean DEFAULT_DITHER = true;
    private static final java.lang.String TAG = "DrawableContainer";
    private int mAlpha;
    private java.lang.Runnable mAnimationRunnable;
    private android.support.v7.graphics.drawable.DrawableContainer.BlockInvalidateCallback mBlockInvalidateCallback;
    private int mCurIndex;
    private android.graphics.drawable.Drawable mCurrDrawable;
    private android.support.v7.graphics.drawable.DrawableContainer.DrawableContainerState mDrawableContainerState;
    private long mEnterAnimationEnd;
    private long mExitAnimationEnd;
    private boolean mHasAlpha;
    private android.graphics.Rect mHotspotBounds;
    private android.graphics.drawable.Drawable mLastDrawable;
    private int mLastIndex;
    private boolean mMutated;


    static class BlockInvalidateCallback implements android.graphics.drawable.Drawable.Callback {
        private android.graphics.drawable.Drawable.Callback mCallback;

        BlockInvalidateCallback() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void invalidateDrawable(android.graphics.drawable.Drawable r1) {
                r0 = this;
                return
        }

        @Override
        public void scheduleDrawable(android.graphics.drawable.Drawable r2, java.lang.Runnable r3, long r4) {
                r1 = this;
                android.graphics.drawable.Drawable$Callback r0 = r1.mCallback
                if (r0 == 0) goto L7
                r0.scheduleDrawable(r2, r3, r4)
            L7:
                return
        }

        @Override
        public void unscheduleDrawable(android.graphics.drawable.Drawable r2, java.lang.Runnable r3) {
                r1 = this;
                android.graphics.drawable.Drawable$Callback r0 = r1.mCallback
                if (r0 == 0) goto L7
                r0.unscheduleDrawable(r2, r3)
            L7:
                return
        }

        public android.graphics.drawable.Drawable.Callback unwrap() {
                r2 = this;
                android.graphics.drawable.Drawable$Callback r0 = r2.mCallback
                r1 = 0
                r2.mCallback = r1
                return r0
        }

        public android.support.v7.graphics.drawable.DrawableContainer.BlockInvalidateCallback wrap(android.graphics.drawable.Drawable.Callback r1) {
                r0 = this;
                r0.mCallback = r1
                return r0
        }
    }

    static abstract class DrawableContainerState extends android.graphics.drawable.Drawable.ConstantState {
        boolean mAutoMirrored;
        boolean mCanConstantState;
        int mChangingConfigurations;
        boolean mCheckedConstantSize;
        boolean mCheckedConstantState;
        boolean mCheckedOpacity;
        boolean mCheckedPadding;
        boolean mCheckedStateful;
        int mChildrenChangingConfigurations;
        android.graphics.ColorFilter mColorFilter;
        int mConstantHeight;
        int mConstantMinimumHeight;
        int mConstantMinimumWidth;
        android.graphics.Rect mConstantPadding;
        boolean mConstantSize;
        int mConstantWidth;
        int mDensity;
        boolean mDither;
        android.util.SparseArray<android.graphics.drawable.Drawable.ConstantState> mDrawableFutures;
        android.graphics.drawable.Drawable[] mDrawables;
        int mEnterFadeDuration;
        int mExitFadeDuration;
        boolean mHasColorFilter;
        boolean mHasTintList;
        boolean mHasTintMode;
        int mLayoutDirection;
        boolean mMutated;
        int mNumChildren;
        int mOpacity;
        final android.support.v7.graphics.drawable.DrawableContainer mOwner;
        android.content.res.Resources mSourceRes;
        boolean mStateful;
        android.content.res.ColorStateList mTintList;
        android.graphics.PorterDuff.Mode mTintMode;
        boolean mVariablePadding;

        DrawableContainerState(android.support.v7.graphics.drawable.DrawableContainer.DrawableContainerState r3, android.support.v7.graphics.drawable.DrawableContainer r4, android.content.res.Resources r5) {
                r2 = this;
                r2.<init>()
                r0 = 160(0xa0, float:2.24E-43)
                r2.mDensity = r0
                r0 = 0
                r2.mVariablePadding = r0
                r2.mConstantSize = r0
                r1 = 1
                r2.mDither = r1
                r2.mEnterFadeDuration = r0
                r2.mExitFadeDuration = r0
                r2.mOwner = r4
                if (r5 == 0) goto L19
                r4 = r5
                goto L1f
            L19:
                if (r3 == 0) goto L1e
                android.content.res.Resources r4 = r3.mSourceRes
                goto L1f
            L1e:
                r4 = 0
            L1f:
                r2.mSourceRes = r4
                if (r3 == 0) goto L26
                int r4 = r3.mDensity
                goto L27
            L26:
                r4 = r0
            L27:
                int r4 = android.support.v7.graphics.drawable.DrawableContainer.resolveDensity(r5, r4)
                r2.mDensity = r4
                if (r3 == 0) goto Lee
                int r5 = r3.mChangingConfigurations
                r2.mChangingConfigurations = r5
                int r5 = r3.mChildrenChangingConfigurations
                r2.mChildrenChangingConfigurations = r5
                r2.mCheckedConstantState = r1
                r2.mCanConstantState = r1
                boolean r5 = r3.mVariablePadding
                r2.mVariablePadding = r5
                boolean r5 = r3.mConstantSize
                r2.mConstantSize = r5
                boolean r5 = r3.mDither
                r2.mDither = r5
                boolean r5 = r3.mMutated
                r2.mMutated = r5
                int r5 = r3.mLayoutDirection
                r2.mLayoutDirection = r5
                int r5 = r3.mEnterFadeDuration
                r2.mEnterFadeDuration = r5
                int r5 = r3.mExitFadeDuration
                r2.mExitFadeDuration = r5
                boolean r5 = r3.mAutoMirrored
                r2.mAutoMirrored = r5
                android.graphics.ColorFilter r5 = r3.mColorFilter
                r2.mColorFilter = r5
                boolean r5 = r3.mHasColorFilter
                r2.mHasColorFilter = r5
                android.content.res.ColorStateList r5 = r3.mTintList
                r2.mTintList = r5
                android.graphics.PorterDuff$Mode r5 = r3.mTintMode
                r2.mTintMode = r5
                boolean r5 = r3.mHasTintList
                r2.mHasTintList = r5
                boolean r5 = r3.mHasTintMode
                r2.mHasTintMode = r5
                int r5 = r3.mDensity
                if (r5 != r4) goto L9c
                boolean r4 = r3.mCheckedPadding
                if (r4 == 0) goto L86
                android.graphics.Rect r4 = new android.graphics.Rect
                android.graphics.Rect r5 = r3.mConstantPadding
                r4.<init>(r5)
                r2.mConstantPadding = r4
                r2.mCheckedPadding = r1
            L86:
                boolean r4 = r3.mCheckedConstantSize
                if (r4 == 0) goto L9c
                int r4 = r3.mConstantWidth
                r2.mConstantWidth = r4
                int r4 = r3.mConstantHeight
                r2.mConstantHeight = r4
                int r4 = r3.mConstantMinimumWidth
                r2.mConstantMinimumWidth = r4
                int r4 = r3.mConstantMinimumHeight
                r2.mConstantMinimumHeight = r4
                r2.mCheckedConstantSize = r1
            L9c:
                boolean r4 = r3.mCheckedOpacity
                if (r4 == 0) goto La6
                int r4 = r3.mOpacity
                r2.mOpacity = r4
                r2.mCheckedOpacity = r1
            La6:
                boolean r4 = r3.mCheckedStateful
                if (r4 == 0) goto Lb0
                boolean r4 = r3.mStateful
                r2.mStateful = r4
                r2.mCheckedStateful = r1
            Lb0:
                android.graphics.drawable.Drawable[] r4 = r3.mDrawables
                int r5 = r4.length
                android.graphics.drawable.Drawable[] r5 = new android.graphics.drawable.Drawable[r5]
                r2.mDrawables = r5
                int r5 = r3.mNumChildren
                r2.mNumChildren = r5
                android.util.SparseArray<android.graphics.drawable.Drawable$ConstantState> r3 = r3.mDrawableFutures
                if (r3 == 0) goto Lc6
                android.util.SparseArray r3 = r3.clone()
                r2.mDrawableFutures = r3
                goto Lcf
            Lc6:
                android.util.SparseArray r3 = new android.util.SparseArray
                int r5 = r2.mNumChildren
                r3.<init>(r5)
                r2.mDrawableFutures = r3
            Lcf:
                int r3 = r2.mNumChildren
            Ld1:
                if (r0 >= r3) goto Lf6
                r5 = r4[r0]
                if (r5 == 0) goto Leb
                r5 = r4[r0]
                android.graphics.drawable.Drawable$ConstantState r5 = r5.getConstantState()
                if (r5 == 0) goto Le5
                android.util.SparseArray<android.graphics.drawable.Drawable$ConstantState> r1 = r2.mDrawableFutures
                r1.put(r0, r5)
                goto Leb
            Le5:
                android.graphics.drawable.Drawable[] r5 = r2.mDrawables
                r1 = r4[r0]
                r5[r0] = r1
            Leb:
                int r0 = r0 + 1
                goto Ld1
            Lee:
                r3 = 10
                android.graphics.drawable.Drawable[] r3 = new android.graphics.drawable.Drawable[r3]
                r2.mDrawables = r3
                r2.mNumChildren = r0
            Lf6:
                return
        }

        private void createAllFutures() {
                r6 = this;
                android.util.SparseArray<android.graphics.drawable.Drawable$ConstantState> r0 = r6.mDrawableFutures
                if (r0 == 0) goto L2d
                int r0 = r0.size()
                r1 = 0
            L9:
                if (r1 >= r0) goto L2a
                android.util.SparseArray<android.graphics.drawable.Drawable$ConstantState> r2 = r6.mDrawableFutures
                int r2 = r2.keyAt(r1)
                android.util.SparseArray<android.graphics.drawable.Drawable$ConstantState> r3 = r6.mDrawableFutures
                java.lang.Object r3 = r3.valueAt(r1)
                android.graphics.drawable.Drawable$ConstantState r3 = (android.graphics.drawable.Drawable.ConstantState) r3
                android.graphics.drawable.Drawable[] r4 = r6.mDrawables
                android.content.res.Resources r5 = r6.mSourceRes
                android.graphics.drawable.Drawable r3 = r3.newDrawable(r5)
                android.graphics.drawable.Drawable r3 = r6.prepareDrawable(r3)
                r4[r2] = r3
                int r1 = r1 + 1
                goto L9
            L2a:
                r0 = 0
                r6.mDrawableFutures = r0
            L2d:
                return
        }

        private android.graphics.drawable.Drawable prepareDrawable(android.graphics.drawable.Drawable r3) {
                r2 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 23
                if (r0 < r1) goto Lb
                int r0 = r2.mLayoutDirection
                r3.setLayoutDirection(r0)
            Lb:
                android.graphics.drawable.Drawable r3 = r3.mutate()
                android.support.v7.graphics.drawable.DrawableContainer r0 = r2.mOwner
                r3.setCallback(r0)
                return r3
        }

        public final int addChild(android.graphics.drawable.Drawable r5) {
                r4 = this;
                int r0 = r4.mNumChildren
                android.graphics.drawable.Drawable[] r1 = r4.mDrawables
                int r1 = r1.length
                if (r0 < r1) goto Lc
                int r1 = r0 + 10
                r4.growArray(r0, r1)
            Lc:
                r5.mutate()
                r1 = 1
                r2 = 0
                r5.setVisible(r2, r1)
                android.support.v7.graphics.drawable.DrawableContainer r3 = r4.mOwner
                r5.setCallback(r3)
                android.graphics.drawable.Drawable[] r3 = r4.mDrawables
                r3[r0] = r5
                int r3 = r4.mNumChildren
                int r3 = r3 + r1
                r4.mNumChildren = r3
                int r1 = r4.mChildrenChangingConfigurations
                int r5 = r5.getChangingConfigurations()
                r5 = r5 | r1
                r4.mChildrenChangingConfigurations = r5
                r4.invalidateCache()
                r5 = 0
                r4.mConstantPadding = r5
                r4.mCheckedPadding = r2
                r4.mCheckedConstantSize = r2
                r4.mCheckedConstantState = r2
                return r0
        }

        final void applyTheme(android.content.res.Resources.Theme r6) {
                r5 = this;
                if (r6 == 0) goto L32
                r5.createAllFutures()
                int r0 = r5.mNumChildren
                android.graphics.drawable.Drawable[] r1 = r5.mDrawables
                r2 = 0
            La:
                if (r2 >= r0) goto L2b
                r3 = r1[r2]
                if (r3 == 0) goto L28
                r3 = r1[r2]
                boolean r3 = r3.canApplyTheme()
                if (r3 == 0) goto L28
                r3 = r1[r2]
                r3.applyTheme(r6)
                int r3 = r5.mChildrenChangingConfigurations
                r4 = r1[r2]
                int r4 = r4.getChangingConfigurations()
                r3 = r3 | r4
                r5.mChildrenChangingConfigurations = r3
            L28:
                int r2 = r2 + 1
                goto La
            L2b:
                android.content.res.Resources r6 = r6.getResources()
                r5.updateDensity(r6)
            L32:
                return
        }

        @Override
        public boolean canApplyTheme() {
                r6 = this;
                int r0 = r6.mNumChildren
                android.graphics.drawable.Drawable[] r1 = r6.mDrawables
                r2 = 0
                r3 = r2
            L6:
                if (r3 >= r0) goto L28
                r4 = r1[r3]
                r5 = 1
                if (r4 == 0) goto L14
                boolean r4 = r4.canApplyTheme()
                if (r4 == 0) goto L25
                return r5
            L14:
                android.util.SparseArray<android.graphics.drawable.Drawable$ConstantState> r4 = r6.mDrawableFutures
                java.lang.Object r4 = r4.get(r3)
                android.graphics.drawable.Drawable$ConstantState r4 = (android.graphics.drawable.Drawable.ConstantState) r4
                if (r4 == 0) goto L25
                boolean r4 = r4.canApplyTheme()
                if (r4 == 0) goto L25
                return r5
            L25:
                int r3 = r3 + 1
                goto L6
            L28:
                return r2
        }

        public synchronized boolean canConstantState() {
                r6 = this;
                monitor-enter(r6)
                boolean r0 = r6.mCheckedConstantState     // Catch: java.lang.Throwable -> L2a
                if (r0 == 0) goto L9
                boolean r0 = r6.mCanConstantState     // Catch: java.lang.Throwable -> L2a
                monitor-exit(r6)
                return r0
            L9:
                r6.createAllFutures()     // Catch: java.lang.Throwable -> L2a
                r0 = 1
                r6.mCheckedConstantState = r0     // Catch: java.lang.Throwable -> L2a
                int r1 = r6.mNumChildren     // Catch: java.lang.Throwable -> L2a
                android.graphics.drawable.Drawable[] r2 = r6.mDrawables     // Catch: java.lang.Throwable -> L2a
                r3 = 0
                r4 = r3
            L15:
                if (r4 >= r1) goto L26
                r5 = r2[r4]     // Catch: java.lang.Throwable -> L2a
                android.graphics.drawable.Drawable$ConstantState r5 = r5.getConstantState()     // Catch: java.lang.Throwable -> L2a
                if (r5 != 0) goto L23
                r6.mCanConstantState = r3     // Catch: java.lang.Throwable -> L2a
                monitor-exit(r6)
                return r3
            L23:
                int r4 = r4 + 1
                goto L15
            L26:
                r6.mCanConstantState = r0     // Catch: java.lang.Throwable -> L2a
                monitor-exit(r6)
                return r0
            L2a:
                r0 = move-exception
                monitor-exit(r6)
                throw r0
        }

        final void clearMutated() {
                r1 = this;
                r0 = 0
                r1.mMutated = r0
                return
        }

        protected void computeConstantSize() {
                r6 = this;
                r0 = 1
                r6.mCheckedConstantSize = r0
                r6.createAllFutures()
                int r0 = r6.mNumChildren
                android.graphics.drawable.Drawable[] r1 = r6.mDrawables
                r2 = -1
                r6.mConstantHeight = r2
                r6.mConstantWidth = r2
                r2 = 0
                r6.mConstantMinimumHeight = r2
                r6.mConstantMinimumWidth = r2
            L14:
                if (r2 >= r0) goto L43
                r3 = r1[r2]
                int r4 = r3.getIntrinsicWidth()
                int r5 = r6.mConstantWidth
                if (r4 <= r5) goto L22
                r6.mConstantWidth = r4
            L22:
                int r4 = r3.getIntrinsicHeight()
                int r5 = r6.mConstantHeight
                if (r4 <= r5) goto L2c
                r6.mConstantHeight = r4
            L2c:
                int r4 = r3.getMinimumWidth()
                int r5 = r6.mConstantMinimumWidth
                if (r4 <= r5) goto L36
                r6.mConstantMinimumWidth = r4
            L36:
                int r3 = r3.getMinimumHeight()
                int r4 = r6.mConstantMinimumHeight
                if (r3 <= r4) goto L40
                r6.mConstantMinimumHeight = r3
            L40:
                int r2 = r2 + 1
                goto L14
            L43:
                return
        }

        final int getCapacity() {
                r1 = this;
                android.graphics.drawable.Drawable[] r0 = r1.mDrawables
                int r0 = r0.length
                return r0
        }

        @Override
        public int getChangingConfigurations() {
                r2 = this;
                int r0 = r2.mChangingConfigurations
                int r1 = r2.mChildrenChangingConfigurations
                r0 = r0 | r1
                return r0
        }

        public final android.graphics.drawable.Drawable getChild(int r5) {
                r4 = this;
                android.graphics.drawable.Drawable[] r0 = r4.mDrawables
                r0 = r0[r5]
                if (r0 == 0) goto L7
                return r0
            L7:
                android.util.SparseArray<android.graphics.drawable.Drawable$ConstantState> r0 = r4.mDrawableFutures
                r1 = 0
                if (r0 == 0) goto L38
                int r0 = r0.indexOfKey(r5)
                if (r0 < 0) goto L38
                android.util.SparseArray<android.graphics.drawable.Drawable$ConstantState> r2 = r4.mDrawableFutures
                java.lang.Object r2 = r2.valueAt(r0)
                android.graphics.drawable.Drawable$ConstantState r2 = (android.graphics.drawable.Drawable.ConstantState) r2
                android.content.res.Resources r3 = r4.mSourceRes
                android.graphics.drawable.Drawable r2 = r2.newDrawable(r3)
                android.graphics.drawable.Drawable r2 = r4.prepareDrawable(r2)
                android.graphics.drawable.Drawable[] r3 = r4.mDrawables
                r3[r5] = r2
                android.util.SparseArray<android.graphics.drawable.Drawable$ConstantState> r5 = r4.mDrawableFutures
                r5.removeAt(r0)
                android.util.SparseArray<android.graphics.drawable.Drawable$ConstantState> r5 = r4.mDrawableFutures
                int r5 = r5.size()
                if (r5 != 0) goto L37
                r4.mDrawableFutures = r1
            L37:
                return r2
            L38:
                return r1
        }

        public final int getChildCount() {
                r1 = this;
                int r0 = r1.mNumChildren
                return r0
        }

        public final int getConstantHeight() {
                r1 = this;
                boolean r0 = r1.mCheckedConstantSize
                if (r0 != 0) goto L7
                r1.computeConstantSize()
            L7:
                int r0 = r1.mConstantHeight
                return r0
        }

        public final int getConstantMinimumHeight() {
                r1 = this;
                boolean r0 = r1.mCheckedConstantSize
                if (r0 != 0) goto L7
                r1.computeConstantSize()
            L7:
                int r0 = r1.mConstantMinimumHeight
                return r0
        }

        public final int getConstantMinimumWidth() {
                r1 = this;
                boolean r0 = r1.mCheckedConstantSize
                if (r0 != 0) goto L7
                r1.computeConstantSize()
            L7:
                int r0 = r1.mConstantMinimumWidth
                return r0
        }

        public final android.graphics.Rect getConstantPadding() {
                r8 = this;
                boolean r0 = r8.mVariablePadding
                r1 = 0
                if (r0 == 0) goto L6
                return r1
            L6:
                android.graphics.Rect r0 = r8.mConstantPadding
                if (r0 != 0) goto L5f
                boolean r0 = r8.mCheckedPadding
                if (r0 == 0) goto Lf
                goto L5f
            Lf:
                r8.createAllFutures()
                android.graphics.Rect r0 = new android.graphics.Rect
                r0.<init>()
                int r2 = r8.mNumChildren
                android.graphics.drawable.Drawable[] r3 = r8.mDrawables
                r4 = 0
                r5 = r4
            L1d:
                if (r5 >= r2) goto L59
                r6 = r3[r5]
                boolean r6 = r6.getPadding(r0)
                if (r6 == 0) goto L56
                if (r1 != 0) goto L2e
                android.graphics.Rect r1 = new android.graphics.Rect
                r1.<init>(r4, r4, r4, r4)
            L2e:
                int r6 = r0.left
                int r7 = r1.left
                if (r6 <= r7) goto L38
                int r6 = r0.left
                r1.left = r6
            L38:
                int r6 = r0.top
                int r7 = r1.top
                if (r6 <= r7) goto L42
                int r6 = r0.top
                r1.top = r6
            L42:
                int r6 = r0.right
                int r7 = r1.right
                if (r6 <= r7) goto L4c
                int r6 = r0.right
                r1.right = r6
            L4c:
                int r6 = r0.bottom
                int r7 = r1.bottom
                if (r6 <= r7) goto L56
                int r6 = r0.bottom
                r1.bottom = r6
            L56:
                int r5 = r5 + 1
                goto L1d
            L59:
                r0 = 1
                r8.mCheckedPadding = r0
                r8.mConstantPadding = r1
                return r1
            L5f:
                android.graphics.Rect r0 = r8.mConstantPadding
                return r0
        }

        public final int getConstantWidth() {
                r1 = this;
                boolean r0 = r1.mCheckedConstantSize
                if (r0 != 0) goto L7
                r1.computeConstantSize()
            L7:
                int r0 = r1.mConstantWidth
                return r0
        }

        public final int getEnterFadeDuration() {
                r1 = this;
                int r0 = r1.mEnterFadeDuration
                return r0
        }

        public final int getExitFadeDuration() {
                r1 = this;
                int r0 = r1.mExitFadeDuration
                return r0
        }

        public final int getOpacity() {
                r6 = this;
                boolean r0 = r6.mCheckedOpacity
                if (r0 == 0) goto L7
                int r0 = r6.mOpacity
                return r0
            L7:
                r6.createAllFutures()
                int r0 = r6.mNumChildren
                android.graphics.drawable.Drawable[] r1 = r6.mDrawables
                if (r0 <= 0) goto L18
                r2 = 0
                r2 = r1[r2]
                int r2 = r2.getOpacity()
                goto L19
            L18:
                r2 = -2
            L19:
                r3 = 1
                r4 = r3
            L1b:
                if (r4 >= r0) goto L2a
                r5 = r1[r4]
                int r5 = r5.getOpacity()
                int r2 = android.graphics.drawable.Drawable.resolveOpacity(r2, r5)
                int r4 = r4 + 1
                goto L1b
            L2a:
                r6.mOpacity = r2
                r6.mCheckedOpacity = r3
                return r2
        }

        public void growArray(int r3, int r4) {
                r2 = this;
                android.graphics.drawable.Drawable[] r4 = new android.graphics.drawable.Drawable[r4]
                android.graphics.drawable.Drawable[] r0 = r2.mDrawables
                r1 = 0
                java.lang.System.arraycopy(r0, r1, r4, r1, r3)
                r2.mDrawables = r4
                return
        }

        void invalidateCache() {
                r1 = this;
                r0 = 0
                r1.mCheckedOpacity = r0
                r1.mCheckedStateful = r0
                return
        }

        public final boolean isConstantSize() {
                r1 = this;
                boolean r0 = r1.mConstantSize
                return r0
        }

        public final boolean isStateful() {
                r6 = this;
                boolean r0 = r6.mCheckedStateful
                if (r0 == 0) goto L7
                boolean r0 = r6.mStateful
                return r0
            L7:
                r6.createAllFutures()
                int r0 = r6.mNumChildren
                android.graphics.drawable.Drawable[] r1 = r6.mDrawables
                r2 = 0
                r3 = r2
            L10:
                r4 = 1
                if (r3 >= r0) goto L20
                r5 = r1[r3]
                boolean r5 = r5.isStateful()
                if (r5 == 0) goto L1d
                r2 = r4
                goto L20
            L1d:
                int r3 = r3 + 1
                goto L10
            L20:
                r6.mStateful = r2
                r6.mCheckedStateful = r4
                return r2
        }

        void mutate() {
                r4 = this;
                int r0 = r4.mNumChildren
                android.graphics.drawable.Drawable[] r1 = r4.mDrawables
                r2 = 0
            L5:
                if (r2 >= r0) goto L13
                r3 = r1[r2]
                if (r3 == 0) goto L10
                r3 = r1[r2]
                r3.mutate()
            L10:
                int r2 = r2 + 1
                goto L5
            L13:
                r0 = 1
                r4.mMutated = r0
                return
        }

        public final void setConstantSize(boolean r1) {
                r0 = this;
                r0.mConstantSize = r1
                return
        }

        public final void setEnterFadeDuration(int r1) {
                r0 = this;
                r0.mEnterFadeDuration = r1
                return
        }

        public final void setExitFadeDuration(int r1) {
                r0 = this;
                r0.mExitFadeDuration = r1
                return
        }

        final boolean setLayoutDirection(int r8, int r9) {
                r7 = this;
                int r0 = r7.mNumChildren
                android.graphics.drawable.Drawable[] r1 = r7.mDrawables
                r2 = 0
                r3 = r2
                r4 = r3
            L7:
                if (r3 >= r0) goto L21
                r5 = r1[r3]
                if (r5 == 0) goto L1e
                int r5 = android.os.Build.VERSION.SDK_INT
                r6 = 23
                if (r5 < r6) goto L1a
                r5 = r1[r3]
                boolean r5 = r5.setLayoutDirection(r8)
                goto L1b
            L1a:
                r5 = r2
            L1b:
                if (r3 != r9) goto L1e
                r4 = r5
            L1e:
                int r3 = r3 + 1
                goto L7
            L21:
                r7.mLayoutDirection = r8
                return r4
        }

        public final void setVariablePadding(boolean r1) {
                r0 = this;
                r0.mVariablePadding = r1
                return
        }

        final void updateDensity(android.content.res.Resources r2) {
                r1 = this;
                if (r2 == 0) goto L15
                r1.mSourceRes = r2
                int r0 = r1.mDensity
                int r2 = android.support.v7.graphics.drawable.DrawableContainer.resolveDensity(r2, r0)
                int r0 = r1.mDensity
                r1.mDensity = r2
                if (r0 == r2) goto L15
                r2 = 0
                r1.mCheckedConstantSize = r2
                r1.mCheckedPadding = r2
            L15:
                return
        }
    }

    DrawableContainer() {
            r1 = this;
            r1.<init>()
            r0 = 255(0xff, float:3.57E-43)
            r1.mAlpha = r0
            r0 = -1
            r1.mCurIndex = r0
            r1.mLastIndex = r0
            return
    }

    private void initializeDrawableForDisplay(android.graphics.drawable.Drawable r5) {
            r4 = this;
            android.support.v7.graphics.drawable.DrawableContainer$BlockInvalidateCallback r0 = r4.mBlockInvalidateCallback
            if (r0 != 0) goto Lb
            android.support.v7.graphics.drawable.DrawableContainer$BlockInvalidateCallback r0 = new android.support.v7.graphics.drawable.DrawableContainer$BlockInvalidateCallback
            r0.<init>()
            r4.mBlockInvalidateCallback = r0
        Lb:
            android.support.v7.graphics.drawable.DrawableContainer$BlockInvalidateCallback r0 = r4.mBlockInvalidateCallback
            android.graphics.drawable.Drawable$Callback r1 = r5.getCallback()
            android.support.v7.graphics.drawable.DrawableContainer$BlockInvalidateCallback r0 = r0.wrap(r1)
            r5.setCallback(r0)
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r4.mDrawableContainerState     // Catch: java.lang.Throwable -> Lac
            int r0 = r0.mEnterFadeDuration     // Catch: java.lang.Throwable -> Lac
            if (r0 > 0) goto L27
            boolean r0 = r4.mHasAlpha     // Catch: java.lang.Throwable -> Lac
            if (r0 == 0) goto L27
            int r0 = r4.mAlpha     // Catch: java.lang.Throwable -> Lac
            r5.setAlpha(r0)     // Catch: java.lang.Throwable -> Lac
        L27:
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r4.mDrawableContainerState     // Catch: java.lang.Throwable -> Lac
            boolean r0 = r0.mHasColorFilter     // Catch: java.lang.Throwable -> Lac
            if (r0 == 0) goto L35
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r4.mDrawableContainerState     // Catch: java.lang.Throwable -> Lac
            android.graphics.ColorFilter r0 = r0.mColorFilter     // Catch: java.lang.Throwable -> Lac
            r5.setColorFilter(r0)     // Catch: java.lang.Throwable -> Lac
            goto L4f
        L35:
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r4.mDrawableContainerState     // Catch: java.lang.Throwable -> Lac
            boolean r0 = r0.mHasTintList     // Catch: java.lang.Throwable -> Lac
            if (r0 == 0) goto L42
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r4.mDrawableContainerState     // Catch: java.lang.Throwable -> Lac
            android.content.res.ColorStateList r0 = r0.mTintList     // Catch: java.lang.Throwable -> Lac
            android.support.v4.graphics.drawable.DrawableCompat.setTintList(r5, r0)     // Catch: java.lang.Throwable -> Lac
        L42:
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r4.mDrawableContainerState     // Catch: java.lang.Throwable -> Lac
            boolean r0 = r0.mHasTintMode     // Catch: java.lang.Throwable -> Lac
            if (r0 == 0) goto L4f
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r4.mDrawableContainerState     // Catch: java.lang.Throwable -> Lac
            android.graphics.PorterDuff$Mode r0 = r0.mTintMode     // Catch: java.lang.Throwable -> Lac
            android.support.v4.graphics.drawable.DrawableCompat.setTintMode(r5, r0)     // Catch: java.lang.Throwable -> Lac
        L4f:
            boolean r0 = r4.isVisible()     // Catch: java.lang.Throwable -> Lac
            r1 = 1
            r5.setVisible(r0, r1)     // Catch: java.lang.Throwable -> Lac
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r4.mDrawableContainerState     // Catch: java.lang.Throwable -> Lac
            boolean r0 = r0.mDither     // Catch: java.lang.Throwable -> Lac
            r5.setDither(r0)     // Catch: java.lang.Throwable -> Lac
            int[] r0 = r4.getState()     // Catch: java.lang.Throwable -> Lac
            r5.setState(r0)     // Catch: java.lang.Throwable -> Lac
            int r0 = r4.getLevel()     // Catch: java.lang.Throwable -> Lac
            r5.setLevel(r0)     // Catch: java.lang.Throwable -> Lac
            android.graphics.Rect r0 = r4.getBounds()     // Catch: java.lang.Throwable -> Lac
            r5.setBounds(r0)     // Catch: java.lang.Throwable -> Lac
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lac
            r1 = 23
            if (r0 < r1) goto L80
            int r0 = r4.getLayoutDirection()     // Catch: java.lang.Throwable -> Lac
            r5.setLayoutDirection(r0)     // Catch: java.lang.Throwable -> Lac
        L80:
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lac
            r1 = 19
            if (r0 < r1) goto L8d
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r4.mDrawableContainerState     // Catch: java.lang.Throwable -> Lac
            boolean r0 = r0.mAutoMirrored     // Catch: java.lang.Throwable -> Lac
            r5.setAutoMirrored(r0)     // Catch: java.lang.Throwable -> Lac
        L8d:
            android.graphics.Rect r0 = r4.mHotspotBounds     // Catch: java.lang.Throwable -> Lac
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lac
            r2 = 21
            if (r1 < r2) goto La2
            if (r0 == 0) goto La2
            int r1 = r0.left     // Catch: java.lang.Throwable -> Lac
            int r2 = r0.top     // Catch: java.lang.Throwable -> Lac
            int r3 = r0.right     // Catch: java.lang.Throwable -> Lac
            int r0 = r0.bottom     // Catch: java.lang.Throwable -> Lac
            r5.setHotspotBounds(r1, r2, r3, r0)     // Catch: java.lang.Throwable -> Lac
        La2:
            android.support.v7.graphics.drawable.DrawableContainer$BlockInvalidateCallback r0 = r4.mBlockInvalidateCallback
            android.graphics.drawable.Drawable$Callback r0 = r0.unwrap()
            r5.setCallback(r0)
            return
        Lac:
            r0 = move-exception
            android.support.v7.graphics.drawable.DrawableContainer$BlockInvalidateCallback r1 = r4.mBlockInvalidateCallback
            android.graphics.drawable.Drawable$Callback r1 = r1.unwrap()
            r5.setCallback(r1)
            throw r0
    }

    private boolean needsMirroring() {
            r2 = this;
            boolean r0 = r2.isAutoMirrored()
            r1 = 1
            if (r0 == 0) goto Le
            int r0 = r2.getLayoutDirection()
            if (r0 != r1) goto Le
            goto Lf
        Le:
            r1 = 0
        Lf:
            return r1
    }

    static int resolveDensity(android.content.res.Resources r0, int r1) {
            if (r0 != 0) goto L3
            goto L9
        L3:
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            int r1 = r0.densityDpi
        L9:
            if (r1 != 0) goto Ld
            r1 = 160(0xa0, float:2.24E-43)
        Ld:
            return r1
    }

    void animate(boolean r14) {
            r13 = this;
            r0 = 1
            r13.mHasAlpha = r0
            long r1 = android.os.SystemClock.uptimeMillis()
            android.graphics.drawable.Drawable r3 = r13.mCurrDrawable
            r4 = 255(0xff, double:1.26E-321)
            r6 = 0
            r7 = 0
            if (r3 == 0) goto L38
            long r9 = r13.mEnterAnimationEnd
            int r11 = (r9 > r7 ? 1 : (r9 == r7 ? 0 : -1))
            if (r11 == 0) goto L3a
            int r11 = (r9 > r1 ? 1 : (r9 == r1 ? 0 : -1))
            if (r11 > 0) goto L22
            int r9 = r13.mAlpha
            r3.setAlpha(r9)
            r13.mEnterAnimationEnd = r7
            goto L3a
        L22:
            long r9 = r9 - r1
            long r9 = r9 * r4
            int r3 = (int) r9
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r9 = r13.mDrawableContainerState
            int r9 = r9.mEnterFadeDuration
            int r3 = r3 / r9
            android.graphics.drawable.Drawable r9 = r13.mCurrDrawable
            int r3 = 255 - r3
            int r10 = r13.mAlpha
            int r3 = r3 * r10
            int r3 = r3 / 255
            r9.setAlpha(r3)
            r3 = r0
            goto L3b
        L38:
            r13.mEnterAnimationEnd = r7
        L3a:
            r3 = r6
        L3b:
            android.graphics.drawable.Drawable r9 = r13.mLastDrawable
            if (r9 == 0) goto L68
            long r10 = r13.mExitAnimationEnd
            int r12 = (r10 > r7 ? 1 : (r10 == r7 ? 0 : -1))
            if (r12 == 0) goto L6a
            int r12 = (r10 > r1 ? 1 : (r10 == r1 ? 0 : -1))
            if (r12 > 0) goto L55
            r9.setVisible(r6, r6)
            r0 = 0
            r13.mLastDrawable = r0
            r0 = -1
            r13.mLastIndex = r0
            r13.mExitAnimationEnd = r7
            goto L6a
        L55:
            long r10 = r10 - r1
            long r10 = r10 * r4
            int r3 = (int) r10
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r4 = r13.mDrawableContainerState
            int r4 = r4.mExitFadeDuration
            int r3 = r3 / r4
            android.graphics.drawable.Drawable r4 = r13.mLastDrawable
            int r5 = r13.mAlpha
            int r3 = r3 * r5
            int r3 = r3 / 255
            r4.setAlpha(r3)
            goto L6b
        L68:
            r13.mExitAnimationEnd = r7
        L6a:
            r0 = r3
        L6b:
            if (r14 == 0) goto L77
            if (r0 == 0) goto L77
            java.lang.Runnable r14 = r13.mAnimationRunnable
            r3 = 16
            long r1 = r1 + r3
            r13.scheduleSelf(r14, r1)
        L77:
            return
    }

    @Override
    public void applyTheme(android.content.res.Resources.Theme r2) {
            r1 = this;
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r1.mDrawableContainerState
            r0.applyTheme(r2)
            return
    }

    @Override
    public boolean canApplyTheme() {
            r1 = this;
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r1.mDrawableContainerState
            boolean r0 = r0.canApplyTheme()
            return r0
    }

    void clearMutated() {
            r1 = this;
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r1.mDrawableContainerState
            r0.clearMutated()
            r0 = 0
            r1.mMutated = r0
            return
    }

    android.support.v7.graphics.drawable.DrawableContainer.DrawableContainerState cloneConstantState() {
            r1 = this;
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r1.mDrawableContainerState
            return r0
    }

    @Override
    public void draw(android.graphics.Canvas r2) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mCurrDrawable
            if (r0 == 0) goto L7
            r0.draw(r2)
        L7:
            android.graphics.drawable.Drawable r0 = r1.mLastDrawable
            if (r0 == 0) goto Le
            r0.draw(r2)
        Le:
            return
    }

    @Override
    public int getAlpha() {
            r1 = this;
            int r0 = r1.mAlpha
            return r0
    }

    @Override
    public int getChangingConfigurations() {
            r2 = this;
            int r0 = super.getChangingConfigurations()
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r1 = r2.mDrawableContainerState
            int r1 = r1.getChangingConfigurations()
            r0 = r0 | r1
            return r0
    }

    @Override
    public final android.graphics.drawable.Drawable.ConstantState getConstantState() {
            r2 = this;
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r2.mDrawableContainerState
            boolean r0 = r0.canConstantState()
            if (r0 == 0) goto L13
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r2.mDrawableContainerState
            int r1 = r2.getChangingConfigurations()
            r0.mChangingConfigurations = r1
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r2.mDrawableContainerState
            return r0
        L13:
            r0 = 0
            return r0
    }

    @Override
    public android.graphics.drawable.Drawable getCurrent() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mCurrDrawable
            return r0
    }

    int getCurrentIndex() {
            r1 = this;
            int r0 = r1.mCurIndex
            return r0
    }

    @Override
    public void getHotspotBounds(android.graphics.Rect r2) {
            r1 = this;
            android.graphics.Rect r0 = r1.mHotspotBounds
            if (r0 == 0) goto L8
            r2.set(r0)
            goto Lb
        L8:
            super.getHotspotBounds(r2)
        Lb:
            return
    }

    @Override
    public int getIntrinsicHeight() {
            r1 = this;
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r1.mDrawableContainerState
            boolean r0 = r0.isConstantSize()
            if (r0 == 0) goto Lf
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r1.mDrawableContainerState
            int r0 = r0.getConstantHeight()
            return r0
        Lf:
            android.graphics.drawable.Drawable r0 = r1.mCurrDrawable
            if (r0 == 0) goto L18
            int r0 = r0.getIntrinsicHeight()
            goto L19
        L18:
            r0 = -1
        L19:
            return r0
    }

    @Override
    public int getIntrinsicWidth() {
            r1 = this;
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r1.mDrawableContainerState
            boolean r0 = r0.isConstantSize()
            if (r0 == 0) goto Lf
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r1.mDrawableContainerState
            int r0 = r0.getConstantWidth()
            return r0
        Lf:
            android.graphics.drawable.Drawable r0 = r1.mCurrDrawable
            if (r0 == 0) goto L18
            int r0 = r0.getIntrinsicWidth()
            goto L19
        L18:
            r0 = -1
        L19:
            return r0
    }

    @Override
    public int getMinimumHeight() {
            r1 = this;
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r1.mDrawableContainerState
            boolean r0 = r0.isConstantSize()
            if (r0 == 0) goto Lf
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r1.mDrawableContainerState
            int r0 = r0.getConstantMinimumHeight()
            return r0
        Lf:
            android.graphics.drawable.Drawable r0 = r1.mCurrDrawable
            if (r0 == 0) goto L18
            int r0 = r0.getMinimumHeight()
            goto L19
        L18:
            r0 = 0
        L19:
            return r0
    }

    @Override
    public int getMinimumWidth() {
            r1 = this;
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r1.mDrawableContainerState
            boolean r0 = r0.isConstantSize()
            if (r0 == 0) goto Lf
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r1.mDrawableContainerState
            int r0 = r0.getConstantMinimumWidth()
            return r0
        Lf:
            android.graphics.drawable.Drawable r0 = r1.mCurrDrawable
            if (r0 == 0) goto L18
            int r0 = r0.getMinimumWidth()
            goto L19
        L18:
            r0 = 0
        L19:
            return r0
    }

    @Override
    public int getOpacity() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mCurrDrawable
            if (r0 == 0) goto L12
            boolean r0 = r0.isVisible()
            if (r0 != 0) goto Lb
            goto L12
        Lb:
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r1.mDrawableContainerState
            int r0 = r0.getOpacity()
            goto L13
        L12:
            r0 = -2
        L13:
            return r0
    }

    @Override
    public void getOutline(android.graphics.Outline r2) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mCurrDrawable
            if (r0 == 0) goto L7
            r0.getOutline(r2)
        L7:
            return
    }

    @Override
    public boolean getPadding(android.graphics.Rect r4) {
            r3 = this;
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r3.mDrawableContainerState
            android.graphics.Rect r0 = r0.getConstantPadding()
            if (r0 == 0) goto L1c
            r4.set(r0)
            int r1 = r0.left
            int r2 = r0.top
            r1 = r1 | r2
            int r2 = r0.bottom
            r1 = r1 | r2
            int r0 = r0.right
            r0 = r0 | r1
            if (r0 == 0) goto L1a
            r0 = 1
            goto L29
        L1a:
            r0 = 0
            goto L29
        L1c:
            android.graphics.drawable.Drawable r0 = r3.mCurrDrawable
            if (r0 == 0) goto L25
            boolean r0 = r0.getPadding(r4)
            goto L29
        L25:
            boolean r0 = super.getPadding(r4)
        L29:
            boolean r1 = r3.needsMirroring()
            if (r1 == 0) goto L37
            int r1 = r4.left
            int r2 = r4.right
            r4.left = r2
            r4.right = r1
        L37:
            return r0
    }

    public void invalidateDrawable(android.graphics.drawable.Drawable r2) {
            r1 = this;
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r1.mDrawableContainerState
            if (r0 == 0) goto L7
            r0.invalidateCache()
        L7:
            android.graphics.drawable.Drawable r0 = r1.mCurrDrawable
            if (r2 != r0) goto L18
            android.graphics.drawable.Drawable$Callback r2 = r1.getCallback()
            if (r2 == 0) goto L18
            android.graphics.drawable.Drawable$Callback r2 = r1.getCallback()
            r2.invalidateDrawable(r1)
        L18:
            return
    }

    @Override
    public boolean isAutoMirrored() {
            r1 = this;
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r1.mDrawableContainerState
            boolean r0 = r0.mAutoMirrored
            return r0
    }

    @Override
    public boolean isStateful() {
            r1 = this;
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r1.mDrawableContainerState
            boolean r0 = r0.isStateful()
            return r0
    }

    @Override
    public void jumpToCurrentState() {
            r6 = this;
            android.graphics.drawable.Drawable r0 = r6.mLastDrawable
            r1 = 1
            if (r0 == 0) goto L10
            r0.jumpToCurrentState()
            r0 = 0
            r6.mLastDrawable = r0
            r0 = -1
            r6.mLastIndex = r0
            r0 = r1
            goto L11
        L10:
            r0 = 0
        L11:
            android.graphics.drawable.Drawable r2 = r6.mCurrDrawable
            if (r2 == 0) goto L23
            r2.jumpToCurrentState()
            boolean r2 = r6.mHasAlpha
            if (r2 == 0) goto L23
            android.graphics.drawable.Drawable r2 = r6.mCurrDrawable
            int r3 = r6.mAlpha
            r2.setAlpha(r3)
        L23:
            long r2 = r6.mExitAnimationEnd
            r4 = 0
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 == 0) goto L2e
            r6.mExitAnimationEnd = r4
            r0 = r1
        L2e:
            long r2 = r6.mEnterAnimationEnd
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 == 0) goto L37
            r6.mEnterAnimationEnd = r4
            goto L38
        L37:
            r1 = r0
        L38:
            if (r1 == 0) goto L3d
            r6.invalidateSelf()
        L3d:
            return
    }

    @Override
    public android.graphics.drawable.Drawable mutate() {
            r1 = this;
            boolean r0 = r1.mMutated
            if (r0 != 0) goto L17
            android.graphics.drawable.Drawable r0 = super.mutate()
            if (r0 != r1) goto L17
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r1.cloneConstantState()
            r0.mutate()
            r1.setConstantState(r0)
            r0 = 1
            r1.mMutated = r0
        L17:
            return r1
    }

    @Override
    protected void onBoundsChange(android.graphics.Rect r2) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mLastDrawable
            if (r0 == 0) goto L7
            r0.setBounds(r2)
        L7:
            android.graphics.drawable.Drawable r0 = r1.mCurrDrawable
            if (r0 == 0) goto Le
            r0.setBounds(r2)
        Le:
            return
    }

    @Override
    public boolean onLayoutDirectionChanged(int r3) {
            r2 = this;
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r2.mDrawableContainerState
            int r1 = r2.getCurrentIndex()
            boolean r3 = r0.setLayoutDirection(r3, r1)
            return r3
    }

    @Override
    protected boolean onLevelChange(int r2) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mLastDrawable
            if (r0 == 0) goto L9
            boolean r2 = r0.setLevel(r2)
            return r2
        L9:
            android.graphics.drawable.Drawable r0 = r1.mCurrDrawable
            if (r0 == 0) goto L12
            boolean r2 = r0.setLevel(r2)
            return r2
        L12:
            r2 = 0
            return r2
    }

    @Override
    protected boolean onStateChange(int[] r2) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mLastDrawable
            if (r0 == 0) goto L9
            boolean r2 = r0.setState(r2)
            return r2
        L9:
            android.graphics.drawable.Drawable r0 = r1.mCurrDrawable
            if (r0 == 0) goto L12
            boolean r2 = r0.setState(r2)
            return r2
        L12:
            r2 = 0
            return r2
    }

    public void scheduleDrawable(android.graphics.drawable.Drawable r2, java.lang.Runnable r3, long r4) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mCurrDrawable
            if (r2 != r0) goto L11
            android.graphics.drawable.Drawable$Callback r2 = r1.getCallback()
            if (r2 == 0) goto L11
            android.graphics.drawable.Drawable$Callback r2 = r1.getCallback()
            r2.scheduleDrawable(r1, r3, r4)
        L11:
            return
    }

    boolean selectDrawable(int r9) {
            r8 = this;
            int r0 = r8.mCurIndex
            r1 = 0
            if (r9 != r0) goto L6
            return r1
        L6:
            long r2 = android.os.SystemClock.uptimeMillis()
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r8.mDrawableContainerState
            int r0 = r0.mExitFadeDuration
            r4 = -1
            r5 = 0
            r6 = 0
            if (r0 <= 0) goto L35
            android.graphics.drawable.Drawable r0 = r8.mLastDrawable
            if (r0 == 0) goto L1b
            r0.setVisible(r1, r1)
        L1b:
            android.graphics.drawable.Drawable r0 = r8.mCurrDrawable
            if (r0 == 0) goto L2e
            r8.mLastDrawable = r0
            int r0 = r8.mCurIndex
            r8.mLastIndex = r0
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r8.mDrawableContainerState
            int r0 = r0.mExitFadeDuration
            long r0 = (long) r0
            long r0 = r0 + r2
            r8.mExitAnimationEnd = r0
            goto L3c
        L2e:
            r8.mLastDrawable = r5
            r8.mLastIndex = r4
            r8.mExitAnimationEnd = r6
            goto L3c
        L35:
            android.graphics.drawable.Drawable r0 = r8.mCurrDrawable
            if (r0 == 0) goto L3c
            r0.setVisible(r1, r1)
        L3c:
            if (r9 < 0) goto L62
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r8.mDrawableContainerState
            int r0 = r0.mNumChildren
            if (r9 >= r0) goto L62
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r8.mDrawableContainerState
            android.graphics.drawable.Drawable r0 = r0.getChild(r9)
            r8.mCurrDrawable = r0
            r8.mCurIndex = r9
            if (r0 == 0) goto L66
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r9 = r8.mDrawableContainerState
            int r9 = r9.mEnterFadeDuration
            if (r9 <= 0) goto L5e
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r9 = r8.mDrawableContainerState
            int r9 = r9.mEnterFadeDuration
            long r4 = (long) r9
            long r2 = r2 + r4
            r8.mEnterAnimationEnd = r2
        L5e:
            r8.initializeDrawableForDisplay(r0)
            goto L66
        L62:
            r8.mCurrDrawable = r5
            r8.mCurIndex = r4
        L66:
            long r0 = r8.mEnterAnimationEnd
            int r9 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            r0 = 1
            if (r9 != 0) goto L73
            long r1 = r8.mExitAnimationEnd
            int r9 = (r1 > r6 ? 1 : (r1 == r6 ? 0 : -1))
            if (r9 == 0) goto L85
        L73:
            java.lang.Runnable r9 = r8.mAnimationRunnable
            if (r9 != 0) goto L7f
            android.support.v7.graphics.drawable.DrawableContainer$1 r9 = new android.support.v7.graphics.drawable.DrawableContainer$1
            r9.<init>(r8)
            r8.mAnimationRunnable = r9
            goto L82
        L7f:
            r8.unscheduleSelf(r9)
        L82:
            r8.animate(r0)
        L85:
            r8.invalidateSelf()
            return r0
    }

    @Override
    public void setAlpha(int r6) {
            r5 = this;
            boolean r0 = r5.mHasAlpha
            if (r0 == 0) goto L8
            int r0 = r5.mAlpha
            if (r0 == r6) goto L21
        L8:
            r0 = 1
            r5.mHasAlpha = r0
            r5.mAlpha = r6
            android.graphics.drawable.Drawable r0 = r5.mCurrDrawable
            if (r0 == 0) goto L21
            long r1 = r5.mEnterAnimationEnd
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto L1d
            r0.setAlpha(r6)
            goto L21
        L1d:
            r6 = 0
            r5.animate(r6)
        L21:
            return
    }

    @Override
    public void setAutoMirrored(boolean r2) {
            r1 = this;
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r1.mDrawableContainerState
            boolean r0 = r0.mAutoMirrored
            if (r0 == r2) goto L15
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r1.mDrawableContainerState
            r0.mAutoMirrored = r2
            android.graphics.drawable.Drawable r2 = r1.mCurrDrawable
            if (r2 == 0) goto L15
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r1.mDrawableContainerState
            boolean r0 = r0.mAutoMirrored
            android.support.v4.graphics.drawable.DrawableCompat.setAutoMirrored(r2, r0)
        L15:
            return
    }

    @Override
    public void setColorFilter(android.graphics.ColorFilter r3) {
            r2 = this;
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r2.mDrawableContainerState
            r1 = 1
            r0.mHasColorFilter = r1
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r2.mDrawableContainerState
            android.graphics.ColorFilter r0 = r0.mColorFilter
            if (r0 == r3) goto L16
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r2.mDrawableContainerState
            r0.mColorFilter = r3
            android.graphics.drawable.Drawable r0 = r2.mCurrDrawable
            if (r0 == 0) goto L16
            r0.setColorFilter(r3)
        L16:
            return
    }

    protected void setConstantState(android.support.v7.graphics.drawable.DrawableContainer.DrawableContainerState r2) {
            r1 = this;
            r1.mDrawableContainerState = r2
            int r0 = r1.mCurIndex
            if (r0 < 0) goto L11
            android.graphics.drawable.Drawable r2 = r2.getChild(r0)
            r1.mCurrDrawable = r2
            if (r2 == 0) goto L11
            r1.initializeDrawableForDisplay(r2)
        L11:
            r2 = -1
            r1.mLastIndex = r2
            r2 = 0
            r1.mLastDrawable = r2
            return
    }

    void setCurrentIndex(int r1) {
            r0 = this;
            r0.selectDrawable(r1)
            return
    }

    @Override
    public void setDither(boolean r2) {
            r1 = this;
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r1.mDrawableContainerState
            boolean r0 = r0.mDither
            if (r0 == r2) goto L15
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r1.mDrawableContainerState
            r0.mDither = r2
            android.graphics.drawable.Drawable r2 = r1.mCurrDrawable
            if (r2 == 0) goto L15
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r1.mDrawableContainerState
            boolean r0 = r0.mDither
            r2.setDither(r0)
        L15:
            return
    }

    public void setEnterFadeDuration(int r2) {
            r1 = this;
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r1.mDrawableContainerState
            r0.mEnterFadeDuration = r2
            return
    }

    public void setExitFadeDuration(int r2) {
            r1 = this;
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r1.mDrawableContainerState
            r0.mExitFadeDuration = r2
            return
    }

    @Override
    public void setHotspot(float r2, float r3) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mCurrDrawable
            if (r0 == 0) goto L7
            android.support.v4.graphics.drawable.DrawableCompat.setHotspot(r0, r2, r3)
        L7:
            return
    }

    @Override
    public void setHotspotBounds(int r2, int r3, int r4, int r5) {
            r1 = this;
            android.graphics.Rect r0 = r1.mHotspotBounds
            if (r0 != 0) goto Lc
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>(r2, r3, r4, r5)
            r1.mHotspotBounds = r0
            goto Lf
        Lc:
            r0.set(r2, r3, r4, r5)
        Lf:
            android.graphics.drawable.Drawable r0 = r1.mCurrDrawable
            if (r0 == 0) goto L16
            android.support.v4.graphics.drawable.DrawableCompat.setHotspotBounds(r0, r2, r3, r4, r5)
        L16:
            return
    }

    @Override
    public void setTintList(android.content.res.ColorStateList r3) {
            r2 = this;
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r2.mDrawableContainerState
            r1 = 1
            r0.mHasTintList = r1
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r2.mDrawableContainerState
            android.content.res.ColorStateList r0 = r0.mTintList
            if (r0 == r3) goto L14
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r2.mDrawableContainerState
            r0.mTintList = r3
            android.graphics.drawable.Drawable r0 = r2.mCurrDrawable
            android.support.v4.graphics.drawable.DrawableCompat.setTintList(r0, r3)
        L14:
            return
    }

    @Override
    public void setTintMode(android.graphics.PorterDuff.Mode r3) {
            r2 = this;
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r2.mDrawableContainerState
            r1 = 1
            r0.mHasTintMode = r1
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r2.mDrawableContainerState
            android.graphics.PorterDuff$Mode r0 = r0.mTintMode
            if (r0 == r3) goto L14
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r2.mDrawableContainerState
            r0.mTintMode = r3
            android.graphics.drawable.Drawable r0 = r2.mCurrDrawable
            android.support.v4.graphics.drawable.DrawableCompat.setTintMode(r0, r3)
        L14:
            return
    }

    @Override
    public boolean setVisible(boolean r3, boolean r4) {
            r2 = this;
            boolean r0 = super.setVisible(r3, r4)
            android.graphics.drawable.Drawable r1 = r2.mLastDrawable
            if (r1 == 0) goto Lb
            r1.setVisible(r3, r4)
        Lb:
            android.graphics.drawable.Drawable r1 = r2.mCurrDrawable
            if (r1 == 0) goto L12
            r1.setVisible(r3, r4)
        L12:
            return r0
    }

    public void unscheduleDrawable(android.graphics.drawable.Drawable r2, java.lang.Runnable r3) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mCurrDrawable
            if (r2 != r0) goto L11
            android.graphics.drawable.Drawable$Callback r2 = r1.getCallback()
            if (r2 == 0) goto L11
            android.graphics.drawable.Drawable$Callback r2 = r1.getCallback()
            r2.unscheduleDrawable(r1, r3)
        L11:
            return
    }

    final void updateDensity(android.content.res.Resources r2) {
            r1 = this;
            android.support.v7.graphics.drawable.DrawableContainer$DrawableContainerState r0 = r1.mDrawableContainerState
            r0.updateDensity(r2)
            return
    }
}
