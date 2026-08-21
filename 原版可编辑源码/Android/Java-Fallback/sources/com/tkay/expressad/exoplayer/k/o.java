package com.tkay.expressad.exoplayer.k;

public final class o {
    public static final java.lang.String A = "audio/eac3";
    public static final java.lang.String B = "audio/eac3-joc";
    public static final java.lang.String C = "audio/true-hd";
    public static final java.lang.String D = "audio/vnd.dts";
    public static final java.lang.String E = "audio/vnd.dts.hd";
    public static final java.lang.String F = "audio/vnd.dts.hd;profile=lbr";
    public static final java.lang.String G = "audio/vorbis";
    public static final java.lang.String H = "audio/opus";
    public static final java.lang.String I = "audio/3gpp";
    public static final java.lang.String J = "audio/amr-wb";
    public static final java.lang.String K = "audio/flac";
    public static final java.lang.String L = "audio/alac";
    public static final java.lang.String M = "audio/gsm";
    public static final java.lang.String N = "audio/x-unknown";
    public static final java.lang.String O = "text/vtt";
    public static final java.lang.String P = "text/x-ssa";
    public static final java.lang.String Q = "application/mp4";
    public static final java.lang.String R = "application/webm";
    public static final java.lang.String S = "application/dash+xml";
    public static final java.lang.String T = "application/x-mpegURL";
    public static final java.lang.String U = "application/vnd.ms-sstr+xml";
    public static final java.lang.String V = "application/id3";
    public static final java.lang.String W = "application/cea-608";
    public static final java.lang.String X = "application/cea-708";
    public static final java.lang.String Y = "application/x-subrip";
    public static final java.lang.String Z = "application/ttml+xml";
    public static final java.lang.String a = "video";
    public static final java.lang.String aa = "application/x-quicktime-tx3g";
    public static final java.lang.String ab = "application/x-mp4-vtt";
    public static final java.lang.String ac = "application/x-mp4-cea-608";
    public static final java.lang.String ad = "application/x-rawcc";
    public static final java.lang.String ae = "application/vobsub";
    public static final java.lang.String af = "application/pgs";
    public static final java.lang.String ag = "application/x-scte35";
    public static final java.lang.String ah = "application/x-camera-motion";
    public static final java.lang.String ai = "application/x-emsg";
    public static final java.lang.String aj = "application/dvbsubs";
    public static final java.lang.String ak = "application/x-exif";
    private static final java.util.ArrayList<com.tkay.expressad.exoplayer.k.o.a> al = null;
    public static final java.lang.String b = "audio";
    public static final java.lang.String c = "text";
    public static final java.lang.String d = "application";
    public static final java.lang.String e = "video/mp4";
    public static final java.lang.String f = "video/webm";
    public static final java.lang.String g = "video/3gpp";
    public static final java.lang.String h = "video/avc";
    public static final java.lang.String i = "video/hevc";
    public static final java.lang.String j = "video/x-vnd.on2.vp8";
    public static final java.lang.String k = "video/x-vnd.on2.vp9";
    public static final java.lang.String l = "video/mp4v-es";
    public static final java.lang.String m = "video/mpeg";
    public static final java.lang.String n = "video/mpeg2";
    public static final java.lang.String o = "video/wvc1";
    public static final java.lang.String p = "video/x-unknown";
    public static final java.lang.String q = "audio/mp4";
    public static final java.lang.String r = "audio/mp4a-latm";
    public static final java.lang.String s = "audio/webm";
    public static final java.lang.String t = "audio/mpeg";
    public static final java.lang.String u = "audio/mpeg-L1";
    public static final java.lang.String v = "audio/mpeg-L2";
    public static final java.lang.String w = "audio/raw";
    public static final java.lang.String x = "audio/g711-alaw";
    public static final java.lang.String y = "audio/g711-mlaw";
    public static final java.lang.String z = "audio/ac3";

