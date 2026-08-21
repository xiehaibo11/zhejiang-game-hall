package cz.msebera.android.httpclient.extras;

@android.annotation.TargetApi(4)
public final class PRNGFixes {
    private static final byte[] BUILD_FINGERPRINT_AND_DEVICE_SERIAL = null;
    private static final int VERSION_CODE_JELLY_BEAN = 16;
    private static final int VERSION_CODE_JELLY_BEAN_MR2 = 18;

    public static class LinuxPRNGSecureRandom extends java.security.SecureRandomSpi {
        private static final java.io.File URANDOM_FILE = null;
        private static final java.lang.Object sLock = null;
        private static java.io.DataInputStream sUrandomIn;
        private static java.io.OutputStream sUrandomOut;
        private boolean mSeeded;

        static {
                java.io.File r0 = new java.io.File
                java.lang.String r1 = "/dev/urandom"
                r0.<init>(r1)
                cz.msebera.android.httpclient.extras.PRNGFixes.LinuxPRNGSecureRandom.URANDOM_FILE = r0
                java.lang.Object r0 = new java.lang.Object
                r0.<init>()
                cz.msebera.android.httpclient.extras.PRNGFixes.LinuxPRNGSecureRandom.sLock = r0
                return
        }

        public LinuxPRNGSecureRandom() {
                r0 = this;
                r0.<init>()
                return
        }

        private java.io.DataInputStream getUrandomInputStream() {
                r5 = this;
                java.lang.Object r0 = cz.msebera.android.httpclient.extras.PRNGFixes.LinuxPRNGSecureRandom.sLock
                monitor-enter(r0)
                java.io.DataInputStream r1 = cz.msebera.android.httpclient.extras.PRNGFixes.LinuxPRNGSecureRandom.sUrandomIn     // Catch: java.lang.Throwable -> L39
                if (r1 != 0) goto L35
                java.io.DataInputStream r1 = new java.io.DataInputStream     // Catch: java.io.IOException -> L16 java.lang.Throwable -> L39
                java.io.FileInputStream r2 = new java.io.FileInputStream     // Catch: java.io.IOException -> L16 java.lang.Throwable -> L39
                java.io.File r3 = cz.msebera.android.httpclient.extras.PRNGFixes.LinuxPRNGSecureRandom.URANDOM_FILE     // Catch: java.io.IOException -> L16 java.lang.Throwable -> L39
                r2.<init>(r3)     // Catch: java.io.IOException -> L16 java.lang.Throwable -> L39
                r1.<init>(r2)     // Catch: java.io.IOException -> L16 java.lang.Throwable -> L39
                cz.msebera.android.httpclient.extras.PRNGFixes.LinuxPRNGSecureRandom.sUrandomIn = r1     // Catch: java.io.IOException -> L16 java.lang.Throwable -> L39
                goto L35
            L16:
                r1 = move-exception
                java.lang.SecurityException r2 = new java.lang.SecurityException     // Catch: java.lang.Throwable -> L39
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L39
                r3.<init>()     // Catch: java.lang.Throwable -> L39
                java.lang.String r4 = "Failed to open "
                r3.append(r4)     // Catch: java.lang.Throwable -> L39
                java.io.File r4 = cz.msebera.android.httpclient.extras.PRNGFixes.LinuxPRNGSecureRandom.URANDOM_FILE     // Catch: java.lang.Throwable -> L39
                r3.append(r4)     // Catch: java.lang.Throwable -> L39
                java.lang.String r4 = " for reading"
                r3.append(r4)     // Catch: java.lang.Throwable -> L39
                java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L39
                r2.<init>(r3, r1)     // Catch: java.lang.Throwable -> L39
                throw r2     // Catch: java.lang.Throwable -> L39
            L35:
                java.io.DataInputStream r1 = cz.msebera.android.httpclient.extras.PRNGFixes.LinuxPRNGSecureRandom.sUrandomIn     // Catch: java.lang.Throwable -> L39
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L39
                return r1
            L39:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L39
                throw r1
        }

        private java.io.OutputStream getUrandomOutputStream() throws java.io.IOException {
                r3 = this;
                java.lang.Object r0 = cz.msebera.android.httpclient.extras.PRNGFixes.LinuxPRNGSecureRandom.sLock
                monitor-enter(r0)
                java.io.OutputStream r1 = cz.msebera.android.httpclient.extras.PRNGFixes.LinuxPRNGSecureRandom.sUrandomOut     // Catch: java.lang.Throwable -> L14
                if (r1 != 0) goto L10
                java.io.FileOutputStream r1 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L14
                java.io.File r2 = cz.msebera.android.httpclient.extras.PRNGFixes.LinuxPRNGSecureRandom.URANDOM_FILE     // Catch: java.lang.Throwable -> L14
                r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
                cz.msebera.android.httpclient.extras.PRNGFixes.LinuxPRNGSecureRandom.sUrandomOut = r1     // Catch: java.lang.Throwable -> L14
            L10:
                java.io.OutputStream r1 = cz.msebera.android.httpclient.extras.PRNGFixes.LinuxPRNGSecureRandom.sUrandomOut     // Catch: java.lang.Throwable -> L14
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
                return r1
            L14:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
                throw r1
        }

