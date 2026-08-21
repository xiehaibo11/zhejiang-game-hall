package cz.msebera.android.httpclient.impl.auth;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class NTLMScheme extends cz.msebera.android.httpclient.impl.auth.AuthSchemeBase {
    private java.lang.String challenge;
    private final cz.msebera.android.httpclient.impl.auth.NTLMEngine engine;
    private cz.msebera.android.httpclient.impl.auth.NTLMScheme.State state;

    enum State extends java.lang.Enum<cz.msebera.android.httpclient.impl.auth.NTLMScheme.State> {
        private static final cz.msebera.android.httpclient.impl.auth.NTLMScheme.State[] $VALUES = null;
        public static final cz.msebera.android.httpclient.impl.auth.NTLMScheme.State CHALLENGE_RECEIVED = null;
        public static final cz.msebera.android.httpclient.impl.auth.NTLMScheme.State FAILED = null;
        public static final cz.msebera.android.httpclient.impl.auth.NTLMScheme.State MSG_TYPE1_GENERATED = null;
        public static final cz.msebera.android.httpclient.impl.auth.NTLMScheme.State MSG_TYPE2_RECEVIED = null;
        public static final cz.msebera.android.httpclient.impl.auth.NTLMScheme.State MSG_TYPE3_GENERATED = null;
        public static final cz.msebera.android.httpclient.impl.auth.NTLMScheme.State UNINITIATED = null;

        static {
                cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r0 = new cz.msebera.android.httpclient.impl.auth.NTLMScheme$State
                r1 = 0
                java.lang.String r2 = "UNINITIATED"
                r0.<init>(r2, r1)
                cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.UNINITIATED = r0
                cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r0 = new cz.msebera.android.httpclient.impl.auth.NTLMScheme$State
                r2 = 1
                java.lang.String r3 = "CHALLENGE_RECEIVED"
                r0.<init>(r3, r2)
                cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.CHALLENGE_RECEIVED = r0
                cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r0 = new cz.msebera.android.httpclient.impl.auth.NTLMScheme$State
                r3 = 2
                java.lang.String r4 = "MSG_TYPE1_GENERATED"
                r0.<init>(r4, r3)
                cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.MSG_TYPE1_GENERATED = r0
                cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r0 = new cz.msebera.android.httpclient.impl.auth.NTLMScheme$State
                r4 = 3
                java.lang.String r5 = "MSG_TYPE2_RECEVIED"
                r0.<init>(r5, r4)
                cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.MSG_TYPE2_RECEVIED = r0
                cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r0 = new cz.msebera.android.httpclient.impl.auth.NTLMScheme$State
                r5 = 4
                java.lang.String r6 = "MSG_TYPE3_GENERATED"
                r0.<init>(r6, r5)
                cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.MSG_TYPE3_GENERATED = r0
                cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r0 = new cz.msebera.android.httpclient.impl.auth.NTLMScheme$State
                r6 = 5
                java.lang.String r7 = "FAILED"
                r0.<init>(r7, r6)
                cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.FAILED = r0
                r0 = 6
                cz.msebera.android.httpclient.impl.auth.NTLMScheme$State[] r0 = new cz.msebera.android.httpclient.impl.auth.NTLMScheme.State[r0]
                cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r7 = cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.UNINITIATED
                r0[r1] = r7
                cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r1 = cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.CHALLENGE_RECEIVED
                r0[r2] = r1
                cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r1 = cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.MSG_TYPE1_GENERATED
                r0[r3] = r1
                cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r1 = cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.MSG_TYPE2_RECEVIED
                r0[r4] = r1
                cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r1 = cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.MSG_TYPE3_GENERATED
                r0[r5] = r1
                cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r1 = cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.FAILED
                r0[r6] = r1
                cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.$VALUES = r0
                return
        }

        State(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static cz.msebera.android.httpclient.impl.auth.NTLMScheme.State valueOf(java.lang.String r1) {
                java.lang.Class<cz.msebera.android.httpclient.impl.auth.NTLMScheme$State> r0 = cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r1 = (cz.msebera.android.httpclient.impl.auth.NTLMScheme.State) r1
                return r1
        }

        public static cz.msebera.android.httpclient.impl.auth.NTLMScheme.State[] values() {
                cz.msebera.android.httpclient.impl.auth.NTLMScheme$State[] r0 = cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.$VALUES
                java.lang.Object r0 = r0.clone()
                cz.msebera.android.httpclient.impl.auth.NTLMScheme$State[] r0 = (cz.msebera.android.httpclient.impl.auth.NTLMScheme.State[]) r0
                return r0
        }
    }

    public NTLMScheme() {
            r1 = this;
            cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl r0 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl
            r0.<init>()
            r1.<init>(r0)
            return
    }

    public NTLMScheme(cz.msebera.android.httpclient.impl.auth.NTLMEngine r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "NTLM engine"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.engine = r2
            cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r2 = cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.UNINITIATED
            r1.state = r2
            r2 = 0
            r1.challenge = r2
            return
    }

    @Override
    public cz.msebera.android.httpclient.Header authenticate(cz.msebera.android.httpclient.auth.Credentials r8, cz.msebera.android.httpclient.HttpRequest r9) throws cz.msebera.android.httpclient.auth.AuthenticationException {
            r7 = this;
            cz.msebera.android.httpclient.auth.NTCredentials r8 = (cz.msebera.android.httpclient.auth.NTCredentials) r8     // Catch: java.lang.ClassCastException -> L8a
            cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r9 = r7.state
            cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r0 = cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.FAILED
            if (r9 == r0) goto L82
            cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r9 = r7.state
            cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r0 = cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.CHALLENGE_RECEIVED
            if (r9 != r0) goto L21
            cz.msebera.android.httpclient.impl.auth.NTLMEngine r9 = r7.engine
            java.lang.String r0 = r8.getDomain()
            java.lang.String r8 = r8.getWorkstation()
            java.lang.String r8 = r9.generateType1Msg(r0, r8)
            cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r9 = cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.MSG_TYPE1_GENERATED
            r7.state = r9
            goto L43
        L21:
            cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r9 = r7.state
            cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r0 = cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.MSG_TYPE2_RECEVIED
            if (r9 != r0) goto L69
            cz.msebera.android.httpclient.impl.auth.NTLMEngine r1 = r7.engine
            java.lang.String r2 = r8.getUserName()
            java.lang.String r3 = r8.getPassword()
            java.lang.String r4 = r8.getDomain()
            java.lang.String r5 = r8.getWorkstation()
            java.lang.String r6 = r7.challenge
            java.lang.String r8 = r1.generateType3Msg(r2, r3, r4, r5, r6)
            cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r9 = cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.MSG_TYPE3_GENERATED
            r7.state = r9
        L43:
            cz.msebera.android.httpclient.util.CharArrayBuffer r9 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            r0 = 32
            r9.<init>(r0)
            boolean r0 = r7.isProxy()
            if (r0 == 0) goto L56
            java.lang.String r0 = "Proxy-Authorization"
            r9.append(r0)
            goto L5b
        L56:
            java.lang.String r0 = "Authorization"
            r9.append(r0)
        L5b:
            java.lang.String r0 = ": NTLM "
            r9.append(r0)
            r9.append(r8)
            cz.msebera.android.httpclient.message.BufferedHeader r8 = new cz.msebera.android.httpclient.message.BufferedHeader
            r8.<init>(r9)
            return r8
        L69:
            cz.msebera.android.httpclient.auth.AuthenticationException r8 = new cz.msebera.android.httpclient.auth.AuthenticationException
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r0 = "Unexpected state: "
            r9.append(r0)
            cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r0 = r7.state
            r9.append(r0)
            java.lang.String r9 = r9.toString()
            r8.<init>(r9)
            throw r8
        L82:
            cz.msebera.android.httpclient.auth.AuthenticationException r8 = new cz.msebera.android.httpclient.auth.AuthenticationException
            java.lang.String r9 = "NTLM authentication failed"
            r8.<init>(r9)
            throw r8
        L8a:
            cz.msebera.android.httpclient.auth.InvalidCredentialsException r9 = new cz.msebera.android.httpclient.auth.InvalidCredentialsException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Credentials cannot be used for NTLM authentication: "
            r0.append(r1)
            java.lang.Class r8 = r8.getClass()
            java.lang.String r8 = r8.getName()
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            r9.<init>(r8)
            throw r9
    }

    @Override
    public java.lang.String getParameter(java.lang.String r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public java.lang.String getRealm() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String getSchemeName() {
            r1 = this;
            java.lang.String r0 = "ntlm"
            return r0
    }

    @Override
    public boolean isComplete() {
            r2 = this;
            cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r0 = r2.state
            cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r1 = cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.MSG_TYPE3_GENERATED
            if (r0 == r1) goto Lf
            cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r0 = r2.state
            cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r1 = cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.FAILED
            if (r0 != r1) goto Ld
            goto Lf
        Ld:
            r0 = 0
            goto L10
        Lf:
            r0 = 1
        L10:
            return r0
    }

    @Override
    public boolean isConnectionBased() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    protected void parseChallenge(cz.msebera.android.httpclient.util.CharArrayBuffer r1, int r2, int r3) throws cz.msebera.android.httpclient.auth.MalformedChallengeException {
            r0 = this;
            java.lang.String r1 = r1.substringTrimmed(r2, r3)
            r0.challenge = r1
            java.lang.String r1 = r0.challenge
            boolean r1 = r1.isEmpty()
            if (r1 == 0) goto L1e
            cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r1 = r0.state
            cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r2 = cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.UNINITIATED
            if (r1 != r2) goto L19
            cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r1 = cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.CHALLENGE_RECEIVED
            r0.state = r1
            goto L32
        L19:
            cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r1 = cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.FAILED
            r0.state = r1
            goto L32
        L1e:
            cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r1 = r0.state
            cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r2 = cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.MSG_TYPE1_GENERATED
            int r1 = r1.compareTo(r2)
            if (r1 < 0) goto L33
            cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r1 = r0.state
            cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r2 = cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.MSG_TYPE1_GENERATED
            if (r1 != r2) goto L32
            cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r1 = cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.MSG_TYPE2_RECEVIED
            r0.state = r1
        L32:
            return
        L33:
            cz.msebera.android.httpclient.impl.auth.NTLMScheme$State r1 = cz.msebera.android.httpclient.impl.auth.NTLMScheme.State.FAILED
            r0.state = r1
            cz.msebera.android.httpclient.auth.MalformedChallengeException r1 = new cz.msebera.android.httpclient.auth.MalformedChallengeException
            java.lang.String r2 = "Out of sequence NTLM response message"
            r1.<init>(r2)
            throw r1
    }
}
