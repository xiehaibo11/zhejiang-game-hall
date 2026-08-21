package com.mbridge.msdk.playercommon.exoplayer2.util;

public final class MimeTypes {
    public static final java.lang.String APPLICATION_CAMERA_MOTION = "application/x-camera-motion";
    public static final java.lang.String APPLICATION_CEA608 = "application/cea-608";
    public static final java.lang.String APPLICATION_CEA708 = "application/cea-708";
    public static final java.lang.String APPLICATION_DVBSUBS = "application/dvbsubs";
    public static final java.lang.String APPLICATION_EMSG = "application/x-emsg";
    public static final java.lang.String APPLICATION_EXIF = "application/x-exif";
    public static final java.lang.String APPLICATION_ID3 = "application/id3";
    public static final java.lang.String APPLICATION_M3U8 = "application/x-mpegURL";
    public static final java.lang.String APPLICATION_MP4 = "application/mp4";
    public static final java.lang.String APPLICATION_MP4CEA608 = "application/x-mp4-cea-608";
    public static final java.lang.String APPLICATION_MP4VTT = "application/x-mp4-vtt";
    public static final java.lang.String APPLICATION_MPD = "application/dash+xml";
    public static final java.lang.String APPLICATION_PGS = "application/pgs";
    public static final java.lang.String APPLICATION_RAWCC = "application/x-rawcc";
    public static final java.lang.String APPLICATION_SCTE35 = "application/x-scte35";
    public static final java.lang.String APPLICATION_SS = "application/vnd.ms-sstr+xml";
    public static final java.lang.String APPLICATION_SUBRIP = "application/x-subrip";
    public static final java.lang.String APPLICATION_TTML = "application/ttml+xml";
    public static final java.lang.String APPLICATION_TX3G = "application/x-quicktime-tx3g";
    public static final java.lang.String APPLICATION_VOBSUB = "application/vobsub";
    public static final java.lang.String APPLICATION_WEBM = "application/webm";
    public static final java.lang.String AUDIO_AAC = "audio/mp4a-latm";
    public static final java.lang.String AUDIO_AC3 = "audio/ac3";
    public static final java.lang.String AUDIO_ALAC = "audio/alac";
    public static final java.lang.String AUDIO_ALAW = "audio/g711-alaw";
    public static final java.lang.String AUDIO_AMR_NB = "audio/3gpp";
    public static final java.lang.String AUDIO_AMR_WB = "audio/amr-wb";
    public static final java.lang.String AUDIO_DTS = "audio/vnd.dts";
    public static final java.lang.String AUDIO_DTS_EXPRESS = "audio/vnd.dts.hd;profile=lbr";
    public static final java.lang.String AUDIO_DTS_HD = "audio/vnd.dts.hd";
    public static final java.lang.String AUDIO_E_AC3 = "audio/eac3";
    public static final java.lang.String AUDIO_E_AC3_JOC = "audio/eac3-joc";
    public static final java.lang.String AUDIO_FLAC = "audio/flac";
    public static final java.lang.String AUDIO_MLAW = "audio/g711-mlaw";
    public static final java.lang.String AUDIO_MP4 = "audio/mp4";
    public static final java.lang.String AUDIO_MPEG = "audio/mpeg";
    public static final java.lang.String AUDIO_MPEG_L1 = "audio/mpeg-L1";
    public static final java.lang.String AUDIO_MPEG_L2 = "audio/mpeg-L2";
    public static final java.lang.String AUDIO_MSGSM = "audio/gsm";
    public static final java.lang.String AUDIO_OPUS = "audio/opus";
    public static final java.lang.String AUDIO_RAW = "audio/raw";
    public static final java.lang.String AUDIO_TRUEHD = "audio/true-hd";
    public static final java.lang.String AUDIO_UNKNOWN = "audio/x-unknown";
    public static final java.lang.String AUDIO_VORBIS = "audio/vorbis";
    public static final java.lang.String AUDIO_WEBM = "audio/webm";
    public static final java.lang.String BASE_TYPE_APPLICATION = "application";
    public static final java.lang.String BASE_TYPE_AUDIO = "audio";
    public static final java.lang.String BASE_TYPE_TEXT = "text";
    public static final java.lang.String BASE_TYPE_VIDEO = "video";
    public static final java.lang.String TEXT_SSA = "text/x-ssa";
    public static final java.lang.String TEXT_VTT = "text/vtt";
    public static final java.lang.String VIDEO_H263 = "video/3gpp";
    public static final java.lang.String VIDEO_H264 = "video/avc";
    public static final java.lang.String VIDEO_H265 = "video/hevc";
    public static final java.lang.String VIDEO_MP4 = "video/mp4";
    public static final java.lang.String VIDEO_MP4V = "video/mp4v-es";
    public static final java.lang.String VIDEO_MPEG = "video/mpeg";
    public static final java.lang.String VIDEO_MPEG2 = "video/mpeg2";
    public static final java.lang.String VIDEO_UNKNOWN = "video/x-unknown";
    public static final java.lang.String VIDEO_VC1 = "video/wvc1";
    public static final java.lang.String VIDEO_VP8 = "video/x-vnd.on2.vp8";
    public static final java.lang.String VIDEO_VP9 = "video/x-vnd.on2.vp9";
    public static final java.lang.String VIDEO_WEBM = "video/webm";
    private static final java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes.CustomMimeType> customMimeTypes = null;

