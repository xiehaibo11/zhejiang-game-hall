package android.support.v4.text.util;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
class FindAddress {
    private static final java.lang.String HOUSE_COMPONENT = "(?:one|\\d+([a-z](?=[^a-z]|$)|st|nd|rd|th)?)";
    private static final java.lang.String HOUSE_END = "(?=[,\"'\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000\n\u000b\f\r\u0085\u2028\u2029]|$)";
    private static final java.lang.String HOUSE_POST_DELIM = ",\"'\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000\n\u000b\f\r\u0085\u2028\u2029";
    private static final java.lang.String HOUSE_PRE_DELIM = ":,\"'\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000\n\u000b\f\r\u0085\u2028\u2029";
    private static final int MAX_ADDRESS_LINES = 5;
    private static final int MAX_ADDRESS_WORDS = 14;
    private static final int MAX_LOCATION_NAME_DISTANCE = 5;
    private static final int MIN_ADDRESS_WORDS = 4;
    private static final java.lang.String NL = "\n\u000b\f\r\u0085\u2028\u2029";
    private static final java.lang.String SP = "\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000";
    private static final java.lang.String WORD_DELIM = ",*•\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000\n\u000b\f\r\u0085\u2028\u2029";
    private static final java.lang.String WORD_END = "(?=[,*•\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000\n\u000b\f\r\u0085\u2028\u2029]|$)";
    private static final java.lang.String WS = "\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000\n\u000b\f\r\u0085\u2028\u2029";
    private static final int kMaxAddressNameWordLength = 25;
    private static final java.util.regex.Pattern sHouseNumberRe = null;
    private static final java.util.regex.Pattern sLocationNameRe = null;
    private static final java.util.regex.Pattern sStateRe = null;
    private static final android.support.v4.text.util.FindAddress.ZipRange[] sStateZipCodeRanges = null;
    private static final java.util.regex.Pattern sSuffixedNumberRe = null;
    private static final java.util.regex.Pattern sWordRe = null;
    private static final java.util.regex.Pattern sZipCodeRe = null;

    private static class ZipRange {
        int mException1;
        int mException2;
        int mHigh;
        int mLow;

        ZipRange(int r1, int r2, int r3, int r4) {
                r0 = this;
                r0.<init>()
                r0.mLow = r1
                r0.mHigh = r2
                r0.mException1 = r3
                r0.mException2 = r3
                return
        }

        boolean matches(java.lang.String r3) {
                r2 = this;
                r0 = 0
                r1 = 2
                java.lang.String r3 = r3.substring(r0, r1)
                int r3 = java.lang.Integer.parseInt(r3)
                int r1 = r2.mLow
                if (r1 > r3) goto L12
                int r1 = r2.mHigh
                if (r3 <= r1) goto L1a
            L12:
                int r1 = r2.mException1
                if (r3 == r1) goto L1a
                int r1 = r2.mException2
                if (r3 != r1) goto L1b
            L1a:
                r0 = 1
            L1b:
                return r0
        }
    }

