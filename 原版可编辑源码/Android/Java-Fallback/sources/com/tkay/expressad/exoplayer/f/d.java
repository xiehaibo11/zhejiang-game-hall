package com.tkay.expressad.exoplayer.f;

public final class d {
    private static final java.lang.String a = "MediaCodecUtil";
    private static final java.lang.String b = "OMX.google.raw.decoder";
    private static final java.lang.String c = "OMX.MTK.AUDIO.DECODER.RAW";
    private static final com.tkay.expressad.exoplayer.f.a d = null;
    private static final java.util.regex.Pattern e = null;
    private static final java.util.HashMap<com.tkay.expressad.exoplayer.f.d.a, java.util.List<com.tkay.expressad.exoplayer.f.a>> f = null;
    private static final android.util.SparseIntArray g = null;
    private static final android.util.SparseIntArray h = null;
    private static final java.lang.String i = "avc1";
    private static final java.lang.String j = "avc2";
    private static final java.util.Map<java.lang.String, java.lang.Integer> k = null;
    private static final java.lang.String l = "hev1";
    private static final java.lang.String m = "hvc1";
    private static int n;

    static class 1 {
    }

    private static final class a {
        public final java.lang.String a;
        public final boolean b;

        public a(java.lang.String r1, boolean r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        public final boolean equals(java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r4 != r5) goto L4
                return r0
            L4:
                r1 = 0
                if (r5 == 0) goto L23
                java.lang.Class r2 = r5.getClass()
                java.lang.Class<com.tkay.expressad.exoplayer.f.d$a> r3 = com.tkay.expressad.exoplayer.f.d.a.class
                if (r2 == r3) goto L10
                goto L23
            L10:
                com.tkay.expressad.exoplayer.f.d$a r5 = (com.tkay.expressad.exoplayer.f.d.a) r5
                java.lang.String r2 = r4.a
                java.lang.String r3 = r5.a
                boolean r2 = android.text.TextUtils.equals(r2, r3)
                if (r2 == 0) goto L23
                boolean r2 = r4.b
                boolean r5 = r5.b
                if (r2 != r5) goto L23
                return r0
            L23:
                return r1
        }

        public final int hashCode() {
                r2 = this;
                java.lang.String r0 = r2.a
                if (r0 != 0) goto L6
                r0 = 0
                goto La
            L6:
                int r0 = r0.hashCode()
            La:
                int r0 = r0 + 31
                int r0 = r0 * 31
                boolean r1 = r2.b
                if (r1 == 0) goto L15
                r1 = 1231(0x4cf, float:1.725E-42)
                goto L17
            L15:
                r1 = 1237(0x4d5, float:1.733E-42)
            L17:
                int r0 = r0 + r1
                return r0
        }
    }

    public static class b extends java.lang.Exception {
        private b(java.lang.Throwable r2) {
                r1 = this;
                java.lang.String r0 = "Failed to query underlying media codecs"
                r1.<init>(r0, r2)
                return
        }