        @Override
        protected byte[] engineGenerateSeed(int r1) {
                r0 = this;
                byte[] r1 = new byte[r1]
                r0.engineNextBytes(r1)
                return r1
        }

        @Override
        protected void engineNextBytes(byte[] r4) {
                r3 = this;
                boolean r0 = r3.mSeeded
                if (r0 != 0) goto Lb
                byte[] r0 = cz.msebera.android.httpclient.extras.PRNGFixes.access$000()
                r3.engineSetSeed(r0)
            Lb:
                java.lang.Object r0 = cz.msebera.android.httpclient.extras.PRNGFixes.LinuxPRNGSecureRandom.sLock     // Catch: java.io.IOException -> L1f
                monitor-enter(r0)     // Catch: java.io.IOException -> L1f
                java.io.DataInputStream r1 = r3.getUrandomInputStream()     // Catch: java.lang.Throwable -> L1c
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L1c
                monitor-enter(r1)     // Catch: java.io.IOException -> L1f
                r1.readFully(r4)     // Catch: java.lang.Throwable -> L19
                monitor-exit(r1)     // Catch: java.lang.Throwable -> L19
                return
            L19:
                r4 = move-exception
                monitor-exit(r1)     // Catch: java.lang.Throwable -> L19
                throw r4     // Catch: java.io.IOException -> L1f
            L1c:
                r4 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L1c
                throw r4     // Catch: java.io.IOException -> L1f
            L1f:
                r4 = move-exception
                java.lang.SecurityException r0 = new java.lang.SecurityException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Failed to read from "
                r1.append(r2)
                java.io.File r2 = cz.msebera.android.httpclient.extras.PRNGFixes.LinuxPRNGSecureRandom.URANDOM_FILE
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.<init>(r1, r4)
                throw r0
        }

        @Override
        protected void engineSetSeed(byte[] r4) {
                r3 = this;
                r0 = 1
                java.lang.Object r1 = cz.msebera.android.httpclient.extras.PRNGFixes.LinuxPRNGSecureRandom.sLock     // Catch: java.lang.Throwable -> L15 java.io.IOException -> L17
                monitor-enter(r1)     // Catch: java.lang.Throwable -> L15 java.io.IOException -> L17
                java.io.OutputStream r2 = r3.getUrandomOutputStream()     // Catch: java.lang.Throwable -> L12
                monitor-exit(r1)     // Catch: java.lang.Throwable -> L12
                r2.write(r4)     // Catch: java.lang.Throwable -> L15 java.io.IOException -> L17
                r2.flush()     // Catch: java.lang.Throwable -> L15 java.io.IOException -> L17
            Lf:
                r3.mSeeded = r0
                goto L34
            L12:
                r4 = move-exception
                monitor-exit(r1)     // Catch: java.lang.Throwable -> L12
                throw r4     // Catch: java.lang.Throwable -> L15 java.io.IOException -> L17
            L15:
                r4 = move-exception
                goto L35
            L17:
                java.lang.Class<cz.msebera.android.httpclient.extras.PRNGFixes> r4 = cz.msebera.android.httpclient.extras.PRNGFixes.class
                java.lang.String r4 = r4.getSimpleName()     // Catch: java.lang.Throwable -> L15
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L15
                r1.<init>()     // Catch: java.lang.Throwable -> L15
                java.lang.String r2 = "Failed to mix seed into "
                r1.append(r2)     // Catch: java.lang.Throwable -> L15
                java.io.File r2 = cz.msebera.android.httpclient.extras.PRNGFixes.LinuxPRNGSecureRandom.URANDOM_FILE     // Catch: java.lang.Throwable -> L15
                r1.append(r2)     // Catch: java.lang.Throwable -> L15
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L15
                android.util.Log.w(r4, r1)     // Catch: java.lang.Throwable -> L15
                goto Lf
            L34:
                return
            L35:
                r3.mSeeded = r0
                throw r4
        }
    }

