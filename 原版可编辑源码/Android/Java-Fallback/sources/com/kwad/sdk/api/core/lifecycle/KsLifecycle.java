package com.kwad.sdk.api.core.lifecycle;

public class KsLifecycle {
    private android.arch.lifecycle.Lifecycle mBase;


    public enum KsLifeEvent extends java.lang.Enum<com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent> {
        private static final com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent[] $VALUES = null;
        public static final com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent ON_ANY = null;
        public static final com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent ON_CREATE = null;
        public static final com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent ON_DESTROY = null;
        public static final com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent ON_PAUSE = null;
        public static final com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent ON_RESUME = null;
        public static final com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent ON_START = null;
        public static final com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent ON_STOP = null;
        android.arch.lifecycle.Lifecycle.Event mRealValue;

        static {
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeEvent r0 = new com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeEvent
                android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_CREATE
                r2 = 0
                java.lang.String r3 = "ON_CREATE"
                r0.<init>(r3, r2, r1)
                com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent.ON_CREATE = r0
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeEvent r0 = new com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeEvent
                android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_START
                r3 = 1
                java.lang.String r4 = "ON_START"
                r0.<init>(r4, r3, r1)
                com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent.ON_START = r0
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeEvent r0 = new com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeEvent
                android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_RESUME
                r4 = 2
                java.lang.String r5 = "ON_RESUME"
                r0.<init>(r5, r4, r1)
                com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent.ON_RESUME = r0
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeEvent r0 = new com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeEvent
                android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_PAUSE
                r5 = 3
                java.lang.String r6 = "ON_PAUSE"
                r0.<init>(r6, r5, r1)
                com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent.ON_PAUSE = r0
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeEvent r0 = new com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeEvent
                android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_STOP
                r6 = 4
                java.lang.String r7 = "ON_STOP"
                r0.<init>(r7, r6, r1)
                com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent.ON_STOP = r0
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeEvent r0 = new com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeEvent
                android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_DESTROY
                r7 = 5
                java.lang.String r8 = "ON_DESTROY"
                r0.<init>(r8, r7, r1)
                com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent.ON_DESTROY = r0
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeEvent r0 = new com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeEvent
                android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_ANY
                r8 = 6
                java.lang.String r9 = "ON_ANY"
                r0.<init>(r9, r8, r1)
                com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent.ON_ANY = r0
                r1 = 7
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeEvent[] r1 = new com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent[r1]
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeEvent r9 = com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent.ON_CREATE
                r1[r2] = r9
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeEvent r2 = com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent.ON_START
                r1[r3] = r2
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeEvent r2 = com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent.ON_RESUME
                r1[r4] = r2
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeEvent r2 = com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent.ON_PAUSE
                r1[r5] = r2
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeEvent r2 = com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent.ON_STOP
                r1[r6] = r2
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeEvent r2 = com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent.ON_DESTROY
                r1[r7] = r2
                r1[r8] = r0
                com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent.$VALUES = r1
                return
        }

        KsLifeEvent(java.lang.String r1, int r2, android.arch.lifecycle.Lifecycle.Event r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.mRealValue = r3
                return
        }

        public static com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent createfrom(android.arch.lifecycle.Lifecycle.Event r5) {
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeEvent[] r0 = values()
                int r1 = r0.length
                r2 = 0
            L6:
                if (r2 >= r1) goto L14
                r3 = r0[r2]
                android.arch.lifecycle.Lifecycle$Event r4 = r3.getReal()
                if (r4 != r5) goto L11
                return r3
            L11:
                int r2 = r2 + 1
                goto L6
            L14:
                r5 = 0
                return r5
        }

        public static com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent valueOf(java.lang.String r1) {
                java.lang.Class<com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeEvent> r0 = com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeEvent r1 = (com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent) r1
                return r1
        }

        public static com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent[] values() {
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeEvent[] r0 = com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent.$VALUES
                java.lang.Object r0 = r0.clone()
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeEvent[] r0 = (com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeEvent[]) r0
                return r0
        }

        public final android.arch.lifecycle.Lifecycle.Event getReal() {
                r1 = this;
                android.arch.lifecycle.Lifecycle$Event r0 = r1.mRealValue
                return r0
        }
    }

    public enum KsLifeState extends java.lang.Enum<com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeState> {
        private static final com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeState[] $VALUES = null;
        public static final com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeState CREATED = null;
        public static final com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeState DESTROYED = null;
        public static final com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeState INITIALIZED = null;
        public static final com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeState RESUMED = null;
        public static final com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeState STARTED = null;
        android.arch.lifecycle.Lifecycle.State mReal;

