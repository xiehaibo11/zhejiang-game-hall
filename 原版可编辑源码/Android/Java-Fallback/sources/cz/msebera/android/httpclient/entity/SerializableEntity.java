package cz.msebera.android.httpclient.entity;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class SerializableEntity extends cz.msebera.android.httpclient.entity.AbstractHttpEntity {
    private java.io.Serializable objRef;
    private byte[] objSer;

    public SerializableEntity(java.io.Serializable r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Source object"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.objRef = r2
            return
    }

    public SerializableEntity(java.io.Serializable r2, boolean r3) throws java.io.IOException {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Source object"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            if (r3 == 0) goto Le
            r1.createBytes(r2)
            goto L10
        Le:
            r1.objRef = r2
        L10:
            return
    }

    private void createBytes(java.io.Serializable r3) throws java.io.IOException {
            r2 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            java.io.ObjectOutputStream r1 = new java.io.ObjectOutputStream
            r1.<init>(r0)
            r1.writeObject(r3)
            r1.flush()
            byte[] r3 = r0.toByteArray()
            r2.objSer = r3
            return
    }

    @Override
    public java.io.InputStream getContent() throws java.io.IOException, java.lang.IllegalStateException {
            r2 = this;
            byte[] r0 = r2.objSer
            if (r0 != 0) goto L9
            java.io.Serializable r0 = r2.objRef
            r2.createBytes(r0)
        L9:
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            byte[] r1 = r2.objSer
            r0.<init>(r1)
            return r0
    }

    @Override
    public long getContentLength() {
            r2 = this;
            byte[] r0 = r2.objSer
            if (r0 != 0) goto L7
            r0 = -1
            return r0
        L7:
            int r0 = r0.length
            long r0 = (long) r0
            return r0
    }

    @Override
    public boolean isRepeatable() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public boolean isStreaming() {
            r1 = this;
            byte[] r0 = r1.objSer
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    @Override
    public void writeTo(java.io.OutputStream r2) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "Output stream"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            byte[] r0 = r1.objSer
            if (r0 != 0) goto L17
            java.io.ObjectOutputStream r0 = new java.io.ObjectOutputStream
            r0.<init>(r2)
            java.io.Serializable r2 = r1.objRef
            r0.writeObject(r2)
            r0.flush()
            goto L1d
        L17:
            r2.write(r0)
            r2.flush()
        L1d:
            return
    }
}
