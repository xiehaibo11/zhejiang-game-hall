package android.support.v7.graphics.drawable;

import android.content.Context;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresApi;
import android.support.annotation.RestrictTo;
import android.support.v4.content.res.TypedArrayUtils;
import android.support.v7.appcompat.R;
import android.support.v7.content.res.AppCompatResources;
import android.support.v7.graphics.drawable.DrawableContainer;
import android.util.AttributeSet;
import android.util.StateSet;
import java.io.IOException;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
class StateListDrawable extends DrawableContainer {
    private static final boolean DEBUG = false;
    private static final String TAG = "StateListDrawable";
    private boolean mMutated;
    private StateListState mStateListState;

    static class StateListState extends DrawableContainer.DrawableContainerState {
        int[][] mStateSets;

        StateListState(StateListState r1, StateListDrawable r2, Resources r3) {
            super(r1, r2, r3);
            if (r1 == null) goto L5;
            this.mStateSets = r1.mStateSets;
            return;
        L5:
            this.mStateSets = new int[getCapacity()][];
        }

        @Override
        void mutate() {
            int[][] r0 = this.mStateSets;
            int[][] r1 = new int[r0.length][];
            int r02 = r0.length - 1;
        L3:
            if (r02 < 0) goto L9;
            int[][] r2 = this.mStateSets;
            if (r2[r02] == null) goto L7;
            int[] r22 = (int[]) r2[r02].clone();
        L8:
            r1[r02] = r22;
            r02 = r02 - 1;
            goto L3
        L7:
            r22 = null;
            goto L8
        L9:
            this.mStateSets = r1;
        }

        int addStateSet(int[] r2, Drawable r3) {
            int r32 = addChild(r3);
            this.mStateSets[r32] = r2;
            return r32;
        }

        int indexOfStateSet(int[] r5) {
            int[][] r0 = this.mStateSets;
            int r1 = getChildCount();
            int r2 = 0;
        L3:
            if (r2 >= r1) goto L8;
            if (StateSet.stateSetMatches(r0[r2], r5) == true) goto L6;
            r2 = r2 + 1;
            goto L3
        L6:
            return r2;
        L8:
            return -1;
        }

        @Override
        @NonNull
        public Drawable newDrawable() {
            return new StateListDrawable(this, null);
        }

        @Override
        @NonNull
        public Drawable newDrawable(Resources r2) {
            return new StateListDrawable(this, r2);
        }

        @Override
        public void growArray(int r3, int r4) {
            super.growArray(r3, r4);
            int[][] r42 = new int[r4][];
            System.arraycopy(this.mStateSets, 0, r42, 0, r3);
            this.mStateSets = r42;
        }
    }

    @Override
    public boolean isStateful() {
        return true;
    }

    @Override
    DrawableContainer.DrawableContainerState cloneConstantState() {
        return cloneConstantState();
    }

    StateListDrawable() {
        this(null, null);
    }

    public void addState(int[] r2, Drawable r3) {
        if (r3 == null) goto L5;
        this.mStateListState.addStateSet(r2, r3);
        onStateChange(getState());
        return;
    }

    @Override
    protected boolean onStateChange(int[] r3) {
        boolean r0 = super.onStateChange(r3);
        int r32 = this.mStateListState.indexOfStateSet(r3);
        if (r32 >= 0) goto L6;
        r32 = this.mStateListState.indexOfStateSet(StateSet.WILD_CARD);
    L6:
        if (selectDrawable(r32) == true) goto L10;
        if (r0 == true) goto L10;
        return false;
    L10:
        return true;
    }

    public void inflate(@NonNull Context r4, @NonNull Resources r5, @NonNull XmlPullParser r6, @NonNull AttributeSet r7, @Nullable Resources.Theme r8) throws XmlPullParserException, IOException {
        TypedArray r0 = TypedArrayUtils.obtainAttributes(r5, r8, r7, R.styleable.StateListDrawable);
        setVisible(r0.getBoolean(R.styleable.StateListDrawable_android_visible, true), true);
        updateStateFromTypedArray(r0);
        updateDensity(r5);
        r0.recycle();
        inflateChildElements(r4, r5, r6, r7, r8);
        onStateChange(getState());
    }

