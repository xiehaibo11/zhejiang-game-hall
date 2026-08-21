package cz.msebera.android.httpclient.auth;

public enum ChallengeState extends java.lang.Enum<cz.msebera.android.httpclient.auth.ChallengeState> {
    private static final cz.msebera.android.httpclient.auth.ChallengeState[] $VALUES = null;
    public static final cz.msebera.android.httpclient.auth.ChallengeState PROXY = null;
    public static final cz.msebera.android.httpclient.auth.ChallengeState TARGET = null;

    static {
            cz.msebera.android.httpclient.auth.ChallengeState r0 = new cz.msebera.android.httpclient.auth.ChallengeState
            r1 = 0
            java.lang.String r2 = "TARGET"
            r0.<init>(r2, r1)
            cz.msebera.android.httpclient.auth.ChallengeState.TARGET = r0
            cz.msebera.android.httpclient.auth.ChallengeState r0 = new cz.msebera.android.httpclient.auth.ChallengeState
            r2 = 1
            java.lang.String r3 = "PROXY"
            r0.<init>(r3, r2)
            cz.msebera.android.httpclient.auth.ChallengeState.PROXY = r0
            r0 = 2
            cz.msebera.android.httpclient.auth.ChallengeState[] r0 = new cz.msebera.android.httpclient.auth.ChallengeState[r0]
            cz.msebera.android.httpclient.auth.ChallengeState r3 = cz.msebera.android.httpclient.auth.ChallengeState.TARGET
            r0[r1] = r3
            cz.msebera.android.httpclient.auth.ChallengeState r1 = cz.msebera.android.httpclient.auth.ChallengeState.PROXY
            r0[r2] = r1
            cz.msebera.android.httpclient.auth.ChallengeState.$VALUES = r0
            return
    }

    ChallengeState(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static cz.msebera.android.httpclient.auth.ChallengeState valueOf(java.lang.String r1) {
            java.lang.Class<cz.msebera.android.httpclient.auth.ChallengeState> r0 = cz.msebera.android.httpclient.auth.ChallengeState.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            cz.msebera.android.httpclient.auth.ChallengeState r1 = (cz.msebera.android.httpclient.auth.ChallengeState) r1
            return r1
    }

    public static cz.msebera.android.httpclient.auth.ChallengeState[] values() {
            cz.msebera.android.httpclient.auth.ChallengeState[] r0 = cz.msebera.android.httpclient.auth.ChallengeState.$VALUES
            java.lang.Object r0 = r0.clone()
            cz.msebera.android.httpclient.auth.ChallengeState[] r0 = (cz.msebera.android.httpclient.auth.ChallengeState[]) r0
            return r0
    }
}
