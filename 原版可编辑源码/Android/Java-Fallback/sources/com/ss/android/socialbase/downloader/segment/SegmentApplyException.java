package com.ss.android.socialbase.downloader.segment;

class SegmentApplyException extends com.ss.android.socialbase.downloader.exception.BaseException {
    public static final int ALREADY_APPLY_BY_OTHER = 1;
    public static final int BAD_SEGMENT = 6;
    public static final int CHANGE_SEGMENT = 5;
    public static final int PREV_END_ADJUST_FAIL = 4;
    public static final int PREV_OVERSTEP = 3;
    public static final int SEGMENT_NOT_EXIST = 2;
    private int applyCode;

    SegmentApplyException(int r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "applyCode="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = ", "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r0 = 1072(0x430, float:1.502E-42)
            r2.<init>(r0, r4)
            r2.applyCode = r3
            return
    }

    public int getSegmentApplyErrorCode() {
            r1 = this;
            int r0 = r1.applyCode
            return r0
    }
}
