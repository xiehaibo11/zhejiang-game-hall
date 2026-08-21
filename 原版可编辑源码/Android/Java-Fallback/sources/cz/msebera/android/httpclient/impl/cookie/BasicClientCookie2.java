package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class BasicClientCookie2 extends cz.msebera.android.httpclient.impl.cookie.BasicClientCookie implements cz.msebera.android.httpclient.cookie.SetCookie2 {
    private static final long serialVersionUID = -7744598295706617057L;
    private java.lang.String commentURL;
    private boolean discard;
    private int[] ports;

    public BasicClientCookie2(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r2 = this;
            java.lang.Object r0 = super.clone()
            cz.msebera.android.httpclient.impl.cookie.BasicClientCookie2 r0 = (cz.msebera.android.httpclient.impl.cookie.BasicClientCookie2) r0
            int[] r1 = r2.ports
            if (r1 == 0) goto L12
            java.lang.Object r1 = r1.clone()
            int[] r1 = (int[]) r1
            r0.ports = r1
        L12:
            return r0
    }

    @Override
    public java.lang.String getCommentURL() {
            r1 = this;
            java.lang.String r0 = r1.commentURL
            return r0
    }

    @Override
    public int[] getPorts() {
            r1 = this;
            int[] r0 = r1.ports
            return r0
    }

    @Override
    public boolean isExpired(java.util.Date r2) {
            r1 = this;
            boolean r0 = r1.discard
            if (r0 != 0) goto Ld
            boolean r2 = super.isExpired(r2)
            if (r2 == 0) goto Lb
            goto Ld
        Lb:
            r2 = 0
            goto Le
        Ld:
            r2 = 1
        Le:
            return r2
    }

    @Override
    public boolean isPersistent() {
            r1 = this;
            boolean r0 = r1.discard
            if (r0 != 0) goto Lc
            boolean r0 = super.isPersistent()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    @Override
    public void setCommentURL(java.lang.String r1) {
            r0 = this;
            r0.commentURL = r1
            return
    }

    @Override
    public void setDiscard(boolean r1) {
            r0 = this;
            r0.discard = r1
            return
    }

    @Override
    public void setPorts(int[] r1) {
            r0 = this;
            r0.ports = r1
            return
    }
}
