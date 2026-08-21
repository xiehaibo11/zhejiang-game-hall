package android.support.v7.graphics.drawable;

import android.animation.ObjectAnimator;
import android.animation.TimeInterpolator;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.content.res.XmlResourceParser;
import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.Outline;
import android.graphics.PorterDuff;
import android.graphics.Rect;
import android.graphics.drawable.Animatable;
import android.graphics.drawable.AnimationDrawable;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.support.annotation.DrawableRes;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresApi;
import android.support.graphics.drawable.AnimatedVectorDrawableCompat;
import android.support.graphics.drawable.VectorDrawableCompat;
import android.support.v4.content.res.TypedArrayUtils;
import android.support.v4.util.LongSparseArray;
import android.support.v4.util.SparseArrayCompat;
import android.support.v7.appcompat.R;
import android.support.v7.content.res.AppCompatResources;
import android.support.v7.graphics.drawable.DrawableContainer;
import android.support.v7.graphics.drawable.StateListDrawable;
import android.util.AttributeSet;
import android.util.Log;
import android.util.StateSet;
import android.util.Xml;
import java.io.IOException;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;

public class AnimatedStateListDrawableCompat extends StateListDrawable {
    private static final String ELEMENT_ITEM = "item";
    private static final String ELEMENT_TRANSITION = "transition";
    private static final String ITEM_MISSING_DRAWABLE_ERROR = ": <item> tag requires a 'drawable' attribute or child tag defining a drawable";
    private static final String LOGTAG = "AnimatedStateListDrawableCompat";
    private static final String TRANSITION_MISSING_DRAWABLE_ERROR = ": <transition> tag requires a 'drawable' attribute or child tag defining a drawable";
    private static final String TRANSITION_MISSING_FROM_TO_ID = ": <transition> tag requires 'fromId' & 'toId' attributes";
    private boolean mMutated;
    private AnimatedStateListState mState;
    private Transition mTransition;
    private int mTransitionFromIndex;
    private int mTransitionToIndex;

    static class 1 {
    }

    private static class AnimatableTransition extends Transition {
        private final Animatable mA;

        AnimatableTransition(Animatable r2) {
            super(null);
            this.mA = r2;
        }

        @Override
        public void start() {
            this.mA.start();
        }

        @Override
        public void stop() {
            this.mA.stop();
        }
    }

    static class AnimatedStateListState extends StateListDrawable.StateListState {
        private static final long REVERSED_BIT = 4294967296L;
        private static final long REVERSIBLE_FLAG_BIT = 8589934592L;
        SparseArrayCompat<Integer> mStateIds;
        LongSparseArray<Long> mTransitions;

        private static long generateTransitionKey(int r2, int r3) {
            long r0 = ((long) r2) << 32;
            return ((long) r3) | r0;
        }

        AnimatedStateListState(@Nullable AnimatedStateListState r1, @NonNull AnimatedStateListDrawableCompat r2, @Nullable Resources r3) {
            super(r1, r2, r3);
            if (r1 == null) goto L5;
            this.mTransitions = r1.mTransitions;
            this.mStateIds = r1.mStateIds;
            return;
        L5:
            this.mTransitions = new LongSparseArray();
            this.mStateIds = new SparseArrayCompat();
        }

        @Override
        void mutate() {
            this.mTransitions = this.mTransitions.clone();
            this.mStateIds = this.mStateIds.clone();
        }

        int addTransition(int r10, int r11, @NonNull Drawable r12, boolean r13) {
            int r122 = super.addChild(r12);
            long r0 = generateTransitionKey(r10, r11);
            if (r13 == false) goto L5;
            long r2 = REVERSIBLE_FLAG_BIT;
        L6:
            long r5 = r122;
            this.mTransitions.append(r0, Long.valueOf(r5 | r2));
            if (r13 == false) goto L9;
            this.mTransitions.append(generateTransitionKey(r11, r10), Long.valueOf((REVERSED_BIT | r5) | r2));
        L9:
            return r122;
        L5:
            r2 = 0;
            goto L6
        }

