package com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4;

final class MetadataUtil {
    private static final java.lang.String LANGUAGE_UNDEFINED = "und";
    private static final int SHORT_TYPE_ALBUM = 0;
    private static final int SHORT_TYPE_ARTIST = 0;
    private static final int SHORT_TYPE_COMMENT = 0;
    private static final int SHORT_TYPE_COMPOSER_1 = 0;
    private static final int SHORT_TYPE_COMPOSER_2 = 0;
    private static final int SHORT_TYPE_ENCODER = 0;
    private static final int SHORT_TYPE_GENRE = 0;
    private static final int SHORT_TYPE_LYRICS = 0;
    private static final int SHORT_TYPE_NAME_1 = 0;
    private static final int SHORT_TYPE_NAME_2 = 0;
    private static final int SHORT_TYPE_YEAR = 0;
    private static final java.lang.String[] STANDARD_GENRES = null;
    private static final java.lang.String TAG = "MetadataUtil";
    private static final int TYPE_ALBUM_ARTIST = 0;
    private static final int TYPE_COMPILATION = 0;
    private static final int TYPE_COVER_ART = 0;
    private static final int TYPE_DISK_NUMBER = 0;
    private static final int TYPE_GAPLESS_ALBUM = 0;
    private static final int TYPE_GENRE = 0;
    private static final int TYPE_GROUPING = 0;
    private static final int TYPE_INTERNAL = 0;
    private static final int TYPE_RATING = 0;
    private static final int TYPE_SORT_ALBUM = 0;
    private static final int TYPE_SORT_ALBUM_ARTIST = 0;
    private static final int TYPE_SORT_ARTIST = 0;
    private static final int TYPE_SORT_COMPOSER = 0;
    private static final int TYPE_SORT_TRACK_NAME = 0;
    private static final int TYPE_TEMPO = 0;
    private static final int TYPE_TRACK_NUMBER = 0;
    private static final int TYPE_TV_SHOW = 0;
    private static final int TYPE_TV_SORT_SHOW = 0;

