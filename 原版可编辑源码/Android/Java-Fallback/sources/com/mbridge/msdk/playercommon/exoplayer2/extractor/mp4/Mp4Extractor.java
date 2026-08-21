package com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4;

public final class Mp4Extractor implements com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor, com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap {
    private static final int BRAND_QUICKTIME = 0;
    public static final com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorsFactory FACTORY = null;
    public static final int FLAG_WORKAROUND_IGNORE_EDIT_LISTS = 1;
    private static final long MAXIMUM_READ_AHEAD_BYTES_STREAM = 10485760;
    private static final long RELOAD_MINIMUM_SEEK_DISTANCE = 262144;
    private static final int STATE_READING_ATOM_HEADER = 0;
    private static final int STATE_READING_ATOM_PAYLOAD = 1;
    private static final int STATE_READING_SAMPLE = 2;
    private long[][] accumulatedSampleSizes;
    private com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray atomData;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray atomHeader;
    private int atomHeaderBytesRead;
    private long atomSize;
    private int atomType;
    private final java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom> containerAtoms;
    private long durationUs;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput extractorOutput;
    private int firstVideoTrackIndex;
    private final int flags;
    private boolean isQuickTime;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray nalLength;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray nalStartCode;
    private int parserState;
    private int sampleBytesWritten;
    private int sampleCurrentNalBytesRemaining;
    private int sampleTrackIndex;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Mp4Extractor.Mp4Track[] tracks;


    public @interface Flags {
    }

    private static final class Mp4Track {
        public int sampleIndex;
        public final com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable sampleTable;
        public final com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track track;
        public final com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput trackOutput;

        public Mp4Track(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track r1, com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable r2, com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r3) {
                r0 = this;
                r0.<init>()
                r0.track = r1
                r0.sampleTable = r2
                r0.trackOutput = r3
                return
        }
    }

    private @interface State {
    }

    static {
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Mp4Extractor$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Mp4Extractor$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Mp4Extractor.FACTORY = r0
            java.lang.String r0 = "qt  "
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Mp4Extractor.BRAND_QUICKTIME = r0
            return
    }

    public Mp4Extractor() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public Mp4Extractor(int r2) {
            r1 = this;
            r1.<init>()
            r1.flags = r2
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r0 = 16
            r2.<init>(r0)
            r1.atomHeader = r2
            java.util.ArrayDeque r2 = new java.util.ArrayDeque
            r2.<init>()
            r1.containerAtoms = r2
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            byte[] r0 = com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.NAL_START_CODE
            r2.<init>(r0)
            r1.nalStartCode = r2
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r0 = 4
            r2.<init>(r0)
            r1.nalLength = r2
            r2 = -1
            r1.sampleTrackIndex = r2
            return
    }

    private static long[][] calculateAccumulatedSampleSizes(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Mp4Extractor.Mp4Track[] r14) {
            int r0 = r14.length
            long[][] r0 = new long[r0][]
            int r1 = r14.length
            int[] r1 = new int[r1]
            int r2 = r14.length
            long[] r2 = new long[r2]
            int r3 = r14.length
            boolean[] r3 = new boolean[r3]
            r4 = 0
            r5 = r4
        Le:
            int r6 = r14.length
            if (r5 >= r6) goto L28
            r6 = r14[r5]
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable r6 = r6.sampleTable
            int r6 = r6.sampleCount
            long[] r6 = new long[r6]
            r0[r5] = r6
            r6 = r14[r5]
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable r6 = r6.sampleTable
            long[] r6 = r6.timestampsUs
            r7 = r6[r4]
            r2[r5] = r7
            int r5 = r5 + 1
            goto Le
        L28:
            r5 = 0
            r7 = r4
        L2b:
            int r8 = r14.length
            if (r7 >= r8) goto L71
            r8 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r10 = -1
            r11 = r4
        L35:
            int r12 = r14.length
            if (r11 >= r12) goto L48
            boolean r12 = r3[r11]
            if (r12 != 0) goto L45
            r12 = r2[r11]
            int r12 = (r12 > r8 ? 1 : (r12 == r8 ? 0 : -1))
            if (r12 > 0) goto L45
            r8 = r2[r11]
            r10 = r11
        L45:
            int r11 = r11 + 1
            goto L35
        L48:
            r8 = r1[r10]
            r9 = r0[r10]
            r9[r8] = r5
            r9 = r14[r10]
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable r9 = r9.sampleTable
            int[] r9 = r9.sizes
            r9 = r9[r8]
            long r11 = (long) r9
            long r5 = r5 + r11
            r9 = 1
            int r8 = r8 + r9
            r1[r10] = r8
            r11 = r0[r10]
            int r11 = r11.length
            if (r8 >= r11) goto L6c
            r9 = r14[r10]
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable r9 = r9.sampleTable
            long[] r9 = r9.timestampsUs
            r8 = r9[r8]
            r2[r10] = r8
            goto L2b
        L6c:
            r3[r10] = r9
            int r7 = r7 + 1
            goto L2b
        L71:
            return r0
    }

