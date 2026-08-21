package com.mbridge.msdk.playercommon.exoplayer2.metadata;

import com.mbridge.msdk.playercommon.exoplayer2.Format;
import com.mbridge.msdk.playercommon.exoplayer2.metadata.emsg.EventMessageDecoder;
import com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder;
import com.mbridge.msdk.playercommon.exoplayer2.metadata.scte35.SpliceInfoDecoder;

public interface MetadataDecoderFactory {
    public static final MetadataDecoderFactory DEFAULT = new MetadataDecoderFactory() {
        @Override
        public final boolean supportsFormat(Format format) {
            String str = format.sampleMimeType;
            return "application/id3".equals(str) || "application/x-emsg".equals(str) || "application/x-scte35".equals(str);
        }

        /* JADX WARN: Removed duplicated region for block: B:18:0x0036  */
        @Override
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public final MetadataDecoder createDecoder(Format format) {
            byte b;
            String str = format.sampleMimeType;
            int iHashCode = str.hashCode();
            if (iHashCode != -1248341703) {
                if (iHashCode != 1154383568) {
                    b = (iHashCode == 1652648887 && str.equals("application/x-scte35")) ? (byte) 2 : (byte) -1;
                } else if (str.equals("application/x-emsg")) {
                    b = 1;
                }
            } else if (str.equals("application/id3")) {
                b = 0;
            }
            if (b == 0) {
                return new Id3Decoder();
            }
            if (b == 1) {
                return new EventMessageDecoder();
            }
            if (b == 2) {
                return new SpliceInfoDecoder();
            }
            throw new IllegalArgumentException("Attempted to create decoder for unsupported format");
        }
    };

    MetadataDecoder createDecoder(Format format);

    boolean supportsFormat(Format format);
}