    private static final class a {
        public final java.lang.String a;
        public final java.lang.String b;
        public final int c;

        public a(java.lang.String r1, java.lang.String r2, int r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                return
        }
    }

    static {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.tkay.expressad.exoplayer.k.o.al = r0
            return
    }

    private o() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(int r1) {
            r0 = 32
            if (r1 == r0) goto L4f
            r0 = 33
            if (r1 == r0) goto L4c
            r0 = 35
            if (r1 == r0) goto L49
            r0 = 64
            if (r1 == r0) goto L46
            r0 = 163(0xa3, float:2.28E-43)
            if (r1 == r0) goto L43
            r0 = 177(0xb1, float:2.48E-43)
            if (r1 == r0) goto L40
            r0 = 165(0xa5, float:2.31E-43)
            if (r1 == r0) goto L3d
            r0 = 166(0xa6, float:2.33E-43)
            if (r1 == r0) goto L3a
            switch(r1) {
                case 96: goto L37;
                case 97: goto L37;
                case 98: goto L37;
                case 99: goto L37;
                case 100: goto L37;
                case 101: goto L37;
                case 102: goto L46;
                case 103: goto L46;
                case 104: goto L46;
                case 105: goto L34;
                case 106: goto L31;
                case 107: goto L34;
                default: goto L23;
            }
        L23:
            switch(r1) {
                case 169: goto L2e;
                case 170: goto L2b;
                case 171: goto L2b;
                case 172: goto L2e;
                case 173: goto L28;
                default: goto L26;
            }
        L26:
            r1 = 0
            return r1
        L28:
            java.lang.String r1 = "audio/opus"
            return r1
        L2b:
            java.lang.String r1 = "audio/vnd.dts.hd"
            return r1
        L2e:
            java.lang.String r1 = "audio/vnd.dts"
            return r1
        L31:
            java.lang.String r1 = "video/mpeg"
            return r1
        L34:
            java.lang.String r1 = "audio/mpeg"
            return r1
        L37:
            java.lang.String r1 = "video/mpeg2"
            return r1
        L3a:
            java.lang.String r1 = "audio/eac3"
            return r1
        L3d:
            java.lang.String r1 = "audio/ac3"
            return r1
        L40:
            java.lang.String r1 = "video/x-vnd.on2.vp9"
            return r1
        L43:
            java.lang.String r1 = "video/wvc1"
            return r1
        L46:
            java.lang.String r1 = "audio/mp4a-latm"
            return r1
        L49:
            java.lang.String r1 = "video/hevc"
            return r1
        L4c:
            java.lang.String r1 = "video/avc"
            return r1
        L4f:
            java.lang.String r1 = "video/mp4v-es"
            return r1
    }

    private static void a(java.lang.String r2, java.lang.String r3, int r4) {
            com.tkay.expressad.exoplayer.k.o$a r0 = new com.tkay.expressad.exoplayer.k.o$a
            r0.<init>(r2, r3, r4)
            java.util.ArrayList<com.tkay.expressad.exoplayer.k.o$a> r3 = com.tkay.expressad.exoplayer.k.o.al
            int r3 = r3.size()
            r4 = 0
        Lc:
            if (r4 >= r3) goto L27
            java.util.ArrayList<com.tkay.expressad.exoplayer.k.o$a> r1 = com.tkay.expressad.exoplayer.k.o.al
            java.lang.Object r1 = r1.get(r4)
            com.tkay.expressad.exoplayer.k.o$a r1 = (com.tkay.expressad.exoplayer.k.o.a) r1
            java.lang.String r1 = r1.a
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto L24
            java.util.ArrayList<com.tkay.expressad.exoplayer.k.o$a> r2 = com.tkay.expressad.exoplayer.k.o.al
            r2.remove(r4)
            goto L27
        L24:
            int r4 = r4 + 1
            goto Lc
        L27:
            java.util.ArrayList<com.tkay.expressad.exoplayer.k.o$a> r2 = com.tkay.expressad.exoplayer.k.o.al
            r2.add(r0)
            return
    }