    private void enterReadingAtomHeaderState() {
            r1 = this;
            r0 = 0
            r1.parserState = r0
            r1.atomHeaderBytesRead = r0
            return
    }

    private static int getSynchronizationSampleIndex(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable r2, long r3) {
            int r0 = r2.getIndexOfEarlierOrEqualSynchronizationSample(r3)
            r1 = -1
            if (r0 != r1) goto Lb
            int r0 = r2.getIndexOfLaterOrEqualSynchronizationSample(r3)
        Lb:
            return r0
    }

    private int getTrackIndexOfNextReadSample(long r21) {
            r20 = this;
            r0 = r20
            r2 = -1
            r6 = r2
            r7 = 0
            r8 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r10 = 1
            r11 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r13 = 1
            r14 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
        L16:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Mp4Extractor$Mp4Track[] r1 = r0.tracks
            int r3 = r1.length
            if (r7 >= r3) goto L5f
            r1 = r1[r7]
            int r3 = r1.sampleIndex
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable r4 = r1.sampleTable
            int r4 = r4.sampleCount
            if (r3 != r4) goto L26
            goto L5c
        L26:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable r1 = r1.sampleTable
            long[] r1 = r1.offsets
            r4 = r1[r3]
            long[][] r1 = r0.accumulatedSampleSizes
            r1 = r1[r7]
            r16 = r1[r3]
            long r4 = r4 - r21
            r18 = 0
            int r1 = (r4 > r18 ? 1 : (r4 == r18 ? 0 : -1))
            if (r1 < 0) goto L44
            r18 = 262144(0x40000, double:1.295163E-318)
            int r1 = (r4 > r18 ? 1 : (r4 == r18 ? 0 : -1))
            if (r1 < 0) goto L42
            goto L44
        L42:
            r1 = 0
            goto L45
        L44:
            r1 = 1
        L45:
            if (r1 != 0) goto L49
            if (r13 != 0) goto L4f
        L49:
            if (r1 != r13) goto L54
            int r3 = (r4 > r14 ? 1 : (r4 == r14 ? 0 : -1))
            if (r3 >= 0) goto L54
        L4f:
            r13 = r1
            r14 = r4
            r6 = r7
            r11 = r16
        L54:
            int r3 = (r16 > r8 ? 1 : (r16 == r8 ? 0 : -1))
            if (r3 >= 0) goto L5c
            r10 = r1
            r2 = r7
            r8 = r16
        L5c:
            int r7 = r7 + 1
            goto L16
        L5f:
            r3 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            int r1 = (r8 > r3 ? 1 : (r8 == r3 ? 0 : -1))
            if (r1 == 0) goto L72
            if (r10 == 0) goto L72
            r3 = 10485760(0xa00000, double:5.180654E-317)
            long r8 = r8 + r3
            int r1 = (r11 > r8 ? 1 : (r11 == r8 ? 0 : -1))
            if (r1 >= 0) goto L73
        L72:
            r2 = r6
        L73:
            return r2
    }

