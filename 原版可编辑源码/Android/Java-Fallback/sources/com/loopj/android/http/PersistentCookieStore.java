package com.loopj.android.http;

public class PersistentCookieStore implements cz.msebera.android.httpclient.client.CookieStore {
    private static final java.lang.String COOKIE_NAME_PREFIX = "cookie_";
    private static final java.lang.String COOKIE_NAME_STORE = "names";
    private static final java.lang.String COOKIE_PREFS = "CookiePrefsFile";
    private static final java.lang.String LOG_TAG = "PersistentCookieStore";
    private final android.content.SharedPreferences cookiePrefs;
    private final java.util.concurrent.ConcurrentHashMap<java.lang.String, cz.msebera.android.httpclient.cookie.Cookie> cookies;
    private boolean omitNonPersistentCookies;

    public PersistentCookieStore(android.content.Context r8) {
            r7 = this;
            r7.<init>()
            r0 = 0
            r7.omitNonPersistentCookies = r0
            java.lang.String r1 = "CookiePrefsFile"
            android.content.SharedPreferences r8 = r8.getSharedPreferences(r1, r0)
            r7.cookiePrefs = r8
            java.util.concurrent.ConcurrentHashMap r8 = new java.util.concurrent.ConcurrentHashMap
            r8.<init>()
            r7.cookies = r8
            android.content.SharedPreferences r8 = r7.cookiePrefs
            r1 = 0
            java.lang.String r2 = "names"
            java.lang.String r8 = r8.getString(r2, r1)
            if (r8 == 0) goto L5a
            java.lang.String r2 = ","
            java.lang.String[] r8 = android.text.TextUtils.split(r8, r2)
            int r2 = r8.length
        L27:
            if (r0 >= r2) goto L52
            r3 = r8[r0]
            android.content.SharedPreferences r4 = r7.cookiePrefs
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "cookie_"
            r5.append(r6)
            r5.append(r3)
            java.lang.String r5 = r5.toString()
            java.lang.String r4 = r4.getString(r5, r1)
            if (r4 == 0) goto L4f
            cz.msebera.android.httpclient.cookie.Cookie r4 = r7.decodeCookie(r4)
            if (r4 == 0) goto L4f
            java.util.concurrent.ConcurrentHashMap<java.lang.String, cz.msebera.android.httpclient.cookie.Cookie> r5 = r7.cookies
            r5.put(r3, r4)
        L4f:
            int r0 = r0 + 1
            goto L27
        L52:
            java.util.Date r8 = new java.util.Date
            r8.<init>()
            r7.clearExpired(r8)
        L5a:
            return
    }

