package android.support.v7.graphics.drawable;

import android.annotation.SuppressLint;
import android.annotation.TargetApi;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.Outline;
import android.graphics.PorterDuff;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.os.SystemClock;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresApi;
import android.support.annotation.RestrictTo;
import android.support.v4.graphics.drawable.DrawableCompat;
import android.util.SparseArray;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
class DrawableContainer extends Drawable implements Drawable.Callback {
    private static final boolean DEBUG = false;
    private static final boolean DEFAULT_DITHER = true;
    private static final String TAG = "DrawableContainer";
    private int mAlpha;
    private Runnable mAnimationRunnable;
    private BlockInvalidateCallback mBlockInvalidateCallback;
    private int mCurIndex;
    private Drawable mCurrDrawable;
    private DrawableContainerState mDrawableContainerState;
    private long mEnterAnimationEnd;
    private long mExitAnimationEnd;
    private boolean mHasAlpha;
    private Rect mHotspotBounds;
    private Drawable mLastDrawable;
    private int mLastIndex;
    private boolean mMutated;

    static class BlockInvalidateCallback implements Drawable.Callback {
        private Drawable.Callback mCallback;

        @Override
        public void invalidateDrawable(@NonNull Drawable r1) {
        }

        BlockInvalidateCallback() {
        }

        public BlockInvalidateCallback wrap(Drawable.Callback r1) {
            this.mCallback = r1;
            return this;
        }

        public Drawable.Callback unwrap() {
            Drawable.Callback r0 = this.mCallback;
            this.mCallback = null;
            return r0;
        }

        @Override
        public void scheduleDrawable(@NonNull Drawable r2, @NonNull Runnable r3, long r4) {
            Drawable.Callback r0 = this.mCallback;
            if (r0 == null) goto L6;
            r0.scheduleDrawable(r2, r3, r4);
            return;
        }

        @Override
        public void unscheduleDrawable(@NonNull Drawable r2, @NonNull Runnable r3) {
            Drawable.Callback r0 = this.mCallback;
            if (r0 == null) goto L6;
            r0.unscheduleDrawable(r2, r3);
            return;
        }
    }

    static abstract class DrawableContainerState extends Drawable.ConstantState {
        boolean mAutoMirrored;
        boolean mCanConstantState;
        int mChangingConfigurations;
        boolean mCheckedConstantSize;
        boolean mCheckedConstantState;
        boolean mCheckedOpacity;
        boolean mCheckedPadding;
        boolean mCheckedStateful;
        int mChildrenChangingConfigurations;
        ColorFilter mColorFilter;
        int mConstantHeight;
        int mConstantMinimumHeight;
        int mConstantMinimumWidth;
        Rect mConstantPadding;
        boolean mConstantSize;
        int mConstantWidth;
        int mDensity;
        boolean mDither;
        SparseArray<Drawable.ConstantState> mDrawableFutures;
        Drawable[] mDrawables;
        int mEnterFadeDuration;
        int mExitFadeDuration;
        boolean mHasColorFilter;
        boolean mHasTintList;
        boolean mHasTintMode;
        int mLayoutDirection;
        boolean mMutated;
        int mNumChildren;
        int mOpacity;
        final DrawableContainer mOwner;
        Resources mSourceRes;
        boolean mStateful;
        ColorStateList mTintList;
        PorterDuff.Mode mTintMode;
        boolean mVariablePadding;

