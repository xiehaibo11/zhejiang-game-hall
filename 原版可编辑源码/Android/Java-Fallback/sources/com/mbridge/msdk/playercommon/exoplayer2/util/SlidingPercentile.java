package com.mbridge.msdk.playercommon.exoplayer2.util;

public class SlidingPercentile {
    private static final java.util.Comparator<com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile.Sample> INDEX_COMPARATOR = null;
    private static final int MAX_RECYCLED_SAMPLES = 5;
    private static final int SORT_ORDER_BY_INDEX = 1;
    private static final int SORT_ORDER_BY_VALUE = 0;
    private static final int SORT_ORDER_NONE = -1;
    private static final java.util.Comparator<com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile.Sample> VALUE_COMPARATOR = null;
    private int currentSortOrder;
    private final int maxWeight;
    private int nextSampleIndex;
    private int recycledSampleCount;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile.Sample[] recycledSamples;
    private final java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile.Sample> samples;
    private int totalWeight;



    private static class Sample {
        public int index;
        public float value;
        public int weight;

        private Sample() {
                r0 = this;
                r0.<init>()
                return
        }

        Sample(com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile.INDEX_COMPARATOR = r0
            com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile$2 r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile$2
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile.VALUE_COMPARATOR = r0
            return
    }

    public SlidingPercentile(int r1) {
            r0 = this;
            r0.<init>()
            r0.maxWeight = r1
            r1 = 5
            com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile$Sample[] r1 = new com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile.Sample[r1]
            r0.recycledSamples = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.samples = r1
            r1 = -1
            r0.currentSortOrder = r1
            return
    }

    private void ensureSortedByIndex() {
            r3 = this;
            int r0 = r3.currentSortOrder
            r1 = 1
            if (r0 == r1) goto Le
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile$Sample> r0 = r3.samples
            java.util.Comparator<com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile$Sample> r2 = com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile.INDEX_COMPARATOR
            java.util.Collections.sort(r0, r2)
            r3.currentSortOrder = r1
        Le:
            return
    }

    private void ensureSortedByValue() {
            r2 = this;
            int r0 = r2.currentSortOrder
            if (r0 == 0) goto Le
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile$Sample> r0 = r2.samples
            java.util.Comparator<com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile$Sample> r1 = com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile.VALUE_COMPARATOR
            java.util.Collections.sort(r0, r1)
            r0 = 0
            r2.currentSortOrder = r0
        Le:
            return
    }

    public void addSample(int r4, float r5) {
            r3 = this;
            r3.ensureSortedByIndex()
            int r0 = r3.recycledSampleCount
            if (r0 <= 0) goto L10
            com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile$Sample[] r1 = r3.recycledSamples
            int r0 = r0 + (-1)
            r3.recycledSampleCount = r0
            r0 = r1[r0]
            goto L16
        L10:
            com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile$Sample r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile$Sample
            r1 = 0
            r0.<init>(r1)
        L16:
            int r1 = r3.nextSampleIndex
            int r2 = r1 + 1
            r3.nextSampleIndex = r2
            r0.index = r1
            r0.weight = r4
            r0.value = r5
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile$Sample> r5 = r3.samples
            r5.add(r0)
            int r5 = r3.totalWeight
            int r5 = r5 + r4
            r3.totalWeight = r5
        L2c:
            int r4 = r3.totalWeight
            int r5 = r3.maxWeight
            if (r4 <= r5) goto L65
            int r4 = r4 - r5
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile$Sample> r5 = r3.samples
            r0 = 0
            java.lang.Object r5 = r5.get(r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile$Sample r5 = (com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile.Sample) r5
            int r1 = r5.weight
            if (r1 > r4) goto L5a
            int r4 = r3.totalWeight
            int r1 = r5.weight
            int r4 = r4 - r1
            r3.totalWeight = r4
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile$Sample> r4 = r3.samples
            r4.remove(r0)
            int r4 = r3.recycledSampleCount
            r0 = 5
            if (r4 >= r0) goto L2c
            com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile$Sample[] r0 = r3.recycledSamples
            int r1 = r4 + 1
            r3.recycledSampleCount = r1
            r0[r4] = r5
            goto L2c
        L5a:
            int r0 = r5.weight
            int r0 = r0 - r4
            r5.weight = r0
            int r5 = r3.totalWeight
            int r5 = r5 - r4
            r3.totalWeight = r5
            goto L2c
        L65:
            return
    }

    public float getPercentile(float r5) {
            r4 = this;
            r4.ensureSortedByValue()
            int r0 = r4.totalWeight
            float r0 = (float) r0
            float r5 = r5 * r0
            r0 = 0
            r1 = r0
        L9:
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile$Sample> r2 = r4.samples
            int r2 = r2.size()
            if (r0 >= r2) goto L27
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile$Sample> r2 = r4.samples
            java.lang.Object r2 = r2.get(r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile$Sample r2 = (com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile.Sample) r2
            int r3 = r2.weight
            int r1 = r1 + r3
            float r3 = (float) r1
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 < 0) goto L24
            float r5 = r2.value
            return r5
        L24:
            int r0 = r0 + 1
            goto L9
        L27:
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile$Sample> r5 = r4.samples
            boolean r5 = r5.isEmpty()
            if (r5 == 0) goto L32
            r5 = 2143289344(0x7fc00000, float:NaN)
            goto L42
        L32:
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile$Sample> r5 = r4.samples
            int r0 = r5.size()
            int r0 = r0 + (-1)
            java.lang.Object r5 = r5.get(r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile$Sample r5 = (com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile.Sample) r5
            float r5 = r5.value
        L42:
            return r5
    }
}
