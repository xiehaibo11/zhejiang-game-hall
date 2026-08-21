package com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv;

public final class MatroskaExtractor implements com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor {
    private static final int BLOCK_STATE_DATA = 2;
    private static final int BLOCK_STATE_HEADER = 1;
    private static final int BLOCK_STATE_START = 0;
    private static final java.lang.String CODEC_ID_AAC = "A_AAC";
    private static final java.lang.String CODEC_ID_AC3 = "A_AC3";
    private static final java.lang.String CODEC_ID_ACM = "A_MS/ACM";
    private static final java.lang.String CODEC_ID_ASS = "S_TEXT/ASS";
    private static final java.lang.String CODEC_ID_DTS = "A_DTS";
    private static final java.lang.String CODEC_ID_DTS_EXPRESS = "A_DTS/EXPRESS";
    private static final java.lang.String CODEC_ID_DTS_LOSSLESS = "A_DTS/LOSSLESS";
    private static final java.lang.String CODEC_ID_DVBSUB = "S_DVBSUB";
    private static final java.lang.String CODEC_ID_E_AC3 = "A_EAC3";
    private static final java.lang.String CODEC_ID_FLAC = "A_FLAC";
    private static final java.lang.String CODEC_ID_FOURCC = "V_MS/VFW/FOURCC";
    private static final java.lang.String CODEC_ID_H264 = "V_MPEG4/ISO/AVC";
    private static final java.lang.String CODEC_ID_H265 = "V_MPEGH/ISO/HEVC";
    private static final java.lang.String CODEC_ID_MP2 = "A_MPEG/L2";
    private static final java.lang.String CODEC_ID_MP3 = "A_MPEG/L3";
    private static final java.lang.String CODEC_ID_MPEG2 = "V_MPEG2";
    private static final java.lang.String CODEC_ID_MPEG4_AP = "V_MPEG4/ISO/AP";
    private static final java.lang.String CODEC_ID_MPEG4_ASP = "V_MPEG4/ISO/ASP";
    private static final java.lang.String CODEC_ID_MPEG4_SP = "V_MPEG4/ISO/SP";
    private static final java.lang.String CODEC_ID_OPUS = "A_OPUS";
    private static final java.lang.String CODEC_ID_PCM_INT_LIT = "A_PCM/INT/LIT";
    private static final java.lang.String CODEC_ID_PGS = "S_HDMV/PGS";
    private static final java.lang.String CODEC_ID_SUBRIP = "S_TEXT/UTF8";
    private static final java.lang.String CODEC_ID_THEORA = "V_THEORA";
    private static final java.lang.String CODEC_ID_TRUEHD = "A_TRUEHD";
    private static final java.lang.String CODEC_ID_VOBSUB = "S_VOBSUB";
    private static final java.lang.String CODEC_ID_VORBIS = "A_VORBIS";
    private static final java.lang.String CODEC_ID_VP8 = "V_VP8";
    private static final java.lang.String CODEC_ID_VP9 = "V_VP9";
    private static final java.lang.String DOC_TYPE_MATROSKA = "matroska";
    private static final java.lang.String DOC_TYPE_WEBM = "webm";
    private static final int ENCRYPTION_IV_SIZE = 8;
    public static final com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorsFactory FACTORY = null;
    public static final int FLAG_DISABLE_SEEK_FOR_CUES = 1;
    private static final int FOURCC_COMPRESSION_DIVX = 1482049860;
    private static final int FOURCC_COMPRESSION_VC1 = 826496599;
    private static final int ID_AUDIO = 225;
    private static final int ID_AUDIO_BIT_DEPTH = 25188;
    private static final int ID_BLOCK = 161;
    private static final int ID_BLOCK_DURATION = 155;
    private static final int ID_BLOCK_GROUP = 160;
    private static final int ID_CHANNELS = 159;
    private static final int ID_CLUSTER = 524531317;
    private static final int ID_CODEC_DELAY = 22186;
    private static final int ID_CODEC_ID = 134;
    private static final int ID_CODEC_PRIVATE = 25506;
    private static final int ID_COLOUR = 21936;
    private static final int ID_COLOUR_PRIMARIES = 21947;
    private static final int ID_COLOUR_RANGE = 21945;
    private static final int ID_COLOUR_TRANSFER = 21946;
    private static final int ID_CONTENT_COMPRESSION = 20532;
    private static final int ID_CONTENT_COMPRESSION_ALGORITHM = 16980;
    private static final int ID_CONTENT_COMPRESSION_SETTINGS = 16981;
    private static final int ID_CONTENT_ENCODING = 25152;
    private static final int ID_CONTENT_ENCODINGS = 28032;
    private static final int ID_CONTENT_ENCODING_ORDER = 20529;
    private static final int ID_CONTENT_ENCODING_SCOPE = 20530;
    private static final int ID_CONTENT_ENCRYPTION = 20533;
    private static final int ID_CONTENT_ENCRYPTION_AES_SETTINGS = 18407;
    private static final int ID_CONTENT_ENCRYPTION_AES_SETTINGS_CIPHER_MODE = 18408;
    private static final int ID_CONTENT_ENCRYPTION_ALGORITHM = 18401;
    private static final int ID_CONTENT_ENCRYPTION_KEY_ID = 18402;
    private static final int ID_CUES = 475249515;
    private static final int ID_CUE_CLUSTER_POSITION = 241;
    private static final int ID_CUE_POINT = 187;
    private static final int ID_CUE_TIME = 179;
    private static final int ID_CUE_TRACK_POSITIONS = 183;
    private static final int ID_DEFAULT_DURATION = 2352003;
    private static final int ID_DISPLAY_HEIGHT = 21690;
    private static final int ID_DISPLAY_UNIT = 21682;
    private static final int ID_DISPLAY_WIDTH = 21680;
    private static final int ID_DOC_TYPE = 17026;
    private static final int ID_DOC_TYPE_READ_VERSION = 17029;
    private static final int ID_DURATION = 17545;
    private static final int ID_EBML = 440786851;
    private static final int ID_EBML_READ_VERSION = 17143;
    private static final int ID_FLAG_DEFAULT = 136;
    private static final int ID_FLAG_FORCED = 21930;
    private static final int ID_INFO = 357149030;
    private static final int ID_LANGUAGE = 2274716;
    private static final int ID_LUMNINANCE_MAX = 21977;
    private static final int ID_LUMNINANCE_MIN = 21978;
    private static final int ID_MASTERING_METADATA = 21968;
    private static final int ID_MAX_CLL = 21948;
    private static final int ID_MAX_FALL = 21949;
    private static final int ID_PIXEL_HEIGHT = 186;
    private static final int ID_PIXEL_WIDTH = 176;
    private static final int ID_PRIMARY_B_CHROMATICITY_X = 21973;
    private static final int ID_PRIMARY_B_CHROMATICITY_Y = 21974;
    private static final int ID_PRIMARY_G_CHROMATICITY_X = 21971;
    private static final int ID_PRIMARY_G_CHROMATICITY_Y = 21972;
    private static final int ID_PRIMARY_R_CHROMATICITY_X = 21969;
    private static final int ID_PRIMARY_R_CHROMATICITY_Y = 21970;
    private static final int ID_PROJECTION = 30320;
    private static final int ID_PROJECTION_PRIVATE = 30322;
    private static final int ID_REFERENCE_BLOCK = 251;
    private static final int ID_SAMPLING_FREQUENCY = 181;
    private static final int ID_SEEK = 19899;
    private static final int ID_SEEK_HEAD = 290298740;
    private static final int ID_SEEK_ID = 21419;
    private static final int ID_SEEK_POSITION = 21420;
    private static final int ID_SEEK_PRE_ROLL = 22203;
    private static final int ID_SEGMENT = 408125543;
    private static final int ID_SEGMENT_INFO = 357149030;
    private static final int ID_SIMPLE_BLOCK = 163;
    private static final int ID_STEREO_MODE = 21432;
    private static final int ID_TIMECODE_SCALE = 2807729;
    private static final int ID_TIME_CODE = 231;
    private static final int ID_TRACKS = 374648427;
    private static final int ID_TRACK_ENTRY = 174;
    private static final int ID_TRACK_NUMBER = 215;
    private static final int ID_TRACK_TYPE = 131;
    private static final int ID_VIDEO = 224;
    private static final int ID_WHITE_POINT_CHROMATICITY_X = 21975;
    private static final int ID_WHITE_POINT_CHROMATICITY_Y = 21976;
    private static final int LACING_EBML = 3;
    private static final int LACING_FIXED_SIZE = 2;
    private static final int LACING_NONE = 0;
    private static final int LACING_XIPH = 1;
    private static final int OPUS_MAX_INPUT_SIZE = 5760;
    private static final byte[] SSA_DIALOGUE_FORMAT = null;
    private static final byte[] SSA_PREFIX = null;
    private static final int SSA_PREFIX_END_TIMECODE_OFFSET = 21;
    private static final byte[] SSA_TIMECODE_EMPTY = null;
    private static final java.lang.String SSA_TIMECODE_FORMAT = "%01d:%02d:%02d:%02d";
    private static final long SSA_TIMECODE_LAST_VALUE_SCALING_FACTOR = 10000;
    private static final byte[] SUBRIP_PREFIX = null;
    private static final int SUBRIP_PREFIX_END_TIMECODE_OFFSET = 19;
    private static final byte[] SUBRIP_TIMECODE_EMPTY = null;
    private static final java.lang.String SUBRIP_TIMECODE_FORMAT = "%02d:%02d:%02d,%03d";
    private static final long SUBRIP_TIMECODE_LAST_VALUE_SCALING_FACTOR = 1000;
    private static final java.lang.String TAG = "MatroskaExtractor";
    private static final int TRACK_TYPE_AUDIO = 2;
    private static final int UNSET_ENTRY_ID = -1;
    private static final int VORBIS_MAX_INPUT_SIZE = 8192;
    private static final int WAVE_FORMAT_EXTENSIBLE = 65534;
    private static final int WAVE_FORMAT_PCM = 1;
    private static final int WAVE_FORMAT_SIZE = 18;
    private static final java.util.UUID WAVE_SUBFORMAT_PCM = null;
    private long blockDurationUs;
    private int blockFlags;
    private int blockLacingSampleCount;
    private int blockLacingSampleIndex;
    private int[] blockLacingSampleSizes;
    private int blockState;
    private long blockTimeUs;
    private int blockTrackNumber;
    private int blockTrackNumberLength;
    private long clusterTimecodeUs;
    private com.mbridge.msdk.playercommon.exoplayer2.util.LongArray cueClusterPositions;
    private com.mbridge.msdk.playercommon.exoplayer2.util.LongArray cueTimesUs;
    private long cuesContentPosition;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.Track currentTrack;
    private long durationTimecode;
    private long durationUs;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray encryptionInitializationVector;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray encryptionSubsampleData;
    private java.nio.ByteBuffer encryptionSubsampleDataBuffer;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput extractorOutput;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray nalLength;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray nalStartCode;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.EbmlReader reader;
    private int sampleBytesRead;
    private int sampleBytesWritten;
    private int sampleCurrentNalBytesRemaining;
    private boolean sampleEncodingHandled;
    private boolean sampleInitializationVectorRead;
    private int samplePartitionCount;
    private boolean samplePartitionCountRead;
    private boolean sampleRead;
    private boolean sampleSeenReferenceBlock;
    private byte sampleSignalByte;
    private boolean sampleSignalByteRead;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray sampleStrippedBytes;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray scratch;
    private int seekEntryId;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray seekEntryIdBytes;
    private long seekEntryPosition;
    private boolean seekForCues;
    private final boolean seekForCuesEnabled;
    private long seekPositionAfterBuildingCues;
    private boolean seenClusterPositionForCurrentCuePoint;
    private long segmentContentPosition;
    private long segmentContentSize;
    private boolean sentSeekMap;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray subtitleSample;
    private long timecodeScale;
    private final android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.Track> tracks;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.VarintReader varintReader;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray vorbisNumPageSamples;


    public @interface Flags {
    }

    private final class InnerEbmlReaderOutput implements com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.EbmlReaderOutput {
        final com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor this$0;

        private InnerEbmlReaderOutput(com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        InnerEbmlReaderOutput(com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor r1, com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void binaryElement(int r2, int r3, com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r4) throws java.io.IOException, java.lang.InterruptedException {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor r0 = r1.this$0
                r0.binaryElement(r2, r3, r4)
                return
        }

        @Override
        public final void endMasterElement(int r2) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor r0 = r1.this$0
                r0.endMasterElement(r2)
                return
        }

        @Override
        public final void floatElement(int r2, double r3) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor r0 = r1.this$0
                r0.floatElement(r2, r3)
                return
        }

        @Override
        public final int getElementType(int r1) {
                r0 = this;
                switch(r1) {
                    case 131: goto Ld;
                    case 134: goto Lb;
                    case 136: goto Ld;
                    case 155: goto Ld;
                    case 159: goto Ld;
                    case 160: goto L9;
                    case 161: goto L7;
                    case 163: goto L7;
                    case 174: goto L9;
                    case 176: goto Ld;
                    case 179: goto Ld;
                    case 181: goto L5;
                    case 183: goto L9;
                    case 186: goto Ld;
                    case 187: goto L9;
                    case 215: goto Ld;
                    case 224: goto L9;
                    case 225: goto L9;
                    case 231: goto Ld;
                    case 241: goto Ld;
                    case 251: goto Ld;
                    case 16980: goto Ld;
                    case 16981: goto L7;
                    case 17026: goto Lb;
                    case 17029: goto Ld;
                    case 17143: goto Ld;
                    case 17545: goto L5;
                    case 18401: goto Ld;
                    case 18402: goto L7;
                    case 18407: goto L9;
                    case 18408: goto Ld;
                    case 19899: goto L9;
                    case 20529: goto Ld;
                    case 20530: goto Ld;
                    case 20532: goto L9;
                    case 20533: goto L9;
                    case 21419: goto L7;
                    case 21420: goto Ld;
                    case 21432: goto Ld;
                    case 21680: goto Ld;
                    case 21682: goto Ld;
                    case 21690: goto Ld;
                    case 21930: goto Ld;
                    case 21936: goto L9;
                    case 21945: goto Ld;
                    case 21946: goto Ld;
                    case 21947: goto Ld;
                    case 21948: goto Ld;
                    case 21949: goto Ld;
                    case 21968: goto L9;
                    case 21969: goto L5;
                    case 21970: goto L5;
                    case 21971: goto L5;
                    case 21972: goto L5;
                    case 21973: goto L5;
                    case 21974: goto L5;
                    case 21975: goto L5;
                    case 21976: goto L5;
                    case 21977: goto L5;
                    case 21978: goto L5;
                    case 22186: goto Ld;
                    case 22203: goto Ld;
                    case 25152: goto L9;
                    case 25188: goto Ld;
                    case 25506: goto L7;
                    case 28032: goto L9;
                    case 30320: goto L9;
                    case 30322: goto L7;
                    case 2274716: goto Lb;
                    case 2352003: goto Ld;
                    case 2807729: goto Ld;
                    case 290298740: goto L9;
                    case 357149030: goto L9;
                    case 374648427: goto L9;
                    case 408125543: goto L9;
                    case 440786851: goto L9;
                    case 475249515: goto L9;
                    case 524531317: goto L9;
                    default: goto L3;
                }
            L3:
                r1 = 0
                return r1
            L5:
                r1 = 5
                return r1
            L7:
                r1 = 4
                return r1
            L9:
                r1 = 1
                return r1
            Lb:
                r1 = 3
                return r1
            Ld:
                r1 = 2
                return r1
        }