        DrawableContainerState(DrawableContainerState r3, DrawableContainer r4, Resources r5) {
            this.mDensity = 160;
            int r0 = 0;
            this.mVariablePadding = false;
            this.mConstantSize = false;
            this.mDither = DrawableContainer.DEFAULT_DITHER;
            this.mEnterFadeDuration = 0;
            this.mExitFadeDuration = 0;
            this.mOwner = r4;
            if (r5 == null) goto L5;
            Resources r42 = r5;
        L8:
            this.mSourceRes = r42;
            if (r3 == null) goto L11;
            int r43 = r3.mDensity;
        L12:
            this.mDensity = DrawableContainer.resolveDensity(r5, r43);
            if (r3 == null) goto L41;
            this.mChangingConfigurations = r3.mChangingConfigurations;
            this.mChildrenChangingConfigurations = r3.mChildrenChangingConfigurations;
            this.mCheckedConstantState = DrawableContainer.DEFAULT_DITHER;
            this.mCanConstantState = DrawableContainer.DEFAULT_DITHER;
            this.mVariablePadding = r3.mVariablePadding;
            this.mConstantSize = r3.mConstantSize;
            this.mDither = r3.mDither;
            this.mMutated = r3.mMutated;
            this.mLayoutDirection = r3.mLayoutDirection;
            this.mEnterFadeDuration = r3.mEnterFadeDuration;
            this.mExitFadeDuration = r3.mExitFadeDuration;
            this.mAutoMirrored = r3.mAutoMirrored;
            this.mColorFilter = r3.mColorFilter;
            this.mHasColorFilter = r3.mHasColorFilter;
            this.mTintList = r3.mTintList;
            this.mTintMode = r3.mTintMode;
            this.mHasTintList = r3.mHasTintList;
            this.mHasTintMode = r3.mHasTintMode;
            if (r3.mDensity != this.mDensity) goto L23;
            if (r3.mCheckedPadding == false) goto L20;
            this.mConstantPadding = new Rect(r3.mConstantPadding);
            this.mCheckedPadding = DrawableContainer.DEFAULT_DITHER;
        L20:
            if (r3.mCheckedConstantSize == false) goto L23;
            this.mConstantWidth = r3.mConstantWidth;
            this.mConstantHeight = r3.mConstantHeight;
            this.mConstantMinimumWidth = r3.mConstantMinimumWidth;
            this.mConstantMinimumHeight = r3.mConstantMinimumHeight;
            this.mCheckedConstantSize = DrawableContainer.DEFAULT_DITHER;
        L23:
            if (r3.mCheckedOpacity == false) goto L26;
            this.mOpacity = r3.mOpacity;
            this.mCheckedOpacity = DrawableContainer.DEFAULT_DITHER;
        L26:
            if (r3.mCheckedStateful == false) goto L28;
            this.mStateful = r3.mStateful;
            this.mCheckedStateful = DrawableContainer.DEFAULT_DITHER;
        L28:
            Drawable[] r44 = r3.mDrawables;
            this.mDrawables = new Drawable[r44.length];
            this.mNumChildren = r3.mNumChildren;
            SparseArray<Drawable.ConstantState> r32 = r3.mDrawableFutures;
            if (r32 == null) goto L31;
            this.mDrawableFutures = r32.clone();
        L32:
            int r33 = this.mNumChildren;
        L33:
            if (r0 >= r33) goto L47;
            if (r44[r0] == null) goto L40;
            Drawable.ConstantState r52 = r44[r0].getConstantState();
            if (r52 == null) goto L39;
            this.mDrawableFutures.put(r0, r52);
            goto L40
        L39:
            this.mDrawables[r0] = r44[r0];
        L40:
            r0 = r0 + 1;
            goto L33
        L47:
            return;
        L31:
            this.mDrawableFutures = new SparseArray(this.mNumChildren);
            goto L32
        L41:
            this.mDrawables = new Drawable[10];
            this.mNumChildren = 0;
            return;
        L11:
            r43 = 0;
            goto L12
        L5:
            if (r3 == null) goto L7;
            r42 = r3.mSourceRes;
            goto L8
        L7:
            r42 = null;
            goto L8
        }

        @Override
        public int getChangingConfigurations() {
            return this.mChangingConfigurations | this.mChildrenChangingConfigurations;
        }

        public final int addChild(Drawable r5) {
            int r0 = this.mNumChildren;
            if (r0 < this.mDrawables.length) goto L5;
            growArray(r0, r0 + 10);
        L5:
            r5.mutate();
            r5.setVisible(false, DrawableContainer.DEFAULT_DITHER);
            r5.setCallback(this.mOwner);
            this.mDrawables[r0] = r5;
            this.mNumChildren++;
            this.mChildrenChangingConfigurations = r5.getChangingConfigurations() | this.mChildrenChangingConfigurations;
            invalidateCache();
            this.mConstantPadding = null;
            this.mCheckedPadding = false;
            this.mCheckedConstantSize = false;
            this.mCheckedConstantState = false;
            return r0;
        }

        void invalidateCache() {
            this.mCheckedOpacity = false;
            this.mCheckedStateful = false;
        }

        final int getCapacity() {
            return this.mDrawables.length;
        }

        private void createAllFutures() {
            SparseArray<Drawable.ConstantState> r0 = this.mDrawableFutures;
            if (r0 == null) goto L10;
            int r02 = r0.size();
            int r1 = 0;
        L5:
            if (r1 >= r02) goto L7;
            int r2 = this.mDrawableFutures.keyAt(r1);
            Drawable.ConstantState r3 = this.mDrawableFutures.valueAt(r1);
            this.mDrawables[r2] = prepareDrawable(r3.newDrawable(this.mSourceRes));
            r1 = r1 + 1;
            goto L5
        L7:
            this.mDrawableFutures = null;
            return;
        }

        private Drawable prepareDrawable(Drawable r3) {
            if (Build.VERSION.SDK_INT < 23) goto L5;
            r3.setLayoutDirection(this.mLayoutDirection);
        L5:
            Drawable r32 = r3.mutate();
            r32.setCallback(this.mOwner);
            return r32;
        }

        public final int getChildCount() {
            return this.mNumChildren;
        }

        public final Drawable getChild(int r5) {
            Drawable r0 = this.mDrawables[r5];
            if (r0 == null) goto L5;
            return r0;
        L5:
            SparseArray<Drawable.ConstantState> r02 = this.mDrawableFutures;
            if (r02 == null) goto L13;
            int r03 = r02.indexOfKey(r5);
            if (r03 < 0) goto L13;
            Drawable r2 = prepareDrawable(this.mDrawableFutures.valueAt(r03).newDrawable(this.mSourceRes));
            this.mDrawables[r5] = r2;
            this.mDrawableFutures.removeAt(r03);
            if (this.mDrawableFutures.size() != 0) goto L12;
            this.mDrawableFutures = null;
        L12:
            return r2;
        L13:
            return null;
        }

