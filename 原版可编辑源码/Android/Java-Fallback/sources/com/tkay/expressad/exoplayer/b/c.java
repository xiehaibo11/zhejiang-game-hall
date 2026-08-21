package com.tkay.expressad.exoplayer.b;

public final class c {
    public static final com.tkay.expressad.exoplayer.b.c a = null;
    private final int[] b;
    private final int c;

    static {
            com.tkay.expressad.exoplayer.b.c r0 = new com.tkay.expressad.exoplayer.b.c
            r1 = 1
            int[] r1 = new int[r1]
            r2 = 2
            r3 = 0
            r1[r3] = r2
            r0.<init>(r1, r2)
            com.tkay.expressad.exoplayer.b.c.a = r0
            return
    }

    private c(int[] r2, int r3) {
            r1 = this;
            r1.<init>()
            if (r2 == 0) goto L10
            int r0 = r2.length
            int[] r2 = java.util.Arrays.copyOf(r2, r0)
            r1.b = r2
            java.util.Arrays.sort(r2)
            goto L15
        L10:
            r2 = 0
            int[] r2 = new int[r2]
            r1.b = r2
        L15:
            r1.c = r3
            return
    }

    private int a() {
            r1 = this;
            int r0 = r1.c
            return r0
    }

    public static com.tkay.expressad.exoplayer.b.c a(android.content.Context r2) {
            android.content.IntentFilter r0 = new android.content.IntentFilter
            java.lang.String r1 = "android.media.action.HDMI_AUDIO_PLUG"
            r0.<init>(r1)
            r1 = 0
            android.content.Intent r2 = r2.registerReceiver(r1, r0)
            com.tkay.expressad.exoplayer.b.c r2 = a(r2)
            return r2
    }

    static com.tkay.expressad.exoplayer.b.c a(android.content.Intent r4) {
            if (r4 == 0) goto L1e
            r0 = 0
            java.lang.String r1 = "android.media.extra.AUDIO_PLUG_STATE"
            int r1 = r4.getIntExtra(r1, r0)
            if (r1 != 0) goto Lc
            goto L1e
        Lc:
            com.tkay.expressad.exoplayer.b.c r1 = new com.tkay.expressad.exoplayer.b.c
            java.lang.String r2 = "android.media.extra.ENCODINGS"
            int[] r2 = r4.getIntArrayExtra(r2)
            java.lang.String r3 = "android.media.extra.MAX_CHANNEL_COUNT"
            int r4 = r4.getIntExtra(r3, r0)
            r1.<init>(r2, r4)
            return r1
        L1e:
            com.tkay.expressad.exoplayer.b.c r4 = com.tkay.expressad.exoplayer.b.c.a
            return r4
    }

    public final boolean a(int r2) {
            r1 = this;
            int[] r0 = r1.b
            int r2 = java.util.Arrays.binarySearch(r0, r2)
            if (r2 < 0) goto La
            r2 = 1
            return r2
        La:
            r2 = 0
            return r2
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.tkay.expressad.exoplayer.b.c
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.tkay.expressad.exoplayer.b.c r5 = (com.tkay.expressad.exoplayer.b.c) r5
            int[] r1 = r4.b
            int[] r3 = r5.b
            boolean r1 = java.util.Arrays.equals(r1, r3)
            if (r1 == 0) goto L1d
            int r1 = r4.c
            int r5 = r5.c
            if (r1 != r5) goto L1d
            return r0
        L1d:
            return r2
    }

    public final int hashCode() {
            r2 = this;
            int r0 = r2.c
            int[] r1 = r2.b
            int r1 = java.util.Arrays.hashCode(r1)
            int r1 = r1 * 31
            int r0 = r0 + r1
            return r0
    }

    public final java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "AudioCapabilities[maxChannelCount="
            r0.<init>(r1)
            int r1 = r2.c
            r0.append(r1)
            java.lang.String r1 = ", supportedEncodings="
            r0.append(r1)
            int[] r1 = r2.b
            java.lang.String r1 = java.util.Arrays.toString(r1)
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
