package com.bytedance.android.live.base.api;

public interface IEventListener {

    public static class Event {
        public static final int TYPE_COMMENT = 4;
        public static final int TYPE_ENTER = 1;
        public static final int TYPE_EXIT = 2;
        public static final int TYPE_FOLLOW = 3;
        public static final int TYPE_ORDER = 5;
        public static final int TYPE_UNKNOWN = 0;
        public long time;
        public int type;

        public Event(int r3, long r4) {
                r2 = this;
                r2.<init>()
                r0 = 0
                r2.type = r0
                r0 = 0
                r2.time = r0
                r2.type = r3
                r2.time = r4
                return
        }
    }

    void onEvent(com.bytedance.android.live.base.api.IEventListener.Event r1);
}