    private static class LinuxPRNGSecureRandomProvider extends java.security.Provider {
        public LinuxPRNGSecureRandomProvider() {
                r4 = this;
                java.lang.String r0 = "LinuxPRNG"
                r1 = 4607182418800017408(0x3ff0000000000000, double:1.0)
                java.lang.String r3 = "A Linux-specific random number provider that uses /dev/urandom"
                r4.<init>(r0, r1, r3)
                java.lang.Class<cz.msebera.android.httpclient.extras.PRNGFixes$LinuxPRNGSecureRandom> r0 = cz.msebera.android.httpclient.extras.PRNGFixes.LinuxPRNGSecureRandom.class
                java.lang.String r0 = r0.getName()
                java.lang.String r1 = "SecureRandom.SHA1PRNG"
                r4.put(r1, r0)
                java.lang.String r0 = "SecureRandom.SHA1PRNG ImplementedIn"
                java.lang.String r1 = "Software"
                r4.put(r0, r1)
                return
        }
    }

    static {
            byte[] r0 = getBuildFingerprintAndDeviceSerial()
            cz.msebera.android.httpclient.extras.PRNGFixes.BUILD_FINGERPRINT_AND_DEVICE_SERIAL = r0
            return
    }

    private PRNGFixes() {
            r0 = this;
            r0.<init>()
            return
    }

    static byte[] access$000() {
            byte[] r0 = generateSeed()
            return r0
    }

    public static void apply() {
            applyOpenSSLFix()
            installLinuxPRNGSecureRandom()
            return
    }

    private static void applyOpenSSLFix() throws java.lang.SecurityException {
            java.lang.String r0 = "org.apache.harmony.xnet.provider.jsse.NativeCrypto"
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 16
            if (r1 < r2) goto L7d
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 18
            if (r1 <= r2) goto Lf
            goto L7d
        Lf:
            java.lang.Class r1 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L74
            java.lang.String r2 = "RAND_seed"
            r3 = 1
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L74
            java.lang.Class<byte[]> r5 = byte[].class
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.Exception -> L74
            java.lang.reflect.Method r1 = r1.getMethod(r2, r4)     // Catch: java.lang.Exception -> L74
            java.lang.Object[] r2 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L74
            byte[] r4 = generateSeed()     // Catch: java.lang.Exception -> L74
            r2[r6] = r4     // Catch: java.lang.Exception -> L74
            r4 = 0
            r1.invoke(r4, r2)     // Catch: java.lang.Exception -> L74
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L74
            java.lang.String r1 = "RAND_load_file"
            r2 = 2
            java.lang.Class[] r5 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L74
            java.lang.Class<java.lang.String> r7 = java.lang.String.class
            r5[r6] = r7     // Catch: java.lang.Exception -> L74
            java.lang.Class r7 = java.lang.Long.TYPE     // Catch: java.lang.Exception -> L74
            r5[r3] = r7     // Catch: java.lang.Exception -> L74
            java.lang.reflect.Method r0 = r0.getMethod(r1, r5)     // Catch: java.lang.Exception -> L74
            java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L74
            java.lang.String r2 = "/dev/urandom"
            r1[r6] = r2     // Catch: java.lang.Exception -> L74
            r2 = 1024(0x400, float:1.435E-42)
            java.lang.Integer r5 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L74
            r1[r3] = r5     // Catch: java.lang.Exception -> L74
            java.lang.Object r0 = r0.invoke(r4, r1)     // Catch: java.lang.Exception -> L74
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.Exception -> L74
            int r0 = r0.intValue()     // Catch: java.lang.Exception -> L74
            if (r0 != r2) goto L5d
            return
        L5d:
            java.io.IOException r1 = new java.io.IOException     // Catch: java.lang.Exception -> L74
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L74
            r2.<init>()     // Catch: java.lang.Exception -> L74
            java.lang.String r3 = "Unexpected number of bytes read from Linux PRNG: "
            r2.append(r3)     // Catch: java.lang.Exception -> L74
            r2.append(r0)     // Catch: java.lang.Exception -> L74
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> L74
            r1.<init>(r0)     // Catch: java.lang.Exception -> L74
            throw r1     // Catch: java.lang.Exception -> L74
        L74:
            r0 = move-exception
            java.lang.SecurityException r1 = new java.lang.SecurityException
            java.lang.String r2 = "Failed to seed OpenSSL PRNG"
            r1.<init>(r2, r0)
            throw r1
        L7d:
            return
    }

    private static byte[] generateSeed() {
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream     // Catch: java.io.IOException -> L33
            r0.<init>()     // Catch: java.io.IOException -> L33
            java.io.DataOutputStream r1 = new java.io.DataOutputStream     // Catch: java.io.IOException -> L33
            r1.<init>(r0)     // Catch: java.io.IOException -> L33
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.io.IOException -> L33
            r1.writeLong(r2)     // Catch: java.io.IOException -> L33
            long r2 = java.lang.System.nanoTime()     // Catch: java.io.IOException -> L33
            r1.writeLong(r2)     // Catch: java.io.IOException -> L33
            int r2 = android.os.Process.myPid()     // Catch: java.io.IOException -> L33
            r1.writeInt(r2)     // Catch: java.io.IOException -> L33
            int r2 = android.os.Process.myUid()     // Catch: java.io.IOException -> L33
            r1.writeInt(r2)     // Catch: java.io.IOException -> L33
            byte[] r2 = cz.msebera.android.httpclient.extras.PRNGFixes.BUILD_FINGERPRINT_AND_DEVICE_SERIAL     // Catch: java.io.IOException -> L33
            r1.write(r2)     // Catch: java.io.IOException -> L33
            r1.close()     // Catch: java.io.IOException -> L33
            byte[] r0 = r0.toByteArray()     // Catch: java.io.IOException -> L33
            return r0
        L33:
            r0 = move-exception
            java.lang.SecurityException r1 = new java.lang.SecurityException
            java.lang.String r2 = "Failed to generate seed"
            r1.<init>(r2, r0)
            throw r1
    }

