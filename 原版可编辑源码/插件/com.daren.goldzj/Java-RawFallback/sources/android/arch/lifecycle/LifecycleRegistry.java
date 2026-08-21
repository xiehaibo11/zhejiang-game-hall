package android.arch.lifecycle;

public class LifecycleRegistry extends android.arch.lifecycle.Lifecycle {
    private static final java.lang.String LOG_TAG = "LifecycleRegistry";
    private int mAddingObserverCounter;
    private boolean mHandlingEvent;
    private final java.lang.ref.WeakReference<android.arch.lifecycle.LifecycleOwner> mLifecycleOwner;
    private boolean mNewEventOccurred;
    private android.arch.core.internal.FastSafeIterableMap<android.arch.lifecycle.LifecycleObserver, android.arch.lifecycle.LifecycleRegistry.ObserverWithState> mObserverMap;
    private java.util.ArrayList<android.arch.lifecycle.Lifecycle.State> mParentStates;
    private android.arch.lifecycle.Lifecycle.State mState;

    static class 1 {
        static final int[] $SwitchMap$android$arch$lifecycle$Lifecycle$Event = null;
        static final int[] $SwitchMap$android$arch$lifecycle$Lifecycle$State = null;

        static {
                android.arch.lifecycle.Lifecycle$State[] r0 = android.arch.lifecycle.Lifecycle.State.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                android.arch.lifecycle.LifecycleRegistry.1.$SwitchMap$android$arch$lifecycle$Lifecycle$State = r0
                r0 = 1
                int[] r1 = android.arch.lifecycle.LifecycleRegistry.1.$SwitchMap$android$arch$lifecycle$Lifecycle$State     // Catch: java.lang.NoSuchFieldError -> L14
                android.arch.lifecycle.Lifecycle$State r2 = android.arch.lifecycle.Lifecycle.State.INITIALIZED     // Catch: java.lang.NoSuchFieldError -> L14
                int r2 = r2.ordinal()     // Catch: java.lang.NoSuchFieldError -> L14
                r1[r2] = r0     // Catch: java.lang.NoSuchFieldError -> L14
            L14:
                r1 = 2
                int[] r2 = android.arch.lifecycle.LifecycleRegistry.1.$SwitchMap$android$arch$lifecycle$Lifecycle$State     // Catch: java.lang.NoSuchFieldError -> L1f
                android.arch.lifecycle.Lifecycle$State r3 = android.arch.lifecycle.Lifecycle.State.CREATED     // Catch: java.lang.NoSuchFieldError -> L1f
                int r3 = r3.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1f
                r2[r3] = r1     // Catch: java.lang.NoSuchFieldError -> L1f
            L1f:
                r2 = 3
                int[] r3 = android.arch.lifecycle.LifecycleRegistry.1.$SwitchMap$android$arch$lifecycle$Lifecycle$State     // Catch: java.lang.NoSuchFieldError -> L2a
                android.arch.lifecycle.Lifecycle$State r4 = android.arch.lifecycle.Lifecycle.State.STARTED     // Catch: java.lang.NoSuchFieldError -> L2a
                int r4 = r4.ordinal()     // Catch: java.lang.NoSuchFieldError -> L2a
                r3[r4] = r2     // Catch: java.lang.NoSuchFieldError -> L2a
            L2a:
                r3 = 4
                int[] r4 = android.arch.lifecycle.LifecycleRegistry.1.$SwitchMap$android$arch$lifecycle$Lifecycle$State     // Catch: java.lang.NoSuchFieldError -> L35
                android.arch.lifecycle.Lifecycle$State r5 = android.arch.lifecycle.Lifecycle.State.RESUMED     // Catch: java.lang.NoSuchFieldError -> L35
                int r5 = r5.ordinal()     // Catch: java.lang.NoSuchFieldError -> L35
                r4[r5] = r3     // Catch: java.lang.NoSuchFieldError -> L35
            L35:
                r4 = 5
                int[] r5 = android.arch.lifecycle.LifecycleRegistry.1.$SwitchMap$android$arch$lifecycle$Lifecycle$State     // Catch: java.lang.NoSuchFieldError -> L40
                android.arch.lifecycle.Lifecycle$State r6 = android.arch.lifecycle.Lifecycle.State.DESTROYED     // Catch: java.lang.NoSuchFieldError -> L40
                int r6 = r6.ordinal()     // Catch: java.lang.NoSuchFieldError -> L40
                r5[r6] = r4     // Catch: java.lang.NoSuchFieldError -> L40
            L40:
                android.arch.lifecycle.Lifecycle$Event[] r5 = android.arch.lifecycle.Lifecycle.Event.values()
                int r5 = r5.length
                int[] r5 = new int[r5]
                android.arch.lifecycle.LifecycleRegistry.1.$SwitchMap$android$arch$lifecycle$Lifecycle$Event = r5
                int[] r5 = android.arch.lifecycle.LifecycleRegistry.1.$SwitchMap$android$arch$lifecycle$Lifecycle$Event     // Catch: java.lang.NoSuchFieldError -> L53
                android.arch.lifecycle.Lifecycle$Event r6 = android.arch.lifecycle.Lifecycle.Event.ON_CREATE     // Catch: java.lang.NoSuchFieldError -> L53
                int r6 = r6.ordinal()     // Catch: java.lang.NoSuchFieldError -> L53
                r5[r6] = r0     // Catch: java.lang.NoSuchFieldError -> L53
            L53:
                int[] r0 = android.arch.lifecycle.LifecycleRegistry.1.$SwitchMap$android$arch$lifecycle$Lifecycle$Event     // Catch: java.lang.NoSuchFieldError -> L5d
                android.arch.lifecycle.Lifecycle$Event r5 = android.arch.lifecycle.Lifecycle.Event.ON_STOP     // Catch: java.lang.NoSuchFieldError -> L5d
                int r5 = r5.ordinal()     // Catch: java.lang.NoSuchFieldError -> L5d
                r0[r5] = r1     // Catch: java.lang.NoSuchFieldError -> L5d
            L5d:
                int[] r0 = android.arch.lifecycle.LifecycleRegistry.1.$SwitchMap$android$arch$lifecycle$Lifecycle$Event     // Catch: java.lang.NoSuchFieldError -> L67
                android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_START     // Catch: java.lang.NoSuchFieldError -> L67
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L67
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L67
            L67:
                int[] r0 = android.arch.lifecycle.LifecycleRegistry.1.$SwitchMap$android$arch$lifecycle$Lifecycle$Event     // Catch: java.lang.NoSuchFieldError -> L71
                android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_PAUSE     // Catch: java.lang.NoSuchFieldError -> L71
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L71
                r0[r1] = r3     // Catch: java.lang.NoSuchFieldError -> L71
            L71:
                int[] r0 = android.arch.lifecycle.LifecycleRegistry.1.$SwitchMap$android$arch$lifecycle$Lifecycle$Event     // Catch: java.lang.NoSuchFieldError -> L7b
                android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_RESUME     // Catch: java.lang.NoSuchFieldError -> L7b
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L7b
                r0[r1] = r4     // Catch: java.lang.NoSuchFieldError -> L7b
            L7b:
                int[] r0 = android.arch.lifecycle.LifecycleRegistry.1.$SwitchMap$android$arch$lifecycle$Lifecycle$Event     // Catch: java.lang.NoSuchFieldError -> L86
                android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_DESTROY     // Catch: java.lang.NoSuchFieldError -> L86
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L86
                r2 = 6
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L86
            L86:
                int[] r0 = android.arch.lifecycle.LifecycleRegistry.1.$SwitchMap$android$arch$lifecycle$Lifecycle$Event     // Catch: java.lang.NoSuchFieldError -> L91
                android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_ANY     // Catch: java.lang.NoSuchFieldError -> L91
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L91
                r2 = 7
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L91
            L91:
                return
        }
    }

