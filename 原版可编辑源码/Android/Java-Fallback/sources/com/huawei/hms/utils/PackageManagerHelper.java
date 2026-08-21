package com.huawei.hms.utils;

public class PackageManagerHelper {
    public final android.content.pm.PackageManager a;

    public enum PackageStates extends java.lang.Enum<com.huawei.hms.utils.PackageManagerHelper.PackageStates> {
        public static final com.huawei.hms.utils.PackageManagerHelper.PackageStates DISABLED = null;
        public static final com.huawei.hms.utils.PackageManagerHelper.PackageStates ENABLED = null;
        public static final com.huawei.hms.utils.PackageManagerHelper.PackageStates NOT_INSTALLED = null;
        public static final com.huawei.hms.utils.PackageManagerHelper.PackageStates SPOOF = null;
        public static final com.huawei.hms.utils.PackageManagerHelper.PackageStates[] a = null;

        static {
                com.huawei.hms.utils.PackageManagerHelper$PackageStates r0 = new com.huawei.hms.utils.PackageManagerHelper$PackageStates
                r1 = 0
                java.lang.String r2 = "ENABLED"
                r0.<init>(r2, r1)
                com.huawei.hms.utils.PackageManagerHelper.PackageStates.ENABLED = r0
                com.huawei.hms.utils.PackageManagerHelper$PackageStates r0 = new com.huawei.hms.utils.PackageManagerHelper$PackageStates
                r2 = 1
                java.lang.String r3 = "DISABLED"
                r0.<init>(r3, r2)
                com.huawei.hms.utils.PackageManagerHelper.PackageStates.DISABLED = r0
                com.huawei.hms.utils.PackageManagerHelper$PackageStates r0 = new com.huawei.hms.utils.PackageManagerHelper$PackageStates
                r3 = 2
                java.lang.String r4 = "NOT_INSTALLED"
                r0.<init>(r4, r3)
                com.huawei.hms.utils.PackageManagerHelper.PackageStates.NOT_INSTALLED = r0
                com.huawei.hms.utils.PackageManagerHelper$PackageStates r0 = new com.huawei.hms.utils.PackageManagerHelper$PackageStates
                r4 = 3
                java.lang.String r5 = "SPOOF"
                r0.<init>(r5, r4)
                com.huawei.hms.utils.PackageManagerHelper.PackageStates.SPOOF = r0
                r5 = 4
                com.huawei.hms.utils.PackageManagerHelper$PackageStates[] r5 = new com.huawei.hms.utils.PackageManagerHelper.PackageStates[r5]
                com.huawei.hms.utils.PackageManagerHelper$PackageStates r6 = com.huawei.hms.utils.PackageManagerHelper.PackageStates.ENABLED
                r5[r1] = r6
                com.huawei.hms.utils.PackageManagerHelper$PackageStates r1 = com.huawei.hms.utils.PackageManagerHelper.PackageStates.DISABLED
                r5[r2] = r1
                com.huawei.hms.utils.PackageManagerHelper$PackageStates r1 = com.huawei.hms.utils.PackageManagerHelper.PackageStates.NOT_INSTALLED
                r5[r3] = r1
                r5[r4] = r0
                com.huawei.hms.utils.PackageManagerHelper.PackageStates.a = r5
                return
        }

        PackageStates(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.huawei.hms.utils.PackageManagerHelper.PackageStates valueOf(java.lang.String r1) {
                java.lang.Class<com.huawei.hms.utils.PackageManagerHelper$PackageStates> r0 = com.huawei.hms.utils.PackageManagerHelper.PackageStates.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.huawei.hms.utils.PackageManagerHelper$PackageStates r1 = (com.huawei.hms.utils.PackageManagerHelper.PackageStates) r1
                return r1
        }

        public static com.huawei.hms.utils.PackageManagerHelper.PackageStates[] values() {
                com.huawei.hms.utils.PackageManagerHelper$PackageStates[] r0 = com.huawei.hms.utils.PackageManagerHelper.PackageStates.a
                java.lang.Object r0 = r0.clone()
                com.huawei.hms.utils.PackageManagerHelper$PackageStates[] r0 = (com.huawei.hms.utils.PackageManagerHelper.PackageStates[]) r0
                return r0
        }
    }

    public PackageManagerHelper(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            android.content.pm.PackageManager r1 = r1.getPackageManager()
            r0.a = r1
            return
    }

