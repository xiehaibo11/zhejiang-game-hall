package com.tkay.expressad.exoplayer.d;

public final class e implements android.os.Parcelable, java.util.Comparator<com.tkay.expressad.exoplayer.d.e.a> {
    public static final android.os.Parcelable.Creator<com.tkay.expressad.exoplayer.d.e> CREATOR = null;
    public final java.lang.String a;
    public final int b;
    private final com.tkay.expressad.exoplayer.d.e.a[] c;
    private int d;


    public static final class a implements android.os.Parcelable {
        public static final android.os.Parcelable.Creator<com.tkay.expressad.exoplayer.d.e.a> CREATOR = null;
        public final java.lang.String a;
        public final java.lang.String b;
        public final byte[] c;
        public final boolean d;
        private int e;
        private final java.util.UUID f;


        static {
                com.tkay.expressad.exoplayer.d.e$a$1 r0 = new com.tkay.expressad.exoplayer.d.e$a$1
                r0.<init>()
                com.tkay.expressad.exoplayer.d.e.a.CREATOR = r0
                return
        }

        a(android.os.Parcel r6) {
                r5 = this;
                r5.<init>()
                java.util.UUID r0 = new java.util.UUID
                long r1 = r6.readLong()
                long r3 = r6.readLong()
                r0.<init>(r1, r3)
                r5.f = r0
                java.lang.String r0 = r6.readString()
                r5.a = r0
                java.lang.String r0 = r6.readString()
                r5.b = r0
                byte[] r0 = r6.createByteArray()
                r5.c = r0
                byte r6 = r6.readByte()
                if (r6 == 0) goto L2c
                r6 = 1
                goto L2d
            L2c:
                r6 = 0
            L2d:
                r5.d = r6
                return
        }

        private a(java.util.UUID r1, java.lang.String r2, java.lang.String r3, byte[] r4) {
                r0 = this;
                r0.<init>()
                java.lang.Object r1 = com.tkay.expressad.exoplayer.k.a.a(r1)
                java.util.UUID r1 = (java.util.UUID) r1
                r0.f = r1
                r0.a = r2
                java.lang.Object r1 = com.tkay.expressad.exoplayer.k.a.a(r3)
                java.lang.String r1 = (java.lang.String) r1
                r0.b = r1
                r0.c = r4
                r1 = 0
                r0.d = r1
                return
        }

        public a(java.util.UUID r2, java.lang.String r3, byte[] r4) {
                r1 = this;
                r0 = 0
                r1.<init>(r2, r3, r4, r0)
                return
        }

        private a(java.util.UUID r1, java.lang.String r2, byte[] r3, byte r4) {
                r0 = this;
                r4 = 0
                r0.<init>(r1, r4, r2, r3)
                return
        }

        static java.util.UUID a(com.tkay.expressad.exoplayer.d.e.a r0) {
                java.util.UUID r0 = r0.f
                return r0
        }

        private boolean b(com.tkay.expressad.exoplayer.d.e.a r2) {
                r1 = this;
                boolean r0 = r1.a()
                if (r0 == 0) goto L16
                boolean r0 = r2.a()
                if (r0 != 0) goto L16
                java.util.UUID r2 = r2.f
                boolean r2 = r1.a(r2)
                if (r2 == 0) goto L16
                r2 = 1
                return r2
            L16:
                r2 = 0
                return r2
        }

        public final boolean a() {
                r1 = this;
                byte[] r0 = r1.c
                if (r0 == 0) goto L6
                r0 = 1
                return r0
            L6:
                r0 = 0
                return r0
        }

        public final boolean a(java.util.UUID r3) {
                r2 = this;
                java.util.UUID r0 = com.tkay.expressad.exoplayer.b.bh
                java.util.UUID r1 = r2.f
                boolean r0 = r0.equals(r1)
                if (r0 != 0) goto L15
                java.util.UUID r0 = r2.f
                boolean r3 = r3.equals(r0)
                if (r3 == 0) goto L13
                goto L15
            L13:
                r3 = 0
                return r3
            L15:
                r3 = 1
                return r3
        }

        @Override
        public final int describeContents() {
                r1 = this;
                r0 = 0
                return r0
        }

