package android.arch.lifecycle;

import android.support.annotation.MainThread;
import android.support.annotation.NonNull;

public abstract class Lifecycle {

    public enum Event extends Enum<Event> {
        private static final Event[] $VALUES = null;
        public static final Event ON_ANY = null;
        public static final Event ON_CREATE = null;
        public static final Event ON_DESTROY = null;
        public static final Event ON_PAUSE = null;
        public static final Event ON_RESUME = null;
        public static final Event ON_START = null;
        public static final Event ON_STOP = null;

        public static Event valueOf(String r1) {
            return (Event) Enum.valueOf(Event.class, r1);
        }

        public static Event[] values() {
            return (Event[]) $VALUES.clone();
        }

        Event(String r1, int r2) {
        }

        static {
            ON_CREATE = new Event("ON_CREATE", 0);
            ON_START = new Event("ON_START", 1);
            ON_RESUME = new Event("ON_RESUME", 2);
            ON_PAUSE = new Event("ON_PAUSE", 3);
            ON_STOP = new Event("ON_STOP", 4);
            ON_DESTROY = new Event("ON_DESTROY", 5);
            ON_ANY = new Event("ON_ANY", 6);
            $VALUES = new Event[]{ON_CREATE, ON_START, ON_RESUME, ON_PAUSE, ON_STOP, ON_DESTROY, ON_ANY};
        }
    }

    public enum State extends Enum<State> {
        private static final State[] $VALUES = null;
        public static final State CREATED = null;
        public static final State DESTROYED = null;
        public static final State INITIALIZED = null;
        public static final State RESUMED = null;
        public static final State STARTED = null;

        public static State valueOf(String r1) {
            return (State) Enum.valueOf(State.class, r1);
        }

        public static State[] values() {
            return (State[]) $VALUES.clone();
        }

        State(String r1, int r2) {
        }

        static {
            DESTROYED = new State("DESTROYED", 0);
            INITIALIZED = new State("INITIALIZED", 1);
            CREATED = new State("CREATED", 2);
            STARTED = new State("STARTED", 3);
            RESUMED = new State("RESUMED", 4);
            $VALUES = new State[]{DESTROYED, INITIALIZED, CREATED, STARTED, RESUMED};
        }

        public boolean isAtLeast(@NonNull State r1) {
            if (compareTo(r1) < 0) goto L5;
            return true;
        L5:
            return false;
        }
    }

    @MainThread
    public abstract void addObserver(@NonNull LifecycleObserver r1);

    @NonNull
    @MainThread
    public abstract State getCurrentState();

    @MainThread
    public abstract void removeObserver(@NonNull LifecycleObserver r1);

    public Lifecycle() {
    }
}
