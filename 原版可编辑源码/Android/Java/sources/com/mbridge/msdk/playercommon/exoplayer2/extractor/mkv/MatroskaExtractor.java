package com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv;

import android.util.Log;
import android.util.Pair;
import android.util.SparseArray;
import com.mbridge.msdk.playercommon.exoplayer2.C;
import com.mbridge.msdk.playercommon.exoplayer2.Format;
import com.mbridge.msdk.playercommon.exoplayer2.ParserException;
import com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util;
import com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.ChunkIndex;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorsFactory;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.PositionHolder;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput;
import com.mbridge.msdk.playercommon.exoplayer2.util.Assertions;
import com.mbridge.msdk.playercommon.exoplayer2.util.LongArray;
import com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes;
import com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil;
import com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray;
import com.mbridge.msdk.playercommon.exoplayer2.util.Util;
import com.mbridge.msdk.playercommon.exoplayer2.video.AvcConfig;
import com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo;
import com.mbridge.msdk.playercommon.exoplayer2.video.HevcConfig;
import com.sigmob.sdk.archives.tar.e;
import java.io.IOException;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Locale;
import java.util.UUID;
import kotlin.UByte;
import kotlin.jvm.internal.ByteCompanionObject;
import org.bouncycastle.math.ec.Tnaf;

public final class MatroskaExtractor implements Extractor {
    private static final int BLOCK_STATE_DATA = 2;
    private static final int BLOCK_STATE_HEADER = 1;
    private static final int BLOCK_STATE_START = 0;
    private static final String CODEC_ID_AAC = "A_AAC";
    private static final String CODEC_ID_AC3 = "A_AC3";
    private static final String CODEC_ID_ACM = "A_MS/ACM";
    private static final String CODEC_ID_ASS = "S_TEXT/ASS";
    private static final String CODEC_ID_DTS = "A_DTS";
    private static final String CODEC_ID_DTS_EXPRESS = "A_DTS/EXPRESS";
    private static final String CODEC_ID_DTS_LOSSLESS = "A_DTS/LOSSLESS";
    private static final String CODEC_ID_DVBSUB = "S_DVBSUB";
    private static final String CODEC_ID_E_AC3 = "A_EAC3";
    private static final String CODEC_ID_FLAC = "A_FLAC";
    private static final String CODEC_ID_FOURCC = "V_MS/VFW/FOURCC";
    private static final String CODEC_ID_H264 = "V_MPEG4/ISO/AVC";
    private static final String CODEC_ID_H265 = "V_MPEGH/ISO/HEVC";
    private static final String CODEC_ID_MP2 = "A_MPEG/L2";
    private static final String CODEC_ID_MP3 = "A_MPEG/L3";
    private static final String CODEC_ID_MPEG2 = "V_MPEG2";
    private static final String CODEC_ID_MPEG4_AP = "V_MPEG4/ISO/AP";
    private static final String CODEC_ID_MPEG4_ASP = "V_MPEG4/ISO/ASP";
    private static final String CODEC_ID_MPEG4_SP = "V_MPEG4/ISO/SP";
    private static final String CODEC_ID_OPUS = "A_OPUS";
    private static final String CODEC_ID_PCM_INT_LIT = "A_PCM/INT/LIT";
    private static final String CODEC_ID_PGS = "S_HDMV/PGS";
    private static final String CODEC_ID_SUBRIP = "S_TEXT/UTF8";
    private static final String CODEC_ID_THEORA = "V_THEORA";
    private static final String CODEC_ID_TRUEHD = "A_TRUEHD";
    private static final String CODEC_ID_VOBSUB = "S_VOBSUB";
    private static final String CODEC_ID_VORBIS = "A_VORBIS";
    private static final String CODEC_ID_VP8 = "V_VP8";
    private static final String CODEC_ID_VP9 = "V_VP9";
    private static final String DOC_TYPE_MATROSKA = "matroska";
    private static final String DOC_TYPE_WEBM = "webm";
    private static final int ENCRYPTION_IV_SIZE = 8;
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
    private static final int SSA_PREFIX_END_TIMECODE_OFFSET = 21;
    private static final String SSA_TIMECODE_FORMAT = "%01d:%02d:%02d:%02d";
    private static final long SSA_TIMECODE_LAST_VALUE_SCALING_FACTOR = 10000;
    private static final int SUBRIP_PREFIX_END_TIMECODE_OFFSET = 19;
    private static final String SUBRIP_TIMECODE_FORMAT = "%02d:%02d:%02d,%03d";
    private static final long SUBRIP_TIMECODE_LAST_VALUE_SCALING_FACTOR = 1000;
    private static final String TAG = "MatroskaExtractor";
    private static final int TRACK_TYPE_AUDIO = 2;
    private static final int UNSET_ENTRY_ID = -1;
    private static final int VORBIS_MAX_INPUT_SIZE = 8192;
    private static final int WAVE_FORMAT_EXTENSIBLE = 65534;
    private static final int WAVE_FORMAT_PCM = 1;
    private static final int WAVE_FORMAT_SIZE = 18;
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
    private LongArray cueClusterPositions;
    private LongArray cueTimesUs;
    private long cuesContentPosition;
    private Track currentTrack;
    private long durationTimecode;
    private long durationUs;
    private final ParsableByteArray encryptionInitializationVector;
    private final ParsableByteArray encryptionSubsampleData;
    private ByteBuffer encryptionSubsampleDataBuffer;
    private ExtractorOutput extractorOutput;
    private final ParsableByteArray nalLength;
    private final ParsableByteArray nalStartCode;
    private final EbmlReader reader;
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
    private final ParsableByteArray sampleStrippedBytes;
    private final ParsableByteArray scratch;
    private int seekEntryId;
    private final ParsableByteArray seekEntryIdBytes;
    private long seekEntryPosition;
    private boolean seekForCues;
    private final boolean seekForCuesEnabled;
    private long seekPositionAfterBuildingCues;
    private boolean seenClusterPositionForCurrentCuePoint;
    private long segmentContentPosition;
    private long segmentContentSize;
    private boolean sentSeekMap;
    private final ParsableByteArray subtitleSample;
    private long timecodeScale;
    private final SparseArray<Track> tracks;
    private final VarintReader varintReader;
    private final ParsableByteArray vorbisNumPageSamples;
    public static final ExtractorsFactory FACTORY = new ExtractorsFactory() {
        @Override
        public final Extractor[] createExtractors() {
            return new Extractor[]{new MatroskaExtractor()};
        }
    };
    private static final byte[] SUBRIP_PREFIX = {e.I, 10, e.H, e.H, 58, e.H, e.H, 58, e.H, e.H, 44, e.H, e.H, e.H, 32, 45, 45, 62, 32, e.H, e.H, 58, e.H, e.H, 58, e.H, e.H, 44, e.H, e.H, e.H, 10};
    private static final byte[] SUBRIP_TIMECODE_EMPTY = {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32};
    private static final byte[] SSA_DIALOGUE_FORMAT = Util.getUtf8Bytes("Format: Start, End, ReadOrder, Layer, Style, Name, MarginL, MarginR, MarginV, Effect, Text");
    private static final byte[] SSA_PREFIX = {68, 105, 97, 108, 111, e.T, 117, 101, 58, 32, e.H, 58, e.H, e.H, 58, e.H, e.H, 58, e.H, e.H, 44, e.H, 58, e.H, e.H, 58, e.H, e.H, 58, e.H, e.H, 44};
    private static final byte[] SSA_TIMECODE_EMPTY = {32, 32, 32, 32, 32, 32, 32, 32, 32, 32};
    private static final UUID WAVE_SUBFORMAT_PCM = new UUID(72057594037932032L, -9223371306706625679L);

    public @interface Flags {
    }

    @Override
    public final void release() {
    }

    public MatroskaExtractor() {
        this(0);
    }

    public MatroskaExtractor(int i) {
        this(new DefaultEbmlReader(), i);
    }

    MatroskaExtractor(EbmlReader ebmlReader, int i) {
        this.segmentContentPosition = -1L;
        this.timecodeScale = -9223372036854775807L;
        this.durationTimecode = -9223372036854775807L;
        this.durationUs = -9223372036854775807L;
        this.cuesContentPosition = -1L;
        this.seekPositionAfterBuildingCues = -1L;
        this.clusterTimecodeUs = -9223372036854775807L;
        this.reader = ebmlReader;
        ebmlReader.init(new InnerEbmlReaderOutput());
        this.seekForCuesEnabled = (i & 1) == 0;
        this.varintReader = new VarintReader();
        this.tracks = new SparseArray<>();
        this.scratch = new ParsableByteArray(4);
        this.vorbisNumPageSamples = new ParsableByteArray(ByteBuffer.allocate(4).putInt(-1).array());
        this.seekEntryIdBytes = new ParsableByteArray(4);
        this.nalStartCode = new ParsableByteArray(NalUnitUtil.NAL_START_CODE);
        this.nalLength = new ParsableByteArray(4);
        this.sampleStrippedBytes = new ParsableByteArray();
        this.subtitleSample = new ParsableByteArray();
        this.encryptionInitializationVector = new ParsableByteArray(8);
        this.encryptionSubsampleData = new ParsableByteArray();
    }

    @Override
    public final boolean sniff(ExtractorInput extractorInput) throws InterruptedException, IOException {
        return new Sniffer().sniff(extractorInput);
    }

    @Override
    public final void init(ExtractorOutput extractorOutput) {
        this.extractorOutput = extractorOutput;
    }

    @Override
    public final void seek(long j, long j2) {
        this.clusterTimecodeUs = -9223372036854775807L;
        this.blockState = 0;
        this.reader.reset();
        this.varintReader.reset();
        resetSample();
        for (int i = 0; i < this.tracks.size(); i++) {
            this.tracks.valueAt(i).reset();
        }
    }

    @Override
    public final int read(ExtractorInput extractorInput, PositionHolder positionHolder) throws InterruptedException, IOException {
        this.sampleRead = false;
        boolean z = true;
        while (z && !this.sampleRead) {
            z = this.reader.read(extractorInput);
            if (z && maybeSeekForCues(positionHolder, extractorInput.getPosition())) {
                return 1;
            }
        }
        if (z) {
            return 0;
        }
        for (int i = 0; i < this.tracks.size(); i++) {
            this.tracks.valueAt(i).outputPendingSampleMetadata();
        }
        return -1;
    }

    final void startMasterElement(int i, long j, long j2) throws ParserException {
        if (i == ID_BLOCK_GROUP) {
            this.sampleSeenReferenceBlock = false;
            return;
        }
        if (i == ID_TRACK_ENTRY) {
            this.currentTrack = new Track();
            return;
        }
        if (i == ID_CUE_POINT) {
            this.seenClusterPositionForCurrentCuePoint = false;
            return;
        }
        if (i == ID_SEEK) {
            this.seekEntryId = -1;
            this.seekEntryPosition = -1L;
            return;
        }
        if (i == ID_CONTENT_ENCRYPTION) {
            this.currentTrack.hasContentEncryption = true;
            return;
        }
        if (i == ID_MASTERING_METADATA) {
            this.currentTrack.hasColorInfo = true;
            return;
        }
        if (i == ID_SEGMENT) {
            long j3 = this.segmentContentPosition;
            if (j3 != -1 && j3 != j) {
                throw new ParserException("Multiple Segment elements not supported");
            }
            this.segmentContentPosition = j;
            this.segmentContentSize = j2;
            return;
        }
        if (i == ID_CUES) {
            this.cueTimesUs = new LongArray();
            this.cueClusterPositions = new LongArray();
        } else if (i == ID_CLUSTER && !this.sentSeekMap) {
            if (this.seekForCuesEnabled && this.cuesContentPosition != -1) {
                this.seekForCues = true;
            } else {
                this.extractorOutput.seekMap(new SeekMap.Unseekable(this.durationUs));
                this.sentSeekMap = true;
            }
        }
    }

