package com.huawei.agconnect.core.service.auth;

public interface TokenSnapshot {

    public enum State extends java.lang.Enum<com.huawei.agconnect.core.service.auth.TokenSnapshot.State> {
        private static final com.huawei.agconnect.core.service.auth.TokenSnapshot.State[] $VALUES = null;
        public static final com.huawei.agconnect.core.service.auth.TokenSnapshot.State SIGNED_IN = null;
        public static final com.huawei.agconnect.core.service.auth.TokenSnapshot.State SIGNED_OUT = null;
        public static final com.huawei.agconnect.core.service.auth.TokenSnapshot.State TOKEN_INVALID = null;
        public static final com.huawei.agconnect.core.service.auth.TokenSnapshot.State TOKEN_UPDATED = null;

        static {
                com.huawei.agconnect.core.service.auth.TokenSnapshot$State r0 = new com.huawei.agconnect.core.service.auth.TokenSnapshot$State
                r1 = 0
                java.lang.String r2 = "SIGNED_IN"
                r0.<init>(r2, r1)
                com.huawei.agconnect.core.service.auth.TokenSnapshot.State.SIGNED_IN = r0
                com.huawei.agconnect.core.service.auth.TokenSnapshot$State r0 = new com.huawei.agconnect.core.service.auth.TokenSnapshot$State
                r2 = 1
                java.lang.String r3 = "TOKEN_UPDATED"
                r0.<init>(r3, r2)
                com.huawei.agconnect.core.service.auth.TokenSnapshot.State.TOKEN_UPDATED = r0
                com.huawei.agconnect.core.service.auth.TokenSnapshot$State r0 = new com.huawei.agconnect.core.service.auth.TokenSnapshot$State
                r3 = 2
                java.lang.String r4 = "TOKEN_INVALID"
                r0.<init>(r4, r3)
                com.huawei.agconnect.core.service.auth.TokenSnapshot.State.TOKEN_INVALID = r0
                com.huawei.agconnect.core.service.auth.TokenSnapshot$State r0 = new com.huawei.agconnect.core.service.auth.TokenSnapshot$State
                r4 = 3
                java.lang.String r5 = "SIGNED_OUT"
                r0.<init>(r5, r4)
                com.huawei.agconnect.core.service.auth.TokenSnapshot.State.SIGNED_OUT = r0
                r5 = 4
                com.huawei.agconnect.core.service.auth.TokenSnapshot$State[] r5 = new com.huawei.agconnect.core.service.auth.TokenSnapshot.State[r5]
                com.huawei.agconnect.core.service.auth.TokenSnapshot$State r6 = com.huawei.agconnect.core.service.auth.TokenSnapshot.State.SIGNED_IN
                r5[r1] = r6
                com.huawei.agconnect.core.service.auth.TokenSnapshot$State r1 = com.huawei.agconnect.core.service.auth.TokenSnapshot.State.TOKEN_UPDATED
                r5[r2] = r1
                com.huawei.agconnect.core.service.auth.TokenSnapshot$State r1 = com.huawei.agconnect.core.service.auth.TokenSnapshot.State.TOKEN_INVALID
                r5[r3] = r1
                r5[r4] = r0
                com.huawei.agconnect.core.service.auth.TokenSnapshot.State.$VALUES = r5
                return
        }

        State(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.huawei.agconnect.core.service.auth.TokenSnapshot.State valueOf(java.lang.String r1) {
                java.lang.Class<com.huawei.agconnect.core.service.auth.TokenSnapshot$State> r0 = com.huawei.agconnect.core.service.auth.TokenSnapshot.State.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.huawei.agconnect.core.service.auth.TokenSnapshot$State r1 = (com.huawei.agconnect.core.service.auth.TokenSnapshot.State) r1
                return r1
        }

        public static com.huawei.agconnect.core.service.auth.TokenSnapshot.State[] values() {
                com.huawei.agconnect.core.service.auth.TokenSnapshot$State[] r0 = com.huawei.agconnect.core.service.auth.TokenSnapshot.State.$VALUES
                java.lang.Object r0 = r0.clone()
                com.huawei.agconnect.core.service.auth.TokenSnapshot$State[] r0 = (com.huawei.agconnect.core.service.auth.TokenSnapshot.State[]) r0
                return r0
        }
    }

    com.huawei.agconnect.core.service.auth.TokenSnapshot.State getState();

    java.lang.String getToken();
}
