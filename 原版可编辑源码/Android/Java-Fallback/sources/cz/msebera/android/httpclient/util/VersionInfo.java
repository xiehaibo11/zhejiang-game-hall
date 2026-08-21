package cz.msebera.android.httpclient.util;

public class VersionInfo {
    public static final java.lang.String PROPERTY_MODULE = "info.module";
    public static final java.lang.String PROPERTY_RELEASE = "info.release";
    public static final java.lang.String PROPERTY_TIMESTAMP = "info.timestamp";
    public static final java.lang.String UNAVAILABLE = "UNAVAILABLE";
    public static final java.lang.String VERSION_PROPERTY_FILE = "version.properties";
    private final java.lang.String infoClassloader;
    private final java.lang.String infoModule;
    private final java.lang.String infoPackage;
    private final java.lang.String infoRelease;
    private final java.lang.String infoTimestamp;

    protected VersionInfo(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Package identifier"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.infoPackage = r2
            java.lang.String r2 = "UNAVAILABLE"
            if (r3 == 0) goto Lf
            goto L10
        Lf:
            r3 = r2
        L10:
            r1.infoModule = r3
            if (r4 == 0) goto L15
            goto L16
        L15:
            r4 = r2
        L16:
            r1.infoRelease = r4
            if (r5 == 0) goto L1b
            goto L1c
        L1b:
            r5 = r2
        L1c:
            r1.infoTimestamp = r5
            if (r6 == 0) goto L21
            r2 = r6
        L21:
            r1.infoClassloader = r2
            return
    }

    protected static cz.msebera.android.httpclient.util.VersionInfo fromMap(java.lang.String r10, java.util.Map<?, ?> r11, java.lang.ClassLoader r12) {
            java.lang.String r0 = "Package identifier"
            cz.msebera.android.httpclient.util.Args.notNull(r10, r0)
            r0 = 0
            if (r11 == 0) goto L51
            java.lang.String r1 = "info.module"
            java.lang.Object r1 = r11.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            r2 = 1
            if (r1 == 0) goto L1a
            int r3 = r1.length()
            if (r3 >= r2) goto L1a
            r1 = r0
        L1a:
            java.lang.String r3 = "info.release"
            java.lang.Object r3 = r11.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            if (r3 == 0) goto L33
            int r4 = r3.length()
            if (r4 < r2) goto L32
            java.lang.String r4 = "${pom.version}"
            boolean r4 = r3.equals(r4)
            if (r4 == 0) goto L33
        L32:
            r3 = r0
        L33:
            java.lang.String r4 = "info.timestamp"
            java.lang.Object r11 = r11.get(r4)
            java.lang.String r11 = (java.lang.String) r11
            if (r11 == 0) goto L4d
            int r4 = r11.length()
            if (r4 < r2) goto L4b
            java.lang.String r2 = "${mvn.timestamp}"
            boolean r2 = r11.equals(r2)
            if (r2 == 0) goto L4d
        L4b:
            r8 = r0
            goto L4e
        L4d:
            r8 = r11
        L4e:
            r6 = r1
            r7 = r3
            goto L54
        L51:
            r6 = r0
            r7 = r6
            r8 = r7
        L54:
            if (r12 == 0) goto L5a
            java.lang.String r0 = r12.toString()
        L5a:
            r9 = r0
            cz.msebera.android.httpclient.util.VersionInfo r11 = new cz.msebera.android.httpclient.util.VersionInfo
            r4 = r11
            r5 = r10
            r4.<init>(r5, r6, r7, r8, r9)
            return r11
    }

    public static java.lang.String getUserAgent(java.lang.String r2, java.lang.String r3, java.lang.Class<?> r4) {
            java.lang.ClassLoader r4 = r4.getClassLoader()
            cz.msebera.android.httpclient.util.VersionInfo r3 = loadVersionInfo(r3, r4)
            if (r3 == 0) goto Lf
            java.lang.String r3 = r3.getRelease()
            goto L11
        Lf:
            java.lang.String r3 = "UNAVAILABLE"
        L11:
            java.lang.String r4 = "java.version"
            java.lang.String r4 = java.lang.System.getProperty(r4)
            r0 = 3
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r2
            r2 = 1
            r0[r2] = r3
            r2 = 2
            r0[r2] = r4
            java.lang.String r2 = "%s/%s (Java/%s)"
            java.lang.String r2 = java.lang.String.format(r2, r0)
            return r2
    }

