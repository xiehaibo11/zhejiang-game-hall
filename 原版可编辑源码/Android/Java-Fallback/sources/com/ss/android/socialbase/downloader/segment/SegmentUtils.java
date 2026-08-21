package com.ss.android.socialbase.downloader.segment;

public class SegmentUtils {
    public SegmentUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static long getDownloadedBytes(java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r13) {
            java.util.Iterator r13 = r13.iterator()
            r0 = 0
            r2 = -1
            r8 = r0
        L9:
            r4 = r2
            r6 = r4
        Lb:
            boolean r10 = r13.hasNext()
            if (r10 == 0) goto L54
            java.lang.Object r10 = r13.next()
            com.ss.android.socialbase.downloader.segment.Segment r10 = (com.ss.android.socialbase.downloader.segment.Segment) r10
            int r11 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r11 != 0) goto L2c
            long r11 = r10.getDownloadBytes()
            int r11 = (r11 > r0 ? 1 : (r11 == r0 ? 0 : -1))
            if (r11 <= 0) goto Lb
            long r4 = r10.getStartOffset()
            long r6 = r10.getCurrentOffset()
            goto Lb
        L2c:
            long r11 = r10.getStartOffset()
            int r11 = (r11 > r6 ? 1 : (r11 == r6 ? 0 : -1))
            if (r11 > 0) goto L41
            long r11 = r10.getCurrentOffset()
            int r11 = (r11 > r6 ? 1 : (r11 == r6 ? 0 : -1))
            if (r11 <= 0) goto Lb
            long r6 = r10.getCurrentOffset()
            goto Lb
        L41:
            long r6 = r6 - r4
            long r8 = r8 + r6
            long r4 = r10.getDownloadBytes()
            int r4 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r4 <= 0) goto L9
            long r4 = r10.getStartOffset()
            long r6 = r10.getCurrentOffset()
            goto Lb
        L54:
            int r13 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r13 < 0) goto L5e
            int r13 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r13 <= 0) goto L5e
            long r6 = r6 - r4
            long r8 = r8 + r6
        L5e:
            return r8
    }

    public static long getFirstOffset(java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r7) {
            int r0 = r7.size()
            r1 = 0
            r3 = 0
        L7:
            if (r3 >= r0) goto L26
            java.lang.Object r4 = r7.get(r3)
            com.ss.android.socialbase.downloader.segment.Segment r4 = (com.ss.android.socialbase.downloader.segment.Segment) r4
            long r5 = r4.getStartOffset()
            int r5 = (r5 > r1 ? 1 : (r5 == r1 ? 0 : -1))
            if (r5 > 0) goto L26
            long r5 = r4.getCurrentOffsetRead()
            int r5 = (r5 > r1 ? 1 : (r5 == r1 ? 0 : -1))
            if (r5 <= 0) goto L23
            long r1 = r4.getCurrentOffsetRead()
        L23:
            int r3 = r3 + 1
            goto L7
        L26:
            return r1
    }
}