    public static boolean a(java.lang.String r1) {
            java.lang.String r1 = k(r1)
            java.lang.String r0 = "audio"
            boolean r1 = r0.equals(r1)
            return r1
    }

    public static boolean b(java.lang.String r1) {
            java.lang.String r1 = k(r1)
            java.lang.String r0 = "video"
            boolean r1 = r0.equals(r1)
            return r1
    }

    public static java.lang.String c(java.lang.String r5) {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            java.lang.String r5 = r5.trim()
            java.lang.String r1 = "avc1"
            boolean r1 = r5.startsWith(r1)
            if (r1 != 0) goto L11f
            java.lang.String r1 = "avc3"
            boolean r1 = r5.startsWith(r1)
            if (r1 == 0) goto L1a
            goto L11f
        L1a:
            java.lang.String r1 = "hev1"
            boolean r1 = r5.startsWith(r1)
            if (r1 != 0) goto L11c
            java.lang.String r1 = "hvc1"
            boolean r1 = r5.startsWith(r1)
            if (r1 == 0) goto L2c
            goto L11c
        L2c:
            java.lang.String r1 = "vp9"
            boolean r1 = r5.startsWith(r1)
            if (r1 != 0) goto L119
            java.lang.String r1 = "vp09"
            boolean r1 = r5.startsWith(r1)
            if (r1 == 0) goto L3e
            goto L119
        L3e:
            java.lang.String r1 = "vp8"
            boolean r1 = r5.startsWith(r1)
            if (r1 != 0) goto L116
            java.lang.String r1 = "vp08"
            boolean r1 = r5.startsWith(r1)
            if (r1 == 0) goto L50
            goto L116
        L50:
            java.lang.String r1 = "mp4a"
            boolean r1 = r5.startsWith(r1)
            r2 = 0
            if (r1 == 0) goto L85
            java.lang.String r1 = "mp4a."
            boolean r1 = r5.startsWith(r1)
            if (r1 == 0) goto L7f
            r1 = 5
            java.lang.String r5 = r5.substring(r1)
            int r1 = r5.length()
            r3 = 2
            if (r1 < r3) goto L7f
            java.lang.String r5 = r5.substring(r2, r3)     // Catch: java.lang.NumberFormatException -> L7f
            java.lang.String r5 = com.tkay.expressad.exoplayer.k.af.e(r5)     // Catch: java.lang.NumberFormatException -> L7f
            r1 = 16
            int r5 = java.lang.Integer.parseInt(r5, r1)     // Catch: java.lang.NumberFormatException -> L7f
            java.lang.String r0 = a(r5)     // Catch: java.lang.NumberFormatException -> L7f
        L7f:
            if (r0 != 0) goto L84
            java.lang.String r5 = "audio/mp4a-latm"
            return r5
        L84:
            return r0
        L85:
            java.lang.String r1 = "ac-3"
            boolean r1 = r5.startsWith(r1)
            if (r1 != 0) goto L113
            java.lang.String r1 = "dac3"
            boolean r1 = r5.startsWith(r1)
            if (r1 == 0) goto L97
            goto L113
        L97:
            java.lang.String r1 = "ec-3"
            boolean r1 = r5.startsWith(r1)
            if (r1 != 0) goto L110
            java.lang.String r1 = "dec3"
            boolean r1 = r5.startsWith(r1)
            if (r1 == 0) goto La8
            goto L110
        La8:
            java.lang.String r1 = "ec+3"
            boolean r1 = r5.startsWith(r1)
            if (r1 == 0) goto Lb3
            java.lang.String r5 = "audio/eac3-joc"
            return r5
        Lb3:
            java.lang.String r1 = "dtsc"
            boolean r1 = r5.startsWith(r1)
            if (r1 != 0) goto L10d
            java.lang.String r1 = "dtse"
            boolean r1 = r5.startsWith(r1)
            if (r1 == 0) goto Lc4
            goto L10d
        Lc4:
            java.lang.String r1 = "dtsh"
            boolean r1 = r5.startsWith(r1)
            if (r1 != 0) goto L10a
            java.lang.String r1 = "dtsl"
            boolean r1 = r5.startsWith(r1)
            if (r1 == 0) goto Ld5
            goto L10a
        Ld5:
            java.lang.String r1 = "opus"
            boolean r1 = r5.startsWith(r1)
            if (r1 == 0) goto Le0
            java.lang.String r5 = "audio/opus"
            return r5
        Le0:
            java.lang.String r1 = "vorbis"
            boolean r1 = r5.startsWith(r1)
            if (r1 == 0) goto Leb
            java.lang.String r5 = "audio/vorbis"
            return r5
        Leb:
            java.util.ArrayList<com.tkay.expressad.exoplayer.k.o$a> r1 = com.tkay.expressad.exoplayer.k.o.al
            int r1 = r1.size()
        Lf1:
            if (r2 >= r1) goto L109
            java.util.ArrayList<com.tkay.expressad.exoplayer.k.o$a> r3 = com.tkay.expressad.exoplayer.k.o.al
            java.lang.Object r3 = r3.get(r2)
            com.tkay.expressad.exoplayer.k.o$a r3 = (com.tkay.expressad.exoplayer.k.o.a) r3
            java.lang.String r4 = r3.b
            boolean r4 = r5.startsWith(r4)
            if (r4 == 0) goto L106
            java.lang.String r5 = r3.a
            return r5
        L106:
            int r2 = r2 + 1
            goto Lf1
        L109:
            return r0
        L10a:
            java.lang.String r5 = "audio/vnd.dts.hd"
            return r5
        L10d:
            java.lang.String r5 = "audio/vnd.dts"
            return r5
        L110:
            java.lang.String r5 = "audio/eac3"
            return r5
        L113:
            java.lang.String r5 = "audio/ac3"
            return r5
        L116:
            java.lang.String r5 = "video/x-vnd.on2.vp8"
            return r5
        L119:
            java.lang.String r5 = "video/x-vnd.on2.vp9"
            return r5
        L11c:
            java.lang.String r5 = "video/hevc"
            return r5
        L11f:
            java.lang.String r5 = "video/avc"
            return r5
    }

