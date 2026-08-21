package android.support.transition;

public class TransitionSet extends android.support.transition.Transition {
    private static final int FLAG_CHANGE_EPICENTER = 8;
    private static final int FLAG_CHANGE_INTERPOLATOR = 1;
    private static final int FLAG_CHANGE_PATH_MOTION = 4;
    private static final int FLAG_CHANGE_PROPAGATION = 2;
    public static final int ORDERING_SEQUENTIAL = 1;
    public static final int ORDERING_TOGETHER = 0;
    private int mChangeFlags;
    int mCurrentListeners;
    private boolean mPlayTogether;
    boolean mStarted;
    private java.util.ArrayList<android.support.transition.Transition> mTransitions;


    static class TransitionSetListener extends android.support.transition.TransitionListenerAdapter {
        android.support.transition.TransitionSet mTransitionSet;

        TransitionSetListener(android.support.transition.TransitionSet r1) {
                r0 = this;
                r0.<init>()
                r0.mTransitionSet = r1
                return
        }

        @Override
        public void onTransitionEnd(android.support.transition.Transition r3) {
                r2 = this;
                android.support.transition.TransitionSet r0 = r2.mTransitionSet
                int r1 = r0.mCurrentListeners
                int r1 = r1 + (-1)
                r0.mCurrentListeners = r1
                android.support.transition.TransitionSet r0 = r2.mTransitionSet
                int r0 = r0.mCurrentListeners
                if (r0 != 0) goto L18
                android.support.transition.TransitionSet r0 = r2.mTransitionSet
                r1 = 0
                r0.mStarted = r1
                android.support.transition.TransitionSet r0 = r2.mTransitionSet
                r0.end()
            L18:
                r3.removeListener(r2)
                return
        }

        @Override
        public void onTransitionStart(android.support.transition.Transition r2) {
                r1 = this;
                android.support.transition.TransitionSet r2 = r1.mTransitionSet
                boolean r2 = r2.mStarted
                if (r2 != 0) goto L10
                android.support.transition.TransitionSet r2 = r1.mTransitionSet
                r2.start()
                android.support.transition.TransitionSet r2 = r1.mTransitionSet
                r0 = 1
                r2.mStarted = r0
            L10:
                return
        }
    }