        int addStateSet(@NonNull int[] r1, @NonNull Drawable r2, int r3) {
            int r12 = super.addStateSet(r1, r2);
            this.mStateIds.put(r12, Integer.valueOf(r3));
            return r12;
        }

        int indexOfKeyframe(@NonNull int[] r1) {
            int r12 = super.indexOfStateSet(r1);
            if (r12 < 0) goto L6;
            return r12;
        L6:
            return super.indexOfStateSet(StateSet.WILD_CARD);
        }

        int getKeyframeIdAt(int r3) {
            if (r3 >= 0) goto L6;
            return 0;
        L6:
            return this.mStateIds.get(r3, 0).intValue();
        }

        int indexOfTransition(int r4, int r5) {
            long r42 = generateTransitionKey(r4, r5);
            return (int) this.mTransitions.get(r42, -1L).longValue();
        }

        boolean isTransitionReversed(int r4, int r5) {
            long r42 = generateTransitionKey(r4, r5);
            if ((this.mTransitions.get(r42, -1L).longValue() & REVERSED_BIT) == 0) goto L5;
            return true;
        L5:
            return false;
        }

        boolean transitionHasReversibleFlag(int r4, int r5) {
            long r42 = generateTransitionKey(r4, r5);
            if ((this.mTransitions.get(r42, -1L).longValue() & REVERSIBLE_FLAG_BIT) == 0) goto L5;
            return true;
        L5:
            return false;
        }

        @Override
        @NonNull
        public Drawable newDrawable() {
            return new AnimatedStateListDrawableCompat(this, null);
        }

        @Override
        @NonNull
        public Drawable newDrawable(Resources r2) {
            return new AnimatedStateListDrawableCompat(this, r2);
        }
    }

    private static class AnimatedVectorDrawableTransition extends Transition {
        private final AnimatedVectorDrawableCompat mAvd;

        AnimatedVectorDrawableTransition(AnimatedVectorDrawableCompat r2) {
            super(null);
            this.mAvd = r2;
        }

        @Override
        public void start() {
            this.mAvd.start();
        }

        @Override
        public void stop() {
            this.mAvd.stop();
        }
    }

    private static class AnimationDrawableTransition extends Transition {
        private final ObjectAnimator mAnim;
        private final boolean mHasReversibleFlag;

        AnimationDrawableTransition(AnimationDrawable r6, boolean r7, boolean r8) {
            super(null);
            int r0 = r6.getNumberOfFrames();
            if (r7 == false) goto L5;
            int r2 = r0 - 1;
        L7:
            if (r7 == false) goto L9;
            int r02 = 0;
        L10:
            FrameInterpolator r4 = new FrameInterpolator(r6, r7);
            ObjectAnimator r62 = ObjectAnimator.ofInt(r6, "currentIndex", new int[]{r2, r02});
            if (Build.VERSION.SDK_INT < 18) goto L13;
            r62.setAutoCancel(true);
        L13:
            r62.setDuration(r4.getTotalDuration());
            r62.setInterpolator(r4);
            this.mHasReversibleFlag = r8;
            this.mAnim = r62;
            return;
        L9:
            r02 = r0 - 1;
            goto L10
        L5:
            r2 = 0;
            goto L7
        }

        @Override
        public boolean canReverse() {
            return this.mHasReversibleFlag;
        }

        @Override
        public void start() {
            this.mAnim.start();
        }

        @Override
        public void reverse() {
            this.mAnim.reverse();
        }

        @Override
        public void stop() {
            this.mAnim.cancel();
        }
    }

    private static class FrameInterpolator implements TimeInterpolator {
        private int[] mFrameTimes;
        private int mFrames;
        private int mTotalDuration;

        FrameInterpolator(AnimationDrawable r1, boolean r2) {
            updateFrames(r1, r2);
        }