        final boolean setLayoutDirection(int r8, int r9) {
            int r0 = this.mNumChildren;
            Drawable[] r1 = this.mDrawables;
            int r3 = 0;
            boolean r4 = false;
        L3:
            if (r3 >= r0) goto L13;
            if (r1[r3] == null) goto L12;
            if (Build.VERSION.SDK_INT < 23) goto L9;
            boolean r5 = r1[r3].setLayoutDirection(r8);
        L10:
            if (r3 != r9) goto L12;
            r4 = r5;
            goto L12
        L9:
            r5 = false;
        L12:
            r3 = r3 + 1;
            goto L3
        L13:
            this.mLayoutDirection = r8;
            return r4;
        }

        final void updateDensity(Resources r2) {
            if (r2 == null) goto L7;
            this.mSourceRes = r2;
            int r22 = DrawableContainer.resolveDensity(r2, this.mDensity);
            int r0 = this.mDensity;
            this.mDensity = r22;
            if (r0 == r22) goto L8;
            this.mCheckedConstantSize = false;
            this.mCheckedPadding = false;
            return;
        L8:
            return;
        }

        @RequiresApi(21)
        final void applyTheme(Resources.Theme r6) {
            if (r6 == null) goto L17;
            createAllFutures();
            int r0 = this.mNumChildren;
            Drawable[] r1 = this.mDrawables;
            int r2 = 0;
        L4:
            if (r2 >= r0) goto L11;
            if (r1[r2] == null) goto L10;
            if (r1[r2].canApplyTheme() == false) goto L10;
            r1[r2].applyTheme(r6);
            this.mChildrenChangingConfigurations |= r1[r2].getChangingConfigurations();
        L10:
            r2 = r2 + 1;
            goto L4
        L11:
            updateDensity(r6.getResources());
            return;
        }

        @Override
        @RequiresApi(21)
        public boolean canApplyTheme() {
            int r0 = this.mNumChildren;
            Drawable[] r1 = this.mDrawables;
            int r3 = 0;
        L3:
            if (r3 >= r0) goto L15;
            Drawable r4 = r1[r3];
            if (r4 != null) goto L7;
            Drawable.ConstantState r42 = this.mDrawableFutures.get(r3);
            if (r42 == null) goto L14;
            if (r42.canApplyTheme() == false) goto L14;
            return DrawableContainer.DEFAULT_DITHER;
        L14:
            r3 = r3 + 1;
            goto L3
        L7:
            if (r4.canApplyTheme() == false) goto L14;
            return DrawableContainer.DEFAULT_DITHER;
        L15:
            return false;
        }

        void mutate() {
            int r0 = this.mNumChildren;
            Drawable[] r1 = this.mDrawables;
            int r2 = 0;
        L3:
            if (r2 >= r0) goto L8;
            if (r1[r2] == null) goto L7;
            r1[r2].mutate();
        L7:
            r2 = r2 + 1;
            goto L3
        L8:
            this.mMutated = DrawableContainer.DEFAULT_DITHER;
        }

        final void clearMutated() {
            this.mMutated = false;
        }

        public final void setVariablePadding(boolean r1) {
            this.mVariablePadding = r1;
        }

        public final Rect getConstantPadding() {
            if (this.mVariablePadding == false) goto L6;
            return null;
        L6:
            if (this.mConstantPadding != null) goto L32;
            if (this.mCheckedPadding == true) goto L32;
            createAllFutures();
            Rect r0 = new Rect();
            int r2 = this.mNumChildren;
            Drawable[] r3 = this.mDrawables;
            Rect r5 = null;
            int r1 = 0;
        L11:
            if (r1 >= r2) goto L29;
            if (r3[r1].getPadding(r0) == false) goto L28;
            if (r5 != null) goto L17;
            r5 = new Rect(0, 0, 0, 0);
        L17:
            if (r0.left <= r5.left) goto L20;
            r5.left = r0.left;
        L20:
            if (r0.top <= r5.top) goto L23;
            r5.top = r0.top;
        L23:
            if (r0.right <= r5.right) goto L26;
            r5.right = r0.right;
        L26:
            if (r0.bottom <= r5.bottom) goto L28;
            r5.bottom = r0.bottom;
        L28:
            r1 = r1 + 1;
            goto L11
        L29:
            this.mCheckedPadding = DrawableContainer.DEFAULT_DITHER;
            this.mConstantPadding = r5;
            return r5;
        L32:
            return this.mConstantPadding;
        }

        public final void setConstantSize(boolean r1) {
            this.mConstantSize = r1;
        }

        public final boolean isConstantSize() {
            return this.mConstantSize;
        }

        public final int getConstantWidth() {
            if (this.mCheckedConstantSize == true) goto L6;
            computeConstantSize();
        L6:
            return this.mConstantWidth;
        }

        public final int getConstantHeight() {
            if (this.mCheckedConstantSize == true) goto L6;
            computeConstantSize();
        L6:
            return this.mConstantHeight;
        }