    public final byte[] a(java.lang.String r6) {
            r5 = this;
            java.lang.String r0 = "PackageManagerHelper"
            java.lang.String r1 = "Failed to get application signature certificate fingerprint."
            r2 = 0
            android.content.pm.PackageManager r3 = r5.a     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L21
            r4 = 64
            android.content.pm.PackageInfo r6 = r3.getPackageInfo(r6, r4)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L21
            if (r6 == 0) goto L38
            android.content.pm.Signature[] r3 = r6.signatures     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L21
            if (r3 == 0) goto L38
            android.content.pm.Signature[] r3 = r6.signatures     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L21
            int r3 = r3.length     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L21
            if (r3 <= 0) goto L38
            android.content.pm.Signature[] r6 = r6.signatures     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L21
            r6 = r6[r2]     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L21
            byte[] r6 = r6.toByteArray()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L21
            return r6
        L21:
            r6 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            java.lang.String r6 = r6.getMessage()
            r3.append(r6)
            java.lang.String r6 = r3.toString()
            com.huawei.hms.support.log.HMSLog.e(r0, r6)
        L38:
            com.huawei.hms.support.log.HMSLog.e(r0, r1)
            byte[] r6 = new byte[r2]
            return r6
    }

    public java.lang.String getApplicationName(java.lang.String r3) {
            r2 = this;
            android.content.pm.PackageManager r0 = r2.a     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L12
            r1 = 0
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo(r3, r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L12
            android.content.pm.PackageManager r1 = r2.a     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L12
            java.lang.CharSequence r0 = r1.getApplicationLabel(r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L12
            java.lang.String r3 = r0.toString()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L12
            return r3
        L12:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Failed to get application name for "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "PackageManagerHelper"
            com.huawei.hms.support.log.HMSLog.e(r0, r3)
            r3 = 0
            return r3
    }

    public long getPackageFirstInstallTime(java.lang.String r5) {
            r4 = this;
            r0 = 0
            android.content.pm.PackageManager r2 = r4.a     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Ld
            r3 = 0
            android.content.pm.PackageInfo r5 = r2.getPackageInfo(r5, r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Ld
            if (r5 == 0) goto Ld
            long r0 = r5.firstInstallTime     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Ld
        Ld:
            return r0
    }

    public java.lang.String getPackageSignature(java.lang.String r2) {
            r1 = this;
            byte[] r2 = r1.a(r2)
            if (r2 == 0) goto L14
            int r0 = r2.length
            if (r0 != 0) goto La
            goto L14
        La:
            byte[] r2 = com.huawei.hms.utils.SHA256.digest(r2)
            r0 = 1
            java.lang.String r2 = com.huawei.hms.utils.HEX.encodeHexString(r2, r0)
            return r2
        L14:
            r2 = 0
            return r2
    }

    public com.huawei.hms.utils.PackageManagerHelper.PackageStates getPackageStates(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L9
            com.huawei.hms.utils.PackageManagerHelper$PackageStates r3 = com.huawei.hms.utils.PackageManagerHelper.PackageStates.NOT_INSTALLED
            return r3
        L9:
            android.content.pm.PackageManager r0 = r2.a     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1a
            r1 = 0
            android.content.pm.ApplicationInfo r3 = r0.getApplicationInfo(r3, r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1a
            boolean r3 = r3.enabled     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1a
            if (r3 == 0) goto L17
            com.huawei.hms.utils.PackageManagerHelper$PackageStates r3 = com.huawei.hms.utils.PackageManagerHelper.PackageStates.ENABLED     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1a
            return r3
        L17:
            com.huawei.hms.utils.PackageManagerHelper$PackageStates r3 = com.huawei.hms.utils.PackageManagerHelper.PackageStates.DISABLED     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1a
            return r3
        L1a:
            com.huawei.hms.utils.PackageManagerHelper$PackageStates r3 = com.huawei.hms.utils.PackageManagerHelper.PackageStates.NOT_INSTALLED
            return r3
    }

    public int getPackageVersionCode(java.lang.String r4) {
            r3 = this;
            r0 = 0
            android.content.pm.PackageManager r1 = r3.a     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Le
            r2 = 16
            android.content.pm.PackageInfo r4 = r1.getPackageInfo(r4, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Le
            if (r4 == 0) goto Le
            int r4 = r4.versionCode     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Le
            return r4
        Le:
            return r0
    }

    public java.lang.String getPackageVersionName(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = ""
            android.content.pm.PackageManager r1 = r3.a     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L13
            r2 = 16
            android.content.pm.PackageInfo r4 = r1.getPackageInfo(r4, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L13
            if (r4 == 0) goto L13
            java.lang.String r1 = r4.versionName     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L13
            if (r1 == 0) goto L13
            java.lang.String r4 = r4.versionName     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L13
            return r4
        L13:
            return r0
    }

    public boolean hasProvider(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            r0 = 0
            android.content.pm.PackageManager r1 = r4.a     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L24
            r2 = 8
            android.content.pm.PackageInfo r5 = r1.getPackageInfo(r5, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L24
            if (r5 == 0) goto L24
            android.content.pm.ProviderInfo[] r1 = r5.providers     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L24
            if (r1 == 0) goto L24
            android.content.pm.ProviderInfo[] r5 = r5.providers     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L24
            int r1 = r5.length     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L24
            r2 = r0
        L13:
            if (r2 >= r1) goto L24
            r3 = r5[r2]     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L24
            java.lang.String r3 = r3.authority     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L24
            boolean r3 = r6.equals(r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L24
            if (r3 == 0) goto L21
            r5 = 1
            return r5
        L21:
            int r2 = r2 + 1
            goto L13
        L24:
            return r0
    }

    public boolean verifyPackageArchive(java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r3 = this;
            android.content.pm.PackageManager r0 = r3.a
            r1 = 64
            android.content.pm.PackageInfo r4 = r0.getPackageArchiveInfo(r4, r1)
            r0 = 0
            if (r4 == 0) goto L6c
            android.content.pm.Signature[] r1 = r4.signatures
            int r1 = r1.length
            if (r1 <= 0) goto L6c
            java.lang.String r1 = r4.packageName
            boolean r5 = r5.equals(r1)
            if (r5 != 0) goto L19
            return r0
        L19:
            r5 = 0
            android.content.pm.Signature[] r4 = r4.signatures     // Catch: java.lang.Throwable -> L45 java.security.cert.CertificateException -> L47 java.io.IOException -> L49
            r4 = r4[r0]     // Catch: java.lang.Throwable -> L45 java.security.cert.CertificateException -> L47 java.io.IOException -> L49
            byte[] r4 = r4.toByteArray()     // Catch: java.lang.Throwable -> L45 java.security.cert.CertificateException -> L47 java.io.IOException -> L49
            java.io.InputStream r5 = com.huawei.hms.utils.IOUtils.toInputStream(r4)     // Catch: java.lang.Throwable -> L45 java.security.cert.CertificateException -> L47 java.io.IOException -> L49
            java.lang.String r4 = "X.509"
            java.security.cert.CertificateFactory r4 = java.security.cert.CertificateFactory.getInstance(r4)     // Catch: java.lang.Throwable -> L45 java.security.cert.CertificateException -> L47 java.io.IOException -> L49
            java.security.cert.Certificate r4 = r4.generateCertificate(r5)     // Catch: java.lang.Throwable -> L45 java.security.cert.CertificateException -> L47 java.io.IOException -> L49
            byte[] r4 = r4.getEncoded()     // Catch: java.lang.Throwable -> L45 java.security.cert.CertificateException -> L47 java.io.IOException -> L49
            byte[] r4 = com.huawei.hms.utils.SHA256.digest(r4)     // Catch: java.lang.Throwable -> L45 java.security.cert.CertificateException -> L47 java.io.IOException -> L49
            r1 = 1
            java.lang.String r4 = com.huawei.hms.utils.HEX.encodeHexString(r4, r1)     // Catch: java.lang.Throwable -> L45 java.security.cert.CertificateException -> L47 java.io.IOException -> L49
            boolean r4 = r6.equalsIgnoreCase(r4)     // Catch: java.lang.Throwable -> L45 java.security.cert.CertificateException -> L47 java.io.IOException -> L49
            com.huawei.hms.utils.IOUtils.closeQuietly(r5)
            return r4
        L45:
            r4 = move-exception
            goto L68
        L47:
            r4 = move-exception
            goto L4a
        L49:
            r4 = move-exception
        L4a:
            java.lang.String r6 = "PackageManagerHelper"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L45
            r1.<init>()     // Catch: java.lang.Throwable -> L45
            java.lang.String r2 = "Failed to get application signature certificate fingerprint."
            r1.append(r2)     // Catch: java.lang.Throwable -> L45
            java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> L45
            r1.append(r4)     // Catch: java.lang.Throwable -> L45
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L45
            com.huawei.hms.support.log.HMSLog.e(r6, r4)     // Catch: java.lang.Throwable -> L45
            com.huawei.hms.utils.IOUtils.closeQuietly(r5)
            goto L6c
        L68:
            com.huawei.hms.utils.IOUtils.closeQuietly(r5)
            throw r4
        L6c:
            return r0
    }
}
