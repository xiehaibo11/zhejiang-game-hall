package android.arch.lifecycle;

import android.arch.core.internal.FastSafeIterableMap;
import android.arch.core.internal.SafeIterableMap;
import android.arch.lifecycle.Lifecycle;
import android.support.annotation.MainThread;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.util.Log;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Map;

public class LifecycleRegistry extends Lifecycle {
    private static final String LOG_TAG = "LifecycleRegistry";
    private int mAddingObserverCounter;
    private boolean mHandlingEvent;
    private final WeakReference<LifecycleOwner> mLifecycleOwner;
    private boolean mNewEventOccurred;
    private FastSafeIterableMap<LifecycleObserver, ObserverWithState> mObserverMap;
    private ArrayList<Lifecycle.State> mParentStates;
    private Lifecycle.State mState;

    static class 1 {
        static final int[] $SwitchMap$android$arch$lifecycle$Lifecycle$Event = null;
        static final int[] $SwitchMap$android$arch$lifecycle$Lifecycle$State = null;

        static {
            $SwitchMap$android$arch$lifecycle$Lifecycle$State = new int[Lifecycle.State.values().length];
            $SwitchMap$android$arch$lifecycle$Lifecycle$State[Lifecycle.State.INITIALIZED.ordinal()] = 1;     // Catch: NoSuchFieldError -> L21
        L35:
            $SwitchMap$android$arch$lifecycle$Lifecycle$State[Lifecycle.State.CREATED.ordinal()] = 2;     // Catch: NoSuchFieldError -> L22
        L37:
            $SwitchMap$android$arch$lifecycle$Lifecycle$State[Lifecycle.State.STARTED.ordinal()] = 3;     // Catch: NoSuchFieldError -> L23
        L43:
            $SwitchMap$android$arch$lifecycle$Lifecycle$State[Lifecycle.State.RESUMED.ordinal()] = 4;     // Catch: NoSuchFieldError -> L24
        L49:
            $SwitchMap$android$arch$lifecycle$Lifecycle$State[Lifecycle.State.DESTROYED.ordinal()] = 5;     // Catch: NoSuchFieldError -> L25
        L12:
            $SwitchMap$android$arch$lifecycle$Lifecycle$Event = new int[Lifecycle.Event.values().length];
            $SwitchMap$android$arch$lifecycle$Lifecycle$Event[Lifecycle.Event.ON_CREATE.ordinal()] = 1;     // Catch: NoSuchFieldError -> L26
        L33:
            $SwitchMap$android$arch$lifecycle$Lifecycle$Event[Lifecycle.Event.ON_STOP.ordinal()] = 2;     // Catch: NoSuchFieldError -> L27
        L47:
            $SwitchMap$android$arch$lifecycle$Lifecycle$Event[Lifecycle.Event.ON_START.ordinal()] = 3;     // Catch: NoSuchFieldError -> L28
        L53:
            $SwitchMap$android$arch$lifecycle$Lifecycle$Event[Lifecycle.Event.ON_PAUSE.ordinal()] = 4;     // Catch: NoSuchFieldError -> L29
        L39:
            $SwitchMap$android$arch$lifecycle$Lifecycle$Event[Lifecycle.Event.ON_RESUME.ordinal()] = 5;     // Catch: NoSuchFieldError -> L30
        L45:
            $SwitchMap$android$arch$lifecycle$Lifecycle$Event[Lifecycle.Event.ON_DESTROY.ordinal()] = 6;     // Catch: NoSuchFieldError -> L31
        L51:
            $SwitchMap$android$arch$lifecycle$Lifecycle$Event[Lifecycle.Event.ON_ANY.ordinal()] = 7;     // Catch: NoSuchFieldError -> L32
            return;
        }
    }

    static class ObserverWithState {
        GenericLifecycleObserver mLifecycleObserver;
        Lifecycle.State mState;

        ObserverWithState(LifecycleObserver r1, Lifecycle.State r2) {
            this.mLifecycleObserver = Lifecycling.getCallback(r1);
            this.mState = r2;
        }

        void dispatchEvent(LifecycleOwner r3, Lifecycle.Event r4) {
            Lifecycle.State r0 = LifecycleRegistry.getStateAfter(r4);
            this.mState = LifecycleRegistry.min(this.mState, r0);
            this.mLifecycleObserver.onStateChanged(r3, r4);
            this.mState = r0;
        }
    }

