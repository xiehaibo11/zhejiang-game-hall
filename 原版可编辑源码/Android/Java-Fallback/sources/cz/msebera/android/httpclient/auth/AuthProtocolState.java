package cz.msebera.android.httpclient.auth;

public enum AuthProtocolState extends java.lang.Enum<cz.msebera.android.httpclient.auth.AuthProtocolState> {
    private static final cz.msebera.android.httpclient.auth.AuthProtocolState[] $VALUES = null;
    public static final cz.msebera.android.httpclient.auth.AuthProtocolState CHALLENGED = null;
    public static final cz.msebera.android.httpclient.auth.AuthProtocolState FAILURE = null;
    public static final cz.msebera.android.httpclient.auth.AuthProtocolState HANDSHAKE = null;
    public static final cz.msebera.android.httpclient.auth.AuthProtocolState SUCCESS = null;
    public static final cz.msebera.android.httpclient.auth.AuthProtocolState UNCHALLENGED = null;

    static {
            cz.msebera.android.httpclient.auth.AuthProtocolState r0 = new cz.msebera.android.httpclient.auth.AuthProtocolState
            r1 = 0
            java.lang.String r2 = "UNCHALLENGED"
            r0.<init>(r2, r1)
            cz.msebera.android.httpclient.auth.AuthProtocolState.UNCHALLENGED = r0
            cz.msebera.android.httpclient.auth.AuthProtocolState r0 = new cz.msebera.android.httpclient.auth.AuthProtocolState
            r2 = 1
            java.lang.String r3 = "CHALLENGED"
            r0.<init>(r3, r2)
            cz.msebera.android.httpclient.auth.AuthProtocolState.CHALLENGED = r0
            cz.msebera.android.httpclient.auth.AuthProtocolState r0 = new cz.msebera.android.httpclient.auth.AuthProtocolState
            r3 = 2
            java.lang.String r4 = "HANDSHAKE"
            r0.<init>(r4, r3)
            cz.msebera.android.httpclient.auth.AuthProtocolState.HANDSHAKE = r0
            cz.msebera.android.httpclient.auth.AuthProtocolState r0 = new cz.msebera.android.httpclient.auth.AuthProtocolState
            r4 = 3
            java.lang.String r5 = "FAILURE"
            r0.<init>(r5, r4)
            cz.msebera.android.httpclient.auth.AuthProtocolState.FAILURE = r0
            cz.msebera.android.httpclient.auth.AuthProtocolState r0 = new cz.msebera.android.httpclient.auth.AuthProtocolState
            r5 = 4
            java.lang.String r6 = "SUCCESS"
            r0.<init>(r6, r5)
            cz.msebera.android.httpclient.auth.AuthProtocolState.SUCCESS = r0
            r0 = 5
            cz.msebera.android.httpclient.auth.AuthProtocolState[] r0 = new cz.msebera.android.httpclient.auth.AuthProtocolState[r0]
            cz.msebera.android.httpclient.auth.AuthProtocolState r6 = cz.msebera.android.httpclient.auth.AuthProtocolState.UNCHALLENGED
            r0[r1] = r6
            cz.msebera.android.httpclient.auth.AuthProtocolState r1 = cz.msebera.android.httpclient.auth.AuthProtocolState.CHALLENGED
            r0[r2] = r1
            cz.msebera.android.httpclient.auth.AuthProtocolState r1 = cz.msebera.android.httpclient.auth.AuthProtocolState.HANDSHAKE
            r0[r3] = r1
            cz.msebera.android.httpclient.auth.AuthProtocolState r1 = cz.msebera.android.httpclient.auth.AuthProtocolState.FAILURE
            r0[r4] = r1
            cz.msebera.android.httpclient.auth.AuthProtocolState r1 = cz.msebera.android.httpclient.auth.AuthProtocolState.SUCCESS
            r0[r5] = r1
            cz.msebera.android.httpclient.auth.AuthProtocolState.$VALUES = r0
            return
    }

    AuthProtocolState(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static cz.msebera.android.httpclient.auth.AuthProtocolState valueOf(java.lang.String r1) {
            java.lang.Class<cz.msebera.android.httpclient.auth.AuthProtocolState> r0 = cz.msebera.android.httpclient.auth.AuthProtocolState.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            cz.msebera.android.httpclient.auth.AuthProtocolState r1 = (cz.msebera.android.httpclient.auth.AuthProtocolState) r1
            return r1
    }

    public static cz.msebera.android.httpclient.auth.AuthProtocolState[] values() {
            cz.msebera.android.httpclient.auth.AuthProtocolState[] r0 = cz.msebera.android.httpclient.auth.AuthProtocolState.$VALUES
            java.lang.Object r0 = r0.clone()
            cz.msebera.android.httpclient.auth.AuthProtocolState[] r0 = (cz.msebera.android.httpclient.auth.AuthProtocolState[]) r0
            return r0
    }
}
