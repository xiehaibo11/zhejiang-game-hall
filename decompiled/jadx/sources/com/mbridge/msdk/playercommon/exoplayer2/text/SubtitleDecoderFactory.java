package com.mbridge.msdk.playercommon.exoplayer2.text;

import com.mbridge.msdk.playercommon.exoplayer2.Format;

/* JADX INFO: loaded from: classes2.dex */
public interface SubtitleDecoderFactory {
    public static final SubtitleDecoderFactory DEFAULT = new SubtitleDecoderFactory() { // from class: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderFactory.1
        @Override // com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderFactory
        public final boolean supportsFormat(Format format) {
            String str = format.sampleMimeType;
            return "text/vtt".equals(str) || "text/x-ssa".equals(str) || "application/ttml+xml".equals(str) || "application/x-mp4-vtt".equals(str) || "application/x-subrip".equals(str) || "application/x-quicktime-tx3g".equals(str) || "application/cea-608".equals(str) || "application/x-mp4-cea-608".equals(str) || "application/cea-708".equals(str) || "application/dvbsubs".equals(str) || "application/pgs".equals(str);
        }

        /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
        /* JADX WARN: Removed duplicated region for block: B:38:0x007d  */
        @Override // com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderFactory
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        public final com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoder createDecoder(com.mbridge.msdk.playercommon.exoplayer2.Format r3) {
            /*
                Method dump skipped, instruction units count: 282
                To view this dump add '--comments-level debug' option
            */
            throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderFactory.AnonymousClass1.createDecoder(com.mbridge.msdk.playercommon.exoplayer2.Format):com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoder");
        }
    };

    SubtitleDecoder createDecoder(Format format);

    boolean supportsFormat(Format format);
}