    static {
            java.lang.String r0 = "nam"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.SHORT_TYPE_NAME_1 = r0
            java.lang.String r0 = "trk"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.SHORT_TYPE_NAME_2 = r0
            java.lang.String r0 = "cmt"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.SHORT_TYPE_COMMENT = r0
            java.lang.String r0 = "day"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.SHORT_TYPE_YEAR = r0
            java.lang.String r0 = "ART"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.SHORT_TYPE_ARTIST = r0
            java.lang.String r0 = "too"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.SHORT_TYPE_ENCODER = r0
            java.lang.String r0 = "alb"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.SHORT_TYPE_ALBUM = r0
            java.lang.String r0 = "com"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.SHORT_TYPE_COMPOSER_1 = r0
            java.lang.String r0 = "wrt"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.SHORT_TYPE_COMPOSER_2 = r0
            java.lang.String r0 = "lyr"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.SHORT_TYPE_LYRICS = r0
            java.lang.String r0 = "gen"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.SHORT_TYPE_GENRE = r0
            java.lang.String r0 = "covr"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_COVER_ART = r0
            java.lang.String r0 = "gnre"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_GENRE = r0
            java.lang.String r0 = "grp"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_GROUPING = r0
            java.lang.String r0 = "disk"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_DISK_NUMBER = r0
            java.lang.String r0 = "trkn"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_TRACK_NUMBER = r0
            java.lang.String r0 = "tmpo"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_TEMPO = r0
            java.lang.String r0 = "cpil"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_COMPILATION = r0
            java.lang.String r0 = "aART"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_ALBUM_ARTIST = r0
            java.lang.String r0 = "sonm"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_SORT_TRACK_NAME = r0
            java.lang.String r0 = "soal"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_SORT_ALBUM = r0
            java.lang.String r0 = "soar"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_SORT_ARTIST = r0
            java.lang.String r0 = "soaa"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_SORT_ALBUM_ARTIST = r0
            java.lang.String r0 = "soco"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_SORT_COMPOSER = r0
            java.lang.String r0 = "rtng"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_RATING = r0
            java.lang.String r0 = "pgap"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_GAPLESS_ALBUM = r0
            java.lang.String r0 = "sosn"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_TV_SORT_SHOW = r0
            java.lang.String r0 = "tvsh"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_TV_SHOW = r0
            java.lang.String r0 = "----"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_INTERNAL = r0
            java.lang.String r1 = "Blues"
            java.lang.String r2 = "Classic Rock"
            java.lang.String r3 = "Country"
            java.lang.String r4 = "Dance"
            java.lang.String r5 = "Disco"
            java.lang.String r6 = "Funk"
            java.lang.String r7 = "Grunge"
            java.lang.String r8 = "Hip-Hop"
            java.lang.String r9 = "Jazz"
            java.lang.String r10 = "Metal"
            java.lang.String r11 = "New Age"
            java.lang.String r12 = "Oldies"
            java.lang.String r13 = "Other"
            java.lang.String r14 = "Pop"
            java.lang.String r15 = "R&B"
            java.lang.String r16 = "Rap"
            java.lang.String r17 = "Reggae"
            java.lang.String r18 = "Rock"
            java.lang.String r19 = "Techno"
            java.lang.String r20 = "Industrial"
            java.lang.String r21 = "Alternative"
            java.lang.String r22 = "Ska"
            java.lang.String r23 = "Death Metal"
            java.lang.String r24 = "Pranks"
            java.lang.String r25 = "Soundtrack"
            java.lang.String r26 = "Euro-Techno"
            java.lang.String r27 = "Ambient"
            java.lang.String r28 = "Trip-Hop"
            java.lang.String r29 = "Vocal"
            java.lang.String r30 = "Jazz+Funk"
            java.lang.String r31 = "Fusion"
            java.lang.String r32 = "Trance"
            java.lang.String r33 = "Classical"
            java.lang.String r34 = "Instrumental"
            java.lang.String r35 = "Acid"
            java.lang.String r36 = "House"
            java.lang.String r37 = "Game"
            java.lang.String r38 = "Sound Clip"
            java.lang.String r39 = "Gospel"
            java.lang.String r40 = "Noise"
            java.lang.String r41 = "AlternRock"
            java.lang.String r42 = "Bass"
            java.lang.String r43 = "Soul"
            java.lang.String r44 = "Punk"
            java.lang.String r45 = "Space"
            java.lang.String r46 = "Meditative"
            java.lang.String r47 = "Instrumental Pop"
            java.lang.String r48 = "Instrumental Rock"
            java.lang.String r49 = "Ethnic"
            java.lang.String r50 = "Gothic"
            java.lang.String r51 = "Darkwave"
            java.lang.String r52 = "Techno-Industrial"
            java.lang.String r53 = "Electronic"
            java.lang.String r54 = "Pop-Folk"
            java.lang.String r55 = "Eurodance"
            java.lang.String r56 = "Dream"
            java.lang.String r57 = "Southern Rock"
            java.lang.String r58 = "Comedy"
            java.lang.String r59 = "Cult"
            java.lang.String r60 = "Gangsta"
            java.lang.String r61 = "Top 40"
            java.lang.String r62 = "Christian Rap"
            java.lang.String r63 = "Pop/Funk"
            java.lang.String r64 = "Jungle"
            java.lang.String r65 = "Native American"
            java.lang.String r66 = "Cabaret"
            java.lang.String r67 = "New Wave"
            java.lang.String r68 = "Psychadelic"
            java.lang.String r69 = "Rave"
            java.lang.String r70 = "Showtunes"
            java.lang.String r71 = "Trailer"
            java.lang.String r72 = "Lo-Fi"
            java.lang.String r73 = "Tribal"
            java.lang.String r74 = "Acid Punk"
            java.lang.String r75 = "Acid Jazz"
            java.lang.String r76 = "Polka"
            java.lang.String r77 = "Retro"
            java.lang.String r78 = "Musical"
            java.lang.String r79 = "Rock & Roll"
            java.lang.String r80 = "Hard Rock"
            java.lang.String r81 = "Folk"
            java.lang.String r82 = "Folk-Rock"
            java.lang.String r83 = "National Folk"
            java.lang.String r84 = "Swing"
            java.lang.String r85 = "Fast Fusion"
            java.lang.String r86 = "Bebob"
            java.lang.String r87 = "Latin"
            java.lang.String r88 = "Revival"
            java.lang.String r89 = "Celtic"
            java.lang.String r90 = "Bluegrass"
            java.lang.String r91 = "Avantgarde"
            java.lang.String r92 = "Gothic Rock"
            java.lang.String r93 = "Progressive Rock"
            java.lang.String r94 = "Psychedelic Rock"
            java.lang.String r95 = "Symphonic Rock"
            java.lang.String r96 = "Slow Rock"
            java.lang.String r97 = "Big Band"
            java.lang.String r98 = "Chorus"
            java.lang.String r99 = "Easy Listening"
            java.lang.String r100 = "Acoustic"
            java.lang.String r101 = "Humour"
            java.lang.String r102 = "Speech"
            java.lang.String r103 = "Chanson"
            java.lang.String r104 = "Opera"
            java.lang.String r105 = "Chamber Music"
            java.lang.String r106 = "Sonata"
            java.lang.String r107 = "Symphony"
            java.lang.String r108 = "Booty Bass"
            java.lang.String r109 = "Primus"
            java.lang.String r110 = "Porn Groove"
            java.lang.String r111 = "Satire"
            java.lang.String r112 = "Slow Jam"
            java.lang.String r113 = "Club"
            java.lang.String r114 = "Tango"
            java.lang.String r115 = "Samba"
            java.lang.String r116 = "Folklore"
            java.lang.String r117 = "Ballad"
            java.lang.String r118 = "Power Ballad"
            java.lang.String r119 = "Rhythmic Soul"
            java.lang.String r120 = "Freestyle"
            java.lang.String r121 = "Duet"
            java.lang.String r122 = "Punk Rock"
            java.lang.String r123 = "Drum Solo"
            java.lang.String r124 = "A capella"
            java.lang.String r125 = "Euro-House"
            java.lang.String r126 = "Dance Hall"
            java.lang.String r127 = "Goa"
            java.lang.String r128 = "Drum & Bass"
            java.lang.String r129 = "Club-House"
            java.lang.String r130 = "Hardcore"
            java.lang.String r131 = "Terror"
            java.lang.String r132 = "Indie"
            java.lang.String r133 = "BritPop"
            java.lang.String r134 = "Negerpunk"
            java.lang.String r135 = "Polsk Punk"
            java.lang.String r136 = "Beat"
            java.lang.String r137 = "Christian Gangsta Rap"
            java.lang.String r138 = "Heavy Metal"
            java.lang.String r139 = "Black Metal"
            java.lang.String r140 = "Crossover"
            java.lang.String r141 = "Contemporary Christian"
            java.lang.String r142 = "Christian Rock"
            java.lang.String r143 = "Merengue"
            java.lang.String r144 = "Salsa"
            java.lang.String r145 = "Thrash Metal"
            java.lang.String r146 = "Anime"
            java.lang.String r147 = "Jpop"
            java.lang.String r148 = "Synthpop"
            java.lang.String[] r0 = new java.lang.String[]{r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31, r32, r33, r34, r35, r36, r37, r38, r39, r40, r41, r42, r43, r44, r45, r46, r47, r48, r49, r50, r51, r52, r53, r54, r55, r56, r57, r58, r59, r60, r61, r62, r63, r64, r65, r66, r67, r68, r69, r70, r71, r72, r73, r74, r75, r76, r77, r78, r79, r80, r81, r82, r83, r84, r85, r86, r87, r88, r89, r90, r91, r92, r93, r94, r95, r96, r97, r98, r99, r100, r101, r102, r103, r104, r105, r106, r107, r108, r109, r110, r111, r112, r113, r114, r115, r116, r117, r118, r119, r120, r121, r122, r123, r124, r125, r126, r127, r128, r129, r130, r131, r132, r133, r134, r135, r136, r137, r138, r139, r140, r141, r142, r143, r144, r145, r146, r147, r148}
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.STANDARD_GENRES = r0
            return
    }