    private static byte[] getBuildFingerprintAndDeviceSerial() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = android.os.Build.FINGERPRINT
            if (r1 == 0) goto Lc
            r0.append(r1)
        Lc:
            java.lang.String r1 = getDeviceSerialNumber()
            if (r1 == 0) goto L15
            r0.append(r1)
        L15:
            java.lang.String r0 = r0.toString()     // Catch: java.io.UnsupportedEncodingException -> L20
            java.lang.String r1 = "UTF-8"
            byte[] r0 = r0.getBytes(r1)     // Catch: java.io.UnsupportedEncodingException -> L20
            return r0
        L20:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "UTF-8 encoding not supported"
            r0.<init>(r1)
            throw r0
    }

    private static java.lang.String getDeviceSerialNumber() {
            r0 = 0
            java.lang.Class<android.os.Build> r1 = android.os.Build.class
            java.lang.String r2 = "SERIAL"
            java.lang.reflect.Field r1 = r1.getField(r2)     // Catch: java.lang.Exception -> L10
            java.lang.Object r1 = r1.get(r0)     // Catch: java.lang.Exception -> L10
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L10
            return r1
        L10:
            return r0
    }

    private static void installLinuxPRNGSecureRandom() throws java.lang.SecurityException {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 <= r1) goto L7
            return
        L7:
            java.lang.String r0 = "SecureRandom.SHA1PRNG"
            java.security.Provider[] r0 = java.security.Security.getProviders(r0)
            r1 = 1
            if (r0 == 0) goto L22
            int r2 = r0.length
            if (r2 < r1) goto L22
            java.lang.Class<cz.msebera.android.httpclient.extras.PRNGFixes$LinuxPRNGSecureRandomProvider> r2 = cz.msebera.android.httpclient.extras.PRNGFixes.LinuxPRNGSecureRandomProvider.class
            r3 = 0
            r0 = r0[r3]
            java.lang.Class r0 = r0.getClass()
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto L2a
        L22:
            cz.msebera.android.httpclient.extras.PRNGFixes$LinuxPRNGSecureRandomProvider r0 = new cz.msebera.android.httpclient.extras.PRNGFixes$LinuxPRNGSecureRandomProvider
            r0.<init>()
            java.security.Security.insertProviderAt(r0, r1)
        L2a:
            java.security.SecureRandom r0 = new java.security.SecureRandom
            r0.<init>()
            java.lang.Class<cz.msebera.android.httpclient.extras.PRNGFixes$LinuxPRNGSecureRandomProvider> r1 = cz.msebera.android.httpclient.extras.PRNGFixes.LinuxPRNGSecureRandomProvider.class
            java.security.Provider r2 = r0.getProvider()
            java.lang.Class r2 = r2.getClass()
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L7e
            java.lang.String r0 = "SHA1PRNG"
            java.security.SecureRandom r0 = java.security.SecureRandom.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> L75
            java.lang.Class<cz.msebera.android.httpclient.extras.PRNGFixes$LinuxPRNGSecureRandomProvider> r1 = cz.msebera.android.httpclient.extras.PRNGFixes.LinuxPRNGSecureRandomProvider.class
            java.security.Provider r2 = r0.getProvider()
            java.lang.Class r2 = r2.getClass()
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L56
            return
        L56:
            java.lang.SecurityException r1 = new java.lang.SecurityException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "SecureRandom.getInstance(\"SHA1PRNG\") backed by wrong Provider: "
            r2.append(r3)
            java.security.Provider r0 = r0.getProvider()
            java.lang.Class r0 = r0.getClass()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
        L75:
            r0 = move-exception
            java.lang.SecurityException r1 = new java.lang.SecurityException
            java.lang.String r2 = "SHA1PRNG not available"
            r1.<init>(r2, r0)
            throw r1
        L7e:
            java.lang.SecurityException r1 = new java.lang.SecurityException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "new SecureRandom() backed by wrong Provider: "
            r2.append(r3)
            java.security.Provider r0 = r0.getProvider()
            java.lang.Class r0 = r0.getClass()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
    }
}
