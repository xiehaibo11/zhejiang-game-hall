package com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4;

public final class FragmentedMp4Extractor implements com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor {
    private static final com.mbridge.msdk.playercommon.exoplayer2.Format EMSG_FORMAT = null;
    public static final com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorsFactory FACTORY = null;
    public static final int FLAG_ENABLE_EMSG_TRACK = 4;
    private static final int FLAG_SIDELOADED = 8;
    public static final int FLAG_WORKAROUND_EVERY_VIDEO_FRAME_IS_SYNC_FRAME = 1;
    public static final int FLAG_WORKAROUND_IGNORE_EDIT_LISTS = 16;
    public static final int FLAG_WORKAROUND_IGNORE_TFDT_BOX = 2;
    private static final byte[] PIFF_SAMPLE_ENCRYPTION_BOX_EXTENDED_TYPE = null;
    private static final int SAMPLE_GROUP_TYPE_seig = 0;
    private static final int STATE_READING_ATOM_HEADER = 0;
    private static final int STATE_READING_ATOM_PAYLOAD = 1;
    private static final int STATE_READING_ENCRYPTION_DATA = 2;
    private static final int STATE_READING_SAMPLE_CONTINUE = 4;
    private static final int STATE_READING_SAMPLE_START = 3;
    private static final java.lang.String TAG = "FragmentedMp4Extractor";
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput additionalEmsgTrackOutput;
    private com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray atomData;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray atomHeader;
    private int atomHeaderBytesRead;
    private long atomSize;
    private int atomType;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[] cea608TrackOutputs;
    private final java.util.List<com.mbridge.msdk.playercommon.exoplayer2.Format> closedCaptionFormats;
    private final java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom> containerAtoms;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.TrackBundle currentTrackBundle;
    private long durationUs;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[] emsgTrackOutputs;
    private long endOfMdatPosition;
    private final byte[] extendedTypeScratch;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput extractorOutput;
    private final int flags;
    private boolean haveOutputSeekMap;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray nalBuffer;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray nalPrefix;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray nalStartCode;
    private int parserState;
    private int pendingMetadataSampleBytes;
    private final java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.MetadataSampleInfo> pendingMetadataSampleInfos;
    private long pendingSeekTimeUs;
    private boolean processSeiNalUnitPayload;
    private int sampleBytesWritten;
    private int sampleCurrentNalBytesRemaining;
    private int sampleSize;
    private long segmentIndexEarliestPresentationTimeUs;
    private final com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData sideloadedDrmInitData;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track sideloadedTrack;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster timestampAdjuster;
    private final android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.TrackBundle> trackBundles;


    public @interface Flags {
    }

    private static final class MetadataSampleInfo {
        public final long presentationTimeDeltaUs;
        public final int size;

        public MetadataSampleInfo(long r1, int r3) {
                r0 = this;
                r0.<init>()
                r0.presentationTimeDeltaUs = r1
                r0.size = r3
                return
        }
    }

    private static final class TrackBundle {
        public int currentSampleInTrackRun;
        public int currentSampleIndex;
        public int currentTrackRunIndex;
        private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray defaultInitializationVector;
        public com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.DefaultSampleValues defaultSampleValues;
        private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray encryptionSignalByte;
        public int firstSampleToOutputIndex;
        public final com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment fragment;
        public final com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput output;
        public com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track track;

        public TrackBundle(com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r2) {
                r1 = this;
                r1.<init>()
                r1.output = r2
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r2 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment
                r2.<init>()
                r1.fragment = r2
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
                r0 = 1
                r2.<init>(r0)
                r1.encryptionSignalByte = r2
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
                r2.<init>()
                r1.defaultInitializationVector = r2
                return
        }

        static void access$000(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.TrackBundle r0) {
                r0.skipSampleEncryptionData()
                return
        }

        private com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox getEncryptionBox() {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r0 = r2.fragment
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.DefaultSampleValues r0 = r0.header
                int r0 = r0.sampleDescriptionIndex
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r1 = r2.fragment
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox r1 = r1.trackEncryptionBox
                if (r1 == 0) goto L11
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r0 = r2.fragment
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox r0 = r0.trackEncryptionBox
                goto L17
            L11:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track r1 = r2.track
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox r0 = r1.getSampleDescriptionEncryptionBox(r0)
            L17:
                return r0
        }

        private void skipSampleEncryptionData() {
                r3 = this;
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r0 = r3.fragment
                boolean r0 = r0.definesEncryptionData
                if (r0 != 0) goto L7
                return
            L7:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r0 = r3.fragment
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r0.sampleEncryptionData
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox r1 = r3.getEncryptionBox()
                int r2 = r1.initializationVectorSize
                if (r2 == 0) goto L18
                int r1 = r1.initializationVectorSize
                r0.skipBytes(r1)
            L18:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r1 = r3.fragment
                boolean[] r1 = r1.sampleHasSubsampleEncryptionTable
                int r2 = r3.currentSampleIndex
                boolean r1 = r1[r2]
                if (r1 == 0) goto L2b
                int r1 = r0.readUnsignedShort()
                int r1 = r1 * 6
                r0.skipBytes(r1)
            L2b:
                return
        }

