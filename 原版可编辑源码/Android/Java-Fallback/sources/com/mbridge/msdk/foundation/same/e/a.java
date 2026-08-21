package com.mbridge.msdk.foundation.same.e;

public abstract class a implements java.lang.Runnable {
    public static long id;
    public com.mbridge.msdk.foundation.same.e.a.b mListener;
    public com.mbridge.msdk.foundation.same.e.a.a mState;

    public enum a extends java.lang.Enum<com.mbridge.msdk.foundation.same.e.a.a> {
        public static final com.mbridge.msdk.foundation.same.e.a.a a = null;
        public static final com.mbridge.msdk.foundation.same.e.a.a b = null;
        public static final com.mbridge.msdk.foundation.same.e.a.a c = null;
        public static final com.mbridge.msdk.foundation.same.e.a.a d = null;
        public static final com.mbridge.msdk.foundation.same.e.a.a e = null;
        private static final com.mbridge.msdk.foundation.same.e.a.a[] f = null;

        static {
                com.mbridge.msdk.foundation.same.e.a$a r0 = new com.mbridge.msdk.foundation.same.e.a$a
                r1 = 0
                java.lang.String r2 = "READY"
                r0.<init>(r2, r1)
                com.mbridge.msdk.foundation.same.e.a.a.a = r0
                com.mbridge.msdk.foundation.same.e.a$a r0 = new com.mbridge.msdk.foundation.same.e.a$a
                r2 = 1
                java.lang.String r3 = "RUNNING"
                r0.<init>(r3, r2)
                com.mbridge.msdk.foundation.same.e.a.a.b = r0
                com.mbridge.msdk.foundation.same.e.a$a r0 = new com.mbridge.msdk.foundation.same.e.a$a
                r3 = 2
                java.lang.String r4 = "PAUSE"
                r0.<init>(r4, r3)
                com.mbridge.msdk.foundation.same.e.a.a.c = r0
                com.mbridge.msdk.foundation.same.e.a$a r0 = new com.mbridge.msdk.foundation.same.e.a$a
                r4 = 3
                java.lang.String r5 = "CANCEL"
                r0.<init>(r5, r4)
                com.mbridge.msdk.foundation.same.e.a.a.d = r0
                com.mbridge.msdk.foundation.same.e.a$a r0 = new com.mbridge.msdk.foundation.same.e.a$a
                r5 = 4
                java.lang.String r6 = "FINISH"
                r0.<init>(r6, r5)
                com.mbridge.msdk.foundation.same.e.a.a.e = r0
                r6 = 5
                com.mbridge.msdk.foundation.same.e.a$a[] r6 = new com.mbridge.msdk.foundation.same.e.a.a[r6]
                com.mbridge.msdk.foundation.same.e.a$a r7 = com.mbridge.msdk.foundation.same.e.a.a.a
                r6[r1] = r7
                com.mbridge.msdk.foundation.same.e.a$a r1 = com.mbridge.msdk.foundation.same.e.a.a.b
                r6[r2] = r1
                com.mbridge.msdk.foundation.same.e.a$a r1 = com.mbridge.msdk.foundation.same.e.a.a.c
                r6[r3] = r1
                com.mbridge.msdk.foundation.same.e.a$a r1 = com.mbridge.msdk.foundation.same.e.a.a.d
                r6[r4] = r1
                r6[r5] = r0
                com.mbridge.msdk.foundation.same.e.a.a.f = r6
                return
        }

        a(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.mbridge.msdk.foundation.same.e.a.a valueOf(java.lang.String r1) {
                java.lang.Class<com.mbridge.msdk.foundation.same.e.a$a> r0 = com.mbridge.msdk.foundation.same.e.a.a.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.mbridge.msdk.foundation.same.e.a$a r1 = (com.mbridge.msdk.foundation.same.e.a.a) r1
                return r1
        }

        public static com.mbridge.msdk.foundation.same.e.a.a[] values() {
                com.mbridge.msdk.foundation.same.e.a$a[] r0 = com.mbridge.msdk.foundation.same.e.a.a.f
                java.lang.Object r0 = r0.clone()
                com.mbridge.msdk.foundation.same.e.a$a[] r0 = (com.mbridge.msdk.foundation.same.e.a.a[]) r0
                return r0
        }
    }

