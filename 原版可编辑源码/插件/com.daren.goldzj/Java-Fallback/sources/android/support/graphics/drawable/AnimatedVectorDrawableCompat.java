package android.support.graphics.drawable;

import android.animation.Animator;
import android.animation.AnimatorSet;
import android.animation.ObjectAnimator;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.content.res.XmlResourceParser;
import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.PorterDuff;
import android.graphics.Rect;
import android.graphics.Region;
import android.graphics.drawable.Animatable;
import android.graphics.drawable.AnimatedVectorDrawable;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.support.annotation.DrawableRes;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresApi;
import android.support.graphics.drawable.Animatable2Compat;
import android.support.v4.content.res.ResourcesCompat;
import android.support.v4.content.res.TypedArrayUtils;
import android.support.v4.graphics.drawable.DrawableCompat;
import android.support.v4.util.ArrayMap;
import android.util.AttributeSet;
import android.util.Log;
import android.util.Xml;
import java.io.IOException;
import java.util.ArrayList;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;

public class AnimatedVectorDrawableCompat extends VectorDrawableCommon implements Animatable2Compat {
    private static final String ANIMATED_VECTOR = "animated-vector";
    private static final boolean DBG_ANIMATION_VECTOR_DRAWABLE = false;
    private static final String LOGTAG = "AnimatedVDCompat";
    private static final String TARGET = "target";
    private AnimatedVectorDrawableCompatState mAnimatedVectorState;
    ArrayList<Animatable2Compat.AnimationCallback> mAnimationCallbacks;
    private Animator.AnimatorListener mAnimatorListener;
    private android.animation.ArgbEvaluator mArgbEvaluator;
    AnimatedVectorDrawableDelegateState mCachedConstantStateDelegate;
    final Drawable.Callback mCallback;
    private Context mContext;

    private static class AnimatedVectorDrawableCompatState extends Drawable.ConstantState {
        AnimatorSet mAnimatorSet;
        ArrayList<Animator> mAnimators;
        int mChangingConfigurations;
        ArrayMap<Animator, String> mTargetNameMap;
        VectorDrawableCompat mVectorDrawable;

        public AnimatedVectorDrawableCompatState(Context r3, AnimatedVectorDrawableCompatState r4, Drawable.Callback r5, Resources r6) {
            if (r4 == null) goto L19;
            this.mChangingConfigurations = r4.mChangingConfigurations;
            VectorDrawableCompat r32 = r4.mVectorDrawable;
            int r0 = 0;
            if (r32 == null) goto L11;
            Drawable.ConstantState r33 = r32.getConstantState();
            if (r6 == null) goto L9;
            this.mVectorDrawable = (VectorDrawableCompat) r33.newDrawable(r6);
        L10:
            this.mVectorDrawable = (VectorDrawableCompat) this.mVectorDrawable.mutate();
            this.mVectorDrawable.setCallback(r5);
            this.mVectorDrawable.setBounds(r4.mVectorDrawable.getBounds());
            this.mVectorDrawable.setAllowCaching(false);
            goto L11
        L9:
            this.mVectorDrawable = (VectorDrawableCompat) r33.newDrawable();
        L11:
            ArrayList<Animator> r34 = r4.mAnimators;
            if (r34 == null) goto L20;
            int r35 = r34.size();
            this.mAnimators = new ArrayList(r35);
            this.mTargetNameMap = new ArrayMap(r35);
        L14:
            if (r0 >= r35) goto L16;
            Animator r52 = r4.mAnimators.get(r0);
            Animator r62 = r52.clone();
            String r53 = r4.mTargetNameMap.get(r52);
            r62.setTarget(this.mVectorDrawable.getTargetByName(r53));
            this.mAnimators.add(r62);
            this.mTargetNameMap.put(r62, r53);
            r0 = r0 + 1;
            goto L14
        L16:
            setupAnimatorSet();
            return;
        L20:
            return;
        }

        @Override
        public Drawable newDrawable() {
            throw new IllegalStateException("No constant state support for SDK < 24.");
        }

        @Override
        public Drawable newDrawable(Resources r2) {
            throw new IllegalStateException("No constant state support for SDK < 24.");
        }

        @Override
        public int getChangingConfigurations() {
            return this.mChangingConfigurations;
        }

