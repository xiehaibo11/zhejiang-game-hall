package cz.msebera.android.httpclient.impl.auth;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
final class NTLMEngineImpl implements cz.msebera.android.httpclient.impl.auth.NTLMEngine {
    private static final java.nio.charset.Charset DEFAULT_CHARSET = null;
    protected static final int FLAG_DOMAIN_PRESENT = 4096;
    protected static final int FLAG_REQUEST_128BIT_KEY_EXCH = 536870912;
    protected static final int FLAG_REQUEST_56BIT_ENCRYPTION = Integer.MIN_VALUE;
    protected static final int FLAG_REQUEST_ALWAYS_SIGN = 32768;
    protected static final int FLAG_REQUEST_EXPLICIT_KEY_EXCH = 1073741824;
    protected static final int FLAG_REQUEST_LAN_MANAGER_KEY = 128;
    protected static final int FLAG_REQUEST_NTLM2_SESSION = 524288;
    protected static final int FLAG_REQUEST_NTLMv1 = 512;
    protected static final int FLAG_REQUEST_SEAL = 32;
    protected static final int FLAG_REQUEST_SIGN = 16;
    protected static final int FLAG_REQUEST_TARGET = 4;
    protected static final int FLAG_REQUEST_UNICODE_ENCODING = 1;
    protected static final int FLAG_REQUEST_VERSION = 33554432;
    protected static final int FLAG_TARGETINFO_PRESENT = 8388608;
    protected static final int FLAG_WORKSTATION_PRESENT = 8192;
    private static final java.security.SecureRandom RND_GEN = null;
    private static final byte[] SIGNATURE = null;
    private static final cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.Type1Message TYPE_1_MESSAGE = null;
    private static final java.nio.charset.Charset UNICODE_LITTLE_UNMARKED = null;

    protected static class CipherGen {
        protected final byte[] challenge;
        protected byte[] clientChallenge;
        protected byte[] clientChallenge2;
        protected final java.lang.String domain;
        protected byte[] lanManagerSessionKey;
        protected byte[] lm2SessionResponse;
        protected byte[] lmHash;
        protected byte[] lmResponse;
        protected byte[] lmUserSessionKey;
        protected byte[] lmv2Hash;
        protected byte[] lmv2Response;
        protected byte[] ntlm2SessionResponse;
        protected byte[] ntlm2SessionResponseUserSessionKey;
        protected byte[] ntlmHash;
        protected byte[] ntlmResponse;
        protected byte[] ntlmUserSessionKey;
        protected byte[] ntlmv2Blob;
        protected byte[] ntlmv2Hash;
        protected byte[] ntlmv2Response;
        protected byte[] ntlmv2UserSessionKey;
        protected final java.lang.String password;
        protected byte[] secondaryKey;
        protected final java.lang.String target;
        protected final byte[] targetInformation;
        protected byte[] timestamp;
        protected final java.lang.String user;

        public CipherGen(java.lang.String r12, java.lang.String r13, java.lang.String r14, byte[] r15, java.lang.String r16, byte[] r17) {
                r11 = this;
                r7 = 0
                r8 = 0
                r9 = 0
                r10 = 0
                r0 = r11
                r1 = r12
                r2 = r13
                r3 = r14
                r4 = r15
                r5 = r16
                r6 = r17
                r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
                return
        }

        public CipherGen(java.lang.String r2, java.lang.String r3, java.lang.String r4, byte[] r5, java.lang.String r6, byte[] r7, byte[] r8, byte[] r9, byte[] r10, byte[] r11) {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.lmHash = r0
                r1.lmResponse = r0
                r1.ntlmHash = r0
                r1.ntlmResponse = r0
                r1.ntlmv2Hash = r0
                r1.lmv2Hash = r0
                r1.lmv2Response = r0
                r1.ntlmv2Blob = r0
                r1.ntlmv2Response = r0
                r1.ntlm2SessionResponse = r0
                r1.lm2SessionResponse = r0
                r1.lmUserSessionKey = r0
                r1.ntlmUserSessionKey = r0
                r1.ntlmv2UserSessionKey = r0
                r1.ntlm2SessionResponseUserSessionKey = r0
                r1.lanManagerSessionKey = r0
                r1.domain = r2
                r1.target = r6
                r1.user = r3
                r1.password = r4
                r1.challenge = r5
                r1.targetInformation = r7
                r1.clientChallenge = r8
                r1.clientChallenge2 = r9
                r1.secondaryKey = r10
                r1.timestamp = r11
                return
        }

        public byte[] getClientChallenge() throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
                r1 = this;
                byte[] r0 = r1.clientChallenge
                if (r0 != 0) goto La
                byte[] r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$000()
                r1.clientChallenge = r0
            La:
                byte[] r0 = r1.clientChallenge
                return r0
        }

