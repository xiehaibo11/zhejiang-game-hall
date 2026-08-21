package com.bykv.vk.openvk.api;

public final class q {
    private final android.util.SparseArray<java.lang.Object> rg;

    static class 1 {
    }

    private static final class rg implements com.bykv.vk.openvk.api.proto.ValueSet {
        private final android.util.SparseArray<java.lang.Object> rg;

        private rg(android.util.SparseArray<java.lang.Object> r1) {
                r0 = this;
                r0.<init>()
                r0.rg = r1
                return
        }

        rg(android.util.SparseArray r1, com.bykv.vk.openvk.api.q.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public <T> T[] arrayValue(int r4, java.lang.Class<T> r5) {
                r3 = this;
                android.util.SparseArray<java.lang.Object> r0 = r3.rg
                java.lang.Object r4 = r0.get(r4)
                r0 = 0
                if (r4 != 0) goto La
                return r0
            La:
                java.lang.Class r1 = r4.getClass()
                boolean r2 = r1.isArray()
                if (r2 == 0) goto L23
                java.lang.Class r1 = r1.getComponentType()
                boolean r5 = r5.isAssignableFrom(r1)
                if (r5 == 0) goto L23
                java.lang.Object[] r4 = (java.lang.Object[]) r4
                r0 = r4
                java.lang.Object[] r0 = (java.lang.Object[]) r0
            L23:
                return r0
        }

        @Override
        public boolean booleanValue(int r2) {
                r1 = this;
                r0 = 0
                boolean r2 = r1.booleanValue(r2, r0)
                return r2
        }

        @Override
        public boolean booleanValue(int r2, boolean r3) {
                r1 = this;
                android.util.SparseArray<java.lang.Object> r0 = r1.rg
                java.lang.Object r2 = r0.get(r2)
                boolean r0 = r2 instanceof com.bykv.vk.openvk.api.proto.ValueSet.ValueGetter
                if (r0 == 0) goto L10
                com.bykv.vk.openvk.api.proto.ValueSet$ValueGetter r2 = (com.bykv.vk.openvk.api.proto.ValueSet.ValueGetter) r2
                java.lang.Object r2 = r2.get()
            L10:
                boolean r0 = r2 instanceof java.lang.Boolean
                if (r0 == 0) goto L1a
                java.lang.Boolean r2 = (java.lang.Boolean) r2
                boolean r3 = r2.booleanValue()
            L1a:
                return r3
        }

        @Override
        public boolean containsKey(int r2) {
                r1 = this;
                android.util.SparseArray<java.lang.Object> r0 = r1.rg
                int r2 = r0.indexOfKey(r2)
                if (r2 < 0) goto La
                r2 = 1
                goto Lb
            La:
                r2 = 0
            Lb:
                return r2
        }

        @Override
        public double doubleValue(int r3) {
                r2 = this;
                android.util.SparseArray<java.lang.Object> r0 = r2.rg
                java.lang.Object r3 = r0.get(r3)
                boolean r0 = r3 instanceof com.bykv.vk.openvk.api.proto.ValueSet.ValueGetter
                if (r0 == 0) goto L10
                com.bykv.vk.openvk.api.proto.ValueSet$ValueGetter r3 = (com.bykv.vk.openvk.api.proto.ValueSet.ValueGetter) r3
                java.lang.Object r3 = r3.get()
            L10:
                boolean r0 = r3 instanceof java.lang.Double
                if (r0 == 0) goto L1b
                java.lang.Double r3 = (java.lang.Double) r3
                double r0 = r3.doubleValue()
                goto L1d
            L1b:
                r0 = 0
            L1d:
                return r0
        }

        @Override
        public float floatValue(int r2) {
                r1 = this;
                r0 = 0
                float r2 = r1.floatValue(r2, r0)
                return r2
        }

        @Override
        public float floatValue(int r2, float r3) {
                r1 = this;
                android.util.SparseArray<java.lang.Object> r0 = r1.rg
                java.lang.Object r2 = r0.get(r2)
                boolean r0 = r2 instanceof com.bykv.vk.openvk.api.proto.ValueSet.ValueGetter
                if (r0 == 0) goto L10
                com.bykv.vk.openvk.api.proto.ValueSet$ValueGetter r2 = (com.bykv.vk.openvk.api.proto.ValueSet.ValueGetter) r2
                java.lang.Object r2 = r2.get()
            L10:
                boolean r0 = r2 instanceof java.lang.Float
                if (r0 == 0) goto L1a
                java.lang.Float r2 = (java.lang.Float) r2
                float r3 = r2.floatValue()
            L1a:
                return r3
        }

        @Override
        public int intValue(int r2) {
                r1 = this;
                r0 = 0
                int r2 = r1.intValue(r2, r0)
                return r2
        }

        @Override
        public int intValue(int r2, int r3) {
                r1 = this;
                android.util.SparseArray<java.lang.Object> r0 = r1.rg
                java.lang.Object r2 = r0.get(r2)
                boolean r0 = r2 instanceof com.bykv.vk.openvk.api.proto.ValueSet.ValueGetter
                if (r0 == 0) goto L10
                com.bykv.vk.openvk.api.proto.ValueSet$ValueGetter r2 = (com.bykv.vk.openvk.api.proto.ValueSet.ValueGetter) r2
                java.lang.Object r2 = r2.get()
            L10:
                boolean r0 = r2 instanceof java.lang.Integer
                if (r0 == 0) goto L1a
                java.lang.Integer r2 = (java.lang.Integer) r2
                int r3 = r2.intValue()
            L1a:
                return r3
        }

        @Override
        public boolean isEmpty() {
                r1 = this;
                int r0 = r1.size()
                if (r0 > 0) goto L8
                r0 = 1
                goto L9
            L8:
                r0 = 0
            L9:
                return r0
        }

        @Override
        public java.util.Set<java.lang.Integer> keys() {
                r4 = this;
                android.util.SparseArray<java.lang.Object> r0 = r4.rg
                int r0 = r0.size()
                java.util.HashSet r1 = new java.util.HashSet
                r1.<init>()
                r2 = 0
            Lc:
                if (r2 >= r0) goto L18
                java.lang.Integer r3 = java.lang.Integer.valueOf(r2)
                r1.add(r3)
                int r2 = r2 + 1
                goto Lc
            L18:
                return r1
        }

        @Override
        public long longValue(int r3) {
                r2 = this;
                r0 = 0
                long r0 = r2.longValue(r3, r0)
                return r0
        }

        @Override
        public long longValue(int r2, long r3) {
                r1 = this;
                android.util.SparseArray<java.lang.Object> r0 = r1.rg
                java.lang.Object r2 = r0.get(r2)
                boolean r0 = r2 instanceof com.bykv.vk.openvk.api.proto.ValueSet.ValueGetter
                if (r0 == 0) goto L10
                com.bykv.vk.openvk.api.proto.ValueSet$ValueGetter r2 = (com.bykv.vk.openvk.api.proto.ValueSet.ValueGetter) r2
                java.lang.Object r2 = r2.get()
            L10:
                boolean r0 = r2 instanceof java.lang.Long
                if (r0 == 0) goto L1a
                java.lang.Long r2 = (java.lang.Long) r2
                long r3 = r2.longValue()
            L1a:
                return r3
        }

        @Override
        public <T> T objectValue(int r3, java.lang.Class<T> r4) {
                r2 = this;
                android.util.SparseArray<java.lang.Object> r0 = r2.rg
                java.lang.Object r0 = r0.get(r3)
                boolean r1 = r0 instanceof com.bykv.vk.openvk.api.proto.ValueSet.ValueGetter
                if (r1 == 0) goto L10
                com.bykv.vk.openvk.api.proto.ValueSet$ValueGetter r0 = (com.bykv.vk.openvk.api.proto.ValueSet.ValueGetter) r0
                java.lang.Object r0 = r0.get()
            L10:
                boolean r4 = r4.isInstance(r0)
                if (r4 == 0) goto L1d
                android.util.SparseArray<java.lang.Object> r4 = r2.rg
                java.lang.Object r3 = r4.get(r3)
                goto L1e
            L1d:
                r3 = 0
            L1e:
                return r3
        }

        @Override
        public int size() {
                r1 = this;
                android.util.SparseArray<java.lang.Object> r0 = r1.rg
                if (r0 != 0) goto L6
                r0 = 0
                goto La
            L6:
                int r0 = r0.size()
            La:
                return r0
        }

        @Override
        public java.lang.String stringValue(int r2) {
                r1 = this;
                r0 = 0
                java.lang.String r2 = r1.stringValue(r2, r0)
                return r2
        }

        @Override
        public java.lang.String stringValue(int r2, java.lang.String r3) {
                r1 = this;
                android.util.SparseArray<java.lang.Object> r0 = r1.rg
                java.lang.Object r2 = r0.get(r2)
                boolean r0 = r2 instanceof com.bykv.vk.openvk.api.proto.ValueSet.ValueGetter
                if (r0 == 0) goto L12
                r0 = r2
                com.bykv.vk.openvk.api.proto.ValueSet$ValueGetter r0 = (com.bykv.vk.openvk.api.proto.ValueSet.ValueGetter) r0
                java.lang.Object r0 = r0.get()
                goto L13
            L12:
                r0 = r2
            L13:
                boolean r0 = r0 instanceof java.lang.String
                if (r0 == 0) goto L1b
                java.lang.String r3 = r2.toString()
            L1b:
                return r3
        }
    }

