package com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4;

abstract class Atom {
    public static final int DEFINES_LARGE_SIZE = 1;
    public static final int EXTENDS_TO_END_SIZE = 0;
    public static final int FULL_HEADER_SIZE = 12;
    public static final int HEADER_SIZE = 8;
    public static final int LONG_HEADER_SIZE = 16;
    public static final int TYPE_TTML = 0;
    public static final int TYPE__mp3 = 0;
    public static final int TYPE_ac_3 = 0;
    public static final int TYPE_alac = 0;
    public static final int TYPE_avc1 = 0;
    public static final int TYPE_avc3 = 0;
    public static final int TYPE_avcC = 0;
    public static final int TYPE_c608 = 0;
    public static final int TYPE_camm = 0;
    public static final int TYPE_co64 = 0;
    public static final int TYPE_ctts = 0;
    public static final int TYPE_d263 = 0;
    public static final int TYPE_dac3 = 0;
    public static final int TYPE_data = 0;
    public static final int TYPE_ddts = 0;
    public static final int TYPE_dec3 = 0;
    public static final int TYPE_dtsc = 0;
    public static final int TYPE_dtse = 0;
    public static final int TYPE_dtsh = 0;
    public static final int TYPE_dtsl = 0;
    public static final int TYPE_ec_3 = 0;
    public static final int TYPE_edts = 0;
    public static final int TYPE_elst = 0;
    public static final int TYPE_emsg = 0;
    public static final int TYPE_enca = 0;
    public static final int TYPE_encv = 0;
    public static final int TYPE_esds = 0;
    public static final int TYPE_frma = 0;
    public static final int TYPE_ftyp = 0;
    public static final int TYPE_hdlr = 0;
    public static final int TYPE_hev1 = 0;
    public static final int TYPE_hvc1 = 0;
    public static final int TYPE_hvcC = 0;
    public static final int TYPE_ilst = 0;
    public static final int TYPE_lpcm = 0;
    public static final int TYPE_mdat = 0;
    public static final int TYPE_mdhd = 0;
    public static final int TYPE_mdia = 0;
    public static final int TYPE_mean = 0;
    public static final int TYPE_mehd = 0;
    public static final int TYPE_meta = 0;
    public static final int TYPE_minf = 0;
    public static final int TYPE_moof = 0;
    public static final int TYPE_moov = 0;
    public static final int TYPE_mp4a = 0;
    public static final int TYPE_mp4v = 0;
    public static final int TYPE_mvex = 0;
    public static final int TYPE_mvhd = 0;
    public static final int TYPE_name = 0;
    public static final int TYPE_pasp = 0;
    public static final int TYPE_proj = 0;
    public static final int TYPE_pssh = 0;
    public static final int TYPE_s263 = 0;
    public static final int TYPE_saio = 0;
    public static final int TYPE_saiz = 0;
    public static final int TYPE_samr = 0;
    public static final int TYPE_sawb = 0;
    public static final int TYPE_sbgp = 0;
    public static final int TYPE_schi = 0;
    public static final int TYPE_schm = 0;
    public static final int TYPE_senc = 0;
    public static final int TYPE_sgpd = 0;
    public static final int TYPE_sidx = 0;
    public static final int TYPE_sinf = 0;
    public static final int TYPE_sowt = 0;
    public static final int TYPE_st3d = 0;
    public static final int TYPE_stbl = 0;
    public static final int TYPE_stco = 0;
    public static final int TYPE_stpp = 0;
    public static final int TYPE_stsc = 0;
    public static final int TYPE_stsd = 0;
    public static final int TYPE_stss = 0;
    public static final int TYPE_stsz = 0;
    public static final int TYPE_stts = 0;
    public static final int TYPE_stz2 = 0;
    public static final int TYPE_sv3d = 0;
    public static final int TYPE_tenc = 0;
    public static final int TYPE_tfdt = 0;
    public static final int TYPE_tfhd = 0;
    public static final int TYPE_tkhd = 0;
    public static final int TYPE_traf = 0;
    public static final int TYPE_trak = 0;
    public static final int TYPE_trex = 0;
    public static final int TYPE_trun = 0;
    public static final int TYPE_tx3g = 0;
    public static final int TYPE_udta = 0;
    public static final int TYPE_uuid = 0;
    public static final int TYPE_vmhd = 0;
    public static final int TYPE_vp08 = 0;
    public static final int TYPE_vp09 = 0;
    public static final int TYPE_vpcC = 0;
    public static final int TYPE_wave = 0;
    public static final int TYPE_wvtt = 0;
    public final int type;

    static final class ContainerAtom extends com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom {
        public final java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom> containerChildren;
        public final long endPosition;
        public final java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.LeafAtom> leafChildren;

        public ContainerAtom(int r1, long r2) {
                r0 = this;
                r0.<init>(r1)
                r0.endPosition = r2
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>()
                r0.leafChildren = r1
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>()
                r0.containerChildren = r1
                return
        }

        public final void add(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom r2) {
                r1 = this;
                java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r0 = r1.containerChildren
                r0.add(r2)
                return
        }