    final void endMasterElement(int i) throws ParserException {
        if (i == ID_BLOCK_GROUP) {
            if (this.blockState != 2) {
                return;
            }
            if (!this.sampleSeenReferenceBlock) {
                this.blockFlags |= 1;
            }
            commitSampleToOutput(this.tracks.get(this.blockTrackNumber), this.blockTimeUs);
            this.blockState = 0;
            return;
        }
        if (i == ID_TRACK_ENTRY) {
            if (isCodecSupported(this.currentTrack.codecId)) {
                Track track = this.currentTrack;
                track.initializeOutput(this.extractorOutput, track.number);
                this.tracks.put(this.currentTrack.number, this.currentTrack);
            }
            this.currentTrack = null;
            return;
        }
        if (i == ID_SEEK) {
            int i2 = this.seekEntryId;
            if (i2 != -1) {
                long j = this.seekEntryPosition;
                if (j != -1) {
                    if (i2 == ID_CUES) {
                        this.cuesContentPosition = j;
                        return;
                    }
                    return;
                }
            }
            throw new ParserException("Mandatory element SeekID or SeekPosition not found");
        }
        if (i == ID_CONTENT_ENCODING) {
            if (this.currentTrack.hasContentEncryption) {
                if (this.currentTrack.cryptoData == null) {
                    throw new ParserException("Encrypted Track found but ContentEncKeyID was not found");
                }
                this.currentTrack.drmInitData = new DrmInitData(new DrmInitData.SchemeData(C.UUID_NIL, "video/webm", this.currentTrack.cryptoData.encryptionKey));
                return;
            }
            return;
        }
        if (i == ID_CONTENT_ENCODINGS) {
            if (this.currentTrack.hasContentEncryption && this.currentTrack.sampleStrippedBytes != null) {
                throw new ParserException("Combining encryption and compression is not supported");
            }
            return;
        }
        if (i == 357149030) {
            if (this.timecodeScale == -9223372036854775807L) {
                this.timecodeScale = 1000000L;
            }
            long j2 = this.durationTimecode;
            if (j2 != -9223372036854775807L) {
                this.durationUs = scaleTimecodeToUs(j2);
                return;
            }
            return;
        }
        if (i != ID_TRACKS) {
            if (i == ID_CUES && !this.sentSeekMap) {
                this.extractorOutput.seekMap(buildSeekMap());
                this.sentSeekMap = true;
                return;
            }
            return;
        }
        if (this.tracks.size() == 0) {
            throw new ParserException("No valid tracks were found");
        }
        this.extractorOutput.endTracks();
    }

    final void integerElement(int i, long j) throws ParserException {
        if (i == ID_CONTENT_ENCODING_ORDER) {
            if (j == 0) {
                return;
            }
            throw new ParserException("ContentEncodingOrder " + j + " not supported");
        }
        if (i == ID_CONTENT_ENCODING_SCOPE) {
            if (j == 1) {
                return;
            }
            throw new ParserException("ContentEncodingScope " + j + " not supported");
        }
        switch (i) {
            case 131:
                this.currentTrack.type = (int) j;
                return;
            case ID_FLAG_DEFAULT:
                this.currentTrack.flagDefault = j == 1;
                return;
            case 155:
                this.blockDurationUs = scaleTimecodeToUs(j);
                return;
            case ID_CHANNELS:
                this.currentTrack.channelCount = (int) j;
                return;
            case ID_PIXEL_WIDTH:
                this.currentTrack.width = (int) j;
                return;
            case ID_CUE_TIME:
                this.cueTimesUs.add(scaleTimecodeToUs(j));
                return;
            case ID_PIXEL_HEIGHT:
                this.currentTrack.height = (int) j;
                return;
            case ID_TRACK_NUMBER:
                this.currentTrack.number = (int) j;
                return;
            case ID_TIME_CODE:
                this.clusterTimecodeUs = scaleTimecodeToUs(j);
                return;
            case ID_CUE_CLUSTER_POSITION:
                if (this.seenClusterPositionForCurrentCuePoint) {
                    return;
                }
                this.cueClusterPositions.add(j);
                this.seenClusterPositionForCurrentCuePoint = true;
                return;
            case ID_REFERENCE_BLOCK:
                this.sampleSeenReferenceBlock = true;
                return;
            case ID_CONTENT_COMPRESSION_ALGORITHM:
                if (j == 3) {
                    return;
                }
                throw new ParserException("ContentCompAlgo " + j + " not supported");
            case ID_DOC_TYPE_READ_VERSION:
                if (j < 1 || j > 2) {
                    throw new ParserException("DocTypeReadVersion " + j + " not supported");
                }
                return;
            case ID_EBML_READ_VERSION:
                if (j == 1) {
                    return;
                }
                throw new ParserException("EBMLReadVersion " + j + " not supported");
            case ID_CONTENT_ENCRYPTION_ALGORITHM:
                if (j == 5) {
                    return;
                }
                throw new ParserException("ContentEncAlgo " + j + " not supported");
            case ID_CONTENT_ENCRYPTION_AES_SETTINGS_CIPHER_MODE:
                if (j == 1) {
                    return;
                }
                throw new ParserException("AESSettingsCipherMode " + j + " not supported");
            case ID_SEEK_POSITION:
                this.seekEntryPosition = j + this.segmentContentPosition;
                return;
            case ID_STEREO_MODE:
                int i2 = (int) j;
                if (i2 == 0) {
                    this.currentTrack.stereoMode = 0;
                    return;
                }
                if (i2 == 1) {
                    this.currentTrack.stereoMode = 2;
                    return;
                } else if (i2 == 3) {
                    this.currentTrack.stereoMode = 1;
                    return;
                } else {
                    if (i2 != 15) {
                        return;
                    }
                    this.currentTrack.stereoMode = 3;
                    return;
                }
            case ID_DISPLAY_WIDTH:
                this.currentTrack.displayWidth = (int) j;
                return;
            case ID_DISPLAY_UNIT:
                this.currentTrack.displayUnit = (int) j;
                return;
            case ID_DISPLAY_HEIGHT:
                this.currentTrack.displayHeight = (int) j;
                return;
            case ID_FLAG_FORCED:
                this.currentTrack.flagForced = j == 1;
                return;
            case ID_CODEC_DELAY:
                this.currentTrack.codecDelayNs = j;
                return;
            case ID_SEEK_PRE_ROLL:
                this.currentTrack.seekPreRollNs = j;
                return;
            case ID_AUDIO_BIT_DEPTH:
                this.currentTrack.audioBitDepth = (int) j;
                return;
            case ID_DEFAULT_DURATION:
                this.currentTrack.defaultSampleDurationNs = (int) j;
                return;
            case ID_TIMECODE_SCALE:
                this.timecodeScale = j;
                return;
            default:
                switch (i) {
                    case ID_COLOUR_RANGE:
                        int i3 = (int) j;
                        if (i3 == 1) {
                            this.currentTrack.colorRange = 2;
                            return;
                        } else {
                            if (i3 != 2) {
                                return;
                            }
                            this.currentTrack.colorRange = 1;
                            return;
                        }
                    case ID_COLOUR_TRANSFER:
                        int i4 = (int) j;
                        if (i4 != 1) {
                            if (i4 == 16) {
                                this.currentTrack.colorTransfer = 6;
                                return;
                            } else if (i4 == 18) {
                                this.currentTrack.colorTransfer = 7;
                                return;
                            } else if (i4 != 6 && i4 != 7) {
                                return;
                            }
                        }
                        this.currentTrack.colorTransfer = 3;
                        return;
                    case ID_COLOUR_PRIMARIES:
                        this.currentTrack.hasColorInfo = true;
                        int i5 = (int) j;
                        if (i5 == 1) {
                            this.currentTrack.colorSpace = 1;
                            return;
                        }
                        if (i5 == 9) {
                            this.currentTrack.colorSpace = 6;
                            return;
                        } else {
                            if (i5 == 4 || i5 == 5 || i5 == 6 || i5 == 7) {
                                this.currentTrack.colorSpace = 2;
                                return;
                            }
                            return;
                        }
                    case ID_MAX_CLL:
                        this.currentTrack.maxContentLuminance = (int) j;
                        return;
                    case ID_MAX_FALL:
                        this.currentTrack.maxFrameAverageLuminance = (int) j;
                        return;
                    default:
                        return;
                }
        }
    }

    final void floatElement(int i, double d) {
        if (i == ID_SAMPLING_FREQUENCY) {
            this.currentTrack.sampleRate = (int) d;
        }
        if (i == ID_DURATION) {
            this.durationTimecode = (long) d;
            return;
        }
        switch (i) {
            case ID_PRIMARY_R_CHROMATICITY_X:
                this.currentTrack.primaryRChromaticityX = (float) d;
                break;
            case ID_PRIMARY_R_CHROMATICITY_Y:
                this.currentTrack.primaryRChromaticityY = (float) d;
                break;
            case ID_PRIMARY_G_CHROMATICITY_X:
                this.currentTrack.primaryGChromaticityX = (float) d;
                break;
            case ID_PRIMARY_G_CHROMATICITY_Y:
                this.currentTrack.primaryGChromaticityY = (float) d;
                break;
            case ID_PRIMARY_B_CHROMATICITY_X:
                this.currentTrack.primaryBChromaticityX = (float) d;
                break;
            case ID_PRIMARY_B_CHROMATICITY_Y:
                this.currentTrack.primaryBChromaticityY = (float) d;
                break;
            case ID_WHITE_POINT_CHROMATICITY_X:
                this.currentTrack.whitePointChromaticityX = (float) d;
                break;
            case ID_WHITE_POINT_CHROMATICITY_Y:
                this.currentTrack.whitePointChromaticityY = (float) d;
                break;
            case ID_LUMNINANCE_MAX:
                this.currentTrack.maxMasteringLuminance = (float) d;
                break;
            case ID_LUMNINANCE_MIN:
                this.currentTrack.minMasteringLuminance = (float) d;
                break;
        }
    }

