package cz.msebera.android.httpclient.params;

@cz.msebera.android.httpclient.annotation.ThreadSafe
@java.lang.Deprecated
public class BasicHttpParams extends cz.msebera.android.httpclient.params.AbstractHttpParams implements java.io.Serializable, java.lang.Cloneable {
    private static final long serialVersionUID = -7086398485908701455L;
    private final java.util.Map<java.lang.String, java.lang.Object> parameters;

    public BasicHttpParams() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.parameters = r0
            return
    }

    public void clear() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.parameters
            r0.clear()
            return
    }

    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            java.lang.Object r0 = super.clone()
            cz.msebera.android.httpclient.params.BasicHttpParams r0 = (cz.msebera.android.httpclient.params.BasicHttpParams) r0
            r1.copyParams(r0)
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.params.HttpParams copy() {
            r2 = this;
            java.lang.Object r0 = r2.clone()     // Catch: java.lang.CloneNotSupportedException -> L7
            cz.msebera.android.httpclient.params.HttpParams r0 = (cz.msebera.android.httpclient.params.HttpParams) r0     // Catch: java.lang.CloneNotSupportedException -> L7
            return r0
        L7:
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            java.lang.String r1 = "Cloning not supported"
            r0.<init>(r1)
            throw r0
    }

    public void copyParams(cz.msebera.android.httpclient.params.HttpParams r4) {
            r3 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r3.parameters
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L24
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r1 = r1.getValue()
            r4.setParameter(r2, r1)
            goto La
        L24:
            return
    }

    @Override
    public java.util.Set<java.lang.String> getNames() {
            r2 = this;
            java.util.HashSet r0 = new java.util.HashSet
            java.util.Map<java.lang.String, java.lang.Object> r1 = r2.parameters
            java.util.Set r1 = r1.keySet()
            r0.<init>(r1)
            return r0
    }

    @Override
    public java.lang.Object getParameter(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.parameters
            java.lang.Object r2 = r0.get(r2)
            return r2
    }

    public boolean isParameterSet(java.lang.String r1) {
            r0 = this;
            java.lang.Object r1 = r0.getParameter(r1)
            if (r1 == 0) goto L8
            r1 = 1
            goto L9
        L8:
            r1 = 0
        L9:
            return r1
    }

    public boolean isParameterSetLocally(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.parameters
            java.lang.Object r2 = r0.get(r2)
            if (r2 == 0) goto La
            r2 = 1
            goto Lb
        La:
            r2 = 0
        Lb:
            return r2
    }

    @Override
    public boolean removeParameter(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.parameters
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto Lf
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.parameters
            r0.remove(r2)
            r2 = 1
            return r2
        Lf:
            r2 = 0
            return r2
    }

    @Override
    public cz.msebera.android.httpclient.params.HttpParams setParameter(java.lang.String r2, java.lang.Object r3) {
            r1 = this;
            if (r2 != 0) goto L3
            return r1
        L3:
            if (r3 == 0) goto Lb
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.parameters
            r0.put(r2, r3)
            goto L10
        Lb:
            java.util.Map<java.lang.String, java.lang.Object> r3 = r1.parameters
            r3.remove(r2)
        L10:
            return r1
    }

    public void setParameters(java.lang.String[] r4, java.lang.Object r5) {
            r3 = this;
            int r0 = r4.length
            r1 = 0
        L2:
            if (r1 >= r0) goto Lc
            r2 = r4[r1]
            r3.setParameter(r2, r5)
            int r1 = r1 + 1
            goto L2
        Lc:
            return
    }
}
