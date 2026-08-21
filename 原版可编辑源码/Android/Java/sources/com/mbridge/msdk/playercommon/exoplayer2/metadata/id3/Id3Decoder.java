package com.mbridge.msdk.playercommon.exoplayer2.metadata.id3;

import android.util.Log;
import com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata;
import com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoder;
import com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataInputBuffer;
import com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray;
import com.mbridge.msdk.playercommon.exoplayer2.util.Util;
import java.io.UnsupportedEncodingException;
import java.nio.ByteBuffer;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Locale;
import kotlin.UByte;

public final class Id3Decoder implements MetadataDecoder {
    private static final int FRAME_FLAG_V3_HAS_GROUP_IDENTIFIER = 32;
    private static final int FRAME_FLAG_V3_IS_COMPRESSED = 128;
    private static final int FRAME_FLAG_V3_IS_ENCRYPTED = 64;
    private static final int FRAME_FLAG_V4_HAS_DATA_LENGTH = 1;
    private static final int FRAME_FLAG_V4_HAS_GROUP_IDENTIFIER = 64;
    private static final int FRAME_FLAG_V4_IS_COMPRESSED = 8;
    private static final int FRAME_FLAG_V4_IS_ENCRYPTED = 4;
    private static final int FRAME_FLAG_V4_IS_UNSYNCHRONIZED = 2;
    public static final int ID3_HEADER_LENGTH = 10;
    private static final int ID3_TEXT_ENCODING_ISO_8859_1 = 0;
    private static final int ID3_TEXT_ENCODING_UTF_16 = 1;
    private static final int ID3_TEXT_ENCODING_UTF_16BE = 2;
    private static final int ID3_TEXT_ENCODING_UTF_8 = 3;
    private static final String TAG = "Id3Decoder";
    private final FramePredicate framePredicate;
    public static final FramePredicate NO_FRAMES_PREDICATE = new FramePredicate() {
        @Override
        public final boolean evaluate(int i, int i2, int i3, int i4, int i5) {
            return false;
        }
    };
    public static final int ID3_TAG = Util.getIntegerCodeForString("ID3");

    public interface FramePredicate {
        boolean evaluate(int i, int i2, int i3, int i4, int i5);
    }

    private static int delimiterLength(int i) {
        return (i == 0 || i == 3) ? 1 : 2;
    }

    private static String getCharsetName(int i) {
        return i != 1 ? i != 2 ? i != 3 ? "ISO-8859-1" : "UTF-8" : "UTF-16BE" : "UTF-16";
    }

    public Id3Decoder() {
        this(null);
    }

    public Id3Decoder(FramePredicate framePredicate) {
        this.framePredicate = framePredicate;
    }

    @Override
    public final Metadata decode(MetadataInputBuffer metadataInputBuffer) {
        ByteBuffer byteBuffer = metadataInputBuffer.data;
        return decode(byteBuffer.array(), byteBuffer.limit());
    }

    public final Metadata decode(byte[] bArr, int i) {
        ArrayList arrayList = new ArrayList();
        ParsableByteArray parsableByteArray = new ParsableByteArray(bArr, i);
        Id3Header id3HeaderDecodeHeader = decodeHeader(parsableByteArray);
        if (id3HeaderDecodeHeader == null) {
            return null;
        }
        int position = parsableByteArray.getPosition();
        int i2 = id3HeaderDecodeHeader.majorVersion == 2 ? 6 : 10;
        int iRemoveUnsynchronization = id3HeaderDecodeHeader.framesSize;
        if (id3HeaderDecodeHeader.isUnsynchronized) {
            iRemoveUnsynchronization = removeUnsynchronization(parsableByteArray, id3HeaderDecodeHeader.framesSize);
        }
        parsableByteArray.setLimit(position + iRemoveUnsynchronization);
        boolean z = false;
        if (!validateFrames(parsableByteArray, id3HeaderDecodeHeader.majorVersion, i2, false)) {
            if (id3HeaderDecodeHeader.majorVersion != 4 || !validateFrames(parsableByteArray, 4, i2, true)) {
                Log.w(TAG, "Failed to validate ID3 tag with majorVersion=" + id3HeaderDecodeHeader.majorVersion);
                return null;
            }
            z = true;
        }
        while (parsableByteArray.bytesLeft() >= i2) {
            Id3Frame id3FrameDecodeFrame = decodeFrame(id3HeaderDecodeHeader.majorVersion, parsableByteArray, z, i2, this.framePredicate);
            if (id3FrameDecodeFrame != null) {
                arrayList.add(id3FrameDecodeFrame);
            }
        }
        return new Metadata(arrayList);
    }