        int updateFrames(AnimationDrawable r6, boolean r7) {
            int r0 = r6.getNumberOfFrames();
            this.mFrames = r0;
            int[] r1 = this.mFrameTimes;
            if (r1 != null) goto L5;
        L6:
            this.mFrameTimes = new int[r0];
        L7:
            int[] r12 = this.mFrameTimes;
            int r2 = 0;
            int r3 = 0;
        L8:
            if (r2 >= r0) goto L13;
            if (r7 == false) goto L11;
            int r4 = (r0 - r2) - 1;
        L12:
            int r42 = r6.getDuration(r4);
            r12[r2] = r42;
            r3 = r3 + r42;
            r2 = r2 + 1;
            goto L8
        L11:
            r4 = r2;
            goto L12
        L13:
            this.mTotalDuration = r3;
            return r3;
        L5:
            if (r1.length >= r0) goto L7;
            goto L6
        }

        int getTotalDuration() {
            return this.mTotalDuration;
        }

        @Override
        public float getInterpolation(float r5) {
            int r52 = (int) ((r5 * this.mTotalDuration) + 0.5f);
            int r0 = this.mFrames;
            int[] r1 = this.mFrameTimes;
            int r2 = 0;
        L3:
            if (r2 >= r0) goto L7;
            if (r52 < r1[r2]) goto L7;
            r52 = r52 - r1[r2];
            r2 = r2 + 1;
        L7:
            if (r2 >= r0) goto L9;
            float r53 = r52 / this.mTotalDuration;
        L11:
            return (r2 / r0) + r53;
        L9:
            r53 = 0.0f;
            goto L11
        }
    }

    private static abstract class Transition {
        public boolean canReverse() {
            return false;
        }

        public void reverse() {
        }

        public abstract void start();

        public abstract void stop();

        private Transition() {
        }

        Transition(1 r1) {
            this();
        }
    }

    static {
    }

    @Override
    public boolean isStateful() {
        return true;
    }

    @Override
    public void addState(int[] r1, Drawable r2) {
        super.addState(r1, r2);
    }

    @Override
    @RequiresApi(21)
    public void applyTheme(@NonNull Resources.Theme r1) {
        super.applyTheme(r1);
    }

    @Override
    @RequiresApi(21)
    public boolean canApplyTheme() {
        return super.canApplyTheme();
    }

    @Override
    DrawableContainer.DrawableContainerState cloneConstantState() {
        return cloneConstantState();
    }

    @Override
    StateListDrawable.StateListState cloneConstantState() {
        return cloneConstantState();
    }

    @Override
    public void draw(@NonNull Canvas r1) {
        super.draw(r1);
    }

    @Override
    public int getAlpha() {
        return super.getAlpha();
    }

    @Override
    public int getChangingConfigurations() {
        return super.getChangingConfigurations();
    }

    @Override
    @NonNull
    public Drawable getCurrent() {
        return super.getCurrent();
    }

    @Override
    public void getHotspotBounds(@NonNull Rect r1) {
        super.getHotspotBounds(r1);
    }

    @Override
    public int getIntrinsicHeight() {
        return super.getIntrinsicHeight();
    }

    @Override
    public int getIntrinsicWidth() {
        return super.getIntrinsicWidth();
    }

    @Override
    public int getMinimumHeight() {
        return super.getMinimumHeight();
    }

    @Override
    public int getMinimumWidth() {
        return super.getMinimumWidth();
    }

    @Override
    public int getOpacity() {
        return super.getOpacity();
    }

    @Override
    @RequiresApi(21)
    public void getOutline(@NonNull Outline r1) {
        super.getOutline(r1);
    }

    @Override
    public boolean getPadding(@NonNull Rect r1) {
        return super.getPadding(r1);
    }

    @Override
    public void invalidateDrawable(@NonNull Drawable r1) {
        super.invalidateDrawable(r1);
    }