    static class ObserverWithState {
        android.arch.lifecycle.GenericLifecycleObserver mLifecycleObserver;
        android.arch.lifecycle.Lifecycle.State mState;

        ObserverWithState(android.arch.lifecycle.LifecycleObserver r1, android.arch.lifecycle.Lifecycle.State r2) {
                r0 = this;
                r0.<init>()
                android.arch.lifecycle.GenericLifecycleObserver r1 = android.arch.lifecycle.Lifecycling.getCallback(r1)
                r0.mLifecycleObserver = r1
                r0.mState = r2
                return
        }

        void dispatchEvent(android.arch.lifecycle.LifecycleOwner r3, android.arch.lifecycle.Lifecycle.Event r4) {
                r2 = this;
                android.arch.lifecycle.Lifecycle$State r0 = android.arch.lifecycle.LifecycleRegistry.getStateAfter(r4)
                android.arch.lifecycle.Lifecycle$State r1 = r2.mState
                android.arch.lifecycle.Lifecycle$State r1 = android.arch.lifecycle.LifecycleRegistry.min(r1, r0)
                r2.mState = r1
                android.arch.lifecycle.GenericLifecycleObserver r1 = r2.mLifecycleObserver
                r1.onStateChanged(r3, r4)
                r2.mState = r0
                return
        }
    }