        public void setupAnimatorSet() {
            if (this.mAnimatorSet != null) goto L5;
            this.mAnimatorSet = new AnimatorSet();
        L5:
            this.mAnimatorSet.playTogether(this.mAnimators);
        }
    }

    @RequiresApi(24)
    private static class AnimatedVectorDrawableDelegateState extends Drawable.ConstantState {
        private final Drawable.ConstantState mDelegateState;

        public AnimatedVectorDrawableDelegateState(Drawable.ConstantState r1) {
            this.mDelegateState = r1;
        }

        @Override
        public Drawable newDrawable() {
            AnimatedVectorDrawableCompat r0 = new AnimatedVectorDrawableCompat();
            r0.mDelegateDrawable = this.mDelegateState.newDrawable();
            r0.mDelegateDrawable.setCallback(r0.mCallback);
            return r0;
        }

        @Override
        public Drawable newDrawable(Resources r3) {
            AnimatedVectorDrawableCompat r0 = new AnimatedVectorDrawableCompat();
            r0.mDelegateDrawable = this.mDelegateState.newDrawable(r3);
            r0.mDelegateDrawable.setCallback(r0.mCallback);
            return r0;
        }

        @Override
        public Drawable newDrawable(Resources r3, Resources.Theme r4) {
            AnimatedVectorDrawableCompat r0 = new AnimatedVectorDrawableCompat();
            r0.mDelegateDrawable = this.mDelegateState.newDrawable(r3, r4);
            r0.mDelegateDrawable.setCallback(r0.mCallback);
            return r0;
        }

        @Override
        public boolean canApplyTheme() {
            return this.mDelegateState.canApplyTheme();
        }

        @Override
        public int getChangingConfigurations() {
            return this.mDelegateState.getChangingConfigurations();
        }
    }

    @Override
    public void clearColorFilter() {
        super.clearColorFilter();
    }

    @Override
    public ColorFilter getColorFilter() {
        return super.getColorFilter();
    }