    public LifecycleRegistry(@NonNull LifecycleOwner r2) {
        this.mObserverMap = new FastSafeIterableMap();
        this.mAddingObserverCounter = 0;
        this.mHandlingEvent = false;
        this.mNewEventOccurred = false;
        this.mParentStates = new ArrayList();
        this.mLifecycleOwner = new WeakReference(r2);
        this.mState = Lifecycle.State.INITIALIZED;
    }

    @MainThread
    public void markState(@NonNull Lifecycle.State r1) {
        moveToState(r1);
    }

    public void handleLifecycleEvent(@NonNull Lifecycle.Event r1) {
        moveToState(getStateAfter(r1));
    }

    private void moveToState(Lifecycle.State r2) {
        if (this.mState != r2) goto L5;
        return;
    L5:
        this.mState = r2;
        if (this.mHandlingEvent == false) goto L8;
    L12:
        this.mNewEventOccurred = true;
        return;
    L8:
        if (this.mAddingObserverCounter != 0) goto L12;
        this.mHandlingEvent = true;
        sync();
        this.mHandlingEvent = false;
    }

    private boolean isSynced() {
        if (this.mObserverMap.size() != 0) goto L5;
        return true;
    L5:
        Lifecycle.State r0 = this.mObserverMap.eldest().getValue().mState;
        Lifecycle.State r2 = this.mObserverMap.newest().getValue().mState;
        if (r0 == r2) goto L8;
    L10:
        return false;
    L8:
        if (this.mState != r2) goto L10;
        return true;
    }

    private Lifecycle.State calculateTargetState(LifecycleObserver r3) {
        Map.Entry<LifecycleObserver, ObserverWithState> r32 = this.mObserverMap.ceil(r3);
        Lifecycle.State r0 = null;
        if (r32 == null) goto L5;
        Lifecycle.State r33 = r32.getValue().mState;
    L7:
        if (this.mParentStates.isEmpty() == true) goto L10;
        r0 = this.mParentStates.get(r0.size() - 1);
    L10:
        return min(min(this.mState, r33), r0);
    L5:
        r33 = null;
        goto L7
    }

    @Override
    public void addObserver(@NonNull LifecycleObserver r7) {
        if (this.mState != Lifecycle.State.DESTROYED) goto L5;
        Lifecycle.State r0 = Lifecycle.State.DESTROYED;
    L6:
        ObserverWithState r1 = new ObserverWithState(r7, r0);
        if (this.mObserverMap.putIfAbsent(r7, r1) == null) goto L9;
        return;
    L9:
        LifecycleOwner r02 = this.mLifecycleOwner.get();
        if (r02 != null) goto L13;
        return;
    L13:
        if (this.mAddingObserverCounter == 0) goto L15;
    L18:
        boolean r2 = true;
    L19:
        Lifecycle.State r4 = calculateTargetState(r7);
        this.mAddingObserverCounter++;
    L21:
        if (r1.mState.compareTo(r4) >= 0) goto L25;
        if (this.mObserverMap.contains(r7) == false) goto L25;
        pushParentState(r1.mState);
        r1.dispatchEvent(r02, upEvent(r1.mState));
        popParentState();
        r4 = calculateTargetState(r7);
    L25:
        if (r2 == true) goto L27;
        sync();
    L27:
        this.mAddingObserverCounter--;
        return;
    L15:
        if (this.mHandlingEvent == true) goto L18;
        r2 = false;
        goto L19
    L5:
        r0 = Lifecycle.State.INITIALIZED;
        goto L6
    }

    private void popParentState() {
        this.mParentStates.remove(r0.size() - 1);
    }

    private void pushParentState(Lifecycle.State r2) {
        this.mParentStates.add(r2);
    }

    @Override
    public void removeObserver(@NonNull LifecycleObserver r2) {
        this.mObserverMap.remove(r2);
    }

    public int getObserverCount() {
        return this.mObserverMap.size();
    }

    @Override
    @NonNull
    public Lifecycle.State getCurrentState() {
        return this.mState;
    }

    static Lifecycle.State getStateAfter(Lifecycle.Event r3) {
        switch(1.$SwitchMap$android$arch$lifecycle$Lifecycle$Event[r3.ordinal()]) {
            case 1: goto L13;
            case 2: goto L13;
            case 3: goto L11;
            case 4: goto L11;
            case 5: goto L9;
            case 6: goto L7;
            default: goto L5;
        };
    L5:
        throw new IllegalArgumentException("Unexpected event value " + r3);
    L7:
        return Lifecycle.State.DESTROYED;
    L9:
        return Lifecycle.State.RESUMED;
    L11:
        return Lifecycle.State.STARTED;
    L13:
        return Lifecycle.State.CREATED;
    }