    @Override
    public boolean isAutoMirrored() {
        return super.isAutoMirrored();
    }

    @Override
    public boolean onLayoutDirectionChanged(int r1) {
        return super.onLayoutDirectionChanged(r1);
    }

    @Override
    public void scheduleDrawable(@NonNull Drawable r1, @NonNull Runnable r2, long r3) {
        super.scheduleDrawable(r1, r2, r3);
    }

    @Override
    public void setAlpha(int r1) {
        super.setAlpha(r1);
    }

    @Override
    public void setAutoMirrored(boolean r1) {
        super.setAutoMirrored(r1);
    }

    @Override
    public void setColorFilter(ColorFilter r1) {
        super.setColorFilter(r1);
    }

    @Override
    public void setDither(boolean r1) {
        super.setDither(r1);
    }

    @Override
    public void setEnterFadeDuration(int r1) {
        super.setEnterFadeDuration(r1);
    }

    @Override
    public void setExitFadeDuration(int r1) {
        super.setExitFadeDuration(r1);
    }

    @Override
    public void setHotspot(float r1, float r2) {
        super.setHotspot(r1, r2);
    }

    @Override
    public void setHotspotBounds(int r1, int r2, int r3, int r4) {
        super.setHotspotBounds(r1, r2, r3, r4);
    }

    @Override
    public void setTintList(ColorStateList r1) {
        super.setTintList(r1);
    }

    @Override
    public void setTintMode(@NonNull PorterDuff.Mode r1) {
        super.setTintMode(r1);
    }

    @Override
    public void unscheduleDrawable(@NonNull Drawable r1, @NonNull Runnable r2) {
        super.unscheduleDrawable(r1, r2);
    }

    public AnimatedStateListDrawableCompat() {
        this(null, null);
    }

    AnimatedStateListDrawableCompat(@Nullable AnimatedStateListState r2, @Nullable Resources r3) {
        super(null);
        this.mTransitionToIndex = -1;
        this.mTransitionFromIndex = -1;
        setConstantState(new AnimatedStateListState(r2, this, r3));
        onStateChange(getState());
        jumpToCurrentState();
    }

    @Nullable
    public static AnimatedStateListDrawableCompat create(@NonNull Context r6, @DrawableRes int r7, @Nullable Resources.Theme r8) {
        Resources r1 = r6.getResources();     // Catch: IOException -> L14 XmlPullParserException -> L16
        XmlResourceParser r72 = r1.getXml(r7);     // Catch: IOException -> L14 XmlPullParserException -> L16
        AttributeSet r2 = Xml.asAttributeSet(r72);     // Catch: IOException -> L14 XmlPullParserException -> L16
    L4:
        int r3 = r72.next();     // Catch: IOException -> L14 XmlPullParserException -> L16
        if (r3 == 2) goto L9;
        if (r3 != 1) goto L4;
    L9:
        if (r3 != 2) goto L13;
        return createFromXmlInner(r6, r1, r72, r2, r8);
    L13:
        throw new XmlPullParserException("No start tag found");     // Catch: IOException -> L14 XmlPullParserException -> L16
    L14:
        e = move-exception;
        Log.e(LOGTAG, "parser error", e);
        return null;
    L16:
        e = move-exception;
        Log.e(LOGTAG, "parser error", e);
        return null;
    }

    public static AnimatedStateListDrawableCompat createFromXmlInner(@NonNull Context r8, @NonNull Resources r9, @NonNull XmlPullParser r10, @NonNull AttributeSet r11, @Nullable Resources.Theme r12) throws IOException, XmlPullParserException {
        String r0 = r10.getName();
        if (r0.equals("animated-selector") == false) goto L7;
        AnimatedStateListDrawableCompat r02 = new AnimatedStateListDrawableCompat();
        r02.inflate(r8, r9, r10, r11, r12);
        return r02;
    L7:
        throw new XmlPullParserException(r10.getPositionDescription() + ": invalid animated-selector tag " + r0);
    }