    public LifecycleRegistry(@android.support.annotation.NonNull android.arch.lifecycle.LifecycleOwner r2) {
            r1 = this;
            r1.<init>()
            android.arch.core.internal.FastSafeIterableMap r0 = new android.arch.core.internal.FastSafeIterableMap
            r0.<init>()
            r1.mObserverMap = r0
            r0 = 0
            r1.mAddingObserverCounter = r0
            r1.mHandlingEvent = r0
            r1.mNewEventOccurred = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.mParentStates = r0
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.mLifecycleOwner = r0
            android.arch.lifecycle.Lifecycle$State r2 = android.arch.lifecycle.Lifecycle.State.INITIALIZED
            r1.mState = r2
            return
    }

    private void backwardPass(android.arch.lifecycle.LifecycleOwner r6) {
            r5 = this;
            android.arch.core.internal.FastSafeIterableMap<android.arch.lifecycle.LifecycleObserver, android.arch.lifecycle.LifecycleRegistry$ObserverWithState> r0 = r5.mObserverMap
            java.util.Iterator r0 = r0.descendingIterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L4a
            boolean r1 = r5.mNewEventOccurred
            if (r1 != 0) goto L4a
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getValue()
            android.arch.lifecycle.LifecycleRegistry$ObserverWithState r2 = (android.arch.lifecycle.LifecycleRegistry.ObserverWithState) r2
        L1c:
            android.arch.lifecycle.Lifecycle$State r3 = r2.mState
            android.arch.lifecycle.Lifecycle$State r4 = r5.mState
            int r3 = r3.compareTo(r4)
            if (r3 <= 0) goto L6
            boolean r3 = r5.mNewEventOccurred
            if (r3 != 0) goto L6
            android.arch.core.internal.FastSafeIterableMap<android.arch.lifecycle.LifecycleObserver, android.arch.lifecycle.LifecycleRegistry$ObserverWithState> r3 = r5.mObserverMap
            java.lang.Object r4 = r1.getKey()
            boolean r3 = r3.contains(r4)
            if (r3 == 0) goto L6
            android.arch.lifecycle.Lifecycle$State r3 = r2.mState
            android.arch.lifecycle.Lifecycle$Event r3 = downEvent(r3)
            android.arch.lifecycle.Lifecycle$State r4 = getStateAfter(r3)
            r5.pushParentState(r4)
            r2.dispatchEvent(r6, r3)
            r5.popParentState()
            goto L1c
        L4a:
            return
    }

    private android.arch.lifecycle.Lifecycle.State calculateTargetState(android.arch.lifecycle.LifecycleObserver r3) {
            r2 = this;
            android.arch.core.internal.FastSafeIterableMap<android.arch.lifecycle.LifecycleObserver, android.arch.lifecycle.LifecycleRegistry$ObserverWithState> r0 = r2.mObserverMap
            java.util.Map$Entry r3 = r0.ceil(r3)
            r0 = 0
            if (r3 == 0) goto L12
            java.lang.Object r3 = r3.getValue()
            android.arch.lifecycle.LifecycleRegistry$ObserverWithState r3 = (android.arch.lifecycle.LifecycleRegistry.ObserverWithState) r3
            android.arch.lifecycle.Lifecycle$State r3 = r3.mState
            goto L13
        L12:
            r3 = r0
        L13:
            java.util.ArrayList<android.arch.lifecycle.Lifecycle$State> r1 = r2.mParentStates
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L29
            java.util.ArrayList<android.arch.lifecycle.Lifecycle$State> r0 = r2.mParentStates
            int r1 = r0.size()
            int r1 = r1 + (-1)
            java.lang.Object r0 = r0.get(r1)
            android.arch.lifecycle.Lifecycle$State r0 = (android.arch.lifecycle.Lifecycle.State) r0
        L29:
            android.arch.lifecycle.Lifecycle$State r1 = r2.mState
            android.arch.lifecycle.Lifecycle$State r3 = min(r1, r3)
            android.arch.lifecycle.Lifecycle$State r3 = min(r3, r0)
            return r3
    }