    private MetadataUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.CommentFrame parseCommentAttribute(int r3, com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4) {
            int r0 = r4.readInt()
            int r1 = r4.readInt()
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_data
            if (r1 != r2) goto L1f
            r3 = 8
            r4.skipBytes(r3)
            int r0 = r0 + (-16)
            java.lang.String r3 = r4.readNullTerminatedString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.CommentFrame r4 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.CommentFrame
            java.lang.String r0 = "und"
            r4.<init>(r0, r3, r3)
            return r4
        L1f:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "Failed to parse comment attribute: "
            r4.append(r0)
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.getAtomTypeString(r3)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "MetadataUtil"
            android.util.Log.w(r4, r3)
            r3 = 0
            return r3
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ApicFrame parseCoverArt(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5) {
            int r0 = r5.readInt()
            int r1 = r5.readInt()
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_data
            java.lang.String r3 = "MetadataUtil"
            r4 = 0
            if (r1 != r2) goto L50
            int r1 = r5.readInt()
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.parseFullAtomFlags(r1)
            r2 = 13
            if (r1 != r2) goto L1e
            java.lang.String r2 = "image/jpeg"
            goto L26
        L1e:
            r2 = 14
            if (r1 != r2) goto L25
            java.lang.String r2 = "image/png"
            goto L26
        L25:
            r2 = r4
        L26:
            if (r2 != 0) goto L3d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "Unrecognized cover art flags: "
            r5.append(r0)
            r5.append(r1)
            java.lang.String r5 = r5.toString()
            android.util.Log.w(r3, r5)
            return r4
        L3d:
            r1 = 4
            r5.skipBytes(r1)
            int r0 = r0 + (-16)
            byte[] r1 = new byte[r0]
            r3 = 0
            r5.readBytes(r1, r3, r0)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ApicFrame r5 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ApicFrame
            r0 = 3
            r5.<init>(r2, r4, r0, r1)
            return r5
        L50:
            java.lang.String r5 = "Failed to parse cover art attribute"
            android.util.Log.w(r3, r5)
            return r4
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata.Entry parseIlstElement(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5) {
            int r0 = r5.getPosition()
            int r1 = r5.readInt()
            int r0 = r0 + r1
            int r1 = r5.readInt()
            int r2 = r1 >> 24
            r2 = r2 & 255(0xff, float:3.57E-43)
            r3 = 169(0xa9, float:2.37E-43)
            if (r2 == r3) goto L106
            r3 = 65533(0xfffd, float:9.1831E-41)
            if (r2 != r3) goto L1c
            goto L106
        L1c:
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_GENRE     // Catch: java.lang.Throwable -> L1bf
            if (r1 != r2) goto L28
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame r1 = parseStandardGenreAttribute(r5)     // Catch: java.lang.Throwable -> L1bf
            r5.setPosition(r0)
            return r1
        L28:
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_DISK_NUMBER     // Catch: java.lang.Throwable -> L1bf
            if (r1 != r2) goto L36
            java.lang.String r2 = "TPOS"
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame r1 = parseIndexAndCountAttribute(r1, r2, r5)     // Catch: java.lang.Throwable -> L1bf
            r5.setPosition(r0)
            return r1
        L36:
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_TRACK_NUMBER     // Catch: java.lang.Throwable -> L1bf
            if (r1 != r2) goto L44
            java.lang.String r2 = "TRCK"
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame r1 = parseIndexAndCountAttribute(r1, r2, r5)     // Catch: java.lang.Throwable -> L1bf
            r5.setPosition(r0)
            return r1
        L44:
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_TEMPO     // Catch: java.lang.Throwable -> L1bf
            r3 = 0
            r4 = 1
            if (r1 != r2) goto L54
            java.lang.String r2 = "TBPM"
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame r1 = parseUint8Attribute(r1, r2, r5, r4, r3)     // Catch: java.lang.Throwable -> L1bf
            r5.setPosition(r0)
            return r1
        L54:
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_COMPILATION     // Catch: java.lang.Throwable -> L1bf
            if (r1 != r2) goto L62
            java.lang.String r2 = "TCMP"
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame r1 = parseUint8Attribute(r1, r2, r5, r4, r4)     // Catch: java.lang.Throwable -> L1bf
            r5.setPosition(r0)
            return r1
        L62:
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_COVER_ART     // Catch: java.lang.Throwable -> L1bf
            if (r1 != r2) goto L6e
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.ApicFrame r1 = parseCoverArt(r5)     // Catch: java.lang.Throwable -> L1bf
            r5.setPosition(r0)
            return r1
        L6e:
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_ALBUM_ARTIST     // Catch: java.lang.Throwable -> L1bf
            if (r1 != r2) goto L7c
            java.lang.String r2 = "TPE2"
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame r1 = parseTextAttribute(r1, r2, r5)     // Catch: java.lang.Throwable -> L1bf
            r5.setPosition(r0)
            return r1
        L7c:
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_SORT_TRACK_NAME     // Catch: java.lang.Throwable -> L1bf
            if (r1 != r2) goto L8a
            java.lang.String r2 = "TSOT"
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame r1 = parseTextAttribute(r1, r2, r5)     // Catch: java.lang.Throwable -> L1bf
            r5.setPosition(r0)
            return r1
        L8a:
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_SORT_ALBUM     // Catch: java.lang.Throwable -> L1bf
            if (r1 != r2) goto L98
            java.lang.String r2 = "TSO2"
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame r1 = parseTextAttribute(r1, r2, r5)     // Catch: java.lang.Throwable -> L1bf
            r5.setPosition(r0)
            return r1
        L98:
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_SORT_ARTIST     // Catch: java.lang.Throwable -> L1bf
            if (r1 != r2) goto La6
            java.lang.String r2 = "TSOA"
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame r1 = parseTextAttribute(r1, r2, r5)     // Catch: java.lang.Throwable -> L1bf
            r5.setPosition(r0)
            return r1
        La6:
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_SORT_ALBUM_ARTIST     // Catch: java.lang.Throwable -> L1bf
            if (r1 != r2) goto Lb4
            java.lang.String r2 = "TSOP"
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame r1 = parseTextAttribute(r1, r2, r5)     // Catch: java.lang.Throwable -> L1bf
            r5.setPosition(r0)
            return r1
        Lb4:
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_SORT_COMPOSER     // Catch: java.lang.Throwable -> L1bf
            if (r1 != r2) goto Lc2
            java.lang.String r2 = "TSOC"
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame r1 = parseTextAttribute(r1, r2, r5)     // Catch: java.lang.Throwable -> L1bf
            r5.setPosition(r0)
            return r1
        Lc2:
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_RATING     // Catch: java.lang.Throwable -> L1bf
            if (r1 != r2) goto Ld0
            java.lang.String r2 = "ITUNESADVISORY"
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame r1 = parseUint8Attribute(r1, r2, r5, r3, r3)     // Catch: java.lang.Throwable -> L1bf
            r5.setPosition(r0)
            return r1
        Ld0:
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_GAPLESS_ALBUM     // Catch: java.lang.Throwable -> L1bf
            if (r1 != r2) goto Lde
            java.lang.String r2 = "ITUNESGAPLESS"
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame r1 = parseUint8Attribute(r1, r2, r5, r3, r4)     // Catch: java.lang.Throwable -> L1bf
            r5.setPosition(r0)
            return r1
        Lde:
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_TV_SORT_SHOW     // Catch: java.lang.Throwable -> L1bf
            if (r1 != r2) goto Lec
            java.lang.String r2 = "TVSHOWSORT"
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame r1 = parseTextAttribute(r1, r2, r5)     // Catch: java.lang.Throwable -> L1bf
            r5.setPosition(r0)
            return r1
        Lec:
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_TV_SHOW     // Catch: java.lang.Throwable -> L1bf
            if (r1 != r2) goto Lfa
            java.lang.String r2 = "TVSHOW"
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame r1 = parseTextAttribute(r1, r2, r5)     // Catch: java.lang.Throwable -> L1bf
            r5.setPosition(r0)
            return r1
        Lfa:
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_INTERNAL     // Catch: java.lang.Throwable -> L1bf
            if (r1 != r2) goto L18c
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame r1 = parseInternalAttribute(r5, r0)     // Catch: java.lang.Throwable -> L1bf
            r5.setPosition(r0)
            return r1
        L106:
            r2 = 16777215(0xffffff, float:2.3509886E-38)
            r2 = r2 & r1
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.SHORT_TYPE_COMMENT     // Catch: java.lang.Throwable -> L1bf
            if (r2 != r3) goto L116
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.CommentFrame r1 = parseCommentAttribute(r1, r5)     // Catch: java.lang.Throwable -> L1bf
            r5.setPosition(r0)
            return r1
        L116:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.SHORT_TYPE_NAME_1     // Catch: java.lang.Throwable -> L1bf
            if (r2 == r3) goto L1b5
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.SHORT_TYPE_NAME_2     // Catch: java.lang.Throwable -> L1bf
            if (r2 != r3) goto L120
            goto L1b5
        L120:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.SHORT_TYPE_COMPOSER_1     // Catch: java.lang.Throwable -> L1bf
            if (r2 == r3) goto L1ab
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.SHORT_TYPE_COMPOSER_2     // Catch: java.lang.Throwable -> L1bf
            if (r2 != r3) goto L12a
            goto L1ab
        L12a:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.SHORT_TYPE_YEAR     // Catch: java.lang.Throwable -> L1bf
            if (r2 != r3) goto L138
            java.lang.String r2 = "TDRC"
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame r1 = parseTextAttribute(r1, r2, r5)     // Catch: java.lang.Throwable -> L1bf
            r5.setPosition(r0)
            return r1
        L138:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.SHORT_TYPE_ARTIST     // Catch: java.lang.Throwable -> L1bf
            if (r2 != r3) goto L146
            java.lang.String r2 = "TPE1"
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame r1 = parseTextAttribute(r1, r2, r5)     // Catch: java.lang.Throwable -> L1bf
            r5.setPosition(r0)
            return r1
        L146:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.SHORT_TYPE_ENCODER     // Catch: java.lang.Throwable -> L1bf
            if (r2 != r3) goto L154
            java.lang.String r2 = "TSSE"
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame r1 = parseTextAttribute(r1, r2, r5)     // Catch: java.lang.Throwable -> L1bf
            r5.setPosition(r0)
            return r1
        L154:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.SHORT_TYPE_ALBUM     // Catch: java.lang.Throwable -> L1bf
            if (r2 != r3) goto L162
            java.lang.String r2 = "TALB"
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame r1 = parseTextAttribute(r1, r2, r5)     // Catch: java.lang.Throwable -> L1bf
            r5.setPosition(r0)
            return r1
        L162:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.SHORT_TYPE_LYRICS     // Catch: java.lang.Throwable -> L1bf
            if (r2 != r3) goto L170
            java.lang.String r2 = "USLT"
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame r1 = parseTextAttribute(r1, r2, r5)     // Catch: java.lang.Throwable -> L1bf
            r5.setPosition(r0)
            return r1
        L170:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.SHORT_TYPE_GENRE     // Catch: java.lang.Throwable -> L1bf
            if (r2 != r3) goto L17e
            java.lang.String r2 = "TCON"
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame r1 = parseTextAttribute(r1, r2, r5)     // Catch: java.lang.Throwable -> L1bf
            r5.setPosition(r0)
            return r1
        L17e:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.TYPE_GROUPING     // Catch: java.lang.Throwable -> L1bf
            if (r2 != r3) goto L18c
            java.lang.String r2 = "TIT1"
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame r1 = parseTextAttribute(r1, r2, r5)     // Catch: java.lang.Throwable -> L1bf
            r5.setPosition(r0)
            return r1
        L18c:
            java.lang.String r2 = "MetadataUtil"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1bf
            r3.<init>()     // Catch: java.lang.Throwable -> L1bf
            java.lang.String r4 = "Skipped unknown metadata entry: "
            r3.append(r4)     // Catch: java.lang.Throwable -> L1bf
            java.lang.String r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.getAtomTypeString(r1)     // Catch: java.lang.Throwable -> L1bf
            r3.append(r1)     // Catch: java.lang.Throwable -> L1bf
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> L1bf
            android.util.Log.d(r2, r1)     // Catch: java.lang.Throwable -> L1bf
            r1 = 0
            r5.setPosition(r0)
            return r1
        L1ab:
            java.lang.String r2 = "TCOM"
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame r1 = parseTextAttribute(r1, r2, r5)     // Catch: java.lang.Throwable -> L1bf
            r5.setPosition(r0)
            return r1
        L1b5:
            java.lang.String r2 = "TIT2"
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame r1 = parseTextAttribute(r1, r2, r5)     // Catch: java.lang.Throwable -> L1bf
            r5.setPosition(r0)
            return r1
        L1bf:
            r1 = move-exception
            r5.setPosition(r0)
            throw r1
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame parseIndexAndCountAttribute(int r4, java.lang.String r5, com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6) {
            int r0 = r6.readInt()
            int r1 = r6.readInt()
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_data
            r3 = 0
            if (r1 != r2) goto L4d
            r1 = 22
            if (r0 < r1) goto L4d
            r0 = 10
            r6.skipBytes(r0)
            int r0 = r6.readUnsignedShort()
            if (r0 <= 0) goto L4d
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = ""
            r4.append(r1)
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            int r6 = r6.readUnsignedShort()
            if (r6 <= 0) goto L47
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            java.lang.String r4 = "/"
            r0.append(r4)
            r0.append(r6)
            java.lang.String r4 = r0.toString()
        L47:
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame r6 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame
            r6.<init>(r5, r3, r4)
            return r6
        L4d:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "Failed to parse index/count attribute: "
            r5.append(r6)
            java.lang.String r4 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.getAtomTypeString(r4)
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            java.lang.String r5 = "MetadataUtil"
            android.util.Log.w(r5, r4)
            return r3
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame parseInternalAttribute(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r10, int r11) {
            r0 = -1
            r1 = 0
            r4 = r0
            r5 = r4
            r2 = r1
            r3 = r2
        L6:
            int r6 = r10.getPosition()
            if (r6 >= r11) goto L3e
            int r6 = r10.getPosition()
            int r7 = r10.readInt()
            int r8 = r10.readInt()
            r9 = 4
            r10.skipBytes(r9)
            int r9 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_mean
            if (r8 != r9) goto L27
            int r7 = r7 + (-12)
            java.lang.String r2 = r10.readNullTerminatedString(r7)
            goto L6
        L27:
            int r9 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_name
            if (r8 != r9) goto L32
            int r7 = r7 + (-12)
            java.lang.String r3 = r10.readNullTerminatedString(r7)
            goto L6
        L32:
            int r9 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_data
            if (r8 != r9) goto L38
            r4 = r6
            r5 = r7
        L38:
            int r7 = r7 + (-12)
            r10.skipBytes(r7)
            goto L6
        L3e:
            if (r2 == 0) goto L58
            if (r3 == 0) goto L58
            if (r4 != r0) goto L45
            goto L58
        L45:
            r10.setPosition(r4)
            r11 = 16
            r10.skipBytes(r11)
            int r5 = r5 - r11
            java.lang.String r10 = r10.readNullTerminatedString(r5)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.InternalFrame r11 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.InternalFrame
            r11.<init>(r2, r3, r10)
            return r11
        L58:
            return r1
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame parseStandardGenreAttribute(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3) {
            int r3 = parseUint8AttributeValue(r3)
            r0 = 0
            if (r3 <= 0) goto L11
            java.lang.String[] r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.MetadataUtil.STANDARD_GENRES
            int r2 = r1.length
            if (r3 > r2) goto L11
            int r3 = r3 + (-1)
            r3 = r1[r3]
            goto L12
        L11:
            r3 = r0
        L12:
            if (r3 == 0) goto L1c
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame r1 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame
            java.lang.String r2 = "TCON"
            r1.<init>(r2, r0, r3)
            return r1
        L1c:
            java.lang.String r3 = "MetadataUtil"
            java.lang.String r1 = "Failed to parse standard genre code"
            android.util.Log.w(r3, r1)
            return r0
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame parseTextAttribute(int r4, java.lang.String r5, com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6) {
            int r0 = r6.readInt()
            int r1 = r6.readInt()
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_data
            r3 = 0
            if (r1 != r2) goto L1e
            r4 = 8
            r6.skipBytes(r4)
            int r0 = r0 + (-16)
            java.lang.String r4 = r6.readNullTerminatedString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame r6 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame
            r6.<init>(r5, r3, r4)
            return r6
        L1e:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "Failed to parse text attribute: "
            r5.append(r6)
            java.lang.String r4 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.getAtomTypeString(r4)
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            java.lang.String r5 = "MetadataUtil"
            android.util.Log.w(r5, r4)
            return r3
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Frame parseUint8Attribute(int r0, java.lang.String r1, com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2, boolean r3, boolean r4) {
            int r2 = parseUint8AttributeValue(r2)
            if (r4 == 0) goto Lb
            r4 = 1
            int r2 = java.lang.Math.min(r4, r2)
        Lb:
            r4 = 0
            if (r2 < 0) goto L26
            if (r3 == 0) goto L1a
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame r0 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.TextInformationFrame
            java.lang.String r2 = java.lang.Integer.toString(r2)
            r0.<init>(r1, r4, r2)
            goto L25
        L1a:
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.CommentFrame r0 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.CommentFrame
            java.lang.String r2 = java.lang.Integer.toString(r2)
            java.lang.String r3 = "und"
            r0.<init>(r3, r1, r2)
        L25:
            return r0
        L26:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Failed to parse uint8 attribute: "
            r1.append(r2)
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.getAtomTypeString(r0)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "MetadataUtil"
            android.util.Log.w(r1, r0)
            return r4
    }

    private static int parseUint8AttributeValue(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2) {
            r0 = 4
            r2.skipBytes(r0)
            int r0 = r2.readInt()
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_data
            if (r0 != r1) goto L16
            r0 = 8
            r2.skipBytes(r0)
            int r2 = r2.readUnsignedByte()
            return r2
        L16:
            java.lang.String r2 = "MetadataUtil"
            java.lang.String r0 = "Failed to parse uint8 attribute value"
            android.util.Log.w(r2, r0)
            r2 = -1
            return r2
    }
}