    private void updateStateFromTypedArray(TypedArray r4) {
        StateListState r0 = this.mStateListState;
        if (Build.VERSION.SDK_INT < 21) goto L5;
        r0.mChangingConfigurations |= r4.getChangingConfigurations();
    L5:
        r0.mVariablePadding = r4.getBoolean(R.styleable.StateListDrawable_android_variablePadding, r0.mVariablePadding);
        r0.mConstantSize = r4.getBoolean(R.styleable.StateListDrawable_android_constantSize, r0.mConstantSize);
        r0.mEnterFadeDuration = r4.getInt(R.styleable.StateListDrawable_android_enterFadeDuration, r0.mEnterFadeDuration);
        r0.mExitFadeDuration = r4.getInt(R.styleable.StateListDrawable_android_exitFadeDuration, r0.mExitFadeDuration);
        r0.mDither = r4.getBoolean(R.styleable.StateListDrawable_android_dither, r0.mDither);
    }

    private void inflateChildElements(Context r9, Resources r10, XmlPullParser r11, AttributeSet r12, Resources.Theme r13) throws XmlPullParserException, IOException {
        StateListState r0 = this.mStateListState;
        int r1 = r11.getDepth() + 1;
    L3:
        int r3 = r11.next();
        if (r3 == 1) goto L32;
        int r4 = r11.getDepth();
        if (r4 >= r1) goto L10;
        if (r3 != 3) goto L10;
        return;
    L10:
        if (r3 != 2) goto L3;
        if (r4 > r1) goto L3;
        if (r11.getName().equals("item") == false) goto L3;
        TypedArray r32 = TypedArrayUtils.obtainAttributes(r10, r13, r12, R.styleable.StateListDrawableItem);
        Drawable r42 = null;
        int r6 = r32.getResourceId(R.styleable.StateListDrawableItem_android_drawable, -1);
        if (r6 <= 0) goto L19;
        r42 = AppCompatResources.getDrawable(r9, r6);
    L19:
        r32.recycle();
        int[] r33 = extractStateSet(r12);
        if (r42 != null) goto L31;
    L21:
        int r43 = r11.next();
        if (r43 == 4) goto L21;
        if (r43 != 2) goto L30;
        if (Build.VERSION.SDK_INT < 21) goto L28;
        r42 = Drawable.createFromXmlInner(r10, r11, r12, r13);
        goto L31
    L28:
        r42 = Drawable.createFromXmlInner(r10, r11, r12);
        goto L31
    L30:
        throw new XmlPullParserException(r11.getPositionDescription() + ": <item> tag requires a 'drawable' attribute or child tag defining a drawable");
    L31:
        r0.addStateSet(r33, r42);
        goto L3
    }

    int[] extractStateSet(AttributeSet r9) {
        int r0 = r9.getAttributeCount();
        int[] r1 = new int[r0];
        int r3 = 0;
        int r4 = 0;
    L3:
        if (r3 >= r0) goto L17;
        int r5 = r9.getAttributeNameResource(r3);
        if (r5 == 0) goto L15;
        if (r5 == 16842960) goto L15;
        if (r5 == 16843161) goto L15;
        int r6 = r4 + 1;
        if (r9.getAttributeBooleanValue(r3, false) == true) goto L14;
        r5 = -r5;
    L14:
        r1[r4] = r5;
        r4 = r6;
    L15:
        r3 = r3 + 1;
        goto L3
    L17:
        return StateSet.trimStateSet(r1, r4);
    }

    StateListState getStateListState() {
        return this.mStateListState;
    }

    int getStateCount() {
        return this.mStateListState.getChildCount();
    }

    int[] getStateSet(int r2) {
        return this.mStateListState.mStateSets[r2];
    }

    Drawable getStateDrawable(int r2) {
        return this.mStateListState.getChild(r2);
    }

    int getStateDrawableIndex(int[] r2) {
        return this.mStateListState.indexOfStateSet(r2);
    }

    @Override
    @NonNull
    public Drawable mutate() {
        if (this.mMutated == false) goto L5;
    L7:
        return this;
    L5:
        if (super.mutate() != this) goto L7;
        this.mStateListState.mutate();
        this.mMutated = true;
        goto L7
    }

    @Override
    StateListState cloneConstantState() {
        return new StateListState(this.mStateListState, this, null);
    }

    @Override
    void clearMutated() {
        super.clearMutated();
        this.mMutated = false;
    }

    @Override
    @RequiresApi(21)
    public void applyTheme(@NonNull Resources.Theme r1) {
        super.applyTheme(r1);
        onStateChange(getState());
    }

    @Override
    protected void setConstantState(@NonNull DrawableContainer.DrawableContainerState r2) {
        super.setConstantState(r2);
        if ((r2 instanceof StateListState) == false) goto L6;
        this.mStateListState = (StateListState) r2;
        return;
    }

    StateListDrawable(StateListState r2, Resources r3) {
        setConstantState(new StateListState(r2, this, r3));
        onStateChange(getState());
    }

    StateListDrawable(@Nullable StateListState r1) {
        if (r1 == null) goto L6;
        setConstantState(r1);
        return;
    }
}