        static {
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeState r0 = new com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeState
                android.arch.lifecycle.Lifecycle$State r1 = android.arch.lifecycle.Lifecycle.State.DESTROYED
                r2 = 0
                java.lang.String r3 = "DESTROYED"
                r0.<init>(r3, r2, r1)
                com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeState.DESTROYED = r0
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeState r0 = new com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeState
                android.arch.lifecycle.Lifecycle$State r1 = android.arch.lifecycle.Lifecycle.State.DESTROYED
                r3 = 1
                java.lang.String r4 = "INITIALIZED"
                r0.<init>(r4, r3, r1)
                com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeState.INITIALIZED = r0
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeState r0 = new com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeState
                android.arch.lifecycle.Lifecycle$State r1 = android.arch.lifecycle.Lifecycle.State.DESTROYED
                r4 = 2
                java.lang.String r5 = "CREATED"
                r0.<init>(r5, r4, r1)
                com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeState.CREATED = r0
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeState r0 = new com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeState
                android.arch.lifecycle.Lifecycle$State r1 = android.arch.lifecycle.Lifecycle.State.DESTROYED
                r5 = 3
                java.lang.String r6 = "STARTED"
                r0.<init>(r6, r5, r1)
                com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeState.STARTED = r0
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeState r0 = new com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeState
                android.arch.lifecycle.Lifecycle$State r1 = android.arch.lifecycle.Lifecycle.State.DESTROYED
                r6 = 4
                java.lang.String r7 = "RESUMED"
                r0.<init>(r7, r6, r1)
                com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeState.RESUMED = r0
                r1 = 5
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeState[] r1 = new com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeState[r1]
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeState r7 = com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeState.DESTROYED
                r1[r2] = r7
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeState r2 = com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeState.INITIALIZED
                r1[r3] = r2
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeState r2 = com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeState.CREATED
                r1[r4] = r2
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeState r2 = com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeState.STARTED
                r1[r5] = r2
                r1[r6] = r0
                com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeState.$VALUES = r1
                return
        }

        KsLifeState(java.lang.String r1, int r2, android.arch.lifecycle.Lifecycle.State r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.mReal = r3
                return
        }

        public static com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeState createFrom(android.arch.lifecycle.Lifecycle.State r5) {
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeState[] r0 = values()
                int r1 = r0.length
                r2 = 0
            L6:
                if (r2 >= r1) goto L12
                r3 = r0[r2]
                android.arch.lifecycle.Lifecycle$State r4 = r3.mReal
                if (r4 != r5) goto Lf
                return r3
            Lf:
                int r2 = r2 + 1
                goto L6
            L12:
                r5 = 0
                return r5
        }

        public static com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeState valueOf(java.lang.String r1) {
                java.lang.Class<com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeState> r0 = com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeState.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeState r1 = (com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeState) r1
                return r1
        }

        public static com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeState[] values() {
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeState[] r0 = com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeState.$VALUES
                java.lang.Object r0 = r0.clone()
                com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeState[] r0 = (com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeState[]) r0
                return r0
        }

        public final boolean isAtLeast(com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeState r1) {
                r0 = this;
                int r1 = r0.compareTo(r1)
                if (r1 < 0) goto L8
                r1 = 1
                return r1
            L8:
                r1 = 0
                return r1
        }
    }

    public KsLifecycle(android.arch.lifecycle.Lifecycle r1) {
            r0 = this;
            r0.<init>()
            r0.mBase = r1
            return
    }

    public void addObserver(com.kwad.sdk.api.core.lifecycle.KsLifecycleObserver r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.kwad.sdk.api.core.lifecycle.KsGenericLifecycleObserver
            if (r0 == 0) goto L11
            com.kwad.sdk.api.core.lifecycle.KsLifecycle$1 r0 = new com.kwad.sdk.api.core.lifecycle.KsLifecycle$1
            r0.<init>(r1, r2)
            r2.setBase(r0)
            android.arch.lifecycle.Lifecycle r2 = r1.mBase
            r2.addObserver(r0)
        L11:
            return
    }

    public com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeState getCurrentState() {
            r1 = this;
            android.arch.lifecycle.Lifecycle r0 = r1.mBase
            android.arch.lifecycle.Lifecycle$State r0 = r0.getCurrentState()
            com.kwad.sdk.api.core.lifecycle.KsLifecycle$KsLifeState r0 = com.kwad.sdk.api.core.lifecycle.KsLifecycle.KsLifeState.createFrom(r0)
            return r0
    }

    public void removeObserver(com.kwad.sdk.api.core.lifecycle.KsLifecycleObserver r2) {
            r1 = this;
            android.arch.lifecycle.Lifecycle r0 = r1.mBase
            android.arch.lifecycle.LifecycleObserver r2 = r2.getBase()
            r0.removeObserver(r2)
            return
    }
}