        public final int getConstantMinimumWidth() {
            if (this.mCheckedConstantSize == true) goto L6;
            computeConstantSize();
        L6:
            return this.mConstantMinimumWidth;
        }

        public final int getConstantMinimumHeight() {
            if (this.mCheckedConstantSize == true) goto L6;
            computeConstantSize();
        L6:
            return this.mConstantMinimumHeight;
        }

        protected void computeConstantSize() {
            this.mCheckedConstantSize = DrawableContainer.DEFAULT_DITHER;
            createAllFutures();
            int r0 = this.mNumChildren;
            Drawable[] r1 = this.mDrawables;
            this.mConstantHeight = -1;
            this.mConstantWidth = -1;
            int r2 = 0;
            this.mConstantMinimumHeight = 0;
            this.mConstantMinimumWidth = 0;
        L3:
            if (r2 >= r0) goto L17;
            Drawable r3 = r1[r2];
            int r4 = r3.getIntrinsicWidth();
            if (r4 <= this.mConstantWidth) goto L7;
            this.mConstantWidth = r4;
        L7:
            int r42 = r3.getIntrinsicHeight();
            if (r42 <= this.mConstantHeight) goto L10;
            this.mConstantHeight = r42;
        L10:
            int r43 = r3.getMinimumWidth();
            if (r43 <= this.mConstantMinimumWidth) goto L13;
            this.mConstantMinimumWidth = r43;
        L13:
            int r32 = r3.getMinimumHeight();
            if (r32 <= this.mConstantMinimumHeight) goto L16;
            this.mConstantMinimumHeight = r32;
        L16:
            r2 = r2 + 1;
            goto L3
        }

        public final void setEnterFadeDuration(int r1) {
            this.mEnterFadeDuration = r1;
        }

        public final int getEnterFadeDuration() {
            return this.mEnterFadeDuration;
        }

        public final void setExitFadeDuration(int r1) {
            this.mExitFadeDuration = r1;
        }

        public final int getExitFadeDuration() {
            return this.mExitFadeDuration;
        }

        public final int getOpacity() {
            if (this.mCheckedOpacity == true) goto L5;
            createAllFutures();
            int r0 = this.mNumChildren;
            Drawable[] r1 = this.mDrawables;
            if (r0 <= 0) goto L9;
            int r2 = r1[0].getOpacity();
        L10:
            int r4 = r2;
            int r22 = 1;
        L11:
            if (r22 >= r0) goto L13;
            r4 = Drawable.resolveOpacity(r4, r1[r22].getOpacity());
            r22 = r22 + 1;
            goto L11
        L13:
            this.mOpacity = r4;
            this.mCheckedOpacity = DrawableContainer.DEFAULT_DITHER;
            return r4;
        L9:
            r2 = -2;
            goto L10
        L5:
            return this.mOpacity;
        }

        public final boolean isStateful() {
            if (this.mCheckedStateful == true) goto L5;
            createAllFutures();
            int r0 = this.mNumChildren;
            Drawable[] r1 = this.mDrawables;
            boolean r2 = false;
            int r3 = 0;
        L8:
            if (r3 >= r0) goto L13;
            if (r1[r3].isStateful() == true) goto L11;
            r3 = r3 + 1;
            goto L8
        L11:
            r2 = DrawableContainer.DEFAULT_DITHER;
        L13:
            this.mStateful = r2;
            this.mCheckedStateful = DrawableContainer.DEFAULT_DITHER;
            return r2;
        L5:
            return this.mStateful;
        }

        public void growArray(int r3, int r4) {
            Drawable[] r42 = new Drawable[r4];
            System.arraycopy(this.mDrawables, 0, r42, 0, r3);
            this.mDrawables = r42;
        }

        public synchronized boolean canConstantState() {
            monitor-enter(this);
        L19:
            th = move-exception;
            throw th;
        L4:
            if (this.mCheckedConstantState == false) goto L8;
            boolean r0 = this.mCanConstantState;     // Catch: Throwable -> L19
            monitor-exit(this);
            return r0;
        L8:
            createAllFutures();     // Catch: Throwable -> L19
            this.mCheckedConstantState = DrawableContainer.DEFAULT_DITHER;     // Catch: Throwable -> L19
            int r1 = this.mNumChildren;     // Catch: Throwable -> L19
            Drawable[] r2 = this.mDrawables;     // Catch: Throwable -> L19
            int r4 = 0;
        L9:
            if (r4 >= r1) goto L16;
            if (r2[r4].getConstantState() == null) goto L12;
            r4 = r4 + 1;
            goto L9
        L12:
            this.mCanConstantState = false;     // Catch: Throwable -> L19
            monitor-exit(this);
            return false;
        L16:
            this.mCanConstantState = DrawableContainer.DEFAULT_DITHER;     // Catch: Throwable -> L19
            monitor-exit(this);
            return DrawableContainer.DEFAULT_DITHER;
        }
    }

    DrawableContainer() {
        this.mAlpha = 255;
        this.mCurIndex = -1;
        this.mLastIndex = -1;
    }