    public static cz.msebera.android.httpclient.util.VersionInfo loadVersionInfo(java.lang.String r4, java.lang.ClassLoader r5) {
            java.lang.String r0 = "Package identifier"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            if (r5 == 0) goto L8
            goto L10
        L8:
            java.lang.Thread r5 = java.lang.Thread.currentThread()
            java.lang.ClassLoader r5 = r5.getContextClassLoader()
        L10:
            r0 = 0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L46
            r1.<init>()     // Catch: java.io.IOException -> L46
            r2 = 46
            r3 = 47
            java.lang.String r2 = r4.replace(r2, r3)     // Catch: java.io.IOException -> L46
            r1.append(r2)     // Catch: java.io.IOException -> L46
            java.lang.String r2 = "/"
            r1.append(r2)     // Catch: java.io.IOException -> L46
            java.lang.String r2 = "version.properties"
            r1.append(r2)     // Catch: java.io.IOException -> L46
            java.lang.String r1 = r1.toString()     // Catch: java.io.IOException -> L46
            java.io.InputStream r1 = r5.getResourceAsStream(r1)     // Catch: java.io.IOException -> L46
            if (r1 == 0) goto L46
            java.util.Properties r2 = new java.util.Properties     // Catch: java.lang.Throwable -> L41
            r2.<init>()     // Catch: java.lang.Throwable -> L41
            r2.load(r1)     // Catch: java.lang.Throwable -> L41
            r1.close()     // Catch: java.io.IOException -> L47
            goto L47
        L41:
            r2 = move-exception
            r1.close()     // Catch: java.io.IOException -> L46
            throw r2     // Catch: java.io.IOException -> L46
        L46:
            r2 = r0
        L47:
            if (r2 == 0) goto L4d
            cz.msebera.android.httpclient.util.VersionInfo r0 = fromMap(r4, r2, r5)
        L4d:
            return r0
    }

    public static cz.msebera.android.httpclient.util.VersionInfo[] loadVersionInfo(java.lang.String[] r4, java.lang.ClassLoader r5) {
            java.lang.String r0 = "Package identifier array"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.util.ArrayList r0 = new java.util.ArrayList
            int r1 = r4.length
            r0.<init>(r1)
            int r1 = r4.length
            r2 = 0
        Ld:
            if (r2 >= r1) goto L1d
            r3 = r4[r2]
            cz.msebera.android.httpclient.util.VersionInfo r3 = loadVersionInfo(r3, r5)
            if (r3 == 0) goto L1a
            r0.add(r3)
        L1a:
            int r2 = r2 + 1
            goto Ld
        L1d:
            int r4 = r0.size()
            cz.msebera.android.httpclient.util.VersionInfo[] r4 = new cz.msebera.android.httpclient.util.VersionInfo[r4]
            java.lang.Object[] r4 = r0.toArray(r4)
            cz.msebera.android.httpclient.util.VersionInfo[] r4 = (cz.msebera.android.httpclient.util.VersionInfo[]) r4
            return r4
    }

    public final java.lang.String getClassloader() {
            r1 = this;
            java.lang.String r0 = r1.infoClassloader
            return r0
    }

    public final java.lang.String getModule() {
            r1 = this;
            java.lang.String r0 = r1.infoModule
            return r0
    }

    public final java.lang.String getPackage() {
            r1 = this;
            java.lang.String r0 = r1.infoPackage
            return r0
    }

    public final java.lang.String getRelease() {
            r1 = this;
            java.lang.String r0 = r1.infoRelease
            return r0
    }

    public final java.lang.String getTimestamp() {
            r1 = this;
            java.lang.String r0 = r1.infoTimestamp
            return r0
    }

    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = r4.infoPackage
            int r1 = r1.length()
            int r1 = r1 + 20
            java.lang.String r2 = r4.infoModule
            int r2 = r2.length()
            int r1 = r1 + r2
            java.lang.String r2 = r4.infoRelease
            int r2 = r2.length()
            int r1 = r1 + r2
            java.lang.String r2 = r4.infoTimestamp
            int r2 = r2.length()
            int r1 = r1 + r2
            java.lang.String r2 = r4.infoClassloader
            int r2 = r2.length()
            int r1 = r1 + r2
            r0.<init>(r1)
            java.lang.String r1 = "VersionInfo("
            r0.append(r1)
            java.lang.String r1 = r4.infoPackage
            r0.append(r1)
            r1 = 58
            r0.append(r1)
            java.lang.String r2 = r4.infoModule
            r0.append(r2)
            java.lang.String r2 = r4.infoRelease
            java.lang.String r3 = "UNAVAILABLE"
            boolean r2 = r3.equals(r2)
            if (r2 != 0) goto L4f
            r0.append(r1)
            java.lang.String r2 = r4.infoRelease
            r0.append(r2)
        L4f:
            java.lang.String r2 = r4.infoTimestamp
            boolean r2 = r3.equals(r2)
            if (r2 != 0) goto L5f
            r0.append(r1)
            java.lang.String r1 = r4.infoTimestamp
            r0.append(r1)
        L5f:
            r1 = 41
            r0.append(r1)
            java.lang.String r1 = r4.infoClassloader
            boolean r1 = r3.equals(r1)
            if (r1 != 0) goto L76
            r1 = 64
            r0.append(r1)
            java.lang.String r1 = r4.infoClassloader
            r0.append(r1)
        L76:
            java.lang.String r0 = r0.toString()
            return r0
    }
}