        @Override
        public final void integerElement(int r2, long r3) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor r0 = r1.this$0
                r0.integerElement(r2, r3)
                return
        }

        @Override
        public final boolean isLevel1Element(int r2) {
                r1 = this;
                r0 = 357149030(0x1549a966, float:4.072526E-26)
                if (r2 == r0) goto L17
                r0 = 524531317(0x1f43b675, float:4.144378E-20)
                if (r2 == r0) goto L17
                r0 = 475249515(0x1c53bb6b, float:7.0056276E-22)
                if (r2 == r0) goto L17
                r0 = 374648427(0x1654ae6b, float:1.718026E-25)
                if (r2 != r0) goto L15
                goto L17
            L15:
                r2 = 0
                goto L18
            L17:
                r2 = 1
            L18:
                return r2
        }

        @Override
        public final void startMasterElement(int r7, long r8, long r10) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
                r6 = this;
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor r0 = r6.this$0
                r1 = r7
                r2 = r8
                r4 = r10
                r0.startMasterElement(r1, r2, r4)
                return
        }

        @Override
        public final void stringElement(int r2, java.lang.String r3) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor r0 = r1.this$0
                r0.stringElement(r2, r3)
                return
        }
    }

    private static final class Track {
        private static final int DEFAULT_MAX_CLL = 1000;
        private static final int DEFAULT_MAX_FALL = 200;
        private static final int DISPLAY_UNIT_PIXELS = 0;
        private static final int MAX_CHROMATICITY = 50000;
        public int audioBitDepth;
        public int channelCount;
        public long codecDelayNs;
        public java.lang.String codecId;
        public byte[] codecPrivate;
        public int colorRange;
        public int colorSpace;
        public int colorTransfer;
        public com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput.CryptoData cryptoData;
        public int defaultSampleDurationNs;
        public int displayHeight;
        public int displayUnit;
        public int displayWidth;
        public com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData drmInitData;
        public boolean flagDefault;
        public boolean flagForced;
        public boolean hasColorInfo;
        public boolean hasContentEncryption;
        public int height;
        private java.lang.String language;
        public int maxContentLuminance;
        public int maxFrameAverageLuminance;
        public float maxMasteringLuminance;
        public float minMasteringLuminance;
        public int nalUnitLengthFieldLength;
        public int number;
        public com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput output;
        public float primaryBChromaticityX;
        public float primaryBChromaticityY;
        public float primaryGChromaticityX;
        public float primaryGChromaticityY;
        public float primaryRChromaticityX;
        public float primaryRChromaticityY;
        public byte[] projectionData;
        public int sampleRate;
        public byte[] sampleStrippedBytes;
        public long seekPreRollNs;
        public int stereoMode;
        public com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.TrueHdSampleRechunker trueHdSampleRechunker;
        public int type;
        public float whitePointChromaticityX;
        public float whitePointChromaticityY;
        public int width;

        private Track() {
                r4 = this;
                r4.<init>()
                r0 = -1
                r4.width = r0
                r4.height = r0
                r4.displayWidth = r0
                r4.displayHeight = r0
                r1 = 0
                r4.displayUnit = r1
                r2 = 0
                r4.projectionData = r2
                r4.stereoMode = r0
                r4.hasColorInfo = r1
                r4.colorSpace = r0
                r4.colorTransfer = r0
                r4.colorRange = r0
                r1 = 1000(0x3e8, float:1.401E-42)
                r4.maxContentLuminance = r1
                r1 = 200(0xc8, float:2.8E-43)
                r4.maxFrameAverageLuminance = r1
                r1 = -1082130432(0xffffffffbf800000, float:-1.0)
                r4.primaryRChromaticityX = r1
                r4.primaryRChromaticityY = r1
                r4.primaryGChromaticityX = r1
                r4.primaryGChromaticityY = r1
                r4.primaryBChromaticityX = r1
                r4.primaryBChromaticityY = r1
                r4.whitePointChromaticityX = r1
                r4.whitePointChromaticityY = r1
                r4.maxMasteringLuminance = r1
                r4.minMasteringLuminance = r1
                r1 = 1
                r4.channelCount = r1
                r4.audioBitDepth = r0
                r0 = 8000(0x1f40, float:1.121E-41)
                r4.sampleRate = r0
                r2 = 0
                r4.codecDelayNs = r2
                r4.seekPreRollNs = r2
                r4.flagDefault = r1
                java.lang.String r0 = "eng"
                r4.language = r0
                return
        }

        Track(com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        static java.lang.String access$202(com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.Track r0, java.lang.String r1) {
                r0.language = r1
                return r1
        }

        private byte[] getHdrStaticInfo() {
                r5 = this;
                float r0 = r5.primaryRChromaticityX
                r1 = -1082130432(0xffffffffbf800000, float:-1.0)
                int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
                if (r0 == 0) goto Lb5
                float r0 = r5.primaryRChromaticityY
                int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
                if (r0 == 0) goto Lb5
                float r0 = r5.primaryGChromaticityX
                int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
                if (r0 == 0) goto Lb5
                float r0 = r5.primaryGChromaticityY
                int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
                if (r0 == 0) goto Lb5
                float r0 = r5.primaryBChromaticityX
                int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
                if (r0 == 0) goto Lb5
                float r0 = r5.primaryBChromaticityY
                int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
                if (r0 == 0) goto Lb5
                float r0 = r5.whitePointChromaticityX
                int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
                if (r0 == 0) goto Lb5
                float r0 = r5.whitePointChromaticityY
                int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
                if (r0 == 0) goto Lb5
                float r0 = r5.maxMasteringLuminance
                int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
                if (r0 == 0) goto Lb5
                float r0 = r5.minMasteringLuminance
                int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
                if (r0 != 0) goto L3f
                goto Lb5
            L3f:
                r0 = 25
                byte[] r0 = new byte[r0]
                java.nio.ByteBuffer r1 = java.nio.ByteBuffer.wrap(r0)
                r2 = 0
                r1.put(r2)
                float r2 = r5.primaryRChromaticityX
                r3 = 1195593728(0x47435000, float:50000.0)
                float r2 = r2 * r3
                r4 = 1056964608(0x3f000000, float:0.5)
                float r2 = r2 + r4
                int r2 = (int) r2
                short r2 = (short) r2
                r1.putShort(r2)
                float r2 = r5.primaryRChromaticityY
                float r2 = r2 * r3
                float r2 = r2 + r4
                int r2 = (int) r2
                short r2 = (short) r2
                r1.putShort(r2)
                float r2 = r5.primaryGChromaticityX
                float r2 = r2 * r3
                float r2 = r2 + r4
                int r2 = (int) r2
                short r2 = (short) r2
                r1.putShort(r2)
                float r2 = r5.primaryGChromaticityY
                float r2 = r2 * r3
                float r2 = r2 + r4
                int r2 = (int) r2
                short r2 = (short) r2
                r1.putShort(r2)
                float r2 = r5.primaryBChromaticityX
                float r2 = r2 * r3
                float r2 = r2 + r4
                int r2 = (int) r2
                short r2 = (short) r2
                r1.putShort(r2)
                float r2 = r5.primaryBChromaticityY
                float r2 = r2 * r3
                float r2 = r2 + r4
                int r2 = (int) r2
                short r2 = (short) r2
                r1.putShort(r2)
                float r2 = r5.whitePointChromaticityX
                float r2 = r2 * r3
                float r2 = r2 + r4
                int r2 = (int) r2
                short r2 = (short) r2
                r1.putShort(r2)
                float r2 = r5.whitePointChromaticityY
                float r2 = r2 * r3
                float r2 = r2 + r4
                int r2 = (int) r2
                short r2 = (short) r2
                r1.putShort(r2)
                float r2 = r5.maxMasteringLuminance
                float r2 = r2 + r4
                int r2 = (int) r2
                short r2 = (short) r2
                r1.putShort(r2)
                float r2 = r5.minMasteringLuminance
                float r2 = r2 + r4
                int r2 = (int) r2
                short r2 = (short) r2
                r1.putShort(r2)
                int r2 = r5.maxContentLuminance
                short r2 = (short) r2
                r1.putShort(r2)
                int r2 = r5.maxFrameAverageLuminance
                short r2 = (short) r2
                r1.putShort(r2)
                return r0
            Lb5:
                r0 = 0
                return r0
        }

        private static android.util.Pair<java.lang.String, java.util.List<byte[]>> parseFourCcPrivate(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
                r0 = 16
                r6.skipBytes(r0)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L71
                long r0 = r6.readLittleEndianUnsignedInt()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L71
                r2 = 1482049860(0x58564944, double:7.322299212E-315)
                int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                r3 = 0
                if (r2 != 0) goto L19
                android.util.Pair r6 = new android.util.Pair     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L71
                java.lang.String r0 = "video/3gpp"
                r6.<init>(r0, r3)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L71
                return r6
            L19:
                r4 = 826496599(0x31435657, double:4.08343576E-315)
                int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
                if (r0 != 0) goto L62
                int r0 = r6.getPosition()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L71
                int r0 = r0 + 20
                byte[] r6 = r6.data     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L71
            L28:
                int r1 = r6.length     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L71
                int r1 = r1 + (-4)
                if (r0 >= r1) goto L5a
                r1 = r6[r0]     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L71
                if (r1 != 0) goto L57
                int r1 = r0 + 1
                r1 = r6[r1]     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L71
                if (r1 != 0) goto L57
                int r1 = r0 + 2
                r1 = r6[r1]     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L71
                r2 = 1
                if (r1 != r2) goto L57
                int r1 = r0 + 3
                r1 = r6[r1]     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L71
                r2 = 15
                if (r1 != r2) goto L57
                int r1 = r6.length     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L71
                byte[] r6 = java.util.Arrays.copyOfRange(r6, r0, r1)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L71
                android.util.Pair r0 = new android.util.Pair     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L71
                java.lang.String r1 = "video/wvc1"
                java.util.List r6 = java.util.Collections.singletonList(r6)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L71
                r0.<init>(r1, r6)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L71
                return r0
            L57:
                int r0 = r0 + 1
                goto L28
            L5a:
                com.mbridge.msdk.playercommon.exoplayer2.ParserException r6 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L71
                java.lang.String r0 = "Failed to find FourCC VC1 initialization data"
                r6.<init>(r0)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L71
                throw r6     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L71
            L62:
                java.lang.String r6 = "MatroskaExtractor"
                java.lang.String r0 = "Unknown FourCC. Setting mimeType to video/x-unknown"
                android.util.Log.w(r6, r0)
                android.util.Pair r6 = new android.util.Pair
                java.lang.String r0 = "video/x-unknown"
                r6.<init>(r0, r3)
                return r6
            L71:
                com.mbridge.msdk.playercommon.exoplayer2.ParserException r6 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
                java.lang.String r0 = "Error parsing FourCC private data"
                r6.<init>(r0)
                throw r6
        }

        private static boolean parseMsAcmCodecPrivate(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r8) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
                int r0 = r8.readLittleEndianUnsignedShort()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L37
                r1 = 1
                if (r0 != r1) goto L8
                return r1
            L8:
                r2 = 65534(0xfffe, float:9.1833E-41)
                r3 = 0
                if (r0 != r2) goto L36
                r0 = 24
                r8.setPosition(r0)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L37
                long r4 = r8.readLong()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L37
                java.util.UUID r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.access$400()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L37
                long r6 = r0.getMostSignificantBits()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L37
                int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
                if (r0 != 0) goto L34
                long r4 = r8.readLong()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L37
                java.util.UUID r8 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.access$400()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L37
                long r6 = r8.getLeastSignificantBits()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L37
                int r8 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
                if (r8 != 0) goto L34
                goto L35
            L34:
                r1 = r3
            L35:
                return r1
            L36:
                return r3
            L37:
                com.mbridge.msdk.playercommon.exoplayer2.ParserException r8 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
                java.lang.String r0 = "Error parsing MS/ACM codec private"
                r8.<init>(r0)
                throw r8
        }

        private static java.util.List<byte[]> parseVorbisCodecPrivate(byte[] r9) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
                java.lang.String r0 = "Error parsing vorbis codec private"
                r1 = 0
                r2 = r9[r1]     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
                r3 = 2
                if (r2 != r3) goto L65
                r2 = 1
                r5 = r1
                r4 = r2
            Lb:
                r6 = r9[r4]     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
                r7 = -1
                if (r6 != r7) goto L15
                int r5 = r5 + 255
                int r4 = r4 + 1
                goto Lb
            L15:
                int r6 = r4 + 1
                r4 = r9[r4]     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
                int r5 = r5 + r4
                r4 = r1
            L1b:
                r8 = r9[r6]     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
                if (r8 != r7) goto L24
                int r4 = r4 + 255
                int r6 = r6 + 1
                goto L1b
            L24:
                int r7 = r6 + 1
                r6 = r9[r6]     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
                int r4 = r4 + r6
                r6 = r9[r7]     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
                if (r6 != r2) goto L5f
                byte[] r2 = new byte[r5]     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
                java.lang.System.arraycopy(r9, r7, r2, r1, r5)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
                int r7 = r7 + r5
                r5 = r9[r7]     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
                r6 = 3
                if (r5 != r6) goto L59
                int r7 = r7 + r4
                r4 = r9[r7]     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
                r5 = 5
                if (r4 != r5) goto L53
                int r4 = r9.length     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
                int r4 = r4 - r7
                byte[] r4 = new byte[r4]     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
                int r5 = r9.length     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
                int r5 = r5 - r7
                java.lang.System.arraycopy(r9, r7, r4, r1, r5)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
                java.util.ArrayList r9 = new java.util.ArrayList     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
                r9.<init>(r3)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
                r9.add(r2)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
                r9.add(r4)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
                return r9
            L53:
                com.mbridge.msdk.playercommon.exoplayer2.ParserException r9 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
                r9.<init>(r0)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
                throw r9     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
            L59:
                com.mbridge.msdk.playercommon.exoplayer2.ParserException r9 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
                r9.<init>(r0)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
                throw r9     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
            L5f:
                com.mbridge.msdk.playercommon.exoplayer2.ParserException r9 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
                r9.<init>(r0)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
                throw r9     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
            L65:
                com.mbridge.msdk.playercommon.exoplayer2.ParserException r9 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
                r9.<init>(r0)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
                throw r9     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L6b
            L6b:
                com.mbridge.msdk.playercommon.exoplayer2.ParserException r9 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
                r9.<init>(r0)
                throw r9
        }

        public final void initializeOutput(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r43, int r44) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
                r42 = this;
                r0 = r42
                java.lang.String r1 = r0.codecId
                int r2 = r1.hashCode()
                r3 = 4
                r5 = 1
                r6 = 0
                r7 = 2
                r8 = 3
                switch(r2) {
                    case -2095576542: goto L153;
                    case -2095575984: goto L149;
                    case -1985379776: goto L13e;
                    case -1784763192: goto L133;
                    case -1730367663: goto L128;
                    case -1482641358: goto L11d;
                    case -1482641357: goto L112;
                    case -1373388978: goto L107;
                    case -933872740: goto Lfc;
                    case -538363189: goto Lf1;
                    case -538363109: goto Le6;
                    case -425012669: goto Lda;
                    case -356037306: goto Lce;
                    case 62923557: goto Lc2;
                    case 62923603: goto Lb6;
                    case 62927045: goto Laa;
                    case 82338133: goto L9f;
                    case 82338134: goto L94;
                    case 99146302: goto L88;
                    case 444813526: goto L7c;
                    case 542569478: goto L70;
                    case 725957860: goto L64;
                    case 738597099: goto L58;
                    case 855502857: goto L4d;
                    case 1422270023: goto L41;
                    case 1809237540: goto L36;
                    case 1950749482: goto L2a;
                    case 1950789798: goto L1e;
                    case 1951062397: goto L12;
                    default: goto L10;
                }
            L10:
                goto L15d
            L12:
                java.lang.String r2 = "A_OPUS"
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L15d
                r1 = 11
                goto L15e
            L1e:
                java.lang.String r2 = "A_FLAC"
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L15d
                r1 = 21
                goto L15e
            L2a:
                java.lang.String r2 = "A_EAC3"
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L15d
                r1 = 16
                goto L15e
            L36:
                java.lang.String r2 = "V_MPEG2"
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L15d
                r1 = r7
                goto L15e
            L41:
                java.lang.String r2 = "S_TEXT/UTF8"
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L15d
                r1 = 24
                goto L15e
            L4d:
                java.lang.String r2 = "V_MPEGH/ISO/HEVC"
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L15d
                r1 = 7
                goto L15e
            L58:
                java.lang.String r2 = "S_TEXT/ASS"
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L15d
                r1 = 25
                goto L15e
            L64:
                java.lang.String r2 = "A_PCM/INT/LIT"
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L15d
                r1 = 23
                goto L15e
            L70:
                java.lang.String r2 = "A_DTS/EXPRESS"
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L15d
                r1 = 19
                goto L15e
            L7c:
                java.lang.String r2 = "V_THEORA"
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L15d
                r1 = 9
                goto L15e
            L88:
                java.lang.String r2 = "S_HDMV/PGS"
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L15d
                r1 = 27
                goto L15e
            L94:
                java.lang.String r2 = "V_VP9"
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L15d
                r1 = r5
                goto L15e
            L9f:
                java.lang.String r2 = "V_VP8"
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L15d
                r1 = r6
                goto L15e
            Laa:
                java.lang.String r2 = "A_DTS"
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L15d
                r1 = 18
                goto L15e
            Lb6:
                java.lang.String r2 = "A_AC3"
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L15d
                r1 = 15
                goto L15e
            Lc2:
                java.lang.String r2 = "A_AAC"
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L15d
                r1 = 12
                goto L15e
            Lce:
                java.lang.String r2 = "A_DTS/LOSSLESS"
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L15d
                r1 = 20
                goto L15e
            Lda:
                java.lang.String r2 = "S_VOBSUB"
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L15d
                r1 = 26
                goto L15e
            Le6:
                java.lang.String r2 = "V_MPEG4/ISO/AVC"
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L15d
                r1 = 6
                goto L15e
            Lf1:
                java.lang.String r2 = "V_MPEG4/ISO/ASP"
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L15d
                r1 = r3
                goto L15e
            Lfc:
                java.lang.String r2 = "S_DVBSUB"
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L15d
                r1 = 28
                goto L15e
            L107:
                java.lang.String r2 = "V_MS/VFW/FOURCC"
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L15d
                r1 = 8
                goto L15e
            L112:
                java.lang.String r2 = "A_MPEG/L3"
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L15d
                r1 = 14
                goto L15e
            L11d:
                java.lang.String r2 = "A_MPEG/L2"
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L15d
                r1 = 13
                goto L15e
            L128:
                java.lang.String r2 = "A_VORBIS"
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L15d
                r1 = 10
                goto L15e
            L133:
                java.lang.String r2 = "A_TRUEHD"
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L15d
                r1 = 17
                goto L15e
            L13e:
                java.lang.String r2 = "A_MS/ACM"
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L15d
                r1 = 22
                goto L15e
            L149:
                java.lang.String r2 = "V_MPEG4/ISO/SP"
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L15d
                r1 = r8
                goto L15e
            L153:
                java.lang.String r2 = "V_MPEG4/ISO/AP"
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L15d
                r1 = 5
                goto L15e
            L15d:
                r1 = -1
            L15e:
                java.lang.String r2 = ". Setting mimeType to "
                java.lang.String r10 = "Unsupported PCM bit depth: "
                java.lang.String r11 = "application/dvbsubs"
                java.lang.String r12 = "application/pgs"
                java.lang.String r13 = "application/vobsub"
                java.lang.String r14 = "text/x-ssa"
                java.lang.String r15 = "application/x-subrip"
                java.lang.String r16 = "audio/raw"
                r17 = 4096(0x1000, float:5.74E-42)
                java.lang.String r9 = "MatroskaExtractor"
                java.lang.String r4 = "audio/x-unknown"
                r18 = 0
                switch(r1) {
                    case 0: goto L308;
                    case 1: goto L305;
                    case 2: goto L302;
                    case 3: goto L2f4;
                    case 4: goto L2f4;
                    case 5: goto L2f4;
                    case 6: goto L2dd;
                    case 7: goto L2c9;
                    case 8: goto L2b3;
                    case 9: goto L2b0;
                    case 10: goto L29f;
                    case 11: goto L25c;
                    case 12: goto L252;
                    case 13: goto L249;
                    case 14: goto L246;
                    case 15: goto L242;
                    case 16: goto L23e;
                    case 17: goto L233;
                    case 18: goto L22f;
                    case 19: goto L22f;
                    case 20: goto L22b;
                    case 21: goto L221;
                    case 22: goto L1da;
                    case 23: goto L1ae;
                    case 24: goto L1ab;
                    case 25: goto L1a8;
                    case 26: goto L19f;
                    case 27: goto L19c;
                    case 28: goto L181;
                    default: goto L179;
                }
            L179:
                com.mbridge.msdk.playercommon.exoplayer2.ParserException r1 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
                java.lang.String r2 = "Unrecognized codec identifier."
                r1.<init>(r2)
                throw r1
            L181:
                byte[] r1 = new byte[r3]
                byte[] r2 = r0.codecPrivate
                r3 = r2[r6]
                r1[r6] = r3
                r3 = r2[r5]
                r1[r5] = r3
                r3 = r2[r7]
                r1[r7] = r3
                r2 = r2[r8]
                r1[r8] = r2
                java.util.List r1 = java.util.Collections.singletonList(r1)
                r4 = r11
                goto L30e
            L19c:
                r4 = r12
                goto L30c
            L19f:
                byte[] r1 = r0.codecPrivate
                java.util.List r1 = java.util.Collections.singletonList(r1)
                r4 = r13
                goto L30e
            L1a8:
                r4 = r14
                goto L30c
            L1ab:
                r4 = r15
                goto L30c
            L1ae:
                int r1 = r0.audioBitDepth
                int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getPcmEncoding(r1)
                if (r1 != 0) goto L1d2
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r10)
                int r3 = r0.audioBitDepth
                r1.append(r3)
                r1.append(r2)
                r1.append(r4)
                java.lang.String r1 = r1.toString()
                android.util.Log.w(r9, r1)
                goto L30c
            L1d2:
                r26 = r1
                r4 = r16
                r1 = r18
                goto L310
            L1da:
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
                byte[] r3 = r0.codecPrivate
                r1.<init>(r3)
                boolean r1 = parseMsAcmCodecPrivate(r1)
                if (r1 == 0) goto L20b
                int r1 = r0.audioBitDepth
                int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getPcmEncoding(r1)
                if (r1 != 0) goto L1d2
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r10)
                int r3 = r0.audioBitDepth
                r1.append(r3)
                r1.append(r2)
                r1.append(r4)
                java.lang.String r1 = r1.toString()
                android.util.Log.w(r9, r1)
                goto L30c
            L20b:
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Non-PCM MS/ACM is unsupported. Setting mimeType to "
                r1.append(r2)
                r1.append(r4)
                java.lang.String r1 = r1.toString()
                android.util.Log.w(r9, r1)
                goto L30c
            L221:
                byte[] r1 = r0.codecPrivate
                java.util.List r1 = java.util.Collections.singletonList(r1)
                java.lang.String r16 = "audio/flac"
                goto L2f1
            L22b:
                java.lang.String r16 = "audio/vnd.dts.hd"
                goto L30a
            L22f:
                java.lang.String r16 = "audio/vnd.dts"
                goto L30a
            L233:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$TrueHdSampleRechunker r1 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$TrueHdSampleRechunker
                r1.<init>()
                r0.trueHdSampleRechunker = r1
                java.lang.String r16 = "audio/true-hd"
                goto L30a
            L23e:
                java.lang.String r16 = "audio/eac3"
                goto L30a
            L242:
                java.lang.String r16 = "audio/ac3"
                goto L30a
            L246:
                java.lang.String r16 = "audio/mpeg"
                goto L24b
            L249:
                java.lang.String r16 = "audio/mpeg-L2"
            L24b:
                r4 = r16
                r31 = r17
                r1 = r18
                goto L2ad
            L252:
                byte[] r1 = r0.codecPrivate
                java.util.List r1 = java.util.Collections.singletonList(r1)
                java.lang.String r16 = "audio/mp4a-latm"
                goto L2f1
            L25c:
                r17 = 5760(0x1680, float:8.071E-42)
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>(r8)
                byte[] r2 = r0.codecPrivate
                r1.add(r2)
                r2 = 8
                java.nio.ByteBuffer r3 = java.nio.ByteBuffer.allocate(r2)
                java.nio.ByteOrder r4 = java.nio.ByteOrder.nativeOrder()
                java.nio.ByteBuffer r3 = r3.order(r4)
                long r9 = r0.codecDelayNs
                java.nio.ByteBuffer r3 = r3.putLong(r9)
                byte[] r3 = r3.array()
                r1.add(r3)
                java.nio.ByteBuffer r2 = java.nio.ByteBuffer.allocate(r2)
                java.nio.ByteOrder r3 = java.nio.ByteOrder.nativeOrder()
                java.nio.ByteBuffer r2 = r2.order(r3)
                long r3 = r0.seekPreRollNs
                java.nio.ByteBuffer r2 = r2.putLong(r3)
                byte[] r2 = r2.array()
                r1.add(r2)
                java.lang.String r16 = "audio/opus"
                goto L2a9
            L29f:
                r17 = 8192(0x2000, float:1.148E-41)
                byte[] r1 = r0.codecPrivate
                java.util.List r1 = parseVorbisCodecPrivate(r1)
                java.lang.String r16 = "audio/vorbis"
            L2a9:
                r4 = r16
                r31 = r17
            L2ad:
                r26 = -1
                goto L312
            L2b0:
                java.lang.String r16 = "video/x-unknown"
                goto L30a
            L2b3:
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
                byte[] r2 = r0.codecPrivate
                r1.<init>(r2)
                android.util.Pair r1 = parseFourCcPrivate(r1)
                java.lang.Object r2 = r1.first
                r16 = r2
                java.lang.String r16 = (java.lang.String) r16
                java.lang.Object r1 = r1.second
                java.util.List r1 = (java.util.List) r1
                goto L2f1
            L2c9:
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
                byte[] r2 = r0.codecPrivate
                r1.<init>(r2)
                com.mbridge.msdk.playercommon.exoplayer2.video.HevcConfig r1 = com.mbridge.msdk.playercommon.exoplayer2.video.HevcConfig.parse(r1)
                java.util.List<byte[]> r2 = r1.initializationData
                int r1 = r1.nalUnitLengthFieldLength
                r0.nalUnitLengthFieldLength = r1
                java.lang.String r16 = "video/hevc"
                goto L2f0
            L2dd:
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
                byte[] r2 = r0.codecPrivate
                r1.<init>(r2)
                com.mbridge.msdk.playercommon.exoplayer2.video.AvcConfig r1 = com.mbridge.msdk.playercommon.exoplayer2.video.AvcConfig.parse(r1)
                java.util.List<byte[]> r2 = r1.initializationData
                int r1 = r1.nalUnitLengthFieldLength
                r0.nalUnitLengthFieldLength = r1
                java.lang.String r16 = "video/avc"
            L2f0:
                r1 = r2
            L2f1:
                r4 = r16
                goto L30e
            L2f4:
                byte[] r1 = r0.codecPrivate
                if (r1 != 0) goto L2fb
                r1 = r18
                goto L2ff
            L2fb:
                java.util.List r1 = java.util.Collections.singletonList(r1)
            L2ff:
                java.lang.String r16 = "video/mp4v-es"
                goto L2f1
            L302:
                java.lang.String r16 = "video/mpeg2"
                goto L30a
            L305:
                java.lang.String r16 = "video/x-vnd.on2.vp9"
                goto L30a
            L308:
                java.lang.String r16 = "video/x-vnd.on2.vp8"
            L30a:
                r4 = r16
            L30c:
                r1 = r18
            L30e:
                r26 = -1
            L310:
                r31 = -1
            L312:
                boolean r2 = r0.flagDefault
                r2 = r2 | r6
                boolean r3 = r0.flagForced
                if (r3 == 0) goto L31a
                r6 = r7
            L31a:
                r2 = r2 | r6
                boolean r3 = com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes.isAudio(r4)
                if (r3 == 0) goto L347
                java.lang.String r19 = java.lang.Integer.toString(r44)
                r21 = 0
                r22 = -1
                int r3 = r0.channelCount
                int r6 = r0.sampleRate
                com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r7 = r0.drmInitData
                java.lang.String r8 = r0.language
                r20 = r4
                r23 = r31
                r24 = r3
                r25 = r6
                r27 = r1
                r28 = r7
                r29 = r2
                r30 = r8
                com.mbridge.msdk.playercommon.exoplayer2.Format r1 = com.mbridge.msdk.playercommon.exoplayer2.Format.createAudioSampleFormat(r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30)
                goto L440
            L347:
                boolean r3 = com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes.isVideo(r4)
                if (r3 == 0) goto L3bc
                int r2 = r0.displayUnit
                if (r2 != 0) goto L363
                int r2 = r0.displayWidth
                r3 = -1
                if (r2 != r3) goto L358
                int r2 = r0.width
            L358:
                r0.displayWidth = r2
                int r2 = r0.displayHeight
                if (r2 != r3) goto L360
                int r2 = r0.height
            L360:
                r0.displayHeight = r2
                goto L364
            L363:
                r3 = -1
            L364:
                r2 = -1082130432(0xffffffffbf800000, float:-1.0)
                int r5 = r0.displayWidth
                if (r5 == r3) goto L377
                int r6 = r0.displayHeight
                if (r6 == r3) goto L377
                int r2 = r0.height
                int r2 = r2 * r5
                float r2 = (float) r2
                int r3 = r0.width
                int r3 = r3 * r6
                float r3 = (float) r3
                float r2 = r2 / r3
            L377:
                r37 = r2
                boolean r2 = r0.hasColorInfo
                if (r2 == 0) goto L38f
                byte[] r2 = r42.getHdrStaticInfo()
                com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo r3 = new com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo
                int r5 = r0.colorSpace
                int r6 = r0.colorRange
                int r8 = r0.colorTransfer
                r3.<init>(r5, r6, r8, r2)
                r40 = r3
                goto L391
            L38f:
                r40 = r18
            L391:
                java.lang.String r27 = java.lang.Integer.toString(r44)
                r29 = 0
                r30 = -1
                int r2 = r0.width
                int r3 = r0.height
                r34 = -1082130432(0xffffffffbf800000, float:-1.0)
                r36 = -1
                byte[] r5 = r0.projectionData
                int r6 = r0.stereoMode
                com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r8 = r0.drmInitData
                r28 = r4
                r32 = r2
                r33 = r3
                r35 = r1
                r38 = r5
                r39 = r6
                r41 = r8
                com.mbridge.msdk.playercommon.exoplayer2.Format r1 = com.mbridge.msdk.playercommon.exoplayer2.Format.createVideoSampleFormat(r27, r28, r29, r30, r31, r32, r33, r34, r35, r36, r37, r38, r39, r40, r41)
                r5 = r7
                goto L440
            L3bc:
                boolean r3 = r15.equals(r4)
                if (r3 == 0) goto L3d1
                java.lang.String r1 = java.lang.Integer.toString(r44)
                java.lang.String r3 = r0.language
                com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r5 = r0.drmInitData
                com.mbridge.msdk.playercommon.exoplayer2.Format r1 = com.mbridge.msdk.playercommon.exoplayer2.Format.createTextSampleFormat(r1, r4, r2, r3, r5)
            L3ce:
                r5 = r8
                goto L440
            L3d1:
                boolean r3 = r14.equals(r4)
                if (r3 == 0) goto L40a
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>(r7)
                byte[] r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.access$300()
                r1.add(r3)
                byte[] r3 = r0.codecPrivate
                r1.add(r3)
                java.lang.String r27 = java.lang.Integer.toString(r44)
                r29 = 0
                r30 = -1
                java.lang.String r3 = r0.language
                r33 = -1
                com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r5 = r0.drmInitData
                r35 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
                r28 = r4
                r31 = r2
                r32 = r3
                r34 = r5
                r37 = r1
                com.mbridge.msdk.playercommon.exoplayer2.Format r1 = com.mbridge.msdk.playercommon.exoplayer2.Format.createTextSampleFormat(r27, r28, r29, r30, r31, r32, r33, r34, r35, r37)
                goto L3ce
            L40a:
                boolean r3 = r13.equals(r4)
                if (r3 != 0) goto L425
                boolean r3 = r12.equals(r4)
                if (r3 != 0) goto L425
                boolean r3 = r11.equals(r4)
                if (r3 == 0) goto L41d
                goto L425
            L41d:
                com.mbridge.msdk.playercommon.exoplayer2.ParserException r1 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
                java.lang.String r2 = "Unexpected MIME type."
                r1.<init>(r2)
                throw r1
            L425:
                java.lang.String r27 = java.lang.Integer.toString(r44)
                r29 = 0
                r30 = -1
                java.lang.String r3 = r0.language
                com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r5 = r0.drmInitData
                r28 = r4
                r31 = r2
                r32 = r1
                r33 = r3
                r34 = r5
                com.mbridge.msdk.playercommon.exoplayer2.Format r1 = com.mbridge.msdk.playercommon.exoplayer2.Format.createImageSampleFormat(r27, r28, r29, r30, r31, r32, r33, r34)
                goto L3ce
            L440:
                int r2 = r0.number
                r3 = r43
                com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r2 = r3.track(r2, r5)
                r0.output = r2
                r2.format(r1)
                return
        }

        public final void outputPendingSampleMetadata() {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$TrueHdSampleRechunker r0 = r1.trueHdSampleRechunker
                if (r0 == 0) goto L7
                r0.outputPendingSampleMetadata(r1)
            L7:
                return
        }

        public final void reset() {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$TrueHdSampleRechunker r0 = r1.trueHdSampleRechunker
                if (r0 == 0) goto L7
                r0.reset()
            L7:
                return
        }
    }

    private static final class TrueHdSampleRechunker {
        private int blockFlags;
        private int chunkSize;
        private boolean foundSyncframe;
        private int sampleCount;
        private final byte[] syncframePrefix;
        private long timeUs;

        public TrueHdSampleRechunker() {
                r1 = this;
                r1.<init>()
                r0 = 10
                byte[] r0 = new byte[r0]
                r1.syncframePrefix = r0
                return
        }

        public final void outputPendingSampleMetadata(com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.Track r9) {
                r8 = this;
                boolean r0 = r8.foundSyncframe
                if (r0 == 0) goto L19
                int r0 = r8.sampleCount
                if (r0 <= 0) goto L19
                com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r1 = r9.output
                long r2 = r8.timeUs
                int r4 = r8.blockFlags
                int r5 = r8.chunkSize
                r6 = 0
                com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput$CryptoData r7 = r9.cryptoData
                r1.sampleMetadata(r2, r4, r5, r6, r7)
                r9 = 0
                r8.sampleCount = r9
            L19:
                return
        }

        public final void reset() {
                r1 = this;
                r0 = 0
                r1.foundSyncframe = r0
                return
        }

        public final void sampleMetadata(com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.Track r8, long r9) {
                r7 = this;
                boolean r0 = r7.foundSyncframe
                if (r0 != 0) goto L5
                return
            L5:
                int r0 = r7.sampleCount
                int r1 = r0 + 1
                r7.sampleCount = r1
                if (r0 != 0) goto Lf
                r7.timeUs = r9
            Lf:
                int r9 = r7.sampleCount
                r10 = 16
                if (r9 >= r10) goto L16
                return
            L16:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r0 = r8.output
                long r1 = r7.timeUs
                int r3 = r7.blockFlags
                int r4 = r7.chunkSize
                r5 = 0
                com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput$CryptoData r6 = r8.cryptoData
                r0.sampleMetadata(r1, r3, r4, r5, r6)
                r8 = 0
                r7.sampleCount = r8
                return
        }

        public final void startSample(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r4, int r5, int r6) throws java.io.IOException, java.lang.InterruptedException {
                r3 = this;
                boolean r0 = r3.foundSyncframe
                r1 = 0
                if (r0 != 0) goto L1e
                byte[] r0 = r3.syncframePrefix
                r2 = 10
                r4.peekFully(r0, r1, r2)
                r4.resetPeekPosition()
                byte[] r4 = r3.syncframePrefix
                int r4 = com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.parseTrueHdSyncframeAudioSampleCount(r4)
                r0 = -1
                if (r4 != r0) goto L19
                return
            L19:
                r4 = 1
                r3.foundSyncframe = r4
                r3.sampleCount = r1
            L1e:
                int r4 = r3.sampleCount
                if (r4 != 0) goto L26
                r3.blockFlags = r5
                r3.chunkSize = r1
            L26:
                int r4 = r3.chunkSize
                int r4 = r4 + r6
                r3.chunkSize = r4
                return
        }
    }

    static {
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.FACTORY = r0
            r0 = 32
            byte[] r1 = new byte[r0]
            r1 = {x0044: FILL_ARRAY_DATA , data: [49, 10, 48, 48, 58, 48, 48, 58, 48, 48, 44, 48, 48, 48, 32, 45, 45, 62, 32, 48, 48, 58, 48, 48, 58, 48, 48, 44, 48, 48, 48, 10} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.SUBRIP_PREFIX = r1
            r1 = 12
            byte[] r1 = new byte[r1]
            r1 = {x0058: FILL_ARRAY_DATA , data: [32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.SUBRIP_TIMECODE_EMPTY = r1
            java.lang.String r1 = "Format: Start, End, ReadOrder, Layer, Style, Name, MarginL, MarginR, MarginV, Effect, Text"
            byte[] r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getUtf8Bytes(r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.SSA_DIALOGUE_FORMAT = r1
            byte[] r0 = new byte[r0]
            r0 = {x0062: FILL_ARRAY_DATA , data: [68, 105, 97, 108, 111, 103, 117, 101, 58, 32, 48, 58, 48, 48, 58, 48, 48, 58, 48, 48, 44, 48, 58, 48, 48, 58, 48, 48, 58, 48, 48, 44} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.SSA_PREFIX = r0
            r0 = 10
            byte[] r0 = new byte[r0]
            r0 = {x0076: FILL_ARRAY_DATA , data: [32, 32, 32, 32, 32, 32, 32, 32, 32, 32} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.SSA_TIMECODE_EMPTY = r0
            java.util.UUID r0 = new java.util.UUID
            r1 = 72057594037932032(0x100000000001000, double:7.291122019563029E-304)
            r3 = -9223371306706625679(0x800000aa00389b71, double:-3.607411173533E-312)
            r0.<init>(r1, r3)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.WAVE_SUBFORMAT_PCM = r0
            return
    }

    public MatroskaExtractor() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public MatroskaExtractor(int r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.DefaultEbmlReader r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.DefaultEbmlReader
            r0.<init>()
            r1.<init>(r0, r2)
            return
    }

    MatroskaExtractor(com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.EbmlReader r5, int r6) {
            r4 = this;
            r4.<init>()
            r0 = -1
            r4.segmentContentPosition = r0
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r4.timecodeScale = r2
            r4.durationTimecode = r2
            r4.durationUs = r2
            r4.cuesContentPosition = r0
            r4.seekPositionAfterBuildingCues = r0
            r4.clusterTimecodeUs = r2
            r4.reader = r5
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$InnerEbmlReaderOutput r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$InnerEbmlReaderOutput
            r1 = 0
            r0.<init>(r4, r1)
            r5.init(r0)
            r5 = 1
            r6 = r6 & r5
            if (r6 != 0) goto L28
            goto L29
        L28:
            r5 = 0
        L29:
            r4.seekForCuesEnabled = r5
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.VarintReader r5 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.VarintReader
            r5.<init>()
            r4.varintReader = r5
            android.util.SparseArray r5 = new android.util.SparseArray
            r5.<init>()
            r4.tracks = r5
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r6 = 4
            r5.<init>(r6)
            r4.scratch = r5
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r6)
            r1 = -1
            java.nio.ByteBuffer r0 = r0.putInt(r1)
            byte[] r0 = r0.array()
            r5.<init>(r0)
            r4.vorbisNumPageSamples = r5
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r5.<init>(r6)
            r4.seekEntryIdBytes = r5
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            byte[] r0 = com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.NAL_START_CODE
            r5.<init>(r0)
            r4.nalStartCode = r5
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r5.<init>(r6)
            r4.nalLength = r5
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r5.<init>()
            r4.sampleStrippedBytes = r5
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r5.<init>()
            r4.subtitleSample = r5
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r6 = 8
            r5.<init>(r6)
            r4.encryptionInitializationVector = r5
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r5.<init>()
            r4.encryptionSubsampleData = r5
            return
    }

    static byte[] access$300() {
            byte[] r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.SSA_DIALOGUE_FORMAT
            return r0
    }

    static java.util.UUID access$400() {
            java.util.UUID r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.WAVE_SUBFORMAT_PCM
            return r0
    }

    private com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap buildSeekMap() {
            r12 = this;
            long r0 = r12.segmentContentPosition
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r1 = 0
            if (r0 == 0) goto L8a
            long r2 = r12.durationUs
            r4 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L8a
            com.mbridge.msdk.playercommon.exoplayer2.util.LongArray r0 = r12.cueTimesUs
            if (r0 == 0) goto L8a
            int r0 = r0.size()
            if (r0 == 0) goto L8a
            com.mbridge.msdk.playercommon.exoplayer2.util.LongArray r0 = r12.cueClusterPositions
            if (r0 == 0) goto L8a
            int r0 = r0.size()
            com.mbridge.msdk.playercommon.exoplayer2.util.LongArray r2 = r12.cueTimesUs
            int r2 = r2.size()
            if (r0 == r2) goto L2f
            goto L8a
        L2f:
            com.mbridge.msdk.playercommon.exoplayer2.util.LongArray r0 = r12.cueTimesUs
            int r0 = r0.size()
            int[] r2 = new int[r0]
            long[] r3 = new long[r0]
            long[] r4 = new long[r0]
            long[] r5 = new long[r0]
            r6 = 0
            r7 = r6
        L3f:
            if (r7 >= r0) goto L57
            com.mbridge.msdk.playercommon.exoplayer2.util.LongArray r8 = r12.cueTimesUs
            long r8 = r8.get(r7)
            r5[r7] = r8
            long r8 = r12.segmentContentPosition
            com.mbridge.msdk.playercommon.exoplayer2.util.LongArray r10 = r12.cueClusterPositions
            long r10 = r10.get(r7)
            long r8 = r8 + r10
            r3[r7] = r8
            int r7 = r7 + 1
            goto L3f
        L57:
            int r7 = r0 + (-1)
            if (r6 >= r7) goto L6e
            int r7 = r6 + 1
            r8 = r3[r7]
            r10 = r3[r6]
            long r8 = r8 - r10
            int r8 = (int) r8
            r2[r6] = r8
            r8 = r5[r7]
            r10 = r5[r6]
            long r8 = r8 - r10
            r4[r6] = r8
            r6 = r7
            goto L57
        L6e:
            long r8 = r12.segmentContentPosition
            long r10 = r12.segmentContentSize
            long r8 = r8 + r10
            r10 = r3[r7]
            long r8 = r8 - r10
            int r0 = (int) r8
            r2[r7] = r0
            long r8 = r12.durationUs
            r10 = r5[r7]
            long r8 = r8 - r10
            r4[r7] = r8
            r12.cueTimesUs = r1
            r12.cueClusterPositions = r1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ChunkIndex r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ChunkIndex
            r0.<init>(r2, r3, r4, r5)
            return r0
        L8a:
            r12.cueTimesUs = r1
            r12.cueClusterPositions = r1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$Unseekable r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$Unseekable
            long r1 = r12.durationUs
            r0.<init>(r1)
            return r0
    }

    private void commitSampleToOutput(com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.Track r16, long r17) {
            r15 = this;
            r7 = r15
            r8 = r16
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$TrueHdSampleRechunker r0 = r8.trueHdSampleRechunker
            if (r0 == 0) goto Lf
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$TrueHdSampleRechunker r0 = r8.trueHdSampleRechunker
            r9 = r17
            r0.sampleMetadata(r8, r9)
            goto L51
        Lf:
            r9 = r17
            java.lang.String r0 = r8.codecId
            java.lang.String r1 = "S_TEXT/UTF8"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L2a
            r3 = 19
            r4 = 1000(0x3e8, double:4.94E-321)
            byte[] r6 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.SUBRIP_TIMECODE_EMPTY
            java.lang.String r2 = "%02d:%02d:%02d,%03d"
            r0 = r15
            r1 = r16
            r0.commitSubtitleSample(r1, r2, r3, r4, r6)
            goto L42
        L2a:
            java.lang.String r0 = r8.codecId
            java.lang.String r1 = "S_TEXT/ASS"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L42
            r3 = 21
            r4 = 10000(0x2710, double:4.9407E-320)
            byte[] r6 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.SSA_TIMECODE_EMPTY
            java.lang.String r2 = "%01d:%02d:%02d:%02d"
            r0 = r15
            r1 = r16
            r0.commitSubtitleSample(r1, r2, r3, r4, r6)
        L42:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r0 = r8.output
            int r11 = r7.blockFlags
            int r12 = r7.sampleBytesWritten
            r13 = 0
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput$CryptoData r14 = r8.cryptoData
            r8 = r0
            r9 = r17
            r8.sampleMetadata(r9, r11, r12, r13, r14)
        L51:
            r0 = 1
            r7.sampleRead = r0
            r15.resetSample()
            return
    }

    private void commitSubtitleSample(com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.Track r10, java.lang.String r11, int r12, long r13, byte[] r15) {
            r9 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r9.subtitleSample
            byte[] r1 = r0.data
            long r2 = r9.blockDurationUs
            r4 = r11
            r5 = r12
            r6 = r13
            r8 = r15
            setSampleDuration(r1, r2, r4, r5, r6, r8)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r10 = r10.output
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r11 = r9.subtitleSample
            int r12 = r11.limit()
            r10.sampleData(r11, r12)
            int r10 = r9.sampleBytesWritten
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r11 = r9.subtitleSample
            int r11 = r11.limit()
            int r10 = r10 + r11
            r9.sampleBytesWritten = r10
            return
    }

    private static int[] ensureArrayCapacity(int[] r1, int r2) {
            if (r1 != 0) goto L5
            int[] r1 = new int[r2]
            return r1
        L5:
            int r0 = r1.length
            if (r0 < r2) goto L9
            return r1
        L9:
            int r1 = r1.length
            int r1 = r1 * 2
            int r1 = java.lang.Math.max(r1, r2)
            int[] r1 = new int[r1]
            return r1
    }

    private static boolean isCodecSupported(java.lang.String r1) {
            java.lang.String r0 = "V_VP8"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Leb
            java.lang.String r0 = "V_VP9"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Leb
            java.lang.String r0 = "V_MPEG2"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Leb
            java.lang.String r0 = "V_MPEG4/ISO/SP"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Leb
            java.lang.String r0 = "V_MPEG4/ISO/ASP"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Leb
            java.lang.String r0 = "V_MPEG4/ISO/AP"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Leb
            java.lang.String r0 = "V_MPEG4/ISO/AVC"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Leb
            java.lang.String r0 = "V_MPEGH/ISO/HEVC"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Leb
            java.lang.String r0 = "V_MS/VFW/FOURCC"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Leb
            java.lang.String r0 = "V_THEORA"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Leb
            java.lang.String r0 = "A_OPUS"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Leb
            java.lang.String r0 = "A_VORBIS"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Leb
            java.lang.String r0 = "A_AAC"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Leb
            java.lang.String r0 = "A_MPEG/L2"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Leb
            java.lang.String r0 = "A_MPEG/L3"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Leb
            java.lang.String r0 = "A_AC3"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Leb
            java.lang.String r0 = "A_EAC3"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Leb
            java.lang.String r0 = "A_TRUEHD"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Leb
            java.lang.String r0 = "A_DTS"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Leb
            java.lang.String r0 = "A_DTS/EXPRESS"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Leb
            java.lang.String r0 = "A_DTS/LOSSLESS"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Leb
            java.lang.String r0 = "A_FLAC"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Leb
            java.lang.String r0 = "A_MS/ACM"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Leb
            java.lang.String r0 = "A_PCM/INT/LIT"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Leb
            java.lang.String r0 = "S_TEXT/UTF8"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Leb
            java.lang.String r0 = "S_TEXT/ASS"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Leb
            java.lang.String r0 = "S_VOBSUB"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Leb
            java.lang.String r0 = "S_HDMV/PGS"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Leb
            java.lang.String r0 = "S_DVBSUB"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto Le9
            goto Leb
        Le9:
            r1 = 0
            goto Lec
        Leb:
            r1 = 1
        Lec:
            return r1
    }

    private boolean maybeSeekForCues(com.mbridge.msdk.playercommon.exoplayer2.extractor.PositionHolder r6, long r7) {
            r5 = this;
            boolean r0 = r5.seekForCues
            r1 = 1
            r2 = 0
            if (r0 == 0) goto Lf
            r5.seekPositionAfterBuildingCues = r7
            long r7 = r5.cuesContentPosition
            r6.position = r7
            r5.seekForCues = r2
            return r1
        Lf:
            boolean r7 = r5.sentSeekMap
            if (r7 == 0) goto L20
            long r7 = r5.seekPositionAfterBuildingCues
            r3 = -1
            int r0 = (r7 > r3 ? 1 : (r7 == r3 ? 0 : -1))
            if (r0 == 0) goto L20
            r6.position = r7
            r5.seekPositionAfterBuildingCues = r3
            return r1
        L20:
            return r2
    }

    private void readScratch(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r4, int r5) throws java.io.IOException, java.lang.InterruptedException {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r3.scratch
            int r0 = r0.limit()
            if (r0 < r5) goto L9
            return
        L9:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r3.scratch
            int r0 = r0.capacity()
            if (r0 >= r5) goto L2d
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r3.scratch
            byte[] r1 = r0.data
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r3.scratch
            byte[] r2 = r2.data
            int r2 = r2.length
            int r2 = r2 * 2
            int r2 = java.lang.Math.max(r2, r5)
            byte[] r1 = java.util.Arrays.copyOf(r1, r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r3.scratch
            int r2 = r2.limit()
            r0.reset(r1, r2)
        L2d:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r3.scratch
            byte[] r0 = r0.data
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r3.scratch
            int r1 = r1.limit()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r3.scratch
            int r2 = r2.limit()
            int r2 = r5 - r2
            r4.readFully(r0, r1, r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r3.scratch
            r4.setLimit(r5)
            return
    }

    private int readToOutput(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r2, com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r3, int r4) throws java.io.IOException, java.lang.InterruptedException {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r1.sampleStrippedBytes
            int r0 = r0.bytesLeft()
            if (r0 <= 0) goto L12
            int r2 = java.lang.Math.min(r4, r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r1.sampleStrippedBytes
            r3.sampleData(r4, r2)
            goto L17
        L12:
            r0 = 0
            int r2 = r3.sampleData(r2, r4, r0)
        L17:
            int r3 = r1.sampleBytesRead
            int r3 = r3 + r2
            r1.sampleBytesRead = r3
            int r3 = r1.sampleBytesWritten
            int r3 = r3 + r2
            r1.sampleBytesWritten = r3
            return r2
    }

    private void readToTarget(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r4, byte[] r5, int r6, int r7) throws java.io.IOException, java.lang.InterruptedException {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r3.sampleStrippedBytes
            int r0 = r0.bytesLeft()
            int r0 = java.lang.Math.min(r7, r0)
            int r1 = r6 + r0
            int r2 = r7 - r0
            r4.readFully(r5, r1, r2)
            if (r0 <= 0) goto L18
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r3.sampleStrippedBytes
            r4.readBytes(r5, r6, r0)
        L18:
            int r4 = r3.sampleBytesRead
            int r4 = r4 + r7
            r3.sampleBytesRead = r4
            return
    }

    private void resetSample() {
            r1 = this;
            r0 = 0
            r1.sampleBytesRead = r0
            r1.sampleBytesWritten = r0
            r1.sampleCurrentNalBytesRemaining = r0
            r1.sampleEncodingHandled = r0
            r1.sampleSignalByteRead = r0
            r1.samplePartitionCountRead = r0
            r1.samplePartitionCount = r0
            r1.sampleSignalByte = r0
            r1.sampleInitializationVectorRead = r0
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r1.sampleStrippedBytes
            r0.reset()
            return
    }

    private long scaleTimecodeToUs(long r7) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r6 = this;
            long r2 = r6.timecodeScale
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 == 0) goto L13
            r4 = 1000(0x3e8, double:4.94E-321)
            r0 = r7
            long r7 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.scaleLargeTimestamp(r0, r2, r4)
            return r7
        L13:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r7 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r8 = "Can't scale timecode prior to timecodeScale being set."
            r7.<init>(r8)
            throw r7
    }

    private static void setSampleDuration(byte[] r8, long r9, java.lang.String r11, int r12, long r13, byte[] r15) {
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r9 > r0 ? 1 : (r9 == r0 ? 0 : -1))
            r1 = 0
            if (r0 != 0) goto Lc
            r9 = r15
            goto L57
        Lc:
            r2 = 3600000000(0xd693a400, double:1.778636325E-314)
            long r2 = r9 / r2
            int r0 = (int) r2
            int r2 = r0 * 3600
            long r2 = (long) r2
            r4 = 1000000(0xf4240, double:4.940656E-318)
            long r2 = r2 * r4
            long r9 = r9 - r2
            r2 = 60000000(0x3938700, double:2.96439388E-316)
            long r2 = r9 / r2
            int r2 = (int) r2
            int r3 = r2 * 60
            long r6 = (long) r3
            long r6 = r6 * r4
            long r9 = r9 - r6
            long r6 = r9 / r4
            int r3 = (int) r6
            long r6 = (long) r3
            long r6 = r6 * r4
            long r9 = r9 - r6
            long r9 = r9 / r13
            int r9 = (int) r9
            java.util.Locale r10 = java.util.Locale.US
            r13 = 4
            java.lang.Object[] r13 = new java.lang.Object[r13]
            java.lang.Integer r14 = java.lang.Integer.valueOf(r0)
            r13[r1] = r14
            r14 = 1
            java.lang.Integer r0 = java.lang.Integer.valueOf(r2)
            r13[r14] = r0
            r14 = 2
            java.lang.Integer r0 = java.lang.Integer.valueOf(r3)
            r13[r14] = r0
            r14 = 3
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)
            r13[r14] = r9
            java.lang.String r9 = java.lang.String.format(r10, r11, r13)
            byte[] r9 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getUtf8Bytes(r9)
        L57:
            int r10 = r15.length
            java.lang.System.arraycopy(r9, r1, r8, r12, r10)
            return
    }

    private void writeSampleData(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r11, com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.Track r12, int r13) throws java.io.IOException, java.lang.InterruptedException {
            r10 = this;
            java.lang.String r0 = r12.codecId
            java.lang.String r1 = "S_TEXT/UTF8"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L10
            byte[] r12 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.SUBRIP_PREFIX
            r10.writeSubtitleSampleData(r11, r12, r13)
            return
        L10:
            java.lang.String r0 = r12.codecId
            java.lang.String r1 = "S_TEXT/ASS"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L20
            byte[] r12 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.SSA_PREFIX
            r10.writeSubtitleSampleData(r11, r12, r13)
            return
        L20:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r0 = r12.output
            boolean r1 = r10.sampleEncodingHandled
            r2 = 4
            r3 = 2
            r4 = 1
            r5 = 0
            if (r1 != 0) goto L175
            boolean r1 = r12.hasContentEncryption
            if (r1 == 0) goto L165
            int r1 = r10.blockFlags
            r6 = -1073741825(0xffffffffbfffffff, float:-1.9999999)
            r1 = r1 & r6
            r10.blockFlags = r1
            boolean r1 = r10.sampleSignalByteRead
            r6 = 128(0x80, float:1.8E-43)
            if (r1 != 0) goto L64
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r10.scratch
            byte[] r1 = r1.data
            r11.readFully(r1, r5, r4)
            int r1 = r10.sampleBytesRead
            int r1 = r1 + r4
            r10.sampleBytesRead = r1
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r10.scratch
            byte[] r1 = r1.data
            r1 = r1[r5]
            r1 = r1 & r6
            if (r1 == r6) goto L5c
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r10.scratch
            byte[] r1 = r1.data
            r1 = r1[r5]
            r10.sampleSignalByte = r1
            r10.sampleSignalByteRead = r4
            goto L64
        L5c:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r11 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r12 = "Extension bit is set in signal byte"
            r11.<init>(r12)
            throw r11
        L64:
            byte r1 = r10.sampleSignalByte
            r1 = r1 & r4
            if (r1 != r4) goto L6b
            r1 = r4
            goto L6c
        L6b:
            r1 = r5
        L6c:
            if (r1 == 0) goto L173
            byte r1 = r10.sampleSignalByte
            r1 = r1 & r3
            if (r1 != r3) goto L75
            r1 = r4
            goto L76
        L75:
            r1 = r5
        L76:
            int r7 = r10.blockFlags
            r8 = 1073741824(0x40000000, float:2.0)
            r7 = r7 | r8
            r10.blockFlags = r7
            boolean r7 = r10.sampleInitializationVectorRead
            if (r7 != 0) goto Lbb
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7 = r10.encryptionInitializationVector
            byte[] r7 = r7.data
            r8 = 8
            r11.readFully(r7, r5, r8)
            int r7 = r10.sampleBytesRead
            int r7 = r7 + r8
            r10.sampleBytesRead = r7
            r10.sampleInitializationVectorRead = r4
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7 = r10.scratch
            byte[] r7 = r7.data
            if (r1 == 0) goto L98
            goto L99
        L98:
            r6 = r5
        L99:
            r6 = r6 | r8
            byte r6 = (byte) r6
            r7[r5] = r6
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6 = r10.scratch
            r6.setPosition(r5)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6 = r10.scratch
            r0.sampleData(r6, r4)
            int r6 = r10.sampleBytesWritten
            int r6 = r6 + r4
            r10.sampleBytesWritten = r6
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6 = r10.encryptionInitializationVector
            r6.setPosition(r5)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6 = r10.encryptionInitializationVector
            r0.sampleData(r6, r8)
            int r6 = r10.sampleBytesWritten
            int r6 = r6 + r8
            r10.sampleBytesWritten = r6
        Lbb:
            if (r1 == 0) goto L173
            boolean r1 = r10.samplePartitionCountRead
            if (r1 != 0) goto Ldc
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r10.scratch
            byte[] r1 = r1.data
            r11.readFully(r1, r5, r4)
            int r1 = r10.sampleBytesRead
            int r1 = r1 + r4
            r10.sampleBytesRead = r1
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r10.scratch
            r1.setPosition(r5)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r10.scratch
            int r1 = r1.readUnsignedByte()
            r10.samplePartitionCount = r1
            r10.samplePartitionCountRead = r4
        Ldc:
            int r1 = r10.samplePartitionCount
            int r1 = r1 * r2
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6 = r10.scratch
            r6.reset(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6 = r10.scratch
            byte[] r6 = r6.data
            r11.readFully(r6, r5, r1)
            int r6 = r10.sampleBytesRead
            int r6 = r6 + r1
            r10.sampleBytesRead = r6
            int r1 = r10.samplePartitionCount
            int r1 = r1 / r3
            int r1 = r1 + r4
            short r1 = (short) r1
            int r6 = r1 * 6
            int r6 = r6 + r3
            java.nio.ByteBuffer r7 = r10.encryptionSubsampleDataBuffer
            if (r7 == 0) goto L102
            int r7 = r7.capacity()
            if (r7 >= r6) goto L108
        L102:
            java.nio.ByteBuffer r7 = java.nio.ByteBuffer.allocate(r6)
            r10.encryptionSubsampleDataBuffer = r7
        L108:
            java.nio.ByteBuffer r7 = r10.encryptionSubsampleDataBuffer
            r7.position(r5)
            java.nio.ByteBuffer r7 = r10.encryptionSubsampleDataBuffer
            r7.putShort(r1)
            r1 = r5
            r7 = r1
        L114:
            int r8 = r10.samplePartitionCount
            if (r1 >= r8) goto L136
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r8 = r10.scratch
            int r8 = r8.readUnsignedIntToInt()
            int r9 = r1 % 2
            if (r9 != 0) goto L12b
            java.nio.ByteBuffer r9 = r10.encryptionSubsampleDataBuffer
            int r7 = r8 - r7
            short r7 = (short) r7
            r9.putShort(r7)
            goto L132
        L12b:
            java.nio.ByteBuffer r9 = r10.encryptionSubsampleDataBuffer
            int r7 = r8 - r7
            r9.putInt(r7)
        L132:
            int r1 = r1 + 1
            r7 = r8
            goto L114
        L136:
            int r1 = r10.sampleBytesRead
            int r1 = r13 - r1
            int r1 = r1 - r7
            int r8 = r8 % r3
            if (r8 != r4) goto L144
            java.nio.ByteBuffer r7 = r10.encryptionSubsampleDataBuffer
            r7.putInt(r1)
            goto L14f
        L144:
            java.nio.ByteBuffer r7 = r10.encryptionSubsampleDataBuffer
            short r1 = (short) r1
            r7.putShort(r1)
            java.nio.ByteBuffer r1 = r10.encryptionSubsampleDataBuffer
            r1.putInt(r5)
        L14f:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r10.encryptionSubsampleData
            java.nio.ByteBuffer r7 = r10.encryptionSubsampleDataBuffer
            byte[] r7 = r7.array()
            r1.reset(r7, r6)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r10.encryptionSubsampleData
            r0.sampleData(r1, r6)
            int r1 = r10.sampleBytesWritten
            int r1 = r1 + r6
            r10.sampleBytesWritten = r1
            goto L173
        L165:
            byte[] r1 = r12.sampleStrippedBytes
            if (r1 == 0) goto L173
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r10.sampleStrippedBytes
            byte[] r6 = r12.sampleStrippedBytes
            byte[] r7 = r12.sampleStrippedBytes
            int r7 = r7.length
            r1.reset(r6, r7)
        L173:
            r10.sampleEncodingHandled = r4
        L175:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r10.sampleStrippedBytes
            int r1 = r1.limit()
            int r13 = r13 + r1
            java.lang.String r1 = r12.codecId
            java.lang.String r6 = "V_MPEG4/ISO/AVC"
            boolean r1 = r6.equals(r1)
            if (r1 != 0) goto L1b3
            java.lang.String r1 = r12.codecId
            java.lang.String r6 = "V_MPEGH/ISO/HEVC"
            boolean r1 = r6.equals(r1)
            if (r1 == 0) goto L191
            goto L1b3
        L191:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$TrueHdSampleRechunker r1 = r12.trueHdSampleRechunker
            if (r1 == 0) goto L1a9
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r10.sampleStrippedBytes
            int r1 = r1.limit()
            if (r1 != 0) goto L19e
            goto L19f
        L19e:
            r4 = r5
        L19f:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r4)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$TrueHdSampleRechunker r1 = r12.trueHdSampleRechunker
            int r3 = r10.blockFlags
            r1.startSample(r11, r3, r13)
        L1a9:
            int r1 = r10.sampleBytesRead
            if (r1 >= r13) goto L1f3
            int r1 = r13 - r1
            r10.readToOutput(r11, r0, r1)
            goto L1a9
        L1b3:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r10.nalLength
            byte[] r1 = r1.data
            r1[r5] = r5
            r1[r4] = r5
            r1[r3] = r5
            int r3 = r12.nalUnitLengthFieldLength
            int r4 = r12.nalUnitLengthFieldLength
            int r4 = 4 - r4
        L1c3:
            int r6 = r10.sampleBytesRead
            if (r6 >= r13) goto L1f3
            int r6 = r10.sampleCurrentNalBytesRemaining
            if (r6 != 0) goto L1eb
            r10.readToTarget(r11, r1, r4, r3)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6 = r10.nalLength
            r6.setPosition(r5)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6 = r10.nalLength
            int r6 = r6.readUnsignedIntToInt()
            r10.sampleCurrentNalBytesRemaining = r6
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6 = r10.nalStartCode
            r6.setPosition(r5)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6 = r10.nalStartCode
            r0.sampleData(r6, r2)
            int r6 = r10.sampleBytesWritten
            int r6 = r6 + r2
            r10.sampleBytesWritten = r6
            goto L1c3
        L1eb:
            int r7 = r10.readToOutput(r11, r0, r6)
            int r6 = r6 - r7
            r10.sampleCurrentNalBytesRemaining = r6
            goto L1c3
        L1f3:
            java.lang.String r11 = r12.codecId
            java.lang.String r12 = "A_VORBIS"
            boolean r11 = r12.equals(r11)
            if (r11 == 0) goto L20c
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r11 = r10.vorbisNumPageSamples
            r11.setPosition(r5)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r11 = r10.vorbisNumPageSamples
            r0.sampleData(r11, r2)
            int r11 = r10.sampleBytesWritten
            int r11 = r11 + r2
            r10.sampleBytesWritten = r11
        L20c:
            return
    }

    private void writeSubtitleSampleData(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r5, byte[] r6, int r7) throws java.io.IOException, java.lang.InterruptedException {
            r4 = this;
            int r0 = r6.length
            int r0 = r0 + r7
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r4.subtitleSample
            int r1 = r1.capacity()
            if (r1 >= r0) goto L15
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r4.subtitleSample
            int r2 = r0 + r7
            byte[] r2 = java.util.Arrays.copyOf(r6, r2)
            r1.data = r2
            goto L1e
        L15:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r4.subtitleSample
            byte[] r1 = r1.data
            int r2 = r6.length
            r3 = 0
            java.lang.System.arraycopy(r6, r3, r1, r3, r2)
        L1e:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r4.subtitleSample
            byte[] r1 = r1.data
            int r6 = r6.length
            r5.readFully(r1, r6, r7)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r4.subtitleSample
            r5.reset(r0)
            return
    }

    final void binaryElement(int r20, int r21, com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r22) throws java.io.IOException, java.lang.InterruptedException {
            r19 = this;
            r0 = r19
            r1 = r20
            r2 = r21
            r3 = r22
            r4 = 161(0xa1, float:2.26E-43)
            r5 = 163(0xa3, float:2.28E-43)
            r6 = 4
            r7 = 0
            r8 = 1
            if (r1 == r4) goto L9a
            if (r1 == r5) goto L9a
            r4 = 16981(0x4255, float:2.3795E-41)
            if (r1 == r4) goto L8b
            r4 = 18402(0x47e2, float:2.5787E-41)
            if (r1 == r4) goto L7b
            r4 = 21419(0x53ab, float:3.0014E-41)
            if (r1 == r4) goto L5c
            r4 = 25506(0x63a2, float:3.5742E-41)
            if (r1 == r4) goto L4d
            r4 = 30322(0x7672, float:4.249E-41)
            if (r1 != r4) goto L36
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r1 = r0.currentTrack
            byte[] r4 = new byte[r2]
            r1.projectionData = r4
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r1 = r0.currentTrack
            byte[] r1 = r1.projectionData
            r3.readFully(r1, r7, r2)
            goto L2b3
        L36:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r2 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Unexpected id: "
            r3.append(r4)
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            r2.<init>(r1)
            throw r2
        L4d:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r1 = r0.currentTrack
            byte[] r4 = new byte[r2]
            r1.codecPrivate = r4
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r1 = r0.currentTrack
            byte[] r1 = r1.codecPrivate
            r3.readFully(r1, r7, r2)
            goto L2b3
        L5c:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r0.seekEntryIdBytes
            byte[] r1 = r1.data
            java.util.Arrays.fill(r1, r7)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r0.seekEntryIdBytes
            byte[] r1 = r1.data
            int r6 = r6 - r2
            r3.readFully(r1, r6, r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r0.seekEntryIdBytes
            r1.setPosition(r7)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r0.seekEntryIdBytes
            long r1 = r1.readUnsignedInt()
            int r1 = (int) r1
            r0.seekEntryId = r1
            goto L2b3
        L7b:
            byte[] r1 = new byte[r2]
            r3.readFully(r1, r7, r2)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r2 = r0.currentTrack
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput$CryptoData r3 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput$CryptoData
            r3.<init>(r8, r1, r7, r7)
            r2.cryptoData = r3
            goto L2b3
        L8b:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r1 = r0.currentTrack
            byte[] r4 = new byte[r2]
            r1.sampleStrippedBytes = r4
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r1 = r0.currentTrack
            byte[] r1 = r1.sampleStrippedBytes
            r3.readFully(r1, r7, r2)
            goto L2b3
        L9a:
            int r4 = r0.blockState
            r9 = 8
            if (r4 != 0) goto Lbf
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.VarintReader r4 = r0.varintReader
            long r10 = r4.readUnsignedVarint(r3, r7, r8, r9)
            int r4 = (int) r10
            r0.blockTrackNumber = r4
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.VarintReader r4 = r0.varintReader
            int r4 = r4.getLastLength()
            r0.blockTrackNumberLength = r4
            r10 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r0.blockDurationUs = r10
            r0.blockState = r8
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r0.scratch
            r4.reset()
        Lbf:
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track> r4 = r0.tracks
            int r10 = r0.blockTrackNumber
            java.lang.Object r4 = r4.get(r10)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r4 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.Track) r4
            if (r4 != 0) goto Ld5
            int r1 = r0.blockTrackNumberLength
            int r1 = r2 - r1
            r3.skipFully(r1)
            r0.blockState = r7
            return
        Ld5:
            int r10 = r0.blockState
            if (r10 != r8) goto L282
            r10 = 3
            r0.readScratch(r3, r10)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r11 = r0.scratch
            byte[] r11 = r11.data
            r12 = 2
            r11 = r11[r12]
            r11 = r11 & 6
            int r11 = r11 >> r8
            r13 = 255(0xff, float:3.57E-43)
            if (r11 != 0) goto Lfd
            r0.blockLacingSampleCount = r8
            int[] r6 = r0.blockLacingSampleSizes
            int[] r6 = ensureArrayCapacity(r6, r8)
            r0.blockLacingSampleSizes = r6
            int r11 = r0.blockTrackNumberLength
            int r2 = r2 - r11
            int r2 = r2 - r10
            r6[r7] = r2
            goto L210
        Lfd:
            if (r1 != r5) goto L27a
            r0.readScratch(r3, r6)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r14 = r0.scratch
            byte[] r14 = r14.data
            r14 = r14[r10]
            r14 = r14 & r13
            int r14 = r14 + r8
            r0.blockLacingSampleCount = r14
            int[] r15 = r0.blockLacingSampleSizes
            int[] r14 = ensureArrayCapacity(r15, r14)
            r0.blockLacingSampleSizes = r14
            if (r11 != r12) goto L122
            int r10 = r0.blockTrackNumberLength
            int r2 = r2 - r10
            int r2 = r2 - r6
            int r6 = r0.blockLacingSampleCount
            int r2 = r2 / r6
            java.util.Arrays.fill(r14, r7, r6, r2)
            goto L210
        L122:
            if (r11 != r8) goto L159
            r10 = r7
            r11 = r10
        L126:
            int r14 = r0.blockLacingSampleCount
            int r15 = r14 + (-1)
            if (r10 >= r15) goto L14d
            int[] r14 = r0.blockLacingSampleSizes
            r14[r10] = r7
        L130:
            int r6 = r6 + r8
            r0.readScratch(r3, r6)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r14 = r0.scratch
            byte[] r14 = r14.data
            int r15 = r6 + (-1)
            r14 = r14[r15]
            r14 = r14 & r13
            int[] r15 = r0.blockLacingSampleSizes
            r16 = r15[r10]
            int r16 = r16 + r14
            r15[r10] = r16
            if (r14 == r13) goto L130
            r14 = r15[r10]
            int r11 = r11 + r14
            int r10 = r10 + 1
            goto L126
        L14d:
            int[] r10 = r0.blockLacingSampleSizes
            int r14 = r14 - r8
            int r15 = r0.blockTrackNumberLength
            int r2 = r2 - r15
            int r2 = r2 - r6
            int r2 = r2 - r11
            r10[r14] = r2
            goto L210
        L159:
            if (r11 != r10) goto L263
            r10 = r7
            r11 = r10
        L15d:
            int r14 = r0.blockLacingSampleCount
            int r15 = r14 + (-1)
            if (r10 >= r15) goto L205
            int[] r14 = r0.blockLacingSampleSizes
            r14[r10] = r7
            int r6 = r6 + 1
            r0.readScratch(r3, r6)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r14 = r0.scratch
            byte[] r14 = r14.data
            int r15 = r6 + (-1)
            r14 = r14[r15]
            if (r14 == 0) goto L1fd
            r16 = 0
            r14 = r7
        L179:
            if (r14 >= r9) goto L1c8
            int r18 = 7 - r14
            int r5 = r8 << r18
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r12 = r0.scratch
            byte[] r12 = r12.data
            r12 = r12[r15]
            r12 = r12 & r5
            if (r12 == 0) goto L1be
            int r6 = r6 + r14
            r0.readScratch(r3, r6)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r12 = r0.scratch
            byte[] r12 = r12.data
            int r16 = r15 + 1
            r12 = r12[r15]
            r12 = r12 & r13
            int r5 = ~r5
            r5 = r5 & r12
            long r7 = (long) r5
            r5 = r16
        L19a:
            r16 = r7
            if (r5 >= r6) goto L1b0
            long r7 = r16 << r9
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r15 = r0.scratch
            byte[] r15 = r15.data
            int r16 = r5 + 1
            r5 = r15[r5]
            r5 = r5 & r13
            long r12 = (long) r5
            long r7 = r7 | r12
            r5 = r16
            r13 = 255(0xff, float:3.57E-43)
            goto L19a
        L1b0:
            if (r10 <= 0) goto L1c8
            int r14 = r14 * 7
            int r14 = r14 + 6
            r7 = 1
            long r12 = r7 << r14
            long r12 = r12 - r7
            long r16 = r16 - r12
            goto L1c8
        L1be:
            int r14 = r14 + 1
            r5 = 163(0xa3, float:2.28E-43)
            r7 = 0
            r8 = 1
            r12 = 2
            r13 = 255(0xff, float:3.57E-43)
            goto L179
        L1c8:
            r7 = r16
            r12 = -2147483648(0xffffffff80000000, double:NaN)
            int r5 = (r7 > r12 ? 1 : (r7 == r12 ? 0 : -1))
            if (r5 < 0) goto L1f5
            r12 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r5 = (r7 > r12 ? 1 : (r7 == r12 ? 0 : -1))
            if (r5 > 0) goto L1f5
            int r5 = (int) r7
            int[] r7 = r0.blockLacingSampleSizes
            if (r10 != 0) goto L1de
            goto L1e3
        L1de:
            int r8 = r10 + (-1)
            r8 = r7[r8]
            int r5 = r5 + r8
        L1e3:
            r7[r10] = r5
            int[] r5 = r0.blockLacingSampleSizes
            r5 = r5[r10]
            int r11 = r11 + r5
            int r10 = r10 + 1
            r5 = 163(0xa3, float:2.28E-43)
            r7 = 0
            r8 = 1
            r12 = 2
            r13 = 255(0xff, float:3.57E-43)
            goto L15d
        L1f5:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r1 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r2 = "EBML lacing sample size out of range."
            r1.<init>(r2)
            throw r1
        L1fd:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r1 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r2 = "No valid varint length mask found"
            r1.<init>(r2)
            throw r1
        L205:
            int[] r5 = r0.blockLacingSampleSizes
            r7 = 1
            int r14 = r14 - r7
            int r7 = r0.blockTrackNumberLength
            int r2 = r2 - r7
            int r2 = r2 - r6
            int r2 = r2 - r11
            r5[r14] = r2
        L210:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r0.scratch
            byte[] r2 = r2.data
            r5 = 0
            r2 = r2[r5]
            int r2 = r2 << r9
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r0.scratch
            byte[] r5 = r5.data
            r6 = 1
            r5 = r5[r6]
            r6 = 255(0xff, float:3.57E-43)
            r5 = r5 & r6
            r2 = r2 | r5
            long r5 = r0.clusterTimecodeUs
            long r7 = (long) r2
            long r7 = r0.scaleTimecodeToUs(r7)
            long r5 = r5 + r7
            r0.blockTimeUs = r5
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r0.scratch
            byte[] r2 = r2.data
            r5 = 2
            r2 = r2[r5]
            r2 = r2 & r9
            if (r2 != r9) goto L239
            r2 = 1
            goto L23a
        L239:
            r2 = 0
        L23a:
            int r6 = r4.type
            if (r6 == r5) goto L250
            r6 = 163(0xa3, float:2.28E-43)
            if (r1 != r6) goto L24e
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6 = r0.scratch
            byte[] r6 = r6.data
            r6 = r6[r5]
            r5 = 128(0x80, float:1.8E-43)
            r6 = r6 & r5
            if (r6 != r5) goto L24e
            goto L250
        L24e:
            r5 = 0
            goto L251
        L250:
            r5 = 1
        L251:
            if (r2 == 0) goto L256
            r2 = -2147483648(0xffffffff80000000, float:-0.0)
            goto L257
        L256:
            r2 = 0
        L257:
            r2 = r2 | r5
            r0.blockFlags = r2
            r2 = 2
            r0.blockState = r2
            r2 = 0
            r0.blockLacingSampleIndex = r2
            r2 = 163(0xa3, float:2.28E-43)
            goto L283
        L263:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r1 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Unexpected lacing value: "
            r2.append(r3)
            r2.append(r11)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
        L27a:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r1 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r2 = "Lacing only supported in SimpleBlocks."
            r1.<init>(r2)
            throw r1
        L282:
            r2 = r5
        L283:
            if (r1 != r2) goto L2ab
        L285:
            int r1 = r0.blockLacingSampleIndex
            int r2 = r0.blockLacingSampleCount
            if (r1 >= r2) goto L2a7
            int[] r2 = r0.blockLacingSampleSizes
            r1 = r2[r1]
            r0.writeSampleData(r3, r4, r1)
            long r1 = r0.blockTimeUs
            int r5 = r0.blockLacingSampleIndex
            int r6 = r4.defaultSampleDurationNs
            int r5 = r5 * r6
            int r5 = r5 / 1000
            long r5 = (long) r5
            long r1 = r1 + r5
            r0.commitSampleToOutput(r4, r1)
            int r1 = r0.blockLacingSampleIndex
            r2 = 1
            int r1 = r1 + r2
            r0.blockLacingSampleIndex = r1
            goto L285
        L2a7:
            r1 = 0
            r0.blockState = r1
            goto L2b3
        L2ab:
            r1 = 0
            int[] r2 = r0.blockLacingSampleSizes
            r1 = r2[r1]
            r0.writeSampleData(r3, r4, r1)
        L2b3:
            return
    }

    final void endMasterElement(int r8) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r7 = this;
            r0 = 160(0xa0, float:2.24E-43)
            r1 = 0
            r2 = 1
            if (r8 == r0) goto Lf0
            r0 = 174(0xae, float:2.44E-43)
            if (r8 == r0) goto Lce
            r0 = 19899(0x4dbb, float:2.7884E-41)
            r3 = 475249515(0x1c53bb6b, float:7.0056276E-22)
            if (r8 == r0) goto Lb4
            r0 = 25152(0x6240, float:3.5245E-41)
            if (r8 == r0) goto L83
            r0 = 28032(0x6d80, float:3.9281E-41)
            if (r8 == r0) goto L6d
            r0 = 357149030(0x1549a966, float:4.072526E-26)
            if (r8 == r0) goto L4f
            r0 = 374648427(0x1654ae6b, float:1.718026E-25)
            if (r8 == r0) goto L38
            if (r8 == r3) goto L27
            goto L110
        L27:
            boolean r8 = r7.sentSeekMap
            if (r8 != 0) goto L110
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r8 = r7.extractorOutput
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap r0 = r7.buildSeekMap()
            r8.seekMap(r0)
            r7.sentSeekMap = r2
            goto L110
        L38:
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track> r8 = r7.tracks
            int r8 = r8.size()
            if (r8 == 0) goto L47
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r8 = r7.extractorOutput
            r8.endTracks()
            goto L110
        L47:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r8 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r0 = "No valid tracks were found"
            r8.<init>(r0)
            throw r8
        L4f:
            long r0 = r7.timecodeScale
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r8 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r8 != 0) goto L5f
            r0 = 1000000(0xf4240, double:4.940656E-318)
            r7.timecodeScale = r0
        L5f:
            long r0 = r7.durationTimecode
            int r8 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r8 == 0) goto L110
            long r0 = r7.scaleTimecodeToUs(r0)
            r7.durationUs = r0
            goto L110
        L6d:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            boolean r8 = r8.hasContentEncryption
            if (r8 == 0) goto L110
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            byte[] r8 = r8.sampleStrippedBytes
            if (r8 != 0) goto L7b
            goto L110
        L7b:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r8 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r0 = "Combining encryption and compression is not supported"
            r8.<init>(r0)
            throw r8
        L83:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            boolean r8 = r8.hasContentEncryption
            if (r8 == 0) goto L110
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput$CryptoData r8 = r8.cryptoData
            if (r8 == 0) goto Lac
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r0 = new com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData[] r2 = new com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData[r2]
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData r3 = new com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData
            java.util.UUID r4 = com.mbridge.msdk.playercommon.exoplayer2.C.UUID_NIL
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r5 = r7.currentTrack
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput$CryptoData r5 = r5.cryptoData
            byte[] r5 = r5.encryptionKey
            java.lang.String r6 = "video/webm"
            r3.<init>(r4, r6, r5)
            r2[r1] = r3
            r0.<init>(r2)
            r8.drmInitData = r0
            goto L110
        Lac:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r8 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r0 = "Encrypted Track found but ContentEncKeyID was not found"
            r8.<init>(r0)
            throw r8
        Lb4:
            int r8 = r7.seekEntryId
            r0 = -1
            if (r8 == r0) goto Lc6
            long r0 = r7.seekEntryPosition
            r4 = -1
            int r2 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r2 == 0) goto Lc6
            if (r8 != r3) goto L110
            r7.cuesContentPosition = r0
            goto L110
        Lc6:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r8 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r0 = "Mandatory element SeekID or SeekPosition not found"
            r8.<init>(r0)
            throw r8
        Lce:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            java.lang.String r8 = r8.codecId
            boolean r8 = isCodecSupported(r8)
            if (r8 == 0) goto Lec
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r0 = r7.extractorOutput
            int r1 = r8.number
            r8.initializeOutput(r0, r1)
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track> r8 = r7.tracks
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r0 = r7.currentTrack
            int r0 = r0.number
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r1 = r7.currentTrack
            r8.put(r0, r1)
        Lec:
            r8 = 0
            r7.currentTrack = r8
            goto L110
        Lf0:
            int r8 = r7.blockState
            r0 = 2
            if (r8 == r0) goto Lf6
            return
        Lf6:
            boolean r8 = r7.sampleSeenReferenceBlock
            if (r8 != 0) goto Lff
            int r8 = r7.blockFlags
            r8 = r8 | r2
            r7.blockFlags = r8
        Lff:
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track> r8 = r7.tracks
            int r0 = r7.blockTrackNumber
            java.lang.Object r8 = r8.get(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.Track) r8
            long r2 = r7.blockTimeUs
            r7.commitSampleToOutput(r8, r2)
            r7.blockState = r1
        L110:
            return
    }

    final void floatElement(int r2, double r3) {
            r1 = this;
            r0 = 181(0xb5, float:2.54E-43)
            if (r2 == r0) goto L4c
            r0 = 17545(0x4489, float:2.4586E-41)
            if (r2 == r0) goto L48
            switch(r2) {
                case 21969: goto L42;
                case 21970: goto L3c;
                case 21971: goto L36;
                case 21972: goto L30;
                case 21973: goto L2a;
                case 21974: goto L24;
                case 21975: goto L1e;
                case 21976: goto L18;
                case 21977: goto L12;
                case 21978: goto Lc;
                default: goto Lb;
            }
        Lb:
            goto L51
        Lc:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r2 = r1.currentTrack
            float r3 = (float) r3
            r2.minMasteringLuminance = r3
            goto L51
        L12:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r2 = r1.currentTrack
            float r3 = (float) r3
            r2.maxMasteringLuminance = r3
            goto L51
        L18:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r2 = r1.currentTrack
            float r3 = (float) r3
            r2.whitePointChromaticityY = r3
            goto L51
        L1e:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r2 = r1.currentTrack
            float r3 = (float) r3
            r2.whitePointChromaticityX = r3
            goto L51
        L24:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r2 = r1.currentTrack
            float r3 = (float) r3
            r2.primaryBChromaticityY = r3
            goto L51
        L2a:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r2 = r1.currentTrack
            float r3 = (float) r3
            r2.primaryBChromaticityX = r3
            goto L51
        L30:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r2 = r1.currentTrack
            float r3 = (float) r3
            r2.primaryGChromaticityY = r3
            goto L51
        L36:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r2 = r1.currentTrack
            float r3 = (float) r3
            r2.primaryGChromaticityX = r3
            goto L51
        L3c:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r2 = r1.currentTrack
            float r3 = (float) r3
            r2.primaryRChromaticityY = r3
            goto L51
        L42:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r2 = r1.currentTrack
            float r3 = (float) r3
            r2.primaryRChromaticityX = r3
            goto L51
        L48:
            long r2 = (long) r3
            r1.durationTimecode = r2
            goto L51
        L4c:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r2 = r1.currentTrack
            int r3 = (int) r3
            r2.sampleRate = r3
        L51:
            return
    }

    @Override
    public final void init(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r1) {
            r0 = this;
            r0.extractorOutput = r1
            return
    }

    final void integerElement(int r8, long r9) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r7 = this;
            r0 = 20529(0x5031, float:2.8767E-41)
            java.lang.String r1 = " not supported"
            if (r8 == r0) goto L20b
            r0 = 20530(0x5032, float:2.8769E-41)
            r2 = 1
            if (r8 == r0) goto L1ec
            r0 = 0
            r4 = 3
            r5 = 2
            r6 = 1
            switch(r8) {
                case 131: goto L1e6;
                case 136: goto L1dc;
                case 155: goto L1d5;
                case 159: goto L1cf;
                case 176: goto L1c9;
                case 179: goto L1bf;
                case 186: goto L1b9;
                case 215: goto L1b3;
                case 231: goto L1ac;
                case 241: goto L19f;
                case 251: goto L19b;
                case 16980: goto L179;
                case 17029: goto L153;
                case 17143: goto L133;
                case 18401: goto L111;
                case 18408: goto Lf1;
                case 21420: goto Lea;
                case 21432: goto Lc5;
                case 21680: goto Lbe;
                case 21682: goto Lb7;
                case 21690: goto Lb0;
                case 21930: goto La5;
                case 22186: goto L9f;
                case 22203: goto L99;
                case 25188: goto L92;
                case 2352003: goto L8b;
                case 2807729: goto L87;
                default: goto L13;
            }
        L13:
            r0 = 7
            r1 = 6
            switch(r8) {
                case 21945: goto L74;
                case 21946: goto L51;
                case 21947: goto L28;
                case 21948: goto L21;
                case 21949: goto L1a;
                default: goto L18;
            }
        L18:
            goto L211
        L1a:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            int r9 = (int) r9
            r8.maxFrameAverageLuminance = r9
            goto L211
        L21:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            int r9 = (int) r9
            r8.maxContentLuminance = r9
            goto L211
        L28:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            r8.hasColorInfo = r6
            int r8 = (int) r9
            if (r8 == r6) goto L4b
            r9 = 9
            if (r8 == r9) goto L45
            r9 = 4
            if (r8 == r9) goto L3f
            r9 = 5
            if (r8 == r9) goto L3f
            if (r8 == r1) goto L3f
            if (r8 == r0) goto L3f
            goto L211
        L3f:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            r8.colorSpace = r5
            goto L211
        L45:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            r8.colorSpace = r1
            goto L211
        L4b:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            r8.colorSpace = r6
            goto L211
        L51:
            int r8 = (int) r9
            if (r8 == r6) goto L6e
            r9 = 16
            if (r8 == r9) goto L68
            r9 = 18
            if (r8 == r9) goto L62
            if (r8 == r1) goto L6e
            if (r8 == r0) goto L6e
            goto L211
        L62:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            r8.colorTransfer = r0
            goto L211
        L68:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            r8.colorTransfer = r1
            goto L211
        L6e:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            r8.colorTransfer = r4
            goto L211
        L74:
            int r8 = (int) r9
            if (r8 == r6) goto L81
            if (r8 == r5) goto L7b
            goto L211
        L7b:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            r8.colorRange = r6
            goto L211
        L81:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            r8.colorRange = r5
            goto L211
        L87:
            r7.timecodeScale = r9
            goto L211
        L8b:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            int r9 = (int) r9
            r8.defaultSampleDurationNs = r9
            goto L211
        L92:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            int r9 = (int) r9
            r8.audioBitDepth = r9
            goto L211
        L99:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            r8.seekPreRollNs = r9
            goto L211
        L9f:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            r8.codecDelayNs = r9
            goto L211
        La5:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            int r9 = (r9 > r2 ? 1 : (r9 == r2 ? 0 : -1))
            if (r9 != 0) goto Lac
            r0 = r6
        Lac:
            r8.flagForced = r0
            goto L211
        Lb0:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            int r9 = (int) r9
            r8.displayHeight = r9
            goto L211
        Lb7:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            int r9 = (int) r9
            r8.displayUnit = r9
            goto L211
        Lbe:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            int r9 = (int) r9
            r8.displayWidth = r9
            goto L211
        Lc5:
            int r8 = (int) r9
            if (r8 == 0) goto Le4
            if (r8 == r6) goto Lde
            if (r8 == r4) goto Ld8
            r9 = 15
            if (r8 == r9) goto Ld2
            goto L211
        Ld2:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            r8.stereoMode = r4
            goto L211
        Ld8:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            r8.stereoMode = r6
            goto L211
        Lde:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            r8.stereoMode = r5
            goto L211
        Le4:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            r8.stereoMode = r0
            goto L211
        Lea:
            long r0 = r7.segmentContentPosition
            long r9 = r9 + r0
            r7.seekEntryPosition = r9
            goto L211
        Lf1:
            int r8 = (r9 > r2 ? 1 : (r9 == r2 ? 0 : -1))
            if (r8 != 0) goto Lf7
            goto L211
        Lf7:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r8 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "AESSettingsCipherMode "
            r0.append(r2)
            r0.append(r9)
            r0.append(r1)
            java.lang.String r9 = r0.toString()
            r8.<init>(r9)
            throw r8
        L111:
            r2 = 5
            int r8 = (r9 > r2 ? 1 : (r9 == r2 ? 0 : -1))
            if (r8 != 0) goto L119
            goto L211
        L119:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r8 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "ContentEncAlgo "
            r0.append(r2)
            r0.append(r9)
            r0.append(r1)
            java.lang.String r9 = r0.toString()
            r8.<init>(r9)
            throw r8
        L133:
            int r8 = (r9 > r2 ? 1 : (r9 == r2 ? 0 : -1))
            if (r8 != 0) goto L139
            goto L211
        L139:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r8 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "EBMLReadVersion "
            r0.append(r2)
            r0.append(r9)
            r0.append(r1)
            java.lang.String r9 = r0.toString()
            r8.<init>(r9)
            throw r8
        L153:
            int r8 = (r9 > r2 ? 1 : (r9 == r2 ? 0 : -1))
            if (r8 < 0) goto L15f
            r2 = 2
            int r8 = (r9 > r2 ? 1 : (r9 == r2 ? 0 : -1))
            if (r8 > 0) goto L15f
            goto L211
        L15f:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r8 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "DocTypeReadVersion "
            r0.append(r2)
            r0.append(r9)
            r0.append(r1)
            java.lang.String r9 = r0.toString()
            r8.<init>(r9)
            throw r8
        L179:
            r2 = 3
            int r8 = (r9 > r2 ? 1 : (r9 == r2 ? 0 : -1))
            if (r8 != 0) goto L181
            goto L211
        L181:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r8 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "ContentCompAlgo "
            r0.append(r2)
            r0.append(r9)
            r0.append(r1)
            java.lang.String r9 = r0.toString()
            r8.<init>(r9)
            throw r8
        L19b:
            r7.sampleSeenReferenceBlock = r6
            goto L211
        L19f:
            boolean r8 = r7.seenClusterPositionForCurrentCuePoint
            if (r8 != 0) goto L211
            com.mbridge.msdk.playercommon.exoplayer2.util.LongArray r8 = r7.cueClusterPositions
            r8.add(r9)
            r7.seenClusterPositionForCurrentCuePoint = r6
            goto L211
        L1ac:
            long r8 = r7.scaleTimecodeToUs(r9)
            r7.clusterTimecodeUs = r8
            goto L211
        L1b3:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            int r9 = (int) r9
            r8.number = r9
            goto L211
        L1b9:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            int r9 = (int) r9
            r8.height = r9
            goto L211
        L1bf:
            com.mbridge.msdk.playercommon.exoplayer2.util.LongArray r8 = r7.cueTimesUs
            long r9 = r7.scaleTimecodeToUs(r9)
            r8.add(r9)
            goto L211
        L1c9:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            int r9 = (int) r9
            r8.width = r9
            goto L211
        L1cf:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            int r9 = (int) r9
            r8.channelCount = r9
            goto L211
        L1d5:
            long r8 = r7.scaleTimecodeToUs(r9)
            r7.blockDurationUs = r8
            goto L211
        L1dc:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            int r9 = (r9 > r2 ? 1 : (r9 == r2 ? 0 : -1))
            if (r9 != 0) goto L1e3
            r0 = r6
        L1e3:
            r8.flagDefault = r0
            goto L211
        L1e6:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r8 = r7.currentTrack
            int r9 = (int) r9
            r8.type = r9
            goto L211
        L1ec:
            int r8 = (r9 > r2 ? 1 : (r9 == r2 ? 0 : -1))
            if (r8 != 0) goto L1f1
            goto L211
        L1f1:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r8 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "ContentEncodingScope "
            r0.append(r2)
            r0.append(r9)
            r0.append(r1)
            java.lang.String r9 = r0.toString()
            r8.<init>(r9)
            throw r8
        L20b:
            r2 = 0
            int r8 = (r9 > r2 ? 1 : (r9 == r2 ? 0 : -1))
            if (r8 != 0) goto L212
        L211:
            return
        L212:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r8 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "ContentEncodingOrder "
            r0.append(r2)
            r0.append(r9)
            r0.append(r1)
            java.lang.String r9 = r0.toString()
            r8.<init>(r9)
            throw r8
    }

    @Override
    public final int read(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r6, com.mbridge.msdk.playercommon.exoplayer2.extractor.PositionHolder r7) throws java.io.IOException, java.lang.InterruptedException {
            r5 = this;
            r0 = 0
            r5.sampleRead = r0
            r1 = 1
            r2 = r1
        L5:
            if (r2 == 0) goto L1e
            boolean r3 = r5.sampleRead
            if (r3 != 0) goto L1e
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.EbmlReader r2 = r5.reader
            boolean r2 = r2.read(r6)
            if (r2 == 0) goto L5
            long r3 = r6.getPosition()
            boolean r3 = r5.maybeSeekForCues(r7, r3)
            if (r3 == 0) goto L5
            return r1
        L1e:
            if (r2 != 0) goto L38
        L20:
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track> r6 = r5.tracks
            int r6 = r6.size()
            if (r0 >= r6) goto L36
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track> r6 = r5.tracks
            java.lang.Object r6 = r6.valueAt(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r6 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.Track) r6
            r6.outputPendingSampleMetadata()
            int r0 = r0 + 1
            goto L20
        L36:
            r6 = -1
            return r6
        L38:
            return r0
    }

    @Override
    public final void release() {
            r0 = this;
            return
    }

    @Override
    public final void seek(long r1, long r3) {
            r0 = this;
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r0.clusterTimecodeUs = r1
            r1 = 0
            r0.blockState = r1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.EbmlReader r2 = r0.reader
            r2.reset()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.VarintReader r2 = r0.varintReader
            r2.reset()
            r0.resetSample()
        L17:
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track> r2 = r0.tracks
            int r2 = r2.size()
            if (r1 >= r2) goto L2d
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track> r2 = r0.tracks
            java.lang.Object r2 = r2.valueAt(r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r2 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.Track) r2
            r2.reset()
            int r1 = r1 + 1
            goto L17
        L2d:
            return
    }

    @Override
    public final boolean sniff(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r2) throws java.io.IOException, java.lang.InterruptedException {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.Sniffer r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.Sniffer
            r0.<init>()
            boolean r2 = r0.sniff(r2)
            return r2
    }

    final void startMasterElement(int r6, long r7, long r9) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r5 = this;
            r0 = 160(0xa0, float:2.24E-43)
            r1 = 0
            if (r6 == r0) goto L90
            r0 = 174(0xae, float:2.44E-43)
            if (r6 == r0) goto L87
            r0 = 187(0xbb, float:2.62E-43)
            if (r6 == r0) goto L84
            r0 = 19899(0x4dbb, float:2.7884E-41)
            r1 = -1
            if (r6 == r0) goto L7e
            r0 = 20533(0x5035, float:2.8773E-41)
            r3 = 1
            if (r6 == r0) goto L79
            r0 = 21968(0x55d0, float:3.0784E-41)
            if (r6 == r0) goto L74
            r0 = 408125543(0x18538067, float:2.7335937E-24)
            if (r6 == r0) goto L5c
            r7 = 475249515(0x1c53bb6b, float:7.0056276E-22)
            if (r6 == r7) goto L4d
            r7 = 524531317(0x1f43b675, float:4.144378E-20)
            if (r6 == r7) goto L2d
            goto L92
        L2d:
            boolean r6 = r5.sentSeekMap
            if (r6 != 0) goto L92
            boolean r6 = r5.seekForCuesEnabled
            if (r6 == 0) goto L3e
            long r6 = r5.cuesContentPosition
            int r6 = (r6 > r1 ? 1 : (r6 == r1 ? 0 : -1))
            if (r6 == 0) goto L3e
            r5.seekForCues = r3
            goto L92
        L3e:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r6 = r5.extractorOutput
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$Unseekable r7 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$Unseekable
            long r8 = r5.durationUs
            r7.<init>(r8)
            r6.seekMap(r7)
            r5.sentSeekMap = r3
            goto L92
        L4d:
            com.mbridge.msdk.playercommon.exoplayer2.util.LongArray r6 = new com.mbridge.msdk.playercommon.exoplayer2.util.LongArray
            r6.<init>()
            r5.cueTimesUs = r6
            com.mbridge.msdk.playercommon.exoplayer2.util.LongArray r6 = new com.mbridge.msdk.playercommon.exoplayer2.util.LongArray
            r6.<init>()
            r5.cueClusterPositions = r6
            goto L92
        L5c:
            long r3 = r5.segmentContentPosition
            int r6 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r6 == 0) goto L6f
            int r6 = (r3 > r7 ? 1 : (r3 == r7 ? 0 : -1))
            if (r6 != 0) goto L67
            goto L6f
        L67:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r6 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r7 = "Multiple Segment elements not supported"
            r6.<init>(r7)
            throw r6
        L6f:
            r5.segmentContentPosition = r7
            r5.segmentContentSize = r9
            goto L92
        L74:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r6 = r5.currentTrack
            r6.hasColorInfo = r3
            goto L92
        L79:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r6 = r5.currentTrack
            r6.hasContentEncryption = r3
            goto L92
        L7e:
            r6 = -1
            r5.seekEntryId = r6
            r5.seekEntryPosition = r1
            goto L92
        L84:
            r5.seenClusterPositionForCurrentCuePoint = r1
            goto L92
        L87:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r6 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track
            r7 = 0
            r6.<init>(r7)
            r5.currentTrack = r6
            goto L92
        L90:
            r5.sampleSeenReferenceBlock = r1
        L92:
            return
    }

    final void stringElement(int r3, java.lang.String r4) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r2 = this;
            r0 = 134(0x86, float:1.88E-43)
            if (r3 == r0) goto L41
            r0 = 17026(0x4282, float:2.3859E-41)
            if (r3 == r0) goto L14
            r0 = 2274716(0x22b59c, float:3.187556E-39)
            if (r3 == r0) goto Le
            goto L45
        Le:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r3 = r2.currentTrack
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor.Track.access$202(r3, r4)
            goto L45
        L14:
            java.lang.String r3 = "webm"
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L45
            java.lang.String r3 = "matroska"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L25
            goto L45
        L25:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r3 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "DocType "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = " not supported"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4)
            throw r3
        L41:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor$Track r3 = r2.currentTrack
            r3.codecId = r4
        L45:
            return
    }
}