        public final void init(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track r2, com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.DefaultSampleValues r3) {
                r1 = this;
                java.lang.Object r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r2)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track r0 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track) r0
                r1.track = r0
                java.lang.Object r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r3)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.DefaultSampleValues r3 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.DefaultSampleValues) r3
                r1.defaultSampleValues = r3
                com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r3 = r1.output
                com.mbridge.msdk.playercommon.exoplayer2.Format r2 = r2.format
                r3.format(r2)
                r1.reset()
                return
        }

        public final boolean next() {
                r4 = this;
                int r0 = r4.currentSampleIndex
                r1 = 1
                int r0 = r0 + r1
                r4.currentSampleIndex = r0
                int r0 = r4.currentSampleInTrackRun
                int r0 = r0 + r1
                r4.currentSampleInTrackRun = r0
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r2 = r4.fragment
                int[] r2 = r2.trunLength
                int r3 = r4.currentTrackRunIndex
                r2 = r2[r3]
                if (r0 != r2) goto L1c
                int r3 = r3 + r1
                r4.currentTrackRunIndex = r3
                r0 = 0
                r4.currentSampleInTrackRun = r0
                return r0
            L1c:
                return r1
        }

        public final int outputSampleEncryptionData() {
                r6 = this;
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r0 = r6.fragment
                boolean r0 = r0.definesEncryptionData
                r1 = 0
                if (r0 != 0) goto L8
                return r1
            L8:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox r0 = r6.getEncryptionBox()
                int r2 = r0.initializationVectorSize
                if (r2 == 0) goto L17
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r2 = r6.fragment
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r2.sampleEncryptionData
                int r0 = r0.initializationVectorSize
                goto L22
            L17:
                byte[] r0 = r0.defaultInitializationVector
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r6.defaultInitializationVector
                int r3 = r0.length
                r2.reset(r0, r3)
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r6.defaultInitializationVector
                int r0 = r0.length
            L22:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r3 = r6.fragment
                boolean[] r3 = r3.sampleHasSubsampleEncryptionTable
                int r4 = r6.currentSampleIndex
                boolean r3 = r3[r4]
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r6.encryptionSignalByte
                byte[] r4 = r4.data
                if (r3 == 0) goto L33
                r5 = 128(0x80, float:1.8E-43)
                goto L34
            L33:
                r5 = r1
            L34:
                r5 = r5 | r0
                byte r5 = (byte) r5
                r4[r1] = r5
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r6.encryptionSignalByte
                r4.setPosition(r1)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r1 = r6.output
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r6.encryptionSignalByte
                r5 = 1
                r1.sampleData(r4, r5)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r1 = r6.output
                r1.sampleData(r2, r0)
                if (r3 != 0) goto L4e
                int r0 = r0 + r5
                return r0
            L4e:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r1 = r6.fragment
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r1.sampleEncryptionData
                int r2 = r1.readUnsignedShort()
                r3 = -2
                r1.skipBytes(r3)
                int r2 = r2 * 6
                int r2 = r2 + 2
                com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r3 = r6.output
                r3.sampleData(r1, r2)
                int r0 = r0 + r5
                int r0 = r0 + r2
                return r0
        }

        public final void reset() {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r0 = r1.fragment
                r0.reset()
                r0 = 0
                r1.currentSampleIndex = r0
                r1.currentTrackRunIndex = r0
                r1.currentSampleInTrackRun = r0
                r1.firstSampleToOutputIndex = r0
                return
        }

        public final void seek(long r4) {
                r3 = this;
                long r4 = com.mbridge.msdk.playercommon.exoplayer2.C.usToMs(r4)
                int r0 = r3.currentSampleIndex
            L6:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r1 = r3.fragment
                int r1 = r1.sampleCount
                if (r0 >= r1) goto L23
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r1 = r3.fragment
                long r1 = r1.getSamplePresentationTime(r0)
                int r1 = (r1 > r4 ? 1 : (r1 == r4 ? 0 : -1))
                if (r1 >= 0) goto L23
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r1 = r3.fragment
                boolean[] r1 = r1.sampleIsSyncFrameTable
                boolean r1 = r1[r0]
                if (r1 == 0) goto L20
                r3.firstSampleToOutputIndex = r0
            L20:
                int r0 = r0 + 1
                goto L6
            L23:
                return
        }

        public final void updateDrmInitData(com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r4) {
                r3 = this;
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track r0 = r3.track
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r1 = r3.fragment
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.DefaultSampleValues r1 = r1.header
                int r1 = r1.sampleDescriptionIndex
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox r0 = r0.getSampleDescriptionEncryptionBox(r1)
                if (r0 == 0) goto L11
                java.lang.String r0 = r0.schemeType
                goto L12
            L11:
                r0 = 0
            L12:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r1 = r3.output
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track r2 = r3.track
                com.mbridge.msdk.playercommon.exoplayer2.Format r2 = r2.format
                com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r4 = r4.copyWithSchemeType(r0)
                com.mbridge.msdk.playercommon.exoplayer2.Format r4 = r2.copyWithDrmInitData(r4)
                r1.format(r4)
                return
        }
    }

    static {
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.FACTORY = r0
            java.lang.String r0 = "seig"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.SAMPLE_GROUP_TYPE_seig = r0
            r0 = 16
            byte[] r0 = new byte[r0]
            r0 = {x0028: FILL_ARRAY_DATA , data: [-94, 57, 79, 82, 90, -101, 79, 20, -94, 68, 108, 66, 124, 100, -115, -12} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.PIFF_SAMPLE_ENCRYPTION_BOX_EXTENDED_TYPE = r0
            r0 = 0
            java.lang.String r1 = "application/x-emsg"
            r2 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = com.mbridge.msdk.playercommon.exoplayer2.Format.createSampleFormat(r0, r1, r2)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.EMSG_FORMAT = r0
            return
    }

    public FragmentedMp4Extractor() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public FragmentedMp4Extractor(int r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public FragmentedMp4Extractor(int r2, com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0, r0)
            return
    }

    public FragmentedMp4Extractor(int r7, com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r8, com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track r9, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r10) {
            r6 = this;
            java.util.List r5 = java.util.Collections.emptyList()
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public FragmentedMp4Extractor(int r8, com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r9, com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track r10, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r11, java.util.List<com.mbridge.msdk.playercommon.exoplayer2.Format> r12) {
            r7 = this;
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public FragmentedMp4Extractor(int r2, com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r3, com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track r4, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r5, java.util.List<com.mbridge.msdk.playercommon.exoplayer2.Format> r6, com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r7) {
            r1 = this;
            r1.<init>()
            if (r4 == 0) goto L8
            r0 = 8
            goto L9
        L8:
            r0 = 0
        L9:
            r2 = r2 | r0
            r1.flags = r2
            r1.timestampAdjuster = r3
            r1.sideloadedTrack = r4
            r1.sideloadedDrmInitData = r5
            java.util.List r2 = java.util.Collections.unmodifiableList(r6)
            r1.closedCaptionFormats = r2
            r1.additionalEmsgTrackOutput = r7
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r3 = 16
            r2.<init>(r3)
            r1.atomHeader = r2
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            byte[] r4 = com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.NAL_START_CODE
            r2.<init>(r4)
            r1.nalStartCode = r2
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r4 = 5
            r2.<init>(r4)
            r1.nalPrefix = r2
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r2.<init>()
            r1.nalBuffer = r2
            byte[] r2 = new byte[r3]
            r1.extendedTypeScratch = r2
            java.util.ArrayDeque r2 = new java.util.ArrayDeque
            r2.<init>()
            r1.containerAtoms = r2
            java.util.ArrayDeque r2 = new java.util.ArrayDeque
            r2.<init>()
            r1.pendingMetadataSampleInfos = r2
            android.util.SparseArray r2 = new android.util.SparseArray
            r2.<init>()
            r1.trackBundles = r2
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r1.durationUs = r2
            r1.pendingSeekTimeUs = r2
            r1.segmentIndexEarliestPresentationTimeUs = r2
            r1.enterReadingAtomHeaderState()
            return
    }

    private void enterReadingAtomHeaderState() {
            r1 = this;
            r0 = 0
            r1.parserState = r0
            r1.atomHeaderBytesRead = r0
            return
    }

    private com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.DefaultSampleValues getDefaultSampleValues(android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.DefaultSampleValues> r3, int r4) {
            r2 = this;
            int r0 = r3.size()
            r1 = 1
            if (r0 != r1) goto Lf
            r4 = 0
            java.lang.Object r3 = r3.valueAt(r4)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.DefaultSampleValues r3 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.DefaultSampleValues) r3
            return r3
        Lf:
            java.lang.Object r3 = r3.get(r4)
            java.lang.Object r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r3)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.DefaultSampleValues r3 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.DefaultSampleValues) r3
            return r3
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData getDrmInitDataFromAtoms(java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.LeafAtom> r8) {
            int r0 = r8.size()
            r1 = 0
            r2 = 0
            r3 = r1
        L7:
            if (r2 >= r0) goto L3b
            java.lang.Object r4 = r8.get(r2)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r4 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.LeafAtom) r4
            int r5 = r4.type
            int r6 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_pssh
            if (r5 != r6) goto L38
            if (r3 != 0) goto L1c
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
        L1c:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r4.data
            byte[] r4 = r4.data
            java.util.UUID r5 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.PsshAtomUtil.parseUuid(r4)
            if (r5 != 0) goto L2e
            java.lang.String r4 = "FragmentedMp4Extractor"
            java.lang.String r5 = "Skipped pssh atom (failed to extract uuid)"
            android.util.Log.w(r4, r5)
            goto L38
        L2e:
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData r6 = new com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData
            java.lang.String r7 = "video/mp4"
            r6.<init>(r5, r7, r4)
            r3.add(r6)
        L38:
            int r2 = r2 + 1
            goto L7
        L3b:
            if (r3 != 0) goto L3e
            goto L43
        L3e:
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r1 = new com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData
            r1.<init>(r3)
        L43:
            return r1
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.TrackBundle getNextFragmentRun(android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.TrackBundle> r9) {
            int r0 = r9.size()
            r1 = 0
            r2 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r4 = 0
        Lb:
            if (r4 >= r0) goto L2d
            java.lang.Object r5 = r9.valueAt(r4)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle r5 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.TrackBundle) r5
            int r6 = r5.currentTrackRunIndex
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r7 = r5.fragment
            int r7 = r7.trunCount
            if (r6 != r7) goto L1c
            goto L2a
        L1c:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r6 = r5.fragment
            long[] r6 = r6.trunDataPosition
            int r7 = r5.currentTrackRunIndex
            r7 = r6[r7]
            int r6 = (r7 > r2 ? 1 : (r7 == r2 ? 0 : -1))
            if (r6 >= 0) goto L2a
            r1 = r5
            r2 = r7
        L2a:
            int r4 = r4 + 1
            goto Lb
        L2d:
            return r1
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.TrackBundle getTrackBundle(android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.TrackBundle> r2, int r3) {
            int r0 = r2.size()
            r1 = 1
            if (r0 != r1) goto Lf
            r3 = 0
            java.lang.Object r2 = r2.valueAt(r3)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle r2 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.TrackBundle) r2
            return r2
        Lf:
            java.lang.Object r2 = r2.get(r3)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle r2 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.TrackBundle) r2
            return r2
    }

    private void maybeInitExtraTracks() {
            r8 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[] r0 = r8.emsgTrackOutputs
            r1 = 0
            r2 = 1
            if (r0 != 0) goto L45
            r0 = 2
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[] r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[r0]
            r8.emsgTrackOutputs = r0
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r3 = r8.additionalEmsgTrackOutput
            if (r3 == 0) goto L13
            r0[r1] = r3
            r0 = r2
            goto L14
        L13:
            r0 = r1
        L14:
            int r3 = r8.flags
            r4 = 4
            r3 = r3 & r4
            if (r3 == 0) goto L2d
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[] r3 = r8.emsgTrackOutputs
            int r5 = r0 + 1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r6 = r8.extractorOutput
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle> r7 = r8.trackBundles
            int r7 = r7.size()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r4 = r6.track(r7, r4)
            r3[r0] = r4
            r0 = r5
        L2d:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[] r3 = r8.emsgTrackOutputs
            java.lang.Object[] r0 = java.util.Arrays.copyOf(r3, r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[] r0 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[]) r0
            r8.emsgTrackOutputs = r0
            int r3 = r0.length
            r4 = r1
        L39:
            if (r4 >= r3) goto L45
            r5 = r0[r4]
            com.mbridge.msdk.playercommon.exoplayer2.Format r6 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.EMSG_FORMAT
            r5.format(r6)
            int r4 = r4 + 1
            goto L39
        L45:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[] r0 = r8.cea608TrackOutputs
            if (r0 != 0) goto L79
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.Format> r0 = r8.closedCaptionFormats
            int r0 = r0.size()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[] r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[r0]
            r8.cea608TrackOutputs = r0
        L53:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[] r0 = r8.cea608TrackOutputs
            int r0 = r0.length
            if (r1 >= r0) goto L79
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r0 = r8.extractorOutput
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle> r3 = r8.trackBundles
            int r3 = r3.size()
            int r3 = r3 + r2
            int r3 = r3 + r1
            r4 = 3
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r0 = r0.track(r3, r4)
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.Format> r3 = r8.closedCaptionFormats
            java.lang.Object r3 = r3.get(r1)
            com.mbridge.msdk.playercommon.exoplayer2.Format r3 = (com.mbridge.msdk.playercommon.exoplayer2.Format) r3
            r0.format(r3)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[] r3 = r8.cea608TrackOutputs
            r3[r1] = r0
            int r1 = r1 + 1
            goto L53
        L79:
            return
    }

    private void onContainerAtomRead(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom r3) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r2 = this;
            int r0 = r3.type
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_moov
            if (r0 != r1) goto La
            r2.onMoovContainerAtomRead(r3)
            goto L27
        La:
            int r0 = r3.type
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_moof
            if (r0 != r1) goto L14
            r2.onMoofContainerAtomRead(r3)
            goto L27
        L14:
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r0 = r2.containerAtoms
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L27
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r0 = r2.containerAtoms
            java.lang.Object r0 = r0.peek()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom r0 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom) r0
            r0.add(r3)
        L27:
            return
    }

    private void onEmsgLeafAtomRead(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r13) {
            r12 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[] r0 = r12.emsgTrackOutputs
            if (r0 == 0) goto L6f
            int r0 = r0.length
            if (r0 != 0) goto L8
            goto L6f
        L8:
            r0 = 12
            r13.setPosition(r0)
            int r8 = r13.bytesLeft()
            r13.readNullTerminatedString()
            r13.readNullTerminatedString()
            long r5 = r13.readUnsignedInt()
            long r1 = r13.readUnsignedInt()
            r3 = 1000000(0xf4240, double:4.940656E-318)
            long r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.scaleLargeTimestamp(r1, r3, r5)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[] r3 = r12.emsgTrackOutputs
            int r4 = r3.length
            r5 = 0
            r6 = r5
        L2b:
            if (r6 >= r4) goto L38
            r7 = r3[r6]
            r13.setPosition(r0)
            r7.sampleData(r13, r8)
            int r6 = r6 + 1
            goto L2b
        L38:
            long r3 = r12.segmentIndexEarliestPresentationTimeUs
            r6 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r13 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
            if (r13 == 0) goto L60
            long r3 = r3 + r1
            com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r13 = r12.timestampAdjuster
            if (r13 == 0) goto L4c
            long r3 = r13.adjustSampleTimestamp(r3)
        L4c:
            r9 = r3
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[] r13 = r12.emsgTrackOutputs
            int r0 = r13.length
            r11 = r5
        L51:
            if (r11 >= r0) goto L6f
            r1 = r13[r11]
            r4 = 1
            r6 = 0
            r7 = 0
            r2 = r9
            r5 = r8
            r1.sampleMetadata(r2, r4, r5, r6, r7)
            int r11 = r11 + 1
            goto L51
        L60:
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$MetadataSampleInfo> r13 = r12.pendingMetadataSampleInfos
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$MetadataSampleInfo r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$MetadataSampleInfo
            r0.<init>(r1, r8)
            r13.addLast(r0)
            int r13 = r12.pendingMetadataSampleBytes
            int r13 = r13 + r8
            r12.pendingMetadataSampleBytes = r13
        L6f:
            return
    }

    private void onLeafAtomRead(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.LeafAtom r3, long r4) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r2 = this;
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r0 = r2.containerAtoms
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L14
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r4 = r2.containerAtoms
            java.lang.Object r4 = r4.peek()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom r4 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom) r4
            r4.add(r3)
            goto L42
        L14:
            int r0 = r3.type
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_sidx
            if (r0 != r1) goto L37
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3 = r3.data
            android.util.Pair r3 = parseSidx(r3, r4)
            java.lang.Object r4 = r3.first
            java.lang.Long r4 = (java.lang.Long) r4
            long r4 = r4.longValue()
            r2.segmentIndexEarliestPresentationTimeUs = r4
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r4 = r2.extractorOutput
            java.lang.Object r3 = r3.second
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap r3 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap) r3
            r4.seekMap(r3)
            r3 = 1
            r2.haveOutputSeekMap = r3
            goto L42
        L37:
            int r4 = r3.type
            int r5 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_emsg
            if (r4 != r5) goto L42
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3 = r3.data
            r2.onEmsgLeafAtomRead(r3)
        L42:
            return
    }

    private void onMoofContainerAtomRead(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom r8) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r7 = this;
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle> r0 = r7.trackBundles
            int r1 = r7.flags
            byte[] r2 = r7.extendedTypeScratch
            parseMoof(r8, r0, r1, r2)
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r0 = r7.sideloadedDrmInitData
            if (r0 == 0) goto Lf
            r8 = 0
            goto L15
        Lf:
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom> r8 = r8.leafChildren
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r8 = getDrmInitDataFromAtoms(r8)
        L15:
            r0 = 0
            if (r8 == 0) goto L2f
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle> r1 = r7.trackBundles
            int r1 = r1.size()
            r2 = r0
        L1f:
            if (r2 >= r1) goto L2f
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle> r3 = r7.trackBundles
            java.lang.Object r3 = r3.valueAt(r2)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle r3 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.TrackBundle) r3
            r3.updateDrmInitData(r8)
            int r2 = r2 + 1
            goto L1f
        L2f:
            long r1 = r7.pendingSeekTimeUs
            r3 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r8 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r8 == 0) goto L54
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle> r8 = r7.trackBundles
            int r8 = r8.size()
        L40:
            if (r0 >= r8) goto L52
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle> r1 = r7.trackBundles
            java.lang.Object r1 = r1.valueAt(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle r1 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.TrackBundle) r1
            long r5 = r7.pendingSeekTimeUs
            r1.seek(r5)
            int r0 = r0 + 1
            goto L40
        L52:
            r7.pendingSeekTimeUs = r3
        L54:
            return
    }

    private void onMoovContainerAtomRead(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom r20) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r19 = this;
            r0 = r19
            r1 = r20
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track r2 = r0.sideloadedTrack
            r3 = 1
            r4 = 0
            if (r2 != 0) goto Lc
            r2 = r3
            goto Ld
        Lc:
            r2 = r4
        Ld:
            java.lang.String r5 = "Unexpected moov box."
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r2, r5)
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r2 = r0.sideloadedDrmInitData
            if (r2 == 0) goto L17
            goto L1d
        L17:
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom> r2 = r1.leafChildren
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r2 = getDrmInitDataFromAtoms(r2)
        L1d:
            int r5 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_mvex
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom r5 = r1.getContainerAtomOfType(r5)
            android.util.SparseArray r12 = new android.util.SparseArray
            r12.<init>()
            r6 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom> r8 = r5.leafChildren
            int r8 = r8.size()
            r13 = r6
            r6 = r4
        L35:
            if (r6 >= r8) goto L69
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom> r7 = r5.leafChildren
            java.lang.Object r7 = r7.get(r6)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r7 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.LeafAtom) r7
            int r9 = r7.type
            int r10 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_trex
            if (r9 != r10) goto L59
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7 = r7.data
            android.util.Pair r7 = parseTrex(r7)
            java.lang.Object r9 = r7.first
            java.lang.Integer r9 = (java.lang.Integer) r9
            int r9 = r9.intValue()
            java.lang.Object r7 = r7.second
            r12.put(r9, r7)
            goto L66
        L59:
            int r9 = r7.type
            int r10 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_mehd
            if (r9 != r10) goto L66
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7 = r7.data
            long r9 = parseMehd(r7)
            r13 = r9
        L66:
            int r6 = r6 + 1
            goto L35
        L69:
            android.util.SparseArray r15 = new android.util.SparseArray
            r15.<init>()
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r5 = r1.containerChildren
            int r11 = r5.size()
            r10 = r4
        L75:
            if (r10 >= r11) goto Lb7
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r5 = r1.containerChildren
            java.lang.Object r5 = r5.get(r10)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom r5 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom) r5
            int r6 = r5.type
            int r7 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_trak
            if (r6 != r7) goto Lae
            int r6 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_mvhd
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r6 = r1.getLeafAtomOfType(r6)
            int r7 = r0.flags
            r7 = r7 & 16
            if (r7 == 0) goto L94
            r16 = r3
            goto L96
        L94:
            r16 = r4
        L96:
            r17 = 0
            r7 = r13
            r9 = r2
            r18 = r10
            r10 = r16
            r16 = r11
            r11 = r17
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track r5 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.AtomParsers.parseTrak(r5, r6, r7, r9, r10, r11)
            if (r5 == 0) goto Lb2
            int r6 = r5.id
            r15.put(r6, r5)
            goto Lb2
        Lae:
            r18 = r10
            r16 = r11
        Lb2:
            int r10 = r18 + 1
            r11 = r16
            goto L75
        Lb7:
            int r1 = r15.size()
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle> r2 = r0.trackBundles
            int r2 = r2.size()
            if (r2 != 0) goto Lfe
        Lc3:
            if (r4 >= r1) goto Lf5
            java.lang.Object r2 = r15.valueAt(r4)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track r2 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track) r2
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle r3 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r5 = r0.extractorOutput
            int r6 = r2.type
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r5 = r5.track(r4, r6)
            r3.<init>(r5)
            int r5 = r2.id
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.DefaultSampleValues r5 = r0.getDefaultSampleValues(r12, r5)
            r3.init(r2, r5)
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle> r5 = r0.trackBundles
            int r6 = r2.id
            r5.put(r6, r3)
            long r5 = r0.durationUs
            long r2 = r2.durationUs
            long r2 = java.lang.Math.max(r5, r2)
            r0.durationUs = r2
            int r4 = r4 + 1
            goto Lc3
        Lf5:
            r19.maybeInitExtraTracks()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r1 = r0.extractorOutput
            r1.endTracks()
            goto L129
        Lfe:
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle> r2 = r0.trackBundles
            int r2 = r2.size()
            if (r2 != r1) goto L107
            goto L108
        L107:
            r3 = r4
        L108:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r3)
        L10b:
            if (r4 >= r1) goto L129
            java.lang.Object r2 = r15.valueAt(r4)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track r2 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track) r2
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle> r3 = r0.trackBundles
            int r5 = r2.id
            java.lang.Object r3 = r3.get(r5)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle r3 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.TrackBundle) r3
            int r5 = r2.id
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.DefaultSampleValues r5 = r0.getDefaultSampleValues(r12, r5)
            r3.init(r2, r5)
            int r4 = r4 + 1
            goto L10b
        L129:
            return
    }

    private void outputPendingMetadataSamples(long r14) {
            r13 = this;
        L0:
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$MetadataSampleInfo> r0 = r13.pendingMetadataSampleInfos
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L38
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$MetadataSampleInfo> r0 = r13.pendingMetadataSampleInfos
            java.lang.Object r0 = r0.removeFirst()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$MetadataSampleInfo r0 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.MetadataSampleInfo) r0
            int r1 = r13.pendingMetadataSampleBytes
            int r2 = r0.size
            int r1 = r1 - r2
            r13.pendingMetadataSampleBytes = r1
            long r1 = r0.presentationTimeDeltaUs
            long r1 = r1 + r14
            com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r3 = r13.timestampAdjuster
            if (r3 == 0) goto L22
            long r1 = r3.adjustSampleTimestamp(r1)
        L22:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[] r10 = r13.emsgTrackOutputs
            int r11 = r10.length
            r3 = 0
            r12 = r3
        L27:
            if (r12 >= r11) goto L0
            r3 = r10[r12]
            r6 = 1
            int r7 = r0.size
            int r8 = r13.pendingMetadataSampleBytes
            r9 = 0
            r4 = r1
            r3.sampleMetadata(r4, r6, r7, r8, r9)
            int r12 = r12 + 1
            goto L27
        L38:
            return
    }

    private static long parseMehd(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2) {
            r0 = 8
            r2.setPosition(r0)
            int r0 = r2.readInt()
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.parseFullAtomVersion(r0)
            if (r0 != 0) goto L14
            long r0 = r2.readUnsignedInt()
            goto L18
        L14:
            long r0 = r2.readUnsignedLongToLong()
        L18:
            return r0
    }

    private static void parseMoof(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom r5, android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.TrackBundle> r6, int r7, byte[] r8) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r0 = r5.containerChildren
            int r0 = r0.size()
            r1 = 0
        L7:
            if (r1 >= r0) goto L1d
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r2 = r5.containerChildren
            java.lang.Object r2 = r2.get(r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom r2 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom) r2
            int r3 = r2.type
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_traf
            if (r3 != r4) goto L1a
            parseTraf(r2, r6, r7, r8)
        L1a:
            int r1 = r1 + 1
            goto L7
        L1d:
            return
    }

    private static void parseSaio(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5, com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r6) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r0 = 8
            r5.setPosition(r0)
            int r1 = r5.readInt()
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.parseFullAtomFlags(r1)
            r3 = 1
            r2 = r2 & r3
            if (r2 != r3) goto L14
            r5.skipBytes(r0)
        L14:
            int r0 = r5.readUnsignedIntToInt()
            if (r0 != r3) goto L2f
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.parseFullAtomVersion(r1)
            long r1 = r6.auxiliaryDataPosition
            if (r0 != 0) goto L27
            long r3 = r5.readUnsignedInt()
            goto L2b
        L27:
            long r3 = r5.readUnsignedLongToLong()
        L2b:
            long r1 = r1 + r3
            r6.auxiliaryDataPosition = r1
            return
        L2f:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r5 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r1 = "Unexpected saio entry count: "
            r6.append(r1)
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            r5.<init>(r6)
            throw r5
    }

    private static void parseSaiz(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox r7, com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r8, com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r9) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            int r7 = r7.initializationVectorSize
            r0 = 8
            r8.setPosition(r0)
            int r1 = r8.readInt()
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.parseFullAtomFlags(r1)
            r2 = 1
            r1 = r1 & r2
            if (r1 != r2) goto L16
            r8.skipBytes(r0)
        L16:
            int r0 = r8.readUnsignedByte()
            int r1 = r8.readUnsignedIntToInt()
            int r3 = r9.sampleCount
            if (r1 != r3) goto L4a
            r3 = 0
            if (r0 != 0) goto L3a
            boolean[] r0 = r9.sampleHasSubsampleEncryptionTable
            r4 = r3
            r5 = r4
        L29:
            if (r4 >= r1) goto L46
            int r6 = r8.readUnsignedByte()
            int r5 = r5 + r6
            if (r6 <= r7) goto L34
            r6 = r2
            goto L35
        L34:
            r6 = r3
        L35:
            r0[r4] = r6
            int r4 = r4 + 1
            goto L29
        L3a:
            if (r0 <= r7) goto L3d
            goto L3e
        L3d:
            r2 = r3
        L3e:
            int r0 = r0 * r1
            int r5 = r0 + 0
            boolean[] r7 = r9.sampleHasSubsampleEncryptionTable
            java.util.Arrays.fill(r7, r3, r1, r2)
        L46:
            r9.initEncryptionData(r5)
            return
        L4a:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r7 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r0 = "Length mismatch: "
            r8.append(r0)
            r8.append(r1)
            java.lang.String r0 = ", "
            r8.append(r0)
            int r9 = r9.sampleCount
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            r7.<init>(r8)
            throw r7
    }

    private static void parseSenc(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3, int r4, com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r5) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            int r4 = r4 + 8
            r3.setPosition(r4)
            int r4 = r3.readInt()
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.parseFullAtomFlags(r4)
            r0 = r4 & 1
            if (r0 != 0) goto L52
            r4 = r4 & 2
            r0 = 0
            if (r4 == 0) goto L18
            r4 = 1
            goto L19
        L18:
            r4 = r0
        L19:
            int r1 = r3.readUnsignedIntToInt()
            int r2 = r5.sampleCount
            if (r1 != r2) goto L31
            boolean[] r2 = r5.sampleHasSubsampleEncryptionTable
            java.util.Arrays.fill(r2, r0, r1, r4)
            int r4 = r3.bytesLeft()
            r5.initEncryptionData(r4)
            r5.fillEncryptionData(r3)
            return
        L31:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r3 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "Length mismatch: "
            r4.append(r0)
            r4.append(r1)
            java.lang.String r0 = ", "
            r4.append(r0)
            int r5 = r5.sampleCount
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            throw r3
        L52:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r3 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r4 = "Overriding TrackEncryptionBox parameters is unsupported."
            r3.<init>(r4)
            throw r3
    }

    private static void parseSenc(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1, com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r2) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r0 = 0
            parseSenc(r1, r0, r2)
            return
    }

    private static void parseSgpd(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r12, com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r13, java.lang.String r14, com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r15) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r0 = 8
            r12.setPosition(r0)
            int r1 = r12.readInt()
            int r2 = r12.readInt()
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.SAMPLE_GROUP_TYPE_seig
            if (r2 == r3) goto L12
            return
        L12:
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.parseFullAtomVersion(r1)
            r2 = 4
            r3 = 1
            if (r1 != r3) goto L1d
            r12.skipBytes(r2)
        L1d:
            int r12 = r12.readInt()
            if (r12 != r3) goto La6
            r13.setPosition(r0)
            int r12 = r13.readInt()
            int r0 = r13.readInt()
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.SAMPLE_GROUP_TYPE_seig
            if (r0 == r1) goto L33
            return
        L33:
            int r12 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.parseFullAtomVersion(r12)
            if (r12 != r3) goto L4c
            long r0 = r13.readUnsignedInt()
            r4 = 0
            int r12 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r12 == 0) goto L44
            goto L52
        L44:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r12 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r13 = "Variable length description in sgpd found (unsupported)"
            r12.<init>(r13)
            throw r12
        L4c:
            r0 = 2
            if (r12 < r0) goto L52
            r13.skipBytes(r2)
        L52:
            long r0 = r13.readUnsignedInt()
            r4 = 1
            int r12 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r12 != 0) goto L9e
            r13.skipBytes(r3)
            int r12 = r13.readUnsignedByte()
            r0 = r12 & 240(0xf0, float:3.36E-43)
            int r9 = r0 >> 4
            r10 = r12 & 15
            int r12 = r13.readUnsignedByte()
            r0 = 0
            if (r12 != r3) goto L72
            r5 = r3
            goto L73
        L72:
            r5 = r0
        L73:
            if (r5 != 0) goto L76
            return
        L76:
            int r7 = r13.readUnsignedByte()
            r12 = 16
            byte[] r8 = new byte[r12]
            r13.readBytes(r8, r0, r12)
            r12 = 0
            if (r5 == 0) goto L91
            if (r7 != 0) goto L91
            int r12 = r13.readUnsignedByte()
            byte[] r1 = new byte[r12]
            r13.readBytes(r1, r0, r12)
            r11 = r1
            goto L92
        L91:
            r11 = r12
        L92:
            r15.definesEncryptionData = r3
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox r12 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox
            r4 = r12
            r6 = r14
            r4.<init>(r5, r6, r7, r8, r9, r10, r11)
            r15.trackEncryptionBox = r12
            return
        L9e:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r12 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r13 = "Entry count in sgpd != 1 (unsupported)."
            r12.<init>(r13)
            throw r12
        La6:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r12 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r13 = "Entry count in sbgp != 1 (unsupported)."
            r12.<init>(r13)
            throw r12
    }

    private static android.util.Pair<java.lang.Long, com.mbridge.msdk.playercommon.exoplayer2.extractor.ChunkIndex> parseSidx(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r25, long r26) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r0 = r25
            r1 = 8
            r0.setPosition(r1)
            int r1 = r25.readInt()
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.parseFullAtomVersion(r1)
            r2 = 4
            r0.skipBytes(r2)
            long r9 = r25.readUnsignedInt()
            if (r1 != 0) goto L22
            long r3 = r25.readUnsignedInt()
            long r5 = r25.readUnsignedInt()
            goto L2a
        L22:
            long r3 = r25.readUnsignedLongToLong()
            long r5 = r25.readUnsignedLongToLong()
        L2a:
            long r5 = r26 + r5
            r11 = r3
            r13 = r5
            r5 = 1000000(0xf4240, double:4.940656E-318)
            r3 = r11
            r7 = r9
            long r15 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.scaleLargeTimestamp(r3, r5, r7)
            r1 = 2
            r0.skipBytes(r1)
            int r1 = r25.readUnsignedShort()
            int[] r7 = new int[r1]
            long[] r8 = new long[r1]
            long[] r5 = new long[r1]
            long[] r6 = new long[r1]
            r3 = 0
            r17 = r15
            r23 = r11
            r11 = r3
            r3 = r23
        L4f:
            if (r11 >= r1) goto La6
            int r12 = r25.readInt()
            r19 = -2147483648(0xffffffff80000000, float:-0.0)
            r19 = r12 & r19
            if (r19 != 0) goto L9e
            long r19 = r25.readUnsignedInt()
            r21 = 2147483647(0x7fffffff, float:NaN)
            r12 = r12 & r21
            r7[r11] = r12
            r8[r11] = r13
            r6[r11] = r17
            long r17 = r3 + r19
            r19 = 1000000(0xf4240, double:4.940656E-318)
            r3 = r17
            r12 = r5
            r2 = r6
            r5 = r19
            r26 = r1
            r1 = r7
            r22 = r8
            r7 = r9
            long r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.scaleLargeTimestamp(r3, r5, r7)
            r5 = r2[r11]
            long r5 = r3 - r5
            r12[r11] = r5
            r5 = 4
            r0.skipBytes(r5)
            r6 = r1[r11]
            long r6 = (long) r6
            long r13 = r13 + r6
            int r11 = r11 + 1
            r7 = r1
            r6 = r2
            r2 = r5
            r5 = r12
            r8 = r22
            r1 = r26
            r23 = r3
            r3 = r17
            r17 = r23
            goto L4f
        L9e:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r0 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r1 = "Unhandled indirect reference"
            r0.<init>(r1)
            throw r0
        La6:
            r12 = r5
            r2 = r6
            r1 = r7
            r22 = r8
            java.lang.Long r0 = java.lang.Long.valueOf(r15)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ChunkIndex r3 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ChunkIndex
            r4 = r22
            r3.<init>(r1, r4, r12, r2)
            android.util.Pair r0 = android.util.Pair.create(r0, r3)
            return r0
    }

    private static long parseTfdt(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2) {
            r0 = 8
            r2.setPosition(r0)
            int r0 = r2.readInt()
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.parseFullAtomVersion(r0)
            r1 = 1
            if (r0 != r1) goto L15
            long r0 = r2.readUnsignedLongToLong()
            goto L19
        L15:
            long r0 = r2.readUnsignedInt()
        L19:
            return r0
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.TrackBundle parseTfhd(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5, android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.TrackBundle> r6) {
            r0 = 8
            r5.setPosition(r0)
            int r0 = r5.readInt()
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.parseFullAtomFlags(r0)
            int r1 = r5.readInt()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle r6 = getTrackBundle(r6, r1)
            if (r6 != 0) goto L19
            r5 = 0
            return r5
        L19:
            r1 = r0 & 1
            if (r1 == 0) goto L29
            long r1 = r5.readUnsignedLongToLong()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r3 = r6.fragment
            r3.dataPosition = r1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r3 = r6.fragment
            r3.auxiliaryDataPosition = r1
        L29:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.DefaultSampleValues r1 = r6.defaultSampleValues
            r2 = r0 & 2
            if (r2 == 0) goto L36
            int r2 = r5.readUnsignedIntToInt()
            int r2 = r2 + (-1)
            goto L38
        L36:
            int r2 = r1.sampleDescriptionIndex
        L38:
            r3 = r0 & 8
            if (r3 == 0) goto L41
            int r3 = r5.readUnsignedIntToInt()
            goto L43
        L41:
            int r3 = r1.duration
        L43:
            r4 = r0 & 16
            if (r4 == 0) goto L4c
            int r4 = r5.readUnsignedIntToInt()
            goto L4e
        L4c:
            int r4 = r1.size
        L4e:
            r0 = r0 & 32
            if (r0 == 0) goto L57
            int r5 = r5.readUnsignedIntToInt()
            goto L59
        L57:
            int r5 = r1.flags
        L59:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r0 = r6.fragment
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.DefaultSampleValues r1 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.DefaultSampleValues
            r1.<init>(r2, r3, r4, r5)
            r0.header = r1
            return r6
    }

    private static void parseTraf(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom r4, android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.TrackBundle> r5, int r6, byte[] r7) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_tfhd
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r0 = r4.getLeafAtomOfType(r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r0.data
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle r5 = parseTfhd(r0, r5)
            if (r5 != 0) goto Lf
            return
        Lf:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r0 = r5.fragment
            long r1 = r0.nextFragmentDecodeTime
            r5.reset()
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_tfdt
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r3 = r4.getLeafAtomOfType(r3)
            if (r3 == 0) goto L2e
            r3 = r6 & 2
            if (r3 != 0) goto L2e
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_tfdt
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r1 = r4.getLeafAtomOfType(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r1.data
            long r1 = parseTfdt(r1)
        L2e:
            parseTruns(r4, r5, r1, r6)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track r5 = r5.track
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.DefaultSampleValues r6 = r0.header
            int r6 = r6.sampleDescriptionIndex
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox r5 = r5.getSampleDescriptionEncryptionBox(r6)
            int r6 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_saiz
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r6 = r4.getLeafAtomOfType(r6)
            if (r6 == 0) goto L48
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6 = r6.data
            parseSaiz(r5, r6, r0)
        L48:
            int r6 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_saio
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r6 = r4.getLeafAtomOfType(r6)
            if (r6 == 0) goto L55
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6 = r6.data
            parseSaio(r6, r0)
        L55:
            int r6 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_senc
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r6 = r4.getLeafAtomOfType(r6)
            if (r6 == 0) goto L62
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6 = r6.data
            parseSenc(r6, r0)
        L62:
            int r6 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_sbgp
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r6 = r4.getLeafAtomOfType(r6)
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_sgpd
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r1 = r4.getLeafAtomOfType(r1)
            if (r6 == 0) goto L7f
            if (r1 == 0) goto L7f
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6 = r6.data
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r1.data
            if (r5 == 0) goto L7b
            java.lang.String r5 = r5.schemeType
            goto L7c
        L7b:
            r5 = 0
        L7c:
            parseSgpd(r6, r1, r5, r0)
        L7f:
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom> r5 = r4.leafChildren
            int r5 = r5.size()
            r6 = 0
        L86:
            if (r6 >= r5) goto L9e
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom> r1 = r4.leafChildren
            java.lang.Object r1 = r1.get(r6)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r1 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.LeafAtom) r1
            int r2 = r1.type
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_uuid
            if (r2 != r3) goto L9b
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r1.data
            parseUuid(r1, r0, r7)
        L9b:
            int r6 = r6 + 1
            goto L86
        L9e:
            return
    }

    private static android.util.Pair<java.lang.Integer, com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.DefaultSampleValues> parseTrex(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5) {
            r0 = 12
            r5.setPosition(r0)
            int r0 = r5.readInt()
            int r1 = r5.readUnsignedIntToInt()
            int r1 = r1 + (-1)
            int r2 = r5.readUnsignedIntToInt()
            int r3 = r5.readUnsignedIntToInt()
            int r5 = r5.readInt()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.DefaultSampleValues r4 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.DefaultSampleValues
            r4.<init>(r1, r2, r3, r5)
            android.util.Pair r5 = android.util.Pair.create(r0, r4)
            return r5
    }

    private static int parseTrun(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.TrackBundle r31, int r32, long r33, int r35, com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r36, int r37) {
            r0 = r31
            r1 = 8
            r2 = r36
            r2.setPosition(r1)
            int r1 = r36.readInt()
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.parseFullAtomFlags(r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track r3 = r0.track
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r0 = r0.fragment
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.DefaultSampleValues r4 = r0.header
            int[] r5 = r0.trunLength
            int r6 = r36.readUnsignedIntToInt()
            r5[r32] = r6
            long[] r5 = r0.trunDataPosition
            long r6 = r0.dataPosition
            r5[r32] = r6
            r5 = r1 & 1
            if (r5 == 0) goto L35
            long[] r5 = r0.trunDataPosition
            r6 = r5[r32]
            int r8 = r36.readInt()
            long r8 = (long) r8
            long r6 = r6 + r8
            r5[r32] = r6
        L35:
            r5 = r1 & 4
            r6 = 0
            r7 = 1
            if (r5 == 0) goto L3d
            r5 = r7
            goto L3e
        L3d:
            r5 = r6
        L3e:
            int r8 = r4.flags
            if (r5 == 0) goto L46
            int r8 = r36.readUnsignedIntToInt()
        L46:
            r9 = r1 & 256(0x100, float:3.59E-43)
            if (r9 == 0) goto L4c
            r9 = r7
            goto L4d
        L4c:
            r9 = r6
        L4d:
            r10 = r1 & 512(0x200, float:7.17E-43)
            if (r10 == 0) goto L53
            r10 = r7
            goto L54
        L53:
            r10 = r6
        L54:
            r11 = r1 & 1024(0x400, float:1.435E-42)
            if (r11 == 0) goto L5a
            r11 = r7
            goto L5b
        L5a:
            r11 = r6
        L5b:
            r1 = r1 & 2048(0x800, float:2.87E-42)
            if (r1 == 0) goto L61
            r1 = r7
            goto L62
        L61:
            r1 = r6
        L62:
            long[] r12 = r3.editListDurations
            r13 = 0
            if (r12 == 0) goto L83
            long[] r12 = r3.editListDurations
            int r12 = r12.length
            if (r12 != r7) goto L83
            long[] r12 = r3.editListDurations
            r15 = r12[r6]
            int r12 = (r15 > r13 ? 1 : (r15 == r13 ? 0 : -1))
            if (r12 != 0) goto L83
            long[] r12 = r3.editListMediaTimes
            r13 = r12[r6]
            r15 = 1000(0x3e8, double:4.94E-321)
            long r6 = r3.timescale
            r17 = r6
            long r13 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.scaleLargeTimestamp(r13, r15, r17)
        L83:
            int[] r6 = r0.sampleSizeTable
            int[] r7 = r0.sampleCompositionTimeOffsetTable
            long[] r15 = r0.sampleDecodingTimeTable
            boolean[] r12 = r0.sampleIsSyncFrameTable
            int r2 = r3.type
            r17 = r8
            r8 = 2
            if (r2 != r8) goto L9a
            r2 = 1
            r8 = r35 & 1
            if (r8 == 0) goto L9a
            r16 = 1
            goto L9c
        L9a:
            r16 = 0
        L9c:
            int[] r8 = r0.trunLength
            r8 = r8[r32]
            int r8 = r37 + r8
            long r2 = r3.timescale
            r24 = r13
            r14 = r12
            if (r32 <= 0) goto Lac
            long r12 = r0.nextFragmentDecodeTime
            goto Lae
        Lac:
            r12 = r33
        Lae:
            r32 = r12
            r12 = r37
        Lb2:
            if (r12 >= r8) goto L13b
            if (r9 == 0) goto Lbb
            int r13 = r36.readUnsignedIntToInt()
            goto Lbd
        Lbb:
            int r13 = r4.duration
        Lbd:
            if (r10 == 0) goto Lc8
            int r18 = r36.readUnsignedIntToInt()
            r26 = r9
            r9 = r18
            goto Lcc
        Lc8:
            r26 = r9
            int r9 = r4.size
        Lcc:
            if (r12 != 0) goto Ld5
            if (r5 == 0) goto Ld5
            r27 = r5
            r5 = r17
            goto Le4
        Ld5:
            if (r11 == 0) goto Le0
            int r18 = r36.readInt()
            r27 = r5
            r5 = r18
            goto Le4
        Le0:
            r27 = r5
            int r5 = r4.flags
        Le4:
            if (r1 == 0) goto Lfb
            r28 = r1
            int r1 = r36.readInt()
            r29 = r10
            r30 = r11
            long r10 = (long) r1
            r18 = 1000(0x3e8, double:4.94E-321)
            long r10 = r10 * r18
            long r10 = r10 / r2
            int r1 = (int) r10
            r7[r12] = r1
            r1 = 0
            goto L104
        Lfb:
            r28 = r1
            r29 = r10
            r30 = r11
            r1 = 0
            r7[r12] = r1
        L104:
            r20 = 1000(0x3e8, double:4.94E-321)
            r18 = r32
            r22 = r2
            long r10 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.scaleLargeTimestamp(r18, r20, r22)
            long r10 = r10 - r24
            r15[r12] = r10
            r6[r12] = r9
            int r5 = r5 >> 16
            r9 = 1
            r5 = r5 & r9
            if (r5 != 0) goto L120
            if (r16 == 0) goto L11e
            if (r12 != 0) goto L120
        L11e:
            r5 = r9
            goto L121
        L120:
            r5 = r1
        L121:
            r14[r12] = r5
            long r10 = (long) r13
            r18 = r2
            r1 = r32
            long r1 = r1 + r10
            int r12 = r12 + 1
            r32 = r1
            r2 = r18
            r9 = r26
            r5 = r27
            r1 = r28
            r10 = r29
            r11 = r30
            goto Lb2
        L13b:
            r1 = r32
            r0.nextFragmentDecodeTime = r1
            return r8
    }

    private static void parseTruns(com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom r10, com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.TrackBundle r11, long r12, int r14) {
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom> r10 = r10.leafChildren
            int r0 = r10.size()
            r1 = 0
            r2 = r1
            r3 = r2
            r4 = r3
        La:
            if (r2 >= r0) goto L2b
            java.lang.Object r5 = r10.get(r2)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r5 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.LeafAtom) r5
            int r6 = r5.type
            int r7 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_trun
            if (r6 != r7) goto L28
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r5.data
            r6 = 12
            r5.setPosition(r6)
            int r5 = r5.readUnsignedIntToInt()
            if (r5 <= 0) goto L28
            int r4 = r4 + r5
            int r3 = r3 + 1
        L28:
            int r2 = r2 + 1
            goto La
        L2b:
            r11.currentTrackRunIndex = r1
            r11.currentSampleInTrackRun = r1
            r11.currentSampleIndex = r1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r2 = r11.fragment
            r2.initTables(r3, r4)
            r3 = r1
            r8 = r3
        L38:
            if (r1 >= r0) goto L56
            java.lang.Object r2 = r10.get(r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r2 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.LeafAtom) r2
            int r4 = r2.type
            int r5 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_trun
            if (r4 != r5) goto L53
            int r9 = r3 + 1
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7 = r2.data
            r2 = r11
            r4 = r12
            r6 = r14
            int r2 = parseTrun(r2, r3, r4, r6, r7, r8)
            r8 = r2
            r3 = r9
        L53:
            int r1 = r1 + 1
            goto L38
        L56:
            return
    }

    private static void parseUuid(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2, com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r3, byte[] r4) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r0 = 8
            r2.setPosition(r0)
            r0 = 16
            r1 = 0
            r2.readBytes(r4, r1, r0)
            byte[] r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.PIFF_SAMPLE_ENCRYPTION_BOX_EXTENDED_TYPE
            boolean r4 = java.util.Arrays.equals(r4, r1)
            if (r4 != 0) goto L14
            return
        L14:
            parseSenc(r2, r0, r3)
            return
    }

    private void processAtomEnded(long r3) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r2 = this;
        L0:
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r0 = r2.containerAtoms
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L22
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r0 = r2.containerAtoms
            java.lang.Object r0 = r0.peek()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom r0 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom) r0
            long r0 = r0.endPosition
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 != 0) goto L22
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r0 = r2.containerAtoms
            java.lang.Object r0 = r0.pop()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom r0 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.ContainerAtom) r0
            r2.onContainerAtomRead(r0)
            goto L0
        L22:
            r2.enterReadingAtomHeaderState()
            return
    }

    private boolean readAtomHeader(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r9) throws java.io.IOException, java.lang.InterruptedException {
            r8 = this;
            int r0 = r8.atomHeaderBytesRead
            r1 = 8
            r2 = 0
            r3 = 1
            if (r0 != 0) goto L2a
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r8.atomHeader
            byte[] r0 = r0.data
            boolean r0 = r9.readFully(r0, r2, r1, r3)
            if (r0 != 0) goto L13
            return r2
        L13:
            r8.atomHeaderBytesRead = r1
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r8.atomHeader
            r0.setPosition(r2)
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
            r9.readFully(r0, r1, r1)
            int r0 = r8.atomHeaderBytesRead
            int r0 = r0 + r1
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
            if (r0 < 0) goto L14c
            long r4 = r9.getPosition()
            int r0 = r8.atomHeaderBytesRead
            long r6 = (long) r0
            long r4 = r4 - r6
            int r0 = r8.atomType
            int r6 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_moof
            if (r0 != r6) goto Lab
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle> r0 = r8.trackBundles
            int r0 = r0.size()
            r6 = r2
        L96:
            if (r6 >= r0) goto Lab
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle> r7 = r8.trackBundles
            java.lang.Object r7 = r7.valueAt(r6)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle r7 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.TrackBundle) r7
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r7 = r7.fragment
            r7.atomPosition = r4
            r7.auxiliaryDataPosition = r4
            r7.dataPosition = r4
            int r6 = r6 + 1
            goto L96
        Lab:
            int r0 = r8.atomType
            int r6 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_mdat
            r7 = 0
            if (r0 != r6) goto Lcf
            r8.currentTrackBundle = r7
            long r0 = r8.atomSize
            long r0 = r0 + r4
            r8.endOfMdatPosition = r0
            boolean r9 = r8.haveOutputSeekMap
            if (r9 != 0) goto Lcb
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r9 = r8.extractorOutput
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$Unseekable r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$Unseekable
            long r1 = r8.durationUs
            r0.<init>(r1, r4)
            r9.seekMap(r0)
            r8.haveOutputSeekMap = r3
        Lcb:
            r9 = 2
            r8.parserState = r9
            return r3
        Lcf:
            int r0 = r8.atomType
            boolean r0 = shouldParseContainerAtom(r0)
            if (r0 == 0) goto Lfe
            long r0 = r9.getPosition()
            long r4 = r8.atomSize
            long r0 = r0 + r4
            r4 = 8
            long r0 = r0 - r4
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r9 = r8.containerAtoms
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom r2 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom
            int r4 = r8.atomType
            r2.<init>(r4, r0)
            r9.push(r2)
            long r4 = r8.atomSize
            int r9 = r8.atomHeaderBytesRead
            long r6 = (long) r9
            int r9 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r9 != 0) goto Lfa
            r8.processAtomEnded(r0)
            goto L143
        Lfa:
            r8.enterReadingAtomHeaderState()
            goto L143
        Lfe:
            int r9 = r8.atomType
            boolean r9 = shouldParseLeafAtom(r9)
            r4 = 2147483647(0x7fffffff, double:1.060997895E-314)
            if (r9 == 0) goto L139
            int r9 = r8.atomHeaderBytesRead
            if (r9 != r1) goto L131
            long r6 = r8.atomSize
            int r9 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r9 > 0) goto L129
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r9 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            int r0 = (int) r6
            r9.<init>(r0)
            r8.atomData = r9
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r9 = r8.atomHeader
            byte[] r9 = r9.data
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r8.atomData
            byte[] r0 = r0.data
            java.lang.System.arraycopy(r9, r2, r0, r2, r1)
            r8.parserState = r3
            goto L143
        L129:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r9 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r0 = "Leaf atom with length > 2147483647 (unsupported)."
            r9.<init>(r0)
            throw r9
        L131:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r9 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r0 = "Leaf atom defines extended atom size (unsupported)."
            r9.<init>(r0)
            throw r9
        L139:
            long r0 = r8.atomSize
            int r9 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r9 > 0) goto L144
            r8.atomData = r7
            r8.parserState = r3
        L143:
            return r3
        L144:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r9 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r0 = "Skipping atom with length > 2147483647 (unsupported)."
            r9.<init>(r0)
            throw r9
        L14c:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r9 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r0 = "Atom size less than header length (unsupported)."
            r9.<init>(r0)
            throw r9
    }

    private void readAtomPayload(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r4) throws java.io.IOException, java.lang.InterruptedException {
            r3 = this;
            long r0 = r3.atomSize
            int r0 = (int) r0
            int r1 = r3.atomHeaderBytesRead
            int r0 = r0 - r1
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r3.atomData
            if (r1 == 0) goto L22
            byte[] r1 = r1.data
            r2 = 8
            r4.readFully(r1, r2, r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$LeafAtom
            int r1 = r3.atomType
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r3.atomData
            r0.<init>(r1, r2)
            long r1 = r4.getPosition()
            r3.onLeafAtomRead(r0, r1)
            goto L25
        L22:
            r4.skipFully(r0)
        L25:
            long r0 = r4.getPosition()
            r3.processAtomEnded(r0)
            return
    }

    private void readEncryptionData(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r11) throws java.io.IOException, java.lang.InterruptedException {
            r10 = this;
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle> r0 = r10.trackBundles
            int r0 = r0.size()
            r1 = 0
            r2 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r4 = 0
        Ld:
            if (r4 >= r0) goto L33
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle> r5 = r10.trackBundles
            java.lang.Object r5 = r5.valueAt(r4)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle r5 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.TrackBundle) r5
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r5 = r5.fragment
            boolean r6 = r5.sampleEncryptionDataNeedsFill
            if (r6 == 0) goto L30
            long r6 = r5.auxiliaryDataPosition
            int r6 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r6 >= 0) goto L30
            long r1 = r5.auxiliaryDataPosition
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle> r3 = r10.trackBundles
            java.lang.Object r3 = r3.valueAt(r4)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle r3 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.TrackBundle) r3
            r8 = r1
            r1 = r3
            r2 = r8
        L30:
            int r4 = r4 + 1
            goto Ld
        L33:
            if (r1 != 0) goto L39
            r11 = 3
            r10.parserState = r11
            return
        L39:
            long r4 = r11.getPosition()
            long r2 = r2 - r4
            int r0 = (int) r2
            if (r0 < 0) goto L4a
            r11.skipFully(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r0 = r1.fragment
            r0.fillEncryptionData(r11)
            return
        L4a:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r11 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r0 = "Offset to encryption data was negative."
            r11.<init>(r0)
            throw r11
    }

    private boolean readSample(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r18) throws java.io.IOException, java.lang.InterruptedException {
            r17 = this;
            r0 = r17
            r1 = r18
            int r2 = r0.parserState
            r3 = 0
            r4 = 3
            r5 = 4
            r6 = 1
            r7 = 0
            if (r2 != r4) goto La1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle r2 = r0.currentTrackBundle
            if (r2 != 0) goto L4f
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle> r2 = r0.trackBundles
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle r2 = getNextFragmentRun(r2)
            if (r2 != 0) goto L32
            long r2 = r0.endOfMdatPosition
            long r4 = r18.getPosition()
            long r2 = r2 - r4
            int r2 = (int) r2
            if (r2 < 0) goto L2a
            r1.skipFully(r2)
            r17.enterReadingAtomHeaderState()
            return r7
        L2a:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r1 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r2 = "Offset to end of mdat was negative."
            r1.<init>(r2)
            throw r1
        L32:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r8 = r2.fragment
            long[] r8 = r8.trunDataPosition
            int r9 = r2.currentTrackRunIndex
            r9 = r8[r9]
            long r11 = r18.getPosition()
            long r9 = r9 - r11
            int r8 = (int) r9
            if (r8 >= 0) goto L4a
            java.lang.String r8 = "FragmentedMp4Extractor"
            java.lang.String r9 = "Ignoring negative offset to sample data."
            android.util.Log.w(r8, r9)
            r8 = r7
        L4a:
            r1.skipFully(r8)
            r0.currentTrackBundle = r2
        L4f:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle r2 = r0.currentTrackBundle
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r2 = r2.fragment
            int[] r2 = r2.sampleSizeTable
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle r8 = r0.currentTrackBundle
            int r8 = r8.currentSampleIndex
            r2 = r2[r8]
            r0.sampleSize = r2
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle r2 = r0.currentTrackBundle
            int r2 = r2.currentSampleIndex
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle r8 = r0.currentTrackBundle
            int r8 = r8.firstSampleToOutputIndex
            if (r2 >= r8) goto L7e
            int r2 = r0.sampleSize
            r1.skipFully(r2)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle r1 = r0.currentTrackBundle
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.TrackBundle.access$000(r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle r1 = r0.currentTrackBundle
            boolean r1 = r1.next()
            if (r1 != 0) goto L7b
            r0.currentTrackBundle = r3
        L7b:
            r0.parserState = r4
            return r6
        L7e:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle r2 = r0.currentTrackBundle
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track r2 = r2.track
            int r2 = r2.sampleTransformation
            if (r2 != r6) goto L90
            int r2 = r0.sampleSize
            r8 = 8
            int r2 = r2 - r8
            r0.sampleSize = r2
            r1.skipFully(r8)
        L90:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle r2 = r0.currentTrackBundle
            int r2 = r2.outputSampleEncryptionData()
            r0.sampleBytesWritten = r2
            int r8 = r0.sampleSize
            int r8 = r8 + r2
            r0.sampleSize = r8
            r0.parserState = r5
            r0.sampleCurrentNalBytesRemaining = r7
        La1:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle r2 = r0.currentTrackBundle
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackFragment r2 = r2.fragment
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle r8 = r0.currentTrackBundle
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track r8 = r8.track
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle r9 = r0.currentTrackBundle
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r10 = r9.output
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle r9 = r0.currentTrackBundle
            int r9 = r9.currentSampleIndex
            long r11 = r2.getSamplePresentationTime(r9)
            r13 = 1000(0x3e8, double:4.94E-321)
            long r11 = r11 * r13
            com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r13 = r0.timestampAdjuster
            if (r13 == 0) goto Lc0
            long r11 = r13.adjustSampleTimestamp(r11)
        Lc0:
            r14 = r11
            int r11 = r8.nalUnitLengthFieldLength
            if (r11 == 0) goto L17e
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r11 = r0.nalPrefix
            byte[] r11 = r11.data
            r11[r7] = r7
            r11[r6] = r7
            r12 = 2
            r11[r12] = r7
            int r12 = r8.nalUnitLengthFieldLength
            int r12 = r12 + r6
            int r13 = r8.nalUnitLengthFieldLength
            int r13 = 4 - r13
        Ld7:
            int r4 = r0.sampleBytesWritten
            int r3 = r0.sampleSize
            if (r4 >= r3) goto L190
            int r3 = r0.sampleCurrentNalBytesRemaining
            if (r3 != 0) goto L124
            r1.readFully(r11, r13, r12)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3 = r0.nalPrefix
            r3.setPosition(r7)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3 = r0.nalPrefix
            int r3 = r3.readUnsignedIntToInt()
            int r3 = r3 - r6
            r0.sampleCurrentNalBytesRemaining = r3
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3 = r0.nalStartCode
            r3.setPosition(r7)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3 = r0.nalStartCode
            r10.sampleData(r3, r5)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3 = r0.nalPrefix
            r10.sampleData(r3, r6)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[] r3 = r0.cea608TrackOutputs
            int r3 = r3.length
            if (r3 <= 0) goto L114
            com.mbridge.msdk.playercommon.exoplayer2.Format r3 = r8.format
            java.lang.String r3 = r3.sampleMimeType
            r4 = r11[r5]
            boolean r3 = com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.isNalUnitSei(r3, r4)
            if (r3 == 0) goto L114
            r3 = r6
            goto L115
        L114:
            r3 = r7
        L115:
            r0.processSeiNalUnitPayload = r3
            int r3 = r0.sampleBytesWritten
            int r3 = r3 + 5
            r0.sampleBytesWritten = r3
            int r3 = r0.sampleSize
            int r3 = r3 + r13
            r0.sampleSize = r3
            r3 = 0
            goto Ld7
        L124:
            boolean r4 = r0.processSeiNalUnitPayload
            if (r4 == 0) goto L169
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r0.nalBuffer
            r4.reset(r3)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3 = r0.nalBuffer
            byte[] r3 = r3.data
            int r4 = r0.sampleCurrentNalBytesRemaining
            r1.readFully(r3, r7, r4)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3 = r0.nalBuffer
            int r4 = r0.sampleCurrentNalBytesRemaining
            r10.sampleData(r3, r4)
            int r3 = r0.sampleCurrentNalBytesRemaining
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r0.nalBuffer
            byte[] r4 = r4.data
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r0.nalBuffer
            int r5 = r5.limit()
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.unescapeStream(r4, r5)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r0.nalBuffer
            com.mbridge.msdk.playercommon.exoplayer2.Format r6 = r8.format
            java.lang.String r6 = r6.sampleMimeType
            java.lang.String r7 = "video/hevc"
            boolean r6 = r7.equals(r6)
            r5.setPosition(r6)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r0.nalBuffer
            r5.setLimit(r4)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r0.nalBuffer
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[] r5 = r0.cea608TrackOutputs
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaUtil.consume(r14, r4, r5)
            goto L16e
        L169:
            r4 = r7
            int r3 = r10.sampleData(r1, r3, r4)
        L16e:
            int r4 = r0.sampleBytesWritten
            int r4 = r4 + r3
            r0.sampleBytesWritten = r4
            int r4 = r0.sampleCurrentNalBytesRemaining
            int r4 = r4 - r3
            r0.sampleCurrentNalBytesRemaining = r4
            r3 = 0
            r5 = 4
            r6 = 1
            r7 = 0
            goto Ld7
        L17e:
            int r3 = r0.sampleBytesWritten
            int r4 = r0.sampleSize
            if (r3 >= r4) goto L190
            int r4 = r4 - r3
            r3 = 0
            int r4 = r10.sampleData(r1, r4, r3)
            int r5 = r0.sampleBytesWritten
            int r5 = r5 + r4
            r0.sampleBytesWritten = r5
            goto L17e
        L190:
            boolean[] r1 = r2.sampleIsSyncFrameTable
            boolean r1 = r1[r9]
            boolean r3 = r2.definesEncryptionData
            if (r3 == 0) goto L1b0
            r3 = 1073741824(0x40000000, float:2.0)
            r1 = r1 | r3
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox r3 = r2.trackEncryptionBox
            if (r3 == 0) goto L1a2
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox r2 = r2.trackEncryptionBox
            goto L1aa
        L1a2:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.DefaultSampleValues r2 = r2.header
            int r2 = r2.sampleDescriptionIndex
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.TrackEncryptionBox r2 = r8.getSampleDescriptionEncryptionBox(r2)
        L1aa:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput$CryptoData r2 = r2.cryptoData
            r13 = r1
            r16 = r2
            goto L1b3
        L1b0:
            r13 = r1
            r16 = 0
        L1b3:
            int r1 = r0.sampleSize
            r2 = 0
            r11 = r14
            r3 = r14
            r14 = r1
            r15 = r2
            r10.sampleMetadata(r11, r13, r14, r15, r16)
            r0.outputPendingMetadataSamples(r3)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle r1 = r0.currentTrackBundle
            boolean r1 = r1.next()
            if (r1 != 0) goto L1cb
            r1 = 0
            r0.currentTrackBundle = r1
        L1cb:
            r1 = 3
            r0.parserState = r1
            r1 = 1
            return r1
    }

    private static boolean shouldParseContainerAtom(int r1) {
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_moov
            if (r1 == r0) goto L27
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_trak
            if (r1 == r0) goto L27
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_mdia
            if (r1 == r0) goto L27
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_minf
            if (r1 == r0) goto L27
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stbl
            if (r1 == r0) goto L27
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_moof
            if (r1 == r0) goto L27
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_traf
            if (r1 == r0) goto L27
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_mvex
            if (r1 == r0) goto L27
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_edts
            if (r1 != r0) goto L25
            goto L27
        L25:
            r1 = 0
            goto L28
        L27:
            r1 = 1
        L28:
            return r1
    }

    private static boolean shouldParseLeafAtom(int r1) {
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_hdlr
            if (r1 == r0) goto L53
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_mdhd
            if (r1 == r0) goto L53
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_mvhd
            if (r1 == r0) goto L53
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_sidx
            if (r1 == r0) goto L53
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_stsd
            if (r1 == r0) goto L53
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_tfdt
            if (r1 == r0) goto L53
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_tfhd
            if (r1 == r0) goto L53
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_tkhd
            if (r1 == r0) goto L53
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_trex
            if (r1 == r0) goto L53
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_trun
            if (r1 == r0) goto L53
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_pssh
            if (r1 == r0) goto L53
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_saiz
            if (r1 == r0) goto L53
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_saio
            if (r1 == r0) goto L53
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_senc
            if (r1 == r0) goto L53
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_uuid
            if (r1 == r0) goto L53
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_sbgp
            if (r1 == r0) goto L53
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_sgpd
            if (r1 == r0) goto L53
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_elst
            if (r1 == r0) goto L53
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_mehd
            if (r1 == r0) goto L53
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom.TYPE_emsg
            if (r1 != r0) goto L51
            goto L53
        L51:
            r1 = 0
            goto L54
        L53:
            r1 = 1
        L54:
            return r1
    }

    @Override
    public final void init(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r4) {
            r3 = this;
            r3.extractorOutput = r4
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track r0 = r3.sideloadedTrack
            if (r0 == 0) goto L29
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle r1 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle
            int r0 = r0.type
            r2 = 0
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r4 = r4.track(r2, r0)
            r1.<init>(r4)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Track r4 = r3.sideloadedTrack
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.DefaultSampleValues r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.DefaultSampleValues
            r0.<init>(r2, r2, r2, r2)
            r1.init(r4, r0)
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle> r4 = r3.trackBundles
            r4.put(r2, r1)
            r3.maybeInitExtraTracks()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r4 = r3.extractorOutput
            r4.endTracks()
        L29:
            return
    }

    @Override
    public final int read(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r2, com.mbridge.msdk.playercommon.exoplayer2.extractor.PositionHolder r3) throws java.io.IOException, java.lang.InterruptedException {
            r1 = this;
        L0:
            int r3 = r1.parserState
            if (r3 == 0) goto L1a
            r0 = 1
            if (r3 == r0) goto L16
            r0 = 2
            if (r3 == r0) goto L12
            boolean r3 = r1.readSample(r2)
            if (r3 == 0) goto L0
            r2 = 0
            return r2
        L12:
            r1.readEncryptionData(r2)
            goto L0
        L16:
            r1.readAtomPayload(r2)
            goto L0
        L1a:
            boolean r3 = r1.readAtomHeader(r2)
            if (r3 != 0) goto L0
            r2 = -1
            return r2
    }

    @Override
    public final void release() {
            r0 = this;
            return
    }

    @Override
    public final void seek(long r3, long r5) {
            r2 = this;
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle> r3 = r2.trackBundles
            int r3 = r3.size()
            r4 = 0
            r0 = r4
        L8:
            if (r0 >= r3) goto L18
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle> r1 = r2.trackBundles
            java.lang.Object r1 = r1.valueAt(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$TrackBundle r1 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor.TrackBundle) r1
            r1.reset()
            int r0 = r0 + 1
            goto L8
        L18:
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor$MetadataSampleInfo> r3 = r2.pendingMetadataSampleInfos
            r3.clear()
            r2.pendingMetadataSampleBytes = r4
            r2.pendingSeekTimeUs = r5
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Atom$ContainerAtom> r3 = r2.containerAtoms
            r3.clear()
            r2.enterReadingAtomHeaderState()
            return
    }

    @Override
    public final boolean sniff(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r1) throws java.io.IOException, java.lang.InterruptedException {
            r0 = this;
            boolean r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Sniffer.sniffFragmented(r1)
            return r1
    }
}