    private static android.arch.lifecycle.Lifecycle.Event downEvent(android.arch.lifecycle.Lifecycle.State r3) {
            int[] r0 = android.arch.lifecycle.LifecycleRegistry.1.$SwitchMap$android$arch$lifecycle$Lifecycle$State
            int r1 = r3.ordinal()
            r0 = r0[r1]
            r1 = 1
            if (r0 == r1) goto L3d
            r1 = 2
            if (r0 == r1) goto L3a
            r1 = 3
            if (r0 == r1) goto L37
            r1 = 4
            if (r0 == r1) goto L34
            r1 = 5
            if (r0 == r1) goto L2e
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unexpected state value "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L2e:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            r3.<init>()
            throw r3
        L34:
            android.arch.lifecycle.Lifecycle$Event r3 = android.arch.lifecycle.Lifecycle.Event.ON_PAUSE
            return r3
        L37:
            android.arch.lifecycle.Lifecycle$Event r3 = android.arch.lifecycle.Lifecycle.Event.ON_STOP
            return r3
        L3a:
            android.arch.lifecycle.Lifecycle$Event r3 = android.arch.lifecycle.Lifecycle.Event.ON_DESTROY
            return r3
        L3d:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            r3.<init>()
            throw r3
    }

    private void forwardPass(android.arch.lifecycle.LifecycleOwner r6) {
            r5 = this;
            android.arch.core.internal.FastSafeIterableMap<android.arch.lifecycle.LifecycleObserver, android.arch.lifecycle.LifecycleRegistry$ObserverWithState> r0 = r5.mObserverMap
            android.arch.core.internal.SafeIterableMap$IteratorWithAdditions r0 = r0.iteratorWithAdditions()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L48
            boolean r1 = r5.mNewEventOccurred
            if (r1 != 0) goto L48
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getValue()
            android.arch.lifecycle.LifecycleRegistry$ObserverWithState r2 = (android.arch.lifecycle.LifecycleRegistry.ObserverWithState) r2
        L1c:
            android.arch.lifecycle.Lifecycle$State r3 = r2.mState
            android.arch.lifecycle.Lifecycle$State r4 = r5.mState
            int r3 = r3.compareTo(r4)
            if (r3 >= 0) goto L6
            boolean r3 = r5.mNewEventOccurred
            if (r3 != 0) goto L6
            android.arch.core.internal.FastSafeIterableMap<android.arch.lifecycle.LifecycleObserver, android.arch.lifecycle.LifecycleRegistry$ObserverWithState> r3 = r5.mObserverMap
            java.lang.Object r4 = r1.getKey()
            boolean r3 = r3.contains(r4)
            if (r3 == 0) goto L6
            android.arch.lifecycle.Lifecycle$State r3 = r2.mState
            r5.pushParentState(r3)
            android.arch.lifecycle.Lifecycle$State r3 = r2.mState
            android.arch.lifecycle.Lifecycle$Event r3 = upEvent(r3)
            r2.dispatchEvent(r6, r3)
            r5.popParentState()
            goto L1c
        L48:
            return
    }

