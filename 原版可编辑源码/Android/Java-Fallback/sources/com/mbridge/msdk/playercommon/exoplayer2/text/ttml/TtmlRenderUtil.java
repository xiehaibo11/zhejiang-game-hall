package com.mbridge.msdk.playercommon.exoplayer2.text.ttml;

final class TtmlRenderUtil {
    private TtmlRenderUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void applyStylesToSpan(android.text.SpannableStringBuilder r3, int r4, int r5, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r6) {
            int r0 = r6.getStyle()
            r1 = 33
            r2 = -1
            if (r0 == r2) goto L15
            android.text.style.StyleSpan r0 = new android.text.style.StyleSpan
            int r2 = r6.getStyle()
            r0.<init>(r2)
            r3.setSpan(r0, r4, r5, r1)
        L15:
            boolean r0 = r6.isLinethrough()
            if (r0 == 0) goto L23
            android.text.style.StrikethroughSpan r0 = new android.text.style.StrikethroughSpan
            r0.<init>()
            r3.setSpan(r0, r4, r5, r1)
        L23:
            boolean r0 = r6.isUnderline()
            if (r0 == 0) goto L31
            android.text.style.UnderlineSpan r0 = new android.text.style.UnderlineSpan
            r0.<init>()
            r3.setSpan(r0, r4, r5, r1)
        L31:
            boolean r0 = r6.hasFontColor()
            if (r0 == 0) goto L43
            android.text.style.ForegroundColorSpan r0 = new android.text.style.ForegroundColorSpan
            int r2 = r6.getFontColor()
            r0.<init>(r2)
            r3.setSpan(r0, r4, r5, r1)
        L43:
            boolean r0 = r6.hasBackgroundColor()
            if (r0 == 0) goto L55
            android.text.style.BackgroundColorSpan r0 = new android.text.style.BackgroundColorSpan
            int r2 = r6.getBackgroundColor()
            r0.<init>(r2)
            r3.setSpan(r0, r4, r5, r1)
        L55:
            java.lang.String r0 = r6.getFontFamily()
            if (r0 == 0) goto L67
            android.text.style.TypefaceSpan r0 = new android.text.style.TypefaceSpan
            java.lang.String r2 = r6.getFontFamily()
            r0.<init>(r2)
            r3.setSpan(r0, r4, r5, r1)
        L67:
            android.text.Layout$Alignment r0 = r6.getTextAlign()
            if (r0 == 0) goto L79
            android.text.style.AlignmentSpan$Standard r0 = new android.text.style.AlignmentSpan$Standard
            android.text.Layout$Alignment r2 = r6.getTextAlign()
            r0.<init>(r2)
            r3.setSpan(r0, r4, r5, r1)
        L79:
            int r0 = r6.getFontSizeUnit()
            r2 = 1
            if (r0 == r2) goto La4
            r2 = 2
            if (r0 == r2) goto L97
            r2 = 3
            if (r0 == r2) goto L87
            goto Lb1
        L87:
            android.text.style.RelativeSizeSpan r0 = new android.text.style.RelativeSizeSpan
            float r6 = r6.getFontSize()
            r2 = 1120403456(0x42c80000, float:100.0)
            float r6 = r6 / r2
            r0.<init>(r6)
            r3.setSpan(r0, r4, r5, r1)
            goto Lb1
        L97:
            android.text.style.RelativeSizeSpan r0 = new android.text.style.RelativeSizeSpan
            float r6 = r6.getFontSize()
            r0.<init>(r6)
            r3.setSpan(r0, r4, r5, r1)
            goto Lb1
        La4:
            android.text.style.AbsoluteSizeSpan r0 = new android.text.style.AbsoluteSizeSpan
            float r6 = r6.getFontSize()
            int r6 = (int) r6
            r0.<init>(r6, r2)
            r3.setSpan(r0, r4, r5, r1)
        Lb1:
            return
    }

    static java.lang.String applyTextElementSpacePolicy(java.lang.String r2) {
            java.lang.String r0 = "\n"
            java.lang.String r1 = "\r\n"
            java.lang.String r2 = r2.replaceAll(r1, r0)
            java.lang.String r1 = " *\n *"
            java.lang.String r2 = r2.replaceAll(r1, r0)
            java.lang.String r1 = " "
            java.lang.String r2 = r2.replaceAll(r0, r1)
            java.lang.String r0 = "[ \t\\x0B\f\r]+"
            java.lang.String r2 = r2.replaceAll(r0, r1)
            return r2
    }

    static void endParagraph(android.text.SpannableStringBuilder r3) {
            int r0 = r3.length()
            int r0 = r0 + (-1)
        L6:
            if (r0 < 0) goto L13
            char r1 = r3.charAt(r0)
            r2 = 32
            if (r1 != r2) goto L13
            int r0 = r0 + (-1)
            goto L6
        L13:
            if (r0 < 0) goto L20
            char r0 = r3.charAt(r0)
            r1 = 10
            if (r0 == r1) goto L20
            r3.append(r1)
        L20:
            return
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle resolveStyle(com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r3, java.lang.String[] r4, java.util.Map<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle> r5) {
            if (r3 != 0) goto L6
            if (r4 != 0) goto L6
            r3 = 0
            return r3
        L6:
            r0 = 0
            r1 = 1
            if (r3 != 0) goto L16
            int r2 = r4.length
            if (r2 != r1) goto L16
            r3 = r4[r0]
            java.lang.Object r3 = r5.get(r3)
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r3 = (com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle) r3
            return r3
        L16:
            if (r3 != 0) goto L32
            int r2 = r4.length
            if (r2 <= r1) goto L32
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r3 = new com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle
            r3.<init>()
            int r1 = r4.length
        L21:
            if (r0 >= r1) goto L31
            r2 = r4[r0]
            java.lang.Object r2 = r5.get(r2)
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r2 = (com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle) r2
            r3.chain(r2)
            int r0 = r0 + 1
            goto L21
        L31:
            return r3
        L32:
            if (r3 == 0) goto L46
            if (r4 == 0) goto L46
            int r2 = r4.length
            if (r2 != r1) goto L46
            r4 = r4[r0]
            java.lang.Object r4 = r5.get(r4)
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r4 = (com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle) r4
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r3 = r3.chain(r4)
            return r3
        L46:
            if (r3 == 0) goto L5e
            if (r4 == 0) goto L5e
            int r2 = r4.length
            if (r2 <= r1) goto L5e
            int r1 = r4.length
        L4e:
            if (r0 >= r1) goto L5e
            r2 = r4[r0]
            java.lang.Object r2 = r5.get(r2)
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r2 = (com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle) r2
            r3.chain(r2)
            int r0 = r0 + 1
            goto L4e
        L5e:
            return r3
    }
}
