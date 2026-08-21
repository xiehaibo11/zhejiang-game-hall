package org.bouncycastle.i18n;

public class MissingEntryException extends java.lang.RuntimeException {
    private java.lang.String debugMsg;
    protected final java.lang.String key;
    protected final java.lang.ClassLoader loader;
    protected final java.util.Locale locale;
    protected final java.lang.String resource;

    public MissingEntryException(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.util.Locale r4, java.lang.ClassLoader r5) {
            r0 = this;
            r0.<init>(r1)
            r0.resource = r2
            r0.key = r3
            r0.locale = r4
            r0.loader = r5
            return
    }

    public MissingEntryException(java.lang.String r1, java.lang.Throwable r2, java.lang.String r3, java.lang.String r4, java.util.Locale r5, java.lang.ClassLoader r6) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.resource = r3
            r0.key = r4
            r0.locale = r5
            r0.loader = r6
            return
    }

    public java.lang.ClassLoader getClassLoader() {
            r1 = this;
            java.lang.ClassLoader r0 = r1.loader
            return r0
    }

    public java.lang.String getDebugMsg() {
            r4 = this;
            java.lang.String r0 = r4.debugMsg
            if (r0 != 0) goto L74
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Can not find entry "
            r0.append(r1)
            java.lang.String r1 = r4.key
            r0.append(r1)
            java.lang.String r1 = " in resource file "
            r0.append(r1)
            java.lang.String r1 = r4.resource
            r0.append(r1)
            java.lang.String r1 = " for the locale "
            r0.append(r1)
            java.util.Locale r1 = r4.locale
            r0.append(r1)
            java.lang.String r1 = "."
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r4.debugMsg = r0
            java.lang.ClassLoader r0 = r4.loader
            boolean r1 = r0 instanceof java.net.URLClassLoader
            if (r1 == 0) goto L74
            java.net.URLClassLoader r0 = (java.net.URLClassLoader) r0
            java.net.URL[] r0 = r0.getURLs()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r4.debugMsg
            r1.append(r2)
            java.lang.String r2 = " The following entries in the classpath were searched: "
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r4.debugMsg = r1
            r1 = 0
        L54:
            int r2 = r0.length
            if (r1 == r2) goto L74
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r4.debugMsg
            r2.append(r3)
            r3 = r0[r1]
            r2.append(r3)
            java.lang.String r3 = " "
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r4.debugMsg = r2
            int r1 = r1 + 1
            goto L54
        L74:
            java.lang.String r0 = r4.debugMsg
            return r0
    }

    public java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = r1.key
            return r0
    }

    public java.util.Locale getLocale() {
            r1 = this;
            java.util.Locale r0 = r1.locale
            return r0
    }

    public java.lang.String getResource() {
            r1 = this;
            java.lang.String r0 = r1.resource
            return r0
    }
}
