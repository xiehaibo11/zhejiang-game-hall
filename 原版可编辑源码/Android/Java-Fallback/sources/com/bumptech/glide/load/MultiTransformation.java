package com.bumptech.glide.load;

public class MultiTransformation<T> implements com.bumptech.glide.load.Transformation<T> {
    private java.lang.String id;
    private final java.util.Collection<? extends com.bumptech.glide.load.Transformation<T>> transformations;

    public MultiTransformation(java.util.Collection<? extends com.bumptech.glide.load.Transformation<T>> r3) {
            r2 = this;
            r2.<init>()
            int r0 = r3.size()
            r1 = 1
            if (r0 < r1) goto Ld
            r2.transformations = r3
            return
        Ld:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "MultiTransformation must contain at least one Transformation"
            r3.<init>(r0)
            throw r3
    }

    @java.lang.SafeVarargs
    public MultiTransformation(com.bumptech.glide.load.Transformation<T>... r3) {
            r2 = this;
            r2.<init>()
            int r0 = r3.length
            r1 = 1
            if (r0 < r1) goto Le
            java.util.List r3 = java.util.Arrays.asList(r3)
            r2.transformations = r3
            return
        Le:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "MultiTransformation must contain at least one Transformation"
            r3.<init>(r0)
            throw r3
    }

    @Override
    public java.lang.String getId() {
            r3 = this;
            java.lang.String r0 = r3.id
            if (r0 != 0) goto L29
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.Collection<? extends com.bumptech.glide.load.Transformation<T>> r1 = r3.transformations
            java.util.Iterator r1 = r1.iterator()
        Lf:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L23
            java.lang.Object r2 = r1.next()
            com.bumptech.glide.load.Transformation r2 = (com.bumptech.glide.load.Transformation) r2
            java.lang.String r2 = r2.getId()
            r0.append(r2)
            goto Lf
        L23:
            java.lang.String r0 = r0.toString()
            r3.id = r0
        L29:
            java.lang.String r0 = r3.id
            return r0
    }

    @Override
    public com.bumptech.glide.load.engine.Resource<T> transform(com.bumptech.glide.load.engine.Resource<T> r5, int r6, int r7) {
            r4 = this;
            java.util.Collection<? extends com.bumptech.glide.load.Transformation<T>> r0 = r4.transformations
            java.util.Iterator r0 = r0.iterator()
            r1 = r5
        L7:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L2a
            java.lang.Object r2 = r0.next()
            com.bumptech.glide.load.Transformation r2 = (com.bumptech.glide.load.Transformation) r2
            com.bumptech.glide.load.engine.Resource r2 = r2.transform(r1, r6, r7)
            if (r1 == 0) goto L28
            boolean r3 = r1.equals(r5)
            if (r3 != 0) goto L28
            boolean r3 = r1.equals(r2)
            if (r3 != 0) goto L28
            r1.recycle()
        L28:
            r1 = r2
            goto L7
        L2a:
            return r1
    }
}