    public TransitionSet() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.mTransitions = r0
            r0 = 1
            r1.mPlayTogether = r0
            r0 = 0
            r1.mStarted = r0
            r1.mChangeFlags = r0
            return
    }

    public TransitionSet(android.content.Context r3, android.util.AttributeSet r4) {
            r2 = this;
            r2.<init>(r3, r4)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.mTransitions = r0
            r0 = 1
            r2.mPlayTogether = r0
            r0 = 0
            r2.mStarted = r0
            r2.mChangeFlags = r0
            int[] r1 = android.support.transition.Styleable.TRANSITION_SET
            android.content.res.TypedArray r3 = r3.obtainStyledAttributes(r4, r1)
            android.content.res.XmlResourceParser r4 = (android.content.res.XmlResourceParser) r4
            java.lang.String r1 = "transitionOrdering"
            int r4 = android.support.v4.content.res.TypedArrayUtils.getNamedInt(r3, r4, r1, r0, r0)
            r2.setOrdering(r4)
            r3.recycle()
            return
    }

    private void setupStartEndListeners() {
            r3 = this;
            android.support.transition.TransitionSet$TransitionSetListener r0 = new android.support.transition.TransitionSet$TransitionSetListener
            r0.<init>(r3)
            java.util.ArrayList<android.support.transition.Transition> r1 = r3.mTransitions
            java.util.Iterator r1 = r1.iterator()
        Lb:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1b
            java.lang.Object r2 = r1.next()
            android.support.transition.Transition r2 = (android.support.transition.Transition) r2
            r2.addListener(r0)
            goto Lb
        L1b:
            java.util.ArrayList<android.support.transition.Transition> r0 = r3.mTransitions
            int r0 = r0.size()
            r3.mCurrentListeners = r0
            return
    }

    @Override
    public android.support.transition.Transition addListener(android.support.transition.Transition.TransitionListener r1) {
            r0 = this;
            android.support.transition.TransitionSet r1 = r0.addListener(r1)
            return r1
    }

    @Override
    public android.support.transition.TransitionSet addListener(android.support.transition.Transition.TransitionListener r1) {
            r0 = this;
            android.support.transition.Transition r1 = super.addListener(r1)
            android.support.transition.TransitionSet r1 = (android.support.transition.TransitionSet) r1
            return r1
    }

    @Override
    public android.support.transition.Transition addTarget(int r1) {
            r0 = this;
            android.support.transition.TransitionSet r1 = r0.addTarget(r1)
            return r1
    }

    @Override
    public android.support.transition.Transition addTarget(android.view.View r1) {
            r0 = this;
            android.support.transition.TransitionSet r1 = r0.addTarget(r1)
            return r1
    }

    @Override
    public android.support.transition.Transition addTarget(java.lang.Class r1) {
            r0 = this;
            android.support.transition.TransitionSet r1 = r0.addTarget(r1)
            return r1
    }

    @Override
    public android.support.transition.Transition addTarget(java.lang.String r1) {
            r0 = this;
            android.support.transition.TransitionSet r1 = r0.addTarget(r1)
            return r1
    }

    @Override
    public android.support.transition.TransitionSet addTarget(int r3) {
            r2 = this;
            r0 = 0
        L1:
            java.util.ArrayList<android.support.transition.Transition> r1 = r2.mTransitions
            int r1 = r1.size()
            if (r0 >= r1) goto L17
            java.util.ArrayList<android.support.transition.Transition> r1 = r2.mTransitions
            java.lang.Object r1 = r1.get(r0)
            android.support.transition.Transition r1 = (android.support.transition.Transition) r1
            r1.addTarget(r3)
            int r0 = r0 + 1
            goto L1
        L17:
            android.support.transition.Transition r3 = super.addTarget(r3)
            android.support.transition.TransitionSet r3 = (android.support.transition.TransitionSet) r3
            return r3
    }

    @Override
    public android.support.transition.TransitionSet addTarget(android.view.View r3) {
            r2 = this;
            r0 = 0
        L1:
            java.util.ArrayList<android.support.transition.Transition> r1 = r2.mTransitions
            int r1 = r1.size()
            if (r0 >= r1) goto L17
            java.util.ArrayList<android.support.transition.Transition> r1 = r2.mTransitions
            java.lang.Object r1 = r1.get(r0)
            android.support.transition.Transition r1 = (android.support.transition.Transition) r1
            r1.addTarget(r3)
            int r0 = r0 + 1
            goto L1
        L17:
            android.support.transition.Transition r3 = super.addTarget(r3)
            android.support.transition.TransitionSet r3 = (android.support.transition.TransitionSet) r3
            return r3
    }

    @Override
    public android.support.transition.TransitionSet addTarget(java.lang.Class r3) {
            r2 = this;
            r0 = 0
        L1:
            java.util.ArrayList<android.support.transition.Transition> r1 = r2.mTransitions
            int r1 = r1.size()
            if (r0 >= r1) goto L17
            java.util.ArrayList<android.support.transition.Transition> r1 = r2.mTransitions
            java.lang.Object r1 = r1.get(r0)
            android.support.transition.Transition r1 = (android.support.transition.Transition) r1
            r1.addTarget(r3)
            int r0 = r0 + 1
            goto L1
        L17:
            android.support.transition.Transition r3 = super.addTarget(r3)
            android.support.transition.TransitionSet r3 = (android.support.transition.TransitionSet) r3
            return r3
    }

    @Override
    public android.support.transition.TransitionSet addTarget(java.lang.String r3) {
            r2 = this;
            r0 = 0
        L1:
            java.util.ArrayList<android.support.transition.Transition> r1 = r2.mTransitions
            int r1 = r1.size()
            if (r0 >= r1) goto L17
            java.util.ArrayList<android.support.transition.Transition> r1 = r2.mTransitions
            java.lang.Object r1 = r1.get(r0)
            android.support.transition.Transition r1 = (android.support.transition.Transition) r1
            r1.addTarget(r3)
            int r0 = r0 + 1
            goto L1
        L17:
            android.support.transition.Transition r3 = super.addTarget(r3)
            android.support.transition.TransitionSet r3 = (android.support.transition.TransitionSet) r3
            return r3
    }

    public android.support.transition.TransitionSet addTransition(android.support.transition.Transition r5) {
            r4 = this;
            java.util.ArrayList<android.support.transition.Transition> r0 = r4.mTransitions
            r0.add(r5)
            r5.mParent = r4
            long r0 = r4.mDuration
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L14
            long r0 = r4.mDuration
            r5.setDuration(r0)
        L14:
            int r0 = r4.mChangeFlags
            r0 = r0 & 1
            if (r0 == 0) goto L21
            android.animation.TimeInterpolator r0 = r4.getInterpolator()
            r5.setInterpolator(r0)
        L21:
            int r0 = r4.mChangeFlags
            r0 = r0 & 2
            if (r0 == 0) goto L2e
            android.support.transition.TransitionPropagation r0 = r4.getPropagation()
            r5.setPropagation(r0)
        L2e:
            int r0 = r4.mChangeFlags
            r0 = r0 & 4
            if (r0 == 0) goto L3b
            android.support.transition.PathMotion r0 = r4.getPathMotion()
            r5.setPathMotion(r0)
        L3b:
            int r0 = r4.mChangeFlags
            r0 = r0 & 8
            if (r0 == 0) goto L48
            android.support.transition.Transition$EpicenterCallback r0 = r4.getEpicenterCallback()
            r5.setEpicenterCallback(r0)
        L48:
            return r4
    }

    @Override
    protected void cancel() {
            r3 = this;
            super.cancel()
            java.util.ArrayList<android.support.transition.Transition> r0 = r3.mTransitions
            int r0 = r0.size()
            r1 = 0
        La:
            if (r1 >= r0) goto L1a
            java.util.ArrayList<android.support.transition.Transition> r2 = r3.mTransitions
            java.lang.Object r2 = r2.get(r1)
            android.support.transition.Transition r2 = (android.support.transition.Transition) r2
            r2.cancel()
            int r1 = r1 + 1
            goto La
        L1a:
            return
    }

    @Override
    public void captureEndValues(android.support.transition.TransitionValues r4) {
            r3 = this;
            android.view.View r0 = r4.view
            boolean r0 = r3.isValidTarget(r0)
            if (r0 == 0) goto L2b
            java.util.ArrayList<android.support.transition.Transition> r0 = r3.mTransitions
            java.util.Iterator r0 = r0.iterator()
        Le:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2b
            java.lang.Object r1 = r0.next()
            android.support.transition.Transition r1 = (android.support.transition.Transition) r1
            android.view.View r2 = r4.view
            boolean r2 = r1.isValidTarget(r2)
            if (r2 == 0) goto Le
            r1.captureEndValues(r4)
            java.util.ArrayList<android.support.transition.Transition> r2 = r4.mTargetedTransitions
            r2.add(r1)
            goto Le
        L2b:
            return
    }

    @Override
    void capturePropagationValues(android.support.transition.TransitionValues r4) {
            r3 = this;
            super.capturePropagationValues(r4)
            java.util.ArrayList<android.support.transition.Transition> r0 = r3.mTransitions
            int r0 = r0.size()
            r1 = 0
        La:
            if (r1 >= r0) goto L1a
            java.util.ArrayList<android.support.transition.Transition> r2 = r3.mTransitions
            java.lang.Object r2 = r2.get(r1)
            android.support.transition.Transition r2 = (android.support.transition.Transition) r2
            r2.capturePropagationValues(r4)
            int r1 = r1 + 1
            goto La
        L1a:
            return
    }

    @Override
    public void captureStartValues(android.support.transition.TransitionValues r4) {
            r3 = this;
            android.view.View r0 = r4.view
            boolean r0 = r3.isValidTarget(r0)
            if (r0 == 0) goto L2b
            java.util.ArrayList<android.support.transition.Transition> r0 = r3.mTransitions
            java.util.Iterator r0 = r0.iterator()
        Le:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2b
            java.lang.Object r1 = r0.next()
            android.support.transition.Transition r1 = (android.support.transition.Transition) r1
            android.view.View r2 = r4.view
            boolean r2 = r1.isValidTarget(r2)
            if (r2 == 0) goto Le
            r1.captureStartValues(r4)
            java.util.ArrayList<android.support.transition.Transition> r2 = r4.mTargetedTransitions
            r2.add(r1)
            goto Le
        L2b:
            return
    }

    @Override
    public android.support.transition.Transition clone() {
            r4 = this;
            android.support.transition.Transition r0 = super.clone()
            android.support.transition.TransitionSet r0 = (android.support.transition.TransitionSet) r0
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.mTransitions = r1
            java.util.ArrayList<android.support.transition.Transition> r1 = r4.mTransitions
            int r1 = r1.size()
            r2 = 0
        L14:
            if (r2 >= r1) goto L28
            java.util.ArrayList<android.support.transition.Transition> r3 = r4.mTransitions
            java.lang.Object r3 = r3.get(r2)
            android.support.transition.Transition r3 = (android.support.transition.Transition) r3
            android.support.transition.Transition r3 = r3.clone()
            r0.addTransition(r3)
            int r2 = r2 + 1
            goto L14
        L28:
            return r0
    }

    @Override
    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            android.support.transition.Transition r0 = r1.clone()
            return r0
    }

    @Override
    protected void createAnimators(android.view.ViewGroup r13, android.support.transition.TransitionValuesMaps r14, android.support.transition.TransitionValuesMaps r15, java.util.ArrayList<android.support.transition.TransitionValues> r16, java.util.ArrayList<android.support.transition.TransitionValues> r17) {
            r12 = this;
            r0 = r12
            long r1 = r12.getStartDelay()
            java.util.ArrayList<android.support.transition.Transition> r3 = r0.mTransitions
            int r3 = r3.size()
            r4 = 0
        Lc:
            if (r4 >= r3) goto L40
            java.util.ArrayList<android.support.transition.Transition> r5 = r0.mTransitions
            java.lang.Object r5 = r5.get(r4)
            r6 = r5
            android.support.transition.Transition r6 = (android.support.transition.Transition) r6
            r7 = 0
            int r5 = (r1 > r7 ? 1 : (r1 == r7 ? 0 : -1))
            if (r5 <= 0) goto L33
            boolean r5 = r0.mPlayTogether
            if (r5 != 0) goto L23
            if (r4 != 0) goto L33
        L23:
            long r9 = r6.getStartDelay()
            int r5 = (r9 > r7 ? 1 : (r9 == r7 ? 0 : -1))
            if (r5 <= 0) goto L30
            long r9 = r9 + r1
            r6.setStartDelay(r9)
            goto L33
        L30:
            r6.setStartDelay(r1)
        L33:
            r7 = r13
            r8 = r14
            r9 = r15
            r10 = r16
            r11 = r17
            r6.createAnimators(r7, r8, r9, r10, r11)
            int r4 = r4 + 1
            goto Lc
        L40:
            return
    }

    @Override
    public android.support.transition.Transition excludeTarget(int r3, boolean r4) {
            r2 = this;
            r0 = 0
        L1:
            java.util.ArrayList<android.support.transition.Transition> r1 = r2.mTransitions
            int r1 = r1.size()
            if (r0 >= r1) goto L17
            java.util.ArrayList<android.support.transition.Transition> r1 = r2.mTransitions
            java.lang.Object r1 = r1.get(r0)
            android.support.transition.Transition r1 = (android.support.transition.Transition) r1
            r1.excludeTarget(r3, r4)
            int r0 = r0 + 1
            goto L1
        L17:
            android.support.transition.Transition r3 = super.excludeTarget(r3, r4)
            return r3
    }

    @Override
    public android.support.transition.Transition excludeTarget(android.view.View r3, boolean r4) {
            r2 = this;
            r0 = 0
        L1:
            java.util.ArrayList<android.support.transition.Transition> r1 = r2.mTransitions
            int r1 = r1.size()
            if (r0 >= r1) goto L17
            java.util.ArrayList<android.support.transition.Transition> r1 = r2.mTransitions
            java.lang.Object r1 = r1.get(r0)
            android.support.transition.Transition r1 = (android.support.transition.Transition) r1
            r1.excludeTarget(r3, r4)
            int r0 = r0 + 1
            goto L1
        L17:
            android.support.transition.Transition r3 = super.excludeTarget(r3, r4)
            return r3
    }

    @Override
    public android.support.transition.Transition excludeTarget(java.lang.Class r3, boolean r4) {
            r2 = this;
            r0 = 0
        L1:
            java.util.ArrayList<android.support.transition.Transition> r1 = r2.mTransitions
            int r1 = r1.size()
            if (r0 >= r1) goto L17
            java.util.ArrayList<android.support.transition.Transition> r1 = r2.mTransitions
            java.lang.Object r1 = r1.get(r0)
            android.support.transition.Transition r1 = (android.support.transition.Transition) r1
            r1.excludeTarget(r3, r4)
            int r0 = r0 + 1
            goto L1
        L17:
            android.support.transition.Transition r3 = super.excludeTarget(r3, r4)
            return r3
    }

    @Override
    public android.support.transition.Transition excludeTarget(java.lang.String r3, boolean r4) {
            r2 = this;
            r0 = 0
        L1:
            java.util.ArrayList<android.support.transition.Transition> r1 = r2.mTransitions
            int r1 = r1.size()
            if (r0 >= r1) goto L17
            java.util.ArrayList<android.support.transition.Transition> r1 = r2.mTransitions
            java.lang.Object r1 = r1.get(r0)
            android.support.transition.Transition r1 = (android.support.transition.Transition) r1
            r1.excludeTarget(r3, r4)
            int r0 = r0 + 1
            goto L1
        L17:
            android.support.transition.Transition r3 = super.excludeTarget(r3, r4)
            return r3
    }

    @Override
    void forceToEnd(android.view.ViewGroup r4) {
            r3 = this;
            super.forceToEnd(r4)
            java.util.ArrayList<android.support.transition.Transition> r0 = r3.mTransitions
            int r0 = r0.size()
            r1 = 0
        La:
            if (r1 >= r0) goto L1a
            java.util.ArrayList<android.support.transition.Transition> r2 = r3.mTransitions
            java.lang.Object r2 = r2.get(r1)
            android.support.transition.Transition r2 = (android.support.transition.Transition) r2
            r2.forceToEnd(r4)
            int r1 = r1 + 1
            goto La
        L1a:
            return
    }

    public int getOrdering() {
            r1 = this;
            boolean r0 = r1.mPlayTogether
            r0 = r0 ^ 1
            return r0
    }

    public android.support.transition.Transition getTransitionAt(int r2) {
            r1 = this;
            if (r2 < 0) goto L14
            java.util.ArrayList<android.support.transition.Transition> r0 = r1.mTransitions
            int r0 = r0.size()
            if (r2 < r0) goto Lb
            goto L14
        Lb:
            java.util.ArrayList<android.support.transition.Transition> r0 = r1.mTransitions
            java.lang.Object r2 = r0.get(r2)
            android.support.transition.Transition r2 = (android.support.transition.Transition) r2
            return r2
        L14:
            r2 = 0
            return r2
    }

    public int getTransitionCount() {
            r1 = this;
            java.util.ArrayList<android.support.transition.Transition> r0 = r1.mTransitions
            int r0 = r0.size()
            return r0
    }

    @Override
    public void pause(android.view.View r4) {
            r3 = this;
            super.pause(r4)
            java.util.ArrayList<android.support.transition.Transition> r0 = r3.mTransitions
            int r0 = r0.size()
            r1 = 0
        La:
            if (r1 >= r0) goto L1a
            java.util.ArrayList<android.support.transition.Transition> r2 = r3.mTransitions
            java.lang.Object r2 = r2.get(r1)
            android.support.transition.Transition r2 = (android.support.transition.Transition) r2
            r2.pause(r4)
            int r1 = r1 + 1
            goto La
        L1a:
            return
    }

    @Override
    public android.support.transition.Transition removeListener(android.support.transition.Transition.TransitionListener r1) {
            r0 = this;
            android.support.transition.TransitionSet r1 = r0.removeListener(r1)
            return r1
    }

    @Override
    public android.support.transition.TransitionSet removeListener(android.support.transition.Transition.TransitionListener r1) {
            r0 = this;
            android.support.transition.Transition r1 = super.removeListener(r1)
            android.support.transition.TransitionSet r1 = (android.support.transition.TransitionSet) r1
            return r1
    }

    @Override
    public android.support.transition.Transition removeTarget(int r1) {
            r0 = this;
            android.support.transition.TransitionSet r1 = r0.removeTarget(r1)
            return r1
    }

    @Override
    public android.support.transition.Transition removeTarget(android.view.View r1) {
            r0 = this;
            android.support.transition.TransitionSet r1 = r0.removeTarget(r1)
            return r1
    }

    @Override
    public android.support.transition.Transition removeTarget(java.lang.Class r1) {
            r0 = this;
            android.support.transition.TransitionSet r1 = r0.removeTarget(r1)
            return r1
    }

    @Override
    public android.support.transition.Transition removeTarget(java.lang.String r1) {
            r0 = this;
            android.support.transition.TransitionSet r1 = r0.removeTarget(r1)
            return r1
    }

    @Override
    public android.support.transition.TransitionSet removeTarget(int r3) {
            r2 = this;
            r0 = 0
        L1:
            java.util.ArrayList<android.support.transition.Transition> r1 = r2.mTransitions
            int r1 = r1.size()
            if (r0 >= r1) goto L17
            java.util.ArrayList<android.support.transition.Transition> r1 = r2.mTransitions
            java.lang.Object r1 = r1.get(r0)
            android.support.transition.Transition r1 = (android.support.transition.Transition) r1
            r1.removeTarget(r3)
            int r0 = r0 + 1
            goto L1
        L17:
            android.support.transition.Transition r3 = super.removeTarget(r3)
            android.support.transition.TransitionSet r3 = (android.support.transition.TransitionSet) r3
            return r3
    }

    @Override
    public android.support.transition.TransitionSet removeTarget(android.view.View r3) {
            r2 = this;
            r0 = 0
        L1:
            java.util.ArrayList<android.support.transition.Transition> r1 = r2.mTransitions
            int r1 = r1.size()
            if (r0 >= r1) goto L17
            java.util.ArrayList<android.support.transition.Transition> r1 = r2.mTransitions
            java.lang.Object r1 = r1.get(r0)
            android.support.transition.Transition r1 = (android.support.transition.Transition) r1
            r1.removeTarget(r3)
            int r0 = r0 + 1
            goto L1
        L17:
            android.support.transition.Transition r3 = super.removeTarget(r3)
            android.support.transition.TransitionSet r3 = (android.support.transition.TransitionSet) r3
            return r3
    }

    @Override
    public android.support.transition.TransitionSet removeTarget(java.lang.Class r3) {
            r2 = this;
            r0 = 0
        L1:
            java.util.ArrayList<android.support.transition.Transition> r1 = r2.mTransitions
            int r1 = r1.size()
            if (r0 >= r1) goto L17
            java.util.ArrayList<android.support.transition.Transition> r1 = r2.mTransitions
            java.lang.Object r1 = r1.get(r0)
            android.support.transition.Transition r1 = (android.support.transition.Transition) r1
            r1.removeTarget(r3)
            int r0 = r0 + 1
            goto L1
        L17:
            android.support.transition.Transition r3 = super.removeTarget(r3)
            android.support.transition.TransitionSet r3 = (android.support.transition.TransitionSet) r3
            return r3
    }

    @Override
    public android.support.transition.TransitionSet removeTarget(java.lang.String r3) {
            r2 = this;
            r0 = 0
        L1:
            java.util.ArrayList<android.support.transition.Transition> r1 = r2.mTransitions
            int r1 = r1.size()
            if (r0 >= r1) goto L17
            java.util.ArrayList<android.support.transition.Transition> r1 = r2.mTransitions
            java.lang.Object r1 = r1.get(r0)
            android.support.transition.Transition r1 = (android.support.transition.Transition) r1
            r1.removeTarget(r3)
            int r0 = r0 + 1
            goto L1
        L17:
            android.support.transition.Transition r3 = super.removeTarget(r3)
            android.support.transition.TransitionSet r3 = (android.support.transition.TransitionSet) r3
            return r3
    }

    public android.support.transition.TransitionSet removeTransition(android.support.transition.Transition r2) {
            r1 = this;
            java.util.ArrayList<android.support.transition.Transition> r0 = r1.mTransitions
            r0.remove(r2)
            r0 = 0
            r2.mParent = r0
            return r1
    }

    @Override
    public void resume(android.view.View r4) {
            r3 = this;
            super.resume(r4)
            java.util.ArrayList<android.support.transition.Transition> r0 = r3.mTransitions
            int r0 = r0.size()
            r1 = 0
        La:
            if (r1 >= r0) goto L1a
            java.util.ArrayList<android.support.transition.Transition> r2 = r3.mTransitions
            java.lang.Object r2 = r2.get(r1)
            android.support.transition.Transition r2 = (android.support.transition.Transition) r2
            r2.resume(r4)
            int r1 = r1 + 1
            goto La
        L1a:
            return
    }

    @Override
    protected void runAnimators() {
            r4 = this;
            java.util.ArrayList<android.support.transition.Transition> r0 = r4.mTransitions
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto Lf
            r4.start()
            r4.end()
            return
        Lf:
            r4.setupStartEndListeners()
            boolean r0 = r4.mPlayTogether
            if (r0 != 0) goto L4b
            r0 = 1
        L17:
            java.util.ArrayList<android.support.transition.Transition> r1 = r4.mTransitions
            int r1 = r1.size()
            if (r0 >= r1) goto L3c
            java.util.ArrayList<android.support.transition.Transition> r1 = r4.mTransitions
            int r2 = r0 + (-1)
            java.lang.Object r1 = r1.get(r2)
            android.support.transition.Transition r1 = (android.support.transition.Transition) r1
            java.util.ArrayList<android.support.transition.Transition> r2 = r4.mTransitions
            java.lang.Object r2 = r2.get(r0)
            android.support.transition.Transition r2 = (android.support.transition.Transition) r2
            android.support.transition.TransitionSet$1 r3 = new android.support.transition.TransitionSet$1
            r3.<init>(r4, r2)
            r1.addListener(r3)
            int r0 = r0 + 1
            goto L17
        L3c:
            java.util.ArrayList<android.support.transition.Transition> r0 = r4.mTransitions
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            android.support.transition.Transition r0 = (android.support.transition.Transition) r0
            if (r0 == 0) goto L61
            r0.runAnimators()
            goto L61
        L4b:
            java.util.ArrayList<android.support.transition.Transition> r0 = r4.mTransitions
            java.util.Iterator r0 = r0.iterator()
        L51:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L61
            java.lang.Object r1 = r0.next()
            android.support.transition.Transition r1 = (android.support.transition.Transition) r1
            r1.runAnimators()
            goto L51
        L61:
            return
    }

    @Override
    void setCanRemoveViews(boolean r4) {
            r3 = this;
            super.setCanRemoveViews(r4)
            java.util.ArrayList<android.support.transition.Transition> r0 = r3.mTransitions
            int r0 = r0.size()
            r1 = 0
        La:
            if (r1 >= r0) goto L1a
            java.util.ArrayList<android.support.transition.Transition> r2 = r3.mTransitions
            java.lang.Object r2 = r2.get(r1)
            android.support.transition.Transition r2 = (android.support.transition.Transition) r2
            r2.setCanRemoveViews(r4)
            int r1 = r1 + 1
            goto La
        L1a:
            return
    }

    @Override
    public android.support.transition.Transition setDuration(long r1) {
            r0 = this;
            android.support.transition.TransitionSet r1 = r0.setDuration(r1)
            return r1
    }

    @Override
    public android.support.transition.TransitionSet setDuration(long r5) {
            r4 = this;
            super.setDuration(r5)
            long r0 = r4.mDuration
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L22
            java.util.ArrayList<android.support.transition.Transition> r0 = r4.mTransitions
            int r0 = r0.size()
            r1 = 0
        L12:
            if (r1 >= r0) goto L22
            java.util.ArrayList<android.support.transition.Transition> r2 = r4.mTransitions
            java.lang.Object r2 = r2.get(r1)
            android.support.transition.Transition r2 = (android.support.transition.Transition) r2
            r2.setDuration(r5)
            int r1 = r1 + 1
            goto L12
        L22:
            return r4
    }

    @Override
    public void setEpicenterCallback(android.support.transition.Transition.EpicenterCallback r4) {
            r3 = this;
            super.setEpicenterCallback(r4)
            int r0 = r3.mChangeFlags
            r0 = r0 | 8
            r3.mChangeFlags = r0
            java.util.ArrayList<android.support.transition.Transition> r0 = r3.mTransitions
            int r0 = r0.size()
            r1 = 0
        L10:
            if (r1 >= r0) goto L20
            java.util.ArrayList<android.support.transition.Transition> r2 = r3.mTransitions
            java.lang.Object r2 = r2.get(r1)
            android.support.transition.Transition r2 = (android.support.transition.Transition) r2
            r2.setEpicenterCallback(r4)
            int r1 = r1 + 1
            goto L10
        L20:
            return
    }

    @Override
    public android.support.transition.Transition setInterpolator(android.animation.TimeInterpolator r1) {
            r0 = this;
            android.support.transition.TransitionSet r1 = r0.setInterpolator(r1)
            return r1
    }

    @Override
    public android.support.transition.TransitionSet setInterpolator(android.animation.TimeInterpolator r4) {
            r3 = this;
            int r0 = r3.mChangeFlags
            r0 = r0 | 1
            r3.mChangeFlags = r0
            java.util.ArrayList<android.support.transition.Transition> r0 = r3.mTransitions
            if (r0 == 0) goto L1f
            int r0 = r0.size()
            r1 = 0
        Lf:
            if (r1 >= r0) goto L1f
            java.util.ArrayList<android.support.transition.Transition> r2 = r3.mTransitions
            java.lang.Object r2 = r2.get(r1)
            android.support.transition.Transition r2 = (android.support.transition.Transition) r2
            r2.setInterpolator(r4)
            int r1 = r1 + 1
            goto Lf
        L1f:
            android.support.transition.Transition r4 = super.setInterpolator(r4)
            android.support.transition.TransitionSet r4 = (android.support.transition.TransitionSet) r4
            return r4
    }

    public android.support.transition.TransitionSet setOrdering(int r4) {
            r3 = this;
            r0 = 1
            if (r4 == 0) goto L20
            if (r4 != r0) goto L9
            r4 = 0
            r3.mPlayTogether = r4
            goto L22
        L9:
            android.util.AndroidRuntimeException r0 = new android.util.AndroidRuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid parameter for TransitionSet ordering: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L20:
            r3.mPlayTogether = r0
        L22:
            return r3
    }

    @Override
    public void setPathMotion(android.support.transition.PathMotion r3) {
            r2 = this;
            super.setPathMotion(r3)
            int r0 = r2.mChangeFlags
            r0 = r0 | 4
            r2.mChangeFlags = r0
            r0 = 0
        La:
            java.util.ArrayList<android.support.transition.Transition> r1 = r2.mTransitions
            int r1 = r1.size()
            if (r0 >= r1) goto L20
            java.util.ArrayList<android.support.transition.Transition> r1 = r2.mTransitions
            java.lang.Object r1 = r1.get(r0)
            android.support.transition.Transition r1 = (android.support.transition.Transition) r1
            r1.setPathMotion(r3)
            int r0 = r0 + 1
            goto La
        L20:
            return
    }

    @Override
    public void setPropagation(android.support.transition.TransitionPropagation r4) {
            r3 = this;
            super.setPropagation(r4)
            int r0 = r3.mChangeFlags
            r0 = r0 | 2
            r3.mChangeFlags = r0
            java.util.ArrayList<android.support.transition.Transition> r0 = r3.mTransitions
            int r0 = r0.size()
            r1 = 0
        L10:
            if (r1 >= r0) goto L20
            java.util.ArrayList<android.support.transition.Transition> r2 = r3.mTransitions
            java.lang.Object r2 = r2.get(r1)
            android.support.transition.Transition r2 = (android.support.transition.Transition) r2
            r2.setPropagation(r4)
            int r1 = r1 + 1
            goto L10
        L20:
            return
    }

    @Override
    android.support.transition.Transition setSceneRoot(android.view.ViewGroup r1) {
            r0 = this;
            android.support.transition.TransitionSet r1 = r0.setSceneRoot(r1)
            return r1
    }

    @Override
    android.support.transition.TransitionSet setSceneRoot(android.view.ViewGroup r4) {
            r3 = this;
            super.setSceneRoot(r4)
            java.util.ArrayList<android.support.transition.Transition> r0 = r3.mTransitions
            int r0 = r0.size()
            r1 = 0
        La:
            if (r1 >= r0) goto L1a
            java.util.ArrayList<android.support.transition.Transition> r2 = r3.mTransitions
            java.lang.Object r2 = r2.get(r1)
            android.support.transition.Transition r2 = (android.support.transition.Transition) r2
            r2.setSceneRoot(r4)
            int r1 = r1 + 1
            goto La
        L1a:
            return r3
    }

    @Override
    public android.support.transition.Transition setStartDelay(long r1) {
            r0 = this;
            android.support.transition.TransitionSet r1 = r0.setStartDelay(r1)
            return r1
    }

    @Override
    public android.support.transition.TransitionSet setStartDelay(long r1) {
            r0 = this;
            android.support.transition.Transition r1 = super.setStartDelay(r1)
            android.support.transition.TransitionSet r1 = (android.support.transition.TransitionSet) r1
            return r1
    }

    @Override
    java.lang.String toString(java.lang.String r6) {
            r5 = this;
            java.lang.String r0 = super.toString(r6)
            r1 = 0
        L5:
            java.util.ArrayList<android.support.transition.Transition> r2 = r5.mTransitions
            int r2 = r2.size()
            if (r1 >= r2) goto L41
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = "\n"
            r2.append(r0)
            java.util.ArrayList<android.support.transition.Transition> r0 = r5.mTransitions
            java.lang.Object r0 = r0.get(r1)
            android.support.transition.Transition r0 = (android.support.transition.Transition) r0
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r6)
            java.lang.String r4 = "  "
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r0 = r0.toString(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            int r1 = r1 + 1
            goto L5
        L41:
            return r0
    }
}