    static android.arch.lifecycle.Lifecycle.State getStateAfter(android.arch.lifecycle.Lifecycle.Event r3) {
            int[] r0 = android.arch.lifecycle.LifecycleRegistry.1.$SwitchMap$android$arch$lifecycle$Lifecycle$Event
            int r1 = r3.ordinal()
            r0 = r0[r1]
            switch(r0) {
                case 1: goto L2b;
                case 2: goto L2b;
                case 3: goto L28;
                case 4: goto L28;
                case 5: goto L25;
                case 6: goto L22;
                default: goto Lb;
            }
        Lb:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unexpected event value "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L22:
            android.arch.lifecycle.Lifecycle$State r3 = android.arch.lifecycle.Lifecycle.State.DESTROYED
            return r3
        L25:
            android.arch.lifecycle.Lifecycle$State r3 = android.arch.lifecycle.Lifecycle.State.RESUMED
            return r3
        L28:
            android.arch.lifecycle.Lifecycle$State r3 = android.arch.lifecycle.Lifecycle.State.STARTED
            return r3
        L2b:
            android.arch.lifecycle.Lifecycle$State r3 = android.arch.lifecycle.Lifecycle.State.CREATED
            return r3
    }

    private boolean isSynced() {
            r3 = this;
            android.arch.core.internal.FastSafeIterableMap<android.arch.lifecycle.LifecycleObserver, android.arch.lifecycle.LifecycleRegistry$ObserverWithState> r0 = r3.mObserverMap
            int r0 = r0.size()
            r1 = 1
            if (r0 != 0) goto La
            return r1
        La:
            android.arch.core.internal.FastSafeIterableMap<android.arch.lifecycle.LifecycleObserver, android.arch.lifecycle.LifecycleRegistry$ObserverWithState> r0 = r3.mObserverMap
            java.util.Map$Entry r0 = r0.eldest()
            java.lang.Object r0 = r0.getValue()
            android.arch.lifecycle.LifecycleRegistry$ObserverWithState r0 = (android.arch.lifecycle.LifecycleRegistry.ObserverWithState) r0
            android.arch.lifecycle.Lifecycle$State r0 = r0.mState
            android.arch.core.internal.FastSafeIterableMap<android.arch.lifecycle.LifecycleObserver, android.arch.lifecycle.LifecycleRegistry$ObserverWithState> r2 = r3.mObserverMap
            java.util.Map$Entry r2 = r2.newest()
            java.lang.Object r2 = r2.getValue()
            android.arch.lifecycle.LifecycleRegistry$ObserverWithState r2 = (android.arch.lifecycle.LifecycleRegistry.ObserverWithState) r2
            android.arch.lifecycle.Lifecycle$State r2 = r2.mState
            if (r0 != r2) goto L2d
            android.arch.lifecycle.Lifecycle$State r0 = r3.mState
            if (r0 != r2) goto L2d
            goto L2e
        L2d:
            r1 = 0
        L2e:
            return r1
    }

    static android.arch.lifecycle.Lifecycle.State min(@android.support.annotation.NonNull android.arch.lifecycle.Lifecycle.State r1, @android.support.annotation.Nullable android.arch.lifecycle.Lifecycle.State r2) {
            if (r2 == 0) goto L9
            int r0 = r2.compareTo(r1)
            if (r0 >= 0) goto L9
            r1 = r2
        L9:
            return r1
    }

    private void moveToState(android.arch.lifecycle.Lifecycle.State r2) {
            r1 = this;
            android.arch.lifecycle.Lifecycle$State r0 = r1.mState
            if (r0 != r2) goto L5
            return
        L5:
            r1.mState = r2
            boolean r2 = r1.mHandlingEvent
            r0 = 1
            if (r2 != 0) goto L1a
            int r2 = r1.mAddingObserverCounter
            if (r2 == 0) goto L11
            goto L1a
        L11:
            r1.mHandlingEvent = r0
            r1.sync()
            r2 = 0
            r1.mHandlingEvent = r2
            return
        L1a:
            r1.mNewEventOccurred = r0
            return
    }

    private void popParentState() {
            r2 = this;
            java.util.ArrayList<android.arch.lifecycle.Lifecycle$State> r0 = r2.mParentStates
            int r1 = r0.size()
            int r1 = r1 + (-1)
            r0.remove(r1)
            return
    }

    private void pushParentState(android.arch.lifecycle.Lifecycle.State r2) {
            r1 = this;
            java.util.ArrayList<android.arch.lifecycle.Lifecycle$State> r0 = r1.mParentStates
            r0.add(r2)
            return
    }