    final void stringElement(int i, String str) throws ParserException {
        if (i == 134) {
            this.currentTrack.codecId = str;
            return;
        }
        if (i != ID_DOC_TYPE) {
            if (i != ID_LANGUAGE) {
                return;
            }
            this.currentTrack.language = str;
        } else {
            if (DOC_TYPE_WEBM.equals(str) || DOC_TYPE_MATROSKA.equals(str)) {
                return;
            }
            throw new ParserException("DocType " + str + " not supported");
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:74:0x01fc, code lost:
    
        throw new com.mbridge.msdk.playercommon.exoplayer2.ParserException("EBML lacing sample size out of range.");
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    final void binaryElement(int i, int i2, ExtractorInput extractorInput) throws InterruptedException, IOException {
        int i3;
        int i4;
        int i5;
        int[] iArr;
        int i6 = 4;
        int i7 = 0;
        int i8 = 1;
        if (i != ID_BLOCK && i != ID_SIMPLE_BLOCK) {
            if (i == ID_CONTENT_COMPRESSION_SETTINGS) {
                this.currentTrack.sampleStrippedBytes = new byte[i2];
                extractorInput.readFully(this.currentTrack.sampleStrippedBytes, 0, i2);
                return;
            }
            if (i == ID_CONTENT_ENCRYPTION_KEY_ID) {
                byte[] bArr = new byte[i2];
                extractorInput.readFully(bArr, 0, i2);
                this.currentTrack.cryptoData = new TrackOutput.CryptoData(1, bArr, 0, 0);
                return;
            }
            if (i == ID_SEEK_ID) {
                Arrays.fill(this.seekEntryIdBytes.data, (byte) 0);
                extractorInput.readFully(this.seekEntryIdBytes.data, 4 - i2, i2);
                this.seekEntryIdBytes.setPosition(0);
                this.seekEntryId = (int) this.seekEntryIdBytes.readUnsignedInt();
                return;
            }
            if (i == ID_CODEC_PRIVATE) {
                this.currentTrack.codecPrivate = new byte[i2];
                extractorInput.readFully(this.currentTrack.codecPrivate, 0, i2);
                return;
            } else if (i == ID_PROJECTION_PRIVATE) {
                this.currentTrack.projectionData = new byte[i2];
                extractorInput.readFully(this.currentTrack.projectionData, 0, i2);
                return;
            } else {
                throw new ParserException("Unexpected id: " + i);
            }
        }
        if (this.blockState == 0) {
            this.blockTrackNumber = (int) this.varintReader.readUnsignedVarint(extractorInput, false, true, 8);
            this.blockTrackNumberLength = this.varintReader.getLastLength();
            this.blockDurationUs = -9223372036854775807L;
            this.blockState = 1;
            this.scratch.reset();
        }
        Track track = this.tracks.get(this.blockTrackNumber);
        if (track == null) {
            extractorInput.skipFully(i2 - this.blockTrackNumberLength);
            this.blockState = 0;
            return;
        }
        if (this.blockState == 1) {
            readScratch(extractorInput, 3);
            int i9 = (this.scratch.data[2] & 6) >> 1;
            byte b = UByte.MAX_VALUE;
            if (i9 == 0) {
                this.blockLacingSampleCount = 1;
                int[] iArrEnsureArrayCapacity = ensureArrayCapacity(this.blockLacingSampleSizes, 1);
                this.blockLacingSampleSizes = iArrEnsureArrayCapacity;
                iArrEnsureArrayCapacity[0] = (i2 - this.blockTrackNumberLength) - 3;
            } else {
                if (i != ID_SIMPLE_BLOCK) {
                    throw new ParserException("Lacing only supported in SimpleBlocks.");
                }
                readScratch(extractorInput, 4);
                int i10 = (this.scratch.data[3] & UByte.MAX_VALUE) + 1;
                this.blockLacingSampleCount = i10;
                int[] iArrEnsureArrayCapacity2 = ensureArrayCapacity(this.blockLacingSampleSizes, i10);
                this.blockLacingSampleSizes = iArrEnsureArrayCapacity2;
                if (i9 == 2) {
                    int i11 = (i2 - this.blockTrackNumberLength) - 4;
                    int i12 = this.blockLacingSampleCount;
                    Arrays.fill(iArrEnsureArrayCapacity2, 0, i12, i11 / i12);
                } else if (i9 == 1) {
                    int i13 = 0;
                    int i14 = 0;
                    while (true) {
                        i4 = this.blockLacingSampleCount;
                        if (i13 >= i4 - 1) {
                            break;
                        }
                        this.blockLacingSampleSizes[i13] = 0;
                        do {
                            i6++;
                            readScratch(extractorInput, i6);
                            i5 = this.scratch.data[i6 - 1] & UByte.MAX_VALUE;
                            iArr = this.blockLacingSampleSizes;
                            iArr[i13] = iArr[i13] + i5;
                        } while (i5 == 255);
                        i14 += iArr[i13];
                        i13++;
                    }
                    this.blockLacingSampleSizes[i4 - 1] = ((i2 - this.blockTrackNumberLength) - i6) - i14;
                } else {
                    if (i9 != 3) {
                        throw new ParserException("Unexpected lacing value: " + i9);
                    }
                    int i15 = 0;
                    int i16 = 0;
                    while (true) {
                        int i17 = this.blockLacingSampleCount;
                        if (i15 < i17 - 1) {
                            this.blockLacingSampleSizes[i15] = i7;
                            i6++;
                            readScratch(extractorInput, i6);
                            int i18 = i6 - 1;
                            if (this.scratch.data[i18] == 0) {
                                throw new ParserException("No valid varint length mask found");
                            }
                            long j = 0;
                            int i19 = i7;
                            while (true) {
                                if (i19 >= 8) {
                                    break;
                                }
                                int i20 = i8 << (7 - i19);
                                if ((this.scratch.data[i18] & i20) != 0) {
                                    i6 += i19;
                                    readScratch(extractorInput, i6);
                                    long j2 = (~i20) & this.scratch.data[i18] & b;
                                    int i21 = i18 + 1;
                                    while (true) {
                                        j = j2;
                                        if (i21 >= i6) {
                                            break;
                                        }
                                        j2 = (j << 8) | ((long) (this.scratch.data[i21] & b));
                                        i21++;
                                        b = UByte.MAX_VALUE;
                                    }
                                    if (i15 > 0) {
                                        j -= (1 << ((i19 * 7) + 6)) - 1;
                                    }
                                } else {
                                    i19++;
                                    i8 = 1;
                                    b = UByte.MAX_VALUE;
                                }
                            }
                            long j3 = j;
                            if (j3 < -2147483648L || j3 > 2147483647L) {
                                break;
                            }
                            int i22 = (int) j3;
                            int[] iArr2 = this.blockLacingSampleSizes;
                            if (i15 != 0) {
                                i22 += iArr2[i15 - 1];
                            }
                            iArr2[i15] = i22;
                            i16 += this.blockLacingSampleSizes[i15];
                            i15++;
                            i7 = 0;
                            i8 = 1;
                            b = UByte.MAX_VALUE;
                        } else {
                            this.blockLacingSampleSizes[i17 - 1] = ((i2 - this.blockTrackNumberLength) - i6) - i16;
                            break;
                        }
                    }
                }
            }
            this.blockTimeUs = this.clusterTimecodeUs + scaleTimecodeToUs((this.scratch.data[0] << 8) | (this.scratch.data[1] & UByte.MAX_VALUE));
            this.blockFlags = ((this.scratch.data[2] & 8) == 8 ? Integer.MIN_VALUE : 0) | ((track.type == 2 || (i == ID_SIMPLE_BLOCK && (this.scratch.data[2] & ByteCompanionObject.MIN_VALUE) == 128)) ? 1 : 0);
            this.blockState = 2;
            this.blockLacingSampleIndex = 0;
            i3 = ID_SIMPLE_BLOCK;
        } else {
            i3 = ID_SIMPLE_BLOCK;
        }
        if (i != i3) {
            writeSampleData(extractorInput, track, this.blockLacingSampleSizes[0]);
            return;
        }
        while (true) {
            int i23 = this.blockLacingSampleIndex;
            if (i23 < this.blockLacingSampleCount) {
                writeSampleData(extractorInput, track, this.blockLacingSampleSizes[i23]);
                commitSampleToOutput(track, this.blockTimeUs + ((long) ((this.blockLacingSampleIndex * track.defaultSampleDurationNs) / 1000)));
                this.blockLacingSampleIndex++;
            } else {
                this.blockState = 0;
                return;
            }
        }
    }

    private void commitSampleToOutput(Track track, long j) {
        if (track.trueHdSampleRechunker != null) {
            track.trueHdSampleRechunker.sampleMetadata(track, j);
        } else {
            if (CODEC_ID_SUBRIP.equals(track.codecId)) {
                commitSubtitleSample(track, SUBRIP_TIMECODE_FORMAT, 19, 1000L, SUBRIP_TIMECODE_EMPTY);
            } else if (CODEC_ID_ASS.equals(track.codecId)) {
                commitSubtitleSample(track, SSA_TIMECODE_FORMAT, 21, 10000L, SSA_TIMECODE_EMPTY);
            }
            track.output.sampleMetadata(j, this.blockFlags, this.sampleBytesWritten, 0, track.cryptoData);
        }
        this.sampleRead = true;
        resetSample();
    }

    private void resetSample() {
        this.sampleBytesRead = 0;
        this.sampleBytesWritten = 0;
        this.sampleCurrentNalBytesRemaining = 0;
        this.sampleEncodingHandled = false;
        this.sampleSignalByteRead = false;
        this.samplePartitionCountRead = false;
        this.samplePartitionCount = 0;
        this.sampleSignalByte = (byte) 0;
        this.sampleInitializationVectorRead = false;
        this.sampleStrippedBytes.reset();
    }

    private void readScratch(ExtractorInput extractorInput, int i) throws InterruptedException, IOException {
        if (this.scratch.limit() >= i) {
            return;
        }
        if (this.scratch.capacity() < i) {
            ParsableByteArray parsableByteArray = this.scratch;
            parsableByteArray.reset(Arrays.copyOf(parsableByteArray.data, Math.max(this.scratch.data.length * 2, i)), this.scratch.limit());
        }
        extractorInput.readFully(this.scratch.data, this.scratch.limit(), i - this.scratch.limit());
        this.scratch.setLimit(i);
    }

    private void writeSampleData(ExtractorInput extractorInput, Track track, int i) throws InterruptedException, IOException {
        int i2;
        if (CODEC_ID_SUBRIP.equals(track.codecId)) {
            writeSubtitleSampleData(extractorInput, SUBRIP_PREFIX, i);
            return;
        }
        if (CODEC_ID_ASS.equals(track.codecId)) {
            writeSubtitleSampleData(extractorInput, SSA_PREFIX, i);
            return;
        }
        TrackOutput trackOutput = track.output;
        if (!this.sampleEncodingHandled) {
            if (track.hasContentEncryption) {
                this.blockFlags &= -1073741825;
                if (!this.sampleSignalByteRead) {
                    extractorInput.readFully(this.scratch.data, 0, 1);
                    this.sampleBytesRead++;
                    if ((this.scratch.data[0] & ByteCompanionObject.MIN_VALUE) == 128) {
                        throw new ParserException("Extension bit is set in signal byte");
                    }
                    this.sampleSignalByte = this.scratch.data[0];
                    this.sampleSignalByteRead = true;
                }
                if ((this.sampleSignalByte & 1) == 1) {
                    boolean z = (this.sampleSignalByte & 2) == 2;
                    this.blockFlags |= 1073741824;
                    if (!this.sampleInitializationVectorRead) {
                        extractorInput.readFully(this.encryptionInitializationVector.data, 0, 8);
                        this.sampleBytesRead += 8;
                        this.sampleInitializationVectorRead = true;
                        this.scratch.data[0] = (byte) ((z ? 128 : 0) | 8);
                        this.scratch.setPosition(0);
                        trackOutput.sampleData(this.scratch, 1);
                        this.sampleBytesWritten++;
                        this.encryptionInitializationVector.setPosition(0);
                        trackOutput.sampleData(this.encryptionInitializationVector, 8);
                        this.sampleBytesWritten += 8;
                    }
                    if (z) {
                        if (!this.samplePartitionCountRead) {
                            extractorInput.readFully(this.scratch.data, 0, 1);
                            this.sampleBytesRead++;
                            this.scratch.setPosition(0);
                            this.samplePartitionCount = this.scratch.readUnsignedByte();
                            this.samplePartitionCountRead = true;
                        }
                        int i3 = this.samplePartitionCount * 4;
                        this.scratch.reset(i3);
                        extractorInput.readFully(this.scratch.data, 0, i3);
                        this.sampleBytesRead += i3;
                        short s = (short) ((this.samplePartitionCount / 2) + 1);
                        int i4 = (s * 6) + 2;
                        ByteBuffer byteBuffer = this.encryptionSubsampleDataBuffer;
                        if (byteBuffer == null || byteBuffer.capacity() < i4) {
                            this.encryptionSubsampleDataBuffer = ByteBuffer.allocate(i4);
                        }
                        this.encryptionSubsampleDataBuffer.position(0);
                        this.encryptionSubsampleDataBuffer.putShort(s);
                        int i5 = 0;
                        int i6 = 0;
                        while (true) {
                            i2 = this.samplePartitionCount;
                            if (i5 >= i2) {
                                break;
                            }
                            int unsignedIntToInt = this.scratch.readUnsignedIntToInt();
                            if (i5 % 2 == 0) {
                                this.encryptionSubsampleDataBuffer.putShort((short) (unsignedIntToInt - i6));
                            } else {
                                this.encryptionSubsampleDataBuffer.putInt(unsignedIntToInt - i6);
                            }
                            i5++;
                            i6 = unsignedIntToInt;
                        }
                        int i7 = (i - this.sampleBytesRead) - i6;
                        if (i2 % 2 == 1) {
                            this.encryptionSubsampleDataBuffer.putInt(i7);
                        } else {
                            this.encryptionSubsampleDataBuffer.putShort((short) i7);
                            this.encryptionSubsampleDataBuffer.putInt(0);
                        }
                        this.encryptionSubsampleData.reset(this.encryptionSubsampleDataBuffer.array(), i4);
                        trackOutput.sampleData(this.encryptionSubsampleData, i4);
                        this.sampleBytesWritten += i4;
                    }
                }
            } else if (track.sampleStrippedBytes != null) {
                this.sampleStrippedBytes.reset(track.sampleStrippedBytes, track.sampleStrippedBytes.length);
            }
            this.sampleEncodingHandled = true;
        }
        int iLimit = i + this.sampleStrippedBytes.limit();
        if (CODEC_ID_H264.equals(track.codecId) || CODEC_ID_H265.equals(track.codecId)) {
            byte[] bArr = this.nalLength.data;
            bArr[0] = 0;
            bArr[1] = 0;
            bArr[2] = 0;
            int i8 = track.nalUnitLengthFieldLength;
            int i9 = 4 - track.nalUnitLengthFieldLength;
            while (this.sampleBytesRead < iLimit) {
                int i10 = this.sampleCurrentNalBytesRemaining;
                if (i10 == 0) {
                    readToTarget(extractorInput, bArr, i9, i8);
                    this.nalLength.setPosition(0);
                    this.sampleCurrentNalBytesRemaining = this.nalLength.readUnsignedIntToInt();
                    this.nalStartCode.setPosition(0);
                    trackOutput.sampleData(this.nalStartCode, 4);
                    this.sampleBytesWritten += 4;
                } else {
                    this.sampleCurrentNalBytesRemaining = i10 - readToOutput(extractorInput, trackOutput, i10);
                }
            }
        } else {
            if (track.trueHdSampleRechunker != null) {
                Assertions.checkState(this.sampleStrippedBytes.limit() == 0);
                track.trueHdSampleRechunker.startSample(extractorInput, this.blockFlags, iLimit);
            }
            while (true) {
                int i11 = this.sampleBytesRead;
                if (i11 >= iLimit) {
                    break;
                } else {
                    readToOutput(extractorInput, trackOutput, iLimit - i11);
                }
            }
        }
        if (CODEC_ID_VORBIS.equals(track.codecId)) {
            this.vorbisNumPageSamples.setPosition(0);
            trackOutput.sampleData(this.vorbisNumPageSamples, 4);
            this.sampleBytesWritten += 4;
        }
    }

    private void writeSubtitleSampleData(ExtractorInput extractorInput, byte[] bArr, int i) throws InterruptedException, IOException {
        int length = bArr.length + i;
        if (this.subtitleSample.capacity() < length) {
            this.subtitleSample.data = Arrays.copyOf(bArr, length + i);
        } else {
            System.arraycopy(bArr, 0, this.subtitleSample.data, 0, bArr.length);
        }
        extractorInput.readFully(this.subtitleSample.data, bArr.length, i);
        this.subtitleSample.reset(length);
    }

    private void commitSubtitleSample(Track track, String str, int i, long j, byte[] bArr) {
        setSampleDuration(this.subtitleSample.data, this.blockDurationUs, str, i, j, bArr);
        TrackOutput trackOutput = track.output;
        ParsableByteArray parsableByteArray = this.subtitleSample;
        trackOutput.sampleData(parsableByteArray, parsableByteArray.limit());
        this.sampleBytesWritten += this.subtitleSample.limit();
    }

    private static void setSampleDuration(byte[] bArr, long j, String str, int i, long j2, byte[] bArr2) {
        byte[] utf8Bytes;
        if (j == -9223372036854775807L) {
            utf8Bytes = bArr2;
        } else {
            int i2 = (int) (j / 3600000000L);
            long j3 = j - (((long) (i2 * 3600)) * 1000000);
            int i3 = (int) (j3 / 60000000);
            long j4 = j3 - (((long) (i3 * 60)) * 1000000);
            int i4 = (int) (j4 / 1000000);
            utf8Bytes = Util.getUtf8Bytes(String.format(Locale.US, str, Integer.valueOf(i2), Integer.valueOf(i3), Integer.valueOf(i4), Integer.valueOf((int) ((j4 - (((long) i4) * 1000000)) / j2))));
        }
        System.arraycopy(utf8Bytes, 0, bArr, i, bArr2.length);
    }

    private void readToTarget(ExtractorInput extractorInput, byte[] bArr, int i, int i2) throws InterruptedException, IOException {
        int iMin = Math.min(i2, this.sampleStrippedBytes.bytesLeft());
        extractorInput.readFully(bArr, i + iMin, i2 - iMin);
        if (iMin > 0) {
            this.sampleStrippedBytes.readBytes(bArr, i, iMin);
        }
        this.sampleBytesRead += i2;
    }

    private int readToOutput(ExtractorInput extractorInput, TrackOutput trackOutput, int i) throws InterruptedException, IOException {
        int iSampleData;
        int iBytesLeft = this.sampleStrippedBytes.bytesLeft();
        if (iBytesLeft > 0) {
            iSampleData = Math.min(i, iBytesLeft);
            trackOutput.sampleData(this.sampleStrippedBytes, iSampleData);
        } else {
            iSampleData = trackOutput.sampleData(extractorInput, i, false);
        }
        this.sampleBytesRead += iSampleData;
        this.sampleBytesWritten += iSampleData;
        return iSampleData;
    }

    private SeekMap buildSeekMap() {
        LongArray longArray;
        LongArray longArray2;
        if (this.segmentContentPosition == -1 || this.durationUs == -9223372036854775807L || (longArray = this.cueTimesUs) == null || longArray.size() == 0 || (longArray2 = this.cueClusterPositions) == null || longArray2.size() != this.cueTimesUs.size()) {
            this.cueTimesUs = null;
            this.cueClusterPositions = null;
            return new SeekMap.Unseekable(this.durationUs);
        }
        int size = this.cueTimesUs.size();
        int[] iArr = new int[size];
        long[] jArr = new long[size];
        long[] jArr2 = new long[size];
        long[] jArr3 = new long[size];
        int i = 0;
        for (int i2 = 0; i2 < size; i2++) {
            jArr3[i2] = this.cueTimesUs.get(i2);
            jArr[i2] = this.segmentContentPosition + this.cueClusterPositions.get(i2);
        }
        while (true) {
            int i3 = size - 1;
            if (i < i3) {
                int i4 = i + 1;
                iArr[i] = (int) (jArr[i4] - jArr[i]);
                jArr2[i] = jArr3[i4] - jArr3[i];
                i = i4;
            } else {
                iArr[i3] = (int) ((this.segmentContentPosition + this.segmentContentSize) - jArr[i3]);
                jArr2[i3] = this.durationUs - jArr3[i3];
                this.cueTimesUs = null;
                this.cueClusterPositions = null;
                return new ChunkIndex(iArr, jArr, jArr2, jArr3);
            }
        }
    }

    private boolean maybeSeekForCues(PositionHolder positionHolder, long j) {
        if (this.seekForCues) {
            this.seekPositionAfterBuildingCues = j;
            positionHolder.position = this.cuesContentPosition;
            this.seekForCues = false;
            return true;
        }
        if (this.sentSeekMap) {
            long j2 = this.seekPositionAfterBuildingCues;
            if (j2 != -1) {
                positionHolder.position = j2;
                this.seekPositionAfterBuildingCues = -1L;
                return true;
            }
        }
        return false;
    }

    private long scaleTimecodeToUs(long j) throws ParserException {
        long j2 = this.timecodeScale;
        if (j2 == -9223372036854775807L) {
            throw new ParserException("Can't scale timecode prior to timecodeScale being set.");
        }
        return Util.scaleLargeTimestamp(j, j2, 1000L);
    }

    private static boolean isCodecSupported(String str) {
        return CODEC_ID_VP8.equals(str) || CODEC_ID_VP9.equals(str) || CODEC_ID_MPEG2.equals(str) || CODEC_ID_MPEG4_SP.equals(str) || CODEC_ID_MPEG4_ASP.equals(str) || CODEC_ID_MPEG4_AP.equals(str) || CODEC_ID_H264.equals(str) || CODEC_ID_H265.equals(str) || CODEC_ID_FOURCC.equals(str) || CODEC_ID_THEORA.equals(str) || CODEC_ID_OPUS.equals(str) || CODEC_ID_VORBIS.equals(str) || CODEC_ID_AAC.equals(str) || CODEC_ID_MP2.equals(str) || CODEC_ID_MP3.equals(str) || CODEC_ID_AC3.equals(str) || CODEC_ID_E_AC3.equals(str) || CODEC_ID_TRUEHD.equals(str) || CODEC_ID_DTS.equals(str) || CODEC_ID_DTS_EXPRESS.equals(str) || CODEC_ID_DTS_LOSSLESS.equals(str) || CODEC_ID_FLAC.equals(str) || CODEC_ID_ACM.equals(str) || CODEC_ID_PCM_INT_LIT.equals(str) || CODEC_ID_SUBRIP.equals(str) || CODEC_ID_ASS.equals(str) || CODEC_ID_VOBSUB.equals(str) || CODEC_ID_PGS.equals(str) || CODEC_ID_DVBSUB.equals(str);
    }

    private static int[] ensureArrayCapacity(int[] iArr, int i) {
        if (iArr == null) {
            return new int[i];
        }
        return iArr.length >= i ? iArr : new int[Math.max(iArr.length * 2, i)];
    }

    private final class InnerEbmlReaderOutput implements EbmlReaderOutput {
        @Override
        public final int getElementType(int i) {
            switch (i) {
                case 131:
                case MatroskaExtractor.ID_FLAG_DEFAULT:
                case 155:
                case MatroskaExtractor.ID_CHANNELS:
                case MatroskaExtractor.ID_PIXEL_WIDTH:
                case MatroskaExtractor.ID_CUE_TIME:
                case MatroskaExtractor.ID_PIXEL_HEIGHT:
                case MatroskaExtractor.ID_TRACK_NUMBER:
                case MatroskaExtractor.ID_TIME_CODE:
                case MatroskaExtractor.ID_CUE_CLUSTER_POSITION:
                case MatroskaExtractor.ID_REFERENCE_BLOCK:
                case MatroskaExtractor.ID_CONTENT_COMPRESSION_ALGORITHM:
                case MatroskaExtractor.ID_DOC_TYPE_READ_VERSION:
                case MatroskaExtractor.ID_EBML_READ_VERSION:
                case MatroskaExtractor.ID_CONTENT_ENCRYPTION_ALGORITHM:
                case MatroskaExtractor.ID_CONTENT_ENCRYPTION_AES_SETTINGS_CIPHER_MODE:
                case MatroskaExtractor.ID_CONTENT_ENCODING_ORDER:
                case MatroskaExtractor.ID_CONTENT_ENCODING_SCOPE:
                case MatroskaExtractor.ID_SEEK_POSITION:
                case MatroskaExtractor.ID_STEREO_MODE:
                case MatroskaExtractor.ID_DISPLAY_WIDTH:
                case MatroskaExtractor.ID_DISPLAY_UNIT:
                case MatroskaExtractor.ID_DISPLAY_HEIGHT:
                case MatroskaExtractor.ID_FLAG_FORCED:
                case MatroskaExtractor.ID_COLOUR_RANGE:
                case MatroskaExtractor.ID_COLOUR_TRANSFER:
                case MatroskaExtractor.ID_COLOUR_PRIMARIES:
                case MatroskaExtractor.ID_MAX_CLL:
                case MatroskaExtractor.ID_MAX_FALL:
                case MatroskaExtractor.ID_CODEC_DELAY:
                case MatroskaExtractor.ID_SEEK_PRE_ROLL:
                case MatroskaExtractor.ID_AUDIO_BIT_DEPTH:
                case MatroskaExtractor.ID_DEFAULT_DURATION:
                case MatroskaExtractor.ID_TIMECODE_SCALE:
                    return 2;
                case 134:
                case MatroskaExtractor.ID_DOC_TYPE:
                case MatroskaExtractor.ID_LANGUAGE:
                    return 3;
                case MatroskaExtractor.ID_BLOCK_GROUP:
                case MatroskaExtractor.ID_TRACK_ENTRY:
                case MatroskaExtractor.ID_CUE_TRACK_POSITIONS:
                case MatroskaExtractor.ID_CUE_POINT:
                case 224:
                case MatroskaExtractor.ID_AUDIO:
                case MatroskaExtractor.ID_CONTENT_ENCRYPTION_AES_SETTINGS:
                case MatroskaExtractor.ID_SEEK:
                case MatroskaExtractor.ID_CONTENT_COMPRESSION:
                case MatroskaExtractor.ID_CONTENT_ENCRYPTION:
                case MatroskaExtractor.ID_COLOUR:
                case MatroskaExtractor.ID_MASTERING_METADATA:
                case MatroskaExtractor.ID_CONTENT_ENCODING:
                case MatroskaExtractor.ID_CONTENT_ENCODINGS:
                case MatroskaExtractor.ID_PROJECTION:
                case MatroskaExtractor.ID_SEEK_HEAD:
                case 357149030:
                case MatroskaExtractor.ID_TRACKS:
                case MatroskaExtractor.ID_SEGMENT:
                case MatroskaExtractor.ID_EBML:
                case MatroskaExtractor.ID_CUES:
                case MatroskaExtractor.ID_CLUSTER:
                    return 1;
                case MatroskaExtractor.ID_BLOCK:
                case MatroskaExtractor.ID_SIMPLE_BLOCK:
                case MatroskaExtractor.ID_CONTENT_COMPRESSION_SETTINGS:
                case MatroskaExtractor.ID_CONTENT_ENCRYPTION_KEY_ID:
                case MatroskaExtractor.ID_SEEK_ID:
                case MatroskaExtractor.ID_CODEC_PRIVATE:
                case MatroskaExtractor.ID_PROJECTION_PRIVATE:
                    return 4;
                case MatroskaExtractor.ID_SAMPLING_FREQUENCY:
                case MatroskaExtractor.ID_DURATION:
                case MatroskaExtractor.ID_PRIMARY_R_CHROMATICITY_X:
                case MatroskaExtractor.ID_PRIMARY_R_CHROMATICITY_Y:
                case MatroskaExtractor.ID_PRIMARY_G_CHROMATICITY_X:
                case MatroskaExtractor.ID_PRIMARY_G_CHROMATICITY_Y:
                case MatroskaExtractor.ID_PRIMARY_B_CHROMATICITY_X:
                case MatroskaExtractor.ID_PRIMARY_B_CHROMATICITY_Y:
                case MatroskaExtractor.ID_WHITE_POINT_CHROMATICITY_X:
                case MatroskaExtractor.ID_WHITE_POINT_CHROMATICITY_Y:
                case MatroskaExtractor.ID_LUMNINANCE_MAX:
                case MatroskaExtractor.ID_LUMNINANCE_MIN:
                    return 5;
                default:
                    return 0;
            }
        }

        @Override
        public final boolean isLevel1Element(int i) {
            return i == 357149030 || i == MatroskaExtractor.ID_CLUSTER || i == MatroskaExtractor.ID_CUES || i == MatroskaExtractor.ID_TRACKS;
        }

        private InnerEbmlReaderOutput() {
        }

        @Override
        public final void startMasterElement(int i, long j, long j2) throws ParserException {
            MatroskaExtractor.this.startMasterElement(i, j, j2);
        }

        @Override
        public final void endMasterElement(int i) throws ParserException {
            MatroskaExtractor.this.endMasterElement(i);
        }

        @Override
        public final void integerElement(int i, long j) throws ParserException {
            MatroskaExtractor.this.integerElement(i, j);
        }

        @Override
        public final void floatElement(int i, double d) throws ParserException {
            MatroskaExtractor.this.floatElement(i, d);
        }

        @Override
        public final void stringElement(int i, String str) throws ParserException {
            MatroskaExtractor.this.stringElement(i, str);
        }

        @Override
        public final void binaryElement(int i, int i2, ExtractorInput extractorInput) throws InterruptedException, IOException {
            MatroskaExtractor.this.binaryElement(i, i2, extractorInput);
        }
    }

    private static final class TrueHdSampleRechunker {
        private int blockFlags;
        private int chunkSize;
        private boolean foundSyncframe;
        private int sampleCount;
        private final byte[] syncframePrefix = new byte[10];
        private long timeUs;

        public final void reset() {
            this.foundSyncframe = false;
        }

        public final void startSample(ExtractorInput extractorInput, int i, int i2) throws InterruptedException, IOException {
            if (!this.foundSyncframe) {
                extractorInput.peekFully(this.syncframePrefix, 0, 10);
                extractorInput.resetPeekPosition();
                if (Ac3Util.parseTrueHdSyncframeAudioSampleCount(this.syncframePrefix) == -1) {
                    return;
                }
                this.foundSyncframe = true;
                this.sampleCount = 0;
            }
            if (this.sampleCount == 0) {
                this.blockFlags = i;
                this.chunkSize = 0;
            }
            this.chunkSize += i2;
        }

        public final void sampleMetadata(Track track, long j) {
            if (this.foundSyncframe) {
                int i = this.sampleCount;
                this.sampleCount = i + 1;
                if (i == 0) {
                    this.timeUs = j;
                }
                if (this.sampleCount < 16) {
                    return;
                }
                track.output.sampleMetadata(this.timeUs, this.blockFlags, this.chunkSize, 0, track.cryptoData);
                this.sampleCount = 0;
            }
        }

        public final void outputPendingSampleMetadata(Track track) {
            if (!this.foundSyncframe || this.sampleCount <= 0) {
                return;
            }
            track.output.sampleMetadata(this.timeUs, this.blockFlags, this.chunkSize, 0, track.cryptoData);
            this.sampleCount = 0;
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
        public String codecId;
        public byte[] codecPrivate;
        public int colorRange;
        public int colorSpace;
        public int colorTransfer;
        public TrackOutput.CryptoData cryptoData;
        public int defaultSampleDurationNs;
        public int displayHeight;
        public int displayUnit;
        public int displayWidth;
        public DrmInitData drmInitData;
        public boolean flagDefault;
        public boolean flagForced;
        public boolean hasColorInfo;
        public boolean hasContentEncryption;
        public int height;
        private String language;
        public int maxContentLuminance;
        public int maxFrameAverageLuminance;
        public float maxMasteringLuminance;
        public float minMasteringLuminance;
        public int nalUnitLengthFieldLength;
        public int number;
        public TrackOutput output;
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
        public TrueHdSampleRechunker trueHdSampleRechunker;
        public int type;
        public float whitePointChromaticityX;
        public float whitePointChromaticityY;
        public int width;

        private Track() {
            this.width = -1;
            this.height = -1;
            this.displayWidth = -1;
            this.displayHeight = -1;
            this.displayUnit = 0;
            this.projectionData = null;
            this.stereoMode = -1;
            this.hasColorInfo = false;
            this.colorSpace = -1;
            this.colorTransfer = -1;
            this.colorRange = -1;
            this.maxContentLuminance = 1000;
            this.maxFrameAverageLuminance = 200;
            this.primaryRChromaticityX = -1.0f;
            this.primaryRChromaticityY = -1.0f;
            this.primaryGChromaticityX = -1.0f;
            this.primaryGChromaticityY = -1.0f;
            this.primaryBChromaticityX = -1.0f;
            this.primaryBChromaticityY = -1.0f;
            this.whitePointChromaticityX = -1.0f;
            this.whitePointChromaticityY = -1.0f;
            this.maxMasteringLuminance = -1.0f;
            this.minMasteringLuminance = -1.0f;
            this.channelCount = 1;
            this.audioBitDepth = -1;
            this.sampleRate = 8000;
            this.codecDelayNs = 0L;
            this.seekPreRollNs = 0L;
            this.flagDefault = true;
            this.language = "eng";
        }

        /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
        /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
        /* JADX WARN: Removed duplicated region for block: B:146:0x0319  */
        /* JADX WARN: Removed duplicated region for block: B:149:0x0321  */
        /* JADX WARN: Removed duplicated region for block: B:150:0x0347  */
        /* JADX WARN: Removed duplicated region for block: B:92:0x015d  */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public final void initializeOutput(ExtractorOutput extractorOutput, int i) throws ParserException {
            byte b;
            String str;
            List<byte[]> listSingletonList;
            String str2;
            List<byte[]> list;
            int i2;
            String str3;
            int i3;
            String str4;
            int i4;
            int pcmEncoding;
            Format formatCreateImageSampleFormat;
            int i5;
            int i6;
            String str5 = this.codecId;
            int i7 = 1;
            switch (str5.hashCode()) {
                case -2095576542:
                    b = !str5.equals(MatroskaExtractor.CODEC_ID_MPEG4_AP) ? (byte) -1 : (byte) 5;
                    break;
                case -2095575984:
                    if (str5.equals(MatroskaExtractor.CODEC_ID_MPEG4_SP)) {
                        b = 3;
                        break;
                    }
                    break;
                case -1985379776:
                    if (str5.equals(MatroskaExtractor.CODEC_ID_ACM)) {
                        b = 22;
                        break;
                    }
                    break;
                case -1784763192:
                    if (str5.equals(MatroskaExtractor.CODEC_ID_TRUEHD)) {
                        b = 17;
                        break;
                    }
                    break;
                case -1730367663:
                    if (str5.equals(MatroskaExtractor.CODEC_ID_VORBIS)) {
                        b = 10;
                        break;
                    }
                    break;
                case -1482641358:
                    if (str5.equals(MatroskaExtractor.CODEC_ID_MP2)) {
                        b = 13;
                        break;
                    }
                    break;
                case -1482641357:
                    if (str5.equals(MatroskaExtractor.CODEC_ID_MP3)) {
                        b = 14;
                        break;
                    }
                    break;
                case -1373388978:
                    if (str5.equals(MatroskaExtractor.CODEC_ID_FOURCC)) {
                        b = 8;
                        break;
                    }
                    break;
                case -933872740:
                    if (str5.equals(MatroskaExtractor.CODEC_ID_DVBSUB)) {
                        b = 28;
                        break;
                    }
                    break;
                case -538363189:
                    if (str5.equals(MatroskaExtractor.CODEC_ID_MPEG4_ASP)) {
                        b = 4;
                        break;
                    }
                    break;
                case -538363109:
                    if (str5.equals(MatroskaExtractor.CODEC_ID_H264)) {
                        b = 6;
                        break;
                    }
                    break;
                case -425012669:
                    if (str5.equals(MatroskaExtractor.CODEC_ID_VOBSUB)) {
                        b = 26;
                        break;
                    }
                    break;
                case -356037306:
                    if (str5.equals(MatroskaExtractor.CODEC_ID_DTS_LOSSLESS)) {
                        b = 20;
                        break;
                    }
                    break;
                case 62923557:
                    if (str5.equals(MatroskaExtractor.CODEC_ID_AAC)) {
                        b = 12;
                        break;
                    }
                    break;
                case 62923603:
                    if (str5.equals(MatroskaExtractor.CODEC_ID_AC3)) {
                        b = 15;
                        break;
                    }
                    break;
                case 62927045:
                    if (str5.equals(MatroskaExtractor.CODEC_ID_DTS)) {
                        b = 18;
                        break;
                    }
                    break;
                case 82338133:
                    if (str5.equals(MatroskaExtractor.CODEC_ID_VP8)) {
                        b = 0;
                        break;
                    }
                    break;
                case 82338134:
                    if (str5.equals(MatroskaExtractor.CODEC_ID_VP9)) {
                        b = 1;
                        break;
                    }
                    break;
                case 99146302:
                    if (str5.equals(MatroskaExtractor.CODEC_ID_PGS)) {
                        b = 27;
                        break;
                    }
                    break;
                case 444813526:
                    if (str5.equals(MatroskaExtractor.CODEC_ID_THEORA)) {
                        b = 9;
                        break;
                    }
                    break;
                case 542569478:
                    if (str5.equals(MatroskaExtractor.CODEC_ID_DTS_EXPRESS)) {
                        b = 19;
                        break;
                    }
                    break;
                case 725957860:
                    if (str5.equals(MatroskaExtractor.CODEC_ID_PCM_INT_LIT)) {
                        b = 23;
                        break;
                    }
                    break;
                case 738597099:
                    if (str5.equals(MatroskaExtractor.CODEC_ID_ASS)) {
                        b = 25;
                        break;
                    }
                    break;
                case 855502857:
                    if (str5.equals(MatroskaExtractor.CODEC_ID_H265)) {
                        b = 7;
                        break;
                    }
                    break;
                case 1422270023:
                    if (str5.equals(MatroskaExtractor.CODEC_ID_SUBRIP)) {
                        b = 24;
                        break;
                    }
                    break;
                case 1809237540:
                    if (str5.equals(MatroskaExtractor.CODEC_ID_MPEG2)) {
                        b = 2;
                        break;
                    }
                    break;
                case 1950749482:
                    if (str5.equals(MatroskaExtractor.CODEC_ID_E_AC3)) {
                        b = Tnaf.POW_2_WIDTH;
                        break;
                    }
                    break;
                case 1950789798:
                    if (str5.equals(MatroskaExtractor.CODEC_ID_FLAC)) {
                        b = 21;
                        break;
                    }
                    break;
                case 1951062397:
                    if (str5.equals(MatroskaExtractor.CODEC_ID_OPUS)) {
                        b = 11;
                        break;
                    }
                    break;
            }
            String str6 = "audio/x-unknown";
            switch (b) {
                case 0:
                    str = "video/x-vnd.on2.vp8";
                    str6 = str;
                    listSingletonList = null;
                    i4 = -1;
                    i3 = -1;
                    int i8 = (this.flagDefault ? 1 : 0) | 0 | (this.flagForced ? 2 : 0);
                    if (!MimeTypes.isAudio(str6)) {
                        formatCreateImageSampleFormat = Format.createAudioSampleFormat(Integer.toString(i), str6, null, -1, i3, this.channelCount, this.sampleRate, i4, listSingletonList, this.drmInitData, i8, this.language);
                    } else if (MimeTypes.isVideo(str6)) {
                        if (this.displayUnit == 0) {
                            int i9 = this.displayWidth;
                            i5 = -1;
                            if (i9 == -1) {
                                i9 = this.width;
                            }
                            this.displayWidth = i9;
                            int i10 = this.displayHeight;
                            if (i10 == -1) {
                                i10 = this.height;
                            }
                            this.displayHeight = i10;
                        } else {
                            i5 = -1;
                        }
                        float f = -1.0f;
                        if (this.displayWidth != i5 && (i6 = this.displayHeight) != i5) {
                            f = (this.height * r5) / (this.width * i6);
                        }
                        formatCreateImageSampleFormat = Format.createVideoSampleFormat(Integer.toString(i), str6, null, -1, i3, this.width, this.height, -1.0f, listSingletonList, -1, f, this.projectionData, this.stereoMode, this.hasColorInfo ? new ColorInfo(this.colorSpace, this.colorRange, this.colorTransfer, getHdrStaticInfo()) : null, this.drmInitData);
                        i7 = 2;
                    } else {
                        if ("application/x-subrip".equals(str6)) {
                            formatCreateImageSampleFormat = Format.createTextSampleFormat(Integer.toString(i), str6, i8, this.language, this.drmInitData);
                        } else if ("text/x-ssa".equals(str6)) {
                            ArrayList arrayList = new ArrayList(2);
                            arrayList.add(MatroskaExtractor.SSA_DIALOGUE_FORMAT);
                            arrayList.add(this.codecPrivate);
                            formatCreateImageSampleFormat = Format.createTextSampleFormat(Integer.toString(i), str6, null, -1, i8, this.language, -1, this.drmInitData, Long.MAX_VALUE, arrayList);
                        } else if ("application/vobsub".equals(str6) || "application/pgs".equals(str6) || "application/dvbsubs".equals(str6)) {
                            formatCreateImageSampleFormat = Format.createImageSampleFormat(Integer.toString(i), str6, null, -1, i8, listSingletonList, this.language, this.drmInitData);
                        } else {
                            throw new ParserException("Unexpected MIME type.");
                        }
                        i7 = 3;
                    }
                    TrackOutput trackOutputTrack = extractorOutput.track(this.number, i7);
                    this.output = trackOutputTrack;
                    trackOutputTrack.format(formatCreateImageSampleFormat);
                    return;
                case 1:
                    str = "video/x-vnd.on2.vp9";
                    str6 = str;
                    listSingletonList = null;
                    i4 = -1;
                    i3 = -1;
                    int i82 = (this.flagDefault ? 1 : 0) | 0 | (this.flagForced ? 2 : 0);
                    if (!MimeTypes.isAudio(str6)) {
                    }
                    TrackOutput trackOutputTrack2 = extractorOutput.track(this.number, i7);
                    this.output = trackOutputTrack2;
                    trackOutputTrack2.format(formatCreateImageSampleFormat);
                    return;
                case 2:
                    str = "video/mpeg2";
                    str6 = str;
                    listSingletonList = null;
                    i4 = -1;
                    i3 = -1;
                    int i822 = (this.flagDefault ? 1 : 0) | 0 | (this.flagForced ? 2 : 0);
                    if (!MimeTypes.isAudio(str6)) {
                    }
                    TrackOutput trackOutputTrack22 = extractorOutput.track(this.number, i7);
                    this.output = trackOutputTrack22;
                    trackOutputTrack22.format(formatCreateImageSampleFormat);
                    return;
                case 3:
                case 4:
                case 5:
                    byte[] bArr = this.codecPrivate;
                    listSingletonList = bArr == null ? null : Collections.singletonList(bArr);
                    str2 = "video/mp4v-es";
                    str6 = str2;
                    i4 = -1;
                    i3 = -1;
                    int i8222 = (this.flagDefault ? 1 : 0) | 0 | (this.flagForced ? 2 : 0);
                    if (!MimeTypes.isAudio(str6)) {
                    }
                    TrackOutput trackOutputTrack222 = extractorOutput.track(this.number, i7);
                    this.output = trackOutputTrack222;
                    trackOutputTrack222.format(formatCreateImageSampleFormat);
                    return;
                case 6:
                    AvcConfig avcConfig = AvcConfig.parse(new ParsableByteArray(this.codecPrivate));
                    list = avcConfig.initializationData;
                    this.nalUnitLengthFieldLength = avcConfig.nalUnitLengthFieldLength;
                    str2 = "video/avc";
                    listSingletonList = list;
                    str6 = str2;
                    i4 = -1;
                    i3 = -1;
                    int i82222 = (this.flagDefault ? 1 : 0) | 0 | (this.flagForced ? 2 : 0);
                    if (!MimeTypes.isAudio(str6)) {
                    }
                    TrackOutput trackOutputTrack2222 = extractorOutput.track(this.number, i7);
                    this.output = trackOutputTrack2222;
                    trackOutputTrack2222.format(formatCreateImageSampleFormat);
                    return;
                case 7:
                    HevcConfig hevcConfig = HevcConfig.parse(new ParsableByteArray(this.codecPrivate));
                    list = hevcConfig.initializationData;
                    this.nalUnitLengthFieldLength = hevcConfig.nalUnitLengthFieldLength;
                    str2 = "video/hevc";
                    listSingletonList = list;
                    str6 = str2;
                    i4 = -1;
                    i3 = -1;
                    int i822222 = (this.flagDefault ? 1 : 0) | 0 | (this.flagForced ? 2 : 0);
                    if (!MimeTypes.isAudio(str6)) {
                    }
                    TrackOutput trackOutputTrack22222 = extractorOutput.track(this.number, i7);
                    this.output = trackOutputTrack22222;
                    trackOutputTrack22222.format(formatCreateImageSampleFormat);
                    return;
                case 8:
                    Pair<String, List<byte[]>> fourCcPrivate = parseFourCcPrivate(new ParsableByteArray(this.codecPrivate));
                    str2 = (String) fourCcPrivate.first;
                    listSingletonList = (List) fourCcPrivate.second;
                    str6 = str2;
                    i4 = -1;
                    i3 = -1;
                    int i8222222 = (this.flagDefault ? 1 : 0) | 0 | (this.flagForced ? 2 : 0);
                    if (!MimeTypes.isAudio(str6)) {
                    }
                    TrackOutput trackOutputTrack222222 = extractorOutput.track(this.number, i7);
                    this.output = trackOutputTrack222222;
                    trackOutputTrack222222.format(formatCreateImageSampleFormat);
                    return;
                case 9:
                    str = "video/x-unknown";
                    str6 = str;
                    listSingletonList = null;
                    i4 = -1;
                    i3 = -1;
                    int i82222222 = (this.flagDefault ? 1 : 0) | 0 | (this.flagForced ? 2 : 0);
                    if (!MimeTypes.isAudio(str6)) {
                    }
                    TrackOutput trackOutputTrack2222222 = extractorOutput.track(this.number, i7);
                    this.output = trackOutputTrack2222222;
                    trackOutputTrack2222222.format(formatCreateImageSampleFormat);
                    return;
                case 10:
                    i2 = 8192;
                    listSingletonList = parseVorbisCodecPrivate(this.codecPrivate);
                    str3 = "audio/vorbis";
                    str6 = str3;
                    i3 = i2;
                    i4 = -1;
                    int i822222222 = (this.flagDefault ? 1 : 0) | 0 | (this.flagForced ? 2 : 0);
                    if (!MimeTypes.isAudio(str6)) {
                    }
                    TrackOutput trackOutputTrack22222222 = extractorOutput.track(this.number, i7);
                    this.output = trackOutputTrack22222222;
                    trackOutputTrack22222222.format(formatCreateImageSampleFormat);
                    return;
                case 11:
                    i2 = MatroskaExtractor.OPUS_MAX_INPUT_SIZE;
                    listSingletonList = new ArrayList<>(3);
                    listSingletonList.add(this.codecPrivate);
                    listSingletonList.add(ByteBuffer.allocate(8).order(ByteOrder.nativeOrder()).putLong(this.codecDelayNs).array());
                    listSingletonList.add(ByteBuffer.allocate(8).order(ByteOrder.nativeOrder()).putLong(this.seekPreRollNs).array());
                    str3 = "audio/opus";
                    str6 = str3;
                    i3 = i2;
                    i4 = -1;
                    int i8222222222 = (this.flagDefault ? 1 : 0) | 0 | (this.flagForced ? 2 : 0);
                    if (!MimeTypes.isAudio(str6)) {
                    }
                    TrackOutput trackOutputTrack222222222 = extractorOutput.track(this.number, i7);
                    this.output = trackOutputTrack222222222;
                    trackOutputTrack222222222.format(formatCreateImageSampleFormat);
                    return;
                case 12:
                    listSingletonList = Collections.singletonList(this.codecPrivate);
                    str2 = "audio/mp4a-latm";
                    str6 = str2;
                    i4 = -1;
                    i3 = -1;
                    int i82222222222 = (this.flagDefault ? 1 : 0) | 0 | (this.flagForced ? 2 : 0);
                    if (!MimeTypes.isAudio(str6)) {
                    }
                    TrackOutput trackOutputTrack2222222222 = extractorOutput.track(this.number, i7);
                    this.output = trackOutputTrack2222222222;
                    trackOutputTrack2222222222.format(formatCreateImageSampleFormat);
                    return;
                case 13:
                    str4 = "audio/mpeg-L2";
                    str6 = str4;
                    i3 = 4096;
                    listSingletonList = null;
                    i4 = -1;
                    int i822222222222 = (this.flagDefault ? 1 : 0) | 0 | (this.flagForced ? 2 : 0);
                    if (!MimeTypes.isAudio(str6)) {
                    }
                    TrackOutput trackOutputTrack22222222222 = extractorOutput.track(this.number, i7);
                    this.output = trackOutputTrack22222222222;
                    trackOutputTrack22222222222.format(formatCreateImageSampleFormat);
                    return;
                case 14:
                    str4 = "audio/mpeg";
                    str6 = str4;
                    i3 = 4096;
                    listSingletonList = null;
                    i4 = -1;
                    int i8222222222222 = (this.flagDefault ? 1 : 0) | 0 | (this.flagForced ? 2 : 0);
                    if (!MimeTypes.isAudio(str6)) {
                    }
                    TrackOutput trackOutputTrack222222222222 = extractorOutput.track(this.number, i7);
                    this.output = trackOutputTrack222222222222;
                    trackOutputTrack222222222222.format(formatCreateImageSampleFormat);
                    return;
                case 15:
                    str = "audio/ac3";
                    str6 = str;
                    listSingletonList = null;
                    i4 = -1;
                    i3 = -1;
                    int i82222222222222 = (this.flagDefault ? 1 : 0) | 0 | (this.flagForced ? 2 : 0);
                    if (!MimeTypes.isAudio(str6)) {
                    }
                    TrackOutput trackOutputTrack2222222222222 = extractorOutput.track(this.number, i7);
                    this.output = trackOutputTrack2222222222222;
                    trackOutputTrack2222222222222.format(formatCreateImageSampleFormat);
                    return;
                case 16:
                    str = "audio/eac3";
                    str6 = str;
                    listSingletonList = null;
                    i4 = -1;
                    i3 = -1;
                    int i822222222222222 = (this.flagDefault ? 1 : 0) | 0 | (this.flagForced ? 2 : 0);
                    if (!MimeTypes.isAudio(str6)) {
                    }
                    TrackOutput trackOutputTrack22222222222222 = extractorOutput.track(this.number, i7);
                    this.output = trackOutputTrack22222222222222;
                    trackOutputTrack22222222222222.format(formatCreateImageSampleFormat);
                    return;
                case 17:
                    this.trueHdSampleRechunker = new TrueHdSampleRechunker();
                    str = "audio/true-hd";
                    str6 = str;
                    listSingletonList = null;
                    i4 = -1;
                    i3 = -1;
                    int i8222222222222222 = (this.flagDefault ? 1 : 0) | 0 | (this.flagForced ? 2 : 0);
                    if (!MimeTypes.isAudio(str6)) {
                    }
                    TrackOutput trackOutputTrack222222222222222 = extractorOutput.track(this.number, i7);
                    this.output = trackOutputTrack222222222222222;
                    trackOutputTrack222222222222222.format(formatCreateImageSampleFormat);
                    return;
                case 18:
                case 19:
                    str = "audio/vnd.dts";
                    str6 = str;
                    listSingletonList = null;
                    i4 = -1;
                    i3 = -1;
                    int i82222222222222222 = (this.flagDefault ? 1 : 0) | 0 | (this.flagForced ? 2 : 0);
                    if (!MimeTypes.isAudio(str6)) {
                    }
                    TrackOutput trackOutputTrack2222222222222222 = extractorOutput.track(this.number, i7);
                    this.output = trackOutputTrack2222222222222222;
                    trackOutputTrack2222222222222222.format(formatCreateImageSampleFormat);
                    return;
                case 20:
                    str = "audio/vnd.dts.hd";
                    str6 = str;
                    listSingletonList = null;
                    i4 = -1;
                    i3 = -1;
                    int i822222222222222222 = (this.flagDefault ? 1 : 0) | 0 | (this.flagForced ? 2 : 0);
                    if (!MimeTypes.isAudio(str6)) {
                    }
                    TrackOutput trackOutputTrack22222222222222222 = extractorOutput.track(this.number, i7);
                    this.output = trackOutputTrack22222222222222222;
                    trackOutputTrack22222222222222222.format(formatCreateImageSampleFormat);
                    return;
                case 21:
                    listSingletonList = Collections.singletonList(this.codecPrivate);
                    str2 = "audio/flac";
                    str6 = str2;
                    i4 = -1;
                    i3 = -1;
                    int i8222222222222222222 = (this.flagDefault ? 1 : 0) | 0 | (this.flagForced ? 2 : 0);
                    if (!MimeTypes.isAudio(str6)) {
                    }
                    TrackOutput trackOutputTrack222222222222222222 = extractorOutput.track(this.number, i7);
                    this.output = trackOutputTrack222222222222222222;
                    trackOutputTrack222222222222222222.format(formatCreateImageSampleFormat);
                    return;
                case 22:
                    if (parseMsAcmCodecPrivate(new ParsableByteArray(this.codecPrivate))) {
                        pcmEncoding = Util.getPcmEncoding(this.audioBitDepth);
                        if (pcmEncoding == 0) {
                            Log.w(MatroskaExtractor.TAG, "Unsupported PCM bit depth: " + this.audioBitDepth + ". Setting mimeType to audio/x-unknown");
                        }
                        i4 = pcmEncoding;
                        str6 = "audio/raw";
                        listSingletonList = null;
                        i3 = -1;
                        int i82222222222222222222 = (this.flagDefault ? 1 : 0) | 0 | (this.flagForced ? 2 : 0);
                        if (!MimeTypes.isAudio(str6)) {
                        }
                        TrackOutput trackOutputTrack2222222222222222222 = extractorOutput.track(this.number, i7);
                        this.output = trackOutputTrack2222222222222222222;
                        trackOutputTrack2222222222222222222.format(formatCreateImageSampleFormat);
                        return;
                    }
                    Log.w(MatroskaExtractor.TAG, "Non-PCM MS/ACM is unsupported. Setting mimeType to audio/x-unknown");
                    listSingletonList = null;
                    i4 = -1;
                    i3 = -1;
                    int i822222222222222222222 = (this.flagDefault ? 1 : 0) | 0 | (this.flagForced ? 2 : 0);
                    if (!MimeTypes.isAudio(str6)) {
                    }
                    TrackOutput trackOutputTrack22222222222222222222 = extractorOutput.track(this.number, i7);
                    this.output = trackOutputTrack22222222222222222222;
                    trackOutputTrack22222222222222222222.format(formatCreateImageSampleFormat);
                    return;
                case 23:
                    pcmEncoding = Util.getPcmEncoding(this.audioBitDepth);
                    if (pcmEncoding == 0) {
                        Log.w(MatroskaExtractor.TAG, "Unsupported PCM bit depth: " + this.audioBitDepth + ". Setting mimeType to audio/x-unknown");
                        listSingletonList = null;
                        i4 = -1;
                        i3 = -1;
                        int i8222222222222222222222 = (this.flagDefault ? 1 : 0) | 0 | (this.flagForced ? 2 : 0);
                        if (!MimeTypes.isAudio(str6)) {
                        }
                        TrackOutput trackOutputTrack222222222222222222222 = extractorOutput.track(this.number, i7);
                        this.output = trackOutputTrack222222222222222222222;
                        trackOutputTrack222222222222222222222.format(formatCreateImageSampleFormat);
                        return;
                    }
                    i4 = pcmEncoding;
                    str6 = "audio/raw";
                    listSingletonList = null;
                    i3 = -1;
                    int i82222222222222222222222 = (this.flagDefault ? 1 : 0) | 0 | (this.flagForced ? 2 : 0);
                    if (!MimeTypes.isAudio(str6)) {
                    }
                    TrackOutput trackOutputTrack2222222222222222222222 = extractorOutput.track(this.number, i7);
                    this.output = trackOutputTrack2222222222222222222222;
                    trackOutputTrack2222222222222222222222.format(formatCreateImageSampleFormat);
                    return;
                case 24:
                    str6 = "application/x-subrip";
                    listSingletonList = null;
                    i4 = -1;
                    i3 = -1;
                    int i822222222222222222222222 = (this.flagDefault ? 1 : 0) | 0 | (this.flagForced ? 2 : 0);
                    if (!MimeTypes.isAudio(str6)) {
                    }
                    TrackOutput trackOutputTrack22222222222222222222222 = extractorOutput.track(this.number, i7);
                    this.output = trackOutputTrack22222222222222222222222;
                    trackOutputTrack22222222222222222222222.format(formatCreateImageSampleFormat);
                    return;
                case 25:
                    str6 = "text/x-ssa";
                    listSingletonList = null;
                    i4 = -1;
                    i3 = -1;
                    int i8222222222222222222222222 = (this.flagDefault ? 1 : 0) | 0 | (this.flagForced ? 2 : 0);
                    if (!MimeTypes.isAudio(str6)) {
                    }
                    TrackOutput trackOutputTrack222222222222222222222222 = extractorOutput.track(this.number, i7);
                    this.output = trackOutputTrack222222222222222222222222;
                    trackOutputTrack222222222222222222222222.format(formatCreateImageSampleFormat);
                    return;
                case 26:
                    listSingletonList = Collections.singletonList(this.codecPrivate);
                    str6 = "application/vobsub";
                    i4 = -1;
                    i3 = -1;
                    int i82222222222222222222222222 = (this.flagDefault ? 1 : 0) | 0 | (this.flagForced ? 2 : 0);
                    if (!MimeTypes.isAudio(str6)) {
                    }
                    TrackOutput trackOutputTrack2222222222222222222222222 = extractorOutput.track(this.number, i7);
                    this.output = trackOutputTrack2222222222222222222222222;
                    trackOutputTrack2222222222222222222222222.format(formatCreateImageSampleFormat);
                    return;
                case 27:
                    str6 = "application/pgs";
                    listSingletonList = null;
                    i4 = -1;
                    i3 = -1;
                    int i822222222222222222222222222 = (this.flagDefault ? 1 : 0) | 0 | (this.flagForced ? 2 : 0);
                    if (!MimeTypes.isAudio(str6)) {
                    }
                    TrackOutput trackOutputTrack22222222222222222222222222 = extractorOutput.track(this.number, i7);
                    this.output = trackOutputTrack22222222222222222222222222;
                    trackOutputTrack22222222222222222222222222.format(formatCreateImageSampleFormat);
                    return;
                case 28:
                    byte[] bArr2 = this.codecPrivate;
                    listSingletonList = Collections.singletonList(new byte[]{bArr2[0], bArr2[1], bArr2[2], bArr2[3]});
                    str6 = "application/dvbsubs";
                    i4 = -1;
                    i3 = -1;
                    int i8222222222222222222222222222 = (this.flagDefault ? 1 : 0) | 0 | (this.flagForced ? 2 : 0);
                    if (!MimeTypes.isAudio(str6)) {
                    }
                    TrackOutput trackOutputTrack222222222222222222222222222 = extractorOutput.track(this.number, i7);
                    this.output = trackOutputTrack222222222222222222222222222;
                    trackOutputTrack222222222222222222222222222.format(formatCreateImageSampleFormat);
                    return;
                default:
                    throw new ParserException("Unrecognized codec identifier.");
            }
        }

        public final void outputPendingSampleMetadata() {
            TrueHdSampleRechunker trueHdSampleRechunker = this.trueHdSampleRechunker;
            if (trueHdSampleRechunker != null) {
                trueHdSampleRechunker.outputPendingSampleMetadata(this);
            }
        }

        public final void reset() {
            TrueHdSampleRechunker trueHdSampleRechunker = this.trueHdSampleRechunker;
            if (trueHdSampleRechunker != null) {
                trueHdSampleRechunker.reset();
            }
        }

        private byte[] getHdrStaticInfo() {
            if (this.primaryRChromaticityX == -1.0f || this.primaryRChromaticityY == -1.0f || this.primaryGChromaticityX == -1.0f || this.primaryGChromaticityY == -1.0f || this.primaryBChromaticityX == -1.0f || this.primaryBChromaticityY == -1.0f || this.whitePointChromaticityX == -1.0f || this.whitePointChromaticityY == -1.0f || this.maxMasteringLuminance == -1.0f || this.minMasteringLuminance == -1.0f) {
                return null;
            }
            byte[] bArr = new byte[25];
            ByteBuffer byteBufferWrap = ByteBuffer.wrap(bArr);
            byteBufferWrap.put((byte) 0);
            byteBufferWrap.putShort((short) ((this.primaryRChromaticityX * 50000.0f) + 0.5f));
            byteBufferWrap.putShort((short) ((this.primaryRChromaticityY * 50000.0f) + 0.5f));
            byteBufferWrap.putShort((short) ((this.primaryGChromaticityX * 50000.0f) + 0.5f));
            byteBufferWrap.putShort((short) ((this.primaryGChromaticityY * 50000.0f) + 0.5f));
            byteBufferWrap.putShort((short) ((this.primaryBChromaticityX * 50000.0f) + 0.5f));
            byteBufferWrap.putShort((short) ((this.primaryBChromaticityY * 50000.0f) + 0.5f));
            byteBufferWrap.putShort((short) ((this.whitePointChromaticityX * 50000.0f) + 0.5f));
            byteBufferWrap.putShort((short) ((this.whitePointChromaticityY * 50000.0f) + 0.5f));
            byteBufferWrap.putShort((short) (this.maxMasteringLuminance + 0.5f));
            byteBufferWrap.putShort((short) (this.minMasteringLuminance + 0.5f));
            byteBufferWrap.putShort((short) this.maxContentLuminance);
            byteBufferWrap.putShort((short) this.maxFrameAverageLuminance);
            return bArr;
        }

        private static Pair<String, List<byte[]>> parseFourCcPrivate(ParsableByteArray parsableByteArray) throws ParserException {
            try {
                parsableByteArray.skipBytes(16);
                long littleEndianUnsignedInt = parsableByteArray.readLittleEndianUnsignedInt();
                if (littleEndianUnsignedInt == 1482049860) {
                    return new Pair<>("video/3gpp", null);
                }
                if (littleEndianUnsignedInt == 826496599) {
                    byte[] bArr = parsableByteArray.data;
                    for (int position = parsableByteArray.getPosition() + 20; position < bArr.length - 4; position++) {
                        if (bArr[position] == 0 && bArr[position + 1] == 0 && bArr[position + 2] == 1 && bArr[position + 3] == 15) {
                            return new Pair<>("video/wvc1", Collections.singletonList(Arrays.copyOfRange(bArr, position, bArr.length)));
                        }
                    }
                    throw new ParserException("Failed to find FourCC VC1 initialization data");
                }
                Log.w(MatroskaExtractor.TAG, "Unknown FourCC. Setting mimeType to video/x-unknown");
                return new Pair<>("video/x-unknown", null);
            } catch (ArrayIndexOutOfBoundsException unused) {
                throw new ParserException("Error parsing FourCC private data");
            }
        }

        private static List<byte[]> parseVorbisCodecPrivate(byte[] bArr) throws ParserException {
            try {
                if (bArr[0] != 2) {
                    throw new ParserException("Error parsing vorbis codec private");
                }
                int i = 0;
                int i2 = 1;
                while (bArr[i2] == -1) {
                    i += 255;
                    i2++;
                }
                int i3 = i2 + 1;
                int i4 = i + bArr[i2];
                int i5 = 0;
                while (bArr[i3] == -1) {
                    i5 += 255;
                    i3++;
                }
                int i6 = i3 + 1;
                int i7 = i5 + bArr[i3];
                if (bArr[i6] != 1) {
                    throw new ParserException("Error parsing vorbis codec private");
                }
                byte[] bArr2 = new byte[i4];
                System.arraycopy(bArr, i6, bArr2, 0, i4);
                int i8 = i6 + i4;
                if (bArr[i8] != 3) {
                    throw new ParserException("Error parsing vorbis codec private");
                }
                int i9 = i8 + i7;
                if (bArr[i9] != 5) {
                    throw new ParserException("Error parsing vorbis codec private");
                }
                byte[] bArr3 = new byte[bArr.length - i9];
                System.arraycopy(bArr, i9, bArr3, 0, bArr.length - i9);
                ArrayList arrayList = new ArrayList(2);
                arrayList.add(bArr2);
                arrayList.add(bArr3);
                return arrayList;
            } catch (ArrayIndexOutOfBoundsException unused) {
                throw new ParserException("Error parsing vorbis codec private");
            }
        }

        private static boolean parseMsAcmCodecPrivate(ParsableByteArray parsableByteArray) throws ParserException {
            try {
                int littleEndianUnsignedShort = parsableByteArray.readLittleEndianUnsignedShort();
                if (littleEndianUnsignedShort == 1) {
                    return true;
                }
                if (littleEndianUnsignedShort != MatroskaExtractor.WAVE_FORMAT_EXTENSIBLE) {
                    return false;
                }
                parsableByteArray.setPosition(24);
                if (parsableByteArray.readLong() == MatroskaExtractor.WAVE_SUBFORMAT_PCM.getMostSignificantBits()) {
                    if (parsableByteArray.readLong() == MatroskaExtractor.WAVE_SUBFORMAT_PCM.getLeastSignificantBits()) {
                        return true;
                    }
                }
                return false;
            } catch (ArrayIndexOutOfBoundsException unused) {
                throw new ParserException("Error parsing MS/ACM codec private");
            }
        }
    }
}
