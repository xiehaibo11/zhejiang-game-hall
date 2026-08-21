package android.arch.lifecycle;

class FullLifecycleObserverAdapter implements android.arch.lifecycle.GenericLifecycleObserver {
    private final android.arch.lifecycle.FullLifecycleObserver mObserver;

    static class 1 {
        static final int[] $SwitchMap$android$arch$lifecycle$Lifecycle$Event = null;

        static {
                android.arch.lifecycle.Lifecycle$Event[] r0 = android.arch.lifecycle.Lifecycle.Event.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                android.arch.lifecycle.FullLifecycleObserverAdapter.1.$SwitchMap$android$arch$lifecycle$Lifecycle$Event = r0
                android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_CREATE     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = android.arch.lifecycle.FullLifecycleObserverAdapter.1.$SwitchMap$android$arch$lifecycle$Lifecycle$Event     // Catch: java.lang.NoSuchFieldError -> L1d
                android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_START     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = android.arch.lifecycle.FullLifecycleObserverAdapter.1.$SwitchMap$android$arch$lifecycle$Lifecycle$Event     // Catch: java.lang.NoSuchFieldError -> L28
                android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_RESUME     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = android.arch.lifecycle.FullLifecycleObserverAdapter.1.$SwitchMap$android$arch$lifecycle$Lifecycle$Event     // Catch: java.lang.NoSuchFieldError -> L33
                android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_PAUSE     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                int[] r0 = android.arch.lifecycle.FullLifecycleObserverAdapter.1.$SwitchMap$android$arch$lifecycle$Lifecycle$Event     // Catch: java.lang.NoSuchFieldError -> L3e
                android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_STOP     // Catch: java.lang.NoSuchFieldError -> L3e
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L3e
                r2 = 5
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L3e
            L3e:
                int[] r0 = android.arch.lifecycle.FullLifecycleObserverAdapter.1.$SwitchMap$android$arch$lifecycle$Lifecycle$Event     // Catch: java.lang.NoSuchFieldError -> L49
                android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_DESTROY     // Catch: java.lang.NoSuchFieldError -> L49
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L49
                r2 = 6
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L49
            L49:
                int[] r0 = android.arch.lifecycle.FullLifecycleObserverAdapter.1.$SwitchMap$android$arch$lifecycle$Lifecycle$Event     // Catch: java.lang.NoSuchFieldError -> L54
                android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_ANY     // Catch: java.lang.NoSuchFieldError -> L54
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L54
                r2 = 7
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L54
            L54:
                return
        }
    }

    FullLifecycleObserverAdapter(android.arch.lifecycle.FullLifecycleObserver r1) {
            r0 = this;
            r0.<init>()
            r0.mObserver = r1
            return
    }

    @Override
    public void onStateChanged(android.arch.lifecycle.LifecycleOwner r2, android.arch.lifecycle.Lifecycle.Event r3) {
            r1 = this;
            int[] r0 = android.arch.lifecycle.FullLifecycleObserverAdapter.1.$SwitchMap$android$arch$lifecycle$Lifecycle$Event
            int r3 = r3.ordinal()
            r3 = r0[r3]
            switch(r3) {
                case 1: goto L32;
                case 2: goto L2c;
                case 3: goto L26;
                case 4: goto L20;
                case 5: goto L1a;
                case 6: goto L14;
                case 7: goto Lc;
                default: goto Lb;
            }
        Lb:
            goto L37
        Lc:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "ON_ANY must not been send by anybody"
            r2.<init>(r3)
            throw r2
        L14:
            android.arch.lifecycle.FullLifecycleObserver r3 = r1.mObserver
            r3.onDestroy(r2)
            goto L37
        L1a:
            android.arch.lifecycle.FullLifecycleObserver r3 = r1.mObserver
            r3.onStop(r2)
            goto L37
        L20:
            android.arch.lifecycle.FullLifecycleObserver r3 = r1.mObserver
            r3.onPause(r2)
            goto L37
        L26:
            android.arch.lifecycle.FullLifecycleObserver r3 = r1.mObserver
            r3.onResume(r2)
            goto L37
        L2c:
            android.arch.lifecycle.FullLifecycleObserver r3 = r1.mObserver
            r3.onStart(r2)
            goto L37
        L32:
            android.arch.lifecycle.FullLifecycleObserver r3 = r1.mObserver
            r3.onCreate(r2)
        L37:
            return
    }
}
