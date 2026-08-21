package android.arch.lifecycle;

public abstract class Lifecycle {

    public enum Event extends java.lang.Enum<android.arch.lifecycle.Lifecycle.Event> {
        private static final android.arch.lifecycle.Lifecycle.Event[] $VALUES = null;
        public static final android.arch.lifecycle.Lifecycle.Event ON_ANY = null;
        public static final android.arch.lifecycle.Lifecycle.Event ON_CREATE = null;
        public static final android.arch.lifecycle.Lifecycle.Event ON_DESTROY = null;
        public static final android.arch.lifecycle.Lifecycle.Event ON_PAUSE = null;
        public static final android.arch.lifecycle.Lifecycle.Event ON_RESUME = null;
        public static final android.arch.lifecycle.Lifecycle.Event ON_START = null;
        public static final android.arch.lifecycle.Lifecycle.Event ON_STOP = null;

        static {
                android.arch.lifecycle.Lifecycle$Event r0 = new android.arch.lifecycle.Lifecycle$Event
                r1 = 0
                java.lang.String r2 = "ON_CREATE"
                r0.<init>(r2, r1)
                android.arch.lifecycle.Lifecycle.Event.ON_CREATE = r0
                android.arch.lifecycle.Lifecycle$Event r0 = new android.arch.lifecycle.Lifecycle$Event
                r2 = 1
                java.lang.String r3 = "ON_START"
                r0.<init>(r3, r2)
                android.arch.lifecycle.Lifecycle.Event.ON_START = r0
                android.arch.lifecycle.Lifecycle$Event r0 = new android.arch.lifecycle.Lifecycle$Event
                r3 = 2
                java.lang.String r4 = "ON_RESUME"
                r0.<init>(r4, r3)
                android.arch.lifecycle.Lifecycle.Event.ON_RESUME = r0
                android.arch.lifecycle.Lifecycle$Event r0 = new android.arch.lifecycle.Lifecycle$Event
                r4 = 3
                java.lang.String r5 = "ON_PAUSE"
                r0.<init>(r5, r4)
                android.arch.lifecycle.Lifecycle.Event.ON_PAUSE = r0
                android.arch.lifecycle.Lifecycle$Event r0 = new android.arch.lifecycle.Lifecycle$Event
                r5 = 4
                java.lang.String r6 = "ON_STOP"
                r0.<init>(r6, r5)
                android.arch.lifecycle.Lifecycle.Event.ON_STOP = r0
                android.arch.lifecycle.Lifecycle$Event r0 = new android.arch.lifecycle.Lifecycle$Event
                r6 = 5
                java.lang.String r7 = "ON_DESTROY"
                r0.<init>(r7, r6)
                android.arch.lifecycle.Lifecycle.Event.ON_DESTROY = r0
                android.arch.lifecycle.Lifecycle$Event r0 = new android.arch.lifecycle.Lifecycle$Event
                r7 = 6
                java.lang.String r8 = "ON_ANY"
                r0.<init>(r8, r7)
                android.arch.lifecycle.Lifecycle.Event.ON_ANY = r0
                r8 = 7
                android.arch.lifecycle.Lifecycle$Event[] r8 = new android.arch.lifecycle.Lifecycle.Event[r8]
                android.arch.lifecycle.Lifecycle$Event r9 = android.arch.lifecycle.Lifecycle.Event.ON_CREATE
                r8[r1] = r9
                android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_START
                r8[r2] = r1
                android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_RESUME
                r8[r3] = r1
                android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_PAUSE
                r8[r4] = r1
                android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_STOP
                r8[r5] = r1
                android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_DESTROY
                r8[r6] = r1
                r8[r7] = r0
                android.arch.lifecycle.Lifecycle.Event.$VALUES = r8
                return
        }

        Event(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static android.arch.lifecycle.Lifecycle.Event valueOf(java.lang.String r1) {
                java.lang.Class<android.arch.lifecycle.Lifecycle$Event> r0 = android.arch.lifecycle.Lifecycle.Event.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                android.arch.lifecycle.Lifecycle$Event r1 = (android.arch.lifecycle.Lifecycle.Event) r1
                return r1
        }

        public static android.arch.lifecycle.Lifecycle.Event[] values() {
                android.arch.lifecycle.Lifecycle$Event[] r0 = android.arch.lifecycle.Lifecycle.Event.$VALUES
                java.lang.Object r0 = r0.clone()
                android.arch.lifecycle.Lifecycle$Event[] r0 = (android.arch.lifecycle.Lifecycle.Event[]) r0
                return r0
        }
    }