    private static Id3Header decodeHeader(ParsableByteArray parsableByteArray) {
        if (parsableByteArray.bytesLeft() < 10) {
            Log.w(TAG, "Data too short to be an ID3 tag");
            return null;
        }
        int unsignedInt24 = parsableByteArray.readUnsignedInt24();
        if (unsignedInt24 != ID3_TAG) {
            Log.w(TAG, "Unexpected first three bytes of ID3 tag header: " + unsignedInt24);
            return null;
        }
        int unsignedByte = parsableByteArray.readUnsignedByte();
        parsableByteArray.skipBytes(1);
        int unsignedByte2 = parsableByteArray.readUnsignedByte();
        int synchSafeInt = parsableByteArray.readSynchSafeInt();
        if (unsignedByte == 2) {
            if ((unsignedByte2 & 64) != 0) {
                Log.w(TAG, "Skipped ID3 tag with majorVersion=2 and undefined compression scheme");
                return null;
            }
        } else if (unsignedByte == 3) {
            if ((unsignedByte2 & 64) != 0) {
                int i = parsableByteArray.readInt();
                parsableByteArray.skipBytes(i);
                synchSafeInt -= i + 4;
            }
        } else {
            if (unsignedByte != 4) {
                Log.w(TAG, "Skipped ID3 tag with unsupported majorVersion=" + unsignedByte);
                return null;
            }
            if ((unsignedByte2 & 64) != 0) {
                int synchSafeInt2 = parsableByteArray.readSynchSafeInt();
                parsableByteArray.skipBytes(synchSafeInt2 - 4);
                synchSafeInt -= synchSafeInt2;
            }
            if ((unsignedByte2 & 16) != 0) {
                synchSafeInt -= 10;
            }
        }
        return new Id3Header(unsignedByte, unsignedByte < 4 && (unsignedByte2 & 128) != 0, synchSafeInt);
    }