        public final void add(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.LeafAtom r2) {
                r1 = this;
                java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom> r0 = r1.leafChildren
                r0.add(r2)
                return
        }

        public final int getChildAtomOfTypeCount(int r6) {
                r5 = this;
                java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom> r0 = r5.leafChildren
                int r0 = r0.size()
                r1 = 0
                r2 = r1
                r3 = r2
            L9:
                if (r2 >= r0) goto L1c
                java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom> r4 = r5.leafChildren
                java.lang.Object r4 = r4.get(r2)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r4 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.LeafAtom) r4
                int r4 = r4.type
                if (r4 != r6) goto L19
                int r3 = r3 + 1
            L19:
                int r2 = r2 + 1
                goto L9
            L1c:
                java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r0 = r5.containerChildren
                int r0 = r0.size()
            L22:
                if (r1 >= r0) goto L35
                java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r2 = r5.containerChildren
                java.lang.Object r2 = r2.get(r1)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom r2 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom) r2
                int r2 = r2.type
                if (r2 != r6) goto L32
                int r3 = r3 + 1
            L32:
                int r1 = r1 + 1
                goto L22
            L35:
                return r3
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom getContainerAtomOfType(int r5) {
                r4 = this;
                java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r0 = r4.containerChildren
                int r0 = r0.size()
                r1 = 0
            L7:
                if (r1 >= r0) goto L19
                java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r2 = r4.containerChildren
                java.lang.Object r2 = r2.get(r1)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom r2 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom) r2
                int r3 = r2.type
                if (r3 != r5) goto L16
                return r2
            L16:
                int r1 = r1 + 1
                goto L7
            L19:
                r5 = 0
                return r5
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.LeafAtom getLeafAtomOfType(int r5) {
                r4 = this;
                java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom> r0 = r4.leafChildren
                int r0 = r0.size()
                r1 = 0
            L7:
                if (r1 >= r0) goto L19
                java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom> r2 = r4.leafChildren
                java.lang.Object r2 = r2.get(r1)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r2 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.LeafAtom) r2
                int r3 = r2.type
                if (r3 != r5) goto L16
                return r2
            L16:
                int r1 = r1 + 1
                goto L7
            L19:
                r5 = 0
                return r5
        }

        @Override
        public final java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                int r1 = r2.type
                java.lang.String r1 = getAtomTypeString(r1)
                r0.append(r1)
                java.lang.String r1 = " leaves: "
                r0.append(r1)
                java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom> r1 = r2.leafChildren
                java.lang.Object[] r1 = r1.toArray()
                java.lang.String r1 = java.util.Arrays.toString(r1)
                r0.append(r1)
                java.lang.String r1 = " containers: "
                r0.append(r1)
                java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r1 = r2.containerChildren
                java.lang.Object[] r1 = r1.toArray()
                java.lang.String r1 = java.util.Arrays.toString(r1)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    static final class LeafAtom extends com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom {
        public final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray data;

        public LeafAtom(int r1, com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2) {
                r0 = this;
                r0.<init>(r1)
                r0.data = r2
                return
        }
    }

    static {
            java.lang.String r0 = "ftyp"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_ftyp = r0
            java.lang.String r0 = "avc1"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_avc1 = r0
            java.lang.String r0 = "avc3"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_avc3 = r0
            java.lang.String r0 = "hvc1"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_hvc1 = r0
            java.lang.String r0 = "hev1"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_hev1 = r0
            java.lang.String r0 = "s263"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_s263 = r0
            java.lang.String r0 = "d263"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_d263 = r0
            java.lang.String r0 = "mdat"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_mdat = r0
            java.lang.String r0 = "mp4a"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_mp4a = r0
            java.lang.String r0 = ".mp3"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE__mp3 = r0
            java.lang.String r0 = "wave"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_wave = r0
            java.lang.String r0 = "lpcm"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_lpcm = r0
            java.lang.String r0 = "sowt"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_sowt = r0
            java.lang.String r0 = "ac-3"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_ac_3 = r0
            java.lang.String r0 = "dac3"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_dac3 = r0
            java.lang.String r0 = "ec-3"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_ec_3 = r0
            java.lang.String r0 = "dec3"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_dec3 = r0
            java.lang.String r0 = "dtsc"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_dtsc = r0
            java.lang.String r0 = "dtsh"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_dtsh = r0
            java.lang.String r0 = "dtsl"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_dtsl = r0
            java.lang.String r0 = "dtse"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_dtse = r0
            java.lang.String r0 = "ddts"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_ddts = r0
            java.lang.String r0 = "tfdt"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_tfdt = r0
            java.lang.String r0 = "tfhd"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_tfhd = r0
            java.lang.String r0 = "trex"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_trex = r0
            java.lang.String r0 = "trun"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_trun = r0
            java.lang.String r0 = "sidx"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_sidx = r0
            java.lang.String r0 = "moov"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_moov = r0
            java.lang.String r0 = "mvhd"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_mvhd = r0
            java.lang.String r0 = "trak"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_trak = r0
            java.lang.String r0 = "mdia"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_mdia = r0
            java.lang.String r0 = "minf"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_minf = r0
            java.lang.String r0 = "stbl"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stbl = r0
            java.lang.String r0 = "avcC"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_avcC = r0
            java.lang.String r0 = "hvcC"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_hvcC = r0
            java.lang.String r0 = "esds"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_esds = r0
            java.lang.String r0 = "moof"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_moof = r0
            java.lang.String r0 = "traf"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_traf = r0
            java.lang.String r0 = "mvex"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_mvex = r0
            java.lang.String r0 = "mehd"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_mehd = r0
            java.lang.String r0 = "tkhd"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_tkhd = r0
            java.lang.String r0 = "edts"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_edts = r0
            java.lang.String r0 = "elst"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_elst = r0
            java.lang.String r0 = "mdhd"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_mdhd = r0
            java.lang.String r0 = "hdlr"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_hdlr = r0
            java.lang.String r0 = "stsd"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stsd = r0
            java.lang.String r0 = "pssh"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_pssh = r0
            java.lang.String r0 = "sinf"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_sinf = r0
            java.lang.String r0 = "schm"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_schm = r0
            java.lang.String r0 = "schi"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_schi = r0
            java.lang.String r0 = "tenc"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_tenc = r0
            java.lang.String r0 = "encv"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_encv = r0
            java.lang.String r0 = "enca"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_enca = r0
            java.lang.String r0 = "frma"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_frma = r0
            java.lang.String r0 = "saiz"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_saiz = r0
            java.lang.String r0 = "saio"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_saio = r0
            java.lang.String r0 = "sbgp"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_sbgp = r0
            java.lang.String r0 = "sgpd"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_sgpd = r0
            java.lang.String r0 = "uuid"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_uuid = r0
            java.lang.String r0 = "senc"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_senc = r0
            java.lang.String r0 = "pasp"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_pasp = r0
            java.lang.String r0 = "TTML"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_TTML = r0
            java.lang.String r0 = "vmhd"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_vmhd = r0
            java.lang.String r0 = "mp4v"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_mp4v = r0
            java.lang.String r0 = "stts"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stts = r0
            java.lang.String r0 = "stss"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stss = r0
            java.lang.String r0 = "ctts"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_ctts = r0
            java.lang.String r0 = "stsc"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stsc = r0
            java.lang.String r0 = "stsz"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stsz = r0
            java.lang.String r0 = "stz2"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stz2 = r0
            java.lang.String r0 = "stco"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stco = r0
            java.lang.String r0 = "co64"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_co64 = r0
            java.lang.String r0 = "tx3g"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_tx3g = r0
            java.lang.String r0 = "wvtt"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_wvtt = r0
            java.lang.String r0 = "stpp"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stpp = r0
            java.lang.String r0 = "c608"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_c608 = r0
            java.lang.String r0 = "samr"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_samr = r0
            java.lang.String r0 = "sawb"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_sawb = r0
            java.lang.String r0 = "udta"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_udta = r0
            java.lang.String r0 = "meta"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_meta = r0
            java.lang.String r0 = "ilst"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_ilst = r0
            java.lang.String r0 = "mean"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_mean = r0
            java.lang.String r0 = "name"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_name = r0
            java.lang.String r0 = "data"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_data = r0
            java.lang.String r0 = "emsg"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_emsg = r0
            java.lang.String r0 = "st3d"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_st3d = r0
            java.lang.String r0 = "sv3d"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_sv3d = r0
            java.lang.String r0 = "proj"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_proj = r0
            java.lang.String r0 = "vp08"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_vp08 = r0
            java.lang.String r0 = "vp09"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_vp09 = r0
            java.lang.String r0 = "vpcC"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_vpcC = r0
            java.lang.String r0 = "camm"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_camm = r0
            java.lang.String r0 = "alac"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_alac = r0
            return
    }

    public Atom(int r1) {
            r0 = this;
            r0.<init>()
            r0.type = r1
            return
    }

    public static java.lang.String getAtomTypeString(int r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = ""
            r0.append(r1)
            int r1 = r2 >> 24
            r1 = r1 & 255(0xff, float:3.57E-43)
            char r1 = (char) r1
            r0.append(r1)
            int r1 = r2 >> 16
            r1 = r1 & 255(0xff, float:3.57E-43)
            char r1 = (char) r1
            r0.append(r1)
            int r1 = r2 >> 8
            r1 = r1 & 255(0xff, float:3.57E-43)
            char r1 = (char) r1
            r0.append(r1)
            r2 = r2 & 255(0xff, float:3.57E-43)
            char r2 = (char) r2
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static int parseFullAtomFlags(int r1) {
            r0 = 16777215(0xffffff, float:2.3509886E-38)
            r1 = r1 & r0
            return r1
    }

    public static int parseFullAtomVersion(int r0) {
            int r0 = r0 >> 24
            r0 = r0 & 255(0xff, float:3.57E-43)
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            int r0 = r1.type
            java.lang.String r0 = getAtomTypeString(r0)
            return r0
    }
}
