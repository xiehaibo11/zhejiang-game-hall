package com.loopj.android.http;

public class SerializableCookie implements java.io.Serializable {
    private static final long serialVersionUID = 6374381828722046732L;
    private transient cz.msebera.android.httpclient.impl.cookie.BasicClientCookie clientCookie;
    private final transient cz.msebera.android.httpclient.cookie.Cookie cookie;

    public SerializableCookie(cz.msebera.android.httpclient.cookie.Cookie r1) {
            r0 = this;
            r0.<init>()
            r0.cookie = r1
            return
    }

    private void readObject(java.io.ObjectInputStream r4) throws java.io.IOException, java.lang.ClassNotFoundException {
            r3 = this;
            java.lang.Object r0 = r4.readObject()
            java.lang.String r0 = (java.lang.String) r0
            java.lang.Object r1 = r4.readObject()
            java.lang.String r1 = (java.lang.String) r1
            cz.msebera.android.httpclient.impl.cookie.BasicClientCookie r2 = new cz.msebera.android.httpclient.impl.cookie.BasicClientCookie
            r2.<init>(r0, r1)
            r3.clientCookie = r2
            cz.msebera.android.httpclient.impl.cookie.BasicClientCookie r0 = r3.clientCookie
            java.lang.Object r1 = r4.readObject()
            java.lang.String r1 = (java.lang.String) r1
            r0.setComment(r1)
            cz.msebera.android.httpclient.impl.cookie.BasicClientCookie r0 = r3.clientCookie
            java.lang.Object r1 = r4.readObject()
            java.lang.String r1 = (java.lang.String) r1
            r0.setDomain(r1)
            cz.msebera.android.httpclient.impl.cookie.BasicClientCookie r0 = r3.clientCookie
            java.lang.Object r1 = r4.readObject()
            java.util.Date r1 = (java.util.Date) r1
            r0.setExpiryDate(r1)
            cz.msebera.android.httpclient.impl.cookie.BasicClientCookie r0 = r3.clientCookie
            java.lang.Object r1 = r4.readObject()
            java.lang.String r1 = (java.lang.String) r1
            r0.setPath(r1)
            cz.msebera.android.httpclient.impl.cookie.BasicClientCookie r0 = r3.clientCookie
            int r1 = r4.readInt()
            r0.setVersion(r1)
            cz.msebera.android.httpclient.impl.cookie.BasicClientCookie r0 = r3.clientCookie
            boolean r4 = r4.readBoolean()
            r0.setSecure(r4)
            return
    }

    private void writeObject(java.io.ObjectOutputStream r2) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.cookie.Cookie r0 = r1.cookie
            java.lang.String r0 = r0.getName()
            r2.writeObject(r0)
            cz.msebera.android.httpclient.cookie.Cookie r0 = r1.cookie
            java.lang.String r0 = r0.getValue()
            r2.writeObject(r0)
            cz.msebera.android.httpclient.cookie.Cookie r0 = r1.cookie
            java.lang.String r0 = r0.getComment()
            r2.writeObject(r0)
            cz.msebera.android.httpclient.cookie.Cookie r0 = r1.cookie
            java.lang.String r0 = r0.getDomain()
            r2.writeObject(r0)
            cz.msebera.android.httpclient.cookie.Cookie r0 = r1.cookie
            java.util.Date r0 = r0.getExpiryDate()
            r2.writeObject(r0)
            cz.msebera.android.httpclient.cookie.Cookie r0 = r1.cookie
            java.lang.String r0 = r0.getPath()
            r2.writeObject(r0)
            cz.msebera.android.httpclient.cookie.Cookie r0 = r1.cookie
            int r0 = r0.getVersion()
            r2.writeInt(r0)
            cz.msebera.android.httpclient.cookie.Cookie r0 = r1.cookie
            boolean r0 = r0.isSecure()
            r2.writeBoolean(r0)
            return
    }

    public cz.msebera.android.httpclient.cookie.Cookie getCookie() {
            r2 = this;
            cz.msebera.android.httpclient.cookie.Cookie r0 = r2.cookie
            cz.msebera.android.httpclient.impl.cookie.BasicClientCookie r1 = r2.clientCookie
            if (r1 == 0) goto L7
            r0 = r1
        L7:
            return r0
    }
}