    private void sync() {
            r3 = this;
            java.lang.ref.WeakReference<android.arch.lifecycle.LifecycleOwner> r0 = r3.mLifecycleOwner
            java.lang.Object r0 = r0.get()
            android.arch.lifecycle.LifecycleOwner r0 = (android.arch.lifecycle.LifecycleOwner) r0
            if (r0 != 0) goto L12
            java.lang.String r0 = "LifecycleRegistry"
            java.lang.String r1 = "LifecycleOwner is garbage collected, you shouldn't try dispatch new events from it."
            android.util.Log.w(r0, r1)
            return
        L12:
            boolean r1 = r3.isSynced()
            r2 = 0
            if (r1 != 0) goto L54
            r3.mNewEventOccurred = r2
            android.arch.lifecycle.Lifecycle$State r1 = r3.mState
            android.arch.core.internal.FastSafeIterableMap<android.arch.lifecycle.LifecycleObserver, android.arch.lifecycle.LifecycleRegistry$ObserverWithState> r2 = r3.mObserverMap
            java.util.Map$Entry r2 = r2.eldest()
            java.lang.Object r2 = r2.getValue()
            android.arch.lifecycle.LifecycleRegistry$ObserverWithState r2 = (android.arch.lifecycle.LifecycleRegistry.ObserverWithState) r2
            android.arch.lifecycle.Lifecycle$State r2 = r2.mState
            int r1 = r1.compareTo(r2)
            if (r1 >= 0) goto L34
            r3.backwardPass(r0)
        L34:
            android.arch.core.internal.FastSafeIterableMap<android.arch.lifecycle.LifecycleObserver, android.arch.lifecycle.LifecycleRegistry$ObserverWithState> r1 = r3.mObserverMap
            java.util.Map$Entry r1 = r1.newest()
            boolean r2 = r3.mNewEventOccurred
            if (r2 != 0) goto L12
            if (r1 == 0) goto L12
            android.arch.lifecycle.Lifecycle$State r2 = r3.mState
            java.lang.Object r1 = r1.getValue()
            android.arch.lifecycle.LifecycleRegistry$ObserverWithState r1 = (android.arch.lifecycle.LifecycleRegistry.ObserverWithState) r1
            android.arch.lifecycle.Lifecycle$State r1 = r1.mState
            int r1 = r2.compareTo(r1)
            if (r1 <= 0) goto L12
            r3.forwardPass(r0)
            goto L12
        L54:
            r3.mNewEventOccurred = r2
            return
    }

    private static android.arch.lifecycle.Lifecycle.Event upEvent(android.arch.lifecycle.Lifecycle.State r3) {
            int[] r0 = android.arch.lifecycle.LifecycleRegistry.1.$SwitchMap$android$arch$lifecycle$Lifecycle$State
            int r1 = r3.ordinal()
            r0 = r0[r1]
            r1 = 1
            if (r0 == r1) goto L3b
            r1 = 2
            if (r0 == r1) goto L38
            r1 = 3
            if (r0 == r1) goto L35
            r1 = 4
            if (r0 == r1) goto L2f
            r1 = 5
            if (r0 != r1) goto L18
            goto L3b
        L18:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unexpected state value "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L2f:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            r3.<init>()
            throw r3
        L35:
            android.arch.lifecycle.Lifecycle$Event r3 = android.arch.lifecycle.Lifecycle.Event.ON_RESUME
            return r3
        L38:
            android.arch.lifecycle.Lifecycle$Event r3 = android.arch.lifecycle.Lifecycle.Event.ON_START
            return r3
        L3b:
            android.arch.lifecycle.Lifecycle$Event r3 = android.arch.lifecycle.Lifecycle.Event.ON_CREATE
            return r3
    }

