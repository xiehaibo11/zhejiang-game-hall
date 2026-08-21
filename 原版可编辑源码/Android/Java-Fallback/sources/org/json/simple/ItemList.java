package org.json.simple;

public class ItemList {
    java.util.List items;
    private java.lang.String sp;

    public ItemList() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ","
            r1.sp = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.items = r0
            return
    }

    public ItemList(java.lang.String r3) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = ","
            r2.sp = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.items = r0
            java.lang.String r1 = r2.sp
            r2.split(r3, r1, r0)
            return
    }

    public ItemList(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ","
            r1.sp = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.items = r0
            r1.sp = r2
            r1.split(r2, r3, r0)
            return
    }

    public ItemList(java.lang.String r2, java.lang.String r3, boolean r4) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ","
            r1.sp = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.items = r0
            r1.split(r2, r3, r0, r4)
            return
    }

    public void add(int r2, java.lang.String r3) {
            r1 = this;
            if (r3 != 0) goto L3
            return
        L3:
            java.util.List r0 = r1.items
            java.lang.String r3 = r3.trim()
            r0.add(r2, r3)
            return
    }

    public void add(java.lang.String r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.util.List r0 = r1.items
            java.lang.String r2 = r2.trim()
            r0.add(r2)
            return
    }

    public void addAll(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = r2.sp
            java.util.List r1 = r2.items
            r2.split(r3, r0, r1)
            return
    }

    public void addAll(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.List r0 = r1.items
            r1.split(r2, r3, r0)
            return
    }

    public void addAll(java.lang.String r2, java.lang.String r3, boolean r4) {
            r1 = this;
            java.util.List r0 = r1.items
            r1.split(r2, r3, r0, r4)
            return
    }

    public void addAll(org.json.simple.ItemList r2) {
            r1 = this;
            java.util.List r0 = r1.items
            java.util.List r2 = r2.items
            r0.addAll(r2)
            return
    }

    public void clear() {
            r1 = this;
            java.util.List r0 = r1.items
            r0.clear()
            return
    }

    public java.lang.String get(int r2) {
            r1 = this;
            java.util.List r0 = r1.items
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            return r2
    }

    public java.lang.String[] getArray() {
            r1 = this;
            java.util.List r0 = r1.items
            java.lang.Object[] r0 = r0.toArray()
            java.lang.String[] r0 = (java.lang.String[]) r0
            java.lang.String[] r0 = (java.lang.String[]) r0
            return r0
    }

    public java.util.List getItems() {
            r1 = this;
            java.util.List r0 = r1.items
            return r0
    }

    public void reset() {
            r1 = this;
            java.lang.String r0 = ","
            r1.sp = r0
            java.util.List r0 = r1.items
            r0.clear()
            return
    }

    public void setSP(java.lang.String r1) {
            r0 = this;
            r0.sp = r1
            return
    }

    public int size() {
            r1 = this;
            java.util.List r0 = r1.items
            int r0 = r0.size()
            return r0
    }

    public void split(java.lang.String r5, java.lang.String r6, java.util.List r7) {
            r4 = this;
            if (r5 == 0) goto L2e
            if (r6 != 0) goto L5
            goto L2e
        L5:
            r0 = 0
        L6:
            int r1 = r5.indexOf(r6, r0)
            r2 = -1
            if (r1 != r2) goto Le
            goto L20
        Le:
            java.lang.String r3 = r5.substring(r0, r1)
            java.lang.String r3 = r3.trim()
            r7.add(r3)
            int r3 = r6.length()
            int r1 = r1 + r3
            if (r1 != r2) goto L2c
        L20:
            java.lang.String r5 = r5.substring(r0)
            java.lang.String r5 = r5.trim()
            r7.add(r5)
            return
        L2c:
            r0 = r1
            goto L6
        L2e:
            return
    }

    public void split(java.lang.String r1, java.lang.String r2, java.util.List r3, boolean r4) {
            r0 = this;
            if (r1 == 0) goto L21
            if (r2 != 0) goto L5
            goto L21
        L5:
            if (r4 == 0) goto L1e
            java.util.StringTokenizer r4 = new java.util.StringTokenizer
            r4.<init>(r1, r2)
        Lc:
            boolean r1 = r4.hasMoreTokens()
            if (r1 == 0) goto L21
            java.lang.String r1 = r4.nextToken()
            java.lang.String r1 = r1.trim()
            r3.add(r1)
            goto Lc
        L1e:
            r0.split(r1, r2, r3)
        L21:
            return
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.sp
            java.lang.String r0 = r1.toString(r0)
            return r0
    }

    public java.lang.String toString(java.lang.String r4) {
            r3 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            r1 = 0
        L6:
            java.util.List r2 = r3.items
            int r2 = r2.size()
            if (r1 >= r2) goto L20
            if (r1 != 0) goto L11
            goto L14
        L11:
            r0.append(r4)
        L14:
            java.util.List r2 = r3.items
            java.lang.Object r2 = r2.get(r1)
            r0.append(r2)
            int r1 = r1 + 1
            goto L6
        L20:
            java.lang.String r4 = r0.toString()
            return r4
    }
}
