package com.mbridge.msdk.playercommon.exoplayer2.metadata;

import com.mbridge.msdk.playercommon.exoplayer2.Format;

/* JADX INFO: loaded from: classes2.dex */
public interface MetadataDecoderFactory {
    public static final MetadataDecoderFactory DEFAULT = new MetadataDecoderFactory() { // from class: com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderFactory.1
        @Override // com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderFactory
        public final boolean supportsFormat(Format format) {
            String str = format.sampleMimeType;
            return "application/id3".equals(str) || "application/x-emsg".equals(str) || "application/x-scte35".equals(str);
        }

        /* JADX WARN: Removed duplicated region for block: B:18:0x0036  */
        @Override // com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderFactory
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        public final com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoder createDecoder(com.mbridge.msdk.playercommon.exoplayer2.Format r5) {
            /*
                r4 = this;
                java.lang.String r5 = r5.sampleMimeType
                int r0 = r5.hashCode()
                r1 = -1248341703(0xffffffffb597d139, float:-1.1311269E-6)
                r2 = 2
                r3 = 1
                if (r0 == r1) goto L2c
                r1 = 1154383568(0x44ce7ed0, float:1651.9629)
                if (r0 == r1) goto L22
                r1 = 1652648887(0x62816bb7, float:1.1936958E21)
                if (r0 == r1) goto L18
                goto L36
            L18:
                java.lang.String r0 = "application/x-scte35"
                boolean r5 = r5.equals(r0)
                if (r5 == 0) goto L36
                r5 = r2
                goto L37
            L22:
                java.lang.String r0 = "application/x-emsg"
                boolean r5 = r5.equals(r0)
                if (r5 == 0) goto L36
                r5 = r3
                goto L37
            L2c:
                java.lang.String r0 = "application/id3"
                boolean r5 = r5.equals(r0)
                if (r5 == 0) goto L36
                r5 = 0
                goto L37
            L36:
                r5 = -1
            L37:
                if (r5 == 0) goto L51
                if (r5 == r3) goto L4b
                if (r5 != r2) goto L43
                com.mbridge.msdk.playercommon.exoplayer2.metadata.scte35.SpliceInfoDecoder r5 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.scte35.SpliceInfoDecoder
                r5.<init>()
                return r5
            L43:
                java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "Attempted to create decoder for unsupported format"
                r5.<init>(r0)
                throw r5
            L4b:
                com.mbridge.msdk.playercommon.exoplayer2.metadata.emsg.EventMessageDecoder r5 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.emsg.EventMessageDecoder
                r5.<init>()
                return r5
            L51:
                com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder r5 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder
                r5.<init>()
                return r5
            */
            throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderFactory.AnonymousClass1.createDecoder(com.mbridge.msdk.playercommon.exoplayer2.Format):com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoder");
        }
    };

    MetadataDecoder createDecoder(Format format);

    boolean supportsFormat(Format format);
}