    @Override
    public void addObserver(@android.support.annotation.NonNull android.arch.lifecycle.LifecycleObserver r7) {
            r6 = this;
            android.arch.lifecycle.Lifecycle$State r0 = r6.mState
            android.arch.lifecycle.Lifecycle$State r1 = android.arch.lifecycle.Lifecycle.State.DESTROYED
            if (r0 != r1) goto L9
            android.arch.lifecycle.Lifecycle$State r0 = android.arch.lifecycle.Lifecycle.State.DESTROYED
            goto Lb
        L9:
            android.arch.lifecycle.Lifecycle$State r0 = android.arch.lifecycle.Lifecycle.State.INITIALIZED
        Lb:
            android.arch.lifecycle.LifecycleRegistry$ObserverWithState r1 = new android.arch.lifecycle.LifecycleRegistry$ObserverWithState
            r1.<init>(r7, r0)
            android.arch.core.internal.FastSafeIterableMap<android.arch.lifecycle.LifecycleObserver, android.arch.lifecycle.LifecycleRegistry$ObserverWithState> r0 = r6.mObserverMap
            java.lang.Object r0 = r0.putIfAbsent(r7, r1)
            android.arch.lifecycle.LifecycleRegistry$ObserverWithState r0 = (android.arch.lifecycle.LifecycleRegistry.ObserverWithState) r0
            if (r0 == 0) goto L1b
            return
        L1b:
            java.lang.ref.WeakReference<android.arch.lifecycle.LifecycleOwner> r0 = r6.mLifecycleOwner
            java.lang.Object r0 = r0.get()
            android.arch.lifecycle.LifecycleOwner r0 = (android.arch.lifecycle.LifecycleOwner) r0
            if (r0 != 0) goto L26
            return
        L26:
            int r2 = r6.mAddingObserverCounter
            r3 = 1
            if (r2 != 0) goto L32
            boolean r2 = r6.mHandlingEvent
            if (r2 == 0) goto L30
            goto L32
        L30:
            r2 = 0
            goto L33
        L32:
            r2 = 1
        L33:
            android.arch.lifecycle.Lifecycle$State r4 = r6.calculateTargetState(r7)
            int r5 = r6.mAddingObserverCounter
            int r5 = r5 + r3
            r6.mAddingObserverCounter = r5
        L3c:
            android.arch.lifecycle.Lifecycle$State r5 = r1.mState
            int r4 = r5.compareTo(r4)
            if (r4 >= 0) goto L62
            android.arch.core.internal.FastSafeIterableMap<android.arch.lifecycle.LifecycleObserver, android.arch.lifecycle.LifecycleRegistry$ObserverWithState> r4 = r6.mObserverMap
            boolean r4 = r4.contains(r7)
            if (r4 == 0) goto L62
            android.arch.lifecycle.Lifecycle$State r4 = r1.mState
            r6.pushParentState(r4)
            android.arch.lifecycle.Lifecycle$State r4 = r1.mState
            android.arch.lifecycle.Lifecycle$Event r4 = upEvent(r4)
            r1.dispatchEvent(r0, r4)
            r6.popParentState()
            android.arch.lifecycle.Lifecycle$State r4 = r6.calculateTargetState(r7)
            goto L3c
        L62:
            if (r2 != 0) goto L67
            r6.sync()
        L67:
            int r7 = r6.mAddingObserverCounter
            int r7 = r7 - r3
            r6.mAddingObserverCounter = r7
            return
    }

    @Override
    @android.support.annotation.NonNull
    public android.arch.lifecycle.Lifecycle.State getCurrentState() {
            r1 = this;
            android.arch.lifecycle.Lifecycle$State r0 = r1.mState
            return r0
    }

    public int getObserverCount() {
            r1 = this;
            android.arch.core.internal.FastSafeIterableMap<android.arch.lifecycle.LifecycleObserver, android.arch.lifecycle.LifecycleRegistry$ObserverWithState> r0 = r1.mObserverMap
            int r0 = r0.size()
            return r0
    }

    public void handleLifecycleEvent(@android.support.annotation.NonNull android.arch.lifecycle.Lifecycle.Event r1) {
            r0 = this;
            android.arch.lifecycle.Lifecycle$State r1 = getStateAfter(r1)
            r0.moveToState(r1)
            return
    }

    @android.support.annotation.MainThread
    public void markState(@android.support.annotation.NonNull android.arch.lifecycle.Lifecycle.State r1) {
            r0 = this;
            r0.moveToState(r1)
            return
    }

    @Override
    public void removeObserver(@android.support.annotation.NonNull android.arch.lifecycle.LifecycleObserver r2) {
            r1 = this;
            android.arch.core.internal.FastSafeIterableMap<android.arch.lifecycle.LifecycleObserver, android.arch.lifecycle.LifecycleRegistry$ObserverWithState> r0 = r1.mObserverMap
            r0.remove(r2)
            return
    }
}