    public static int d(java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = -1
            if (r0 == 0) goto L8
            return r1
        L8:
            boolean r0 = a(r5)
            if (r0 == 0) goto L10
            r5 = 1
            return r5
        L10:
            boolean r0 = b(r5)
            if (r0 == 0) goto L18
            r5 = 2
            return r5
        L18:
            java.lang.String r0 = k(r5)
            java.lang.String r2 = "text"
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto Lc0
            java.lang.String r0 = "application/cea-608"
            boolean r0 = r0.equals(r5)
            if (r0 != 0) goto Lc0
            java.lang.String r0 = "application/cea-708"
            boolean r0 = r0.equals(r5)
            if (r0 != 0) goto Lc0
            java.lang.String r0 = "application/x-mp4-cea-608"
            boolean r0 = r0.equals(r5)
            if (r0 != 0) goto Lc0
            java.lang.String r0 = "application/x-subrip"
            boolean r0 = r0.equals(r5)
            if (r0 != 0) goto Lc0
            java.lang.String r0 = "application/ttml+xml"
            boolean r0 = r0.equals(r5)
            if (r0 != 0) goto Lc0
            java.lang.String r0 = "application/x-quicktime-tx3g"
            boolean r0 = r0.equals(r5)
            if (r0 != 0) goto Lc0
            java.lang.String r0 = "application/x-mp4-vtt"
            boolean r0 = r0.equals(r5)
            if (r0 != 0) goto Lc0
            java.lang.String r0 = "application/x-rawcc"
            boolean r0 = r0.equals(r5)
            if (r0 != 0) goto Lc0
            java.lang.String r0 = "application/vobsub"
            boolean r0 = r0.equals(r5)
            if (r0 != 0) goto Lc0
            java.lang.String r0 = "application/pgs"
            boolean r0 = r0.equals(r5)
            if (r0 != 0) goto Lc0
            java.lang.String r0 = "application/dvbsubs"
            boolean r0 = r0.equals(r5)
            if (r0 == 0) goto L7d
            goto Lc0
        L7d:
            java.lang.String r0 = "application/id3"
            boolean r0 = r0.equals(r5)
            if (r0 != 0) goto Lbe
            java.lang.String r0 = "application/x-emsg"
            boolean r0 = r0.equals(r5)
            if (r0 != 0) goto Lbe
            java.lang.String r0 = "application/x-scte35"
            boolean r0 = r0.equals(r5)
            if (r0 != 0) goto Lbe
            java.lang.String r0 = "application/x-camera-motion"
            boolean r0 = r0.equals(r5)
            if (r0 == 0) goto L9e
            goto Lbe
        L9e:
            java.util.ArrayList<com.tkay.expressad.exoplayer.k.o$a> r0 = com.tkay.expressad.exoplayer.k.o.al
            int r0 = r0.size()
            r2 = 0
        La5:
            if (r2 >= r0) goto Lbd
            java.util.ArrayList<com.tkay.expressad.exoplayer.k.o$a> r3 = com.tkay.expressad.exoplayer.k.o.al
            java.lang.Object r3 = r3.get(r2)
            com.tkay.expressad.exoplayer.k.o$a r3 = (com.tkay.expressad.exoplayer.k.o.a) r3
            java.lang.String r4 = r3.a
            boolean r4 = r5.equals(r4)
            if (r4 == 0) goto Lba
            int r5 = r3.c
            return r5
        Lba:
            int r2 = r2 + 1
            goto La5
        Lbd:
            return r1
        Lbe:
            r5 = 4
            return r5
        Lc0:
            r5 = 3
            return r5
    }