    @Override
    public void draw(@NonNull Canvas r2) {
        Drawable r0 = this.mCurrDrawable;
        if (r0 == null) goto L5;
        r0.draw(r2);
    L5:
        Drawable r02 = this.mLastDrawable;
        if (r02 == null) goto L9;
        r02.draw(r2);
        return;
    }

    @Override
    public int getChangingConfigurations() {
        return super.getChangingConfigurations() | this.mDrawableContainerState.getChangingConfigurations();
    }

    @SuppressLint({"WrongConstant"})
    @TargetApi(23)
    private boolean needsMirroring() {
        if (isAutoMirrored() == true) goto L5;
    L7:
        return false;
    L5:
        if (getLayoutDirection() != 1) goto L7;
        return DEFAULT_DITHER;
    }

    @Override
    public boolean getPadding(@NonNull Rect r4) {
        Rect r0 = this.mDrawableContainerState.getConstantPadding();
        if (r0 == null) goto L8;
        r4.set(r0);
        int r1 = (r0.left | r0.top) | r0.bottom;
        if ((r0.right | r1) == 0) goto L7;
        boolean r02 = DEFAULT_DITHER;
    L13:
        if (needsMirroring() == false) goto L15;
        int r12 = r4.left;
        r4.left = r4.right;
        r4.right = r12;
    L15:
        return r02;
    L7:
        r02 = false;
        goto L13
    L8:
        Drawable r03 = this.mCurrDrawable;
        if (r03 == null) goto L11;
        r02 = r03.getPadding(r4);
        goto L13
    L11:
        r02 = super.getPadding(r4);
        goto L13
    }

    @Override
    @RequiresApi(21)
    public void getOutline(@NonNull Outline r2) {
        Drawable r0 = this.mCurrDrawable;
        if (r0 == null) goto L6;
        r0.getOutline(r2);
        return;
    }

    @Override
    public void setAlpha(int r7) {
        if (this.mHasAlpha == true) goto L5;
    L6:
        this.mHasAlpha = DEFAULT_DITHER;
        this.mAlpha = r7;
        Drawable r0 = this.mCurrDrawable;
        if (r0 != null) goto L9;
        return;
    L9:
        if (this.mEnterAnimationEnd != 0) goto L11;
        r0.setAlpha(r7);
        return;
    L11:
        animate(false);
        return;
    L5:
        if (this.mAlpha != r7) goto L6;
    }

    @Override
    public int getAlpha() {
        return this.mAlpha;
    }

    @Override
    public void setDither(boolean r2) {
        if (this.mDrawableContainerState.mDither == r2) goto L8;
        DrawableContainerState r0 = this.mDrawableContainerState;
        r0.mDither = r2;
        Drawable r22 = this.mCurrDrawable;
        if (r22 == null) goto L9;
        r22.setDither(r0.mDither);
        return;
    L9:
        return;
    }

    @Override
    public void setColorFilter(ColorFilter r3) {
        DrawableContainerState r0 = this.mDrawableContainerState;
        r0.mHasColorFilter = DEFAULT_DITHER;
        if (r0.mColorFilter == r3) goto L8;
        this.mDrawableContainerState.mColorFilter = r3;
        Drawable r02 = this.mCurrDrawable;
        if (r02 == null) goto L9;
        r02.setColorFilter(r3);
        return;
    L9:
        return;
    }

    @Override
    public void setTintList(ColorStateList r3) {
        DrawableContainerState r0 = this.mDrawableContainerState;
        r0.mHasTintList = DEFAULT_DITHER;
        if (r0.mTintList == r3) goto L6;
        this.mDrawableContainerState.mTintList = r3;
        DrawableCompat.setTintList(this.mCurrDrawable, r3);
        return;
    }

    @Override
    public void setTintMode(@NonNull PorterDuff.Mode r3) {
        DrawableContainerState r0 = this.mDrawableContainerState;
        r0.mHasTintMode = DEFAULT_DITHER;
        if (r0.mTintMode == r3) goto L6;
        this.mDrawableContainerState.mTintMode = r3;
        DrawableCompat.setTintMode(this.mCurrDrawable, r3);
        return;
    }

    public void setEnterFadeDuration(int r2) {
        this.mDrawableContainerState.mEnterFadeDuration = r2;
    }

    public void setExitFadeDuration(int r2) {
        this.mDrawableContainerState.mExitFadeDuration = r2;
    }

    @Override
    protected void onBoundsChange(Rect r2) {
        Drawable r0 = this.mLastDrawable;
        if (r0 == null) goto L5;
        r0.setBounds(r2);
    L5:
        Drawable r02 = this.mCurrDrawable;
        if (r02 == null) goto L9;
        r02.setBounds(r2);
        return;
    }

    @Override
    public boolean isStateful() {
        return this.mDrawableContainerState.isStateful();
    }

    @Override
    public void setAutoMirrored(boolean r2) {
        if (this.mDrawableContainerState.mAutoMirrored == r2) goto L8;
        DrawableContainerState r0 = this.mDrawableContainerState;
        r0.mAutoMirrored = r2;
        Drawable r22 = this.mCurrDrawable;
        if (r22 == null) goto L9;
        DrawableCompat.setAutoMirrored(r22, r0.mAutoMirrored);
        return;
    L9:
        return;
    }