    @Override
    public void inflate(@NonNull Context r4, @NonNull Resources r5, @NonNull XmlPullParser r6, @NonNull AttributeSet r7, @Nullable Resources.Theme r8) throws XmlPullParserException, IOException {
        TypedArray r0 = TypedArrayUtils.obtainAttributes(r5, r8, r7, R.styleable.AnimatedStateListDrawableCompat);
        setVisible(r0.getBoolean(R.styleable.AnimatedStateListDrawableCompat_android_visible, true), true);
        updateStateFromTypedArray(r0);
        updateDensity(r5);
        r0.recycle();
        inflateChildElements(r4, r5, r6, r7, r8);
        init();
    }

    @Override
    public boolean setVisible(boolean r3, boolean r4) {
        boolean r0 = super.setVisible(r3, r4);
        if (this.mTransition == null) goto L9;
        if (r0 == true) goto L6;
        if (r4 == false) goto L9;
    L6:
        if (r3 == false) goto L8;
        this.mTransition.start();
        goto L9
    L8:
        jumpToCurrentState();
    L9:
        return r0;
    }

    public void addState(@NonNull int[] r2, @NonNull Drawable r3, int r4) {
        if (r3 == null) goto L6;
        this.mState.addStateSet(r2, r3, r4);
        onStateChange(getState());
        return;
    L6:
        throw new IllegalArgumentException("Drawable must not be null");
    }

    public <T extends Drawable & Animatable> void addTransition(int r2, int r3, @NonNull T r4, boolean r5) {
        if (r4 == null) goto L6;
        this.mState.addTransition(r2, r3, r4, r5);
        return;
    L6:
        throw new IllegalArgumentException("Transition drawable must not be null");
    }

    @Override
    public void jumpToCurrentState() {
        super.jumpToCurrentState();
        Transition r0 = this.mTransition;
        if (r0 == null) goto L6;
        r0.stop();
        this.mTransition = null;
        selectDrawable(this.mTransitionToIndex);
        this.mTransitionToIndex = -1;
        this.mTransitionFromIndex = -1;
        return;
    }

    @Override
    protected boolean onStateChange(int[] r3) {
        int r0 = this.mState.indexOfKeyframe(r3);
        if (r0 != getCurrentIndex()) goto L5;
    L9:
        boolean r02 = false;
    L10:
        Drawable r1 = getCurrent();
        if (r1 != null) goto L13;
        return r02;
    L13:
        return r02 | r1.setState(r3);
    L5:
        if (selectTransition(r0) == false) goto L7;
    L8:
        r02 = true;
        goto L10
    L7:
        if (selectDrawable(r0) == false) goto L9;
        goto L8
    }

    private boolean selectTransition(int r10) {
        Transition r0 = this.mTransition;
        if (r0 != null) goto L5;
        int r2 = getCurrentIndex();
    L15:
        this.mTransition = null;
        this.mTransitionFromIndex = -1;
        this.mTransitionToIndex = -1;
        AnimatedStateListState r02 = this.mState;
        int r3 = r02.getKeyframeIdAt(r2);
        int r4 = r02.getKeyframeIdAt(r10);
        if (r4 == 0) goto L33;
        if (r3 == 0) goto L33;
        int r6 = r02.indexOfTransition(r3, r4);
        if (r6 >= 0) goto L22;
        return false;
    L22:
        boolean r7 = r02.transitionHasReversibleFlag(r3, r4);
        selectDrawable(r6);
        Object r62 = getCurrent();
        if ((r62 instanceof AnimationDrawable) == false) goto L26;
        AnimationDrawable r63 = (AnimationDrawable) r62;
        Transition r32 = new AnimationDrawableTransition(r63, r02.isTransitionReversed(r3, r4), r7);
    L31:
        r32.start();
        this.mTransition = r32;
        this.mTransitionFromIndex = r2;
        this.mTransitionToIndex = r10;
        return true;
    L26:
        if ((r62 instanceof AnimatedVectorDrawableCompat) == false) goto L29;
        r32 = new AnimatedVectorDrawableTransition((AnimatedVectorDrawableCompat) r62);
        goto L31
    L29:
        if ((r62 instanceof Animatable) == false) goto L33;
        r32 = new AnimatableTransition((Animatable) r62);
    L33:
        return false;
    L5:
        if (r10 != this.mTransitionToIndex) goto L8;
        return true;
    L8:
        if (r10 == this.mTransitionFromIndex) goto L10;
    L13:
        r2 = this.mTransitionToIndex;
        r0.stop();
        goto L15
    L10:
        if (r0.canReverse() == false) goto L13;
        r0.reverse();
        this.mTransitionToIndex = this.mTransitionFromIndex;
        this.mTransitionFromIndex = r10;
        return true;
    }