    public static int e(java.lang.String r7) {
            int r0 = r7.hashCode()
            r1 = 0
            r2 = 4
            r3 = 3
            r4 = 2
            r5 = 1
            r6 = 5
            switch(r0) {
                case -2123537834: goto L40;
                case -1095064472: goto L36;
                case 187078296: goto L2c;
                case 1504578661: goto L22;
                case 1505942594: goto L18;
                case 1556697186: goto Le;
                default: goto Ld;
            }
        Ld:
            goto L4a
        Le:
            java.lang.String r0 = "audio/true-hd"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L4a
            r7 = r6
            goto L4b
        L18:
            java.lang.String r0 = "audio/vnd.dts.hd"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L4a
            r7 = r2
            goto L4b
        L22:
            java.lang.String r0 = "audio/eac3"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L4a
            r7 = r5
            goto L4b
        L2c:
            java.lang.String r0 = "audio/ac3"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L4a
            r7 = r1
            goto L4b
        L36:
            java.lang.String r0 = "audio/vnd.dts"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L4a
            r7 = r3
            goto L4b
        L40:
            java.lang.String r0 = "audio/eac3-joc"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L4a
            r7 = r4
            goto L4b
        L4a:
            r7 = -1
        L4b:
            if (r7 == 0) goto L62
            if (r7 == r5) goto L60
            if (r7 == r4) goto L60
            if (r7 == r3) goto L5e
            if (r7 == r2) goto L5b
            if (r7 == r6) goto L58
            return r1
        L58:
            r7 = 14
            return r7
        L5b:
            r7 = 8
            return r7
        L5e:
            r7 = 7
            return r7
        L60:
            r7 = 6
            return r7
        L62:
            return r6
    }