    private java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable> getTrackSampleTables(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom r11, com.mbridge.msdk.playercommon.exoplayer2.extractor.GaplessInfoHolder r12, boolean r13) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r10 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
        L6:
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r2 = r11.containerChildren
            int r2 = r2.size()
            if (r1 >= r2) goto L55
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r2 = r11.containerChildren
            java.lang.Object r2 = r2.get(r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom r2 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom) r2
            int r3 = r2.type
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_trak
            if (r3 == r4) goto L1d
            goto L52
        L1d:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_mvhd
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r4 = r11.getLeafAtomOfType(r3)
            r5 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r7 = 0
            boolean r9 = r10.isQuickTime
            r3 = r2
            r8 = r13
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.parseTrak(r3, r4, r5, r7, r8, r9)
            if (r3 != 0) goto L34
            goto L52
        L34:
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_mdia
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom r2 = r2.getContainerAtomOfType(r4)
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_minf
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom r2 = r2.getContainerAtomOfType(r4)
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stbl
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom r2 = r2.getContainerAtomOfType(r4)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.parseStbl(r3, r2, r12)
            int r3 = r2.sampleCount
            if (r3 != 0) goto L4f
            goto L52
        L4f:
            r0.add(r2)
        L52:
            int r1 = r1 + 1
            goto L6
        L55:
            return r0
    }

    private static long maybeAdjustSeekOffset(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable r0, long r1, long r3) {
            int r1 = getSynchronizationSampleIndex(r0, r1)
            r2 = -1
            if (r1 != r2) goto L8
            return r3
        L8:
            long[] r0 = r0.offsets
            r1 = r0[r1]
            long r0 = java.lang.Math.min(r1, r3)
            return r0
    }

    private void processAtomEnded(long r5) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r4 = this;
        L0:
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r0 = r4.containerAtoms
            boolean r0 = r0.isEmpty()
            r1 = 2
            if (r0 != 0) goto L44
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r0 = r4.containerAtoms
            java.lang.Object r0 = r0.peek()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom r0 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom) r0
            long r2 = r0.endPosition
            int r0 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r0 != 0) goto L44
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r0 = r4.containerAtoms
            java.lang.Object r0 = r0.pop()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom r0 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom) r0
            int r2 = r0.type
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_moov
            if (r2 != r3) goto L30
            r4.processMoovAtom(r0)
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r0 = r4.containerAtoms
            r0.clear()
            r4.parserState = r1
            goto L0
        L30:
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r1 = r4.containerAtoms
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L0
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r1 = r4.containerAtoms
            java.lang.Object r1 = r1.peek()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom r1 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom) r1
            r1.add(r0)
            goto L0
        L44:
            int r5 = r4.parserState
            if (r5 == r1) goto L4b
            r4.enterReadingAtomHeaderState()
        L4b:
            return
    }

    private static boolean processFtypAtom(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3) {
            r0 = 8
            r3.setPosition(r0)
            int r0 = r3.readInt()
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Mp4Extractor.BRAND_QUICKTIME
            r2 = 1
            if (r0 != r1) goto Lf
            return r2
        Lf:
            r0 = 4
            r3.skipBytes(r0)
        L13:
            int r0 = r3.bytesLeft()
            if (r0 <= 0) goto L22
            int r0 = r3.readInt()
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Mp4Extractor.BRAND_QUICKTIME
            if (r0 != r1) goto L13
            return r2
        L22:
            r3 = 0
            return r3
    }

    private void processMoovAtom(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom r19) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r18 = this;
            r0 = r18
            r1 = r19
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.GaplessInfoHolder r3 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.GaplessInfoHolder
            r3.<init>()
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_udta
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r4 = r1.getLeafAtomOfType(r4)
            if (r4 == 0) goto L22
            boolean r5 = r0.isQuickTime
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r4 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.parseUdta(r4, r5)
            if (r4 == 0) goto L23
            r3.setFromMetadata(r4)
            goto L23
        L22:
            r4 = 0
        L23:
            int r5 = r0.flags
            r6 = 1
            r5 = r5 & r6
            r7 = 0
            if (r5 == 0) goto L2c
            r5 = r6
            goto L2d
        L2c:
            r5 = r7
        L2d:
            java.util.ArrayList r1 = r0.getTrackSampleTables(r1, r3, r5)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.UnhandledEditListException -> L32
            goto L3b
        L32:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.GaplessInfoHolder r3 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.GaplessInfoHolder
            r3.<init>()
            java.util.ArrayList r1 = r0.getTrackSampleTables(r1, r3, r6)
        L3b:
            int r5 = r1.size()
            r11 = -1
            r12 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
        L45:
            if (r7 >= r5) goto Lac
            java.lang.Object r14 = r1.get(r7)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable r14 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable) r14
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track r15 = r14.track
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Mp4Extractor$Mp4Track r10 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Mp4Extractor$Mp4Track
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r8 = r0.extractorOutput
            int r9 = r15.type
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r8 = r8.track(r7, r9)
            r10.<init>(r15, r14, r8)
            int r8 = r14.maximumSize
            int r8 = r8 + 30
            com.mbridge.msdk.playercommon.exoplayer2.Format r9 = r15.format
            com.mbridge.msdk.playercommon.exoplayer2.Format r8 = r9.copyWithMaxInputSize(r8)
            int r9 = r15.type
            if (r9 != r6) goto L7e
            boolean r9 = r3.hasGaplessInfo()
            if (r9 == 0) goto L78
            int r9 = r3.encoderDelay
            int r6 = r3.encoderPadding
            com.mbridge.msdk.playercommon.exoplayer2.Format r8 = r8.copyWithGaplessInfo(r9, r6)
        L78:
            if (r4 == 0) goto L7e
            com.mbridge.msdk.playercommon.exoplayer2.Format r8 = r8.copyWithMetadata(r4)
        L7e:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r6 = r10.trackOutput
            r6.format(r8)
            long r8 = r15.durationUs
            r16 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r6 = (r8 > r16 ? 1 : (r8 == r16 ? 0 : -1))
            if (r6 == 0) goto L91
            long r8 = r15.durationUs
            goto L93
        L91:
            long r8 = r14.durationUs
        L93:
            long r12 = java.lang.Math.max(r12, r8)
            int r6 = r15.type
            r8 = 2
            if (r6 != r8) goto La4
            r6 = -1
            if (r11 != r6) goto La5
            int r11 = r2.size()
            goto La5
        La4:
            r6 = -1
        La5:
            r2.add(r10)
            int r7 = r7 + 1
            r6 = 1
            goto L45
        Lac:
            r0.firstVideoTrackIndex = r11
            r0.durationUs = r12
            int r1 = r2.size()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Mp4Extractor$Mp4Track[] r1 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Mp4Extractor.Mp4Track[r1]
            java.lang.Object[] r1 = r2.toArray(r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Mp4Extractor$Mp4Track[] r1 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Mp4Extractor.Mp4Track[]) r1
            r0.tracks = r1
            long[][] r1 = calculateAccumulatedSampleSizes(r1)
            r0.accumulatedSampleSizes = r1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r1 = r0.extractorOutput
            r1.endTracks()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r1 = r0.extractorOutput
            r1.seekMap(r0)
            return
    }

    private boolean readAtomHeader(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r9) throws java.io.IOException, java.lang.InterruptedException {
            r8 = this;
            int r0 = r8.atomHeaderBytesRead
            r1 = 1
            r2 = 8
            r3 = 0
            if (r0 != 0) goto L2a
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r8.atomHeader
            byte[] r0 = r0.data
            boolean r0 = r9.readFully(r0, r3, r2, r1)
            if (r0 != 0) goto L13
            return r3
        L13:
            r8.atomHeaderBytesRead = r2
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r8.atomHeader
            r0.setPosition(r3)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r8.atomHeader
            long r4 = r0.readUnsignedInt()
            r8.atomSize = r4
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r8.atomHeader
            int r0 = r0.readInt()
            r8.atomType = r0
        L2a:
            long r4 = r8.atomSize
            r6 = 1
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 != 0) goto L47
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r8.atomHeader
            byte[] r0 = r0.data
            r9.readFully(r0, r2, r2)
            int r0 = r8.atomHeaderBytesRead
            int r0 = r0 + r2
            r8.atomHeaderBytesRead = r0
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r8.atomHeader
            long r4 = r0.readUnsignedLongToLong()
            r8.atomSize = r4
            goto L78
        L47:
            r6 = 0
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 != 0) goto L78
            long r4 = r9.getLength()
            r6 = -1
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 != 0) goto L69
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r0 = r8.containerAtoms
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L69
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r0 = r8.containerAtoms
            java.lang.Object r0 = r0.peek()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom r0 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom) r0
            long r4 = r0.endPosition
        L69:
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 == 0) goto L78
            long r6 = r9.getPosition()
            long r4 = r4 - r6
            int r0 = r8.atomHeaderBytesRead
            long r6 = (long) r0
            long r4 = r4 + r6
            r8.atomSize = r4
        L78:
            long r4 = r8.atomSize
            int r0 = r8.atomHeaderBytesRead
            long r6 = (long) r0
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 < 0) goto Lf0
            int r0 = r8.atomType
            boolean r0 = shouldParseContainerAtom(r0)
            if (r0 == 0) goto Lb1
            long r2 = r9.getPosition()
            long r4 = r8.atomSize
            long r2 = r2 + r4
            int r9 = r8.atomHeaderBytesRead
            long r4 = (long) r9
            long r2 = r2 - r4
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r9 = r8.containerAtoms
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom
            int r4 = r8.atomType
            r0.<init>(r4, r2)
            r9.push(r0)
            long r4 = r8.atomSize
            int r9 = r8.atomHeaderBytesRead
            long r6 = (long) r9
            int r9 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r9 != 0) goto Lad
            r8.processAtomEnded(r2)
            goto Lef
        Lad:
            r8.enterReadingAtomHeaderState()
            goto Lef
        Lb1:
            int r9 = r8.atomType
            boolean r9 = shouldParseLeafAtom(r9)
            if (r9 == 0) goto Lea
            int r9 = r8.atomHeaderBytesRead
            if (r9 != r2) goto Lbf
            r9 = r1
            goto Lc0
        Lbf:
            r9 = r3
        Lc0:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r9)
            long r4 = r8.atomSize
            r6 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r9 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r9 > 0) goto Lce
            r9 = r1
            goto Lcf
        Lce:
            r9 = r3
        Lcf:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r9)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r9 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            long r4 = r8.atomSize
            int r0 = (int) r4
            r9.<init>(r0)
            r8.atomData = r9
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r9 = r8.atomHeader
            byte[] r9 = r9.data
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r8.atomData
            byte[] r0 = r0.data
            java.lang.System.arraycopy(r9, r3, r0, r3, r2)
            r8.parserState = r1
            goto Lef
        Lea:
            r9 = 0
            r8.atomData = r9
            r8.parserState = r1
        Lef:
            return r1
        Lf0:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r9 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r0 = "Atom size less than header length (unsupported)."
            r9.<init>(r0)
            throw r9
    }

    private boolean readAtomPayload(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r10, com.mbridge.msdk.playercommon.exoplayer2.extractor.PositionHolder r11) throws java.io.IOException, java.lang.InterruptedException {
            r9 = this;
            long r0 = r9.atomSize
            int r2 = r9.atomHeaderBytesRead
            long r2 = (long) r2
            long r0 = r0 - r2
            long r2 = r10.getPosition()
            long r2 = r2 + r0
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r9.atomData
            r5 = 1
            r6 = 0
            if (r4 == 0) goto L45
            byte[] r11 = r4.data
            int r4 = r9.atomHeaderBytesRead
            int r0 = (int) r0
            r10.readFully(r11, r4, r0)
            int r10 = r9.atomType
            int r11 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_ftyp
            if (r10 != r11) goto L28
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r10 = r9.atomData
            boolean r10 = processFtypAtom(r10)
            r9.isQuickTime = r10
            goto L50
        L28:
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r10 = r9.containerAtoms
            boolean r10 = r10.isEmpty()
            if (r10 != 0) goto L50
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r10 = r9.containerAtoms
            java.lang.Object r10 = r10.peek()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom r10 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom) r10
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r11 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom
            int r0 = r9.atomType
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r9.atomData
            r11.<init>(r0, r1)
            r10.add(r11)
            goto L50
        L45:
            r7 = 262144(0x40000, double:1.295163E-318)
            int r4 = (r0 > r7 ? 1 : (r0 == r7 ? 0 : -1))
            if (r4 >= 0) goto L52
            int r11 = (int) r0
            r10.skipFully(r11)
        L50:
            r10 = r6
            goto L5a
        L52:
            long r7 = r10.getPosition()
            long r7 = r7 + r0
            r11.position = r7
            r10 = r5
        L5a:
            r9.processAtomEnded(r2)
            if (r10 == 0) goto L65
            int r10 = r9.parserState
            r11 = 2
            if (r10 == r11) goto L65
            goto L66
        L65:
            r5 = r6
        L66:
            return r5
    }

    private int readSample(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r13, com.mbridge.msdk.playercommon.exoplayer2.extractor.PositionHolder r14) throws java.io.IOException, java.lang.InterruptedException {
            r12 = this;
            long r0 = r13.getPosition()
            int r2 = r12.sampleTrackIndex
            r3 = -1
            if (r2 != r3) goto L12
            int r2 = r12.getTrackIndexOfNextReadSample(r0)
            r12.sampleTrackIndex = r2
            if (r2 != r3) goto L12
            return r3
        L12:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Mp4Extractor$Mp4Track[] r2 = r12.tracks
            int r4 = r12.sampleTrackIndex
            r2 = r2[r4]
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r4 = r2.trackOutput
            int r5 = r2.sampleIndex
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable r6 = r2.sampleTable
            long[] r6 = r6.offsets
            r7 = r6[r5]
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable r6 = r2.sampleTable
            int[] r6 = r6.sizes
            r6 = r6[r5]
            long r0 = r7 - r0
            int r9 = r12.sampleBytesWritten
            long r9 = (long) r9
            long r0 = r0 + r9
            r9 = 0
            int r9 = (r0 > r9 ? 1 : (r0 == r9 ? 0 : -1))
            r11 = 1
            if (r9 < 0) goto Ldb
            r9 = 262144(0x40000, double:1.295163E-318)
            int r9 = (r0 > r9 ? 1 : (r0 == r9 ? 0 : -1))
            if (r9 < 0) goto L3e
            goto Ldb
        L3e:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track r14 = r2.track
            int r14 = r14.sampleTransformation
            if (r14 != r11) goto L49
            r7 = 8
            long r0 = r0 + r7
            int r6 = r6 + (-8)
        L49:
            int r14 = (int) r0
            r13.skipFully(r14)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track r14 = r2.track
            int r14 = r14.nalUnitLengthFieldLength
            r0 = 0
            if (r14 == 0) goto La6
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r14 = r12.nalLength
            byte[] r14 = r14.data
            r14[r0] = r0
            r14[r11] = r0
            r1 = 2
            r14[r1] = r0
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track r14 = r2.track
            int r14 = r14.nalUnitLengthFieldLength
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track r1 = r2.track
            int r1 = r1.nalUnitLengthFieldLength
            r7 = 4
            int r1 = 4 - r1
        L6a:
            int r8 = r12.sampleBytesWritten
            if (r8 >= r6) goto Lbb
            int r8 = r12.sampleCurrentNalBytesRemaining
            if (r8 != 0) goto L97
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r8 = r12.nalLength
            byte[] r8 = r8.data
            r13.readFully(r8, r1, r14)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r8 = r12.nalLength
            r8.setPosition(r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r8 = r12.nalLength
            int r8 = r8.readUnsignedIntToInt()
            r12.sampleCurrentNalBytesRemaining = r8
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r8 = r12.nalStartCode
            r8.setPosition(r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r8 = r12.nalStartCode
            r4.sampleData(r8, r7)
            int r8 = r12.sampleBytesWritten
            int r8 = r8 + r7
            r12.sampleBytesWritten = r8
            int r6 = r6 + r1
            goto L6a
        L97:
            int r8 = r4.sampleData(r13, r8, r0)
            int r9 = r12.sampleBytesWritten
            int r9 = r9 + r8
            r12.sampleBytesWritten = r9
            int r9 = r12.sampleCurrentNalBytesRemaining
            int r9 = r9 - r8
            r12.sampleCurrentNalBytesRemaining = r9
            goto L6a
        La6:
            int r14 = r12.sampleBytesWritten
            if (r14 >= r6) goto Lbb
            int r14 = r6 - r14
            int r14 = r4.sampleData(r13, r14, r0)
            int r1 = r12.sampleBytesWritten
            int r1 = r1 + r14
            r12.sampleBytesWritten = r1
            int r1 = r12.sampleCurrentNalBytesRemaining
            int r1 = r1 - r14
            r12.sampleCurrentNalBytesRemaining = r1
            goto La6
        Lbb:
            r8 = r6
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable r13 = r2.sampleTable
            long[] r13 = r13.timestampsUs
            r6 = r13[r5]
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable r13 = r2.sampleTable
            int[] r13 = r13.flags
            r13 = r13[r5]
            r9 = 0
            r10 = 0
            r5 = r6
            r7 = r13
            r4.sampleMetadata(r5, r7, r8, r9, r10)
            int r13 = r2.sampleIndex
            int r13 = r13 + r11
            r2.sampleIndex = r13
            r12.sampleTrackIndex = r3
            r12.sampleBytesWritten = r0
            r12.sampleCurrentNalBytesRemaining = r0
            return r0
        Ldb:
            r14.position = r7
            return r11
    }

    private static boolean shouldParseContainerAtom(int r1) {
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_moov
            if (r1 == r0) goto L1b
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_trak
            if (r1 == r0) goto L1b
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_mdia
            if (r1 == r0) goto L1b
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_minf
            if (r1 == r0) goto L1b
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stbl
            if (r1 == r0) goto L1b
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_edts
            if (r1 != r0) goto L19
            goto L1b
        L19:
            r1 = 0
            goto L1c
        L1b:
            r1 = 1
        L1c:
            return r1
    }

    private static boolean shouldParseLeafAtom(int r1) {
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_mdhd
            if (r1 == r0) goto L43
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_mvhd
            if (r1 == r0) goto L43
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_hdlr
            if (r1 == r0) goto L43
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stsd
            if (r1 == r0) goto L43
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stts
            if (r1 == r0) goto L43
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stss
            if (r1 == r0) goto L43
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_ctts
            if (r1 == r0) goto L43
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_elst
            if (r1 == r0) goto L43
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stsc
            if (r1 == r0) goto L43
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stsz
            if (r1 == r0) goto L43
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stz2
            if (r1 == r0) goto L43
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stco
            if (r1 == r0) goto L43
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_co64
            if (r1 == r0) goto L43
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_tkhd
            if (r1 == r0) goto L43
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_ftyp
            if (r1 == r0) goto L43
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_udta
            if (r1 != r0) goto L41
            goto L43
        L41:
            r1 = 0
            goto L44
        L43:
            r1 = 1
        L44:
            return r1
    }

    private void updateSampleIndices(long r8) {
            r7 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Mp4Extractor$Mp4Track[] r0 = r7.tracks
            int r1 = r0.length
            r2 = 0
        L4:
            if (r2 >= r1) goto L1a
            r3 = r0[r2]
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable r4 = r3.sampleTable
            int r5 = r4.getIndexOfEarlierOrEqualSynchronizationSample(r8)
            r6 = -1
            if (r5 != r6) goto L15
            int r5 = r4.getIndexOfLaterOrEqualSynchronizationSample(r8)
        L15:
            r3.sampleIndex = r5
            int r2 = r2 + 1
            goto L4
        L1a:
            return
    }

    @Override
    public final long getDurationUs() {
            r2 = this;
            long r0 = r2.durationUs
            return r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap.SeekPoints getSeekPoints(long r13) {
            r12 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Mp4Extractor$Mp4Track[] r0 = r12.tracks
            int r1 = r0.length
            if (r1 != 0) goto Ld
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints r13 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r14 = com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint.START
            r13.<init>(r14)
            return r13
        Ld:
            r1 = -1
            int r3 = r12.firstVideoTrackIndex
            r4 = -1
            r5 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            if (r3 == r4) goto L53
            r0 = r0[r3]
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable r0 = r0.sampleTable
            int r3 = getSynchronizationSampleIndex(r0, r13)
            if (r3 != r4) goto L2b
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints r13 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r14 = com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint.START
            r13.<init>(r14)
            return r13
        L2b:
            long[] r7 = r0.timestampsUs
            r8 = r7[r3]
            long[] r7 = r0.offsets
            r10 = r7[r3]
            int r7 = (r8 > r13 ? 1 : (r8 == r13 ? 0 : -1))
            if (r7 >= 0) goto L4e
            int r7 = r0.sampleCount
            int r7 = r7 + (-1)
            if (r3 >= r7) goto L4e
            int r13 = r0.getIndexOfLaterOrEqualSynchronizationSample(r13)
            if (r13 == r4) goto L4e
            if (r13 == r3) goto L4e
            long[] r14 = r0.timestampsUs
            r1 = r14[r13]
            long[] r14 = r0.offsets
            r13 = r14[r13]
            goto L50
        L4e:
            r13 = r1
            r1 = r5
        L50:
            r3 = r13
            r13 = r8
            goto L5a
        L53:
            r10 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r3 = r1
            r1 = r5
        L5a:
            r0 = 0
        L5b:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Mp4Extractor$Mp4Track[] r7 = r12.tracks
            int r8 = r7.length
            if (r0 >= r8) goto L78
            int r8 = r12.firstVideoTrackIndex
            if (r0 == r8) goto L75
            r7 = r7[r0]
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackSampleTable r7 = r7.sampleTable
            long r8 = maybeAdjustSeekOffset(r7, r13, r10)
            int r10 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r10 == 0) goto L74
            long r3 = maybeAdjustSeekOffset(r7, r1, r3)
        L74:
            r10 = r8
        L75:
            int r0 = r0 + 1
            goto L5b
        L78:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint
            r0.<init>(r13, r10)
            int r13 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r13 != 0) goto L87
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints r13 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints
            r13.<init>(r0)
            return r13
        L87:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r13 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint
            r13.<init>(r1, r3)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints r14 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints
            r14.<init>(r0, r13)
            return r14
    }

    @Override
    public final void init(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r1) {
            r0 = this;
            r0.extractorOutput = r1
            return
    }

    @Override
    public final boolean isSeekable() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public final int read(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r3, com.mbridge.msdk.playercommon.exoplayer2.extractor.PositionHolder r4) throws java.io.IOException, java.lang.InterruptedException {
            r2 = this;
        L0:
            int r0 = r2.parserState
            if (r0 == 0) goto L1c
            r1 = 1
            if (r0 == r1) goto L15
            r1 = 2
            if (r0 != r1) goto Lf
            int r3 = r2.readSample(r3, r4)
            return r3
        Lf:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            r3.<init>()
            throw r3
        L15:
            boolean r0 = r2.readAtomPayload(r3, r4)
            if (r0 == 0) goto L0
            return r1
        L1c:
            boolean r0 = r2.readAtomHeader(r3)
            if (r0 != 0) goto L0
            r3 = -1
            return r3
    }

    @Override
    public final void release() {
            r0 = this;
            return
    }

    @Override
    public final void seek(long r3, long r5) {
            r2 = this;
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r0 = r2.containerAtoms
            r0.clear()
            r0 = 0
            r2.atomHeaderBytesRead = r0
            r1 = -1
            r2.sampleTrackIndex = r1
            r2.sampleBytesWritten = r0
            r2.sampleCurrentNalBytesRemaining = r0
            r0 = 0
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 != 0) goto L19
            r2.enterReadingAtomHeaderState()
            goto L20
        L19:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Mp4Extractor$Mp4Track[] r3 = r2.tracks
            if (r3 == 0) goto L20
            r2.updateSampleIndices(r5)
        L20:
            return
    }

    @Override
    public final boolean sniff(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r1) throws java.io.IOException, java.lang.InterruptedException {
            r0 = this;
            boolean r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Sniffer.sniffUnfragmented(r1)
            return r1
    }
}