    private void updateStateFromTypedArray(TypedArray r4) {
        AnimatedStateListState r0 = this.mState;
        if (Build.VERSION.SDK_INT < 21) goto L5;
        r0.mChangingConfigurations |= r4.getChangingConfigurations();
    L5:
        r0.setVariablePadding(r4.getBoolean(R.styleable.AnimatedStateListDrawableCompat_android_variablePadding, r0.mVariablePadding));
        r0.setConstantSize(r4.getBoolean(R.styleable.AnimatedStateListDrawableCompat_android_constantSize, r0.mConstantSize));
        r0.setEnterFadeDuration(r4.getInt(R.styleable.AnimatedStateListDrawableCompat_android_enterFadeDuration, r0.mEnterFadeDuration));
        r0.setExitFadeDuration(r4.getInt(R.styleable.AnimatedStateListDrawableCompat_android_exitFadeDuration, r0.mExitFadeDuration));
        setDither(r4.getBoolean(R.styleable.AnimatedStateListDrawableCompat_android_dither, r0.mDither));
    }

    private void init() {
        onStateChange(getState());
    }

    private void inflateChildElements(@NonNull Context r6, @NonNull Resources r7, @NonNull XmlPullParser r8, @NonNull AttributeSet r9, @Nullable Resources.Theme r10) throws XmlPullParserException, IOException {
        int r0 = r8.getDepth() + 1;
    L3:
        int r2 = r8.next();
        if (r2 == 1) goto L20;
        int r3 = r8.getDepth();
        if (r3 >= r0) goto L10;
        if (r2 != 3) goto L10;
        return;
    L10:
        if (r2 != 2) goto L3;
        if (r3 > r0) goto L3;
        if (r8.getName().equals(ELEMENT_ITEM) == true) goto L16;
        if (r8.getName().equals(ELEMENT_TRANSITION) == false) goto L3;
        parseTransition(r6, r7, r8, r9, r10);
        goto L3
    L16:
        parseItem(r6, r7, r8, r9, r10);
        goto L3
    }