        public final boolean equals(java.lang.Object r5) {
                r4 = this;
                boolean r0 = r5 instanceof com.tkay.expressad.exoplayer.d.e.a
                r1 = 0
                if (r0 != 0) goto L6
                return r1
            L6:
                r0 = 1
                if (r5 != r4) goto La
                return r0
            La:
                com.tkay.expressad.exoplayer.d.e$a r5 = (com.tkay.expressad.exoplayer.d.e.a) r5
                java.lang.String r2 = r4.a
                java.lang.String r3 = r5.a
                boolean r2 = com.tkay.expressad.exoplayer.k.af.a(r2, r3)
                if (r2 == 0) goto L35
                java.lang.String r2 = r4.b
                java.lang.String r3 = r5.b
                boolean r2 = com.tkay.expressad.exoplayer.k.af.a(r2, r3)
                if (r2 == 0) goto L35
                java.util.UUID r2 = r4.f
                java.util.UUID r3 = r5.f
                boolean r2 = com.tkay.expressad.exoplayer.k.af.a(r2, r3)
                if (r2 == 0) goto L35
                byte[] r2 = r4.c
                byte[] r5 = r5.c
                boolean r5 = java.util.Arrays.equals(r2, r5)
                if (r5 == 0) goto L35
                return r0
            L35:
                return r1
        }

        public final int hashCode() {
                r2 = this;
                int r0 = r2.e
                if (r0 != 0) goto L2b
                java.util.UUID r0 = r2.f
                int r0 = r0.hashCode()
                int r0 = r0 * 31
                java.lang.String r1 = r2.a
                if (r1 != 0) goto L12
                r1 = 0
                goto L16
            L12:
                int r1 = r1.hashCode()
            L16:
                int r0 = r0 + r1
                int r0 = r0 * 31
                java.lang.String r1 = r2.b
                int r1 = r1.hashCode()
                int r0 = r0 + r1
                int r0 = r0 * 31
                byte[] r1 = r2.c
                int r1 = java.util.Arrays.hashCode(r1)
                int r0 = r0 + r1
                r2.e = r0
            L2b:
                int r0 = r2.e
                return r0
        }

        @Override
        public final void writeToParcel(android.os.Parcel r3, int r4) {
                r2 = this;
                java.util.UUID r4 = r2.f
                long r0 = r4.getMostSignificantBits()
                r3.writeLong(r0)
                java.util.UUID r4 = r2.f
                long r0 = r4.getLeastSignificantBits()
                r3.writeLong(r0)
                java.lang.String r4 = r2.a
                r3.writeString(r4)
                java.lang.String r4 = r2.b
                r3.writeString(r4)
                byte[] r4 = r2.c
                r3.writeByteArray(r4)
                boolean r4 = r2.d
                byte r4 = (byte) r4
                r3.writeByte(r4)
                return
        }
    }

    static {
            com.tkay.expressad.exoplayer.d.e$1 r0 = new com.tkay.expressad.exoplayer.d.e$1
            r0.<init>()
            com.tkay.expressad.exoplayer.d.e.CREATOR = r0
            return
    }

    e(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = r2.readString()
            r1.a = r0
            android.os.Parcelable$Creator<com.tkay.expressad.exoplayer.d.e$a> r0 = com.tkay.expressad.exoplayer.d.e.a.CREATOR
            java.lang.Object[] r2 = r2.createTypedArray(r0)
            com.tkay.expressad.exoplayer.d.e$a[] r2 = (com.tkay.expressad.exoplayer.d.e.a[]) r2
            r1.c = r2
            int r2 = r2.length
            r1.b = r2
            return
    }

    private e(java.lang.String r2, java.util.List<com.tkay.expressad.exoplayer.d.e.a> r3) {
            r1 = this;
            int r0 = r3.size()
            com.tkay.expressad.exoplayer.d.e$a[] r0 = new com.tkay.expressad.exoplayer.d.e.a[r0]
            java.lang.Object[] r3 = r3.toArray(r0)
            com.tkay.expressad.exoplayer.d.e$a[] r3 = (com.tkay.expressad.exoplayer.d.e.a[]) r3
            r0 = 0
            r1.<init>(r2, r0, r3)
            return
    }