    @Override
    public boolean isAutoMirrored() {
        return this.mDrawableContainerState.mAutoMirrored;
    }

    @Override
    public void jumpToCurrentState() {
        Drawable r0 = this.mLastDrawable;
        if (r0 == null) goto L5;
        r0.jumpToCurrentState();
        this.mLastDrawable = null;
        this.mLastIndex = -1;
        boolean r02 = DEFAULT_DITHER;
    L6:
        Drawable r2 = this.mCurrDrawable;
        if (r2 == null) goto L12;
        r2.jumpToCurrentState();
        if (this.mHasAlpha == false) goto L12;
        this.mCurrDrawable.setAlpha(this.mAlpha);
    L12:
        if (this.mExitAnimationEnd == 0) goto L15;
        this.mExitAnimationEnd = 0;
        r02 = DEFAULT_DITHER;
    L15:
        if (this.mEnterAnimationEnd == 0) goto L17;
        this.mEnterAnimationEnd = 0;
        r02 = DEFAULT_DITHER;
    L17:
        if (r02 == false) goto L20;
        invalidateSelf();
        return;
    L20:
        return;
    L5:
        r02 = false;
        goto L6
    }

    @Override
    public void setHotspot(float r2, float r3) {
        Drawable r0 = this.mCurrDrawable;
        if (r0 == null) goto L6;
        DrawableCompat.setHotspot(r0, r2, r3);
        return;
    }

    @Override
    public void setHotspotBounds(int r2, int r3, int r4, int r5) {
        Rect r0 = this.mHotspotBounds;
        if (r0 != null) goto L5;
        this.mHotspotBounds = new Rect(r2, r3, r4, r5);
    L6:
        Drawable r02 = this.mCurrDrawable;
        if (r02 == null) goto L10;
        DrawableCompat.setHotspotBounds(r02, r2, r3, r4, r5);
        return;
    L10:
        return;
    L5:
        r0.set(r2, r3, r4, r5);
        goto L6
    }

    @Override
    public void getHotspotBounds(@NonNull Rect r2) {
        Rect r0 = this.mHotspotBounds;
        if (r0 == null) goto L5;
        r2.set(r0);
        return;
    L5:
        super.getHotspotBounds(r2);
    }

    @Override
    protected boolean onStateChange(int[] r2) {
        Drawable r0 = this.mLastDrawable;
        if (r0 != null) goto L5;
        Drawable r02 = this.mCurrDrawable;
        if (r02 != null) goto L9;
        return false;
    L9:
        return r02.setState(r2);
    L5:
        return r0.setState(r2);
    }

    @Override
    protected boolean onLevelChange(int r2) {
        Drawable r0 = this.mLastDrawable;
        if (r0 != null) goto L5;
        Drawable r02 = this.mCurrDrawable;
        if (r02 != null) goto L9;
        return false;
    L9:
        return r02.setLevel(r2);
    L5:
        return r0.setLevel(r2);
    }

    @Override
    public boolean onLayoutDirectionChanged(int r3) {
        return this.mDrawableContainerState.setLayoutDirection(r3, getCurrentIndex());
    }

    @Override
    public int getIntrinsicWidth() {
        if (this.mDrawableContainerState.isConstantSize() == true) goto L5;
        Drawable r0 = this.mCurrDrawable;
        if (r0 != null) goto L11;
        return -1;
    L11:
        return r0.getIntrinsicWidth();
    L5:
        return this.mDrawableContainerState.getConstantWidth();
    }

    @Override
    public int getIntrinsicHeight() {
        if (this.mDrawableContainerState.isConstantSize() == true) goto L5;
        Drawable r0 = this.mCurrDrawable;
        if (r0 != null) goto L11;
        return -1;
    L11:
        return r0.getIntrinsicHeight();
    L5:
        return this.mDrawableContainerState.getConstantHeight();
    }

    @Override
    public int getMinimumWidth() {
        if (this.mDrawableContainerState.isConstantSize() == true) goto L5;
        Drawable r0 = this.mCurrDrawable;
        if (r0 != null) goto L11;
        return 0;
    L11:
        return r0.getMinimumWidth();
    L5:
        return this.mDrawableContainerState.getConstantMinimumWidth();
    }

    @Override
    public int getMinimumHeight() {
        if (this.mDrawableContainerState.isConstantSize() == true) goto L5;
        Drawable r0 = this.mCurrDrawable;
        if (r0 != null) goto L11;
        return 0;
    L11:
        return r0.getMinimumHeight();
    L5:
        return this.mDrawableContainerState.getConstantMinimumHeight();
    }

    public void invalidateDrawable(@NonNull Drawable r2) {
        DrawableContainerState r0 = this.mDrawableContainerState;
        if (r0 == null) goto L6;
        r0.invalidateCache();
    L6:
        if (r2 == this.mCurrDrawable) goto L8;
        return;
    L8:
        if (getCallback() == null) goto L12;
        getCallback().invalidateDrawable(this);
        return;
    }