    /* JADX WARN: Removed duplicated region for block: B:32:0x0078 A[PHI: r3
      0x0078: PHI (r3v15 boolean) = (r3v5 boolean), (r3v18 boolean) binds: [B:40:0x0087, B:31:0x0076] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:33:0x007a A[PHI: r3
      0x007a: PHI (r3v7 boolean) = (r3v5 boolean), (r3v18 boolean) binds: [B:40:0x0087, B:31:0x0076] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static boolean validateFrames(ParsableByteArray parsableByteArray, int i, int i2, boolean z) {
        int unsignedInt24;
        long unsignedInt242;
        int unsignedShort;
        boolean z2;
        boolean z3;
        int position = parsableByteArray.getPosition();
        while (true) {
            try {
                if (parsableByteArray.bytesLeft() < i2) {
                    return true;
                }
                if (i >= 3) {
                    unsignedInt24 = parsableByteArray.readInt();
                    unsignedInt242 = parsableByteArray.readUnsignedInt();
                    unsignedShort = parsableByteArray.readUnsignedShort();
                } else {
                    unsignedInt24 = parsableByteArray.readUnsignedInt24();
                    unsignedInt242 = parsableByteArray.readUnsignedInt24();
                    unsignedShort = 0;
                }
                if (unsignedInt24 == 0 && unsignedInt242 == 0 && unsignedShort == 0) {
                    return true;
                }
                if (i == 4 && !z) {
                    if ((8421504 & unsignedInt242) != 0) {
                        return false;
                    }
                    unsignedInt242 = (((unsignedInt242 >> 24) & 255) << 21) | (unsignedInt242 & 255) | (((unsignedInt242 >> 8) & 255) << 7) | (((unsignedInt242 >> 16) & 255) << 14);
                }
                if (i == 4) {
                    z2 = (unsignedShort & 64) != 0;
                    z3 = (unsignedShort & 1) != 0;
                } else if (i == 3) {
                    z2 = (unsignedShort & 32) != 0;
                    if ((unsignedShort & 128) != 0) {
                    }
                } else {
                    z2 = false;
                    z3 = false;
                }
                int i3 = z2 ? 1 : 0;
                if (z3) {
                    i3 += 4;
                }
                if (unsignedInt242 < i3) {
                    return false;
                }
                if (parsableByteArray.bytesLeft() < unsignedInt242) {
                    return false;
                }
                parsableByteArray.skipBytes((int) unsignedInt242);
            } finally {
                parsableByteArray.setPosition(position);
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:140:0x01aa  */
    /* JADX WARN: Removed duplicated region for block: B:146:0x01c4  */
    /* JADX WARN: Removed duplicated region for block: B:151:0x01dc A[Catch: all -> 0x0130, UnsupportedEncodingException -> 0x020a, TryCatch #1 {UnsupportedEncodingException -> 0x020a, blocks: (B:91:0x011e, B:153:0x01e6, B:93:0x0126, B:102:0x013f, B:104:0x0147, B:112:0x0161, B:121:0x0179, B:132:0x0194, B:139:0x01a5, B:145:0x01b4, B:150:0x01cc, B:151:0x01dc), top: B:163:0x0114, outer: #0 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static Id3Frame decodeFrame(int i, ParsableByteArray parsableByteArray, boolean z, int i2, FramePredicate framePredicate) {
        int unsignedInt24;
        String str;
        int i3;
        int i4;
        boolean z2;
        boolean z3;
        boolean z4;
        boolean z5;
        boolean z6;
        boolean z7;
        boolean z8;
        Id3Frame id3FrameDecodeBinaryFrame;
        int unsignedByte = parsableByteArray.readUnsignedByte();
        int unsignedByte2 = parsableByteArray.readUnsignedByte();
        int unsignedByte3 = parsableByteArray.readUnsignedByte();
        int unsignedByte4 = i >= 3 ? parsableByteArray.readUnsignedByte() : 0;
        if (i == 4) {
            unsignedInt24 = parsableByteArray.readUnsignedIntToInt();
            if (!z) {
                unsignedInt24 = (((unsignedInt24 >> 24) & 255) << 21) | (unsignedInt24 & 255) | (((unsignedInt24 >> 8) & 255) << 7) | (((unsignedInt24 >> 16) & 255) << 14);
            }
        } else if (i == 3) {
            unsignedInt24 = parsableByteArray.readUnsignedIntToInt();
        } else {
            unsignedInt24 = parsableByteArray.readUnsignedInt24();
        }
        int iRemoveUnsynchronization = unsignedInt24;
        int unsignedShort = i >= 3 ? parsableByteArray.readUnsignedShort() : 0;
        if (unsignedByte == 0 && unsignedByte2 == 0 && unsignedByte3 == 0 && unsignedByte4 == 0 && iRemoveUnsynchronization == 0 && unsignedShort == 0) {
            parsableByteArray.setPosition(parsableByteArray.limit());
            return null;
        }
        int position = parsableByteArray.getPosition() + iRemoveUnsynchronization;
        if (position > parsableByteArray.limit()) {
            Log.w(TAG, "Frame size exceeds remaining tag data");
            parsableByteArray.setPosition(parsableByteArray.limit());
            return null;
        }
        if (framePredicate != null) {
            str = TAG;
            i3 = position;
            i4 = unsignedShort;
            if (!framePredicate.evaluate(i, unsignedByte, unsignedByte2, unsignedByte3, unsignedByte4)) {
                parsableByteArray.setPosition(i3);
                return null;
            }
        } else {
            str = TAG;
            i3 = position;
            i4 = unsignedShort;
        }
        if (i == 3) {
            int i5 = i4;
            z8 = (i5 & 128) != 0;
            z4 = (i5 & 64) != 0;
            z5 = false;
            z3 = (i5 & 32) != 0;
            z7 = z8;
        } else {
            int i6 = i4;
            if (i != 4) {
                z2 = false;
                z3 = false;
                z4 = false;
                z5 = false;
                z6 = false;
                if (!z6 || z4) {
                    Log.w(str, "Skipping unsupported compressed or encrypted frame");
                    parsableByteArray.setPosition(i3);
                    return null;
                }
                if (z3) {
                    iRemoveUnsynchronization--;
                    parsableByteArray.skipBytes(1);
                }
                if (z2) {
                    iRemoveUnsynchronization -= 4;
                    parsableByteArray.skipBytes(4);
                }
                if (z5) {
                    iRemoveUnsynchronization = removeUnsynchronization(parsableByteArray, iRemoveUnsynchronization);
                }
                try {
                    try {
                        if (unsignedByte == 84 && unsignedByte2 == 88 && unsignedByte3 == 88 && (i == 2 || unsignedByte4 == 88)) {
                            id3FrameDecodeBinaryFrame = decodeTxxxFrame(parsableByteArray, iRemoveUnsynchronization);
                        } else if (unsignedByte == 84) {
                            id3FrameDecodeBinaryFrame = decodeTextInformationFrame(parsableByteArray, iRemoveUnsynchronization, getFrameId(i, unsignedByte, unsignedByte2, unsignedByte3, unsignedByte4));
                        } else if (unsignedByte == 87 && unsignedByte2 == 88 && unsignedByte3 == 88 && (i == 2 || unsignedByte4 == 88)) {
                            id3FrameDecodeBinaryFrame = decodeWxxxFrame(parsableByteArray, iRemoveUnsynchronization);
                        } else if (unsignedByte == 87) {
                            id3FrameDecodeBinaryFrame = decodeUrlLinkFrame(parsableByteArray, iRemoveUnsynchronization, getFrameId(i, unsignedByte, unsignedByte2, unsignedByte3, unsignedByte4));
                        } else if (unsignedByte == 80 && unsignedByte2 == 82 && unsignedByte3 == 73 && unsignedByte4 == 86) {
                            id3FrameDecodeBinaryFrame = decodePrivFrame(parsableByteArray, iRemoveUnsynchronization);
                        } else if (unsignedByte == 71 && unsignedByte2 == 69 && unsignedByte3 == 79 && (unsignedByte4 == 66 || i == 2)) {
                            id3FrameDecodeBinaryFrame = decodeGeobFrame(parsableByteArray, iRemoveUnsynchronization);
                        } else if (i == 2) {
                            if (unsignedByte == 80 && unsignedByte2 == 73 && unsignedByte3 == 67) {
                                id3FrameDecodeBinaryFrame = decodeApicFrame(parsableByteArray, iRemoveUnsynchronization, i);
                            }
                            if (unsignedByte != 67 && unsignedByte2 == 79 && unsignedByte3 == 77 && (unsignedByte4 == 77 || i == 2)) {
                                id3FrameDecodeBinaryFrame = decodeCommentFrame(parsableByteArray, iRemoveUnsynchronization);
                            } else if (unsignedByte != 67 && unsignedByte2 == 72 && unsignedByte3 == 65 && unsignedByte4 == 80) {
                                id3FrameDecodeBinaryFrame = decodeChapterFrame(parsableByteArray, iRemoveUnsynchronization, i, z, i2, framePredicate);
                            } else if (unsignedByte != 67 && unsignedByte2 == 84 && unsignedByte3 == 79 && unsignedByte4 == 67) {
                                id3FrameDecodeBinaryFrame = decodeChapterTOCFrame(parsableByteArray, iRemoveUnsynchronization, i, z, i2, framePredicate);
                            } else {
                                id3FrameDecodeBinaryFrame = decodeBinaryFrame(parsableByteArray, iRemoveUnsynchronization, getFrameId(i, unsignedByte, unsignedByte2, unsignedByte3, unsignedByte4));
                            }
                        } else if (unsignedByte == 65 && unsignedByte2 == 80 && unsignedByte3 == 73 && unsignedByte4 == 67) {
                            id3FrameDecodeBinaryFrame = decodeApicFrame(parsableByteArray, iRemoveUnsynchronization, i);
                        } else if (unsignedByte != 67) {
                            if (unsignedByte != 67) {
                                if (unsignedByte != 67) {
                                    id3FrameDecodeBinaryFrame = decodeBinaryFrame(parsableByteArray, iRemoveUnsynchronization, getFrameId(i, unsignedByte, unsignedByte2, unsignedByte3, unsignedByte4));
                                }
                            }
                        }
                        if (id3FrameDecodeBinaryFrame == null) {
                            Log.w(str, "Failed to decode frame: id=" + getFrameId(i, unsignedByte, unsignedByte2, unsignedByte3, unsignedByte4) + ", frameSize=" + iRemoveUnsynchronization);
                        }
                        parsableByteArray.setPosition(i3);
                        return id3FrameDecodeBinaryFrame;
                    } catch (UnsupportedEncodingException unused) {
                        Log.w(str, "Unsupported character encoding");
                        parsableByteArray.setPosition(i3);
                        return null;
                    }
                } catch (Throwable th) {
                    parsableByteArray.setPosition(i3);
                    throw th;
                }
            }
            z3 = (i6 & 64) != 0;
            z7 = (i6 & 8) != 0;
            z4 = (i6 & 4) != 0;
            z5 = (i6 & 2) != 0;
            z8 = (i6 & 1) != 0;
        }
        z2 = z8;
        z6 = z7;
        if (!z6) {
        }
        Log.w(str, "Skipping unsupported compressed or encrypted frame");
        parsableByteArray.setPosition(i3);
        return null;
    }

    private static TextInformationFrame decodeTxxxFrame(ParsableByteArray parsableByteArray, int i) throws UnsupportedEncodingException {
        if (i < 1) {
            return null;
        }
        int unsignedByte = parsableByteArray.readUnsignedByte();
        String charsetName = getCharsetName(unsignedByte);
        int i2 = i - 1;
        byte[] bArr = new byte[i2];
        parsableByteArray.readBytes(bArr, 0, i2);
        int iIndexOfEos = indexOfEos(bArr, 0, unsignedByte);
        String str = new String(bArr, 0, iIndexOfEos, charsetName);
        int iDelimiterLength = iIndexOfEos + delimiterLength(unsignedByte);
        return new TextInformationFrame("TXXX", str, decodeStringIfValid(bArr, iDelimiterLength, indexOfEos(bArr, iDelimiterLength, unsignedByte), charsetName));
    }

    private static TextInformationFrame decodeTextInformationFrame(ParsableByteArray parsableByteArray, int i, String str) throws UnsupportedEncodingException {
        if (i < 1) {
            return null;
        }
        int unsignedByte = parsableByteArray.readUnsignedByte();
        String charsetName = getCharsetName(unsignedByte);
        int i2 = i - 1;
        byte[] bArr = new byte[i2];
        parsableByteArray.readBytes(bArr, 0, i2);
        return new TextInformationFrame(str, null, new String(bArr, 0, indexOfEos(bArr, 0, unsignedByte), charsetName));
    }

    private static UrlLinkFrame decodeWxxxFrame(ParsableByteArray parsableByteArray, int i) throws UnsupportedEncodingException {
        if (i < 1) {
            return null;
        }
        int unsignedByte = parsableByteArray.readUnsignedByte();
        String charsetName = getCharsetName(unsignedByte);
        int i2 = i - 1;
        byte[] bArr = new byte[i2];
        parsableByteArray.readBytes(bArr, 0, i2);
        int iIndexOfEos = indexOfEos(bArr, 0, unsignedByte);
        String str = new String(bArr, 0, iIndexOfEos, charsetName);
        int iDelimiterLength = iIndexOfEos + delimiterLength(unsignedByte);
        return new UrlLinkFrame("WXXX", str, decodeStringIfValid(bArr, iDelimiterLength, indexOfZeroByte(bArr, iDelimiterLength), "ISO-8859-1"));
    }

    private static UrlLinkFrame decodeUrlLinkFrame(ParsableByteArray parsableByteArray, int i, String str) throws UnsupportedEncodingException {
        byte[] bArr = new byte[i];
        parsableByteArray.readBytes(bArr, 0, i);
        return new UrlLinkFrame(str, null, new String(bArr, 0, indexOfZeroByte(bArr, 0), "ISO-8859-1"));
    }

    private static PrivFrame decodePrivFrame(ParsableByteArray parsableByteArray, int i) throws UnsupportedEncodingException {
        byte[] bArr = new byte[i];
        parsableByteArray.readBytes(bArr, 0, i);
        int iIndexOfZeroByte = indexOfZeroByte(bArr, 0);
        return new PrivFrame(new String(bArr, 0, iIndexOfZeroByte, "ISO-8859-1"), copyOfRangeIfValid(bArr, iIndexOfZeroByte + 1, i));
    }

    private static GeobFrame decodeGeobFrame(ParsableByteArray parsableByteArray, int i) throws UnsupportedEncodingException {
        int unsignedByte = parsableByteArray.readUnsignedByte();
        String charsetName = getCharsetName(unsignedByte);
        int i2 = i - 1;
        byte[] bArr = new byte[i2];
        parsableByteArray.readBytes(bArr, 0, i2);
        int iIndexOfZeroByte = indexOfZeroByte(bArr, 0);
        String str = new String(bArr, 0, iIndexOfZeroByte, "ISO-8859-1");
        int i3 = iIndexOfZeroByte + 1;
        int iIndexOfEos = indexOfEos(bArr, i3, unsignedByte);
        String strDecodeStringIfValid = decodeStringIfValid(bArr, i3, iIndexOfEos, charsetName);
        int iDelimiterLength = iIndexOfEos + delimiterLength(unsignedByte);
        int iIndexOfEos2 = indexOfEos(bArr, iDelimiterLength, unsignedByte);
        return new GeobFrame(str, strDecodeStringIfValid, decodeStringIfValid(bArr, iDelimiterLength, iIndexOfEos2, charsetName), copyOfRangeIfValid(bArr, iIndexOfEos2 + delimiterLength(unsignedByte), i2));
    }

    private static ApicFrame decodeApicFrame(ParsableByteArray parsableByteArray, int i, int i2) throws UnsupportedEncodingException {
        int iIndexOfZeroByte;
        String str;
        int unsignedByte = parsableByteArray.readUnsignedByte();
        String charsetName = getCharsetName(unsignedByte);
        int i3 = i - 1;
        byte[] bArr = new byte[i3];
        parsableByteArray.readBytes(bArr, 0, i3);
        if (i2 == 2) {
            str = "image/" + Util.toLowerInvariant(new String(bArr, 0, 3, "ISO-8859-1"));
            if ("image/jpg".equals(str)) {
                str = "image/jpeg";
            }
            iIndexOfZeroByte = 2;
        } else {
            iIndexOfZeroByte = indexOfZeroByte(bArr, 0);
            String lowerInvariant = Util.toLowerInvariant(new String(bArr, 0, iIndexOfZeroByte, "ISO-8859-1"));
            if (lowerInvariant.indexOf(47) == -1) {
                str = "image/" + lowerInvariant;
            } else {
                str = lowerInvariant;
            }
        }
        int i4 = bArr[iIndexOfZeroByte + 1] & UByte.MAX_VALUE;
        int i5 = iIndexOfZeroByte + 2;
        int iIndexOfEos = indexOfEos(bArr, i5, unsignedByte);
        return new ApicFrame(str, new String(bArr, i5, iIndexOfEos - i5, charsetName), i4, copyOfRangeIfValid(bArr, iIndexOfEos + delimiterLength(unsignedByte), i3));
    }

    private static CommentFrame decodeCommentFrame(ParsableByteArray parsableByteArray, int i) throws UnsupportedEncodingException {
        if (i < 4) {
            return null;
        }
        int unsignedByte = parsableByteArray.readUnsignedByte();
        String charsetName = getCharsetName(unsignedByte);
        byte[] bArr = new byte[3];
        parsableByteArray.readBytes(bArr, 0, 3);
        String str = new String(bArr, 0, 3);
        int i2 = i - 4;
        byte[] bArr2 = new byte[i2];
        parsableByteArray.readBytes(bArr2, 0, i2);
        int iIndexOfEos = indexOfEos(bArr2, 0, unsignedByte);
        String str2 = new String(bArr2, 0, iIndexOfEos, charsetName);
        int iDelimiterLength = iIndexOfEos + delimiterLength(unsignedByte);
        return new CommentFrame(str, str2, decodeStringIfValid(bArr2, iDelimiterLength, indexOfEos(bArr2, iDelimiterLength, unsignedByte), charsetName));
    }

    private static ChapterFrame decodeChapterFrame(ParsableByteArray parsableByteArray, int i, int i2, boolean z, int i3, FramePredicate framePredicate) throws UnsupportedEncodingException {
        int position = parsableByteArray.getPosition();
        int iIndexOfZeroByte = indexOfZeroByte(parsableByteArray.data, position);
        String str = new String(parsableByteArray.data, position, iIndexOfZeroByte - position, "ISO-8859-1");
        parsableByteArray.setPosition(iIndexOfZeroByte + 1);
        int i4 = parsableByteArray.readInt();
        int i5 = parsableByteArray.readInt();
        long unsignedInt = parsableByteArray.readUnsignedInt();
        long j = unsignedInt == 4294967295L ? -1L : unsignedInt;
        long unsignedInt2 = parsableByteArray.readUnsignedInt();
        long j2 = unsignedInt2 == 4294967295L ? -1L : unsignedInt2;
        ArrayList arrayList = new ArrayList();
        int i6 = position + i;
        while (parsableByteArray.getPosition() < i6) {
            Id3Frame id3FrameDecodeFrame = decodeFrame(i2, parsableByteArray, z, i3, framePredicate);
            if (id3FrameDecodeFrame != null) {
                arrayList.add(id3FrameDecodeFrame);
            }
        }
        Id3Frame[] id3FrameArr = new Id3Frame[arrayList.size()];
        arrayList.toArray(id3FrameArr);
        return new ChapterFrame(str, i4, i5, j, j2, id3FrameArr);
    }

    private static ChapterTocFrame decodeChapterTOCFrame(ParsableByteArray parsableByteArray, int i, int i2, boolean z, int i3, FramePredicate framePredicate) throws UnsupportedEncodingException {
        int position = parsableByteArray.getPosition();
        int iIndexOfZeroByte = indexOfZeroByte(parsableByteArray.data, position);
        String str = new String(parsableByteArray.data, position, iIndexOfZeroByte - position, "ISO-8859-1");
        parsableByteArray.setPosition(iIndexOfZeroByte + 1);
        int unsignedByte = parsableByteArray.readUnsignedByte();
        boolean z2 = (unsignedByte & 2) != 0;
        boolean z3 = (unsignedByte & 1) != 0;
        int unsignedByte2 = parsableByteArray.readUnsignedByte();
        String[] strArr = new String[unsignedByte2];
        for (int i4 = 0; i4 < unsignedByte2; i4++) {
            int position2 = parsableByteArray.getPosition();
            int iIndexOfZeroByte2 = indexOfZeroByte(parsableByteArray.data, position2);
            strArr[i4] = new String(parsableByteArray.data, position2, iIndexOfZeroByte2 - position2, "ISO-8859-1");
            parsableByteArray.setPosition(iIndexOfZeroByte2 + 1);
        }
        ArrayList arrayList = new ArrayList();
        int i5 = position + i;
        while (parsableByteArray.getPosition() < i5) {
            Id3Frame id3FrameDecodeFrame = decodeFrame(i2, parsableByteArray, z, i3, framePredicate);
            if (id3FrameDecodeFrame != null) {
                arrayList.add(id3FrameDecodeFrame);
            }
        }
        Id3Frame[] id3FrameArr = new Id3Frame[arrayList.size()];
        arrayList.toArray(id3FrameArr);
        return new ChapterTocFrame(str, z2, z3, strArr, id3FrameArr);
    }

    private static BinaryFrame decodeBinaryFrame(ParsableByteArray parsableByteArray, int i, String str) {
        byte[] bArr = new byte[i];
        parsableByteArray.readBytes(bArr, 0, i);
        return new BinaryFrame(str, bArr);
    }

    private static int removeUnsynchronization(ParsableByteArray parsableByteArray, int i) {
        byte[] bArr = parsableByteArray.data;
        int position = parsableByteArray.getPosition();
        while (true) {
            int i2 = position + 1;
            if (i2 >= i) {
                return i;
            }
            if ((bArr[position] & UByte.MAX_VALUE) == 255 && bArr[i2] == 0) {
                System.arraycopy(bArr, position + 2, bArr, i2, (i - position) - 2);
                i--;
            }
            position = i2;
        }
    }

    private static String getFrameId(int i, int i2, int i3, int i4, int i5) {
        return i == 2 ? String.format(Locale.US, "%c%c%c", Integer.valueOf(i2), Integer.valueOf(i3), Integer.valueOf(i4)) : String.format(Locale.US, "%c%c%c%c", Integer.valueOf(i2), Integer.valueOf(i3), Integer.valueOf(i4), Integer.valueOf(i5));
    }

    private static int indexOfEos(byte[] bArr, int i, int i2) {
        int iIndexOfZeroByte = indexOfZeroByte(bArr, i);
        if (i2 == 0 || i2 == 3) {
            return iIndexOfZeroByte;
        }
        while (iIndexOfZeroByte < bArr.length - 1) {
            if (iIndexOfZeroByte % 2 == 0 && bArr[iIndexOfZeroByte + 1] == 0) {
                return iIndexOfZeroByte;
            }
            iIndexOfZeroByte = indexOfZeroByte(bArr, iIndexOfZeroByte + 1);
        }
        return bArr.length;
    }

    private static int indexOfZeroByte(byte[] bArr, int i) {
        while (i < bArr.length) {
            if (bArr[i] == 0) {
                return i;
            }
            i++;
        }
        return bArr.length;
    }

    private static byte[] copyOfRangeIfValid(byte[] bArr, int i, int i2) {
        return i2 <= i ? new byte[0] : Arrays.copyOfRange(bArr, i, i2);
    }

    private static String decodeStringIfValid(byte[] bArr, int i, int i2, String str) throws UnsupportedEncodingException {
        return (i2 <= i || i2 > bArr.length) ? "" : new String(bArr, i, i2 - i, str);
    }

    private static final class Id3Header {
        private final int framesSize;
        private final boolean isUnsynchronized;
        private final int majorVersion;

        public Id3Header(int i, boolean z, int i2) {
            this.majorVersion = i;
            this.isUnsynchronized = z;
            this.framesSize = i2;
        }
    }
}