        b(java.lang.Throwable r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    private interface c {
        int a();

        android.media.MediaCodecInfo a(int r1);

        boolean a(java.lang.String r1, android.media.MediaCodecInfo.CodecCapabilities r2);

        boolean b();
    }

    private static final class d implements com.tkay.expressad.exoplayer.f.d.c {
        private d() {
                r0 = this;
                r0.<init>()
                return
        }

        d(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final int a() {
                r1 = this;
                int r0 = android.media.MediaCodecList.getCodecCount()
                return r0
        }

        @Override
        public final android.media.MediaCodecInfo a(int r1) {
                r0 = this;
                android.media.MediaCodecInfo r1 = android.media.MediaCodecList.getCodecInfoAt(r1)
                return r1
        }

        @Override
        public final boolean a(java.lang.String r1, android.media.MediaCodecInfo.CodecCapabilities r2) {
                r0 = this;
                java.lang.String r2 = "video/avc"
                boolean r1 = r2.equals(r1)
                return r1
        }

        @Override
        public final boolean b() {
                r1 = this;
                r0 = 0
                return r0
        }
    }

    private static final class e implements com.tkay.expressad.exoplayer.f.d.c {
        private final int a;
        private android.media.MediaCodecInfo[] b;

        public e(boolean r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        private void c() {
                r2 = this;
                android.media.MediaCodecInfo[] r0 = r2.b
                if (r0 != 0) goto L11
                android.media.MediaCodecList r0 = new android.media.MediaCodecList
                int r1 = r2.a
                r0.<init>(r1)
                android.media.MediaCodecInfo[] r0 = r0.getCodecInfos()
                r2.b = r0
            L11:
                return
        }

        @Override
        public final int a() {
                r1 = this;
                r1.c()
                android.media.MediaCodecInfo[] r0 = r1.b
                int r0 = r0.length
                return r0
        }

        @Override
        public final android.media.MediaCodecInfo a(int r2) {
                r1 = this;
                r1.c()
                android.media.MediaCodecInfo[] r0 = r1.b
                r2 = r0[r2]
                return r2
        }

        @Override
        public final boolean a(java.lang.String r1, android.media.MediaCodecInfo.CodecCapabilities r2) {
                r0 = this;
                java.lang.String r1 = "secure-playback"
                boolean r1 = r2.isFeatureSupported(r1)
                return r1
        }

        @Override
        public final boolean b() {
                r1 = this;
                r0 = 1
                return r0
        }
    }

    static {
            java.lang.String r0 = "OMX.google.raw.decoder"
            com.tkay.expressad.exoplayer.f.a r0 = com.tkay.expressad.exoplayer.f.a.a(r0)
            com.tkay.expressad.exoplayer.f.d.d = r0
            java.lang.String r0 = "^\\D?(\\d+)$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.tkay.expressad.exoplayer.f.d.e = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.tkay.expressad.exoplayer.f.d.f = r0
            r0 = -1
            com.tkay.expressad.exoplayer.f.d.n = r0
            android.util.SparseIntArray r0 = new android.util.SparseIntArray
            r0.<init>()
            com.tkay.expressad.exoplayer.f.d.g = r0
            r1 = 1
            r2 = 66
            r0.put(r2, r1)
            android.util.SparseIntArray r0 = com.tkay.expressad.exoplayer.f.d.g
            r2 = 2
            r3 = 77
            r0.put(r3, r2)
            android.util.SparseIntArray r0 = com.tkay.expressad.exoplayer.f.d.g
            r3 = 4
            r4 = 88
            r0.put(r4, r3)
            android.util.SparseIntArray r0 = com.tkay.expressad.exoplayer.f.d.g
            r4 = 8
            r5 = 100
            r0.put(r5, r4)
            android.util.SparseIntArray r0 = new android.util.SparseIntArray
            r0.<init>()
            com.tkay.expressad.exoplayer.f.d.h = r0
            r5 = 10
            r0.put(r5, r1)
            android.util.SparseIntArray r0 = com.tkay.expressad.exoplayer.f.d.h
            r5 = 11
            r0.put(r5, r3)
            android.util.SparseIntArray r0 = com.tkay.expressad.exoplayer.f.d.h
            r5 = 12
            r0.put(r5, r4)
            android.util.SparseIntArray r0 = com.tkay.expressad.exoplayer.f.d.h
            r5 = 16
            r6 = 13
            r0.put(r6, r5)
            android.util.SparseIntArray r0 = com.tkay.expressad.exoplayer.f.d.h
            r6 = 32
            r7 = 20
            r0.put(r7, r6)
            android.util.SparseIntArray r0 = com.tkay.expressad.exoplayer.f.d.h
            r7 = 64
            r8 = 21
            r0.put(r8, r7)
            android.util.SparseIntArray r0 = com.tkay.expressad.exoplayer.f.d.h
            r8 = 128(0x80, float:1.8E-43)
            r9 = 22
            r0.put(r9, r8)
            android.util.SparseIntArray r0 = com.tkay.expressad.exoplayer.f.d.h
            r9 = 256(0x100, float:3.59E-43)
            r10 = 30
            r0.put(r10, r9)
            android.util.SparseIntArray r0 = com.tkay.expressad.exoplayer.f.d.h
            r10 = 512(0x200, float:7.17E-43)
            r11 = 31
            r0.put(r11, r10)
            android.util.SparseIntArray r0 = com.tkay.expressad.exoplayer.f.d.h
            r11 = 1024(0x400, float:1.435E-42)
            r0.put(r6, r11)
            android.util.SparseIntArray r0 = com.tkay.expressad.exoplayer.f.d.h
            r12 = 2048(0x800, float:2.87E-42)
            r13 = 40
            r0.put(r13, r12)
            android.util.SparseIntArray r0 = com.tkay.expressad.exoplayer.f.d.h
            r13 = 4096(0x1000, float:5.74E-42)
            r14 = 41
            r0.put(r14, r13)
            android.util.SparseIntArray r0 = com.tkay.expressad.exoplayer.f.d.h
            r14 = 8192(0x2000, float:1.148E-41)
            r15 = 42
            r0.put(r15, r14)
            android.util.SparseIntArray r0 = com.tkay.expressad.exoplayer.f.d.h
            r15 = 16384(0x4000, float:2.2959E-41)
            r14 = 50
            r0.put(r14, r15)
            android.util.SparseIntArray r0 = com.tkay.expressad.exoplayer.f.d.h
            r14 = 32768(0x8000, float:4.5918E-41)
            r12 = 51
            r0.put(r12, r14)
            android.util.SparseIntArray r0 = com.tkay.expressad.exoplayer.f.d.h
            r12 = 65536(0x10000, float:9.1835E-41)
            r14 = 52
            r0.put(r14, r12)
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.tkay.expressad.exoplayer.f.d.k = r0
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r14 = "L30"
            r0.put(r14, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.exoplayer.f.d.k
            java.lang.Integer r1 = java.lang.Integer.valueOf(r3)
            java.lang.String r3 = "L60"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.exoplayer.f.d.k
            java.lang.Integer r1 = java.lang.Integer.valueOf(r5)
            java.lang.String r3 = "L63"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.exoplayer.f.d.k
            java.lang.Integer r1 = java.lang.Integer.valueOf(r7)
            java.lang.String r3 = "L90"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.exoplayer.f.d.k
            java.lang.Integer r1 = java.lang.Integer.valueOf(r9)
            java.lang.String r3 = "L93"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.exoplayer.f.d.k
            java.lang.Integer r1 = java.lang.Integer.valueOf(r11)
            java.lang.String r3 = "L120"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.exoplayer.f.d.k
            java.lang.Integer r1 = java.lang.Integer.valueOf(r13)
            java.lang.String r3 = "L123"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.exoplayer.f.d.k
            java.lang.Integer r1 = java.lang.Integer.valueOf(r15)
            java.lang.String r3 = "L150"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.exoplayer.f.d.k
            java.lang.Integer r1 = java.lang.Integer.valueOf(r12)
            java.lang.String r3 = "L153"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.exoplayer.f.d.k
            r1 = 262144(0x40000, float:3.67342E-40)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r3 = "L156"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.exoplayer.f.d.k
            r1 = 1048576(0x100000, float:1.469368E-39)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r3 = "L180"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.exoplayer.f.d.k
            r1 = 4194304(0x400000, float:5.877472E-39)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r3 = "L183"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.exoplayer.f.d.k
            r1 = 16777216(0x1000000, float:2.3509887E-38)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r3 = "L186"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.exoplayer.f.d.k
            java.lang.Integer r1 = java.lang.Integer.valueOf(r2)
            java.lang.String r2 = "H30"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.exoplayer.f.d.k
            java.lang.Integer r1 = java.lang.Integer.valueOf(r4)
            java.lang.String r2 = "H60"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.exoplayer.f.d.k
            java.lang.Integer r1 = java.lang.Integer.valueOf(r6)
            java.lang.String r2 = "H63"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.exoplayer.f.d.k
            java.lang.Integer r1 = java.lang.Integer.valueOf(r8)
            java.lang.String r2 = "H90"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.exoplayer.f.d.k
            java.lang.Integer r1 = java.lang.Integer.valueOf(r10)
            java.lang.String r2 = "H93"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.exoplayer.f.d.k
            r1 = 2048(0x800, float:2.87E-42)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "H120"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.exoplayer.f.d.k
            r1 = 8192(0x2000, float:1.148E-41)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "H123"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.exoplayer.f.d.k
            r1 = 32768(0x8000, float:4.5918E-41)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "H150"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.exoplayer.f.d.k
            r1 = 131072(0x20000, float:1.83671E-40)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "H153"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.exoplayer.f.d.k
            r1 = 524288(0x80000, float:7.34684E-40)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "H156"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.exoplayer.f.d.k
            r1 = 2097152(0x200000, float:2.938736E-39)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "H180"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.exoplayer.f.d.k
            r1 = 8388608(0x800000, float:1.1754944E-38)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "H183"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.expressad.exoplayer.f.d.k
            r1 = 33554432(0x2000000, float:9.403955E-38)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "H186"
            r0.put(r2, r1)
            return
    }

    private d() {
            r0 = this;
            r0.<init>()
            return
    }

    private static int a(int r4) {
            r0 = 1
            r1 = 25344(0x6300, float:3.5515E-41)
            if (r4 == r0) goto L2d
            r0 = 2
            if (r4 == r0) goto L2d
            r0 = 9437184(0x900000, float:1.3224311E-38)
            r1 = 2097152(0x200000, float:2.938736E-39)
            r2 = 414720(0x65400, float:5.81146E-40)
            r3 = 101376(0x18c00, float:1.42058E-40)
            switch(r4) {
                case 8: goto L2c;
                case 16: goto L2c;
                case 32: goto L2c;
                case 64: goto L28;
                case 128: goto L27;
                case 256: goto L27;
                case 512: goto L23;
                case 1024: goto L20;
                case 2048: goto L1f;
                case 4096: goto L1f;
                case 8192: goto L1c;
                case 16384: goto L18;
                case 32768: goto L17;
                case 65536: goto L17;
                default: goto L15;
            }
        L15:
            r4 = -1
            return r4
        L17:
            return r0
        L18:
            r4 = 5652480(0x564000, float:7.920812E-39)
            return r4
        L1c:
            r4 = 2228224(0x220000, float:3.122407E-39)
            return r4
        L1f:
            return r1
        L20:
            r4 = 1310720(0x140000, float:1.83671E-39)
            return r4
        L23:
            r4 = 921600(0xe1000, float:1.291437E-39)
            return r4
        L27:
            return r2
        L28:
            r4 = 202752(0x31800, float:2.84116E-40)
            return r4
        L2c:
            return r3
        L2d:
            return r1
    }

    public static android.util.Pair<java.lang.Integer, java.lang.Integer> a(java.lang.String r9) {
            r0 = 0
            if (r9 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "\\."
            java.lang.String[] r1 = r9.split(r1)
            r2 = 0
            r3 = r1[r2]
            r4 = -1
            int r5 = r3.hashCode()
            r6 = 3
            r7 = 2
            r8 = 1
            switch(r5) {
                case 3006243: goto L36;
                case 3006244: goto L2c;
                case 3199032: goto L23;
                case 3214780: goto L19;
                default: goto L18;
            }
        L18:
            goto L40
        L19:
            java.lang.String r2 = "hvc1"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L40
            r2 = r8
            goto L41
        L23:
            java.lang.String r5 = "hev1"
            boolean r3 = r3.equals(r5)
            if (r3 == 0) goto L40
            goto L41
        L2c:
            java.lang.String r2 = "avc2"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L40
            r2 = r6
            goto L41
        L36:
            java.lang.String r2 = "avc1"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L40
            r2 = r7
            goto L41
        L40:
            r2 = r4
        L41:
            if (r2 == 0) goto L4f
            if (r2 == r8) goto L4f
            if (r2 == r7) goto L4a
            if (r2 == r6) goto L4a
            return r0
        L4a:
            android.util.Pair r9 = b(r9, r1)
            return r9
        L4f:
            int r2 = r1.length
            r3 = 4
            java.lang.String r4 = "Ignoring malformed HEVC codec string: "
            java.lang.String r5 = "MediaCodecUtil"
            if (r2 >= r3) goto L63
            java.lang.String r9 = java.lang.String.valueOf(r9)
            java.lang.String r9 = r4.concat(r9)
            android.util.Log.w(r5, r9)
            return r0
        L63:
            java.util.regex.Pattern r2 = com.tkay.expressad.exoplayer.f.d.e
            r3 = r1[r8]
            java.util.regex.Matcher r2 = r2.matcher(r3)
            boolean r3 = r2.matches()
            if (r3 != 0) goto L7d
            java.lang.String r9 = java.lang.String.valueOf(r9)
            java.lang.String r9 = r4.concat(r9)
            android.util.Log.w(r5, r9)
            return r0
        L7d:
            java.lang.String r9 = r2.group(r8)
            java.lang.String r3 = "1"
            boolean r3 = r3.equals(r9)
            if (r3 == 0) goto L8b
            r7 = r8
            goto L93
        L8b:
            java.lang.String r3 = "2"
            boolean r3 = r3.equals(r9)
            if (r3 == 0) goto Lbf
        L93:
            java.util.Map<java.lang.String, java.lang.Integer> r9 = com.tkay.expressad.exoplayer.f.d.k
            r1 = r1[r6]
            java.lang.Object r9 = r9.get(r1)
            java.lang.Integer r9 = (java.lang.Integer) r9
            if (r9 != 0) goto Lb5
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            java.lang.String r1 = "Unknown HEVC level string: "
            r9.<init>(r1)
            java.lang.String r1 = r2.group(r8)
            r9.append(r1)
            java.lang.String r9 = r9.toString()
            android.util.Log.w(r5, r9)
            return r0
        Lb5:
            android.util.Pair r0 = new android.util.Pair
            java.lang.Integer r1 = java.lang.Integer.valueOf(r7)
            r0.<init>(r1, r9)
            return r0
        Lbf:
            java.lang.String r9 = java.lang.String.valueOf(r9)
            java.lang.String r1 = "Unknown HEVC profile string: "
            java.lang.String r9 = r1.concat(r9)
            android.util.Log.w(r5, r9)
            return r0
    }

    private static android.util.Pair<java.lang.Integer, java.lang.Integer> a(java.lang.String r6, java.lang.String[] r7) {
            int r0 = r7.length
            java.lang.String r1 = "Ignoring malformed HEVC codec string: "
            r2 = 0
            java.lang.String r3 = "MediaCodecUtil"
            r4 = 4
            if (r0 >= r4) goto L15
            java.lang.String r6 = java.lang.String.valueOf(r6)
            java.lang.String r6 = r1.concat(r6)
            android.util.Log.w(r3, r6)
            return r2
        L15:
            java.util.regex.Pattern r0 = com.tkay.expressad.exoplayer.f.d.e
            r4 = 1
            r5 = r7[r4]
            java.util.regex.Matcher r0 = r0.matcher(r5)
            boolean r5 = r0.matches()
            if (r5 != 0) goto L30
            java.lang.String r6 = java.lang.String.valueOf(r6)
            java.lang.String r6 = r1.concat(r6)
            android.util.Log.w(r3, r6)
            return r2
        L30:
            java.lang.String r6 = r0.group(r4)
            java.lang.String r1 = "1"
            boolean r1 = r1.equals(r6)
            if (r1 == 0) goto L3e
            r6 = r4
            goto L47
        L3e:
            java.lang.String r1 = "2"
            boolean r1 = r1.equals(r6)
            if (r1 == 0) goto L74
            r6 = 2
        L47:
            java.util.Map<java.lang.String, java.lang.Integer> r1 = com.tkay.expressad.exoplayer.f.d.k
            r5 = 3
            r7 = r7[r5]
            java.lang.Object r7 = r1.get(r7)
            java.lang.Integer r7 = (java.lang.Integer) r7
            if (r7 != 0) goto L6a
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r7 = "Unknown HEVC level string: "
            r6.<init>(r7)
            java.lang.String r7 = r0.group(r4)
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            android.util.Log.w(r3, r6)
            return r2
        L6a:
            android.util.Pair r0 = new android.util.Pair
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            r0.<init>(r6, r7)
            return r0
        L74:
            java.lang.String r6 = java.lang.String.valueOf(r6)
            java.lang.String r7 = "Unknown HEVC profile string: "
            java.lang.String r6 = r7.concat(r6)
            android.util.Log.w(r3, r6)
            return r2
    }

    public static com.tkay.expressad.exoplayer.f.a a() {
            com.tkay.expressad.exoplayer.f.a r0 = com.tkay.expressad.exoplayer.f.d.d
            return r0
    }

    public static com.tkay.expressad.exoplayer.f.a a(java.lang.String r0, boolean r1) {
            java.util.List r0 = c(r0, r1)
            boolean r1 = r0.isEmpty()
            if (r1 == 0) goto Lc
            r0 = 0
            return r0
        Lc:
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.tkay.expressad.exoplayer.f.a r0 = (com.tkay.expressad.exoplayer.f.a) r0
            return r0
    }

    private static java.util.ArrayList<com.tkay.expressad.exoplayer.f.a> a(com.tkay.expressad.exoplayer.f.d.a r18, com.tkay.expressad.exoplayer.f.d.c r19, java.lang.String r20) {
            r1 = r18
            r2 = r19
            java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.lang.Exception -> L334
            r4.<init>()     // Catch: java.lang.Exception -> L334
            java.lang.String r5 = r1.a     // Catch: java.lang.Exception -> L334
            int r6 = r19.a()     // Catch: java.lang.Exception -> L334
            boolean r7 = r19.b()     // Catch: java.lang.Exception -> L334
            r8 = 0
        L14:
            if (r8 >= r6) goto L333
            android.media.MediaCodecInfo r9 = r2.a(r8)     // Catch: java.lang.Exception -> L334
            java.lang.String r10 = r9.getName()     // Catch: java.lang.Exception -> L334
            boolean r0 = r9.isEncoder()     // Catch: java.lang.Exception -> L334
            java.lang.String r11 = ".secure"
            if (r0 != 0) goto L65
            if (r7 != 0) goto L2f
            boolean r0 = r10.endsWith(r11)     // Catch: java.lang.Exception -> L334
            if (r0 == 0) goto L2f
            goto L65
        L2f:
            int r0 = com.tkay.expressad.exoplayer.k.af.a     // Catch: java.lang.Exception -> L334
            r13 = 21
            if (r0 >= r13) goto L69
            java.lang.String r0 = "CIPAACDecoder"
            boolean r0 = r0.equals(r10)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = "CIPMP3Decoder"
            boolean r0 = r0.equals(r10)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = "CIPVorbisDecoder"
            boolean r0 = r0.equals(r10)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = "CIPAMRNBDecoder"
            boolean r0 = r0.equals(r10)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = "AACDecoder"
            boolean r0 = r0.equals(r10)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = "MP3Decoder"
            boolean r0 = r0.equals(r10)     // Catch: java.lang.Exception -> L334
            if (r0 == 0) goto L69
        L65:
            r13 = r20
            goto L248
        L69:
            int r0 = com.tkay.expressad.exoplayer.k.af.a     // Catch: java.lang.Exception -> L334
            r13 = 18
            if (r0 >= r13) goto L78
            java.lang.String r0 = "OMX.SEC.MP3.Decoder"
            boolean r0 = r0.equals(r10)     // Catch: java.lang.Exception -> L334
            if (r0 == 0) goto L78
            goto L65
        L78:
            int r0 = com.tkay.expressad.exoplayer.k.af.a     // Catch: java.lang.Exception -> L334
            if (r0 >= r13) goto La3
            java.lang.String r0 = "OMX.MTK.AUDIO.DECODER.AAC"
            boolean r0 = r0.equals(r10)     // Catch: java.lang.Exception -> L334
            if (r0 == 0) goto La3
            java.lang.String r0 = "a70"
            java.lang.String r13 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            boolean r0 = r0.equals(r13)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = "Xiaomi"
            java.lang.String r13 = com.tkay.expressad.exoplayer.k.af.c     // Catch: java.lang.Exception -> L334
            boolean r0 = r0.equals(r13)     // Catch: java.lang.Exception -> L334
            if (r0 == 0) goto La3
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            java.lang.String r13 = "HM"
            boolean r0 = r0.startsWith(r13)     // Catch: java.lang.Exception -> L334
            if (r0 == 0) goto La3
            goto L65
        La3:
            int r0 = com.tkay.expressad.exoplayer.k.af.a     // Catch: java.lang.Exception -> L334
            r13 = 16
            if (r0 != r13) goto L12b
            java.lang.String r0 = "OMX.qcom.audio.decoder.mp3"
            boolean r0 = r0.equals(r10)     // Catch: java.lang.Exception -> L334
            if (r0 == 0) goto L12b
            java.lang.String r0 = "dlxu"
            java.lang.String r14 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            boolean r0 = r0.equals(r14)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = "protou"
            java.lang.String r14 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            boolean r0 = r0.equals(r14)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = "ville"
            java.lang.String r14 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            boolean r0 = r0.equals(r14)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = "villeplus"
            java.lang.String r14 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            boolean r0 = r0.equals(r14)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = "villec2"
            java.lang.String r14 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            boolean r0 = r0.equals(r14)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            java.lang.String r14 = "gee"
            boolean r0 = r0.startsWith(r14)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = "C6602"
            java.lang.String r14 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            boolean r0 = r0.equals(r14)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = "C6603"
            java.lang.String r14 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            boolean r0 = r0.equals(r14)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = "C6606"
            java.lang.String r14 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            boolean r0 = r0.equals(r14)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = "C6616"
            java.lang.String r14 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            boolean r0 = r0.equals(r14)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = "L36h"
            java.lang.String r14 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            boolean r0 = r0.equals(r14)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = "SO-02E"
            java.lang.String r14 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            boolean r0 = r0.equals(r14)     // Catch: java.lang.Exception -> L334
            if (r0 == 0) goto L12b
            goto L65
        L12b:
            int r0 = com.tkay.expressad.exoplayer.k.af.a     // Catch: java.lang.Exception -> L334
            if (r0 != r13) goto L161
            java.lang.String r0 = "OMX.qcom.audio.decoder.aac"
            boolean r0 = r0.equals(r10)     // Catch: java.lang.Exception -> L334
            if (r0 == 0) goto L161
            java.lang.String r0 = "C1504"
            java.lang.String r13 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            boolean r0 = r0.equals(r13)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = "C1505"
            java.lang.String r13 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            boolean r0 = r0.equals(r13)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = "C1604"
            java.lang.String r13 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            boolean r0 = r0.equals(r13)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = "C1605"
            java.lang.String r13 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            boolean r0 = r0.equals(r13)     // Catch: java.lang.Exception -> L334
            if (r0 == 0) goto L161
            goto L65
        L161:
            int r0 = com.tkay.expressad.exoplayer.k.af.a     // Catch: java.lang.Exception -> L334
            r13 = 24
            java.lang.String r14 = "samsung"
            if (r0 >= r13) goto L1d3
            java.lang.String r0 = "OMX.SEC.aac.dec"
            boolean r0 = r0.equals(r10)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L179
            java.lang.String r0 = "OMX.Exynos.AAC.Decoder"
            boolean r0 = r0.equals(r10)     // Catch: java.lang.Exception -> L334
            if (r0 == 0) goto L1d3
        L179:
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.c     // Catch: java.lang.Exception -> L334
            boolean r0 = r14.equals(r0)     // Catch: java.lang.Exception -> L334
            if (r0 == 0) goto L1d3
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            java.lang.String r13 = "zeroflte"
            boolean r0 = r0.startsWith(r13)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            java.lang.String r13 = "zerolte"
            boolean r0 = r0.startsWith(r13)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            java.lang.String r13 = "zenlte"
            boolean r0 = r0.startsWith(r13)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = "SC-05G"
            java.lang.String r13 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            boolean r0 = r0.equals(r13)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = "marinelteatt"
            java.lang.String r13 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            boolean r0 = r0.equals(r13)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = "404SC"
            java.lang.String r13 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            boolean r0 = r0.equals(r13)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = "SC-04G"
            java.lang.String r13 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            boolean r0 = r0.equals(r13)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = "SCV31"
            java.lang.String r13 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            boolean r0 = r0.equals(r13)     // Catch: java.lang.Exception -> L334
            if (r0 == 0) goto L1d3
            goto L65
        L1d3:
            int r0 = com.tkay.expressad.exoplayer.k.af.a     // Catch: java.lang.Exception -> L334
            java.lang.String r13 = "jflte"
            r15 = 19
            if (r0 > r15) goto L21d
            java.lang.String r0 = "OMX.SEC.vp8.dec"
            boolean r0 = r0.equals(r10)     // Catch: java.lang.Exception -> L334
            if (r0 == 0) goto L21d
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.c     // Catch: java.lang.Exception -> L334
            boolean r0 = r14.equals(r0)     // Catch: java.lang.Exception -> L334
            if (r0 == 0) goto L21d
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            java.lang.String r14 = "d2"
            boolean r0 = r0.startsWith(r14)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            java.lang.String r14 = "serrano"
            boolean r0 = r0.startsWith(r14)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            boolean r0 = r0.startsWith(r13)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            java.lang.String r14 = "santos"
            boolean r0 = r0.startsWith(r14)     // Catch: java.lang.Exception -> L334
            if (r0 != 0) goto L65
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            java.lang.String r14 = "t0"
            boolean r0 = r0.startsWith(r14)     // Catch: java.lang.Exception -> L334
            if (r0 == 0) goto L21d
            goto L65
        L21d:
            int r0 = com.tkay.expressad.exoplayer.k.af.a     // Catch: java.lang.Exception -> L334
            if (r0 > r15) goto L233
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Exception -> L334
            boolean r0 = r0.startsWith(r13)     // Catch: java.lang.Exception -> L334
            if (r0 == 0) goto L233
            java.lang.String r0 = "OMX.qcom.video.decoder.vp8"
            boolean r0 = r0.equals(r10)     // Catch: java.lang.Exception -> L334
            if (r0 == 0) goto L233
            goto L65
        L233:
            java.lang.String r0 = "audio/eac3-joc"
            r13 = r20
            boolean r0 = r0.equals(r13)     // Catch: java.lang.Exception -> L334
            if (r0 == 0) goto L246
            java.lang.String r0 = "OMX.MTK.AUDIO.DECODER.DSPAC3"
            boolean r0 = r0.equals(r10)     // Catch: java.lang.Exception -> L334
            if (r0 == 0) goto L246
            goto L248
        L246:
            r0 = 1
            goto L249
        L248:
            r0 = 0
        L249:
            if (r0 == 0) goto L329
            java.lang.String[] r14 = r9.getSupportedTypes()     // Catch: java.lang.Exception -> L334
            int r15 = r14.length     // Catch: java.lang.Exception -> L334
            r12 = 0
        L251:
            if (r12 >= r15) goto L329
            r3 = r14[r12]     // Catch: java.lang.Exception -> L334
            boolean r0 = r3.equalsIgnoreCase(r5)     // Catch: java.lang.Exception -> L334
            if (r0 == 0) goto L31b
            android.media.MediaCodecInfo$CodecCapabilities r0 = r9.getCapabilitiesForType(r3)     // Catch: java.lang.Exception -> L2d1
            r16 = r6
            boolean r6 = r2.a(r5, r0)     // Catch: java.lang.Exception -> L2cf
            int r2 = com.tkay.expressad.exoplayer.k.af.a     // Catch: java.lang.Exception -> L2cf
            r17 = r9
            r9 = 22
            if (r2 > r9) goto L295
            java.lang.String r2 = "ODROID-XU3"
            java.lang.String r9 = com.tkay.expressad.exoplayer.k.af.d     // Catch: java.lang.Exception -> L293
            boolean r2 = r2.equals(r9)     // Catch: java.lang.Exception -> L293
            if (r2 != 0) goto L281
            java.lang.String r2 = "Nexus 10"
            java.lang.String r9 = com.tkay.expressad.exoplayer.k.af.d     // Catch: java.lang.Exception -> L293
            boolean r2 = r2.equals(r9)     // Catch: java.lang.Exception -> L293
            if (r2 == 0) goto L295
        L281:
            java.lang.String r2 = "OMX.Exynos.AVC.Decoder"
            boolean r2 = r2.equals(r10)     // Catch: java.lang.Exception -> L293
            if (r2 != 0) goto L291
            java.lang.String r2 = "OMX.Exynos.AVC.Decoder.secure"
            boolean r2 = r2.equals(r10)     // Catch: java.lang.Exception -> L293
            if (r2 == 0) goto L295
        L291:
            r2 = 1
            goto L296
        L293:
            r0 = move-exception
            goto L2d6
        L295:
            r2 = 0
        L296:
            if (r7 == 0) goto L29f
            boolean r9 = r1.b     // Catch: java.lang.Exception -> L293
            if (r9 == r6) goto L29d
            goto L29f
        L29d:
            r6 = 0
            goto L2a6
        L29f:
            if (r7 != 0) goto L2af
            boolean r9 = r1.b     // Catch: java.lang.Exception -> L293
            if (r9 != 0) goto L2af
            goto L29d
        L2a6:
            com.tkay.expressad.exoplayer.f.a r0 = com.tkay.expressad.exoplayer.f.a.a(r10, r5, r0, r2, r6)     // Catch: java.lang.Exception -> L293
            r4.add(r0)     // Catch: java.lang.Exception -> L293
            goto L31f
        L2af:
            if (r7 != 0) goto L2cd
            if (r6 == 0) goto L2cd
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L293
            r6.<init>()     // Catch: java.lang.Exception -> L293
            r6.append(r10)     // Catch: java.lang.Exception -> L293
            r6.append(r11)     // Catch: java.lang.Exception -> L293
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L293
            r9 = 1
            com.tkay.expressad.exoplayer.f.a r0 = com.tkay.expressad.exoplayer.f.a.a(r6, r5, r0, r2, r9)     // Catch: java.lang.Exception -> L2cb
            r4.add(r0)     // Catch: java.lang.Exception -> L2cb
            return r4
        L2cb:
            r0 = move-exception
            goto L2d7
        L2cd:
            r9 = 1
            goto L31f
        L2cf:
            r0 = move-exception
            goto L2d4
        L2d1:
            r0 = move-exception
            r16 = r6
        L2d4:
            r17 = r9
        L2d6:
            r9 = 1
        L2d7:
            int r2 = com.tkay.expressad.exoplayer.k.af.a     // Catch: java.lang.Exception -> L334
            r6 = 23
            java.lang.String r9 = "MediaCodecUtil"
            if (r2 > r6) goto L2fc
            boolean r2 = r4.isEmpty()     // Catch: java.lang.Exception -> L334
            if (r2 != 0) goto L2fc
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L334
            java.lang.String r2 = "Skipping codec "
            r0.<init>(r2)     // Catch: java.lang.Exception -> L334
            r0.append(r10)     // Catch: java.lang.Exception -> L334
            java.lang.String r2 = " (failed to query capabilities)"
            r0.append(r2)     // Catch: java.lang.Exception -> L334
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L334
            android.util.Log.e(r9, r0)     // Catch: java.lang.Exception -> L334
            goto L31f
        L2fc:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L334
            java.lang.String r2 = "Failed to query codec "
            r1.<init>(r2)     // Catch: java.lang.Exception -> L334
            r1.append(r10)     // Catch: java.lang.Exception -> L334
            java.lang.String r2 = " ("
            r1.append(r2)     // Catch: java.lang.Exception -> L334
            r1.append(r3)     // Catch: java.lang.Exception -> L334
            java.lang.String r2 = ")"
            r1.append(r2)     // Catch: java.lang.Exception -> L334
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L334
            android.util.Log.e(r9, r1)     // Catch: java.lang.Exception -> L334
            throw r0     // Catch: java.lang.Exception -> L334
        L31b:
            r16 = r6
            r17 = r9
        L31f:
            int r12 = r12 + 1
            r2 = r19
            r6 = r16
            r9 = r17
            goto L251
        L329:
            r16 = r6
            int r8 = r8 + 1
            r2 = r19
            r6 = r16
            goto L14
        L333:
            return r4
        L334:
            r0 = move-exception
            com.tkay.expressad.exoplayer.f.d$b r1 = new com.tkay.expressad.exoplayer.f.d$b
            r2 = 0
            r1.<init>(r0, r2)
            throw r1
    }

    private static void a(java.util.List<com.tkay.expressad.exoplayer.f.a> r5) {
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 26
            if (r0 >= r1) goto L3e
            int r0 = r5.size()
            r1 = 1
            if (r0 <= r1) goto L3e
            r0 = 0
            java.lang.Object r2 = r5.get(r0)
            com.tkay.expressad.exoplayer.f.a r2 = (com.tkay.expressad.exoplayer.f.a) r2
            java.lang.String r2 = r2.c
            java.lang.String r3 = "OMX.MTK.AUDIO.DECODER.RAW"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L3e
        L1e:
            int r2 = r5.size()
            if (r1 >= r2) goto L3e
            java.lang.Object r2 = r5.get(r1)
            com.tkay.expressad.exoplayer.f.a r2 = (com.tkay.expressad.exoplayer.f.a) r2
            java.lang.String r3 = r2.c
            java.lang.String r4 = "OMX.google.raw.decoder"
            boolean r3 = r4.equals(r3)
            if (r3 == 0) goto L3b
            r5.remove(r1)
            r5.add(r0, r2)
            return
        L3b:
            int r1 = r1 + 1
            goto L1e
        L3e:
            return
    }

    private static boolean a(android.media.MediaCodecInfo r3, java.lang.String r4, boolean r5, java.lang.String r6) {
            boolean r3 = r3.isEncoder()
            r0 = 0
            if (r3 != 0) goto L222
            if (r5 != 0) goto L13
            java.lang.String r3 = ".secure"
            boolean r3 = r4.endsWith(r3)
            if (r3 == 0) goto L13
            goto L222
        L13:
            int r3 = com.tkay.expressad.exoplayer.k.af.a
            r5 = 21
            if (r3 >= r5) goto L4a
            java.lang.String r3 = "CIPAACDecoder"
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L49
            java.lang.String r3 = "CIPMP3Decoder"
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L49
            java.lang.String r3 = "CIPVorbisDecoder"
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L49
            java.lang.String r3 = "CIPAMRNBDecoder"
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L49
            java.lang.String r3 = "AACDecoder"
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L49
            java.lang.String r3 = "MP3Decoder"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L4a
        L49:
            return r0
        L4a:
            int r3 = com.tkay.expressad.exoplayer.k.af.a
            r5 = 18
            if (r3 >= r5) goto L59
            java.lang.String r3 = "OMX.SEC.MP3.Decoder"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L59
            return r0
        L59:
            int r3 = com.tkay.expressad.exoplayer.k.af.a
            if (r3 >= r5) goto L84
            java.lang.String r3 = "OMX.MTK.AUDIO.DECODER.AAC"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L84
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r5 = "a70"
            boolean r3 = r5.equals(r3)
            if (r3 != 0) goto L83
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.c
            java.lang.String r5 = "Xiaomi"
            boolean r3 = r5.equals(r3)
            if (r3 == 0) goto L84
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r5 = "HM"
            boolean r3 = r3.startsWith(r5)
            if (r3 == 0) goto L84
        L83:
            return r0
        L84:
            int r3 = com.tkay.expressad.exoplayer.k.af.a
            r5 = 16
            if (r3 != r5) goto L10b
            java.lang.String r3 = "OMX.qcom.audio.decoder.mp3"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L10b
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r1 = "dlxu"
            boolean r3 = r1.equals(r3)
            if (r3 != 0) goto L10a
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r1 = "protou"
            boolean r3 = r1.equals(r3)
            if (r3 != 0) goto L10a
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r1 = "ville"
            boolean r3 = r1.equals(r3)
            if (r3 != 0) goto L10a
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r1 = "villeplus"
            boolean r3 = r1.equals(r3)
            if (r3 != 0) goto L10a
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r1 = "villec2"
            boolean r3 = r1.equals(r3)
            if (r3 != 0) goto L10a
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r1 = "gee"
            boolean r3 = r3.startsWith(r1)
            if (r3 != 0) goto L10a
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r1 = "C6602"
            boolean r3 = r1.equals(r3)
            if (r3 != 0) goto L10a
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r1 = "C6603"
            boolean r3 = r1.equals(r3)
            if (r3 != 0) goto L10a
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r1 = "C6606"
            boolean r3 = r1.equals(r3)
            if (r3 != 0) goto L10a
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r1 = "C6616"
            boolean r3 = r1.equals(r3)
            if (r3 != 0) goto L10a
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r1 = "L36h"
            boolean r3 = r1.equals(r3)
            if (r3 != 0) goto L10a
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r1 = "SO-02E"
            boolean r3 = r1.equals(r3)
            if (r3 == 0) goto L10b
        L10a:
            return r0
        L10b:
            int r3 = com.tkay.expressad.exoplayer.k.af.a
            if (r3 != r5) goto L140
            java.lang.String r3 = "OMX.qcom.audio.decoder.aac"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L140
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r5 = "C1504"
            boolean r3 = r5.equals(r3)
            if (r3 != 0) goto L13f
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r5 = "C1505"
            boolean r3 = r5.equals(r3)
            if (r3 != 0) goto L13f
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r5 = "C1604"
            boolean r3 = r5.equals(r3)
            if (r3 != 0) goto L13f
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r5 = "C1605"
            boolean r3 = r5.equals(r3)
            if (r3 == 0) goto L140
        L13f:
            return r0
        L140:
            int r3 = com.tkay.expressad.exoplayer.k.af.a
            r5 = 24
            java.lang.String r1 = "samsung"
            if (r3 >= r5) goto L1b1
            java.lang.String r3 = "OMX.SEC.aac.dec"
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L158
            java.lang.String r3 = "OMX.Exynos.AAC.Decoder"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L1b1
        L158:
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.c
            boolean r3 = r1.equals(r3)
            if (r3 == 0) goto L1b1
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r5 = "zeroflte"
            boolean r3 = r3.startsWith(r5)
            if (r3 != 0) goto L1b0
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r5 = "zerolte"
            boolean r3 = r3.startsWith(r5)
            if (r3 != 0) goto L1b0
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r5 = "zenlte"
            boolean r3 = r3.startsWith(r5)
            if (r3 != 0) goto L1b0
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r5 = "SC-05G"
            boolean r3 = r5.equals(r3)
            if (r3 != 0) goto L1b0
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r5 = "marinelteatt"
            boolean r3 = r5.equals(r3)
            if (r3 != 0) goto L1b0
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r5 = "404SC"
            boolean r3 = r5.equals(r3)
            if (r3 != 0) goto L1b0
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r5 = "SC-04G"
            boolean r3 = r5.equals(r3)
            if (r3 != 0) goto L1b0
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r5 = "SCV31"
            boolean r3 = r5.equals(r3)
            if (r3 == 0) goto L1b1
        L1b0:
            return r0
        L1b1:
            int r3 = com.tkay.expressad.exoplayer.k.af.a
            java.lang.String r5 = "jflte"
            r2 = 19
            if (r3 > r2) goto L1fa
            java.lang.String r3 = "OMX.SEC.vp8.dec"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L1fa
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.c
            boolean r3 = r1.equals(r3)
            if (r3 == 0) goto L1fa
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r1 = "d2"
            boolean r3 = r3.startsWith(r1)
            if (r3 != 0) goto L1f9
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r1 = "serrano"
            boolean r3 = r3.startsWith(r1)
            if (r3 != 0) goto L1f9
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            boolean r3 = r3.startsWith(r5)
            if (r3 != 0) goto L1f9
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r1 = "santos"
            boolean r3 = r3.startsWith(r1)
            if (r3 != 0) goto L1f9
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r1 = "t0"
            boolean r3 = r3.startsWith(r1)
            if (r3 == 0) goto L1fa
        L1f9:
            return r0
        L1fa:
            int r3 = com.tkay.expressad.exoplayer.k.af.a
            if (r3 > r2) goto L20f
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            boolean r3 = r3.startsWith(r5)
            if (r3 == 0) goto L20f
            java.lang.String r3 = "OMX.qcom.video.decoder.vp8"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L20f
            return r0
        L20f:
            java.lang.String r3 = "audio/eac3-joc"
            boolean r3 = r3.equals(r6)
            if (r3 == 0) goto L220
            java.lang.String r3 = "OMX.MTK.AUDIO.DECODER.DSPAC3"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L220
            return r0
        L220:
            r3 = 1
            return r3
        L222:
            return r0
    }

    public static int b() {
            int r0 = com.tkay.expressad.exoplayer.f.d.n
            r1 = -1
            if (r0 != r1) goto L64
            r0 = 0
            java.lang.String r2 = "video/avc"
            com.tkay.expressad.exoplayer.f.a r2 = a(r2, r0)
            if (r2 == 0) goto L62
            android.media.MediaCodecInfo$CodecProfileLevel[] r2 = r2.a()
            int r3 = r2.length
            r4 = r0
        L14:
            if (r0 >= r3) goto L51
            r5 = r2[r0]
            int r5 = r5.level
            r6 = 9437184(0x900000, float:1.3224311E-38)
            r7 = 2097152(0x200000, float:2.938736E-39)
            r8 = 414720(0x65400, float:5.81146E-40)
            r9 = 25344(0x6300, float:3.5515E-41)
            r10 = 1
            r11 = 101376(0x18c00, float:1.42058E-40)
            if (r5 == r10) goto L49
            r10 = 2
            if (r5 == r10) goto L49
            switch(r5) {
                case 8: goto L47;
                case 16: goto L47;
                case 32: goto L47;
                case 64: goto L43;
                case 128: goto L41;
                case 256: goto L41;
                case 512: goto L3d;
                case 1024: goto L3a;
                case 2048: goto L38;
                case 4096: goto L38;
                case 8192: goto L35;
                case 16384: goto L31;
                case 32768: goto L4a;
                case 65536: goto L4a;
                default: goto L2f;
            }
        L2f:
            r6 = r1
            goto L4a
        L31:
            r6 = 5652480(0x564000, float:7.920812E-39)
            goto L4a
        L35:
            r6 = 2228224(0x220000, float:3.122407E-39)
            goto L4a
        L38:
            r6 = r7
            goto L4a
        L3a:
            r6 = 1310720(0x140000, float:1.83671E-39)
            goto L4a
        L3d:
            r6 = 921600(0xe1000, float:1.291437E-39)
            goto L4a
        L41:
            r6 = r8
            goto L4a
        L43:
            r6 = 202752(0x31800, float:2.84116E-40)
            goto L4a
        L47:
            r6 = r11
            goto L4a
        L49:
            r6 = r9
        L4a:
            int r4 = java.lang.Math.max(r6, r4)
            int r0 = r0 + 1
            goto L14
        L51:
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 21
            if (r0 < r1) goto L5b
            r0 = 345600(0x54600, float:4.84289E-40)
            goto L5e
        L5b:
            r0 = 172800(0x2a300, float:2.42144E-40)
        L5e:
            int r0 = java.lang.Math.max(r4, r0)
        L62:
            com.tkay.expressad.exoplayer.f.d.n = r0
        L64:
            int r0 = com.tkay.expressad.exoplayer.f.d.n
            return r0
    }

    private static android.util.Pair<java.lang.Integer, java.lang.Integer> b(java.lang.String r7, java.lang.String[] r8) {
            int r0 = r8.length
            java.lang.String r1 = "Ignoring malformed AVC codec string: "
            r2 = 2
            r3 = 0
            java.lang.String r4 = "MediaCodecUtil"
            if (r0 >= r2) goto L15
            java.lang.String r7 = java.lang.String.valueOf(r7)
            java.lang.String r7 = r1.concat(r7)
            android.util.Log.w(r4, r7)
            return r3
        L15:
            r0 = 1
            r5 = r8[r0]     // Catch: java.lang.NumberFormatException -> La8
            int r5 = r5.length()     // Catch: java.lang.NumberFormatException -> La8
            r6 = 6
            if (r5 != r6) goto L40
            r5 = r8[r0]     // Catch: java.lang.NumberFormatException -> La8
            r6 = 0
            java.lang.String r2 = r5.substring(r6, r2)     // Catch: java.lang.NumberFormatException -> La8
            r5 = 16
            int r2 = java.lang.Integer.parseInt(r2, r5)     // Catch: java.lang.NumberFormatException -> La8
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.NumberFormatException -> La8
            r8 = r8[r0]     // Catch: java.lang.NumberFormatException -> La8
            r0 = 4
            java.lang.String r8 = r8.substring(r0)     // Catch: java.lang.NumberFormatException -> La8
            int r8 = java.lang.Integer.parseInt(r8, r5)     // Catch: java.lang.NumberFormatException -> La8
            java.lang.Integer r7 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.NumberFormatException -> La8
            goto L59
        L40:
            int r5 = r8.length     // Catch: java.lang.NumberFormatException -> La8
            r6 = 3
            if (r5 < r6) goto L9c
            r0 = r8[r0]     // Catch: java.lang.NumberFormatException -> La8
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.NumberFormatException -> La8
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.NumberFormatException -> La8
            r8 = r8[r2]     // Catch: java.lang.NumberFormatException -> La8
            int r8 = java.lang.Integer.parseInt(r8)     // Catch: java.lang.NumberFormatException -> La8
            java.lang.Integer r7 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.NumberFormatException -> La8
            r2 = r0
        L59:
            android.util.SparseIntArray r8 = com.tkay.expressad.exoplayer.f.d.g
            int r0 = r2.intValue()
            r1 = -1
            int r8 = r8.get(r0, r1)
            if (r8 != r1) goto L74
            java.lang.String r7 = java.lang.String.valueOf(r2)
            java.lang.String r8 = "Unknown AVC profile: "
            java.lang.String r7 = r8.concat(r7)
            android.util.Log.w(r4, r7)
            return r3
        L74:
            android.util.SparseIntArray r0 = com.tkay.expressad.exoplayer.f.d.h
            int r2 = r7.intValue()
            int r0 = r0.get(r2, r1)
            if (r0 != r1) goto L8e
            java.lang.String r7 = java.lang.String.valueOf(r7)
            java.lang.String r8 = "Unknown AVC level: "
            java.lang.String r7 = r8.concat(r7)
            android.util.Log.w(r4, r7)
            return r3
        L8e:
            android.util.Pair r7 = new android.util.Pair
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r7.<init>(r8, r0)
            return r7
        L9c:
            java.lang.String r8 = java.lang.String.valueOf(r7)     // Catch: java.lang.NumberFormatException -> La8
            java.lang.String r8 = r1.concat(r8)     // Catch: java.lang.NumberFormatException -> La8
            android.util.Log.w(r4, r8)     // Catch: java.lang.NumberFormatException -> La8
            return r3
        La8:
            java.lang.String r7 = java.lang.String.valueOf(r7)
            java.lang.String r7 = r1.concat(r7)
            android.util.Log.w(r4, r7)
            return r3
    }

    private static void b(java.lang.String r1, boolean r2) {
            c(r1, r2)     // Catch: com.tkay.expressad.exoplayer.f.d.b -> L4
            return
        L4:
            r1 = move-exception
            java.lang.String r2 = "MediaCodecUtil"
            java.lang.String r0 = "Codec warming failed"
            android.util.Log.e(r2, r0, r1)
            return
    }

    private static boolean b(java.lang.String r2) {
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 22
            if (r0 > r1) goto L2c
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r1 = "ODROID-XU3"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L1a
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r1 = "Nexus 10"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L2c
        L1a:
            java.lang.String r0 = "OMX.Exynos.AVC.Decoder"
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L2a
            java.lang.String r0 = "OMX.Exynos.AVC.Decoder.secure"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L2c
        L2a:
            r2 = 1
            return r2
        L2c:
            r2 = 0
            return r2
    }

    private static synchronized java.util.List<com.tkay.expressad.exoplayer.f.a> c(java.lang.String r7, boolean r8) {
            java.lang.Class<com.tkay.expressad.exoplayer.f.d> r0 = com.tkay.expressad.exoplayer.f.d.class
            monitor-enter(r0)
            com.tkay.expressad.exoplayer.f.d$a r1 = new com.tkay.expressad.exoplayer.f.d$a     // Catch: java.lang.Throwable -> L94
            r1.<init>(r7, r8)     // Catch: java.lang.Throwable -> L94
            java.util.HashMap<com.tkay.expressad.exoplayer.f.d$a, java.util.List<com.tkay.expressad.exoplayer.f.a>> r2 = com.tkay.expressad.exoplayer.f.d.f     // Catch: java.lang.Throwable -> L94
            java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Throwable -> L94
            java.util.List r2 = (java.util.List) r2     // Catch: java.lang.Throwable -> L94
            if (r2 == 0) goto L14
            monitor-exit(r0)
            return r2
        L14:
            int r2 = com.tkay.expressad.exoplayer.k.af.a     // Catch: java.lang.Throwable -> L94
            r3 = 21
            r4 = 0
            if (r2 < r3) goto L21
            com.tkay.expressad.exoplayer.f.d$e r2 = new com.tkay.expressad.exoplayer.f.d$e     // Catch: java.lang.Throwable -> L94
            r2.<init>(r8)     // Catch: java.lang.Throwable -> L94
            goto L26
        L21:
            com.tkay.expressad.exoplayer.f.d$d r2 = new com.tkay.expressad.exoplayer.f.d$d     // Catch: java.lang.Throwable -> L94
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L94
        L26:
            java.util.ArrayList r5 = a(r1, r2, r7)     // Catch: java.lang.Throwable -> L94
            if (r8 == 0) goto L6e
            boolean r8 = r5.isEmpty()     // Catch: java.lang.Throwable -> L94
            if (r8 == 0) goto L6e
            int r8 = com.tkay.expressad.exoplayer.k.af.a     // Catch: java.lang.Throwable -> L94
            if (r3 > r8) goto L6e
            int r8 = com.tkay.expressad.exoplayer.k.af.a     // Catch: java.lang.Throwable -> L94
            r3 = 23
            if (r8 > r3) goto L6e
            com.tkay.expressad.exoplayer.f.d$d r2 = new com.tkay.expressad.exoplayer.f.d$d     // Catch: java.lang.Throwable -> L94
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L94
            java.util.ArrayList r5 = a(r1, r2, r7)     // Catch: java.lang.Throwable -> L94
            boolean r8 = r5.isEmpty()     // Catch: java.lang.Throwable -> L94
            if (r8 != 0) goto L6e
            java.lang.String r8 = "MediaCodecUtil"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L94
            java.lang.String r6 = "MediaCodecList API didn't list secure decoder for: "
            r3.<init>(r6)     // Catch: java.lang.Throwable -> L94
            r3.append(r7)     // Catch: java.lang.Throwable -> L94
            java.lang.String r6 = ". Assuming: "
            r3.append(r6)     // Catch: java.lang.Throwable -> L94
            java.lang.Object r4 = r5.get(r4)     // Catch: java.lang.Throwable -> L94
            com.tkay.expressad.exoplayer.f.a r4 = (com.tkay.expressad.exoplayer.f.a) r4     // Catch: java.lang.Throwable -> L94
            java.lang.String r4 = r4.c     // Catch: java.lang.Throwable -> L94
            r3.append(r4)     // Catch: java.lang.Throwable -> L94
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L94
            android.util.Log.w(r8, r3)     // Catch: java.lang.Throwable -> L94
        L6e:
            java.lang.String r8 = "audio/eac3-joc"
            boolean r8 = r8.equals(r7)     // Catch: java.lang.Throwable -> L94
            if (r8 == 0) goto L86
            com.tkay.expressad.exoplayer.f.d$a r8 = new com.tkay.expressad.exoplayer.f.d$a     // Catch: java.lang.Throwable -> L94
            java.lang.String r3 = "audio/eac3"
            boolean r4 = r1.b     // Catch: java.lang.Throwable -> L94
            r8.<init>(r3, r4)     // Catch: java.lang.Throwable -> L94
            java.util.ArrayList r7 = a(r8, r2, r7)     // Catch: java.lang.Throwable -> L94
            r5.addAll(r7)     // Catch: java.lang.Throwable -> L94
        L86:
            a(r5)     // Catch: java.lang.Throwable -> L94
            java.util.List r7 = java.util.Collections.unmodifiableList(r5)     // Catch: java.lang.Throwable -> L94
            java.util.HashMap<com.tkay.expressad.exoplayer.f.d$a, java.util.List<com.tkay.expressad.exoplayer.f.a>> r8 = com.tkay.expressad.exoplayer.f.d.f     // Catch: java.lang.Throwable -> L94
            r8.put(r1, r7)     // Catch: java.lang.Throwable -> L94
            monitor-exit(r0)
            return r7
        L94:
            r7 = move-exception
            monitor-exit(r0)
            throw r7
    }
}