    public void scheduleDrawable(@NonNull Drawable r2, @NonNull Runnable r3, long r4) {
        if (r2 == this.mCurrDrawable) goto L5;
        return;
    L5:
        if (getCallback() == null) goto L9;
        getCallback().scheduleDrawable(this, r3, r4);
        return;
    }

    public void unscheduleDrawable(@NonNull Drawable r2, @NonNull Runnable r3) {
        if (r2 == this.mCurrDrawable) goto L5;
        return;
    L5:
        if (getCallback() == null) goto L9;
        getCallback().unscheduleDrawable(this, r3);
        return;
    }

    @Override
    public boolean setVisible(boolean r3, boolean r4) {
        boolean r0 = super.setVisible(r3, r4);
        Drawable r1 = this.mLastDrawable;
        if (r1 == null) goto L5;
        r1.setVisible(r3, r4);
    L5:
        Drawable r12 = this.mCurrDrawable;
        if (r12 == null) goto L8;
        r12.setVisible(r3, r4);
    L8:
        return r0;
    }

    @Override
    public int getOpacity() {
        Drawable r0 = this.mCurrDrawable;
        if (r0 != null) goto L5;
    L8:
        return -2;
    L5:
        if (r0.isVisible() == false) goto L8;
        return this.mDrawableContainerState.getOpacity();
    }

    void setCurrentIndex(int r1) {
        selectDrawable(r1);
    }

    int getCurrentIndex() {
        return this.mCurIndex;
    }

    boolean selectDrawable(int r9) {
        if (r9 != this.mCurIndex) goto L5;
        return false;
    L5:
        long r2 = SystemClock.uptimeMillis();
        if (this.mDrawableContainerState.mExitFadeDuration <= 0) goto L14;
        Drawable r0 = this.mLastDrawable;
        if (r0 == null) goto L10;
        r0.setVisible(false, false);
    L10:
        Drawable r02 = this.mCurrDrawable;
        if (r02 == null) goto L13;
        this.mLastDrawable = r02;
        this.mLastIndex = this.mCurIndex;
        this.mExitAnimationEnd = ((long) this.mDrawableContainerState.mExitFadeDuration) + r2;
    L17:
        if (r9 >= 0) goto L19;
    L26:
        this.mCurrDrawable = null;
        this.mCurIndex = -1;
    L28:
        if (this.mEnterAnimationEnd == 0) goto L30;
    L31:
        Runnable r03 = this.mAnimationRunnable;
        if (r03 != null) goto L34;
        this.mAnimationRunnable = new 1(this);
    L35:
        animate(DEFAULT_DITHER);
    L36:
        invalidateSelf();
        return DEFAULT_DITHER;
    L34:
        unscheduleSelf(r03);
        goto L35
    L30:
        if (this.mExitAnimationEnd == 0) goto L36;
    L19:
        if (r9 >= this.mDrawableContainerState.mNumChildren) goto L26;
        Drawable r04 = this.mDrawableContainerState.getChild(r9);
        this.mCurrDrawable = r04;
        this.mCurIndex = r9;
        if (r04 == null) goto L28;
        if (this.mDrawableContainerState.mEnterFadeDuration <= 0) goto L25;
        this.mEnterAnimationEnd = r2 + ((long) this.mDrawableContainerState.mEnterFadeDuration);
    L25:
        initializeDrawableForDisplay(r04);
        goto L28
    L13:
        this.mLastDrawable = null;
        this.mLastIndex = -1;
        this.mExitAnimationEnd = 0;
        goto L17
    L14:
        Drawable r05 = this.mCurrDrawable;
        if (r05 == null) goto L17;
        r05.setVisible(false, false);
        goto L17
    }

    private void initializeDrawableForDisplay(Drawable r5) {
        if (this.mBlockInvalidateCallback != null) goto L5;
        this.mBlockInvalidateCallback = new BlockInvalidateCallback();
    L5:
        r5.setCallback(this.mBlockInvalidateCallback.wrap(r5.getCallback()));
    L32:
        th = move-exception;
        r5.setCallback(this.mBlockInvalidateCallback.unwrap());
        throw th;
    L7:
        if (this.mDrawableContainerState.mEnterFadeDuration > 0) goto L12;
        if (this.mHasAlpha == false) goto L12;
        r5.setAlpha(this.mAlpha);     // Catch: Throwable -> L32
    L12:
        if (this.mDrawableContainerState.mHasColorFilter == false) goto L15;
        r5.setColorFilter(this.mDrawableContainerState.mColorFilter);     // Catch: Throwable -> L32
    L20:
        r5.setVisible(isVisible(), DEFAULT_DITHER);     // Catch: Throwable -> L32
        r5.setDither(this.mDrawableContainerState.mDither);     // Catch: Throwable -> L32
        r5.setState(getState());     // Catch: Throwable -> L32
        r5.setLevel(getLevel());     // Catch: Throwable -> L32
        r5.setBounds(getBounds());     // Catch: Throwable -> L32
        if (Build.VERSION.SDK_INT < 23) goto L24;
        r5.setLayoutDirection(getLayoutDirection());     // Catch: Throwable -> L32
    L24:
        if (Build.VERSION.SDK_INT < 19) goto L26;
        r5.setAutoMirrored(this.mDrawableContainerState.mAutoMirrored);     // Catch: Throwable -> L32
    L26:
        Rect r0 = this.mHotspotBounds;     // Catch: Throwable -> L32
        if (Build.VERSION.SDK_INT < 21) goto L30;
        if (r0 == null) goto L30;
        r5.setHotspotBounds(r0.left, r0.top, r0.right, r0.bottom);     // Catch: Throwable -> L32
    L30:
        r5.setCallback(this.mBlockInvalidateCallback.unwrap());
        return;
    L15:
        if (this.mDrawableContainerState.mHasTintList == false) goto L18;
        DrawableCompat.setTintList(r5, this.mDrawableContainerState.mTintList);     // Catch: Throwable -> L32
    L18:
        if (this.mDrawableContainerState.mHasTintMode == false) goto L20;
        DrawableCompat.setTintMode(r5, this.mDrawableContainerState.mTintMode);     // Catch: Throwable -> L32
        goto L20
    }