    private e(java.lang.String r1, boolean r2, com.tkay.expressad.exoplayer.d.e.a... r3) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            if (r2 == 0) goto Le
            java.lang.Object r1 = r3.clone()
            r3 = r1
            com.tkay.expressad.exoplayer.d.e$a[] r3 = (com.tkay.expressad.exoplayer.d.e.a[]) r3
        Le:
            java.util.Arrays.sort(r3, r0)
            r0.c = r3
            int r1 = r3.length
            r0.b = r1
            return
    }

    private e(java.lang.String r2, com.tkay.expressad.exoplayer.d.e.a... r3) {
            r1 = this;
            r0 = 1
            r1.<init>(r2, r0, r3)
            return
    }

    public e(java.util.List<com.tkay.expressad.exoplayer.d.e.a> r3) {
            r2 = this;
            int r0 = r3.size()
            com.tkay.expressad.exoplayer.d.e$a[] r0 = new com.tkay.expressad.exoplayer.d.e.a[r0]
            java.lang.Object[] r3 = r3.toArray(r0)
            com.tkay.expressad.exoplayer.d.e$a[] r3 = (com.tkay.expressad.exoplayer.d.e.a[]) r3
            r0 = 0
            r1 = 0
            r2.<init>(r0, r1, r3)
            return
    }

    private e(com.tkay.expressad.exoplayer.d.e.a... r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r2)
            return
    }

    private static int a(com.tkay.expressad.exoplayer.d.e.a r2, com.tkay.expressad.exoplayer.d.e.a r3) {
            java.util.UUID r0 = com.tkay.expressad.exoplayer.b.bh
            java.util.UUID r1 = com.tkay.expressad.exoplayer.d.e.a.a(r2)
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L1c
            java.util.UUID r2 = com.tkay.expressad.exoplayer.b.bh
            java.util.UUID r3 = com.tkay.expressad.exoplayer.d.e.a.a(r3)
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L1a
            r2 = 0
            return r2
        L1a:
            r2 = 1
            return r2
        L1c:
            java.util.UUID r2 = com.tkay.expressad.exoplayer.d.e.a.a(r2)
            java.util.UUID r3 = com.tkay.expressad.exoplayer.d.e.a.a(r3)
            int r2 = r2.compareTo(r3)
            return r2
    }

    @java.lang.Deprecated
    private com.tkay.expressad.exoplayer.d.e.a a(java.util.UUID r6) {
            r5 = this;
            com.tkay.expressad.exoplayer.d.e$a[] r0 = r5.c
            int r1 = r0.length
            r2 = 0
        L4:
            if (r2 >= r1) goto L12
            r3 = r0[r2]
            boolean r4 = r3.a(r6)
            if (r4 == 0) goto Lf
            return r3
        Lf:
            int r2 = r2 + 1
            goto L4
        L12:
            r6 = 0
            return r6
    }

    public static com.tkay.expressad.exoplayer.d.e a(com.tkay.expressad.exoplayer.d.e r8, com.tkay.expressad.exoplayer.d.e r9) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
            r2 = 0
            if (r8 == 0) goto L1f
            java.lang.String r3 = r8.a
            com.tkay.expressad.exoplayer.d.e$a[] r8 = r8.c
            int r4 = r8.length
            r5 = r1
        Lf:
            if (r5 >= r4) goto L20
            r6 = r8[r5]
            boolean r7 = r6.a()
            if (r7 == 0) goto L1c
            r0.add(r6)
        L1c:
            int r5 = r5 + 1
            goto Lf
        L1f:
            r3 = r2
        L20:
            if (r9 == 0) goto L48
            if (r3 != 0) goto L27
            java.lang.String r8 = r9.a
            r3 = r8
        L27:
            int r8 = r0.size()
            com.tkay.expressad.exoplayer.d.e$a[] r9 = r9.c
            int r4 = r9.length
        L2e:
            if (r1 >= r4) goto L48
            r5 = r9[r1]
            boolean r6 = r5.a()
            if (r6 == 0) goto L45
            java.util.UUID r6 = com.tkay.expressad.exoplayer.d.e.a.a(r5)
            boolean r6 = a(r0, r8, r6)
            if (r6 != 0) goto L45
            r0.add(r5)
        L45:
            int r1 = r1 + 1
            goto L2e
        L48:
            boolean r8 = r0.isEmpty()
            if (r8 == 0) goto L4f
            return r2
        L4f:
            com.tkay.expressad.exoplayer.d.e r8 = new com.tkay.expressad.exoplayer.d.e
            r8.<init>(r3, r0)
            return r8
    }

    private static boolean a(java.util.ArrayList<com.tkay.expressad.exoplayer.d.e.a> r3, int r4, java.util.UUID r5) {
            r0 = 0
            r1 = r0
        L2:
            if (r1 >= r4) goto L19
            java.lang.Object r2 = r3.get(r1)
            com.tkay.expressad.exoplayer.d.e$a r2 = (com.tkay.expressad.exoplayer.d.e.a) r2
            java.util.UUID r2 = com.tkay.expressad.exoplayer.d.e.a.a(r2)
            boolean r2 = r2.equals(r5)
            if (r2 == 0) goto L16
            r3 = 1
            return r3
        L16:
            int r1 = r1 + 1
            goto L2
        L19:
            return r0
    }

    public final com.tkay.expressad.exoplayer.d.e.a a(int r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.d.e$a[] r0 = r1.c
            r2 = r0[r2]
            return r2
    }

    public final com.tkay.expressad.exoplayer.d.e a(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = r3.a
            boolean r0 = com.tkay.expressad.exoplayer.k.af.a(r0, r4)
            if (r0 == 0) goto L9
            return r3
        L9:
            com.tkay.expressad.exoplayer.d.e r0 = new com.tkay.expressad.exoplayer.d.e
            r1 = 0
            com.tkay.expressad.exoplayer.d.e$a[] r2 = r3.c
            r0.<init>(r4, r1, r2)
            return r0
    }

    @Override
    public final int compare(com.tkay.expressad.exoplayer.d.e.a r3, com.tkay.expressad.exoplayer.d.e.a r4) {
            r2 = this;
            com.tkay.expressad.exoplayer.d.e$a r3 = (com.tkay.expressad.exoplayer.d.e.a) r3
            com.tkay.expressad.exoplayer.d.e$a r4 = (com.tkay.expressad.exoplayer.d.e.a) r4
            java.util.UUID r0 = com.tkay.expressad.exoplayer.b.bh
            java.util.UUID r1 = com.tkay.expressad.exoplayer.d.e.a.a(r3)
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L20
            java.util.UUID r3 = com.tkay.expressad.exoplayer.b.bh
            java.util.UUID r4 = com.tkay.expressad.exoplayer.d.e.a.a(r4)
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L1e
            r3 = 0
            return r3
        L1e:
            r3 = 1
            return r3
        L20:
            java.util.UUID r3 = com.tkay.expressad.exoplayer.d.e.a.a(r3)
            java.util.UUID r4 = com.tkay.expressad.exoplayer.d.e.a.a(r4)
            int r3 = r3.compareTo(r4)
            return r3
    }

    @Override
    public final int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L29
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L29
        L12:
            com.tkay.expressad.exoplayer.d.e r5 = (com.tkay.expressad.exoplayer.d.e) r5
            java.lang.String r2 = r4.a
            java.lang.String r3 = r5.a
            boolean r2 = com.tkay.expressad.exoplayer.k.af.a(r2, r3)
            if (r2 == 0) goto L29
            com.tkay.expressad.exoplayer.d.e$a[] r2 = r4.c
            com.tkay.expressad.exoplayer.d.e$a[] r5 = r5.c
            boolean r5 = java.util.Arrays.equals(r2, r5)
            if (r5 == 0) goto L29
            return r0
        L29:
            return r1
    }

    public final int hashCode() {
            r2 = this;
            int r0 = r2.d
            if (r0 != 0) goto L19
            java.lang.String r0 = r2.a
            if (r0 != 0) goto La
            r0 = 0
            goto Le
        La:
            int r0 = r0.hashCode()
        Le:
            int r0 = r0 * 31
            com.tkay.expressad.exoplayer.d.e$a[] r1 = r2.c
            int r1 = java.util.Arrays.hashCode(r1)
            int r0 = r0 + r1
            r2.d = r0
        L19:
            int r0 = r2.d
            return r0
    }

    @Override
    public final void writeToParcel(android.os.Parcel r2, int r3) {
            r1 = this;
            java.lang.String r3 = r1.a
            r2.writeString(r3)
            com.tkay.expressad.exoplayer.d.e$a[] r3 = r1.c
            r0 = 0
            r2.writeTypedArray(r3, r0)
            return
    }
}