    @Override
    public void addCookie(cz.msebera.android.httpclient.cookie.Cookie r5) {
            r4 = this;
            boolean r0 = r4.omitNonPersistentCookies
            if (r0 == 0) goto Lb
            boolean r0 = r5.isPersistent()
            if (r0 != 0) goto Lb
            return
        Lb:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r5.getName()
            r0.append(r1)
            java.lang.String r1 = r5.getDomain()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.util.Date r1 = new java.util.Date
            r1.<init>()
            boolean r1 = r5.isExpired(r1)
            if (r1 != 0) goto L33
            java.util.concurrent.ConcurrentHashMap<java.lang.String, cz.msebera.android.httpclient.cookie.Cookie> r1 = r4.cookies
            r1.put(r0, r5)
            goto L38
        L33:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, cz.msebera.android.httpclient.cookie.Cookie> r1 = r4.cookies
            r1.remove(r0)
        L38:
            android.content.SharedPreferences r1 = r4.cookiePrefs
            android.content.SharedPreferences$Editor r1 = r1.edit()
            java.util.concurrent.ConcurrentHashMap<java.lang.String, cz.msebera.android.httpclient.cookie.Cookie> r2 = r4.cookies
            java.util.Set r2 = r2.keySet()
            java.lang.String r3 = ","
            java.lang.String r2 = android.text.TextUtils.join(r3, r2)
            java.lang.String r3 = "names"
            r1.putString(r3, r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "cookie_"
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.loopj.android.http.SerializableCookie r2 = new com.loopj.android.http.SerializableCookie
            r2.<init>(r5)
            java.lang.String r5 = r4.encodeCookie(r2)
            r1.putString(r0, r5)
            r1.commit()
            return
    }

    protected java.lang.String byteArrayToHexString(byte[] r6) {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            int r1 = r6.length
            int r1 = r1 * 2
            r0.<init>(r1)
            int r1 = r6.length
            r2 = 0
        La:
            if (r2 >= r1) goto L23
            r3 = r6[r2]
            r3 = r3 & 255(0xff, float:3.57E-43)
            r4 = 16
            if (r3 >= r4) goto L19
            r4 = 48
            r0.append(r4)
        L19:
            java.lang.String r3 = java.lang.Integer.toHexString(r3)
            r0.append(r3)
            int r2 = r2 + 1
            goto La
        L23:
            java.lang.String r6 = r0.toString()
            java.util.Locale r0 = java.util.Locale.US
            java.lang.String r6 = r6.toUpperCase(r0)
            return r6
    }

    @Override
    public void clear() {
            r5 = this;
            android.content.SharedPreferences r0 = r5.cookiePrefs
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.util.concurrent.ConcurrentHashMap<java.lang.String, cz.msebera.android.httpclient.cookie.Cookie> r1 = r5.cookies
            java.util.Set r1 = r1.keySet()
            java.util.Iterator r1 = r1.iterator()
        L10:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L31
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "cookie_"
            r3.append(r4)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            r0.remove(r2)
            goto L10
        L31:
            java.lang.String r1 = "names"
            r0.remove(r1)
            r0.commit()
            java.util.concurrent.ConcurrentHashMap<java.lang.String, cz.msebera.android.httpclient.cookie.Cookie> r0 = r5.cookies
            r0.clear()
            return
    }

    @Override
    public boolean clearExpired(java.util.Date r6) {
            r5 = this;
            android.content.SharedPreferences r0 = r5.cookiePrefs
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.util.concurrent.ConcurrentHashMap<java.lang.String, cz.msebera.android.httpclient.cookie.Cookie> r1 = r5.cookies
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
            r2 = 0
        L11:
            boolean r3 = r1.hasNext()
            if (r3 == 0) goto L4a
            java.lang.Object r3 = r1.next()
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3
            java.lang.Object r4 = r3.getKey()
            java.lang.String r4 = (java.lang.String) r4
            java.lang.Object r3 = r3.getValue()
            cz.msebera.android.httpclient.cookie.Cookie r3 = (cz.msebera.android.httpclient.cookie.Cookie) r3
            boolean r3 = r3.isExpired(r6)
            if (r3 == 0) goto L11
            java.util.concurrent.ConcurrentHashMap<java.lang.String, cz.msebera.android.httpclient.cookie.Cookie> r2 = r5.cookies
            r2.remove(r4)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "cookie_"
            r2.append(r3)
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            r0.remove(r2)
            r2 = 1
            goto L11
        L4a:
            if (r2 == 0) goto L5d
            java.util.concurrent.ConcurrentHashMap<java.lang.String, cz.msebera.android.httpclient.cookie.Cookie> r6 = r5.cookies
            java.util.Set r6 = r6.keySet()
            java.lang.String r1 = ","
            java.lang.String r6 = android.text.TextUtils.join(r1, r6)
            java.lang.String r1 = "names"
            r0.putString(r1, r6)
        L5d:
            r0.commit()
            return r2
    }

    protected cz.msebera.android.httpclient.cookie.Cookie decodeCookie(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = "PersistentCookieStore"
            byte[] r4 = r3.hexStringToByteArray(r4)
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream
            r1.<init>(r4)
            java.io.ObjectInputStream r4 = new java.io.ObjectInputStream     // Catch: java.lang.ClassNotFoundException -> L1b java.io.IOException -> L24
            r4.<init>(r1)     // Catch: java.lang.ClassNotFoundException -> L1b java.io.IOException -> L24
            java.lang.Object r4 = r4.readObject()     // Catch: java.lang.ClassNotFoundException -> L1b java.io.IOException -> L24
            com.loopj.android.http.SerializableCookie r4 = (com.loopj.android.http.SerializableCookie) r4     // Catch: java.lang.ClassNotFoundException -> L1b java.io.IOException -> L24
            cz.msebera.android.httpclient.cookie.Cookie r4 = r4.getCookie()     // Catch: java.lang.ClassNotFoundException -> L1b java.io.IOException -> L24
            goto L2d
        L1b:
            r4 = move-exception
            com.loopj.android.http.LogInterface r1 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r2 = "ClassNotFoundException in decodeCookie"
            r1.d(r0, r2, r4)
            goto L2c
        L24:
            r4 = move-exception
            com.loopj.android.http.LogInterface r1 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r2 = "IOException in decodeCookie"
            r1.d(r0, r2, r4)
        L2c:
            r4 = 0
        L2d:
            return r4
    }

    public void deleteCookie(cz.msebera.android.httpclient.cookie.Cookie r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r4.getName()
            r0.append(r1)
            java.lang.String r4 = r4.getDomain()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.util.concurrent.ConcurrentHashMap<java.lang.String, cz.msebera.android.httpclient.cookie.Cookie> r0 = r3.cookies
            r0.remove(r4)
            android.content.SharedPreferences r0 = r3.cookiePrefs
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "cookie_"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.remove(r4)
            r0.commit()
            return
    }

    protected java.lang.String encodeCookie(com.loopj.android.http.SerializableCookie r5) {
            r4 = this;
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream
            r1.<init>()
            java.io.ObjectOutputStream r2 = new java.io.ObjectOutputStream     // Catch: java.io.IOException -> L1a
            r2.<init>(r1)     // Catch: java.io.IOException -> L1a
            r2.writeObject(r5)     // Catch: java.io.IOException -> L1a
            byte[] r5 = r1.toByteArray()
            java.lang.String r5 = r4.byteArrayToHexString(r5)
            return r5
        L1a:
            r5 = move-exception
            com.loopj.android.http.LogInterface r1 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r2 = "PersistentCookieStore"
            java.lang.String r3 = "IOException in encodeCookie"
            r1.d(r2, r3, r5)
            return r0
    }

    @Override
    public java.util.List<cz.msebera.android.httpclient.cookie.Cookie> getCookies() {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.concurrent.ConcurrentHashMap<java.lang.String, cz.msebera.android.httpclient.cookie.Cookie> r1 = r2.cookies
            java.util.Collection r1 = r1.values()
            r0.<init>(r1)
            return r0
    }

    protected byte[] hexStringToByteArray(java.lang.String r8) {
            r7 = this;
            int r0 = r8.length()
            int r1 = r0 / 2
            byte[] r1 = new byte[r1]
            r2 = 0
        L9:
            if (r2 >= r0) goto L2a
            int r3 = r2 / 2
            char r4 = r8.charAt(r2)
            r5 = 16
            int r4 = java.lang.Character.digit(r4, r5)
            int r4 = r4 << 4
            int r6 = r2 + 1
            char r6 = r8.charAt(r6)
            int r5 = java.lang.Character.digit(r6, r5)
            int r4 = r4 + r5
            byte r4 = (byte) r4
            r1[r3] = r4
            int r2 = r2 + 2
            goto L9
        L2a:
            return r1
    }

    public void setOmitNonPersistentCookies(boolean r1) {
            r0 = this;
            r0.omitNonPersistentCookies = r1
            return
    }
}
