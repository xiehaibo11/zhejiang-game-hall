package cz.msebera.android.httpclient.entity.mime;

public class Header implements java.lang.Iterable<cz.msebera.android.httpclient.entity.mime.MinimalField> {
    private final java.util.Map<java.lang.String, java.util.List<cz.msebera.android.httpclient.entity.mime.MinimalField>> fieldMap;
    private final java.util.List<cz.msebera.android.httpclient.entity.mime.MinimalField> fields;

    public Header() {
            r1 = this;
            r1.<init>()
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r1.fields = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.fieldMap = r0
            return
    }

    public void addField(cz.msebera.android.httpclient.entity.mime.MinimalField r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = r4.getName()
            java.util.Locale r1 = java.util.Locale.ROOT
            java.lang.String r0 = r0.toLowerCase(r1)
            java.util.Map<java.lang.String, java.util.List<cz.msebera.android.httpclient.entity.mime.MinimalField>> r1 = r3.fieldMap
            java.lang.Object r1 = r1.get(r0)
            java.util.List r1 = (java.util.List) r1
            if (r1 != 0) goto L21
            java.util.LinkedList r1 = new java.util.LinkedList
            r1.<init>()
            java.util.Map<java.lang.String, java.util.List<cz.msebera.android.httpclient.entity.mime.MinimalField>> r2 = r3.fieldMap
            r2.put(r0, r1)
        L21:
            r1.add(r4)
            java.util.List<cz.msebera.android.httpclient.entity.mime.MinimalField> r0 = r3.fields
            r0.add(r4)
            return
    }

    public cz.msebera.android.httpclient.entity.mime.MinimalField getField(java.lang.String r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            java.util.Locale r1 = java.util.Locale.ROOT
            java.lang.String r3 = r3.toLowerCase(r1)
            java.util.Map<java.lang.String, java.util.List<cz.msebera.android.httpclient.entity.mime.MinimalField>> r1 = r2.fieldMap
            java.lang.Object r3 = r1.get(r3)
            java.util.List r3 = (java.util.List) r3
            if (r3 == 0) goto L22
            boolean r1 = r3.isEmpty()
            if (r1 != 0) goto L22
            r0 = 0
            java.lang.Object r3 = r3.get(r0)
            cz.msebera.android.httpclient.entity.mime.MinimalField r3 = (cz.msebera.android.httpclient.entity.mime.MinimalField) r3
            return r3
        L22:
            return r0
    }

    public java.util.List<cz.msebera.android.httpclient.entity.mime.MinimalField> getFields() {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.List<cz.msebera.android.httpclient.entity.mime.MinimalField> r1 = r2.fields
            r0.<init>(r1)
            return r0
    }

    public java.util.List<cz.msebera.android.httpclient.entity.mime.MinimalField> getFields(java.lang.String r2) {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            java.util.Locale r0 = java.util.Locale.ROOT
            java.lang.String r2 = r2.toLowerCase(r0)
            java.util.Map<java.lang.String, java.util.List<cz.msebera.android.httpclient.entity.mime.MinimalField>> r0 = r1.fieldMap
            java.lang.Object r2 = r0.get(r2)
            java.util.List r2 = (java.util.List) r2
            if (r2 == 0) goto L21
            boolean r0 = r2.isEmpty()
            if (r0 == 0) goto L1b
            goto L21
        L1b:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>(r2)
            return r0
        L21:
            java.util.List r2 = java.util.Collections.emptyList()
            return r2
    }

    @Override
    public java.util.Iterator<cz.msebera.android.httpclient.entity.mime.MinimalField> iterator() {
            r1 = this;
            java.util.List<cz.msebera.android.httpclient.entity.mime.MinimalField> r0 = r1.fields
            java.util.List r0 = java.util.Collections.unmodifiableList(r0)
            java.util.Iterator r0 = r0.iterator()
            return r0
    }

    public int removeFields(java.lang.String r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            java.util.Locale r1 = java.util.Locale.ROOT
            java.lang.String r3 = r3.toLowerCase(r1)
            java.util.Map<java.lang.String, java.util.List<cz.msebera.android.httpclient.entity.mime.MinimalField>> r1 = r2.fieldMap
            java.lang.Object r3 = r1.remove(r3)
            java.util.List r3 = (java.util.List) r3
            if (r3 == 0) goto L25
            boolean r1 = r3.isEmpty()
            if (r1 == 0) goto L1b
            goto L25
        L1b:
            java.util.List<cz.msebera.android.httpclient.entity.mime.MinimalField> r0 = r2.fields
            r0.removeAll(r3)
            int r3 = r3.size()
            return r3
        L25:
            return r0
    }

    public void setField(cz.msebera.android.httpclient.entity.mime.MinimalField r7) {
            r6 = this;
            if (r7 != 0) goto L3
            return
        L3:
            java.lang.String r0 = r7.getName()
            java.util.Locale r1 = java.util.Locale.ROOT
            java.lang.String r0 = r0.toLowerCase(r1)
            java.util.Map<java.lang.String, java.util.List<cz.msebera.android.httpclient.entity.mime.MinimalField>> r1 = r6.fieldMap
            java.lang.Object r0 = r1.get(r0)
            java.util.List r0 = (java.util.List) r0
            if (r0 == 0) goto L57
            boolean r1 = r0.isEmpty()
            if (r1 == 0) goto L1e
            goto L57
        L1e:
            r0.clear()
            r0.add(r7)
            r0 = 0
            java.util.List<cz.msebera.android.httpclient.entity.mime.MinimalField> r1 = r6.fields
            java.util.Iterator r1 = r1.iterator()
            r2 = -1
            r0 = -1
            r3 = 0
        L2e:
            boolean r4 = r1.hasNext()
            if (r4 == 0) goto L51
            java.lang.Object r4 = r1.next()
            cz.msebera.android.httpclient.entity.mime.MinimalField r4 = (cz.msebera.android.httpclient.entity.mime.MinimalField) r4
            java.lang.String r4 = r4.getName()
            java.lang.String r5 = r7.getName()
            boolean r4 = r4.equalsIgnoreCase(r5)
            if (r4 == 0) goto L4e
            r1.remove()
            if (r0 != r2) goto L4e
            r0 = r3
        L4e:
            int r3 = r3 + 1
            goto L2e
        L51:
            java.util.List<cz.msebera.android.httpclient.entity.mime.MinimalField> r1 = r6.fields
            r1.add(r0, r7)
            return
        L57:
            r6.addField(r7)
            return
    }

    public java.lang.String toString() {
            r1 = this;
            java.util.List<cz.msebera.android.httpclient.entity.mime.MinimalField> r0 = r1.fields
            java.lang.String r0 = r0.toString()
            return r0
    }
}