    public static int f(java.lang.String r0) {
            java.lang.String r0 = c(r0)
            int r0 = d(r0)
            return r0
    }

    private static boolean g(java.lang.String r1) {
            java.lang.String r1 = k(r1)
            java.lang.String r0 = "text"
            boolean r1 = r0.equals(r1)
            return r1
    }

    private static boolean h(java.lang.String r1) {
            java.lang.String r1 = k(r1)
            java.lang.String r0 = "application"
            boolean r1 = r0.equals(r1)
            return r1
    }

    private static java.lang.String i(java.lang.String r5) {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = ","
            java.lang.String[] r5 = com.tkay.expressad.exoplayer.k.af.a(r5, r1)
            int r1 = r5.length
            r2 = 0
        Lc:
            if (r2 >= r1) goto L20
            r3 = r5[r2]
            java.lang.String r3 = c(r3)
            if (r3 == 0) goto L1d
            boolean r4 = b(r3)
            if (r4 == 0) goto L1d
            return r3
        L1d:
            int r2 = r2 + 1
            goto Lc
        L20:
            return r0
    }

    private static java.lang.String j(java.lang.String r5) {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = ","
            java.lang.String[] r5 = com.tkay.expressad.exoplayer.k.af.a(r5, r1)
            int r1 = r5.length
            r2 = 0
        Lc:
            if (r2 >= r1) goto L20
            r3 = r5[r2]
            java.lang.String r3 = c(r3)
            if (r3 == 0) goto L1d
            boolean r4 = a(r3)
            if (r4 == 0) goto L1d
            return r3
        L1d:
            int r2 = r2 + 1
            goto Lc
        L20:
            return r0
    }

    private static java.lang.String k(java.lang.String r2) {
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            r0 = 47
            int r0 = r2.indexOf(r0)
            r1 = -1
            if (r0 == r1) goto L13
            r1 = 0
            java.lang.String r2 = r2.substring(r1, r0)
            return r2
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r1 = "Invalid mime type: "
            java.lang.String r2 = r1.concat(r2)
            r0.<init>(r2)
            throw r0
    }

    private static java.lang.String l(java.lang.String r4) {
            java.util.ArrayList<com.tkay.expressad.exoplayer.k.o$a> r0 = com.tkay.expressad.exoplayer.k.o.al
            int r0 = r0.size()
            r1 = 0
        L7:
            if (r1 >= r0) goto L1f
            java.util.ArrayList<com.tkay.expressad.exoplayer.k.o$a> r2 = com.tkay.expressad.exoplayer.k.o.al
            java.lang.Object r2 = r2.get(r1)
            com.tkay.expressad.exoplayer.k.o$a r2 = (com.tkay.expressad.exoplayer.k.o.a) r2
            java.lang.String r3 = r2.b
            boolean r3 = r4.startsWith(r3)
            if (r3 == 0) goto L1c
            java.lang.String r4 = r2.a
            return r4
        L1c:
            int r1 = r1 + 1
            goto L7
        L1f:
            r4 = 0
            return r4
    }

    private static int m(java.lang.String r4) {
            java.util.ArrayList<com.tkay.expressad.exoplayer.k.o$a> r0 = com.tkay.expressad.exoplayer.k.o.al
            int r0 = r0.size()
            r1 = 0
        L7:
            if (r1 >= r0) goto L1f
            java.util.ArrayList<com.tkay.expressad.exoplayer.k.o$a> r2 = com.tkay.expressad.exoplayer.k.o.al
            java.lang.Object r2 = r2.get(r1)
            com.tkay.expressad.exoplayer.k.o$a r2 = (com.tkay.expressad.exoplayer.k.o.a) r2
            java.lang.String r3 = r2.a
            boolean r3 = r4.equals(r3)
            if (r3 == 0) goto L1c
            int r4 = r2.c
            return r4
        L1c:
            int r1 = r1 + 1
            goto L7
        L1f:
            r4 = -1
            return r4
    }
}
