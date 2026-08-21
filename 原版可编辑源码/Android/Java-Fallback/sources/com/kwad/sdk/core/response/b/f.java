package com.kwad.sdk.core.response.b;

public final class f {
    public static java.lang.String a(com.kwad.sdk.core.response.model.PhotoInfo r0) {
            com.kwad.sdk.core.response.model.PhotoInfo$VideoInfo r0 = r0.videoInfo
            java.lang.String r0 = r0.videoUrl
            return r0
    }

    public static boolean a(android.graphics.Matrix r18, int r19, int r20, com.kwad.sdk.core.response.model.PhotoInfo.VideoInfo r21) {
            r0 = r18
            r1 = r21
            if (r0 == 0) goto L9
            r18.reset()
        L9:
            r2 = 0
            if (r1 != 0) goto Ld
            return r2
        Ld:
            int r3 = r1.width
            float r3 = (float) r3
            int r4 = r1.height
            float r4 = (float) r4
            int r5 = (r3 > r4 ? 1 : (r3 == r4 ? 0 : -1))
            if (r5 < 0) goto L18
            return r2
        L18:
            double r5 = r1.leftRatio
            float r5 = (float) r5
            double r6 = r1.topRatio
            float r6 = (float) r6
            double r7 = r1.widthRatio
            float r7 = (float) r7
            double r8 = r1.heightRatio
            float r1 = (float) r8
            r8 = r19
            float r8 = (float) r8
            float r9 = r8 / r3
            r10 = r20
            float r10 = (float) r10
            float r11 = r10 / r4
            float r12 = r9 / r11
            r13 = 1065353216(0x3f800000, float:1.0)
            float r14 = r12 - r13
            float r14 = java.lang.Math.abs(r14)
            double r14 = (double) r14
            r16 = 4576918229304087675(0x3f847ae147ae147b, double:0.01)
            int r14 = (r14 > r16 ? 1 : (r14 == r16 ? 0 : -1))
            if (r14 >= 0) goto L43
            return r2
        L43:
            int r14 = (r9 > r11 ? 1 : (r9 == r11 ? 0 : -1))
            r15 = 1073741824(0x40000000, float:2.0)
            if (r14 <= 0) goto L59
            float r11 = r11 / r9
            float r5 = r13 - r11
            float r5 = r5 / r15
            float r11 = r11 + r13
            float r11 = r11 / r15
            int r5 = (r6 > r5 ? 1 : (r6 == r5 ? 0 : -1))
            if (r5 < 0) goto L58
            float r6 = r6 + r1
            int r1 = (r6 > r11 ? 1 : (r6 == r11 ? 0 : -1))
            if (r1 <= 0) goto L69
        L58:
            return r2
        L59:
            float r1 = r13 - r12
            float r1 = r1 / r15
            float r12 = r12 + r13
            float r12 = r12 / r15
            int r1 = (r5 > r1 ? 1 : (r5 == r1 ? 0 : -1))
            if (r1 < 0) goto L81
            float r5 = r5 + r7
            int r1 = (r5 > r12 ? 1 : (r5 == r12 ? 0 : -1))
            if (r1 <= 0) goto L68
            goto L81
        L68:
            r9 = r11
        L69:
            r1 = 1
            if (r0 != 0) goto L6d
            return r1
        L6d:
            float r2 = r8 - r3
            float r2 = r2 / r15
            float r5 = r10 - r4
            float r5 = r5 / r15
            r0.preTranslate(r2, r5)
            float r3 = r3 / r8
            float r4 = r4 / r10
            r0.preScale(r3, r4)
            float r8 = r8 / r15
            float r10 = r10 / r15
            r0.postScale(r9, r9, r8, r10)
            return r1
        L81:
            return r2
    }

    public static java.lang.String b(com.kwad.sdk.core.response.model.PhotoInfo r0) {
            com.kwad.sdk.core.response.model.PhotoInfo$VideoInfo r0 = r0.videoInfo
            java.lang.String r0 = r0.manifest
            return r0
    }

    public static java.lang.String c(com.kwad.sdk.core.response.model.PhotoInfo r0) {
            com.kwad.sdk.core.response.model.PhotoInfo$BaseInfo r0 = r0.baseInfo
            java.lang.String r0 = r0.sdkExtraData
            return r0
    }
}