    private q(android.util.SparseArray<java.lang.Object> r1) {
            r0 = this;
            r0.<init>()
            r0.rg = r1
            return
    }

    public static final com.bykv.vk.openvk.api.q rg() {
            com.bykv.vk.openvk.api.q r0 = new com.bykv.vk.openvk.api.q
            android.util.SparseArray r1 = new android.util.SparseArray
            r1.<init>()
            r0.<init>(r1)
            return r0
    }

    public com.bykv.vk.openvk.api.proto.ValueSet df() {
            r3 = this;
            com.bykv.vk.openvk.api.q$rg r0 = new com.bykv.vk.openvk.api.q$rg
            android.util.SparseArray<java.lang.Object> r1 = r3.rg
            r2 = 0
            r0.<init>(r1, r2)
            return r0
    }

    public com.bykv.vk.openvk.api.q rg(int r2, java.lang.Object r3) {
            r1 = this;
            android.util.SparseArray<java.lang.Object> r0 = r1.rg
            r0.put(r2, r3)
            return r1
    }

    public com.bykv.vk.openvk.api.q rg(int r2, java.lang.String r3) {
            r1 = this;
            android.util.SparseArray<java.lang.Object> r0 = r1.rg
            r0.put(r2, r3)
            return r1
    }

    public com.bykv.vk.openvk.api.q rg(int r2, boolean r3) {
            r1 = this;
            android.util.SparseArray<java.lang.Object> r0 = r1.rg
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            r0.put(r2, r3)
            return r1
    }
}
