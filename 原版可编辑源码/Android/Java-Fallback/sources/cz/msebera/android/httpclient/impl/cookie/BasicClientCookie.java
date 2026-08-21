package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class BasicClientCookie implements cz.msebera.android.httpclient.cookie.SetCookie, cz.msebera.android.httpclient.cookie.ClientCookie, java.lang.Cloneable, java.io.Serializable {
    private static final long serialVersionUID = -3869795591041535538L;
    private java.util.Map<java.lang.String, java.lang.String> attribs;
    private java.lang.String cookieComment;
    private java.lang.String cookieDomain;
    private java.util.Date cookieExpiryDate;
    private java.lang.String cookiePath;
    private int cookieVersion;
    private java.util.Date creationDate;
    private boolean isSecure;
    private final java.lang.String name;
    private java.lang.String value;

    public BasicClientCookie(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Name"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.name = r2
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>()
            r1.attribs = r2
            r1.value = r3
            return
    }

    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r3 = this;
            java.lang.Object r0 = super.clone()
            cz.msebera.android.httpclient.impl.cookie.BasicClientCookie r0 = (cz.msebera.android.httpclient.impl.cookie.BasicClientCookie) r0
            java.util.HashMap r1 = new java.util.HashMap
            java.util.Map<java.lang.String, java.lang.String> r2 = r3.attribs
            r1.<init>(r2)
            r0.attribs = r1
            return r0
    }

    @Override
    public boolean containsAttribute(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.attribs
            boolean r2 = r0.containsKey(r2)
            return r2
    }

    @Override
    public java.lang.String getAttribute(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.attribs
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            return r2
    }

    @Override
    public java.lang.String getComment() {
            r1 = this;
            java.lang.String r0 = r1.cookieComment
            return r0
    }

    @Override
    public java.lang.String getCommentURL() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.util.Date getCreationDate() {
            r1 = this;
            java.util.Date r0 = r1.creationDate
            return r0
    }

    @Override
    public java.lang.String getDomain() {
            r1 = this;
            java.lang.String r0 = r1.cookieDomain
            return r0
    }

    @Override
    public java.util.Date getExpiryDate() {
            r1 = this;
            java.util.Date r0 = r1.cookieExpiryDate
            return r0
    }

    @Override
    public java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.name
            return r0
    }

    @Override
    public java.lang.String getPath() {
            r1 = this;
            java.lang.String r0 = r1.cookiePath
            return r0
    }

    @Override
    public int[] getPorts() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String getValue() {
            r1 = this;
            java.lang.String r0 = r1.value
            return r0
    }

    @Override
    public int getVersion() {
            r1 = this;
            int r0 = r1.cookieVersion
            return r0
    }

    @Override
    public boolean isExpired(java.util.Date r5) {
            r4 = this;
            java.lang.String r0 = "Date"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            java.util.Date r0 = r4.cookieExpiryDate
            if (r0 == 0) goto L17
            long r0 = r0.getTime()
            long r2 = r5.getTime()
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 > 0) goto L17
            r5 = 1
            goto L18
        L17:
            r5 = 0
        L18:
            return r5
    }

    @Override
    public boolean isPersistent() {
            r1 = this;
            java.util.Date r0 = r1.cookieExpiryDate
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    @Override
    public boolean isSecure() {
            r1 = this;
            boolean r0 = r1.isSecure
            return r0
    }

    public boolean removeAttribute(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.attribs
            java.lang.Object r2 = r0.remove(r2)
            if (r2 == 0) goto La
            r2 = 1
            goto Lb
        La:
            r2 = 0
        Lb:
            return r2
    }

    public void setAttribute(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.attribs
            r0.put(r2, r3)
            return
    }

    @Override
    public void setComment(java.lang.String r1) {
            r0 = this;
            r0.cookieComment = r1
            return
    }

    public void setCreationDate(java.util.Date r1) {
            r0 = this;
            r0.creationDate = r1
            return
    }

    @Override
    public void setDomain(java.lang.String r2) {
            r1 = this;
            if (r2 == 0) goto Lb
            java.util.Locale r0 = java.util.Locale.ROOT
            java.lang.String r2 = r2.toLowerCase(r0)
            r1.cookieDomain = r2
            goto Le
        Lb:
            r2 = 0
            r1.cookieDomain = r2
        Le:
            return
    }

    @Override
    public void setExpiryDate(java.util.Date r1) {
            r0 = this;
            r0.cookieExpiryDate = r1
            return
    }

    @Override
    public void setPath(java.lang.String r1) {
            r0 = this;
            r0.cookiePath = r1
            return
    }

    @Override
    public void setSecure(boolean r1) {
            r0 = this;
            r0.isSecure = r1
            return
    }

    @Override
    public void setValue(java.lang.String r1) {
            r0 = this;
            r0.value = r1
            return
    }

    @Override
    public void setVersion(int r1) {
            r0 = this;
            r0.cookieVersion = r1
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[version: "
            r0.append(r1)
            int r1 = r3.cookieVersion
            java.lang.String r1 = java.lang.Integer.toString(r1)
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r2 = "[name: "
            r0.append(r2)
            java.lang.String r2 = r3.name
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "[value: "
            r0.append(r2)
            java.lang.String r2 = r3.value
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "[domain: "
            r0.append(r2)
            java.lang.String r2 = r3.cookieDomain
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "[path: "
            r0.append(r2)
            java.lang.String r2 = r3.cookiePath
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "[expiry: "
            r0.append(r2)
            java.util.Date r2 = r3.cookieExpiryDate
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
