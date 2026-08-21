package android.arch.lifecycle;

import android.arch.lifecycle.Lifecycle;

class FullLifecycleObserverAdapter implements GenericLifecycleObserver {
    private final FullLifecycleObserver mObserver;

    static class 1 {
        static final int[] $SwitchMap$android$arch$lifecycle$Lifecycle$Event = null;

        static {
            $SwitchMap$android$arch$lifecycle$Lifecycle$Event = new int[Lifecycle.Event.values().length];
            $SwitchMap$android$arch$lifecycle$Lifecycle$Event[Lifecycle.Event.ON_CREATE.ordinal()] = 1;     // Catch: NoSuchFieldError -> L11
        L18:
            $SwitchMap$android$arch$lifecycle$Lifecycle$Event[Lifecycle.Event.ON_START.ordinal()] = 2;     // Catch: NoSuchFieldError -> L12
        L20:
            $SwitchMap$android$arch$lifecycle$Lifecycle$Event[Lifecycle.Event.ON_RESUME.ordinal()] = 3;     // Catch: NoSuchFieldError -> L13
        L26:
            $SwitchMap$android$arch$lifecycle$Lifecycle$Event[Lifecycle.Event.ON_PAUSE.ordinal()] = 4;     // Catch: NoSuchFieldError -> L14
        L30:
            $SwitchMap$android$arch$lifecycle$Lifecycle$Event[Lifecycle.Event.ON_STOP.ordinal()] = 5;     // Catch: NoSuchFieldError -> L15
        L22:
            $SwitchMap$android$arch$lifecycle$Lifecycle$Event[Lifecycle.Event.ON_DESTROY.ordinal()] = 6;     // Catch: NoSuchFieldError -> L16
        L28:
            $SwitchMap$android$arch$lifecycle$Lifecycle$Event[Lifecycle.Event.ON_ANY.ordinal()] = 7;     // Catch: NoSuchFieldError -> L17
            return;
        }
    }

    FullLifecycleObserverAdapter(FullLifecycleObserver r1) {
        this.mObserver = r1;
    }

    @Override
    public void onStateChanged(LifecycleOwner r2, Lifecycle.Event r3) {
        switch(1.$SwitchMap$android$arch$lifecycle$Lifecycle$Event[r3.ordinal()]) {
            case 1: goto L12;
            case 2: goto L11;
            case 3: goto L10;
            case 4: goto L9;
            case 5: goto L8;
            case 6: goto L7;
            case 7: goto L6;
            default: goto L19;
        };
    L7:
        this.mObserver.onDestroy(r2);
        return;
    L8:
        this.mObserver.onStop(r2);
        return;
    L9:
        this.mObserver.onPause(r2);
        return;
    L10:
        this.mObserver.onResume(r2);
        return;
    L11:
        this.mObserver.onStart(r2);
        return;
    L12:
        this.mObserver.onCreate(r2);
        return;
    L19:
        return;
    L6:
        throw new IllegalArgumentException("ON_ANY must not been send by anybody");
    }
}