    private int parseTransition(@NonNull Context r8, @NonNull Resources r9, @NonNull XmlPullParser r10, @NonNull AttributeSet r11, @Nullable Resources.Theme r12) throws XmlPullParserException, IOException {
        TypedArray r0 = TypedArrayUtils.obtainAttributes(r9, r12, r11, R.styleable.AnimatedStateListDrawableTransition);
        int r1 = r0.getResourceId(R.styleable.AnimatedStateListDrawableTransition_android_fromId, -1);
        int r3 = r0.getResourceId(R.styleable.AnimatedStateListDrawableTransition_android_toId, -1);
        int r4 = r0.getResourceId(R.styleable.AnimatedStateListDrawableTransition_android_drawable, -1);
        if (r4 <= 0) goto L5;
        Drawable r42 = AppCompatResources.getDrawable(r8, r4);
    L6:
        boolean r5 = r0.getBoolean(R.styleable.AnimatedStateListDrawableTransition_android_reversible, false);
        r0.recycle();
        if (r42 != null) goto L22;
    L8:
        int r43 = r10.next();
        if (r43 == 4) goto L8;
        if (r43 != 2) goto L21;
        if (r10.getName().equals("animated-vector") == false) goto L17;
        r42 = AnimatedVectorDrawableCompat.createFromXmlInner(r8, r9, r10, r11, r12);
        goto L22
    L17:
        if (Build.VERSION.SDK_INT < 21) goto L19;
        r42 = Drawable.createFromXmlInner(r9, r10, r11, r12);
        goto L22
    L19:
        r42 = Drawable.createFromXmlInner(r9, r10, r11);
        goto L22
    L21:
        throw new XmlPullParserException(r10.getPositionDescription() + TRANSITION_MISSING_DRAWABLE_ERROR);
    L22:
        if (r42 == null) goto L30;
        if (r1 == (-1)) goto L28;
        if (r3 == (-1)) goto L28;
        return this.mState.addTransition(r1, r3, r42, r5);
    L28:
        throw new XmlPullParserException(r10.getPositionDescription() + TRANSITION_MISSING_FROM_TO_ID);
    L30:
        throw new XmlPullParserException(r10.getPositionDescription() + TRANSITION_MISSING_DRAWABLE_ERROR);
    L5:
        r42 = null;
        goto L6
    }

    private int parseItem(@NonNull Context r5, @NonNull Resources r6, @NonNull XmlPullParser r7, @NonNull AttributeSet r8, @Nullable Resources.Theme r9) throws XmlPullParserException, IOException {
        TypedArray r0 = TypedArrayUtils.obtainAttributes(r6, r9, r8, R.styleable.AnimatedStateListDrawableItem);
        int r1 = r0.getResourceId(R.styleable.AnimatedStateListDrawableItem_android_id, 0);
        int r2 = r0.getResourceId(R.styleable.AnimatedStateListDrawableItem_android_drawable, -1);
        if (r2 <= 0) goto L5;
        Drawable r52 = AppCompatResources.getDrawable(r5, r2);
    L6:
        r0.recycle();
        int[] r02 = extractStateSet(r8);
        if (r52 != null) goto L22;
    L8:
        int r53 = r7.next();
        if (r53 == 4) goto L8;
        if (r53 != 2) goto L21;
        if (r7.getName().equals("vector") == false) goto L17;
        r52 = VectorDrawableCompat.createFromXmlInner(r6, r7, r8, r9);
        goto L22
    L17:
        if (Build.VERSION.SDK_INT < 21) goto L19;
        r52 = Drawable.createFromXmlInner(r6, r7, r8, r9);
        goto L22
    L19:
        r52 = Drawable.createFromXmlInner(r6, r7, r8);
        goto L22
    L21:
        throw new XmlPullParserException(r7.getPositionDescription() + ITEM_MISSING_DRAWABLE_ERROR);
    L22:
        if (r52 == null) goto L26;
        return this.mState.addStateSet(r02, r52, r1);
    L26:
        throw new XmlPullParserException(r7.getPositionDescription() + ITEM_MISSING_DRAWABLE_ERROR);
    L5:
        r52 = null;
        goto L6
    }

    @Override
    public Drawable mutate() {
        if (this.mMutated == false) goto L5;
    L7:
        return this;
    L5:
        if (super.mutate() != this) goto L7;
        this.mState.mutate();
        this.mMutated = true;
        goto L7
    }

    @Override
    AnimatedStateListState cloneConstantState() {
        return new AnimatedStateListState(this.mState, this, null);
    }

    @Override
    void clearMutated() {
        super.clearMutated();
        this.mMutated = false;
    }

    @Override
    protected void setConstantState(@NonNull DrawableContainer.DrawableContainerState r2) {
        super.setConstantState(r2);
        if ((r2 instanceof AnimatedStateListState) == false) goto L6;
        this.mState = (AnimatedStateListState) r2;
        return;
    }
}