        public byte[] getClientChallenge2() throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
                r1 = this;
                byte[] r0 = r1.clientChallenge2
                if (r0 != 0) goto La
                byte[] r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$000()
                r1.clientChallenge2 = r0
            La:
                byte[] r0 = r1.clientChallenge2
                return r0
        }

        public byte[] getLM2SessionResponse() throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
                r4 = this;
                byte[] r0 = r4.lm2SessionResponse
                if (r0 != 0) goto L1c
                byte[] r0 = r4.getClientChallenge()
                r1 = 24
                byte[] r1 = new byte[r1]
                r4.lm2SessionResponse = r1
                byte[] r1 = r4.lm2SessionResponse
                int r2 = r0.length
                r3 = 0
                java.lang.System.arraycopy(r0, r3, r1, r3, r2)
                byte[] r1 = r4.lm2SessionResponse
                int r0 = r0.length
                int r2 = r1.length
                java.util.Arrays.fill(r1, r0, r2, r3)
            L1c:
                byte[] r0 = r4.lm2SessionResponse
                return r0
        }

        public byte[] getLMHash() throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
                r1 = this;
                byte[] r0 = r1.lmHash
                if (r0 != 0) goto Lc
                java.lang.String r0 = r1.password
                byte[] r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$200(r0)
                r1.lmHash = r0
            Lc:
                byte[] r0 = r1.lmHash
                return r0
        }

        public byte[] getLMResponse() throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
                r2 = this;
                byte[] r0 = r2.lmResponse
                if (r0 != 0) goto L10
                byte[] r0 = r2.getLMHash()
                byte[] r1 = r2.challenge
                byte[] r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$300(r0, r1)
                r2.lmResponse = r0
            L10:
                byte[] r0 = r2.lmResponse
                return r0
        }

        public byte[] getLMUserSessionKey() throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
                r5 = this;
                byte[] r0 = r5.lmUserSessionKey
                if (r0 != 0) goto L1b
                r0 = 16
                byte[] r1 = new byte[r0]
                r5.lmUserSessionKey = r1
                byte[] r1 = r5.getLMHash()
                byte[] r2 = r5.lmUserSessionKey
                r3 = 8
                r4 = 0
                java.lang.System.arraycopy(r1, r4, r2, r4, r3)
                byte[] r1 = r5.lmUserSessionKey
                java.util.Arrays.fill(r1, r3, r0, r4)
            L1b:
                byte[] r0 = r5.lmUserSessionKey
                return r0
        }

        public byte[] getLMv2Hash() throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
                r3 = this;
                byte[] r0 = r3.lmv2Hash
                if (r0 != 0) goto L12
                java.lang.String r0 = r3.domain
                java.lang.String r1 = r3.user
                byte[] r2 = r3.getNTLMHash()
                byte[] r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$500(r0, r1, r2)
                r3.lmv2Hash = r0
            L12:
                byte[] r0 = r3.lmv2Hash
                return r0
        }

        public byte[] getLMv2Response() throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
                r3 = this;
                byte[] r0 = r3.lmv2Response
                if (r0 != 0) goto L14
                byte[] r0 = r3.getLMv2Hash()
                byte[] r1 = r3.challenge
                byte[] r2 = r3.getClientChallenge()
                byte[] r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$800(r0, r1, r2)
                r3.lmv2Response = r0
            L14:
                byte[] r0 = r3.lmv2Response
                return r0
        }

        public byte[] getLanManagerSessionKey() throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
                r7 = this;
                java.lang.String r0 = "DES/ECB/NoPadding"
                byte[] r1 = r7.lanManagerSessionKey
                if (r1 != 0) goto L63
                r1 = 14
                byte[] r1 = new byte[r1]     // Catch: java.lang.Exception -> L58
                byte[] r2 = r7.getLMHash()     // Catch: java.lang.Exception -> L58
                r3 = 8
                r4 = 0
                java.lang.System.arraycopy(r2, r4, r1, r4, r3)     // Catch: java.lang.Exception -> L58
                int r2 = r1.length     // Catch: java.lang.Exception -> L58
                r5 = -67
                java.util.Arrays.fill(r1, r3, r2, r5)     // Catch: java.lang.Exception -> L58
                java.security.Key r2 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$900(r1, r4)     // Catch: java.lang.Exception -> L58
                r5 = 7
                java.security.Key r1 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$900(r1, r5)     // Catch: java.lang.Exception -> L58
                byte[] r3 = new byte[r3]     // Catch: java.lang.Exception -> L58
                byte[] r5 = r7.getLMResponse()     // Catch: java.lang.Exception -> L58
                int r6 = r3.length     // Catch: java.lang.Exception -> L58
                java.lang.System.arraycopy(r5, r4, r3, r4, r6)     // Catch: java.lang.Exception -> L58
                javax.crypto.Cipher r5 = javax.crypto.Cipher.getInstance(r0)     // Catch: java.lang.Exception -> L58
                r6 = 1
                r5.init(r6, r2)     // Catch: java.lang.Exception -> L58
                byte[] r2 = r5.doFinal(r3)     // Catch: java.lang.Exception -> L58
                javax.crypto.Cipher r0 = javax.crypto.Cipher.getInstance(r0)     // Catch: java.lang.Exception -> L58
                r0.init(r6, r1)     // Catch: java.lang.Exception -> L58
                byte[] r0 = r0.doFinal(r3)     // Catch: java.lang.Exception -> L58
                r1 = 16
                byte[] r1 = new byte[r1]     // Catch: java.lang.Exception -> L58
                r7.lanManagerSessionKey = r1     // Catch: java.lang.Exception -> L58
                byte[] r1 = r7.lanManagerSessionKey     // Catch: java.lang.Exception -> L58
                int r3 = r2.length     // Catch: java.lang.Exception -> L58
                java.lang.System.arraycopy(r2, r4, r1, r4, r3)     // Catch: java.lang.Exception -> L58
                byte[] r1 = r7.lanManagerSessionKey     // Catch: java.lang.Exception -> L58
                int r2 = r2.length     // Catch: java.lang.Exception -> L58
                int r3 = r0.length     // Catch: java.lang.Exception -> L58
                java.lang.System.arraycopy(r0, r4, r1, r2, r3)     // Catch: java.lang.Exception -> L58
                goto L63
            L58:
                r0 = move-exception
                cz.msebera.android.httpclient.impl.auth.NTLMEngineException r1 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineException
                java.lang.String r2 = r0.getMessage()
                r1.<init>(r2, r0)
                throw r1
            L63:
                byte[] r0 = r7.lanManagerSessionKey
                return r0
        }

        public byte[] getNTLM2SessionResponse() throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
                r3 = this;
                byte[] r0 = r3.ntlm2SessionResponse
                if (r0 != 0) goto L14
                byte[] r0 = r3.getNTLMHash()
                byte[] r1 = r3.challenge
                byte[] r2 = r3.getClientChallenge()
                byte[] r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.ntlm2SessionResponse(r0, r1, r2)
                r3.ntlm2SessionResponse = r0
            L14:
                byte[] r0 = r3.ntlm2SessionResponse
                return r0
        }

        public byte[] getNTLM2SessionResponseUserSessionKey() throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
                r5 = this;
                byte[] r0 = r5.ntlm2SessionResponseUserSessionKey
                if (r0 != 0) goto L25
                byte[] r0 = r5.getLM2SessionResponse()
                byte[] r1 = r5.challenge
                int r2 = r1.length
                int r3 = r0.length
                int r2 = r2 + r3
                byte[] r2 = new byte[r2]
                int r3 = r1.length
                r4 = 0
                java.lang.System.arraycopy(r1, r4, r2, r4, r3)
                byte[] r1 = r5.challenge
                int r1 = r1.length
                int r3 = r0.length
                java.lang.System.arraycopy(r0, r4, r2, r1, r3)
                byte[] r0 = r5.getNTLMUserSessionKey()
                byte[] r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.hmacMD5(r2, r0)
                r5.ntlm2SessionResponseUserSessionKey = r0
            L25:
                byte[] r0 = r5.ntlm2SessionResponseUserSessionKey
                return r0
        }

        public byte[] getNTLMHash() throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
                r1 = this;
                byte[] r0 = r1.ntlmHash
                if (r0 != 0) goto Lc
                java.lang.String r0 = r1.password
                byte[] r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$400(r0)
                r1.ntlmHash = r0
            Lc:
                byte[] r0 = r1.ntlmHash
                return r0
        }

        public byte[] getNTLMResponse() throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
                r2 = this;
                byte[] r0 = r2.ntlmResponse
                if (r0 != 0) goto L10
                byte[] r0 = r2.getNTLMHash()
                byte[] r1 = r2.challenge
                byte[] r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$300(r0, r1)
                r2.ntlmResponse = r0
            L10:
                byte[] r0 = r2.ntlmResponse
                return r0
        }

        public byte[] getNTLMUserSessionKey() throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
                r2 = this;
                byte[] r0 = r2.ntlmUserSessionKey
                if (r0 != 0) goto L16
                cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl$MD4 r0 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl$MD4
                r0.<init>()
                byte[] r1 = r2.getNTLMHash()
                r0.update(r1)
                byte[] r0 = r0.getOutput()
                r2.ntlmUserSessionKey = r0
            L16:
                byte[] r0 = r2.ntlmUserSessionKey
                return r0
        }

        public byte[] getNTLMv2Blob() throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
                r3 = this;
                byte[] r0 = r3.ntlmv2Blob
                if (r0 != 0) goto L14
                byte[] r0 = r3.getClientChallenge2()
                byte[] r1 = r3.targetInformation
                byte[] r2 = r3.getTimestamp()
                byte[] r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$700(r0, r1, r2)
                r3.ntlmv2Blob = r0
            L14:
                byte[] r0 = r3.ntlmv2Blob
                return r0
        }

        public byte[] getNTLMv2Hash() throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
                r3 = this;
                byte[] r0 = r3.ntlmv2Hash
                if (r0 != 0) goto L12
                java.lang.String r0 = r3.domain
                java.lang.String r1 = r3.user
                byte[] r2 = r3.getNTLMHash()
                byte[] r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$600(r0, r1, r2)
                r3.ntlmv2Hash = r0
            L12:
                byte[] r0 = r3.ntlmv2Hash
                return r0
        }

        public byte[] getNTLMv2Response() throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
                r3 = this;
                byte[] r0 = r3.ntlmv2Response
                if (r0 != 0) goto L14
                byte[] r0 = r3.getNTLMv2Hash()
                byte[] r1 = r3.challenge
                byte[] r2 = r3.getNTLMv2Blob()
                byte[] r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$800(r0, r1, r2)
                r3.ntlmv2Response = r0
            L14:
                byte[] r0 = r3.ntlmv2Response
                return r0
        }

        public byte[] getNTLMv2UserSessionKey() throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
                r5 = this;
                byte[] r0 = r5.ntlmv2UserSessionKey
                if (r0 != 0) goto L1a
                byte[] r0 = r5.getNTLMv2Hash()
                r1 = 16
                byte[] r2 = new byte[r1]
                byte[] r3 = r5.getNTLMv2Response()
                r4 = 0
                java.lang.System.arraycopy(r3, r4, r2, r4, r1)
                byte[] r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.hmacMD5(r2, r0)
                r5.ntlmv2UserSessionKey = r0
            L1a:
                byte[] r0 = r5.ntlmv2UserSessionKey
                return r0
        }

        public byte[] getSecondaryKey() throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
                r1 = this;
                byte[] r0 = r1.secondaryKey
                if (r0 != 0) goto La
                byte[] r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$100()
                r1.secondaryKey = r0
            La:
                byte[] r0 = r1.secondaryKey
                return r0
        }

        public byte[] getTimestamp() {
                r6 = this;
                byte[] r0 = r6.timestamp
                if (r0 != 0) goto L25
                long r0 = java.lang.System.currentTimeMillis()
                r2 = 11644473600000(0xa9730b66800, double:5.7531343696653E-311)
                long r0 = r0 + r2
                r2 = 10000(0x2710, double:4.9407E-320)
                long r0 = r0 * r2
                r2 = 8
                byte[] r3 = new byte[r2]
                r6.timestamp = r3
                r3 = 0
            L19:
                if (r3 >= r2) goto L25
                byte[] r4 = r6.timestamp
                int r5 = (int) r0
                byte r5 = (byte) r5
                r4[r3] = r5
                long r0 = r0 >>> r2
                int r3 = r3 + 1
                goto L19
            L25:
                byte[] r0 = r6.timestamp
                return r0
        }
    }

    static class HMACMD5 {
        protected byte[] ipad;
        protected java.security.MessageDigest md5;
        protected byte[] opad;

        HMACMD5(byte[] r8) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
                r7 = this;
                r7.<init>()
                java.lang.String r0 = "MD5"
                java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.lang.Exception -> L58
                r7.md5 = r0     // Catch: java.lang.Exception -> L58
                r0 = 64
                byte[] r1 = new byte[r0]
                r7.ipad = r1
                byte[] r1 = new byte[r0]
                r7.opad = r1
                int r1 = r8.length
                if (r1 <= r0) goto L24
                java.security.MessageDigest r1 = r7.md5
                r1.update(r8)
                java.security.MessageDigest r8 = r7.md5
                byte[] r8 = r8.digest()
                int r1 = r8.length
            L24:
                r2 = 0
            L25:
                r3 = 92
                r4 = 54
                if (r2 >= r1) goto L3e
                byte[] r5 = r7.ipad
                r6 = r8[r2]
                r4 = r4 ^ r6
                byte r4 = (byte) r4
                r5[r2] = r4
                byte[] r4 = r7.opad
                r5 = r8[r2]
                r3 = r3 ^ r5
                byte r3 = (byte) r3
                r4[r2] = r3
                int r2 = r2 + 1
                goto L25
            L3e:
                if (r2 >= r0) goto L4b
                byte[] r8 = r7.ipad
                r8[r2] = r4
                byte[] r8 = r7.opad
                r8[r2] = r3
                int r2 = r2 + 1
                goto L3e
            L4b:
                java.security.MessageDigest r8 = r7.md5
                r8.reset()
                java.security.MessageDigest r8 = r7.md5
                byte[] r0 = r7.ipad
                r8.update(r0)
                return
            L58:
                r8 = move-exception
                cz.msebera.android.httpclient.impl.auth.NTLMEngineException r0 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Error getting md5 message digest implementation: "
                r1.append(r2)
                java.lang.String r2 = r8.getMessage()
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.<init>(r1, r8)
                throw r0
        }

        byte[] getOutput() {
                r3 = this;
                java.security.MessageDigest r0 = r3.md5
                byte[] r0 = r0.digest()
                java.security.MessageDigest r1 = r3.md5
                byte[] r2 = r3.opad
                r1.update(r2)
                java.security.MessageDigest r1 = r3.md5
                byte[] r0 = r1.digest(r0)
                return r0
        }

        void update(byte[] r2) {
                r1 = this;
                java.security.MessageDigest r0 = r1.md5
                r0.update(r2)
                return
        }

        void update(byte[] r2, int r3, int r4) {
                r1 = this;
                java.security.MessageDigest r0 = r1.md5
                r0.update(r2, r3, r4)
                return
        }
    }

    static class MD4 {
        protected int A;
        protected int B;
        protected int C;
        protected int D;
        protected long count;
        protected byte[] dataBuffer;

        MD4() {
                r2 = this;
                r2.<init>()
                r0 = 1732584193(0x67452301, float:9.309519E23)
                r2.A = r0
                r0 = -271733879(0xffffffffefcdab89, float:-1.273036E29)
                r2.B = r0
                r0 = -1732584194(0xffffffff98badcfe, float:-4.830302E-24)
                r2.C = r0
                r0 = 271733878(0x10325476, float:3.5169377E-29)
                r2.D = r0
                r0 = 0
                r2.count = r0
                r0 = 64
                byte[] r0 = new byte[r0]
                r2.dataBuffer = r0
                return
        }

        byte[] getOutput() {
                r9 = this;
                long r0 = r9.count
                r2 = 63
                long r0 = r0 & r2
                int r1 = (int) r0
                r0 = 56
                if (r1 >= r0) goto Lc
                int r0 = r0 - r1
                goto Le
            Lc:
                int r0 = 120 - r1
            Le:
                int r1 = r0 + 8
                byte[] r1 = new byte[r1]
                r2 = -128(0xffffffffffffff80, float:NaN)
                r3 = 0
                r1[r3] = r2
                r2 = 0
            L18:
                r4 = 8
                if (r2 >= r4) goto L2e
                int r4 = r0 + r2
                long r5 = r9.count
                r7 = 8
                long r5 = r5 * r7
                int r7 = r2 * 8
                long r5 = r5 >>> r7
                int r6 = (int) r5
                byte r5 = (byte) r6
                r1[r4] = r5
                int r2 = r2 + 1
                goto L18
            L2e:
                r9.update(r1)
                r0 = 16
                byte[] r0 = new byte[r0]
                int r1 = r9.A
                cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.writeULong(r0, r1, r3)
                int r1 = r9.B
                r2 = 4
                cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.writeULong(r0, r1, r2)
                int r1 = r9.C
                cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.writeULong(r0, r1, r4)
                int r1 = r9.D
                r2 = 12
                cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.writeULong(r0, r1, r2)
                return r0
        }

        protected void processBuffer() {
                r7 = this;
                r0 = 16
                int[] r1 = new int[r0]
                r2 = 0
            L5:
                if (r2 >= r0) goto L2e
                byte[] r3 = r7.dataBuffer
                int r4 = r2 * 4
                r5 = r3[r4]
                r5 = r5 & 255(0xff, float:3.57E-43)
                int r6 = r4 + 1
                r6 = r3[r6]
                r6 = r6 & 255(0xff, float:3.57E-43)
                int r6 = r6 << 8
                int r5 = r5 + r6
                int r6 = r4 + 2
                r6 = r3[r6]
                r6 = r6 & 255(0xff, float:3.57E-43)
                int r6 = r6 << r0
                int r5 = r5 + r6
                int r4 = r4 + 3
                r3 = r3[r4]
                r3 = r3 & 255(0xff, float:3.57E-43)
                int r3 = r3 << 24
                int r5 = r5 + r3
                r1[r2] = r5
                int r2 = r2 + 1
                goto L5
            L2e:
                int r0 = r7.A
                int r2 = r7.B
                int r3 = r7.C
                int r4 = r7.D
                r7.round1(r1)
                r7.round2(r1)
                r7.round3(r1)
                int r1 = r7.A
                int r1 = r1 + r0
                r7.A = r1
                int r0 = r7.B
                int r0 = r0 + r2
                r7.B = r0
                int r0 = r7.C
                int r0 = r0 + r3
                r7.C = r0
                int r0 = r7.D
                int r0 = r0 + r4
                r7.D = r0
                return
        }

        protected void round1(int[] r9) {
                r8 = this;
                int r0 = r8.A
                int r1 = r8.B
                int r2 = r8.C
                int r3 = r8.D
                int r1 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.F(r1, r2, r3)
                int r0 = r0 + r1
                r1 = 0
                r1 = r9[r1]
                int r0 = r0 + r1
                r1 = 3
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r1)
                r8.A = r0
                int r0 = r8.D
                int r2 = r8.A
                int r3 = r8.B
                int r4 = r8.C
                int r2 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.F(r2, r3, r4)
                int r0 = r0 + r2
                r2 = 1
                r2 = r9[r2]
                int r0 = r0 + r2
                r2 = 7
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r2)
                r8.D = r0
                int r0 = r8.C
                int r3 = r8.D
                int r4 = r8.A
                int r5 = r8.B
                int r3 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.F(r3, r4, r5)
                int r0 = r0 + r3
                r3 = 2
                r3 = r9[r3]
                int r0 = r0 + r3
                r3 = 11
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r3)
                r8.C = r0
                int r0 = r8.B
                int r4 = r8.C
                int r5 = r8.D
                int r6 = r8.A
                int r4 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.F(r4, r5, r6)
                int r0 = r0 + r4
                r4 = r9[r1]
                int r0 = r0 + r4
                r4 = 19
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r4)
                r8.B = r0
                int r0 = r8.A
                int r5 = r8.B
                int r6 = r8.C
                int r7 = r8.D
                int r5 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.F(r5, r6, r7)
                int r0 = r0 + r5
                r5 = 4
                r5 = r9[r5]
                int r0 = r0 + r5
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r1)
                r8.A = r0
                int r0 = r8.D
                int r5 = r8.A
                int r6 = r8.B
                int r7 = r8.C
                int r5 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.F(r5, r6, r7)
                int r0 = r0 + r5
                r5 = 5
                r5 = r9[r5]
                int r0 = r0 + r5
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r2)
                r8.D = r0
                int r0 = r8.C
                int r5 = r8.D
                int r6 = r8.A
                int r7 = r8.B
                int r5 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.F(r5, r6, r7)
                int r0 = r0 + r5
                r5 = 6
                r5 = r9[r5]
                int r0 = r0 + r5
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r3)
                r8.C = r0
                int r0 = r8.B
                int r5 = r8.C
                int r6 = r8.D
                int r7 = r8.A
                int r5 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.F(r5, r6, r7)
                int r0 = r0 + r5
                r5 = r9[r2]
                int r0 = r0 + r5
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r4)
                r8.B = r0
                int r0 = r8.A
                int r5 = r8.B
                int r6 = r8.C
                int r7 = r8.D
                int r5 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.F(r5, r6, r7)
                int r0 = r0 + r5
                r5 = 8
                r5 = r9[r5]
                int r0 = r0 + r5
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r1)
                r8.A = r0
                int r0 = r8.D
                int r5 = r8.A
                int r6 = r8.B
                int r7 = r8.C
                int r5 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.F(r5, r6, r7)
                int r0 = r0 + r5
                r5 = 9
                r5 = r9[r5]
                int r0 = r0 + r5
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r2)
                r8.D = r0
                int r0 = r8.C
                int r5 = r8.D
                int r6 = r8.A
                int r7 = r8.B
                int r5 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.F(r5, r6, r7)
                int r0 = r0 + r5
                r5 = 10
                r5 = r9[r5]
                int r0 = r0 + r5
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r3)
                r8.C = r0
                int r0 = r8.B
                int r5 = r8.C
                int r6 = r8.D
                int r7 = r8.A
                int r5 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.F(r5, r6, r7)
                int r0 = r0 + r5
                r5 = r9[r3]
                int r0 = r0 + r5
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r4)
                r8.B = r0
                int r0 = r8.A
                int r5 = r8.B
                int r6 = r8.C
                int r7 = r8.D
                int r5 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.F(r5, r6, r7)
                int r0 = r0 + r5
                r5 = 12
                r5 = r9[r5]
                int r0 = r0 + r5
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r1)
                r8.A = r0
                int r0 = r8.D
                int r1 = r8.A
                int r5 = r8.B
                int r6 = r8.C
                int r1 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.F(r1, r5, r6)
                int r0 = r0 + r1
                r1 = 13
                r1 = r9[r1]
                int r0 = r0 + r1
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r2)
                r8.D = r0
                int r0 = r8.C
                int r1 = r8.D
                int r2 = r8.A
                int r5 = r8.B
                int r1 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.F(r1, r2, r5)
                int r0 = r0 + r1
                r1 = 14
                r1 = r9[r1]
                int r0 = r0 + r1
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r3)
                r8.C = r0
                int r0 = r8.B
                int r1 = r8.C
                int r2 = r8.D
                int r3 = r8.A
                int r1 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.F(r1, r2, r3)
                int r0 = r0 + r1
                r1 = 15
                r9 = r9[r1]
                int r0 = r0 + r9
                int r9 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r4)
                r8.B = r9
                return
        }

        protected void round2(int[] r10) {
                r9 = this;
                int r0 = r9.A
                int r1 = r9.B
                int r2 = r9.C
                int r3 = r9.D
                int r1 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.G(r1, r2, r3)
                int r0 = r0 + r1
                r1 = 0
                r1 = r10[r1]
                int r0 = r0 + r1
                r1 = 1518500249(0x5a827999, float:1.8362723E16)
                int r0 = r0 + r1
                r2 = 3
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r2)
                r9.A = r0
                int r0 = r9.D
                int r3 = r9.A
                int r4 = r9.B
                int r5 = r9.C
                int r3 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.G(r3, r4, r5)
                int r0 = r0 + r3
                r3 = 4
                r3 = r10[r3]
                int r0 = r0 + r3
                int r0 = r0 + r1
                r3 = 5
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r3)
                r9.D = r0
                int r0 = r9.C
                int r4 = r9.D
                int r5 = r9.A
                int r6 = r9.B
                int r4 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.G(r4, r5, r6)
                int r0 = r0 + r4
                r4 = 8
                r4 = r10[r4]
                int r0 = r0 + r4
                int r0 = r0 + r1
                r4 = 9
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r4)
                r9.C = r0
                int r0 = r9.B
                int r5 = r9.C
                int r6 = r9.D
                int r7 = r9.A
                int r5 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.G(r5, r6, r7)
                int r0 = r0 + r5
                r5 = 12
                r5 = r10[r5]
                int r0 = r0 + r5
                int r0 = r0 + r1
                r5 = 13
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r5)
                r9.B = r0
                int r0 = r9.A
                int r6 = r9.B
                int r7 = r9.C
                int r8 = r9.D
                int r6 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.G(r6, r7, r8)
                int r0 = r0 + r6
                r6 = 1
                r6 = r10[r6]
                int r0 = r0 + r6
                int r0 = r0 + r1
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r2)
                r9.A = r0
                int r0 = r9.D
                int r6 = r9.A
                int r7 = r9.B
                int r8 = r9.C
                int r6 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.G(r6, r7, r8)
                int r0 = r0 + r6
                r6 = r10[r3]
                int r0 = r0 + r6
                int r0 = r0 + r1
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r3)
                r9.D = r0
                int r0 = r9.C
                int r6 = r9.D
                int r7 = r9.A
                int r8 = r9.B
                int r6 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.G(r6, r7, r8)
                int r0 = r0 + r6
                r6 = r10[r4]
                int r0 = r0 + r6
                int r0 = r0 + r1
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r4)
                r9.C = r0
                int r0 = r9.B
                int r6 = r9.C
                int r7 = r9.D
                int r8 = r9.A
                int r6 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.G(r6, r7, r8)
                int r0 = r0 + r6
                r6 = r10[r5]
                int r0 = r0 + r6
                int r0 = r0 + r1
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r5)
                r9.B = r0
                int r0 = r9.A
                int r6 = r9.B
                int r7 = r9.C
                int r8 = r9.D
                int r6 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.G(r6, r7, r8)
                int r0 = r0 + r6
                r6 = 2
                r6 = r10[r6]
                int r0 = r0 + r6
                int r0 = r0 + r1
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r2)
                r9.A = r0
                int r0 = r9.D
                int r6 = r9.A
                int r7 = r9.B
                int r8 = r9.C
                int r6 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.G(r6, r7, r8)
                int r0 = r0 + r6
                r6 = 6
                r6 = r10[r6]
                int r0 = r0 + r6
                int r0 = r0 + r1
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r3)
                r9.D = r0
                int r0 = r9.C
                int r6 = r9.D
                int r7 = r9.A
                int r8 = r9.B
                int r6 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.G(r6, r7, r8)
                int r0 = r0 + r6
                r6 = 10
                r6 = r10[r6]
                int r0 = r0 + r6
                int r0 = r0 + r1
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r4)
                r9.C = r0
                int r0 = r9.B
                int r6 = r9.C
                int r7 = r9.D
                int r8 = r9.A
                int r6 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.G(r6, r7, r8)
                int r0 = r0 + r6
                r6 = 14
                r6 = r10[r6]
                int r0 = r0 + r6
                int r0 = r0 + r1
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r5)
                r9.B = r0
                int r0 = r9.A
                int r6 = r9.B
                int r7 = r9.C
                int r8 = r9.D
                int r6 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.G(r6, r7, r8)
                int r0 = r0 + r6
                r6 = r10[r2]
                int r0 = r0 + r6
                int r0 = r0 + r1
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r2)
                r9.A = r0
                int r0 = r9.D
                int r2 = r9.A
                int r6 = r9.B
                int r7 = r9.C
                int r2 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.G(r2, r6, r7)
                int r0 = r0 + r2
                r2 = 7
                r2 = r10[r2]
                int r0 = r0 + r2
                int r0 = r0 + r1
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r3)
                r9.D = r0
                int r0 = r9.C
                int r2 = r9.D
                int r3 = r9.A
                int r6 = r9.B
                int r2 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.G(r2, r3, r6)
                int r0 = r0 + r2
                r2 = 11
                r2 = r10[r2]
                int r0 = r0 + r2
                int r0 = r0 + r1
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r4)
                r9.C = r0
                int r0 = r9.B
                int r2 = r9.C
                int r3 = r9.D
                int r4 = r9.A
                int r2 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.G(r2, r3, r4)
                int r0 = r0 + r2
                r2 = 15
                r10 = r10[r2]
                int r0 = r0 + r10
                int r0 = r0 + r1
                int r10 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r5)
                r9.B = r10
                return
        }

        protected void round3(int[] r10) {
                r9 = this;
                int r0 = r9.A
                int r1 = r9.B
                int r2 = r9.C
                int r3 = r9.D
                int r1 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.H(r1, r2, r3)
                int r0 = r0 + r1
                r1 = 0
                r1 = r10[r1]
                int r0 = r0 + r1
                r1 = 1859775393(0x6ed9eba1, float:3.3721552E28)
                int r0 = r0 + r1
                r2 = 3
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r2)
                r9.A = r0
                int r0 = r9.D
                int r3 = r9.A
                int r4 = r9.B
                int r5 = r9.C
                int r3 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.H(r3, r4, r5)
                int r0 = r0 + r3
                r3 = 8
                r3 = r10[r3]
                int r0 = r0 + r3
                int r0 = r0 + r1
                r3 = 9
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r3)
                r9.D = r0
                int r0 = r9.C
                int r4 = r9.D
                int r5 = r9.A
                int r6 = r9.B
                int r4 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.H(r4, r5, r6)
                int r0 = r0 + r4
                r4 = 4
                r4 = r10[r4]
                int r0 = r0 + r4
                int r0 = r0 + r1
                r4 = 11
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r4)
                r9.C = r0
                int r0 = r9.B
                int r5 = r9.C
                int r6 = r9.D
                int r7 = r9.A
                int r5 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.H(r5, r6, r7)
                int r0 = r0 + r5
                r5 = 12
                r5 = r10[r5]
                int r0 = r0 + r5
                int r0 = r0 + r1
                r5 = 15
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r5)
                r9.B = r0
                int r0 = r9.A
                int r6 = r9.B
                int r7 = r9.C
                int r8 = r9.D
                int r6 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.H(r6, r7, r8)
                int r0 = r0 + r6
                r6 = 2
                r6 = r10[r6]
                int r0 = r0 + r6
                int r0 = r0 + r1
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r2)
                r9.A = r0
                int r0 = r9.D
                int r6 = r9.A
                int r7 = r9.B
                int r8 = r9.C
                int r6 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.H(r6, r7, r8)
                int r0 = r0 + r6
                r6 = 10
                r6 = r10[r6]
                int r0 = r0 + r6
                int r0 = r0 + r1
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r3)
                r9.D = r0
                int r0 = r9.C
                int r6 = r9.D
                int r7 = r9.A
                int r8 = r9.B
                int r6 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.H(r6, r7, r8)
                int r0 = r0 + r6
                r6 = 6
                r6 = r10[r6]
                int r0 = r0 + r6
                int r0 = r0 + r1
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r4)
                r9.C = r0
                int r0 = r9.B
                int r6 = r9.C
                int r7 = r9.D
                int r8 = r9.A
                int r6 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.H(r6, r7, r8)
                int r0 = r0 + r6
                r6 = 14
                r6 = r10[r6]
                int r0 = r0 + r6
                int r0 = r0 + r1
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r5)
                r9.B = r0
                int r0 = r9.A
                int r6 = r9.B
                int r7 = r9.C
                int r8 = r9.D
                int r6 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.H(r6, r7, r8)
                int r0 = r0 + r6
                r6 = 1
                r6 = r10[r6]
                int r0 = r0 + r6
                int r0 = r0 + r1
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r2)
                r9.A = r0
                int r0 = r9.D
                int r6 = r9.A
                int r7 = r9.B
                int r8 = r9.C
                int r6 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.H(r6, r7, r8)
                int r0 = r0 + r6
                r6 = r10[r3]
                int r0 = r0 + r6
                int r0 = r0 + r1
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r3)
                r9.D = r0
                int r0 = r9.C
                int r6 = r9.D
                int r7 = r9.A
                int r8 = r9.B
                int r6 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.H(r6, r7, r8)
                int r0 = r0 + r6
                r6 = 5
                r6 = r10[r6]
                int r0 = r0 + r6
                int r0 = r0 + r1
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r4)
                r9.C = r0
                int r0 = r9.B
                int r6 = r9.C
                int r7 = r9.D
                int r8 = r9.A
                int r6 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.H(r6, r7, r8)
                int r0 = r0 + r6
                r6 = 13
                r6 = r10[r6]
                int r0 = r0 + r6
                int r0 = r0 + r1
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r5)
                r9.B = r0
                int r0 = r9.A
                int r6 = r9.B
                int r7 = r9.C
                int r8 = r9.D
                int r6 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.H(r6, r7, r8)
                int r0 = r0 + r6
                r6 = r10[r2]
                int r0 = r0 + r6
                int r0 = r0 + r1
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r2)
                r9.A = r0
                int r0 = r9.D
                int r2 = r9.A
                int r6 = r9.B
                int r7 = r9.C
                int r2 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.H(r2, r6, r7)
                int r0 = r0 + r2
                r2 = r10[r4]
                int r0 = r0 + r2
                int r0 = r0 + r1
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r3)
                r9.D = r0
                int r0 = r9.C
                int r2 = r9.D
                int r3 = r9.A
                int r6 = r9.B
                int r2 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.H(r2, r3, r6)
                int r0 = r0 + r2
                r2 = 7
                r2 = r10[r2]
                int r0 = r0 + r2
                int r0 = r0 + r1
                int r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r4)
                r9.C = r0
                int r0 = r9.B
                int r2 = r9.C
                int r3 = r9.D
                int r4 = r9.A
                int r2 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.H(r2, r3, r4)
                int r0 = r0 + r2
                r10 = r10[r5]
                int r0 = r0 + r10
                int r0 = r0 + r1
                int r10 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.rotintlft(r0, r5)
                r9.B = r10
                return
        }

        void update(byte[] r9) {
                r8 = this;
                long r0 = r8.count
                r2 = 63
                long r0 = r0 & r2
                int r1 = (int) r0
                r0 = 0
                r2 = r1
                r1 = 0
            L9:
                int r3 = r9.length
                int r3 = r3 - r1
                int r3 = r3 + r2
                byte[] r4 = r8.dataBuffer
                int r5 = r4.length
                if (r3 < r5) goto L22
                int r3 = r4.length
                int r3 = r3 - r2
                java.lang.System.arraycopy(r9, r1, r4, r2, r3)
                long r4 = r8.count
                long r6 = (long) r3
                long r4 = r4 + r6
                r8.count = r4
                int r1 = r1 + r3
                r8.processBuffer()
                r2 = 0
                goto L9
            L22:
                int r0 = r9.length
                if (r1 >= r0) goto L30
                int r0 = r9.length
                int r0 = r0 - r1
                java.lang.System.arraycopy(r9, r1, r4, r2, r0)
                long r1 = r8.count
                long r3 = (long) r0
                long r1 = r1 + r3
                r8.count = r1
            L30:
                return
        }
    }

    static class NTLMMessage {
        private int currentOutputPosition;
        private byte[] messageContents;

        NTLMMessage() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.messageContents = r0
                r0 = 0
                r1.currentOutputPosition = r0
                return
        }

        NTLMMessage(java.lang.String r4, int r5) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
                r3 = this;
                r3.<init>()
                r0 = 0
                r3.messageContents = r0
                r0 = 0
                r3.currentOutputPosition = r0
                java.nio.charset.Charset r1 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$1000()
                byte[] r4 = r4.getBytes(r1)
                r1 = 2
                byte[] r4 = cz.msebera.android.httpclient.extras.Base64.decode(r4, r1)
                r3.messageContents = r4
                byte[] r4 = r3.messageContents
                int r4 = r4.length
                byte[] r1 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$1100()
                int r1 = r1.length
                if (r4 < r1) goto L78
            L22:
                byte[] r4 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$1100()
                int r4 = r4.length
                if (r0 >= r4) goto L40
                byte[] r4 = r3.messageContents
                r4 = r4[r0]
                byte[] r1 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$1100()
                r1 = r1[r0]
                if (r4 != r1) goto L38
                int r0 = r0 + 1
                goto L22
            L38:
                cz.msebera.android.httpclient.impl.auth.NTLMEngineException r4 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineException
                java.lang.String r5 = "NTLM message expected - instead got unrecognized bytes"
                r4.<init>(r5)
                throw r4
            L40:
                byte[] r4 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$1100()
                int r4 = r4.length
                int r4 = r3.readULong(r4)
                if (r4 != r5) goto L51
                byte[] r4 = r3.messageContents
                int r4 = r4.length
                r3.currentOutputPosition = r4
                return
            L51:
                cz.msebera.android.httpclient.impl.auth.NTLMEngineException r0 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "NTLM type "
                r1.append(r2)
                java.lang.String r5 = java.lang.Integer.toString(r5)
                r1.append(r5)
                java.lang.String r5 = " message expected - instead got type "
                r1.append(r5)
                java.lang.String r4 = java.lang.Integer.toString(r4)
                r1.append(r4)
                java.lang.String r4 = r1.toString()
                r0.<init>(r4)
                throw r0
            L78:
                cz.msebera.android.httpclient.impl.auth.NTLMEngineException r4 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineException
                java.lang.String r5 = "NTLM message decoding error - packet too short"
                r4.<init>(r5)
                throw r4
        }

        protected void addByte(byte r3) {
                r2 = this;
                byte[] r0 = r2.messageContents
                int r1 = r2.currentOutputPosition
                r0[r1] = r3
                int r1 = r1 + 1
                r2.currentOutputPosition = r1
                return
        }

        protected void addBytes(byte[] r6) {
                r5 = this;
                if (r6 != 0) goto L3
                return
            L3:
                int r0 = r6.length
                r1 = 0
            L5:
                if (r1 >= r0) goto L16
                r2 = r6[r1]
                byte[] r3 = r5.messageContents
                int r4 = r5.currentOutputPosition
                r3[r4] = r2
                int r4 = r4 + 1
                r5.currentOutputPosition = r4
                int r1 = r1 + 1
                goto L5
            L16:
                return
        }

        protected void addULong(int r2) {
                r1 = this;
                r0 = r2 & 255(0xff, float:3.57E-43)
                byte r0 = (byte) r0
                r1.addByte(r0)
                int r0 = r2 >> 8
                r0 = r0 & 255(0xff, float:3.57E-43)
                byte r0 = (byte) r0
                r1.addByte(r0)
                int r0 = r2 >> 16
                r0 = r0 & 255(0xff, float:3.57E-43)
                byte r0 = (byte) r0
                r1.addByte(r0)
                int r2 = r2 >> 24
                r2 = r2 & 255(0xff, float:3.57E-43)
                byte r2 = (byte) r2
                r1.addByte(r2)
                return
        }

        protected void addUShort(int r2) {
                r1 = this;
                r0 = r2 & 255(0xff, float:3.57E-43)
                byte r0 = (byte) r0
                r1.addByte(r0)
                int r2 = r2 >> 8
                r2 = r2 & 255(0xff, float:3.57E-43)
                byte r2 = (byte) r2
                r1.addByte(r2)
                return
        }

        protected int getMessageLength() {
                r1 = this;
                int r0 = r1.currentOutputPosition
                return r0
        }

        protected int getPreambleLength() {
                r1 = this;
                byte[] r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$1100()
                int r0 = r0.length
                int r0 = r0 + 4
                return r0
        }

        java.lang.String getResponse() {
                r4 = this;
                byte[] r0 = r4.messageContents
                int r1 = r0.length
                int r2 = r4.currentOutputPosition
                if (r1 <= r2) goto Le
                byte[] r1 = new byte[r2]
                r3 = 0
                java.lang.System.arraycopy(r0, r3, r1, r3, r2)
                r0 = r1
            Le:
                r1 = 2
                byte[] r0 = cz.msebera.android.httpclient.extras.Base64.encode(r0, r1)
                java.lang.String r0 = cz.msebera.android.httpclient.util.EncodingUtils.getAsciiString(r0)
                return r0
        }

        protected void prepareResponse(int r1, int r2) {
                r0 = this;
                byte[] r1 = new byte[r1]
                r0.messageContents = r1
                r1 = 0
                r0.currentOutputPosition = r1
                byte[] r1 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$1100()
                r0.addBytes(r1)
                r0.addULong(r2)
                return
        }

        protected byte readByte(int r4) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
                r3 = this;
                byte[] r0 = r3.messageContents
                int r1 = r0.length
                int r2 = r4 + 1
                if (r1 < r2) goto La
                r4 = r0[r4]
                return r4
            La:
                cz.msebera.android.httpclient.impl.auth.NTLMEngineException r4 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineException
                java.lang.String r0 = "NTLM: Message too short"
                r4.<init>(r0)
                throw r4
        }

        protected void readBytes(byte[] r4, int r5) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
                r3 = this;
                byte[] r0 = r3.messageContents
                int r1 = r0.length
                int r2 = r4.length
                int r2 = r2 + r5
                if (r1 < r2) goto Ld
                r1 = 0
                int r2 = r4.length
                java.lang.System.arraycopy(r0, r5, r4, r1, r2)
                return
            Ld:
                cz.msebera.android.httpclient.impl.auth.NTLMEngineException r4 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineException
                java.lang.String r5 = "NTLM: Message too short"
                r4.<init>(r5)
                throw r4
        }

        protected byte[] readSecurityBuffer(int r2) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
                r1 = this;
                byte[] r0 = r1.messageContents
                byte[] r2 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$1400(r0, r2)
                return r2
        }

        protected int readULong(int r2) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
                r1 = this;
                byte[] r0 = r1.messageContents
                int r2 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$1300(r0, r2)
                return r2
        }

        protected int readUShort(int r2) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
                r1 = this;
                byte[] r0 = r1.messageContents
                int r2 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$1200(r0, r2)
                return r2
        }
    }

    static class Type1Message extends cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.NTLMMessage {
        private final byte[] domainBytes;
        private final byte[] hostBytes;

        Type1Message() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.hostBytes = r0
                r1.domainBytes = r0
                return
        }

        Type1Message(java.lang.String r3, java.lang.String r4) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
                r2 = this;
                r2.<init>()
                java.nio.charset.Charset r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$1500()
                if (r0 == 0) goto L33
                java.lang.String r4 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$1600(r4)
                java.lang.String r3 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$1700(r3)
                r0 = 0
                if (r4 == 0) goto L1d
                java.nio.charset.Charset r1 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$1500()
                byte[] r4 = r4.getBytes(r1)
                goto L1e
            L1d:
                r4 = r0
            L1e:
                r2.hostBytes = r4
                if (r3 == 0) goto L30
                java.util.Locale r4 = java.util.Locale.ROOT
                java.lang.String r3 = r3.toUpperCase(r4)
                java.nio.charset.Charset r4 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$1500()
                byte[] r0 = r3.getBytes(r4)
            L30:
                r2.domainBytes = r0
                return
            L33:
                cz.msebera.android.httpclient.impl.auth.NTLMEngineException r3 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineException
                java.lang.String r4 = "Unicode not supported"
                r3.<init>(r4)
                throw r3
        }

        @Override
        java.lang.String getResponse() {
                r2 = this;
                r0 = 40
                r1 = 1
                r2.prepareResponse(r0, r1)
                r1 = -1576500735(0xffffffffa2088201, float:-1.850026E-18)
                r2.addULong(r1)
                r1 = 0
                r2.addUShort(r1)
                r2.addUShort(r1)
                r2.addULong(r0)
                r2.addUShort(r1)
                r2.addUShort(r1)
                r2.addULong(r0)
                r0 = 261(0x105, float:3.66E-43)
                r2.addUShort(r0)
                r0 = 2600(0xa28, float:3.643E-42)
                r2.addULong(r0)
                r0 = 3840(0xf00, float:5.381E-42)
                r2.addUShort(r0)
                byte[] r0 = r2.hostBytes
                if (r0 == 0) goto L35
                r2.addBytes(r0)
            L35:
                byte[] r0 = r2.domainBytes
                if (r0 == 0) goto L3c
                r2.addBytes(r0)
            L3c:
                java.lang.String r0 = super.getResponse()
                return r0
        }
    }

    static class Type2Message extends cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.NTLMMessage {
        protected byte[] challenge;
        protected int flags;
        protected java.lang.String target;
        protected byte[] targetInfo;

        Type2Message(java.lang.String r4) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
                r3 = this;
                r0 = 2
                r3.<init>(r4, r0)
                r4 = 8
                byte[] r4 = new byte[r4]
                r3.challenge = r4
                byte[] r4 = r3.challenge
                r0 = 24
                r3.readBytes(r4, r0)
                r4 = 20
                int r0 = r3.readULong(r4)
                r3.flags = r0
                int r0 = r3.flags
                r0 = r0 & 1
                if (r0 == 0) goto L5c
                r0 = 0
                r3.target = r0
                int r1 = r3.getMessageLength()
                if (r1 < r4) goto L46
                r4 = 12
                byte[] r4 = r3.readSecurityBuffer(r4)
                int r1 = r4.length
                if (r1 == 0) goto L46
                java.lang.String r1 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> L3b
                java.lang.String r2 = "UnicodeLittleUnmarked"
                r1.<init>(r4, r2)     // Catch: java.io.UnsupportedEncodingException -> L3b
                r3.target = r1     // Catch: java.io.UnsupportedEncodingException -> L3b
                goto L46
            L3b:
                r4 = move-exception
                cz.msebera.android.httpclient.impl.auth.NTLMEngineException r0 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineException
                java.lang.String r1 = r4.getMessage()
                r0.<init>(r1, r4)
                throw r0
            L46:
                r3.targetInfo = r0
                int r4 = r3.getMessageLength()
                r0 = 48
                if (r4 < r0) goto L5b
                r4 = 40
                byte[] r4 = r3.readSecurityBuffer(r4)
                int r0 = r4.length
                if (r0 == 0) goto L5b
                r3.targetInfo = r4
            L5b:
                return
            L5c:
                cz.msebera.android.httpclient.impl.auth.NTLMEngineException r4 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "NTLM type 2 message indicates no support for Unicode. Flags are: "
                r0.append(r1)
                int r1 = r3.flags
                java.lang.String r1 = java.lang.Integer.toString(r1)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                r4.<init>(r0)
                throw r4
        }

        byte[] getChallenge() {
                r1 = this;
                byte[] r0 = r1.challenge
                return r0
        }

        int getFlags() {
                r1 = this;
                int r0 = r1.flags
                return r0
        }

        java.lang.String getTarget() {
                r1 = this;
                java.lang.String r0 = r1.target
                return r0
        }

        byte[] getTargetInfo() {
                r1 = this;
                byte[] r0 = r1.targetInfo
                return r0
        }
    }

    static class Type3Message extends cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.NTLMMessage {
        protected byte[] domainBytes;
        protected byte[] hostBytes;
        protected byte[] lmResp;
        protected byte[] ntResp;
        protected byte[] sessionKey;
        protected int type2Flags;
        protected byte[] userBytes;

        Type3Message(java.lang.String r13, java.lang.String r14, java.lang.String r15, java.lang.String r16, byte[] r17, int r18, java.lang.String r19, byte[] r20) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
                r12 = this;
                r0 = r12
                r1 = r18
                r12.<init>()
                r0.type2Flags = r1
                java.lang.String r2 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$1600(r14)
                java.lang.String r10 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$1700(r13)
                cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl$CipherGen r11 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl$CipherGen
                r3 = r11
                r4 = r10
                r5 = r15
                r6 = r16
                r7 = r17
                r8 = r19
                r9 = r20
                r3.<init>(r4, r5, r6, r7, r8, r9)
                r3 = 8388608(0x800000, float:1.1754944E-38)
                r3 = r3 & r1
                if (r3 == 0) goto L43
                if (r20 == 0) goto L43
                if (r19 == 0) goto L43
                byte[] r3 = r11.getNTLMv2Response()     // Catch: cz.msebera.android.httpclient.impl.auth.NTLMEngineException -> L7c
                r0.ntResp = r3     // Catch: cz.msebera.android.httpclient.impl.auth.NTLMEngineException -> L7c
                byte[] r3 = r11.getLMv2Response()     // Catch: cz.msebera.android.httpclient.impl.auth.NTLMEngineException -> L7c
                r0.lmResp = r3     // Catch: cz.msebera.android.httpclient.impl.auth.NTLMEngineException -> L7c
                r3 = r1 & 128(0x80, float:1.8E-43)
                if (r3 == 0) goto L3e
                byte[] r3 = r11.getLanManagerSessionKey()     // Catch: cz.msebera.android.httpclient.impl.auth.NTLMEngineException -> L7c
                goto L95
            L3e:
                byte[] r3 = r11.getNTLMv2UserSessionKey()     // Catch: cz.msebera.android.httpclient.impl.auth.NTLMEngineException -> L7c
                goto L95
            L43:
                r3 = 524288(0x80000, float:7.34684E-40)
                r3 = r3 & r1
                if (r3 == 0) goto L62
                byte[] r3 = r11.getNTLM2SessionResponse()     // Catch: cz.msebera.android.httpclient.impl.auth.NTLMEngineException -> L7c
                r0.ntResp = r3     // Catch: cz.msebera.android.httpclient.impl.auth.NTLMEngineException -> L7c
                byte[] r3 = r11.getLM2SessionResponse()     // Catch: cz.msebera.android.httpclient.impl.auth.NTLMEngineException -> L7c
                r0.lmResp = r3     // Catch: cz.msebera.android.httpclient.impl.auth.NTLMEngineException -> L7c
                r3 = r1 & 128(0x80, float:1.8E-43)
                if (r3 == 0) goto L5d
                byte[] r3 = r11.getLanManagerSessionKey()     // Catch: cz.msebera.android.httpclient.impl.auth.NTLMEngineException -> L7c
                goto L95
            L5d:
                byte[] r3 = r11.getNTLM2SessionResponseUserSessionKey()     // Catch: cz.msebera.android.httpclient.impl.auth.NTLMEngineException -> L7c
                goto L95
            L62:
                byte[] r3 = r11.getNTLMResponse()     // Catch: cz.msebera.android.httpclient.impl.auth.NTLMEngineException -> L7c
                r0.ntResp = r3     // Catch: cz.msebera.android.httpclient.impl.auth.NTLMEngineException -> L7c
                byte[] r3 = r11.getLMResponse()     // Catch: cz.msebera.android.httpclient.impl.auth.NTLMEngineException -> L7c
                r0.lmResp = r3     // Catch: cz.msebera.android.httpclient.impl.auth.NTLMEngineException -> L7c
                r3 = r1 & 128(0x80, float:1.8E-43)
                if (r3 == 0) goto L77
                byte[] r3 = r11.getLanManagerSessionKey()     // Catch: cz.msebera.android.httpclient.impl.auth.NTLMEngineException -> L7c
                goto L95
            L77:
                byte[] r3 = r11.getNTLMUserSessionKey()     // Catch: cz.msebera.android.httpclient.impl.auth.NTLMEngineException -> L7c
                goto L95
            L7c:
                r3 = 0
                byte[] r3 = new byte[r3]
                r0.ntResp = r3
                byte[] r3 = r11.getLMResponse()
                r0.lmResp = r3
                r3 = r1 & 128(0x80, float:1.8E-43)
                if (r3 == 0) goto L91
                byte[] r3 = r11.getLanManagerSessionKey()
                goto L95
            L91:
                byte[] r3 = r11.getLMUserSessionKey()
            L95:
                r4 = r1 & 16
                r5 = 0
                if (r4 == 0) goto Lad
                r4 = 1073741824(0x40000000, float:2.0)
                r1 = r1 & r4
                if (r1 == 0) goto Laa
                byte[] r1 = r11.getSecondaryKey()
                byte[] r1 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.RC4(r1, r3)
                r0.sessionKey = r1
                goto Laf
            Laa:
                r0.sessionKey = r3
                goto Laf
            Lad:
                r0.sessionKey = r5
            Laf:
                java.nio.charset.Charset r1 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$1500()
                if (r1 == 0) goto Le1
                if (r2 == 0) goto Lc0
                java.nio.charset.Charset r1 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$1500()
                byte[] r1 = r2.getBytes(r1)
                goto Lc1
            Lc0:
                r1 = r5
            Lc1:
                r0.hostBytes = r1
                if (r10 == 0) goto Ld3
                java.util.Locale r1 = java.util.Locale.ROOT
                java.lang.String r1 = r10.toUpperCase(r1)
                java.nio.charset.Charset r2 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$1500()
                byte[] r5 = r1.getBytes(r2)
            Ld3:
                r0.domainBytes = r5
                java.nio.charset.Charset r1 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.access$1500()
                r2 = r15
                byte[] r1 = r15.getBytes(r1)
                r0.userBytes = r1
                return
            Le1:
                cz.msebera.android.httpclient.impl.auth.NTLMEngineException r1 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineException
                java.lang.String r2 = "Unicode not supported"
                r1.<init>(r2)
                throw r1
        }

        @Override
        java.lang.String getResponse() {
                r13 = this;
                byte[] r0 = r13.ntResp
                int r0 = r0.length
                byte[] r1 = r13.lmResp
                int r1 = r1.length
                byte[] r2 = r13.domainBytes
                r3 = 0
                if (r2 == 0) goto Ld
                int r2 = r2.length
                goto Le
            Ld:
                r2 = 0
            Le:
                byte[] r4 = r13.hostBytes
                if (r4 == 0) goto L14
                int r4 = r4.length
                goto L15
            L14:
                r4 = 0
            L15:
                byte[] r5 = r13.userBytes
                int r5 = r5.length
                byte[] r6 = r13.sessionKey
                if (r6 == 0) goto L1d
                int r3 = r6.length
            L1d:
                int r6 = r1 + 72
                int r7 = r6 + r0
                int r8 = r7 + r2
                int r9 = r8 + r5
                int r10 = r9 + r4
                int r11 = r10 + r3
                r12 = 3
                r13.prepareResponse(r11, r12)
                r13.addUShort(r1)
                r13.addUShort(r1)
                r1 = 72
                r13.addULong(r1)
                r13.addUShort(r0)
                r13.addUShort(r0)
                r13.addULong(r6)
                r13.addUShort(r2)
                r13.addUShort(r2)
                r13.addULong(r7)
                r13.addUShort(r5)
                r13.addUShort(r5)
                r13.addULong(r8)
                r13.addUShort(r4)
                r13.addUShort(r4)
                r13.addULong(r9)
                r13.addUShort(r3)
                r13.addUShort(r3)
                r13.addULong(r10)
                int r0 = r13.type2Flags
                r1 = r0 & 128(0x80, float:1.8E-43)
                r2 = r0 & 512(0x200, float:7.17E-43)
                r1 = r1 | r2
                r2 = 524288(0x80000, float:7.34684E-40)
                r2 = r2 & r0
                r1 = r1 | r2
                r2 = 33554432(0x2000000, float:9.403955E-38)
                r1 = r1 | r2
                r2 = 32768(0x8000, float:4.5918E-41)
                r2 = r2 & r0
                r1 = r1 | r2
                r2 = r0 & 32
                r1 = r1 | r2
                r2 = r0 & 16
                r1 = r1 | r2
                r2 = 536870912(0x20000000, float:1.0842022E-19)
                r2 = r2 & r0
                r1 = r1 | r2
                r2 = -2147483648(0xffffffff80000000, float:-0.0)
                r2 = r2 & r0
                r1 = r1 | r2
                r2 = 1073741824(0x40000000, float:2.0)
                r2 = r2 & r0
                r1 = r1 | r2
                r2 = 8388608(0x800000, float:1.1754944E-38)
                r2 = r2 & r0
                r1 = r1 | r2
                r2 = r0 & 1
                r1 = r1 | r2
                r0 = r0 & 4
                r0 = r0 | r1
                r13.addULong(r0)
                r0 = 261(0x105, float:3.66E-43)
                r13.addUShort(r0)
                r0 = 2600(0xa28, float:3.643E-42)
                r13.addULong(r0)
                r0 = 3840(0xf00, float:5.381E-42)
                r13.addUShort(r0)
                byte[] r0 = r13.lmResp
                r13.addBytes(r0)
                byte[] r0 = r13.ntResp
                r13.addBytes(r0)
                byte[] r0 = r13.domainBytes
                r13.addBytes(r0)
                byte[] r0 = r13.userBytes
                r13.addBytes(r0)
                byte[] r0 = r13.hostBytes
                r13.addBytes(r0)
                byte[] r0 = r13.sessionKey
                if (r0 == 0) goto Lc6
                r13.addBytes(r0)
            Lc6:
                java.lang.String r0 = super.getResponse()
                return r0
        }
    }

    static {
            java.lang.String r0 = "UnicodeLittleUnmarked"
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.util.CharsetUtils.lookup(r0)
            cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.UNICODE_LITTLE_UNMARKED = r0
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.Consts.ASCII
            cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.DEFAULT_CHARSET = r0
            java.lang.String r0 = "SHA1PRNG"
            java.security.SecureRandom r0 = java.security.SecureRandom.getInstance(r0)     // Catch: java.lang.Exception -> L13
            goto L14
        L13:
            r0 = 0
        L14:
            cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.RND_GEN = r0
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.Consts.ASCII
            java.lang.String r1 = "NTLMSSP"
            byte[] r0 = r1.getBytes(r0)
            int r1 = r0.length
            int r1 = r1 + 1
            byte[] r1 = new byte[r1]
            cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.SIGNATURE = r1
            byte[] r1 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.SIGNATURE
            int r2 = r0.length
            r3 = 0
            java.lang.System.arraycopy(r0, r3, r1, r3, r2)
            byte[] r1 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.SIGNATURE
            int r0 = r0.length
            r1[r0] = r3
            cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl$Type1Message r0 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl$Type1Message
            r0.<init>()
            cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.TYPE_1_MESSAGE = r0
            return
    }

    NTLMEngineImpl() {
            r0 = this;
            r0.<init>()
            return
    }

    static int F(int r0, int r1, int r2) {
            r1 = r1 & r0
            int r0 = ~r0
            r0 = r0 & r2
            r0 = r0 | r1
            return r0
    }

    static int G(int r1, int r2, int r3) {
            r0 = r1 & r2
            r1 = r1 & r3
            r1 = r1 | r0
            r2 = r2 & r3
            r1 = r1 | r2
            return r1
    }

    static int H(int r0, int r1, int r2) {
            r0 = r0 ^ r1
            r0 = r0 ^ r2
            return r0
    }

    static byte[] RC4(byte[] r4, byte[] r5) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            java.lang.String r0 = "RC4"
            javax.crypto.Cipher r1 = javax.crypto.Cipher.getInstance(r0)     // Catch: java.lang.Exception -> L14
            r2 = 1
            javax.crypto.spec.SecretKeySpec r3 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Exception -> L14
            r3.<init>(r5, r0)     // Catch: java.lang.Exception -> L14
            r1.init(r2, r3)     // Catch: java.lang.Exception -> L14
            byte[] r4 = r1.doFinal(r4)     // Catch: java.lang.Exception -> L14
            return r4
        L14:
            r4 = move-exception
            cz.msebera.android.httpclient.impl.auth.NTLMEngineException r5 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineException
            java.lang.String r0 = r4.getMessage()
            r5.<init>(r0, r4)
            throw r5
    }

    static byte[] access$000() throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            byte[] r0 = makeRandomChallenge()
            return r0
    }

    static byte[] access$100() throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            byte[] r0 = makeSecondaryKey()
            return r0
    }

    static java.nio.charset.Charset access$1000() {
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.DEFAULT_CHARSET
            return r0
    }

    static byte[] access$1100() {
            byte[] r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.SIGNATURE
            return r0
    }

    static int access$1200(byte[] r0, int r1) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            int r0 = readUShort(r0, r1)
            return r0
    }

    static int access$1300(byte[] r0, int r1) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            int r0 = readULong(r0, r1)
            return r0
    }

    static byte[] access$1400(byte[] r0, int r1) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            byte[] r0 = readSecurityBuffer(r0, r1)
            return r0
    }

    static java.nio.charset.Charset access$1500() {
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.UNICODE_LITTLE_UNMARKED
            return r0
    }

    static java.lang.String access$1600(java.lang.String r0) {
            java.lang.String r0 = convertHost(r0)
            return r0
    }

    static java.lang.String access$1700(java.lang.String r0) {
            java.lang.String r0 = convertDomain(r0)
            return r0
    }

    static byte[] access$200(java.lang.String r0) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            byte[] r0 = lmHash(r0)
            return r0
    }

    static byte[] access$300(byte[] r0, byte[] r1) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            byte[] r0 = lmResponse(r0, r1)
            return r0
    }

    static byte[] access$400(java.lang.String r0) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            byte[] r0 = ntlmHash(r0)
            return r0
    }

    static byte[] access$500(java.lang.String r0, java.lang.String r1, byte[] r2) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            byte[] r0 = lmv2Hash(r0, r1, r2)
            return r0
    }

    static byte[] access$600(java.lang.String r0, java.lang.String r1, byte[] r2) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            byte[] r0 = ntlmv2Hash(r0, r1, r2)
            return r0
    }

    static byte[] access$700(byte[] r0, byte[] r1, byte[] r2) {
            byte[] r0 = createBlob(r0, r1, r2)
            return r0
    }

    static byte[] access$800(byte[] r0, byte[] r1, byte[] r2) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            byte[] r0 = lmv2Response(r0, r1, r2)
            return r0
    }

    static java.security.Key access$900(byte[] r0, int r1) {
            java.security.Key r0 = createDESKey(r0, r1)
            return r0
    }

    private static java.lang.String convertDomain(java.lang.String r0) {
            java.lang.String r0 = stripDotSuffix(r0)
            return r0
    }

    private static java.lang.String convertHost(java.lang.String r0) {
            java.lang.String r0 = stripDotSuffix(r0)
            return r0
    }

    private static byte[] createBlob(byte[] r8, byte[] r9, byte[] r10) {
            r0 = 4
            byte[] r1 = new byte[r0]
            r1 = {x004e: FILL_ARRAY_DATA , data: [1, 1, 0, 0} // fill-array
            byte[] r2 = new byte[r0]
            r2 = {x0054: FILL_ARRAY_DATA , data: [0, 0, 0, 0} // fill-array
            byte[] r3 = new byte[r0]
            r3 = {x005a: FILL_ARRAY_DATA , data: [0, 0, 0, 0} // fill-array
            byte[] r0 = new byte[r0]
            r0 = {x0060: FILL_ARRAY_DATA , data: [0, 0, 0, 0} // fill-array
            int r4 = r1.length
            int r5 = r2.length
            int r4 = r4 + r5
            int r5 = r10.length
            int r4 = r4 + r5
            r5 = 8
            int r4 = r4 + r5
            int r6 = r3.length
            int r4 = r4 + r6
            int r6 = r9.length
            int r4 = r4 + r6
            int r6 = r0.length
            int r4 = r4 + r6
            byte[] r4 = new byte[r4]
            int r6 = r1.length
            r7 = 0
            java.lang.System.arraycopy(r1, r7, r4, r7, r6)
            int r1 = r1.length
            int r1 = r1 + r7
            int r6 = r2.length
            java.lang.System.arraycopy(r2, r7, r4, r1, r6)
            int r2 = r2.length
            int r1 = r1 + r2
            int r2 = r10.length
            java.lang.System.arraycopy(r10, r7, r4, r1, r2)
            int r10 = r10.length
            int r1 = r1 + r10
            java.lang.System.arraycopy(r8, r7, r4, r1, r5)
            int r1 = r1 + r5
            int r8 = r3.length
            java.lang.System.arraycopy(r3, r7, r4, r1, r8)
            int r8 = r3.length
            int r1 = r1 + r8
            int r8 = r9.length
            java.lang.System.arraycopy(r9, r7, r4, r1, r8)
            int r8 = r9.length
            int r1 = r1 + r8
            int r8 = r0.length
            java.lang.System.arraycopy(r0, r7, r4, r1, r8)
            int r8 = r0.length
            return r4
    }

    private static java.security.Key createDESKey(byte[] r9, int r10) {
            r0 = 7
            byte[] r1 = new byte[r0]
            r2 = 0
            java.lang.System.arraycopy(r9, r10, r1, r2, r0)
            r9 = 8
            byte[] r9 = new byte[r9]
            r10 = r1[r2]
            r9[r2] = r10
            r10 = r1[r2]
            int r10 = r10 << r0
            r2 = 1
            r3 = r1[r2]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 >>> r2
            r10 = r10 | r3
            byte r10 = (byte) r10
            r9[r2] = r10
            r10 = r1[r2]
            r3 = 6
            int r10 = r10 << r3
            r4 = 2
            r5 = r1[r4]
            r5 = r5 & 255(0xff, float:3.57E-43)
            int r5 = r5 >>> r4
            r10 = r10 | r5
            byte r10 = (byte) r10
            r9[r4] = r10
            r10 = r1[r4]
            r5 = 5
            int r10 = r10 << r5
            r6 = 3
            r7 = r1[r6]
            r7 = r7 & 255(0xff, float:3.57E-43)
            int r7 = r7 >>> r6
            r10 = r10 | r7
            byte r10 = (byte) r10
            r9[r6] = r10
            r10 = r1[r6]
            r7 = 4
            int r10 = r10 << r7
            r8 = r1[r7]
            r8 = r8 & 255(0xff, float:3.57E-43)
            int r8 = r8 >>> r7
            r10 = r10 | r8
            byte r10 = (byte) r10
            r9[r7] = r10
            r10 = r1[r7]
            int r10 = r10 << r6
            r6 = r1[r5]
            r6 = r6 & 255(0xff, float:3.57E-43)
            int r6 = r6 >>> r5
            r10 = r10 | r6
            byte r10 = (byte) r10
            r9[r5] = r10
            r10 = r1[r5]
            int r10 = r10 << r4
            r4 = r1[r3]
            r4 = r4 & 255(0xff, float:3.57E-43)
            int r4 = r4 >>> r3
            r10 = r10 | r4
            byte r10 = (byte) r10
            r9[r3] = r10
            r10 = r1[r3]
            int r10 = r10 << r2
            byte r10 = (byte) r10
            r9[r0] = r10
            oddParity(r9)
            javax.crypto.spec.SecretKeySpec r10 = new javax.crypto.spec.SecretKeySpec
            java.lang.String r0 = "DES"
            r10.<init>(r9, r0)
            return r10
    }

    static java.lang.String getResponseFor(java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            if (r9 == 0) goto L2d
            java.lang.String r0 = r9.trim()
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto Lf
            goto L2d
        Lf:
            cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl$Type2Message r0 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl$Type2Message
            r0.<init>(r9)
            byte[] r5 = r0.getChallenge()
            int r6 = r0.getFlags()
            java.lang.String r7 = r0.getTarget()
            byte[] r8 = r0.getTargetInfo()
            r1 = r10
            r2 = r11
            r3 = r12
            r4 = r13
            java.lang.String r9 = getType3Message(r1, r2, r3, r4, r5, r6, r7, r8)
            goto L31
        L2d:
            java.lang.String r9 = getType1Message(r12, r13)
        L31:
            return r9
    }

    static java.lang.String getType1Message(java.lang.String r0, java.lang.String r1) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl$Type1Message r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.TYPE_1_MESSAGE
            java.lang.String r0 = r0.getResponse()
            return r0
    }

    static java.lang.String getType3Message(java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, byte[] r14, int r15, java.lang.String r16, byte[] r17) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl$Type3Message r9 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl$Type3Message
            r0 = r9
            r1 = r13
            r2 = r12
            r3 = r10
            r4 = r11
            r5 = r14
            r6 = r15
            r7 = r16
            r8 = r17
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            java.lang.String r0 = r9.getResponse()
            return r0
    }

    static byte[] hmacMD5(byte[] r1, byte[] r2) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl$HMACMD5 r0 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl$HMACMD5
            r0.<init>(r2)
            r0.update(r1)
            byte[] r1 = r0.getOutput()
            return r1
    }

    private static byte[] lmHash(java.lang.String r5) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            java.util.Locale r0 = java.util.Locale.ROOT     // Catch: java.lang.Exception -> L4c
            java.lang.String r5 = r5.toUpperCase(r0)     // Catch: java.lang.Exception -> L4c
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.Consts.ASCII     // Catch: java.lang.Exception -> L4c
            byte[] r5 = r5.getBytes(r0)     // Catch: java.lang.Exception -> L4c
            int r0 = r5.length     // Catch: java.lang.Exception -> L4c
            r1 = 14
            int r0 = java.lang.Math.min(r0, r1)     // Catch: java.lang.Exception -> L4c
            byte[] r1 = new byte[r1]     // Catch: java.lang.Exception -> L4c
            r2 = 0
            java.lang.System.arraycopy(r5, r2, r1, r2, r0)     // Catch: java.lang.Exception -> L4c
            java.security.Key r5 = createDESKey(r1, r2)     // Catch: java.lang.Exception -> L4c
            r0 = 7
            java.security.Key r0 = createDESKey(r1, r0)     // Catch: java.lang.Exception -> L4c
            java.lang.String r1 = "KGS!@#$%"
            java.nio.charset.Charset r3 = cz.msebera.android.httpclient.Consts.ASCII     // Catch: java.lang.Exception -> L4c
            byte[] r1 = r1.getBytes(r3)     // Catch: java.lang.Exception -> L4c
            java.lang.String r3 = "DES/ECB/NoPadding"
            javax.crypto.Cipher r3 = javax.crypto.Cipher.getInstance(r3)     // Catch: java.lang.Exception -> L4c
            r4 = 1
            r3.init(r4, r5)     // Catch: java.lang.Exception -> L4c
            byte[] r5 = r3.doFinal(r1)     // Catch: java.lang.Exception -> L4c
            r3.init(r4, r0)     // Catch: java.lang.Exception -> L4c
            byte[] r0 = r3.doFinal(r1)     // Catch: java.lang.Exception -> L4c
            r1 = 16
            byte[] r1 = new byte[r1]     // Catch: java.lang.Exception -> L4c
            r3 = 8
            java.lang.System.arraycopy(r5, r2, r1, r2, r3)     // Catch: java.lang.Exception -> L4c
            java.lang.System.arraycopy(r0, r2, r1, r3, r3)     // Catch: java.lang.Exception -> L4c
            return r1
        L4c:
            r5 = move-exception
            cz.msebera.android.httpclient.impl.auth.NTLMEngineException r0 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineException
            java.lang.String r1 = r5.getMessage()
            r0.<init>(r1, r5)
            throw r0
    }

    private static byte[] lmResponse(byte[] r6, byte[] r7) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            r0 = 21
            byte[] r0 = new byte[r0]     // Catch: java.lang.Exception -> L45
            r1 = 16
            r2 = 0
            java.lang.System.arraycopy(r6, r2, r0, r2, r1)     // Catch: java.lang.Exception -> L45
            java.security.Key r6 = createDESKey(r0, r2)     // Catch: java.lang.Exception -> L45
            r3 = 7
            java.security.Key r3 = createDESKey(r0, r3)     // Catch: java.lang.Exception -> L45
            r4 = 14
            java.security.Key r0 = createDESKey(r0, r4)     // Catch: java.lang.Exception -> L45
            java.lang.String r4 = "DES/ECB/NoPadding"
            javax.crypto.Cipher r4 = javax.crypto.Cipher.getInstance(r4)     // Catch: java.lang.Exception -> L45
            r5 = 1
            r4.init(r5, r6)     // Catch: java.lang.Exception -> L45
            byte[] r6 = r4.doFinal(r7)     // Catch: java.lang.Exception -> L45
            r4.init(r5, r3)     // Catch: java.lang.Exception -> L45
            byte[] r3 = r4.doFinal(r7)     // Catch: java.lang.Exception -> L45
            r4.init(r5, r0)     // Catch: java.lang.Exception -> L45
            byte[] r7 = r4.doFinal(r7)     // Catch: java.lang.Exception -> L45
            r0 = 24
            byte[] r0 = new byte[r0]     // Catch: java.lang.Exception -> L45
            r4 = 8
            java.lang.System.arraycopy(r6, r2, r0, r2, r4)     // Catch: java.lang.Exception -> L45
            java.lang.System.arraycopy(r3, r2, r0, r4, r4)     // Catch: java.lang.Exception -> L45
            java.lang.System.arraycopy(r7, r2, r0, r1, r4)     // Catch: java.lang.Exception -> L45
            return r0
        L45:
            r6 = move-exception
            cz.msebera.android.httpclient.impl.auth.NTLMEngineException r7 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineException
            java.lang.String r0 = r6.getMessage()
            r7.<init>(r0, r6)
            throw r7
    }

    private static byte[] lmv2Hash(java.lang.String r1, java.lang.String r2, byte[] r3) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.UNICODE_LITTLE_UNMARKED
            if (r0 == 0) goto L2e
            cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl$HMACMD5 r0 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl$HMACMD5
            r0.<init>(r3)
            java.util.Locale r3 = java.util.Locale.ROOT
            java.lang.String r2 = r2.toUpperCase(r3)
            java.nio.charset.Charset r3 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.UNICODE_LITTLE_UNMARKED
            byte[] r2 = r2.getBytes(r3)
            r0.update(r2)
            if (r1 == 0) goto L29
            java.util.Locale r2 = java.util.Locale.ROOT
            java.lang.String r1 = r1.toUpperCase(r2)
            java.nio.charset.Charset r2 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.UNICODE_LITTLE_UNMARKED
            byte[] r1 = r1.getBytes(r2)
            r0.update(r1)
        L29:
            byte[] r1 = r0.getOutput()
            return r1
        L2e:
            cz.msebera.android.httpclient.impl.auth.NTLMEngineException r1 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineException
            java.lang.String r2 = "Unicode not supported"
            r1.<init>(r2)
            throw r1
    }

    private static byte[] lmv2Response(byte[] r2, byte[] r3, byte[] r4) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl$HMACMD5 r0 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl$HMACMD5
            r0.<init>(r2)
            r0.update(r3)
            r0.update(r4)
            byte[] r2 = r0.getOutput()
            int r3 = r2.length
            int r0 = r4.length
            int r3 = r3 + r0
            byte[] r3 = new byte[r3]
            int r0 = r2.length
            r1 = 0
            java.lang.System.arraycopy(r2, r1, r3, r1, r0)
            int r2 = r2.length
            int r0 = r4.length
            java.lang.System.arraycopy(r4, r1, r3, r2, r0)
            return r3
    }

    private static byte[] makeRandomChallenge() throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            java.security.SecureRandom r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.RND_GEN
            if (r0 == 0) goto L13
            r1 = 8
            byte[] r1 = new byte[r1]
            monitor-enter(r0)
            java.security.SecureRandom r2 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.RND_GEN     // Catch: java.lang.Throwable -> L10
            r2.nextBytes(r1)     // Catch: java.lang.Throwable -> L10
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            return r1
        L10:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            throw r1
        L13:
            cz.msebera.android.httpclient.impl.auth.NTLMEngineException r0 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineException
            java.lang.String r1 = "Random generator not available"
            r0.<init>(r1)
            throw r0
    }

    private static byte[] makeSecondaryKey() throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            java.security.SecureRandom r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.RND_GEN
            if (r0 == 0) goto L13
            r1 = 16
            byte[] r1 = new byte[r1]
            monitor-enter(r0)
            java.security.SecureRandom r2 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.RND_GEN     // Catch: java.lang.Throwable -> L10
            r2.nextBytes(r1)     // Catch: java.lang.Throwable -> L10
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            return r1
        L10:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            throw r1
        L13:
            cz.msebera.android.httpclient.impl.auth.NTLMEngineException r0 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineException
            java.lang.String r1 = "Random generator not available"
            r0.<init>(r1)
            throw r0
    }

    static byte[] ntlm2SessionResponse(byte[] r2, byte[] r3, byte[] r4) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.lang.Exception -> L1d
            r0.update(r3)     // Catch: java.lang.Exception -> L1d
            r0.update(r4)     // Catch: java.lang.Exception -> L1d
            byte[] r3 = r0.digest()     // Catch: java.lang.Exception -> L1d
            r4 = 8
            byte[] r0 = new byte[r4]     // Catch: java.lang.Exception -> L1d
            r1 = 0
            java.lang.System.arraycopy(r3, r1, r0, r1, r4)     // Catch: java.lang.Exception -> L1d
            byte[] r2 = lmResponse(r2, r0)     // Catch: java.lang.Exception -> L1d
            return r2
        L1d:
            r2 = move-exception
            boolean r3 = r2 instanceof cz.msebera.android.httpclient.impl.auth.NTLMEngineException
            if (r3 == 0) goto L25
            cz.msebera.android.httpclient.impl.auth.NTLMEngineException r2 = (cz.msebera.android.httpclient.impl.auth.NTLMEngineException) r2
            throw r2
        L25:
            cz.msebera.android.httpclient.impl.auth.NTLMEngineException r3 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineException
            java.lang.String r4 = r2.getMessage()
            r3.<init>(r4, r2)
            throw r3
    }

    private static byte[] ntlmHash(java.lang.String r1) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.UNICODE_LITTLE_UNMARKED
            if (r0 == 0) goto L15
            byte[] r1 = r1.getBytes(r0)
            cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl$MD4 r0 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl$MD4
            r0.<init>()
            r0.update(r1)
            byte[] r1 = r0.getOutput()
            return r1
        L15:
            cz.msebera.android.httpclient.impl.auth.NTLMEngineException r1 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineException
            java.lang.String r0 = "Unicode not supported"
            r1.<init>(r0)
            throw r1
    }

    private static byte[] ntlmv2Hash(java.lang.String r1, java.lang.String r2, byte[] r3) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.UNICODE_LITTLE_UNMARKED
            if (r0 == 0) goto L28
            cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl$HMACMD5 r0 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl$HMACMD5
            r0.<init>(r3)
            java.util.Locale r3 = java.util.Locale.ROOT
            java.lang.String r2 = r2.toUpperCase(r3)
            java.nio.charset.Charset r3 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.UNICODE_LITTLE_UNMARKED
            byte[] r2 = r2.getBytes(r3)
            r0.update(r2)
            if (r1 == 0) goto L23
            java.nio.charset.Charset r2 = cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl.UNICODE_LITTLE_UNMARKED
            byte[] r1 = r1.getBytes(r2)
            r0.update(r1)
        L23:
            byte[] r1 = r0.getOutput()
            return r1
        L28:
            cz.msebera.android.httpclient.impl.auth.NTLMEngineException r1 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineException
            java.lang.String r2 = "Unicode not supported"
            r1.<init>(r2)
            throw r1
    }

    private static void oddParity(byte[] r5) {
            r0 = 0
            r1 = 0
        L2:
            int r2 = r5.length
            if (r1 >= r2) goto L34
            r2 = r5[r1]
            int r3 = r2 >>> 7
            int r4 = r2 >>> 6
            r3 = r3 ^ r4
            int r4 = r2 >>> 5
            r3 = r3 ^ r4
            int r4 = r2 >>> 4
            r3 = r3 ^ r4
            int r4 = r2 >>> 3
            r3 = r3 ^ r4
            int r4 = r2 >>> 2
            r3 = r3 ^ r4
            r4 = 1
            int r2 = r2 >>> r4
            r2 = r2 ^ r3
            r2 = r2 & r4
            if (r2 != 0) goto L20
            r2 = 1
            goto L21
        L20:
            r2 = 0
        L21:
            if (r2 == 0) goto L2a
            r2 = r5[r1]
            r2 = r2 | r4
            byte r2 = (byte) r2
            r5[r1] = r2
            goto L31
        L2a:
            r2 = r5[r1]
            r2 = r2 & (-2)
            byte r2 = (byte) r2
            r5[r1] = r2
        L31:
            int r1 = r1 + 1
            goto L2
        L34:
            return
    }

    private static byte[] readSecurityBuffer(byte[] r3, int r4) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            int r0 = readUShort(r3, r4)
            int r4 = r4 + 4
            int r4 = readULong(r3, r4)
            int r1 = r3.length
            int r2 = r4 + r0
            if (r1 < r2) goto L16
            byte[] r1 = new byte[r0]
            r2 = 0
            java.lang.System.arraycopy(r3, r4, r1, r2, r0)
            return r1
        L16:
            cz.msebera.android.httpclient.impl.auth.NTLMEngineException r3 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineException
            java.lang.String r4 = "NTLM authentication - buffer too small for data item"
            r3.<init>(r4)
            throw r3
    }

    private static int readULong(byte[] r2, int r3) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            int r0 = r2.length
            int r1 = r3 + 4
            if (r0 < r1) goto L25
            r0 = r2[r3]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r1 = r3 + 1
            r1 = r2[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            r0 = r0 | r1
            int r1 = r3 + 2
            r1 = r2[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 16
            r0 = r0 | r1
            int r3 = r3 + 3
            r2 = r2[r3]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r2 = r2 << 24
            r2 = r2 | r0
            return r2
        L25:
            cz.msebera.android.httpclient.impl.auth.NTLMEngineException r2 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineException
            java.lang.String r3 = "NTLM authentication - buffer too small for DWORD"
            r2.<init>(r3)
            throw r2
    }

    private static int readUShort(byte[] r2, int r3) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            int r0 = r2.length
            int r1 = r3 + 2
            if (r0 < r1) goto L13
            r0 = r2[r3]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r3 = r3 + 1
            r2 = r2[r3]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r2 = r2 << 8
            r2 = r2 | r0
            return r2
        L13:
            cz.msebera.android.httpclient.impl.auth.NTLMEngineException r2 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineException
            java.lang.String r3 = "NTLM authentication - buffer too small for WORD"
            r2.<init>(r3)
            throw r2
    }

    static int rotintlft(int r1, int r2) {
            int r0 = r1 << r2
            int r2 = 32 - r2
            int r1 = r1 >>> r2
            r1 = r1 | r0
            return r1
    }

    private static java.lang.String stripDotSuffix(java.lang.String r2) {
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            java.lang.String r0 = "."
            int r0 = r2.indexOf(r0)
            r1 = -1
            if (r0 == r1) goto L12
            r1 = 0
            java.lang.String r2 = r2.substring(r1, r0)
        L12:
            return r2
    }

    static void writeULong(byte[] r2, int r3, int r4) {
            r0 = r3 & 255(0xff, float:3.57E-43)
            byte r0 = (byte) r0
            r2[r4] = r0
            int r0 = r4 + 1
            int r1 = r3 >> 8
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r2[r0] = r1
            int r0 = r4 + 2
            int r1 = r3 >> 16
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r2[r0] = r1
            int r4 = r4 + 3
            int r3 = r3 >> 24
            r3 = r3 & 255(0xff, float:3.57E-43)
            byte r3 = (byte) r3
            r2[r4] = r3
            return
    }

    @Override
    public java.lang.String generateType1Msg(java.lang.String r1, java.lang.String r2) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            r0 = this;
            java.lang.String r1 = getType1Message(r2, r1)
            return r1
    }

    @Override
    public java.lang.String generateType3Msg(java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException {
            r9 = this;
            cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl$Type2Message r0 = new cz.msebera.android.httpclient.impl.auth.NTLMEngineImpl$Type2Message
            r0.<init>(r14)
            byte[] r5 = r0.getChallenge()
            int r6 = r0.getFlags()
            java.lang.String r7 = r0.getTarget()
            byte[] r8 = r0.getTargetInfo()
            r1 = r10
            r2 = r11
            r3 = r13
            r4 = r12
            java.lang.String r10 = getType3Message(r1, r2, r3, r4, r5, r6, r7, r8)
            return r10
    }
}