    private static final class CustomMimeType {
        public final java.lang.String codecPrefix;
        public final java.lang.String mimeType;
        public final int trackType;

        public CustomMimeType(java.lang.String r1, java.lang.String r2, int r3) {
                r0 = this;
                r0.<init>()
                r0.mimeType = r1
                r0.codecPrefix = r2
                r0.trackType = r3
                return
        }
    }

    static {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes.customMimeTypes = r0
            return
    }

    private MimeTypes() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getAudioMediaMimeType(java.lang.String r5) {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = ","
            java.lang.String[] r5 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.split(r5, r1)
            int r1 = r5.length
            r2 = 0
        Lc:
            if (r2 >= r1) goto L20
            r3 = r5[r2]
            java.lang.String r3 = getMediaMimeType(r3)
            if (r3 == 0) goto L1d
            boolean r4 = isAudio(r3)
            if (r4 == 0) goto L1d
            return r3
        L1d:
            int r2 = r2 + 1
            goto Lc
        L20:
            return r0
    }

    private static java.lang.String getCustomMimeTypeForCodec(java.lang.String r4) {
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes$CustomMimeType> r0 = com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes.customMimeTypes
            int r0 = r0.size()
            r1 = 0
        L7:
            if (r1 >= r0) goto L1f
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes$CustomMimeType> r2 = com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes.customMimeTypes
            java.lang.Object r2 = r2.get(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes$CustomMimeType r2 = (com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes.CustomMimeType) r2
            java.lang.String r3 = r2.codecPrefix
            boolean r3 = r4.startsWith(r3)
            if (r3 == 0) goto L1c
            java.lang.String r4 = r2.mimeType
            return r4
        L1c:
            int r1 = r1 + 1
            goto L7
        L1f:
            r4 = 0
            return r4
    }

    public static int getEncoding(java.lang.String r7) {
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

    public static java.lang.String getMediaMimeType(java.lang.String r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            java.lang.String r3 = r3.trim()
            java.lang.String r1 = "avc1"
            boolean r1 = r3.startsWith(r1)
            if (r1 != 0) goto L103
            java.lang.String r1 = "avc3"
            boolean r1 = r3.startsWith(r1)
            if (r1 == 0) goto L1a
            goto L103
        L1a:
            java.lang.String r1 = "hev1"
            boolean r1 = r3.startsWith(r1)
            if (r1 != 0) goto L100
            java.lang.String r1 = "hvc1"
            boolean r1 = r3.startsWith(r1)
            if (r1 == 0) goto L2c
            goto L100
        L2c:
            java.lang.String r1 = "vp9"
            boolean r1 = r3.startsWith(r1)
            if (r1 != 0) goto Lfd
            java.lang.String r1 = "vp09"
            boolean r1 = r3.startsWith(r1)
            if (r1 == 0) goto L3e
            goto Lfd
        L3e:
            java.lang.String r1 = "vp8"
            boolean r1 = r3.startsWith(r1)
            if (r1 != 0) goto Lfa
            java.lang.String r1 = "vp08"
            boolean r1 = r3.startsWith(r1)
            if (r1 == 0) goto L50
            goto Lfa
        L50:
            java.lang.String r1 = "mp4a"
            boolean r1 = r3.startsWith(r1)
            if (r1 == 0) goto L84
            java.lang.String r1 = "mp4a."
            boolean r1 = r3.startsWith(r1)
            if (r1 == 0) goto L7f
            r1 = 5
            java.lang.String r3 = r3.substring(r1)
            int r1 = r3.length()
            r2 = 2
            if (r1 < r2) goto L7f
            r1 = 0
            java.lang.String r3 = r3.substring(r1, r2)     // Catch: java.lang.NumberFormatException -> L7f
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.toUpperInvariant(r3)     // Catch: java.lang.NumberFormatException -> L7f
            r1 = 16
            int r3 = java.lang.Integer.parseInt(r3, r1)     // Catch: java.lang.NumberFormatException -> L7f
            java.lang.String r0 = getMimeTypeFromMp4ObjectType(r3)     // Catch: java.lang.NumberFormatException -> L7f
        L7f:
            if (r0 != 0) goto L83
            java.lang.String r0 = "audio/mp4a-latm"
        L83:
            return r0
        L84:
            java.lang.String r0 = "ac-3"
            boolean r0 = r3.startsWith(r0)
            if (r0 != 0) goto Lf7
            java.lang.String r0 = "dac3"
            boolean r0 = r3.startsWith(r0)
            if (r0 == 0) goto L95
            goto Lf7
        L95:
            java.lang.String r0 = "ec-3"
            boolean r0 = r3.startsWith(r0)
            if (r0 != 0) goto Lf4
            java.lang.String r0 = "dec3"
            boolean r0 = r3.startsWith(r0)
            if (r0 == 0) goto La6
            goto Lf4
        La6:
            java.lang.String r0 = "ec+3"
            boolean r0 = r3.startsWith(r0)
            if (r0 == 0) goto Lb1
            java.lang.String r3 = "audio/eac3-joc"
            return r3
        Lb1:
            java.lang.String r0 = "dtsc"
            boolean r0 = r3.startsWith(r0)
            if (r0 != 0) goto Lf1
            java.lang.String r0 = "dtse"
            boolean r0 = r3.startsWith(r0)
            if (r0 == 0) goto Lc2
            goto Lf1
        Lc2:
            java.lang.String r0 = "dtsh"
            boolean r0 = r3.startsWith(r0)
            if (r0 != 0) goto Lee
            java.lang.String r0 = "dtsl"
            boolean r0 = r3.startsWith(r0)
            if (r0 == 0) goto Ld3
            goto Lee
        Ld3:
            java.lang.String r0 = "opus"
            boolean r0 = r3.startsWith(r0)
            if (r0 == 0) goto Lde
            java.lang.String r3 = "audio/opus"
            return r3
        Lde:
            java.lang.String r0 = "vorbis"
            boolean r0 = r3.startsWith(r0)
            if (r0 == 0) goto Le9
            java.lang.String r3 = "audio/vorbis"
            return r3
        Le9:
            java.lang.String r3 = getCustomMimeTypeForCodec(r3)
            return r3
        Lee:
            java.lang.String r3 = "audio/vnd.dts.hd"
            return r3
        Lf1:
            java.lang.String r3 = "audio/vnd.dts"
            return r3
        Lf4:
            java.lang.String r3 = "audio/eac3"
            return r3
        Lf7:
            java.lang.String r3 = "audio/ac3"
            return r3
        Lfa:
            java.lang.String r3 = "video/x-vnd.on2.vp8"
            return r3
        Lfd:
            java.lang.String r3 = "video/x-vnd.on2.vp9"
            return r3
        L100:
            java.lang.String r3 = "video/hevc"
            return r3
        L103:
            java.lang.String r3 = "video/avc"
            return r3
    }

    public static java.lang.String getMimeTypeFromMp4ObjectType(int r1) {
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

    private static java.lang.String getTopLevelType(java.lang.String r3) {
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            r0 = 47
            int r0 = r3.indexOf(r0)
            r1 = -1
            if (r0 == r1) goto L13
            r1 = 0
            java.lang.String r3 = r3.substring(r1, r0)
            return r3
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid mime type: "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public static int getTrackType(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L8
            r1 = -1
            return r1
        L8:
            boolean r0 = isAudio(r1)
            if (r0 == 0) goto L10
            r1 = 1
            return r1
        L10:
            boolean r0 = isVideo(r1)
            if (r0 == 0) goto L18
            r1 = 2
            return r1
        L18:
            boolean r0 = isText(r1)
            if (r0 != 0) goto L9f
            java.lang.String r0 = "application/cea-608"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L9f
            java.lang.String r0 = "application/cea-708"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L9f
            java.lang.String r0 = "application/x-mp4-cea-608"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L9f
            java.lang.String r0 = "application/x-subrip"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L9f
            java.lang.String r0 = "application/ttml+xml"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L9f
            java.lang.String r0 = "application/x-quicktime-tx3g"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L9f
            java.lang.String r0 = "application/x-mp4-vtt"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L9f
            java.lang.String r0 = "application/x-rawcc"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L9f
            java.lang.String r0 = "application/vobsub"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L9f
            java.lang.String r0 = "application/pgs"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L9f
            java.lang.String r0 = "application/dvbsubs"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L77
            goto L9f
        L77:
            java.lang.String r0 = "application/id3"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L9d
            java.lang.String r0 = "application/x-emsg"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L9d
            java.lang.String r0 = "application/x-scte35"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L9d
            java.lang.String r0 = "application/x-camera-motion"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L98
            goto L9d
        L98:
            int r1 = getTrackTypeForCustomMimeType(r1)
            return r1
        L9d:
            r1 = 4
            return r1
        L9f:
            r1 = 3
            return r1
    }

    private static int getTrackTypeForCustomMimeType(java.lang.String r4) {
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes$CustomMimeType> r0 = com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes.customMimeTypes
            int r0 = r0.size()
            r1 = 0
        L7:
            if (r1 >= r0) goto L1f
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes$CustomMimeType> r2 = com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes.customMimeTypes
            java.lang.Object r2 = r2.get(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes$CustomMimeType r2 = (com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes.CustomMimeType) r2
            java.lang.String r3 = r2.mimeType
            boolean r3 = r4.equals(r3)
            if (r3 == 0) goto L1c
            int r4 = r2.trackType
            return r4
        L1c:
            int r1 = r1 + 1
            goto L7
        L1f:
            r4 = -1
            return r4
    }

    public static int getTrackTypeOfCodec(java.lang.String r0) {
            java.lang.String r0 = getMediaMimeType(r0)
            int r0 = getTrackType(r0)
            return r0
    }

    public static java.lang.String getVideoMediaMimeType(java.lang.String r5) {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = ","
            java.lang.String[] r5 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.split(r5, r1)
            int r1 = r5.length
            r2 = 0
        Lc:
            if (r2 >= r1) goto L20
            r3 = r5[r2]
            java.lang.String r3 = getMediaMimeType(r3)
            if (r3 == 0) goto L1d
            boolean r4 = isVideo(r3)
            if (r4 == 0) goto L1d
            return r3
        L1d:
            int r2 = r2 + 1
            goto Lc
        L20:
            return r0
    }

    public static boolean isApplication(java.lang.String r1) {
            java.lang.String r1 = getTopLevelType(r1)
            java.lang.String r0 = "application"
            boolean r1 = r0.equals(r1)
            return r1
    }

    public static boolean isAudio(java.lang.String r1) {
            java.lang.String r1 = getTopLevelType(r1)
            java.lang.String r0 = "audio"
            boolean r1 = r0.equals(r1)
            return r1
    }

    public static boolean isText(java.lang.String r1) {
            java.lang.String r1 = getTopLevelType(r1)
            java.lang.String r0 = "text"
            boolean r1 = r0.equals(r1)
            return r1
    }

    public static boolean isVideo(java.lang.String r1) {
            java.lang.String r1 = getTopLevelType(r1)
            java.lang.String r0 = "video"
            boolean r1 = r0.equals(r1)
            return r1
    }

    public static void registerCustomMimeType(java.lang.String r2, java.lang.String r3, int r4) {
            com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes$CustomMimeType r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes$CustomMimeType
            r0.<init>(r2, r3, r4)
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes$CustomMimeType> r3 = com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes.customMimeTypes
            int r3 = r3.size()
            r4 = 0
        Lc:
            if (r4 >= r3) goto L27
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes$CustomMimeType> r1 = com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes.customMimeTypes
            java.lang.Object r1 = r1.get(r4)
            com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes$CustomMimeType r1 = (com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes.CustomMimeType) r1
            java.lang.String r1 = r1.mimeType
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto L24
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes$CustomMimeType> r2 = com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes.customMimeTypes
            r2.remove(r4)
            goto L27
        L24:
            int r4 = r4 + 1
            goto Lc
        L27:
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes$CustomMimeType> r2 = com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes.customMimeTypes
            r2.add(r0)
            return
    }
}