    static {
            r0 = 59
            android.support.v4.text.util.FindAddress$ZipRange[] r0 = new android.support.v4.text.util.FindAddress.ZipRange[r0]
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r2 = 99
            r3 = -1
            r1.<init>(r2, r2, r3, r3)
            r4 = 0
            r0[r4] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r5 = 35
            r6 = 36
            r1.<init>(r5, r6, r3, r3)
            r5 = 1
            r0[r5] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r5 = 71
            r6 = 72
            r1.<init>(r5, r6, r3, r3)
            r5 = 2
            r0[r5] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r6 = 96
            r1.<init>(r6, r6, r3, r3)
            r7 = 3
            r0[r7] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r8 = 85
            r9 = 86
            r1.<init>(r8, r9, r3, r3)
            r8 = 4
            r0[r8] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r9 = 90
            r1.<init>(r9, r6, r3, r3)
            r9 = 5
            r0[r9] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r10 = 80
            r11 = 81
            r1.<init>(r10, r11, r3, r3)
            r10 = 6
            r0[r10] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r1.<init>(r10, r10, r3, r3)
            r11 = 7
            r0[r11] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r11 = 20
            r1.<init>(r11, r11, r3, r3)
            r12 = 8
            r0[r12] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r12 = 19
            r1.<init>(r12, r12, r3, r3)
            r13 = 9
            r0[r13] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r14 = 32
            r15 = 34
            r1.<init>(r14, r15, r3, r3)
            r14 = 10
            r0[r14] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r1.<init>(r6, r6, r3, r3)
            r14 = 11
            r0[r14] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r14 = 30
            r15 = 31
            r1.<init>(r14, r15, r3, r3)
            r14 = 12
            r0[r14] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r1.<init>(r6, r6, r3, r3)
            r14 = 13
            r0[r14] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r1.<init>(r6, r6, r3, r3)
            r14 = 14
            r0[r14] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r14 = 50
            r15 = 52
            r1.<init>(r14, r15, r3, r3)
            r14 = 15
            r0[r14] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r14 = 83
            r1.<init>(r14, r14, r3, r3)
            r15 = 16
            r0[r15] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r15 = 60
            r14 = 62
            r1.<init>(r15, r14, r3, r3)
            r14 = 17
            r0[r14] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r14 = 46
            r15 = 47
            r1.<init>(r14, r15, r3, r3)
            r14 = 18
            r0[r14] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r14 = 66
            r15 = 67
            r2 = 73
            r1.<init>(r14, r15, r2, r3)
            r0[r12] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r2 = 40
            r14 = 42
            r1.<init>(r2, r14, r3, r3)
            r0[r11] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r2 = 70
            r14 = 71
            r1.<init>(r2, r14, r3, r3)
            r2 = 21
            r0[r2] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r2 = 1
            r1.<init>(r2, r5, r3, r3)
            r2 = 22
            r0[r2] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r2 = 21
            r1.<init>(r11, r2, r3, r3)
            r2 = 23
            r0[r2] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r1.<init>(r7, r8, r3, r3)
            r2 = 24
            r0[r2] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r1.<init>(r6, r6, r3, r3)
            r14 = 25
            r0[r14] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r14 = 48
            r15 = 49
            r1.<init>(r14, r15, r3, r3)
            r14 = 26
            r0[r14] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r14 = 55
            r15 = 56
            r1.<init>(r14, r15, r3, r3)
            r15 = 27
            r0[r15] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r15 = 63
            r9 = 65
            r1.<init>(r15, r9, r3, r3)
            r9 = 28
            r0[r9] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r1.<init>(r6, r6, r3, r3)
            r9 = 29
            r0[r9] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r9 = 38
            r15 = 39
            r1.<init>(r9, r15, r3, r3)
            r9 = 30
            r0[r9] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r9 = 56
            r1.<init>(r14, r9, r3, r3)
            r9 = 31
            r0[r9] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r9 = 27
            r15 = 28
            r1.<init>(r9, r15, r3, r3)
            r9 = 32
            r0[r9] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r9 = 58
            r15 = 58
            r1.<init>(r9, r15, r3, r3)
            r9 = 33
            r0[r9] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r9 = 68
            r15 = 69
            r1.<init>(r9, r15, r3, r3)
            r9 = 34
            r0[r9] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r1.<init>(r7, r8, r3, r3)
            r7 = 35
            r0[r7] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r7 = 7
            r8 = 8
            r1.<init>(r7, r8, r3, r3)
            r7 = 36
            r0[r7] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r7 = 87
            r8 = 88
            r9 = 86
            r1.<init>(r7, r8, r9, r3)
            r7 = 37
            r0[r7] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r7 = 88
            r8 = 89
            r1.<init>(r7, r8, r6, r3)
            r7 = 38
            r0[r7] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r7 = 10
            r8 = 14
            r1.<init>(r7, r8, r4, r10)
            r7 = 39
            r0[r7] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r7 = 43
            r8 = 45
            r1.<init>(r7, r8, r3, r3)
            r7 = 40
            r0[r7] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r7 = 73
            r8 = 74
            r1.<init>(r7, r8, r3, r3)
            r7 = 41
            r0[r7] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r7 = 97
            r8 = 97
            r1.<init>(r7, r8, r3, r3)
            r7 = 42
            r0[r7] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r7 = 15
            r1.<init>(r7, r12, r3, r3)
            r7 = 43
            r0[r7] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r1.<init>(r10, r10, r4, r13)
            r4 = 44
            r0[r4] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r1.<init>(r6, r6, r3, r3)
            r4 = 45
            r0[r4] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r1.<init>(r5, r5, r3, r3)
            r4 = 46
            r0[r4] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r4 = 29
            r6 = 29
            r1.<init>(r4, r6, r3, r3)
            r4 = 47
            r0[r4] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r4 = 57
            r6 = 57
            r1.<init>(r4, r6, r3, r3)
            r4 = 48
            r0[r4] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r4 = 37
            r6 = 38
            r1.<init>(r4, r6, r3, r3)
            r4 = 49
            r0[r4] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r4 = 75
            r6 = 79
            r7 = 87
            r8 = 88
            r1.<init>(r4, r6, r7, r8)
            r4 = 50
            r0[r4] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r4 = 84
            r6 = 84
            r1.<init>(r4, r6, r3, r3)
            r4 = 51
            r0[r4] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r4 = 22
            r1.<init>(r4, r2, r11, r3)
            r4 = 52
            r0[r4] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r1.<init>(r10, r13, r3, r3)
            r4 = 53
            r0[r4] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r4 = 5
            r1.<init>(r4, r4, r3, r3)
            r4 = 54
            r0[r4] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r4 = 98
            r6 = 99
            r1.<init>(r4, r6, r3, r3)
            r0[r14] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r4 = 53
            r6 = 54
            r1.<init>(r4, r6, r3, r3)
            r4 = 56
            r0[r4] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r4 = 26
            r1.<init>(r2, r4, r3, r3)
            r2 = 57
            r0[r2] = r1
            android.support.v4.text.util.FindAddress$ZipRange r1 = new android.support.v4.text.util.FindAddress$ZipRange
            r2 = 82
            r4 = 83
            r1.<init>(r2, r4, r3, r3)
            r2 = 58
            r0[r2] = r1
            android.support.v4.text.util.FindAddress.sStateZipCodeRanges = r0
            java.lang.String r0 = "[^,*•\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000\n\u000b\f\r\u0085\u2028\u2029]+(?=[,*•\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000\n\u000b\f\r\u0085\u2028\u2029]|$)"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0, r5)
            android.support.v4.text.util.FindAddress.sWordRe = r0
            java.lang.String r0 = "(?:one|\\d+([a-z](?=[^a-z]|$)|st|nd|rd|th)?)(?:-(?:one|\\d+([a-z](?=[^a-z]|$)|st|nd|rd|th)?))*(?=[,\"'\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000\n\u000b\f\r\u0085\u2028\u2029]|$)"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0, r5)
            android.support.v4.text.util.FindAddress.sHouseNumberRe = r0
            java.lang.String r0 = "(?:(ak|alaska)|(al|alabama)|(ar|arkansas)|(as|american[\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000]+samoa)|(az|arizona)|(ca|california)|(co|colorado)|(ct|connecticut)|(dc|district[\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000]+of[\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000]+columbia)|(de|delaware)|(fl|florida)|(fm|federated[\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000]+states[\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000]+of[\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000]+micronesia)|(ga|georgia)|(gu|guam)|(hi|hawaii)|(ia|iowa)|(id|idaho)|(il|illinois)|(in|indiana)|(ks|kansas)|(ky|kentucky)|(la|louisiana)|(ma|massachusetts)|(md|maryland)|(me|maine)|(mh|marshall[\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000]+islands)|(mi|michigan)|(mn|minnesota)|(mo|missouri)|(mp|northern[\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000]+mariana[\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000]+islands)|(ms|mississippi)|(mt|montana)|(nc|north[\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000]+carolina)|(nd|north[\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000]+dakota)|(ne|nebraska)|(nh|new[\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000]+hampshire)|(nj|new[\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000]+jersey)|(nm|new[\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000]+mexico)|(nv|nevada)|(ny|new[\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000]+york)|(oh|ohio)|(ok|oklahoma)|(or|oregon)|(pa|pennsylvania)|(pr|puerto[\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000]+rico)|(pw|palau)|(ri|rhode[\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000]+island)|(sc|south[\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000]+carolina)|(sd|south[\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000]+dakota)|(tn|tennessee)|(tx|texas)|(ut|utah)|(va|virginia)|(vi|virgin[\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000]+islands)|(vt|vermont)|(wa|washington)|(wi|wisconsin)|(wv|west[\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000]+virginia)|(wy|wyoming))(?=[,*•\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000\n\u000b\f\r\u0085\u2028\u2029]|$)"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0, r5)
            android.support.v4.text.util.FindAddress.sStateRe = r0
            java.lang.String r0 = "(?:alley|annex|arcade|ave[.]?|avenue|alameda|bayou|beach|bend|bluffs?|bottom|boulevard|branch|bridge|brooks?|burgs?|bypass|broadway|camino|camp|canyon|cape|causeway|centers?|circles?|cliffs?|club|common|corners?|course|courts?|coves?|creek|crescent|crest|crossing|crossroad|curve|circulo|dale|dam|divide|drives?|estates?|expressway|extensions?|falls?|ferry|fields?|flats?|fords?|forest|forges?|forks?|fort|freeway|gardens?|gateway|glens?|greens?|groves?|harbors?|haven|heights|highway|hills?|hollow|inlet|islands?|isle|junctions?|keys?|knolls?|lakes?|land|landing|lane|lights?|loaf|locks?|lodge|loop|mall|manors?|meadows?|mews|mills?|mission|motorway|mount|mountains?|neck|orchard|oval|overpass|parks?|parkways?|pass|passage|path|pike|pines?|plains?|plaza|points?|ports?|prairie|privada|radial|ramp|ranch|rapids?|rd[.]?|rest|ridges?|river|roads?|route|row|rue|run|shoals?|shores?|skyway|springs?|spurs?|squares?|station|stravenue|stream|st[.]?|streets?|summit|speedway|terrace|throughway|trace|track|trafficway|trail|tunnel|turnpike|underpass|unions?|valleys?|viaduct|views?|villages?|ville|vista|walks?|wall|ways?|wells?|xing|xrd)(?=[,*•\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000\n\u000b\f\r\u0085\u2028\u2029]|$)"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0, r5)
            android.support.v4.text.util.FindAddress.sLocationNameRe = r0
            java.lang.String r0 = "(\\d+)(st|nd|rd|th)"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0, r5)
            android.support.v4.text.util.FindAddress.sSuffixedNumberRe = r0
            java.lang.String r0 = "(?:\\d{5}(?:-\\d{4})?)(?=[,*•\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000\n\u000b\f\r\u0085\u2028\u2029]|$)"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0, r5)
            android.support.v4.text.util.FindAddress.sZipCodeRe = r0
            return
    }

    private FindAddress() {
            r0 = this;
            r0.<init>()
            return
    }

    private static int attemptMatch(java.lang.String r13, java.util.regex.MatchResult r14) {
            int r14 = r14.end()
            java.util.regex.Pattern r0 = android.support.v4.text.util.FindAddress.sWordRe
            java.util.regex.Matcher r0 = r0.matcher(r13)
            r1 = -1
            r2 = 0
            r3 = 1
            java.lang.String r4 = ""
            r9 = r4
            r4 = 1
            r5 = 1
            r6 = 1
            r7 = 0
            r8 = -1
            r10 = -1
        L16:
            int r11 = r13.length()
            if (r14 >= r11) goto Ld7
            boolean r11 = r0.find(r14)
            if (r11 != 0) goto L28
            int r13 = r13.length()
        L26:
            int r13 = -r13
            return r13
        L28:
            int r11 = r0.end()
            int r12 = r0.start()
            int r11 = r11 - r12
            r12 = 25
            if (r11 <= r12) goto L3a
            int r13 = r0.end()
            goto L26
        L3a:
            int r11 = r0.start()
            if (r14 >= r11) goto L52
            int r11 = r14 + 1
            char r14 = r13.charAt(r14)
            java.lang.String r12 = "\n\u000b\f\r\u0085\u2028\u2029"
            int r14 = r12.indexOf(r14)
            if (r14 == r1) goto L50
            int r4 = r4 + 1
        L50:
            r14 = r11
            goto L3a
        L52:
            r11 = 5
            if (r4 <= r11) goto L57
            goto Ld7
        L57:
            int r5 = r5 + r3
            r12 = 14
            if (r5 <= r12) goto L5e
            goto Ld7
        L5e:
            java.util.regex.MatchResult r12 = matchHouseNumber(r13, r14)
            if (r12 == 0) goto L6e
            if (r6 == 0) goto L6a
            if (r4 <= r3) goto L6a
            int r13 = -r14
            return r13
        L6a:
            if (r8 != r1) goto Lcd
            r8 = r14
            goto Lcd
        L6e:
            java.lang.String r6 = r0.group(r2)
            boolean r6 = isValidLocationName(r6)
            if (r6 == 0) goto L7b
            r6 = 0
            r7 = 1
            goto Lcd
        L7b:
            if (r5 != r11) goto L84
            if (r7 != 0) goto L84
            int r14 = r0.end()
            goto Ld7
        L84:
            if (r7 == 0) goto Lcc
            r6 = 4
            if (r5 <= r6) goto Lcc
            java.util.regex.MatchResult r14 = matchState(r13, r14)
            if (r14 == 0) goto Lcc
            java.lang.String r6 = "et"
            boolean r6 = r9.equals(r6)
            if (r6 == 0) goto La8
            java.lang.String r6 = r14.group(r2)
            java.lang.String r9 = "al"
            boolean r6 = r6.equals(r9)
            if (r6 == 0) goto La8
            int r14 = r14.end()
            goto Ld7
        La8:
            java.util.regex.Pattern r6 = android.support.v4.text.util.FindAddress.sWordRe
            java.util.regex.Matcher r6 = r6.matcher(r13)
            int r9 = r14.end()
            boolean r9 = r6.find(r9)
            if (r9 == 0) goto Lc7
            java.lang.String r9 = r6.group(r2)
            boolean r14 = isValidZipCode(r9, r14)
            if (r14 == 0) goto Lcc
            int r13 = r6.end()
            return r13
        Lc7:
            int r14 = r14.end()
            r10 = r14
        Lcc:
            r6 = 0
        Lcd:
            java.lang.String r9 = r0.group(r2)
            int r14 = r0.end()
            goto L16
        Ld7:
            if (r10 <= 0) goto Lda
            return r10
        Lda:
            if (r8 <= 0) goto Ldd
            r14 = r8
        Ldd:
            int r13 = -r14
            return r13
    }

    private static boolean checkHouseNumber(java.lang.String r5) {
            r0 = 0
            r1 = 0
            r2 = 0
        L3:
            int r3 = r5.length()
            if (r1 >= r3) goto L18
            char r3 = r5.charAt(r1)
            boolean r3 = java.lang.Character.isDigit(r3)
            if (r3 == 0) goto L15
            int r2 = r2 + 1
        L15:
            int r1 = r1 + 1
            goto L3
        L18:
            r1 = 5
            if (r2 <= r1) goto L1c
            return r0
        L1c:
            java.util.regex.Pattern r1 = android.support.v4.text.util.FindAddress.sSuffixedNumberRe
            java.util.regex.Matcher r5 = r1.matcher(r5)
            boolean r1 = r5.find()
            r2 = 1
            if (r1 == 0) goto L7b
            java.lang.String r1 = r5.group(r2)
            int r1 = java.lang.Integer.parseInt(r1)
            if (r1 != 0) goto L34
            return r0
        L34:
            r0 = 2
            java.lang.String r5 = r5.group(r0)
            java.util.Locale r3 = java.util.Locale.getDefault()
            java.lang.String r5 = r5.toLowerCase(r3)
            int r3 = r1 % 10
            java.lang.String r4 = "th"
            if (r3 == r2) goto L6d
            if (r3 == r0) goto L5f
            r0 = 3
            if (r3 == r0) goto L51
            boolean r5 = r5.equals(r4)
            return r5
        L51:
            int r1 = r1 % 100
            r0 = 13
            if (r1 != r0) goto L58
            goto L5a
        L58:
            java.lang.String r4 = "rd"
        L5a:
            boolean r5 = r5.equals(r4)
            return r5
        L5f:
            int r1 = r1 % 100
            r0 = 12
            if (r1 != r0) goto L66
            goto L68
        L66:
            java.lang.String r4 = "nd"
        L68:
            boolean r5 = r5.equals(r4)
            return r5
        L6d:
            int r1 = r1 % 100
            r0 = 11
            if (r1 != r0) goto L74
            goto L76
        L74:
            java.lang.String r4 = "st"
        L76:
            boolean r5 = r5.equals(r4)
            return r5
        L7b:
            return r2
    }

    static java.lang.String findAddress(java.lang.String r4) {
            java.util.regex.Pattern r0 = android.support.v4.text.util.FindAddress.sHouseNumberRe
            java.util.regex.Matcher r0 = r0.matcher(r4)
            r1 = 0
            r2 = 0
        L8:
            boolean r2 = r0.find(r2)
            if (r2 == 0) goto L2e
            java.lang.String r2 = r0.group(r1)
            boolean r2 = checkHouseNumber(r2)
            if (r2 == 0) goto L29
            int r2 = r0.start()
            int r3 = attemptMatch(r4, r0)
            if (r3 <= 0) goto L27
            java.lang.String r4 = r4.substring(r2, r3)
            return r4
        L27:
            int r2 = -r3
            goto L8
        L29:
            int r2 = r0.end()
            goto L8
        L2e:
            r4 = 0
            return r4
    }

    @android.support.annotation.VisibleForTesting
    public static boolean isValidLocationName(java.lang.String r1) {
            java.util.regex.Pattern r0 = android.support.v4.text.util.FindAddress.sLocationNameRe
            java.util.regex.Matcher r1 = r0.matcher(r1)
            boolean r1 = r1.matches()
            return r1
    }

    @android.support.annotation.VisibleForTesting
    public static boolean isValidZipCode(java.lang.String r1) {
            java.util.regex.Pattern r0 = android.support.v4.text.util.FindAddress.sZipCodeRe
            java.util.regex.Matcher r1 = r0.matcher(r1)
            boolean r1 = r1.matches()
            return r1
    }

    @android.support.annotation.VisibleForTesting
    public static boolean isValidZipCode(java.lang.String r1, java.lang.String r2) {
            r0 = 0
            java.util.regex.MatchResult r2 = matchState(r2, r0)
            boolean r1 = isValidZipCode(r1, r2)
            return r1
    }

    private static boolean isValidZipCode(java.lang.String r3, java.util.regex.MatchResult r4) {
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            int r1 = r4.groupCount()
        L8:
            if (r1 <= 0) goto L16
            int r2 = r1 + (-1)
            java.lang.String r1 = r4.group(r1)
            if (r1 == 0) goto L14
            r1 = r2
            goto L16
        L14:
            r1 = r2
            goto L8
        L16:
            java.util.regex.Pattern r4 = android.support.v4.text.util.FindAddress.sZipCodeRe
            java.util.regex.Matcher r4 = r4.matcher(r3)
            boolean r4 = r4.matches()
            if (r4 == 0) goto L2d
            android.support.v4.text.util.FindAddress$ZipRange[] r4 = android.support.v4.text.util.FindAddress.sStateZipCodeRanges
            r4 = r4[r1]
            boolean r3 = r4.matches(r3)
            if (r3 == 0) goto L2d
            r0 = 1
        L2d:
            return r0
    }

    @android.support.annotation.VisibleForTesting
    public static java.util.regex.MatchResult matchHouseNumber(java.lang.String r3, int r4) {
            r0 = 0
            if (r4 <= 0) goto L13
            int r1 = r4 + (-1)
            char r1 = r3.charAt(r1)
            java.lang.String r2 = ":,\"'\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000\n\u000b\f\r\u0085\u2028\u2029"
            int r1 = r2.indexOf(r1)
            r2 = -1
            if (r1 != r2) goto L13
            return r0
        L13:
            java.util.regex.Pattern r1 = android.support.v4.text.util.FindAddress.sHouseNumberRe
            java.util.regex.Matcher r1 = r1.matcher(r3)
            int r3 = r3.length()
            java.util.regex.Matcher r3 = r1.region(r4, r3)
            boolean r4 = r3.lookingAt()
            if (r4 == 0) goto L37
            java.util.regex.MatchResult r3 = r3.toMatchResult()
            r4 = 0
            java.lang.String r4 = r3.group(r4)
            boolean r4 = checkHouseNumber(r4)
            if (r4 == 0) goto L37
            return r3
        L37:
            return r0
    }

    @android.support.annotation.VisibleForTesting
    public static java.util.regex.MatchResult matchState(java.lang.String r3, int r4) {
            r0 = 0
            if (r4 <= 0) goto L13
            int r1 = r4 + (-1)
            char r1 = r3.charAt(r1)
            java.lang.String r2 = ",*•\t  \u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006 \u2008\u2009\u200a \u205f\u3000\n\u000b\f\r\u0085\u2028\u2029"
            int r1 = r2.indexOf(r1)
            r2 = -1
            if (r1 != r2) goto L13
            return r0
        L13:
            java.util.regex.Pattern r1 = android.support.v4.text.util.FindAddress.sStateRe
            java.util.regex.Matcher r1 = r1.matcher(r3)
            int r3 = r3.length()
            java.util.regex.Matcher r3 = r1.region(r4, r3)
            boolean r4 = r3.lookingAt()
            if (r4 == 0) goto L2b
            java.util.regex.MatchResult r0 = r3.toMatchResult()
        L2b:
            return r0
    }
}