    public interface b {
        void a(com.mbridge.msdk.foundation.same.e.a.a r1);
    }

    public a() {
            r4 = this;
            r4.<init>()
            com.mbridge.msdk.foundation.same.e.a$a r0 = com.mbridge.msdk.foundation.same.e.a.a.a
            r4.mState = r0
            long r0 = com.mbridge.msdk.foundation.same.e.a.id
            r2 = 1
            long r0 = r0 + r2
            com.mbridge.msdk.foundation.same.e.a.id = r0
            return
    }

    private void setState(com.mbridge.msdk.foundation.same.e.a.a r2) {
            r1 = this;
            r1.mState = r2
            com.mbridge.msdk.foundation.same.e.a$b r0 = r1.mListener
            if (r0 == 0) goto L9
            r0.a(r2)
        L9:
            return
    }

    public final void cancel() {
            r2 = this;
            com.mbridge.msdk.foundation.same.e.a$a r0 = r2.mState
            com.mbridge.msdk.foundation.same.e.a$a r1 = com.mbridge.msdk.foundation.same.e.a.a.d
            if (r0 == r1) goto Le
            com.mbridge.msdk.foundation.same.e.a$a r0 = com.mbridge.msdk.foundation.same.e.a.a.d
            r2.setState(r0)
            r2.cancelTask()
        Le:
            return
    }

    public abstract void cancelTask();

    public final long getId() {
            r2 = this;
            long r0 = com.mbridge.msdk.foundation.same.e.a.id
            return r0
    }

    public com.mbridge.msdk.foundation.same.e.a.a getState() {
            r1 = this;
            com.mbridge.msdk.foundation.same.e.a$a r0 = r1.mState
            return r0
    }

    public abstract void pauseTask(boolean r1);

    @Override
    public final void run() {
            r2 = this;
            com.mbridge.msdk.foundation.same.e.a$a r0 = r2.mState     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.foundation.same.e.a$a r1 = com.mbridge.msdk.foundation.same.e.a.a.a     // Catch: java.lang.Throwable -> L14
            if (r0 != r1) goto L18
            com.mbridge.msdk.foundation.same.e.a$a r0 = com.mbridge.msdk.foundation.same.e.a.a.b     // Catch: java.lang.Throwable -> L14
            r2.setState(r0)     // Catch: java.lang.Throwable -> L14
            r2.runTask()     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.foundation.same.e.a$a r0 = com.mbridge.msdk.foundation.same.e.a.a.e     // Catch: java.lang.Throwable -> L14
            r2.setState(r0)     // Catch: java.lang.Throwable -> L14
            goto L18
        L14:
            r0 = move-exception
            r0.printStackTrace()
        L18:
            return
    }

    public abstract void runTask();

    public final void setPause(boolean r3) {
            r2 = this;
            com.mbridge.msdk.foundation.same.e.a$a r0 = r2.mState
            com.mbridge.msdk.foundation.same.e.a$a r1 = com.mbridge.msdk.foundation.same.e.a.a.c
            if (r0 == r1) goto L23
            com.mbridge.msdk.foundation.same.e.a$a r0 = r2.mState
            com.mbridge.msdk.foundation.same.e.a$a r1 = com.mbridge.msdk.foundation.same.e.a.a.d
            if (r0 == r1) goto L23
            com.mbridge.msdk.foundation.same.e.a$a r0 = r2.mState
            com.mbridge.msdk.foundation.same.e.a$a r1 = com.mbridge.msdk.foundation.same.e.a.a.e
            if (r0 != r1) goto L13
            goto L23
        L13:
            if (r3 == 0) goto L1b
            com.mbridge.msdk.foundation.same.e.a$a r0 = com.mbridge.msdk.foundation.same.e.a.a.c
            r2.setState(r0)
            goto L20
        L1b:
            com.mbridge.msdk.foundation.same.e.a$a r0 = com.mbridge.msdk.foundation.same.e.a.a.b
            r2.setState(r0)
        L20:
            r2.pauseTask(r3)
        L23:
            return
    }

    public void setonStateChangeListener(com.mbridge.msdk.foundation.same.e.a.b r1) {
            r0 = this;
            r0.mListener = r1
            return
    }
}