    private static Lifecycle.Event downEvent(Lifecycle.State r3) {
        int r0 = 1.$SwitchMap$android$arch$lifecycle$Lifecycle$State[r3.ordinal()];
        if (r0 == 1) goto L23;
        if (r0 == 2) goto L21;
        if (r0 == 3) goto L19;
        if (r0 == 4) goto L17;
        if (r0 == 5) goto L15;
        throw new IllegalArgumentException("Unexpected state value " + r3);
    L15:
        throw new IllegalArgumentException();
    L17:
        return Lifecycle.Event.ON_PAUSE;
    L19:
        return Lifecycle.Event.ON_STOP;
    L21:
        return Lifecycle.Event.ON_DESTROY;
    L23:
        throw new IllegalArgumentException();
    }

    private static Lifecycle.Event upEvent(Lifecycle.State r3) {
        int r0 = 1.$SwitchMap$android$arch$lifecycle$Lifecycle$State[r3.ordinal()];
        if (r0 == 1) goto L22;
        if (r0 == 2) goto L20;
        if (r0 == 3) goto L18;
        if (r0 == 4) goto L16;
        if (r0 == 5) goto L22;
        throw new IllegalArgumentException("Unexpected state value " + r3);
    L16:
        throw new IllegalArgumentException();
    L18:
        return Lifecycle.Event.ON_RESUME;
    L20:
        return Lifecycle.Event.ON_START;
    L22:
        return Lifecycle.Event.ON_CREATE;
    }

    private void forwardPass(LifecycleOwner r6) {
        SafeIterableMap<LifecycleObserver, ObserverWithState>.IteratorWithAdditions r0 = this.mObserverMap.iteratorWithAdditions();
    L4:
        if (r0.hasNext() == false) goto L15;
        if (this.mNewEventOccurred == true) goto L22;
        Map.Entry r1 = r0.next();
        ObserverWithState r2 = (ObserverWithState) r1.getValue();
    L9:
        if (r2.mState.compareTo(this.mState) >= 0) goto L4;
        if (this.mNewEventOccurred == true) goto L4;
        if (this.mObserverMap.contains((LifecycleObserver) r1.getKey()) == false) goto L4;
        pushParentState(r2.mState);
        r2.dispatchEvent(r6, upEvent(r2.mState));
        popParentState();
        goto L9
    L22:
        return;
    }

    private void backwardPass(LifecycleOwner r6) {
        Iterator<Map.Entry<LifecycleObserver, ObserverWithState>> r0 = this.mObserverMap.descendingIterator();
    L4:
        if (r0.hasNext() == false) goto L15;
        if (this.mNewEventOccurred == true) goto L22;
        Map.Entry<LifecycleObserver, ObserverWithState> r1 = r0.next();
        ObserverWithState r2 = r1.getValue();
    L9:
        if (r2.mState.compareTo(this.mState) <= 0) goto L4;
        if (this.mNewEventOccurred == true) goto L4;
        if (this.mObserverMap.contains(r1.getKey()) == false) goto L4;
        Lifecycle.Event r3 = downEvent(r2.mState);
        pushParentState(getStateAfter(r3));
        r2.dispatchEvent(r6, r3);
        popParentState();
        goto L9
    L22:
        return;
    }

    private void sync() {
        LifecycleOwner r0 = this.mLifecycleOwner.get();
        if (r0 != null) goto L7;
        Log.w(LOG_TAG, "LifecycleOwner is garbage collected, you shouldn't try dispatch new events from it.");
        return;
    L7:
        if (isSynced() == true) goto L17;
        this.mNewEventOccurred = false;
        if (this.mState.compareTo(this.mObserverMap.eldest().getValue().mState) >= 0) goto L11;
        backwardPass(r0);
    L11:
        Map.Entry<LifecycleObserver, ObserverWithState> r1 = this.mObserverMap.newest();
        if (this.mNewEventOccurred == true) goto L7;
        if (r1 == null) goto L7;
        if (this.mState.compareTo(r1.getValue().mState) <= 0) goto L7;
        forwardPass(r0);
        goto L7
    L17:
        this.mNewEventOccurred = false;
    }

    static Lifecycle.State min(@NonNull Lifecycle.State r1, @Nullable Lifecycle.State r2) {
        if (r2 != null) goto L4;
        return r1;
    L4:
        if (r2.compareTo(r1) < 0) goto L6;
        return r1;
    L6:
        return r2;
    }
}