    @Override
    public Drawable getCurrent() {
        return super.getCurrent();
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
    public boolean getPadding(Rect r1) {
        return super.getPadding(r1);
    }

    @Override
    public int[] getState() {
        return super.getState();
    }

    @Override
    public Region getTransparentRegion() {
        return super.getTransparentRegion();
    }

    @Override
    public void jumpToCurrentState() {
        super.jumpToCurrentState();
    }

    @Override
    public void setChangingConfigurations(int r1) {
        super.setChangingConfigurations(r1);
    }

    @Override
    public void setColorFilter(int r1, PorterDuff.Mode r2) {
        super.setColorFilter(r1, r2);
    }

    @Override
    public void setFilterBitmap(boolean r1) {
        super.setFilterBitmap(r1);
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
    public boolean setState(int[] r1) {
        return super.setState(r1);
    }

    AnimatedVectorDrawableCompat() {
        this(null, null, null);
    }

    private AnimatedVectorDrawableCompat(@Nullable Context r2) {
        this(r2, null, null);
    }

    private AnimatedVectorDrawableCompat(@Nullable Context r3, @Nullable AnimatedVectorDrawableCompatState r4, @Nullable Resources r5) {
        this.mArgbEvaluator = null;
        this.mAnimatorListener = null;
        this.mAnimationCallbacks = null;
        this.mCallback = new 1(this);
        this.mContext = r3;
        if (r4 == null) goto L5;
        this.mAnimatedVectorState = r4;
        return;
    L5:
        this.mAnimatedVectorState = new AnimatedVectorDrawableCompatState(r3, r4, this.mCallback, r5);
    }

    @Override
    public Drawable mutate() {
        if (this.mDelegateDrawable == null) goto L5;
        this.mDelegateDrawable.mutate();
    L5:
        return this;
    }

    @Nullable
    public static AnimatedVectorDrawableCompat create(@NonNull Context r6, @DrawableRes int r7) {
        if (Build.VERSION.SDK_INT < 24) goto L24;
        AnimatedVectorDrawableCompat r0 = new AnimatedVectorDrawableCompat(r6);
        r0.mDelegateDrawable = ResourcesCompat.getDrawable(r6.getResources(), r7, r6.getTheme());
        r0.mDelegateDrawable.setCallback(r0.mCallback);
        r0.mCachedConstantStateDelegate = new AnimatedVectorDrawableDelegateState(r0.mDelegateDrawable.getConstantState());
        return r0;
    L24:
        XmlResourceParser r72 = r6.getResources().getXml(r7);     // Catch: IOException -> L18 XmlPullParserException -> L20
        AttributeSet r2 = Xml.asAttributeSet(r72);     // Catch: IOException -> L18 XmlPullParserException -> L20
    L8:
        int r3 = r72.next();     // Catch: IOException -> L18 XmlPullParserException -> L20
        if (r3 == 2) goto L13;
        if (r3 != 1) goto L8;
    L13:
        if (r3 != 2) goto L17;
        return createFromXmlInner(r6, r6.getResources(), r72, r2, r6.getTheme());
    L17:
        throw new XmlPullParserException("No start tag found");     // Catch: IOException -> L18 XmlPullParserException -> L20
    L18:
        e = move-exception;
        Log.e(LOGTAG, "parser error", e);
        return null;
    L20:
        e = move-exception;
        Log.e(LOGTAG, "parser error", e);
        return null;
    }

    public static AnimatedVectorDrawableCompat createFromXmlInner(Context r1, Resources r2, XmlPullParser r3, AttributeSet r4, Resources.Theme r5) throws XmlPullParserException, IOException {
        AnimatedVectorDrawableCompat r0 = new AnimatedVectorDrawableCompat(r1);
        r0.inflate(r2, r3, r4, r5);
        return r0;
    }

    @Override
    public Drawable.ConstantState getConstantState() {
        if (this.mDelegateDrawable != null) goto L5;
        return null;
    L5:
        if (Build.VERSION.SDK_INT >= 24) goto L7;
        return null;
    L7:
        return new AnimatedVectorDrawableDelegateState(this.mDelegateDrawable.getConstantState());
    }

    @Override
    public int getChangingConfigurations() {
        if (this.mDelegateDrawable == null) goto L7;
        return this.mDelegateDrawable.getChangingConfigurations();
    L7:
        return super.getChangingConfigurations() | this.mAnimatedVectorState.mChangingConfigurations;
    }

    @Override
    public void draw(Canvas r2) {
        if (this.mDelegateDrawable == null) goto L6;
        this.mDelegateDrawable.draw(r2);
        return;
    L6:
        this.mAnimatedVectorState.mVectorDrawable.draw(r2);
        if (this.mAnimatedVectorState.mAnimatorSet.isStarted() == false) goto L10;
        invalidateSelf();
        return;
    }

    @Override
    protected void onBoundsChange(Rect r2) {
        if (this.mDelegateDrawable == null) goto L6;
        this.mDelegateDrawable.setBounds(r2);
        return;
    L6:
        this.mAnimatedVectorState.mVectorDrawable.setBounds(r2);
    }

    @Override
    protected boolean onStateChange(int[] r2) {
        if (this.mDelegateDrawable == null) goto L7;
        return this.mDelegateDrawable.setState(r2);
    L7:
        return this.mAnimatedVectorState.mVectorDrawable.setState(r2);
    }

    @Override
    protected boolean onLevelChange(int r2) {
        if (this.mDelegateDrawable == null) goto L7;
        return this.mDelegateDrawable.setLevel(r2);
    L7:
        return this.mAnimatedVectorState.mVectorDrawable.setLevel(r2);
    }

    @Override
    public int getAlpha() {
        if (this.mDelegateDrawable == null) goto L7;
        return DrawableCompat.getAlpha(this.mDelegateDrawable);
    L7:
        return this.mAnimatedVectorState.mVectorDrawable.getAlpha();
    }

    @Override
    public void setAlpha(int r2) {
        if (this.mDelegateDrawable == null) goto L6;
        this.mDelegateDrawable.setAlpha(r2);
        return;
    L6:
        this.mAnimatedVectorState.mVectorDrawable.setAlpha(r2);
    }

    @Override
    public void setColorFilter(ColorFilter r2) {
        if (this.mDelegateDrawable == null) goto L6;
        this.mDelegateDrawable.setColorFilter(r2);
        return;
    L6:
        this.mAnimatedVectorState.mVectorDrawable.setColorFilter(r2);
    }

    @Override
    public void setTint(int r2) {
        if (this.mDelegateDrawable == null) goto L6;
        DrawableCompat.setTint(this.mDelegateDrawable, r2);
        return;
    L6:
        this.mAnimatedVectorState.mVectorDrawable.setTint(r2);
    }

    @Override
    public void setTintList(ColorStateList r2) {
        if (this.mDelegateDrawable == null) goto L6;
        DrawableCompat.setTintList(this.mDelegateDrawable, r2);
        return;
    L6:
        this.mAnimatedVectorState.mVectorDrawable.setTintList(r2);
    }

    @Override
    public void setTintMode(PorterDuff.Mode r2) {
        if (this.mDelegateDrawable == null) goto L6;
        DrawableCompat.setTintMode(this.mDelegateDrawable, r2);
        return;
    L6:
        this.mAnimatedVectorState.mVectorDrawable.setTintMode(r2);
    }

    @Override
    public boolean setVisible(boolean r2, boolean r3) {
        if (this.mDelegateDrawable != null) goto L5;
        this.mAnimatedVectorState.mVectorDrawable.setVisible(r2, r3);
        return super.setVisible(r2, r3);
    L5:
        return this.mDelegateDrawable.setVisible(r2, r3);
    }

    @Override
    public boolean isStateful() {
        if (this.mDelegateDrawable == null) goto L7;
        return this.mDelegateDrawable.isStateful();
    L7:
        return this.mAnimatedVectorState.mVectorDrawable.isStateful();
    }

    @Override
    public int getOpacity() {
        if (this.mDelegateDrawable == null) goto L7;
        return this.mDelegateDrawable.getOpacity();
    L7:
        return this.mAnimatedVectorState.mVectorDrawable.getOpacity();
    }

    @Override
    public int getIntrinsicWidth() {
        if (this.mDelegateDrawable == null) goto L7;
        return this.mDelegateDrawable.getIntrinsicWidth();
    L7:
        return this.mAnimatedVectorState.mVectorDrawable.getIntrinsicWidth();
    }

    @Override
    public int getIntrinsicHeight() {
        if (this.mDelegateDrawable == null) goto L7;
        return this.mDelegateDrawable.getIntrinsicHeight();
    L7:
        return this.mAnimatedVectorState.mVectorDrawable.getIntrinsicHeight();
    }

    @Override
    public boolean isAutoMirrored() {
        if (this.mDelegateDrawable == null) goto L7;
        return DrawableCompat.isAutoMirrored(this.mDelegateDrawable);
    L7:
        return this.mAnimatedVectorState.mVectorDrawable.isAutoMirrored();
    }

    @Override
    public void setAutoMirrored(boolean r2) {
        if (this.mDelegateDrawable == null) goto L6;
        DrawableCompat.setAutoMirrored(this.mDelegateDrawable, r2);
        return;
    L6:
        this.mAnimatedVectorState.mVectorDrawable.setAutoMirrored(r2);
    }

    @Override
    public void inflate(Resources r7, XmlPullParser r8, AttributeSet r9, Resources.Theme r10) throws XmlPullParserException, IOException {
        if (this.mDelegateDrawable == null) goto L6;
        DrawableCompat.inflate(this.mDelegateDrawable, r7, r8, r9, r10);
        return;
    L6:
        int r0 = r8.getEventType();
        int r1 = r8.getDepth() + 1;
    L7:
        if (r0 == 1) goto L34;
        if (r8.getDepth() >= r1) goto L13;
        if (r0 == 3) goto L34;
    L13:
        if (r0 != 2) goto L33;
        String r02 = r8.getName();
        if (ANIMATED_VECTOR.equals(r02) == false) goto L24;
        TypedArray r03 = TypedArrayUtils.obtainAttributes(r7, r10, r9, AndroidResources.STYLEABLE_ANIMATED_VECTOR_DRAWABLE);
        int r3 = r03.getResourceId(0, 0);
        if (r3 == 0) goto L22;
        VectorDrawableCompat r32 = VectorDrawableCompat.create(r7, r3, r10);
        r32.setAllowCaching(false);
        r32.setCallback(this.mCallback);
        if (this.mAnimatedVectorState.mVectorDrawable == null) goto L21;
        this.mAnimatedVectorState.mVectorDrawable.setCallback(null);
    L21:
        this.mAnimatedVectorState.mVectorDrawable = r32;
    L22:
        r03.recycle();
        goto L33
    L24:
        if (TARGET.equals(r02) == false) goto L33;
        TypedArray r04 = r7.obtainAttributes(r9, AndroidResources.STYLEABLE_ANIMATED_VECTOR_DRAWABLE_TARGET);
        String r33 = r04.getString(0);
        int r4 = r04.getResourceId(1, 0);
        if (r4 == 0) goto L32;
        Context r5 = this.mContext;
        if (r5 == null) goto L30;
        setupAnimatorsForTarget(r33, AnimatorInflaterCompat.loadAnimator(r5, r4));
        goto L32
    L30:
        r04.recycle();
        throw new IllegalStateException("Context can't be null when inflating animators");
    L32:
        r04.recycle();
    L33:
        r0 = r8.next();
    L34:
        this.mAnimatedVectorState.setupAnimatorSet();
    }

    @Override
    public void inflate(Resources r2, XmlPullParser r3, AttributeSet r4) throws XmlPullParserException, IOException {
        inflate(r2, r3, r4, null);
    }

    @Override
    public void applyTheme(Resources.Theme r2) {
        if (this.mDelegateDrawable == null) goto L6;
        DrawableCompat.applyTheme(this.mDelegateDrawable, r2);
        return;
    }

    @Override
    public boolean canApplyTheme() {
        if (this.mDelegateDrawable != null) goto L5;
        return false;
    L5:
        return DrawableCompat.canApplyTheme(this.mDelegateDrawable);
    }

    private void setupColorAnimator(Animator r4) {
        if ((r4 instanceof AnimatorSet) == false) goto L11;
        ArrayList<Animator> r0 = ((AnimatorSet) r4).getChildAnimations();
        if (r0 == null) goto L11;
        int r1 = 0;
    L8:
        if (r1 >= r0.size()) goto L11;
        setupColorAnimator(r0.get(r1));
        r1 = r1 + 1;
    L11:
        if ((r4 instanceof ObjectAnimator) == false) goto L22;
        ObjectAnimator r42 = (ObjectAnimator) r4;
        String r02 = r42.getPropertyName();
        if ("fillColor".equals(r02) == true) goto L17;
        if ("strokeColor".equals(r02) == true) goto L17;
        return;
    L17:
        if (this.mArgbEvaluator != null) goto L19;
        this.mArgbEvaluator = new android.animation.ArgbEvaluator();
    L19:
        r42.setEvaluator(this.mArgbEvaluator);
        return;
    }

    private void setupAnimatorsForTarget(String r3, Animator r4) {
        r4.setTarget(this.mAnimatedVectorState.mVectorDrawable.getTargetByName(r3));
        if (Build.VERSION.SDK_INT >= 21) goto L6;
        setupColorAnimator(r4);
    L6:
        if (this.mAnimatedVectorState.mAnimators != null) goto L8;
        AnimatedVectorDrawableCompatState r0 = this.mAnimatedVectorState;
        r0.mAnimators = new ArrayList();
        AnimatedVectorDrawableCompatState r02 = this.mAnimatedVectorState;
        r02.mTargetNameMap = new ArrayMap();
    L8:
        this.mAnimatedVectorState.mAnimators.add(r4);
        this.mAnimatedVectorState.mTargetNameMap.put(r4, r3);
    }

    @Override
    public boolean isRunning() {
        if (this.mDelegateDrawable == null) goto L7;
        return ((AnimatedVectorDrawable) this.mDelegateDrawable).isRunning();
    L7:
        return this.mAnimatedVectorState.mAnimatorSet.isRunning();
    }

    @Override
    public void start() {
        if (this.mDelegateDrawable == null) goto L7;
        ((AnimatedVectorDrawable) this.mDelegateDrawable).start();
        return;
    L7:
        if (this.mAnimatedVectorState.mAnimatorSet.isStarted() == false) goto L9;
        return;
    L9:
        this.mAnimatedVectorState.mAnimatorSet.start();
        invalidateSelf();
    }

    @Override
    public void stop() {
        if (this.mDelegateDrawable == null) goto L6;
        ((AnimatedVectorDrawable) this.mDelegateDrawable).stop();
        return;
    L6:
        this.mAnimatedVectorState.mAnimatorSet.end();
    }

    @RequiresApi(23)
    private static boolean unregisterPlatformCallback(AnimatedVectorDrawable r0, Animatable2Compat.AnimationCallback r1) {
        return r0.unregisterAnimationCallback(r1.getPlatformCallback());
    }

    @Override
    public void registerAnimationCallback(@NonNull Animatable2Compat.AnimationCallback r2) {
        if (this.mDelegateDrawable == null) goto L6;
        registerPlatformCallback((AnimatedVectorDrawable) this.mDelegateDrawable, r2);
        return;
    L6:
        if (r2 != null) goto L9;
        return;
    L9:
        if (this.mAnimationCallbacks != null) goto L12;
        this.mAnimationCallbacks = new ArrayList();
    L12:
        if (this.mAnimationCallbacks.contains(r2) == false) goto L14;
        return;
    L14:
        this.mAnimationCallbacks.add(r2);
        if (this.mAnimatorListener != null) goto L17;
        this.mAnimatorListener = new 2(this);
    L17:
        this.mAnimatedVectorState.mAnimatorSet.addListener(this.mAnimatorListener);
    }

    @RequiresApi(23)
    private static void registerPlatformCallback(@NonNull AnimatedVectorDrawable r0, @NonNull Animatable2Compat.AnimationCallback r1) {
        r0.registerAnimationCallback(r1.getPlatformCallback());
    }

    private void removeAnimatorSetListener() {
        if (this.mAnimatorListener == null) goto L6;
        this.mAnimatedVectorState.mAnimatorSet.removeListener(this.mAnimatorListener);
        this.mAnimatorListener = null;
        return;
    }

    @Override
    public boolean unregisterAnimationCallback(@NonNull Animatable2Compat.AnimationCallback r2) {
        if (this.mDelegateDrawable == null) goto L5;
        unregisterPlatformCallback((AnimatedVectorDrawable) this.mDelegateDrawable, r2);
    L5:
        ArrayList<Animatable2Compat.AnimationCallback> r0 = this.mAnimationCallbacks;
        if (r0 == null) goto L13;
        if (r2 == null) goto L15;
        boolean r22 = r0.remove(r2);
        if (this.mAnimationCallbacks.size() != 0) goto L12;
        removeAnimatorSetListener();
    L12:
        return r22;
    L15:
        return false;
    L13:
        return false;
    }

    @Override
    public void clearAnimationCallbacks() {
        if (this.mDelegateDrawable == null) goto L6;
        ((AnimatedVectorDrawable) this.mDelegateDrawable).clearAnimationCallbacks();
        return;
    L6:
        removeAnimatorSetListener();
        ArrayList<Animatable2Compat.AnimationCallback> r0 = this.mAnimationCallbacks;
        if (r0 != null) goto L9;
        return;
    L9:
        r0.clear();
    }

    public static void registerAnimationCallback(Drawable r2, Animatable2Compat.AnimationCallback r3) {
        if (r2 == null) goto L13;
        if (r3 != null) goto L6;
        return;
    L6:
        if ((r2 instanceof Animatable) == true) goto L9;
        return;
    L9:
        if (Build.VERSION.SDK_INT < 24) goto L11;
        registerPlatformCallback((AnimatedVectorDrawable) r2, r3);
        return;
    L11:
        ((AnimatedVectorDrawableCompat) r2).registerAnimationCallback(r3);
        return;
    }

    public static boolean unregisterAnimationCallback(Drawable r2, Animatable2Compat.AnimationCallback r3) {
        if (r2 == null) goto L15;
        if (r3 == null) goto L15;
        if ((r2 instanceof Animatable) == true) goto L10;
        return false;
    L10:
        if (Build.VERSION.SDK_INT < 24) goto L14;
        return unregisterPlatformCallback((AnimatedVectorDrawable) r2, r3);
    L14:
        return ((AnimatedVectorDrawableCompat) r2).unregisterAnimationCallback(r3);
    L15:
        return false;
    }

    public static void clearAnimationCallbacks(Drawable r2) {
        if (r2 != null) goto L4;
        return;
    L4:
        if ((r2 instanceof Animatable) == true) goto L7;
        return;
    L7:
        if (Build.VERSION.SDK_INT < 24) goto L9;
        ((AnimatedVectorDrawable) r2).clearAnimationCallbacks();
        return;
    L9:
        ((AnimatedVectorDrawableCompat) r2).clearAnimationCallbacks();
    }
}