    void animate(boolean r14) {
        boolean r0 = DEFAULT_DITHER;
        this.mHasAlpha = DEFAULT_DITHER;
        long r1 = SystemClock.uptimeMillis();
        Drawable r3 = this.mCurrDrawable;
        if (r3 == null) goto L10;
        long r9 = this.mEnterAnimationEnd;
        if (r9 != 0) goto L7;
    L11:
        boolean r32 = false;
    L12:
        Drawable r92 = this.mLastDrawable;
        if (r92 == null) goto L20;
        long r10 = this.mExitAnimationEnd;
        if (r10 != 0) goto L17;
    L21:
        r0 = r32;
    L22:
        if (r14 == false) goto L26;
        if (r0 == false) goto L27;
        scheduleSelf(this.mAnimationRunnable, r1 + 16);
        return;
    L27:
        return;
    L26:
        return;
    L17:
        if (r10 > r1) goto L19;
        r92.setVisible(false, false);
        this.mLastDrawable = null;
        this.mLastIndex = -1;
        this.mExitAnimationEnd = 0;
        goto L21
    L19:
        int r33 = ((int) ((r10 - r1) * 255)) / this.mDrawableContainerState.mExitFadeDuration;
        this.mLastDrawable.setAlpha((r33 * this.mAlpha) / 255);
        goto L22
    L20:
        this.mExitAnimationEnd = 0;
        goto L21
    L7:
        if (r9 > r1) goto L9;
        r3.setAlpha(this.mAlpha);
        this.mEnterAnimationEnd = 0;
        goto L11
    L9:
        int r34 = ((int) ((r9 - r1) * 255)) / this.mDrawableContainerState.mEnterFadeDuration;
        this.mCurrDrawable.setAlpha(((255 - r34) * this.mAlpha) / 255);
        r32 = DEFAULT_DITHER;
        goto L12
    L10:
        this.mEnterAnimationEnd = 0;
        goto L11
    }

    @Override
    @NonNull
    public Drawable getCurrent() {
        return this.mCurrDrawable;
    }

    final void updateDensity(Resources r2) {
        this.mDrawableContainerState.updateDensity(r2);
    }

    @Override
    @RequiresApi(21)
    public void applyTheme(@NonNull Resources.Theme r2) {
        this.mDrawableContainerState.applyTheme(r2);
    }

    @Override
    @RequiresApi(21)
    public boolean canApplyTheme() {
        return this.mDrawableContainerState.canApplyTheme();
    }

    @Override
    public final Drawable.ConstantState getConstantState() {
        if (this.mDrawableContainerState.canConstantState() == false) goto L6;
        DrawableContainerState r0 = this.mDrawableContainerState;
        r0.mChangingConfigurations = getChangingConfigurations();
        return this.mDrawableContainerState;
    L6:
        return null;
    }

    @Override
    @NonNull
    public Drawable mutate() {
        if (this.mMutated == false) goto L5;
    L7:
        return this;
    L5:
        if (super.mutate() != this) goto L7;
        DrawableContainerState r0 = cloneConstantState();
        r0.mutate();
        setConstantState(r0);
        this.mMutated = DEFAULT_DITHER;
        goto L7
    }

    DrawableContainerState cloneConstantState() {
        return this.mDrawableContainerState;
    }

    void clearMutated() {
        this.mDrawableContainerState.clearMutated();
        this.mMutated = false;
    }

    protected void setConstantState(DrawableContainerState r2) {
        this.mDrawableContainerState = r2;
        int r0 = this.mCurIndex;
        if (r0 < 0) goto L7;
        this.mCurrDrawable = r2.getChild(r0);
        Drawable r22 = this.mCurrDrawable;
        if (r22 == null) goto L7;
        initializeDrawableForDisplay(r22);
    L7:
        this.mLastIndex = -1;
        this.mLastDrawable = null;
    }

    static int resolveDensity(@Nullable Resources r0, int r1) {
        if (r0 == null) goto L5;
        r1 = r0.getDisplayMetrics().densityDpi;
    L5:
        if (r1 != 0) goto L8;
        return 160;
    L8:
        return r1;
    }
}