    public enum State extends java.lang.Enum<android.arch.lifecycle.Lifecycle.State> {
        private static final android.arch.lifecycle.Lifecycle.State[] $VALUES = null;
        public static final android.arch.lifecycle.Lifecycle.State CREATED = null;
        public static final android.arch.lifecycle.Lifecycle.State DESTROYED = null;
        public static final android.arch.lifecycle.Lifecycle.State INITIALIZED = null;
        public static final android.arch.lifecycle.Lifecycle.State RESUMED = null;
        public static final android.arch.lifecycle.Lifecycle.State STARTED = null;

        static {
                android.arch.lifecycle.Lifecycle$State r0 = new android.arch.lifecycle.Lifecycle$State
                r1 = 0
                java.lang.String r2 = "DESTROYED"
                r0.<init>(r2, r1)
                android.arch.lifecycle.Lifecycle.State.DESTROYED = r0
                android.arch.lifecycle.Lifecycle$State r0 = new android.arch.lifecycle.Lifecycle$State
                r2 = 1
                java.lang.String r3 = "INITIALIZED"
                r0.<init>(r3, r2)
                android.arch.lifecycle.Lifecycle.State.INITIALIZED = r0
                android.arch.lifecycle.Lifecycle$State r0 = new android.arch.lifecycle.Lifecycle$State
                r3 = 2
                java.lang.String r4 = "CREATED"
                r0.<init>(r4, r3)
                android.arch.lifecycle.Lifecycle.State.CREATED = r0
                android.arch.lifecycle.Lifecycle$State r0 = new android.arch.lifecycle.Lifecycle$State
                r4 = 3
                java.lang.String r5 = "STARTED"
                r0.<init>(r5, r4)
                android.arch.lifecycle.Lifecycle.State.STARTED = r0
                android.arch.lifecycle.Lifecycle$State r0 = new android.arch.lifecycle.Lifecycle$State
                r5 = 4
                java.lang.String r6 = "RESUMED"
                r0.<init>(r6, r5)
                android.arch.lifecycle.Lifecycle.State.RESUMED = r0
                r6 = 5
                android.arch.lifecycle.Lifecycle$State[] r6 = new android.arch.lifecycle.Lifecycle.State[r6]
                android.arch.lifecycle.Lifecycle$State r7 = android.arch.lifecycle.Lifecycle.State.DESTROYED
                r6[r1] = r7
                android.arch.lifecycle.Lifecycle$State r1 = android.arch.lifecycle.Lifecycle.State.INITIALIZED
                r6[r2] = r1
                android.arch.lifecycle.Lifecycle$State r1 = android.arch.lifecycle.Lifecycle.State.CREATED
                r6[r3] = r1
                android.arch.lifecycle.Lifecycle$State r1 = android.arch.lifecycle.Lifecycle.State.STARTED
                r6[r4] = r1
                r6[r5] = r0
                android.arch.lifecycle.Lifecycle.State.$VALUES = r6
                return
        }

        State(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static android.arch.lifecycle.Lifecycle.State valueOf(java.lang.String r1) {
                java.lang.Class<android.arch.lifecycle.Lifecycle$State> r0 = android.arch.lifecycle.Lifecycle.State.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                android.arch.lifecycle.Lifecycle$State r1 = (android.arch.lifecycle.Lifecycle.State) r1
                return r1
        }

        public static android.arch.lifecycle.Lifecycle.State[] values() {
                android.arch.lifecycle.Lifecycle$State[] r0 = android.arch.lifecycle.Lifecycle.State.$VALUES
                java.lang.Object r0 = r0.clone()
                android.arch.lifecycle.Lifecycle$State[] r0 = (android.arch.lifecycle.Lifecycle.State[]) r0
                return r0
        }

        public boolean isAtLeast(android.arch.lifecycle.Lifecycle.State r1) {
                r0 = this;
                int r1 = r0.compareTo(r1)
                if (r1 < 0) goto L8
                r1 = 1
                goto L9
            L8:
                r1 = 0
            L9:
                return r1
        }
    }

    public Lifecycle() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract void addObserver(android.arch.lifecycle.LifecycleObserver r1);

    public abstract android.arch.lifecycle.Lifecycle.State getCurrentState();

    public abstract void removeObserver(android.arch.lifecycle.LifecycleObserver r1);
}
