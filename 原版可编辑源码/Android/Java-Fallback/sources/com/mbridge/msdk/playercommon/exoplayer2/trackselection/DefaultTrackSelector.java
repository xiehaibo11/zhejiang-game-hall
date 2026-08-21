package com.mbridge.msdk.playercommon.exoplayer2.trackselection;

public class DefaultTrackSelector extends com.mbridge.msdk.playercommon.exoplayer2.trackselection.MappingTrackSelector {
    private static final float FRACTION_TO_CONSIDER_FULLSCREEN = 0.98f;
    private static final int[] NO_TRACKS = null;
    private static final int WITHIN_RENDERER_CAPABILITIES_BONUS = 1000;
    private final com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection.Factory adaptiveTrackSelectionFactory;
    private final java.util.concurrent.atomic.AtomicReference<com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.Parameters> parametersReference;

    static class 1 {
    }

    private static final class AudioConfigurationTuple {
        public final int channelCount;
        public final java.lang.String mimeType;
        public final int sampleRate;

        public AudioConfigurationTuple(int r1, int r2, java.lang.String r3) {
                r0 = this;
                r0.<init>()
                r0.channelCount = r1
                r0.sampleRate = r2
                r0.mimeType = r3
                return
        }

        public final boolean equals(java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r4 != r5) goto L4
                return r0
            L4:
                r1 = 0
                if (r5 == 0) goto L2d
                java.lang.Class r2 = r4.getClass()
                java.lang.Class r3 = r5.getClass()
                if (r2 == r3) goto L12
                goto L2d
            L12:
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$AudioConfigurationTuple r5 = (com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.AudioConfigurationTuple) r5
                int r2 = r4.channelCount
                int r3 = r5.channelCount
                if (r2 != r3) goto L2b
                int r2 = r4.sampleRate
                int r3 = r5.sampleRate
                if (r2 != r3) goto L2b
                java.lang.String r2 = r4.mimeType
                java.lang.String r5 = r5.mimeType
                boolean r5 = android.text.TextUtils.equals(r2, r5)
                if (r5 == 0) goto L2b
                goto L2c
            L2b:
                r0 = r1
            L2c:
                return r0
            L2d:
                return r1
        }

        public final int hashCode() {
                r2 = this;
                int r0 = r2.channelCount
                int r0 = r0 * 31
                int r1 = r2.sampleRate
                int r0 = r0 + r1
                int r0 = r0 * 31
                java.lang.String r1 = r2.mimeType
                if (r1 == 0) goto L12
                int r1 = r1.hashCode()
                goto L13
            L12:
                r1 = 0
            L13:
                int r0 = r0 + r1
                return r0
        }
    }

    private static final class AudioTrackScore implements java.lang.Comparable<com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.AudioTrackScore> {
        private final int bitrate;
        private final int channelCount;
        private final int defaultSelectionFlagScore;
        private final int matchLanguageScore;
        private final com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.Parameters parameters;
        private final int sampleRate;
        private final int withinRendererCapabilitiesScore;

        public AudioTrackScore(com.mbridge.msdk.playercommon.exoplayer2.Format r2, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.Parameters r3, int r4) {
                r1 = this;
                r1.<init>()
                r1.parameters = r3
                r0 = 0
                boolean r4 = com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.isSupported(r4, r0)
                r1.withinRendererCapabilitiesScore = r4
                java.lang.String r3 = r3.preferredAudioLanguage
                boolean r3 = com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.formatHasLanguage(r2, r3)
                r1.matchLanguageScore = r3
                int r3 = r2.selectionFlags
                r4 = 1
                r3 = r3 & r4
                if (r3 == 0) goto L1b
                r0 = r4
            L1b:
                r1.defaultSelectionFlagScore = r0
                int r3 = r2.channelCount
                r1.channelCount = r3
                int r3 = r2.sampleRate
                r1.sampleRate = r3
                int r2 = r2.bitrate
                r1.bitrate = r2
                return
        }

        public final int compareTo(com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.AudioTrackScore r4) {
                r3 = this;
                int r0 = r3.withinRendererCapabilitiesScore
                int r1 = r4.withinRendererCapabilitiesScore
                if (r0 == r1) goto Lb
                int r4 = com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.access$300(r0, r1)
                return r4
            Lb:
                int r0 = r3.matchLanguageScore
                int r1 = r4.matchLanguageScore
                if (r0 == r1) goto L16
                int r4 = com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.access$300(r0, r1)
                return r4
            L16:
                int r0 = r3.defaultSelectionFlagScore
                int r1 = r4.defaultSelectionFlagScore
                if (r0 == r1) goto L21
                int r4 = com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.access$300(r0, r1)
                return r4
            L21:
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$Parameters r0 = r3.parameters
                boolean r0 = r0.forceLowestBitrate
                if (r0 == 0) goto L30
                int r4 = r4.bitrate
                int r0 = r3.bitrate
                int r4 = com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.access$300(r4, r0)
                return r4
            L30:
                int r0 = r3.withinRendererCapabilitiesScore
                r1 = 1
                if (r0 != r1) goto L36
                goto L37
            L36:
                r1 = -1
            L37:
                int r0 = r3.channelCount
                int r2 = r4.channelCount
                if (r0 == r2) goto L43
                int r4 = com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.access$300(r0, r2)
            L41:
                int r1 = r1 * r4
                return r1
            L43:
                int r0 = r3.sampleRate
                int r2 = r4.sampleRate
                if (r0 == r2) goto L4e
                int r4 = com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.access$300(r0, r2)
                goto L41
            L4e:
                int r0 = r3.bitrate
                int r4 = r4.bitrate
                int r4 = com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.access$300(r0, r4)
                goto L41
        }

        @Override
        public final int compareTo(com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.AudioTrackScore r1) {
                r0 = this;
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$AudioTrackScore r1 = (com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.AudioTrackScore) r1
                int r1 = r0.compareTo(r1)
                return r1
        }

        public final boolean equals(java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r4 != r5) goto L4
                return r0
            L4:
                r1 = 0
                if (r5 == 0) goto L3b
                java.lang.Class r2 = r4.getClass()
                java.lang.Class r3 = r5.getClass()
                if (r2 == r3) goto L12
                goto L3b
            L12:
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$AudioTrackScore r5 = (com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.AudioTrackScore) r5
                int r2 = r4.withinRendererCapabilitiesScore
                int r3 = r5.withinRendererCapabilitiesScore
                if (r2 != r3) goto L39
                int r2 = r4.matchLanguageScore
                int r3 = r5.matchLanguageScore
                if (r2 != r3) goto L39
                int r2 = r4.defaultSelectionFlagScore
                int r3 = r5.defaultSelectionFlagScore
                if (r2 != r3) goto L39
                int r2 = r4.channelCount
                int r3 = r5.channelCount
                if (r2 != r3) goto L39
                int r2 = r4.sampleRate
                int r3 = r5.sampleRate
                if (r2 != r3) goto L39
                int r2 = r4.bitrate
                int r5 = r5.bitrate
                if (r2 != r5) goto L39
                goto L3a
            L39:
                r0 = r1
            L3a:
                return r0
            L3b:
                return r1
        }

        public final int hashCode() {
                r2 = this;
                int r0 = r2.withinRendererCapabilitiesScore
                int r0 = r0 * 31
                int r1 = r2.matchLanguageScore
                int r0 = r0 + r1
                int r0 = r0 * 31
                int r1 = r2.defaultSelectionFlagScore
                int r0 = r0 + r1
                int r0 = r0 * 31
                int r1 = r2.channelCount
                int r0 = r0 + r1
                int r0 = r0 * 31
                int r1 = r2.sampleRate
                int r0 = r0 + r1
                int r0 = r0 * 31
                int r1 = r2.bitrate
                int r0 = r0 + r1
                return r0
        }
    }

    public static final class Parameters implements android.os.Parcelable {
        public static final android.os.Parcelable.Creator<com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.Parameters> CREATOR = null;
        public static final com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.Parameters DEFAULT = null;
        public final boolean allowMixedMimeAdaptiveness;
        public final boolean allowNonSeamlessAdaptiveness;
        public final int disabledTextTrackSelectionFlags;
        public final boolean exceedRendererCapabilitiesIfNecessary;
        public final boolean exceedVideoConstraintsIfNecessary;
        public final boolean forceLowestBitrate;
        public final int maxVideoBitrate;
        public final int maxVideoHeight;
        public final int maxVideoWidth;
        public final java.lang.String preferredAudioLanguage;
        public final java.lang.String preferredTextLanguage;
        private final android.util.SparseBooleanArray rendererDisabledFlags;
        public final boolean selectUndeterminedTextLanguage;
        private final android.util.SparseArray<java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.SelectionOverride>> selectionOverrides;
        public final int tunnelingAudioSessionId;
        public final int viewportHeight;
        public final boolean viewportOrientationMayChange;
        public final int viewportWidth;


        static {
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$Parameters r0 = new com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$Parameters
                r0.<init>()
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.Parameters.DEFAULT = r0
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$Parameters$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$Parameters$1
                r0.<init>()
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.Parameters.CREATOR = r0
                return
        }

        private Parameters() {
                r19 = this;
                r0 = r19
                android.util.SparseArray r2 = new android.util.SparseArray
                r1 = r2
                r2.<init>()
                android.util.SparseBooleanArray r3 = new android.util.SparseBooleanArray
                r2 = r3
                r3.<init>()
                r3 = 0
                r4 = 0
                r5 = 0
                r6 = 0
                r7 = 0
                r8 = 0
                r9 = 1
                r10 = 2147483647(0x7fffffff, float:NaN)
                r11 = 2147483647(0x7fffffff, float:NaN)
                r12 = 2147483647(0x7fffffff, float:NaN)
                r13 = 1
                r14 = 1
                r15 = 2147483647(0x7fffffff, float:NaN)
                r16 = 2147483647(0x7fffffff, float:NaN)
                r17 = 1
                r18 = 0
                r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18)
                return
        }

        Parameters(android.os.Parcel r2) {
                r1 = this;
                r1.<init>()
                android.util.SparseArray r0 = readSelectionOverrides(r2)
                r1.selectionOverrides = r0
                android.util.SparseBooleanArray r0 = r2.readSparseBooleanArray()
                r1.rendererDisabledFlags = r0
                java.lang.String r0 = r2.readString()
                r1.preferredAudioLanguage = r0
                java.lang.String r0 = r2.readString()
                r1.preferredTextLanguage = r0
                boolean r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.readBoolean(r2)
                r1.selectUndeterminedTextLanguage = r0
                int r0 = r2.readInt()
                r1.disabledTextTrackSelectionFlags = r0
                boolean r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.readBoolean(r2)
                r1.forceLowestBitrate = r0
                boolean r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.readBoolean(r2)
                r1.allowMixedMimeAdaptiveness = r0
                boolean r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.readBoolean(r2)
                r1.allowNonSeamlessAdaptiveness = r0
                int r0 = r2.readInt()
                r1.maxVideoWidth = r0
                int r0 = r2.readInt()
                r1.maxVideoHeight = r0
                int r0 = r2.readInt()
                r1.maxVideoBitrate = r0
                boolean r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.readBoolean(r2)
                r1.exceedVideoConstraintsIfNecessary = r0
                boolean r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.readBoolean(r2)
                r1.exceedRendererCapabilitiesIfNecessary = r0
                int r0 = r2.readInt()
                r1.viewportWidth = r0
                int r0 = r2.readInt()
                r1.viewportHeight = r0
                boolean r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.readBoolean(r2)
                r1.viewportOrientationMayChange = r0
                int r2 = r2.readInt()
                r1.tunnelingAudioSessionId = r2
                return
        }

        Parameters(android.util.SparseArray<java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.SelectionOverride>> r3, android.util.SparseBooleanArray r4, java.lang.String r5, java.lang.String r6, boolean r7, int r8, boolean r9, boolean r10, boolean r11, int r12, int r13, int r14, boolean r15, boolean r16, int r17, int r18, boolean r19, int r20) {
                r2 = this;
                r0 = r2
                r2.<init>()
                r1 = r3
                r0.selectionOverrides = r1
                r1 = r4
                r0.rendererDisabledFlags = r1
                java.lang.String r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.normalizeLanguageCode(r5)
                r0.preferredAudioLanguage = r1
                java.lang.String r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.normalizeLanguageCode(r6)
                r0.preferredTextLanguage = r1
                r1 = r7
                r0.selectUndeterminedTextLanguage = r1
                r1 = r8
                r0.disabledTextTrackSelectionFlags = r1
                r1 = r9
                r0.forceLowestBitrate = r1
                r1 = r10
                r0.allowMixedMimeAdaptiveness = r1
                r1 = r11
                r0.allowNonSeamlessAdaptiveness = r1
                r1 = r12
                r0.maxVideoWidth = r1
                r1 = r13
                r0.maxVideoHeight = r1
                r1 = r14
                r0.maxVideoBitrate = r1
                r1 = r15
                r0.exceedVideoConstraintsIfNecessary = r1
                r1 = r16
                r0.exceedRendererCapabilitiesIfNecessary = r1
                r1 = r17
                r0.viewportWidth = r1
                r1 = r18
                r0.viewportHeight = r1
                r1 = r19
                r0.viewportOrientationMayChange = r1
                r1 = r20
                r0.tunnelingAudioSessionId = r1
                return
        }

        static android.util.SparseArray access$000(com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.Parameters r0) {
                android.util.SparseArray<java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$SelectionOverride>> r0 = r0.selectionOverrides
                return r0
        }

        static android.util.SparseBooleanArray access$100(com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.Parameters r0) {
                android.util.SparseBooleanArray r0 = r0.rendererDisabledFlags
                return r0
        }

        private static boolean areRendererDisabledFlagsEqual(android.util.SparseBooleanArray r4, android.util.SparseBooleanArray r5) {
                int r0 = r4.size()
                int r1 = r5.size()
                r2 = 0
                if (r1 == r0) goto Lc
                return r2
            Lc:
                r1 = r2
            Ld:
                if (r1 >= r0) goto L1d
                int r3 = r4.keyAt(r1)
                int r3 = r5.indexOfKey(r3)
                if (r3 >= 0) goto L1a
                return r2
            L1a:
                int r1 = r1 + 1
                goto Ld
            L1d:
                r4 = 1
                return r4
        }

        private static boolean areSelectionOverridesEqual(android.util.SparseArray<java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.SelectionOverride>> r5, android.util.SparseArray<java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.SelectionOverride>> r6) {
                int r0 = r5.size()
                int r1 = r6.size()
                r2 = 0
                if (r1 == r0) goto Lc
                return r2
            Lc:
                r1 = r2
            Ld:
                if (r1 >= r0) goto L30
                int r3 = r5.keyAt(r1)
                int r3 = r6.indexOfKey(r3)
                if (r3 < 0) goto L2f
                java.lang.Object r4 = r5.valueAt(r1)
                java.util.Map r4 = (java.util.Map) r4
                java.lang.Object r3 = r6.valueAt(r3)
                java.util.Map r3 = (java.util.Map) r3
                boolean r3 = areSelectionOverridesEqual(r4, r3)
                if (r3 != 0) goto L2c
                goto L2f
            L2c:
                int r1 = r1 + 1
                goto Ld
            L2f:
                return r2
            L30:
                r5 = 1
                return r5
        }

        private static boolean areSelectionOverridesEqual(java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.SelectionOverride> r4, java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.SelectionOverride> r5) {
                int r0 = r4.size()
                int r1 = r5.size()
                r2 = 0
                if (r1 == r0) goto Lc
                return r2
            Lc:
                java.util.Set r4 = r4.entrySet()
                java.util.Iterator r4 = r4.iterator()
            L14:
                boolean r0 = r4.hasNext()
                if (r0 == 0) goto L3b
                java.lang.Object r0 = r4.next()
                java.util.Map$Entry r0 = (java.util.Map.Entry) r0
                java.lang.Object r1 = r0.getKey()
                com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray) r1
                boolean r3 = r5.containsKey(r1)
                if (r3 == 0) goto L3a
                java.lang.Object r0 = r0.getValue()
                java.lang.Object r1 = r5.get(r1)
                boolean r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r0, r1)
                if (r0 != 0) goto L14
            L3a:
                return r2
            L3b:
                r4 = 1
                return r4
        }

        private static android.util.SparseArray<java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.SelectionOverride>> readSelectionOverrides(android.os.Parcel r10) {
                int r0 = r10.readInt()
                android.util.SparseArray r1 = new android.util.SparseArray
                r1.<init>(r0)
                r2 = 0
                r3 = r2
            Lb:
                if (r3 >= r0) goto L41
                int r4 = r10.readInt()
                int r5 = r10.readInt()
                java.util.HashMap r6 = new java.util.HashMap
                r6.<init>(r5)
                r7 = r2
            L1b:
                if (r7 >= r5) goto L3b
                java.lang.Class<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray> r8 = com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray.class
                java.lang.ClassLoader r8 = r8.getClassLoader()
                android.os.Parcelable r8 = r10.readParcelable(r8)
                com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r8 = (com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray) r8
                java.lang.Class<com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$SelectionOverride> r9 = com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.SelectionOverride.class
                java.lang.ClassLoader r9 = r9.getClassLoader()
                android.os.Parcelable r9 = r10.readParcelable(r9)
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$SelectionOverride r9 = (com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.SelectionOverride) r9
                r6.put(r8, r9)
                int r7 = r7 + 1
                goto L1b
            L3b:
                r1.put(r4, r6)
                int r3 = r3 + 1
                goto Lb
            L41:
                return r1
        }

        private static void writeSelectionOverridesToParcel(android.os.Parcel r6, android.util.SparseArray<java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.SelectionOverride>> r7) {
                int r0 = r7.size()
                r6.writeInt(r0)
                r1 = 0
                r2 = r1
            L9:
                if (r2 >= r0) goto L49
                int r3 = r7.keyAt(r2)
                java.lang.Object r4 = r7.valueAt(r2)
                java.util.Map r4 = (java.util.Map) r4
                int r5 = r4.size()
                r6.writeInt(r3)
                r6.writeInt(r5)
                java.util.Set r3 = r4.entrySet()
                java.util.Iterator r3 = r3.iterator()
            L27:
                boolean r4 = r3.hasNext()
                if (r4 == 0) goto L46
                java.lang.Object r4 = r3.next()
                java.util.Map$Entry r4 = (java.util.Map.Entry) r4
                java.lang.Object r5 = r4.getKey()
                android.os.Parcelable r5 = (android.os.Parcelable) r5
                r6.writeParcelable(r5, r1)
                java.lang.Object r4 = r4.getValue()
                android.os.Parcelable r4 = (android.os.Parcelable) r4
                r6.writeParcelable(r4, r1)
                goto L27
            L46:
                int r2 = r2 + 1
                goto L9
            L49:
                return
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.ParametersBuilder buildUpon() {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$ParametersBuilder r0 = new com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$ParametersBuilder
                r1 = 0
                r0.<init>(r2, r1)
                return r0
        }

        @Override
        public final int describeContents() {
                r1 = this;
                r0 = 0
                return r0
        }

        public final boolean equals(java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r4 != r5) goto L4
                return r0
            L4:
                r1 = 0
                if (r5 == 0) goto L94
                java.lang.Class r2 = r4.getClass()
                java.lang.Class r3 = r5.getClass()
                if (r2 == r3) goto L13
                goto L94
            L13:
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$Parameters r5 = (com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.Parameters) r5
                boolean r2 = r4.selectUndeterminedTextLanguage
                boolean r3 = r5.selectUndeterminedTextLanguage
                if (r2 != r3) goto L92
                int r2 = r4.disabledTextTrackSelectionFlags
                int r3 = r5.disabledTextTrackSelectionFlags
                if (r2 != r3) goto L92
                boolean r2 = r4.forceLowestBitrate
                boolean r3 = r5.forceLowestBitrate
                if (r2 != r3) goto L92
                boolean r2 = r4.allowMixedMimeAdaptiveness
                boolean r3 = r5.allowMixedMimeAdaptiveness
                if (r2 != r3) goto L92
                boolean r2 = r4.allowNonSeamlessAdaptiveness
                boolean r3 = r5.allowNonSeamlessAdaptiveness
                if (r2 != r3) goto L92
                int r2 = r4.maxVideoWidth
                int r3 = r5.maxVideoWidth
                if (r2 != r3) goto L92
                int r2 = r4.maxVideoHeight
                int r3 = r5.maxVideoHeight
                if (r2 != r3) goto L92
                boolean r2 = r4.exceedVideoConstraintsIfNecessary
                boolean r3 = r5.exceedVideoConstraintsIfNecessary
                if (r2 != r3) goto L92
                boolean r2 = r4.exceedRendererCapabilitiesIfNecessary
                boolean r3 = r5.exceedRendererCapabilitiesIfNecessary
                if (r2 != r3) goto L92
                boolean r2 = r4.viewportOrientationMayChange
                boolean r3 = r5.viewportOrientationMayChange
                if (r2 != r3) goto L92
                int r2 = r4.viewportWidth
                int r3 = r5.viewportWidth
                if (r2 != r3) goto L92
                int r2 = r4.viewportHeight
                int r3 = r5.viewportHeight
                if (r2 != r3) goto L92
                int r2 = r4.maxVideoBitrate
                int r3 = r5.maxVideoBitrate
                if (r2 != r3) goto L92
                int r2 = r4.tunnelingAudioSessionId
                int r3 = r5.tunnelingAudioSessionId
                if (r2 != r3) goto L92
                java.lang.String r2 = r4.preferredAudioLanguage
                java.lang.String r3 = r5.preferredAudioLanguage
                boolean r2 = android.text.TextUtils.equals(r2, r3)
                if (r2 == 0) goto L92
                java.lang.String r2 = r4.preferredTextLanguage
                java.lang.String r3 = r5.preferredTextLanguage
                boolean r2 = android.text.TextUtils.equals(r2, r3)
                if (r2 == 0) goto L92
                android.util.SparseBooleanArray r2 = r4.rendererDisabledFlags
                android.util.SparseBooleanArray r3 = r5.rendererDisabledFlags
                boolean r2 = areRendererDisabledFlagsEqual(r2, r3)
                if (r2 == 0) goto L92
                android.util.SparseArray<java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$SelectionOverride>> r2 = r4.selectionOverrides
                android.util.SparseArray<java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$SelectionOverride>> r5 = r5.selectionOverrides
                boolean r5 = areSelectionOverridesEqual(r2, r5)
                if (r5 == 0) goto L92
                goto L93
            L92:
                r0 = r1
            L93:
                return r0
            L94:
                return r1
        }

        public final boolean getRendererDisabled(int r2) {
                r1 = this;
                android.util.SparseBooleanArray r0 = r1.rendererDisabledFlags
                boolean r2 = r0.get(r2)
                return r2
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.SelectionOverride getSelectionOverride(int r2, com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r3) {
                r1 = this;
                android.util.SparseArray<java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$SelectionOverride>> r0 = r1.selectionOverrides
                java.lang.Object r2 = r0.get(r2)
                java.util.Map r2 = (java.util.Map) r2
                if (r2 == 0) goto L11
                java.lang.Object r2 = r2.get(r3)
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$SelectionOverride r2 = (com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.SelectionOverride) r2
                goto L12
            L11:
                r2 = 0
            L12:
                return r2
        }

        public final boolean hasSelectionOverride(int r2, com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r3) {
                r1 = this;
                android.util.SparseArray<java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$SelectionOverride>> r0 = r1.selectionOverrides
                java.lang.Object r2 = r0.get(r2)
                java.util.Map r2 = (java.util.Map) r2
                if (r2 == 0) goto L12
                boolean r2 = r2.containsKey(r3)
                if (r2 == 0) goto L12
                r2 = 1
                goto L13
            L12:
                r2 = 0
            L13:
                return r2
        }

        public final int hashCode() {
                r3 = this;
                boolean r0 = r3.selectUndeterminedTextLanguage
                int r0 = r0 * 31
                int r1 = r3.disabledTextTrackSelectionFlags
                int r0 = r0 + r1
                int r0 = r0 * 31
                boolean r1 = r3.forceLowestBitrate
                int r0 = r0 + r1
                int r0 = r0 * 31
                boolean r1 = r3.allowMixedMimeAdaptiveness
                int r0 = r0 + r1
                int r0 = r0 * 31
                boolean r1 = r3.allowNonSeamlessAdaptiveness
                int r0 = r0 + r1
                int r0 = r0 * 31
                int r1 = r3.maxVideoWidth
                int r0 = r0 + r1
                int r0 = r0 * 31
                int r1 = r3.maxVideoHeight
                int r0 = r0 + r1
                int r0 = r0 * 31
                boolean r1 = r3.exceedVideoConstraintsIfNecessary
                int r0 = r0 + r1
                int r0 = r0 * 31
                boolean r1 = r3.exceedRendererCapabilitiesIfNecessary
                int r0 = r0 + r1
                int r0 = r0 * 31
                boolean r1 = r3.viewportOrientationMayChange
                int r0 = r0 + r1
                int r0 = r0 * 31
                int r1 = r3.viewportWidth
                int r0 = r0 + r1
                int r0 = r0 * 31
                int r1 = r3.viewportHeight
                int r0 = r0 + r1
                int r0 = r0 * 31
                int r1 = r3.maxVideoBitrate
                int r0 = r0 + r1
                int r0 = r0 * 31
                int r1 = r3.tunnelingAudioSessionId
                int r0 = r0 + r1
                int r0 = r0 * 31
                java.lang.String r1 = r3.preferredAudioLanguage
                r2 = 0
                if (r1 != 0) goto L4c
                r1 = r2
                goto L50
            L4c:
                int r1 = r1.hashCode()
            L50:
                int r0 = r0 + r1
                int r0 = r0 * 31
                java.lang.String r1 = r3.preferredTextLanguage
                if (r1 != 0) goto L58
                goto L5c
            L58:
                int r2 = r1.hashCode()
            L5c:
                int r0 = r0 + r2
                return r0
        }

        @Override
        public final void writeToParcel(android.os.Parcel r1, int r2) {
                r0 = this;
                android.util.SparseArray<java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$SelectionOverride>> r2 = r0.selectionOverrides
                writeSelectionOverridesToParcel(r1, r2)
                android.util.SparseBooleanArray r2 = r0.rendererDisabledFlags
                r1.writeSparseBooleanArray(r2)
                java.lang.String r2 = r0.preferredAudioLanguage
                r1.writeString(r2)
                java.lang.String r2 = r0.preferredTextLanguage
                r1.writeString(r2)
                boolean r2 = r0.selectUndeterminedTextLanguage
                com.mbridge.msdk.playercommon.exoplayer2.util.Util.writeBoolean(r1, r2)
                int r2 = r0.disabledTextTrackSelectionFlags
                r1.writeInt(r2)
                boolean r2 = r0.forceLowestBitrate
                com.mbridge.msdk.playercommon.exoplayer2.util.Util.writeBoolean(r1, r2)
                boolean r2 = r0.allowMixedMimeAdaptiveness
                com.mbridge.msdk.playercommon.exoplayer2.util.Util.writeBoolean(r1, r2)
                boolean r2 = r0.allowNonSeamlessAdaptiveness
                com.mbridge.msdk.playercommon.exoplayer2.util.Util.writeBoolean(r1, r2)
                int r2 = r0.maxVideoWidth
                r1.writeInt(r2)
                int r2 = r0.maxVideoHeight
                r1.writeInt(r2)
                int r2 = r0.maxVideoBitrate
                r1.writeInt(r2)
                boolean r2 = r0.exceedVideoConstraintsIfNecessary
                com.mbridge.msdk.playercommon.exoplayer2.util.Util.writeBoolean(r1, r2)
                boolean r2 = r0.exceedRendererCapabilitiesIfNecessary
                com.mbridge.msdk.playercommon.exoplayer2.util.Util.writeBoolean(r1, r2)
                int r2 = r0.viewportWidth
                r1.writeInt(r2)
                int r2 = r0.viewportHeight
                r1.writeInt(r2)
                boolean r2 = r0.viewportOrientationMayChange
                com.mbridge.msdk.playercommon.exoplayer2.util.Util.writeBoolean(r1, r2)
                int r2 = r0.tunnelingAudioSessionId
                r1.writeInt(r2)
                return
        }
    }

    public static final class ParametersBuilder {
        private boolean allowMixedMimeAdaptiveness;
        private boolean allowNonSeamlessAdaptiveness;
        private int disabledTextTrackSelectionFlags;
        private boolean exceedRendererCapabilitiesIfNecessary;
        private boolean exceedVideoConstraintsIfNecessary;
        private boolean forceLowestBitrate;
        private int maxVideoBitrate;
        private int maxVideoHeight;
        private int maxVideoWidth;
        private java.lang.String preferredAudioLanguage;
        private java.lang.String preferredTextLanguage;
        private final android.util.SparseBooleanArray rendererDisabledFlags;
        private boolean selectUndeterminedTextLanguage;
        private final android.util.SparseArray<java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.SelectionOverride>> selectionOverrides;
        private int tunnelingAudioSessionId;
        private int viewportHeight;
        private boolean viewportOrientationMayChange;
        private int viewportWidth;

        public ParametersBuilder() {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$Parameters r0 = com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.Parameters.DEFAULT
                r1.<init>(r0)
                return
        }

        private ParametersBuilder(com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.Parameters r2) {
                r1 = this;
                r1.<init>()
                android.util.SparseArray r0 = com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.Parameters.access$000(r2)
                android.util.SparseArray r0 = cloneSelectionOverrides(r0)
                r1.selectionOverrides = r0
                android.util.SparseBooleanArray r0 = com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.Parameters.access$100(r2)
                android.util.SparseBooleanArray r0 = r0.clone()
                r1.rendererDisabledFlags = r0
                java.lang.String r0 = r2.preferredAudioLanguage
                r1.preferredAudioLanguage = r0
                java.lang.String r0 = r2.preferredTextLanguage
                r1.preferredTextLanguage = r0
                boolean r0 = r2.selectUndeterminedTextLanguage
                r1.selectUndeterminedTextLanguage = r0
                int r0 = r2.disabledTextTrackSelectionFlags
                r1.disabledTextTrackSelectionFlags = r0
                boolean r0 = r2.forceLowestBitrate
                r1.forceLowestBitrate = r0
                boolean r0 = r2.allowMixedMimeAdaptiveness
                r1.allowMixedMimeAdaptiveness = r0
                boolean r0 = r2.allowNonSeamlessAdaptiveness
                r1.allowNonSeamlessAdaptiveness = r0
                int r0 = r2.maxVideoWidth
                r1.maxVideoWidth = r0
                int r0 = r2.maxVideoHeight
                r1.maxVideoHeight = r0
                int r0 = r2.maxVideoBitrate
                r1.maxVideoBitrate = r0
                boolean r0 = r2.exceedVideoConstraintsIfNecessary
                r1.exceedVideoConstraintsIfNecessary = r0
                boolean r0 = r2.exceedRendererCapabilitiesIfNecessary
                r1.exceedRendererCapabilitiesIfNecessary = r0
                int r0 = r2.viewportWidth
                r1.viewportWidth = r0
                int r0 = r2.viewportHeight
                r1.viewportHeight = r0
                boolean r0 = r2.viewportOrientationMayChange
                r1.viewportOrientationMayChange = r0
                int r2 = r2.tunnelingAudioSessionId
                r1.tunnelingAudioSessionId = r2
                return
        }

        ParametersBuilder(com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.Parameters r1, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        private static android.util.SparseArray<java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.SelectionOverride>> cloneSelectionOverrides(android.util.SparseArray<java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.SelectionOverride>> r5) {
                android.util.SparseArray r0 = new android.util.SparseArray
                r0.<init>()
                r1 = 0
            L6:
                int r2 = r5.size()
                if (r1 >= r2) goto L21
                int r2 = r5.keyAt(r1)
                java.util.HashMap r3 = new java.util.HashMap
                java.lang.Object r4 = r5.valueAt(r1)
                java.util.Map r4 = (java.util.Map) r4
                r3.<init>(r4)
                r0.put(r2, r3)
                int r1 = r1 + 1
                goto L6
            L21:
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.Parameters build() {
                r22 = this;
                r0 = r22
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$Parameters r20 = new com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$Parameters
                r1 = r20
                android.util.SparseArray<java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$SelectionOverride>> r2 = r0.selectionOverrides
                android.util.SparseBooleanArray r3 = r0.rendererDisabledFlags
                java.lang.String r4 = r0.preferredAudioLanguage
                java.lang.String r5 = r0.preferredTextLanguage
                boolean r6 = r0.selectUndeterminedTextLanguage
                int r7 = r0.disabledTextTrackSelectionFlags
                boolean r8 = r0.forceLowestBitrate
                boolean r9 = r0.allowMixedMimeAdaptiveness
                boolean r10 = r0.allowNonSeamlessAdaptiveness
                int r11 = r0.maxVideoWidth
                int r12 = r0.maxVideoHeight
                int r13 = r0.maxVideoBitrate
                boolean r14 = r0.exceedVideoConstraintsIfNecessary
                boolean r15 = r0.exceedRendererCapabilitiesIfNecessary
                r21 = r1
                int r1 = r0.viewportWidth
                r16 = r1
                int r1 = r0.viewportHeight
                r17 = r1
                boolean r1 = r0.viewportOrientationMayChange
                r18 = r1
                int r1 = r0.tunnelingAudioSessionId
                r19 = r1
                r1 = r21
                r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19)
                return r20
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.ParametersBuilder clearSelectionOverride(int r3, com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r4) {
                r2 = this;
                android.util.SparseArray<java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$SelectionOverride>> r0 = r2.selectionOverrides
                java.lang.Object r0 = r0.get(r3)
                java.util.Map r0 = (java.util.Map) r0
                if (r0 == 0) goto L1f
                boolean r1 = r0.containsKey(r4)
                if (r1 != 0) goto L11
                goto L1f
            L11:
                r0.remove(r4)
                boolean r4 = r0.isEmpty()
                if (r4 == 0) goto L1f
                android.util.SparseArray<java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$SelectionOverride>> r4 = r2.selectionOverrides
                r4.remove(r3)
            L1f:
                return r2
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.ParametersBuilder clearSelectionOverrides() {
                r1 = this;
                android.util.SparseArray<java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$SelectionOverride>> r0 = r1.selectionOverrides
                int r0 = r0.size()
                if (r0 != 0) goto L9
                return r1
            L9:
                android.util.SparseArray<java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$SelectionOverride>> r0 = r1.selectionOverrides
                r0.clear()
                return r1
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.ParametersBuilder clearSelectionOverrides(int r2) {
                r1 = this;
                android.util.SparseArray<java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$SelectionOverride>> r0 = r1.selectionOverrides
                java.lang.Object r0 = r0.get(r2)
                java.util.Map r0 = (java.util.Map) r0
                if (r0 == 0) goto L16
                boolean r0 = r0.isEmpty()
                if (r0 == 0) goto L11
                goto L16
            L11:
                android.util.SparseArray<java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$SelectionOverride>> r0 = r1.selectionOverrides
                r0.remove(r2)
            L16:
                return r1
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.ParametersBuilder clearVideoSizeConstraints() {
                r1 = this;
                r0 = 2147483647(0x7fffffff, float:NaN)
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$ParametersBuilder r0 = r1.setMaxVideoSize(r0, r0)
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.ParametersBuilder clearViewportSizeConstraints() {
                r2 = this;
                r0 = 2147483647(0x7fffffff, float:NaN)
                r1 = 1
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$ParametersBuilder r0 = r2.setViewportSize(r0, r0, r1)
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.ParametersBuilder setAllowMixedMimeAdaptiveness(boolean r1) {
                r0 = this;
                r0.allowMixedMimeAdaptiveness = r1
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.ParametersBuilder setAllowNonSeamlessAdaptiveness(boolean r1) {
                r0 = this;
                r0.allowNonSeamlessAdaptiveness = r1
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.ParametersBuilder setDisabledTextTrackSelectionFlags(int r1) {
                r0 = this;
                r0.disabledTextTrackSelectionFlags = r1
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.ParametersBuilder setExceedRendererCapabilitiesIfNecessary(boolean r1) {
                r0 = this;
                r0.exceedRendererCapabilitiesIfNecessary = r1
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.ParametersBuilder setExceedVideoConstraintsIfNecessary(boolean r1) {
                r0 = this;
                r0.exceedVideoConstraintsIfNecessary = r1
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.ParametersBuilder setForceLowestBitrate(boolean r1) {
                r0 = this;
                r0.forceLowestBitrate = r1
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.ParametersBuilder setMaxVideoBitrate(int r1) {
                r0 = this;
                r0.maxVideoBitrate = r1
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.ParametersBuilder setMaxVideoSize(int r1, int r2) {
                r0 = this;
                r0.maxVideoWidth = r1
                r0.maxVideoHeight = r2
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.ParametersBuilder setMaxVideoSizeSd() {
                r2 = this;
                r0 = 1279(0x4ff, float:1.792E-42)
                r1 = 719(0x2cf, float:1.008E-42)
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$ParametersBuilder r0 = r2.setMaxVideoSize(r0, r1)
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.ParametersBuilder setPreferredAudioLanguage(java.lang.String r1) {
                r0 = this;
                r0.preferredAudioLanguage = r1
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.ParametersBuilder setPreferredTextLanguage(java.lang.String r1) {
                r0 = this;
                r0.preferredTextLanguage = r1
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.ParametersBuilder setRendererDisabled(int r2, boolean r3) {
                r1 = this;
                android.util.SparseBooleanArray r0 = r1.rendererDisabledFlags
                boolean r0 = r0.get(r2)
                if (r0 != r3) goto L9
                return r1
            L9:
                if (r3 == 0) goto L12
                android.util.SparseBooleanArray r3 = r1.rendererDisabledFlags
                r0 = 1
                r3.put(r2, r0)
                goto L17
            L12:
                android.util.SparseBooleanArray r3 = r1.rendererDisabledFlags
                r3.delete(r2)
            L17:
                return r1
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.ParametersBuilder setSelectUndeterminedTextLanguage(boolean r1) {
                r0 = this;
                r0.selectUndeterminedTextLanguage = r1
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.ParametersBuilder setSelectionOverride(int r3, com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r4, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.SelectionOverride r5) {
                r2 = this;
                android.util.SparseArray<java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$SelectionOverride>> r0 = r2.selectionOverrides
                java.lang.Object r0 = r0.get(r3)
                java.util.Map r0 = (java.util.Map) r0
                if (r0 != 0) goto L14
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                android.util.SparseArray<java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$SelectionOverride>> r1 = r2.selectionOverrides
                r1.put(r3, r0)
            L14:
                boolean r3 = r0.containsKey(r4)
                if (r3 == 0) goto L25
                java.lang.Object r3 = r0.get(r4)
                boolean r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r3, r5)
                if (r3 == 0) goto L25
                return r2
            L25:
                r0.put(r4, r5)
                return r2
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.ParametersBuilder setTunnelingAudioSessionId(int r2) {
                r1 = this;
                int r0 = r1.tunnelingAudioSessionId
                if (r0 == r2) goto L6
                r1.tunnelingAudioSessionId = r2
            L6:
                return r1
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.ParametersBuilder setViewportSize(int r1, int r2, boolean r3) {
                r0 = this;
                r0.viewportWidth = r1
                r0.viewportHeight = r2
                r0.viewportOrientationMayChange = r3
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.ParametersBuilder setViewportSizeToPhysicalDisplaySize(android.content.Context r2, boolean r3) {
                r1 = this;
                android.graphics.Point r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getPhysicalDisplaySize(r2)
                int r0 = r2.x
                int r2 = r2.y
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$ParametersBuilder r2 = r1.setViewportSize(r0, r2, r3)
                return r2
        }
    }

    public static final class SelectionOverride implements android.os.Parcelable {
        public static final android.os.Parcelable.Creator<com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.SelectionOverride> CREATOR = null;
        public final int groupIndex;
        public final int length;
        public final int[] tracks;


        static {
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$SelectionOverride$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$SelectionOverride$1
                r0.<init>()
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.SelectionOverride.CREATOR = r0
                return
        }

        public SelectionOverride(int r1, int... r2) {
                r0 = this;
                r0.<init>()
                r0.groupIndex = r1
                int r1 = r2.length
                int[] r1 = java.util.Arrays.copyOf(r2, r1)
                r0.tracks = r1
                int r2 = r2.length
                r0.length = r2
                java.util.Arrays.sort(r1)
                return
        }

        SelectionOverride(android.os.Parcel r2) {
                r1 = this;
                r1.<init>()
                int r0 = r2.readInt()
                r1.groupIndex = r0
                byte r0 = r2.readByte()
                r1.length = r0
                int[] r0 = new int[r0]
                r1.tracks = r0
                r2.readIntArray(r0)
                return
        }

        public final boolean containsTrack(int r6) {
                r5 = this;
                int[] r0 = r5.tracks
                int r1 = r0.length
                r2 = 0
                r3 = r2
            L5:
                if (r3 >= r1) goto L10
                r4 = r0[r3]
                if (r4 != r6) goto Ld
                r6 = 1
                return r6
            Ld:
                int r3 = r3 + 1
                goto L5
            L10:
                return r2
        }

        @Override
        public final int describeContents() {
                r1 = this;
                r0 = 0
                return r0
        }

        public final boolean equals(java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r4 != r5) goto L4
                return r0
            L4:
                r1 = 0
                if (r5 == 0) goto L27
                java.lang.Class r2 = r4.getClass()
                java.lang.Class r3 = r5.getClass()
                if (r2 == r3) goto L12
                goto L27
            L12:
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$SelectionOverride r5 = (com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.SelectionOverride) r5
                int r2 = r4.groupIndex
                int r3 = r5.groupIndex
                if (r2 != r3) goto L25
                int[] r2 = r4.tracks
                int[] r5 = r5.tracks
                boolean r5 = java.util.Arrays.equals(r2, r5)
                if (r5 == 0) goto L25
                goto L26
            L25:
                r0 = r1
            L26:
                return r0
            L27:
                return r1
        }

        public final int hashCode() {
                r2 = this;
                int r0 = r2.groupIndex
                int r0 = r0 * 31
                int[] r1 = r2.tracks
                int r1 = java.util.Arrays.hashCode(r1)
                int r0 = r0 + r1
                return r0
        }

        @Override
        public final void writeToParcel(android.os.Parcel r1, int r2) {
                r0 = this;
                int r2 = r0.groupIndex
                r1.writeInt(r2)
                int[] r2 = r0.tracks
                int r2 = r2.length
                r1.writeInt(r2)
                int[] r2 = r0.tracks
                r1.writeIntArray(r2)
                return
        }
    }

    static {
            r0 = 0
            int[] r0 = new int[r0]
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.NO_TRACKS = r0
            return
    }

    public DefaultTrackSelector() {
            r1 = this;
            r0 = 0
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection$Factory r0 = (com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection.Factory) r0
            r1.<init>(r0)
            return
    }

    public DefaultTrackSelector(com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection.Factory r2) {
            r1 = this;
            r1.<init>()
            r1.adaptiveTrackSelectionFactory = r2
            java.util.concurrent.atomic.AtomicReference r2 = new java.util.concurrent.atomic.AtomicReference
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$Parameters r0 = com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.Parameters.DEFAULT
            r2.<init>(r0)
            r1.parametersReference = r2
            return
    }

    public DefaultTrackSelector(com.mbridge.msdk.playercommon.exoplayer2.upstream.BandwidthMeter r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.AdaptiveTrackSelection$Factory r0 = new com.mbridge.msdk.playercommon.exoplayer2.trackselection.AdaptiveTrackSelection$Factory
            r0.<init>(r2)
            r1.<init>(r0)
            return
    }

    static int access$300(int r0, int r1) {
            int r0 = compareInts(r0, r1)
            return r0
    }

    private static int compareFormatValues(int r1, int r2) {
            r0 = -1
            if (r1 != r0) goto L7
            if (r2 != r0) goto Ld
            r0 = 0
            goto Ld
        L7:
            if (r2 != r0) goto Lb
            r0 = 1
            goto Ld
        Lb:
            int r0 = r1 - r2
        Ld:
            return r0
    }

    private static int compareInts(int r0, int r1) {
            if (r0 <= r1) goto L4
            r0 = 1
            goto L9
        L4:
            if (r1 <= r0) goto L8
            r0 = -1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    private static void filterAdaptiveVideoTrackCountForMimeType(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r11, int[] r12, int r13, java.lang.String r14, int r15, int r16, int r17, java.util.List<java.lang.Integer> r18) {
            r0 = r18
            int r1 = r18.size()
            int r1 = r1 + (-1)
        L8:
            if (r1 < 0) goto L2e
            java.lang.Object r2 = r0.get(r1)
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
            r3 = r11
            com.mbridge.msdk.playercommon.exoplayer2.Format r4 = r11.getFormat(r2)
            r6 = r12[r2]
            r5 = r14
            r7 = r13
            r8 = r15
            r9 = r16
            r10 = r17
            boolean r2 = isSupportedAdaptiveVideoTrack(r4, r5, r6, r7, r8, r9, r10)
            if (r2 != 0) goto L2b
            r0.remove(r1)
        L2b:
            int r1 = r1 + (-1)
            goto L8
        L2e:
            return
    }

    protected static boolean formatHasLanguage(com.mbridge.msdk.playercommon.exoplayer2.Format r0, java.lang.String r1) {
            if (r1 == 0) goto L10
            java.lang.String r0 = r0.language
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.normalizeLanguageCode(r0)
            boolean r0 = android.text.TextUtils.equals(r1, r0)
            if (r0 == 0) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            return r0
    }

    protected static boolean formatHasNoLanguage(com.mbridge.msdk.playercommon.exoplayer2.Format r1) {
            java.lang.String r0 = r1.language
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L13
            java.lang.String r0 = "und"
            boolean r1 = formatHasLanguage(r1, r0)
            if (r1 == 0) goto L11
            goto L13
        L11:
            r1 = 0
            goto L14
        L13:
            r1 = 1
        L14:
            return r1
    }

    private static int getAdaptiveAudioTrackCount(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r4, int[] r5, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.AudioConfigurationTuple r6) {
            r0 = 0
            r1 = r0
        L2:
            int r2 = r4.length
            if (r0 >= r2) goto L17
            com.mbridge.msdk.playercommon.exoplayer2.Format r2 = r4.getFormat(r0)
            r3 = r5[r0]
            boolean r2 = isSupportedAdaptiveAudioTrack(r2, r3, r6)
            if (r2 == 0) goto L14
            int r1 = r1 + 1
        L14:
            int r0 = r0 + 1
            goto L2
        L17:
            return r1
    }

    private static int[] getAdaptiveAudioTracks(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r10, int[] r11, boolean r12) {
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1 = 0
            r2 = 0
            r5 = r1
            r3 = r2
            r4 = r3
        La:
            int r6 = r10.length
            if (r3 >= r6) goto L32
            com.mbridge.msdk.playercommon.exoplayer2.Format r6 = r10.getFormat(r3)
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$AudioConfigurationTuple r7 = new com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$AudioConfigurationTuple
            int r8 = r6.channelCount
            int r9 = r6.sampleRate
            if (r12 == 0) goto L1c
            r6 = r1
            goto L1e
        L1c:
            java.lang.String r6 = r6.sampleMimeType
        L1e:
            r7.<init>(r8, r9, r6)
            boolean r6 = r0.add(r7)
            if (r6 == 0) goto L2f
            int r6 = getAdaptiveAudioTrackCount(r10, r11, r7)
            if (r6 <= r4) goto L2f
            r4 = r6
            r5 = r7
        L2f:
            int r3 = r3 + 1
            goto La
        L32:
            r12 = 1
            if (r4 <= r12) goto L57
            int[] r12 = new int[r4]
            r0 = r2
        L38:
            int r1 = r10.length
            if (r2 >= r1) goto L56
            com.mbridge.msdk.playercommon.exoplayer2.Format r1 = r10.getFormat(r2)
            r3 = r11[r2]
            java.lang.Object r4 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r5)
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$AudioConfigurationTuple r4 = (com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.AudioConfigurationTuple) r4
            boolean r1 = isSupportedAdaptiveAudioTrack(r1, r3, r4)
            if (r1 == 0) goto L53
            int r1 = r0 + 1
            r12[r0] = r2
            r0 = r1
        L53:
            int r2 = r2 + 1
            goto L38
        L56:
            return r12
        L57:
            int[] r10 = com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.NO_TRACKS
            return r10
    }

    private static int getAdaptiveVideoTrackCountForMimeType(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r12, int[] r13, int r14, java.lang.String r15, int r16, int r17, int r18, java.util.List<java.lang.Integer> r19) {
            r0 = 0
            r1 = r0
        L2:
            int r2 = r19.size()
            if (r0 >= r2) goto L2e
            r2 = r19
            java.lang.Object r3 = r2.get(r0)
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r3 = r3.intValue()
            r4 = r12
            com.mbridge.msdk.playercommon.exoplayer2.Format r5 = r12.getFormat(r3)
            r7 = r13[r3]
            r6 = r15
            r8 = r14
            r9 = r16
            r10 = r17
            r11 = r18
            boolean r3 = isSupportedAdaptiveVideoTrack(r5, r6, r7, r8, r9, r10, r11)
            if (r3 == 0) goto L2b
            int r1 = r1 + 1
        L2b:
            int r0 = r0 + 1
            goto L2
        L2e:
            return r1
    }

    private static int[] getAdaptiveVideoTracksForGroup(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r16, int[] r17, boolean r18, int r19, int r20, int r21, int r22, int r23, int r24, boolean r25) {
            r8 = r16
            int r0 = r8.length
            r9 = 2
            if (r0 >= r9) goto La
            int[] r0 = com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.NO_TRACKS
            return r0
        La:
            r0 = r23
            r1 = r24
            r2 = r25
            java.util.List r10 = getViewportFilteredTrackIndices(r8, r0, r1, r2)
            int r0 = r10.size()
            if (r0 >= r9) goto L1d
            int[] r0 = com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.NO_TRACKS
            return r0
        L1d:
            r0 = 0
            if (r18 != 0) goto L60
            java.util.HashSet r11 = new java.util.HashSet
            r11.<init>()
            r1 = 0
            r12 = r0
            r13 = r1
            r14 = r13
        L29:
            int r0 = r10.size()
            if (r13 >= r0) goto L5e
            java.lang.Object r0 = r10.get(r13)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = r8.getFormat(r0)
            java.lang.String r15 = r0.sampleMimeType
            boolean r0 = r11.add(r15)
            if (r0 == 0) goto L5b
            r0 = r16
            r1 = r17
            r2 = r19
            r3 = r15
            r4 = r20
            r5 = r21
            r6 = r22
            r7 = r10
            int r0 = getAdaptiveVideoTrackCountForMimeType(r0, r1, r2, r3, r4, r5, r6, r7)
            if (r0 <= r14) goto L5b
            r14 = r0
            r12 = r15
        L5b:
            int r13 = r13 + 1
            goto L29
        L5e:
            r3 = r12
            goto L61
        L60:
            r3 = r0
        L61:
            r0 = r16
            r1 = r17
            r2 = r19
            r4 = r20
            r5 = r21
            r6 = r22
            r7 = r10
            filterAdaptiveVideoTrackCountForMimeType(r0, r1, r2, r3, r4, r5, r6, r7)
            int r0 = r10.size()
            if (r0 >= r9) goto L7a
            int[] r0 = com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.NO_TRACKS
            goto L7e
        L7a:
            int[] r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.toArray(r10)
        L7e:
            return r0
    }

    private static android.graphics.Point getMaxVideoSizeInViewport(boolean r3, int r4, int r5, int r6, int r7) {
            if (r3 == 0) goto L10
            r3 = 1
            r0 = 0
            if (r6 <= r7) goto L8
            r1 = r3
            goto L9
        L8:
            r1 = r0
        L9:
            if (r4 <= r5) goto Lc
            goto Ld
        Lc:
            r3 = r0
        Ld:
            if (r1 == r3) goto L10
            goto L13
        L10:
            r2 = r5
            r5 = r4
            r4 = r2
        L13:
            int r3 = r6 * r4
            int r0 = r7 * r5
            if (r3 < r0) goto L23
            android.graphics.Point r3 = new android.graphics.Point
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.ceilDivide(r0, r6)
            r3.<init>(r5, r4)
            return r3
        L23:
            android.graphics.Point r5 = new android.graphics.Point
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.ceilDivide(r3, r7)
            r5.<init>(r3, r4)
            return r5
    }

    private static java.util.List<java.lang.Integer> getViewportFilteredTrackIndices(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r10, int r11, int r12, boolean r13) {
            java.util.ArrayList r0 = new java.util.ArrayList
            int r1 = r10.length
            r0.<init>(r1)
            r1 = 0
            r2 = r1
        L9:
            int r3 = r10.length
            if (r2 >= r3) goto L17
            java.lang.Integer r3 = java.lang.Integer.valueOf(r2)
            r0.add(r3)
            int r2 = r2 + 1
            goto L9
        L17:
            r2 = 2147483647(0x7fffffff, float:NaN)
            if (r11 == r2) goto L7f
            if (r12 != r2) goto L1f
            goto L7f
        L1f:
            r3 = r2
        L20:
            int r4 = r10.length
            if (r1 >= r4) goto L58
            com.mbridge.msdk.playercommon.exoplayer2.Format r4 = r10.getFormat(r1)
            int r5 = r4.width
            if (r5 <= 0) goto L55
            int r5 = r4.height
            if (r5 <= 0) goto L55
            int r5 = r4.width
            int r6 = r4.height
            android.graphics.Point r5 = getMaxVideoSizeInViewport(r13, r11, r12, r5, r6)
            int r6 = r4.width
            int r7 = r4.height
            int r6 = r6 * r7
            int r7 = r4.width
            int r8 = r5.x
            float r8 = (float) r8
            r9 = 1065017672(0x3f7ae148, float:0.98)
            float r8 = r8 * r9
            int r8 = (int) r8
            if (r7 < r8) goto L55
            int r4 = r4.height
            int r5 = r5.y
            float r5 = (float) r5
            float r5 = r5 * r9
            int r5 = (int) r5
            if (r4 < r5) goto L55
            if (r6 >= r3) goto L55
            r3 = r6
        L55:
            int r1 = r1 + 1
            goto L20
        L58:
            if (r3 == r2) goto L7f
            int r11 = r0.size()
            int r11 = r11 + (-1)
        L60:
            if (r11 < 0) goto L7f
            java.lang.Object r12 = r0.get(r11)
            java.lang.Integer r12 = (java.lang.Integer) r12
            int r12 = r12.intValue()
            com.mbridge.msdk.playercommon.exoplayer2.Format r12 = r10.getFormat(r12)
            int r12 = r12.getPixelCount()
            r13 = -1
            if (r12 == r13) goto L79
            if (r12 <= r3) goto L7c
        L79:
            r0.remove(r11)
        L7c:
            int r11 = r11 + (-1)
            goto L60
        L7f:
            return r0
    }

    protected static boolean isSupported(int r1, boolean r2) {
            r1 = r1 & 7
            r0 = 4
            if (r1 == r0) goto Ld
            if (r2 == 0) goto Lb
            r2 = 3
            if (r1 != r2) goto Lb
            goto Ld
        Lb:
            r1 = 0
            goto Le
        Ld:
            r1 = 1
        Le:
            return r1
    }

    private static boolean isSupportedAdaptiveAudioTrack(com.mbridge.msdk.playercommon.exoplayer2.Format r2, int r3, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.AudioConfigurationTuple r4) {
            r0 = 0
            boolean r3 = isSupported(r3, r0)
            if (r3 == 0) goto L22
            int r3 = r2.channelCount
            int r1 = r4.channelCount
            if (r3 != r1) goto L22
            int r3 = r2.sampleRate
            int r1 = r4.sampleRate
            if (r3 != r1) goto L22
            java.lang.String r3 = r4.mimeType
            if (r3 == 0) goto L21
            java.lang.String r3 = r4.mimeType
            java.lang.String r2 = r2.sampleMimeType
            boolean r2 = android.text.TextUtils.equals(r3, r2)
            if (r2 == 0) goto L22
        L21:
            r0 = 1
        L22:
            return r0
    }

    private static boolean isSupportedAdaptiveVideoTrack(com.mbridge.msdk.playercommon.exoplayer2.Format r2, java.lang.String r3, int r4, int r5, int r6, int r7, int r8) {
            r0 = 0
            boolean r1 = isSupported(r4, r0)
            if (r1 == 0) goto L2e
            r4 = r4 & r5
            if (r4 == 0) goto L2e
            if (r3 == 0) goto L14
            java.lang.String r4 = r2.sampleMimeType
            boolean r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r4, r3)
            if (r3 == 0) goto L2e
        L14:
            int r3 = r2.width
            r4 = -1
            if (r3 == r4) goto L1d
            int r3 = r2.width
            if (r3 > r6) goto L2e
        L1d:
            int r3 = r2.height
            if (r3 == r4) goto L25
            int r3 = r2.height
            if (r3 > r7) goto L2e
        L25:
            int r3 = r2.bitrate
            if (r3 == r4) goto L2d
            int r2 = r2.bitrate
            if (r2 > r8) goto L2e
        L2d:
            r0 = 1
        L2e:
            return r0
    }

    private static void maybeConfigureRenderersForTunneling(com.mbridge.msdk.playercommon.exoplayer2.trackselection.MappingTrackSelector.MappedTrackInfo r10, int[][][] r11, com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration[] r12, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[] r13, int r14) {
            if (r14 != 0) goto L3
            return
        L3:
            r0 = 0
            r1 = -1
            r2 = r0
            r3 = r1
            r4 = r3
        L8:
            int r5 = r10.getRendererCount()
            r6 = 1
            if (r2 >= r5) goto L37
            int r5 = r10.getRendererType(r2)
            r7 = r13[r2]
            if (r5 == r6) goto L1a
            r8 = 2
            if (r5 != r8) goto L34
        L1a:
            if (r7 == 0) goto L34
            r8 = r11[r2]
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r9 = r10.getTrackGroups(r2)
            boolean r7 = rendererSupportsTunneling(r8, r9, r7)
            if (r7 == 0) goto L34
            if (r5 != r6) goto L2f
            if (r4 == r1) goto L2d
            goto L31
        L2d:
            r4 = r2
            goto L34
        L2f:
            if (r3 == r1) goto L33
        L31:
            r10 = r0
            goto L38
        L33:
            r3 = r2
        L34:
            int r2 = r2 + 1
            goto L8
        L37:
            r10 = r6
        L38:
            if (r4 == r1) goto L3d
            if (r3 == r1) goto L3d
            r0 = r6
        L3d:
            r10 = r10 & r0
            if (r10 == 0) goto L49
            com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration r10 = new com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration
            r10.<init>(r14)
            r12[r4] = r10
            r12[r3] = r10
        L49:
            return
    }

    private static boolean rendererSupportsTunneling(int[][] r4, com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r5, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection r6) {
            r0 = 0
            if (r6 != 0) goto L4
            return r0
        L4:
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r1 = r6.getTrackGroup()
            int r5 = r5.indexOf(r1)
            r1 = r0
        Ld:
            int r2 = r6.length()
            if (r1 >= r2) goto L24
            r2 = r4[r5]
            int r3 = r6.getIndexInTrackGroup(r1)
            r2 = r2[r3]
            r3 = 32
            r2 = r2 & r3
            if (r2 == r3) goto L21
            return r0
        L21:
            int r1 = r1 + 1
            goto Ld
        L24:
            r4 = 1
            return r4
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection selectAdaptiveVideoTrack(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r16, int[][] r17, int r18, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.Parameters r19, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection.Factory r20) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r0 = r16
            r1 = r19
            boolean r2 = r1.allowNonSeamlessAdaptiveness
            if (r2 == 0) goto Lb
            r2 = 24
            goto Ld
        Lb:
            r2 = 16
        Ld:
            boolean r3 = r1.allowMixedMimeAdaptiveness
            r4 = 0
            if (r3 == 0) goto L19
            r3 = r18 & r2
            if (r3 == 0) goto L19
            r3 = 1
            r13 = r3
            goto L1a
        L19:
            r13 = r4
        L1a:
            r14 = r4
        L1b:
            int r3 = r0.length
            if (r14 >= r3) goto L49
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r15 = r0.get(r14)
            r4 = r17[r14]
            int r7 = r1.maxVideoWidth
            int r8 = r1.maxVideoHeight
            int r9 = r1.maxVideoBitrate
            int r10 = r1.viewportWidth
            int r11 = r1.viewportHeight
            boolean r12 = r1.viewportOrientationMayChange
            r3 = r15
            r5 = r13
            r6 = r2
            int[] r3 = getAdaptiveVideoTracksForGroup(r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
            int r4 = r3.length
            if (r4 <= 0) goto L46
            java.lang.Object r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r20)
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection$Factory r0 = (com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection.Factory) r0
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection r0 = r0.createTrackSelection(r15, r3)
            return r0
        L46:
            int r14 = r14 + 1
            goto L1b
        L49:
            r0 = 0
            return r0
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection selectFixedVideoTrack(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r18, int[][] r19, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.Parameters r20) {
            r0 = r18
            r1 = r20
            r3 = -1
            r9 = r3
            r10 = r9
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
        Lb:
            int r11 = r0.length
            if (r5 >= r11) goto Lc9
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r11 = r0.get(r5)
            int r12 = r1.viewportWidth
            int r13 = r1.viewportHeight
            boolean r14 = r1.viewportOrientationMayChange
            java.util.List r12 = getViewportFilteredTrackIndices(r11, r12, r13, r14)
            r13 = r19[r5]
            r14 = 0
        L20:
            int r15 = r11.length
            if (r14 >= r15) goto Lc2
            r15 = r13[r14]
            boolean r2 = r1.exceedRendererCapabilitiesIfNecessary
            boolean r2 = isSupported(r15, r2)
            if (r2 == 0) goto Lbb
            com.mbridge.msdk.playercommon.exoplayer2.Format r2 = r11.getFormat(r14)
            java.lang.Integer r15 = java.lang.Integer.valueOf(r14)
            boolean r15 = r12.contains(r15)
            r16 = 1
            if (r15 == 0) goto L5f
            int r15 = r2.width
            if (r15 == r3) goto L48
            int r15 = r2.width
            int r4 = r1.maxVideoWidth
            if (r15 > r4) goto L5f
        L48:
            int r4 = r2.height
            if (r4 == r3) goto L52
            int r4 = r2.height
            int r15 = r1.maxVideoHeight
            if (r4 > r15) goto L5f
        L52:
            int r4 = r2.bitrate
            if (r4 == r3) goto L5c
            int r4 = r2.bitrate
            int r15 = r1.maxVideoBitrate
            if (r4 > r15) goto L5f
        L5c:
            r4 = r16
            goto L60
        L5f:
            r4 = 0
        L60:
            if (r4 != 0) goto L67
            boolean r15 = r1.exceedVideoConstraintsIfNecessary
            if (r15 != 0) goto L67
            goto Lbb
        L67:
            if (r4 == 0) goto L6b
            r15 = 2
            goto L6d
        L6b:
            r15 = r16
        L6d:
            r3 = r13[r14]
            r0 = 0
            boolean r3 = isSupported(r3, r0)
            if (r3 == 0) goto L78
            int r15 = r15 + 1000
        L78:
            if (r15 <= r8) goto L7d
            r17 = r16
            goto L7f
        L7d:
            r17 = r0
        L7f:
            if (r15 != r8) goto Lae
            boolean r0 = r1.forceLowestBitrate
            if (r0 == 0) goto L93
            int r0 = r2.bitrate
            int r0 = compareFormatValues(r0, r10)
            if (r0 >= 0) goto L8e
            goto L90
        L8e:
            r16 = 0
        L90:
            r17 = r16
            goto Lae
        L93:
            int r0 = r2.getPixelCount()
            if (r0 == r9) goto L9e
            int r0 = compareFormatValues(r0, r9)
            goto La4
        L9e:
            int r0 = r2.bitrate
            int r0 = compareFormatValues(r0, r10)
        La4:
            if (r3 == 0) goto Lab
            if (r4 == 0) goto Lab
            if (r0 <= 0) goto L8e
            goto L90
        Lab:
            if (r0 >= 0) goto L8e
            goto L90
        Lae:
            if (r17 == 0) goto Lbb
            int r0 = r2.bitrate
            int r2 = r2.getPixelCount()
            r10 = r0
            r9 = r2
            r6 = r11
            r7 = r14
            r8 = r15
        Lbb:
            int r14 = r14 + 1
            r3 = -1
            r0 = r18
            goto L20
        Lc2:
            int r5 = r5 + 1
            r3 = -1
            r0 = r18
            goto Lb
        Lc9:
            if (r6 != 0) goto Lcd
            r2 = 0
            goto Ld2
        Lcd:
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.FixedTrackSelection r2 = new com.mbridge.msdk.playercommon.exoplayer2.trackselection.FixedTrackSelection
            r2.<init>(r6, r7)
        Ld2:
            return r2
    }

    public com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.ParametersBuilder buildUponParameters() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$Parameters r0 = r1.getParameters()
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$ParametersBuilder r0 = r0.buildUpon()
            return r0
    }

    public final void clearSelectionOverride(int r2, com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r3) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$ParametersBuilder r0 = r1.buildUponParameters()
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$ParametersBuilder r2 = r0.clearSelectionOverride(r2, r3)
            r1.setParameters(r2)
            return
    }

    public final void clearSelectionOverrides() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$ParametersBuilder r0 = r1.buildUponParameters()
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$ParametersBuilder r0 = r0.clearSelectionOverrides()
            r1.setParameters(r0)
            return
    }

    public final void clearSelectionOverrides(int r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$ParametersBuilder r0 = r1.buildUponParameters()
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$ParametersBuilder r2 = r0.clearSelectionOverrides(r2)
            r1.setParameters(r2)
            return
    }

    public com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.Parameters getParameters() {
            r1 = this;
            java.util.concurrent.atomic.AtomicReference<com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$Parameters> r0 = r1.parametersReference
            java.lang.Object r0 = r0.get()
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$Parameters r0 = (com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.Parameters) r0
            return r0
    }

    public final boolean getRendererDisabled(int r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$Parameters r0 = r1.getParameters()
            boolean r2 = r0.getRendererDisabled(r2)
            return r2
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.SelectionOverride getSelectionOverride(int r2, com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r3) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$Parameters r0 = r1.getParameters()
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$SelectionOverride r2 = r0.getSelectionOverride(r2, r3)
            return r2
    }

    public final boolean hasSelectionOverride(int r2, com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r3) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$Parameters r0 = r1.getParameters()
            boolean r2 = r0.hasSelectionOverride(r2, r3)
            return r2
    }

    protected com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[] selectAllTracks(com.mbridge.msdk.playercommon.exoplayer2.trackselection.MappingTrackSelector.MappedTrackInfo r18, int[][][] r19, int[] r20, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.Parameters r21) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r17 = this;
            r6 = r17
            r7 = r18
            r8 = r21
            int r9 = r18.getRendererCount()
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[] r10 = new com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[r9]
            r11 = 0
            r0 = r11
            r12 = r0
            r13 = r12
        L10:
            r14 = 2
            r15 = 1
            if (r12 >= r9) goto L45
            int r1 = r7.getRendererType(r12)
            if (r14 != r1) goto L42
            if (r0 != 0) goto L37
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r1 = r7.getTrackGroups(r12)
            r2 = r19[r12]
            r3 = r20[r12]
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection$Factory r5 = r6.adaptiveTrackSelectionFactory
            r0 = r17
            r4 = r21
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection r0 = r0.selectVideoTrack(r1, r2, r3, r4, r5)
            r10[r12] = r0
            r0 = r10[r12]
            if (r0 == 0) goto L36
            r0 = r15
            goto L37
        L36:
            r0 = r11
        L37:
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r1 = r7.getTrackGroups(r12)
            int r1 = r1.length
            if (r1 <= 0) goto L40
            goto L41
        L40:
            r15 = r11
        L41:
            r13 = r13 | r15
        L42:
            int r12 = r12 + 1
            goto L10
        L45:
            r0 = r11
            r12 = r0
            r16 = r12
        L49:
            if (r12 >= r9) goto La0
            int r1 = r7.getRendererType(r12)
            if (r1 == r15) goto L7b
            if (r1 == r14) goto L9d
            r2 = 3
            if (r1 == r2) goto L63
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r2 = r7.getTrackGroups(r12)
            r3 = r19[r12]
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection r1 = r6.selectOtherTrack(r1, r2, r3, r8)
            r10[r12] = r1
            goto L9d
        L63:
            if (r16 != 0) goto L9d
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r1 = r7.getTrackGroups(r12)
            r2 = r19[r12]
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection r1 = r6.selectTextTrack(r1, r2, r8)
            r10[r12] = r1
            r1 = r10[r12]
            if (r1 == 0) goto L78
            r16 = r15
            goto L9d
        L78:
            r16 = r11
            goto L9d
        L7b:
            if (r0 != 0) goto L9d
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r1 = r7.getTrackGroups(r12)
            r2 = r19[r12]
            r3 = r20[r12]
            if (r13 == 0) goto L89
            r0 = 0
            goto L8b
        L89:
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection$Factory r0 = r6.adaptiveTrackSelectionFactory
        L8b:
            r5 = r0
            r0 = r17
            r4 = r21
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection r0 = r0.selectAudioTrack(r1, r2, r3, r4, r5)
            r10[r12] = r0
            r0 = r10[r12]
            if (r0 == 0) goto L9c
            r0 = r15
            goto L9d
        L9c:
            r0 = r11
        L9d:
            int r12 = r12 + 1
            goto L49
        La0:
            return r10
    }

    protected com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection selectAudioTrack(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r17, int[][] r18, int r19, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.Parameters r20, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection.Factory r21) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r16 = this;
            r0 = r17
            r1 = r20
            r2 = r21
            r3 = 0
            r4 = 0
            r5 = -1
            r6 = r3
            r8 = r4
            r7 = r5
            r9 = r7
        Ld:
            int r10 = r0.length
            if (r6 >= r10) goto L42
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r10 = r0.get(r6)
            r11 = r18[r6]
            r12 = r3
        L18:
            int r13 = r10.length
            if (r12 >= r13) goto L3f
            r13 = r11[r12]
            boolean r14 = r1.exceedRendererCapabilitiesIfNecessary
            boolean r13 = isSupported(r13, r14)
            if (r13 == 0) goto L3c
            com.mbridge.msdk.playercommon.exoplayer2.Format r13 = r10.getFormat(r12)
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$AudioTrackScore r14 = new com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$AudioTrackScore
            r15 = r11[r12]
            r14.<init>(r13, r1, r15)
            if (r8 == 0) goto L39
            int r13 = r14.compareTo(r8)
            if (r13 <= 0) goto L3c
        L39:
            r7 = r6
            r9 = r12
            r8 = r14
        L3c:
            int r12 = r12 + 1
            goto L18
        L3f:
            int r6 = r6 + 1
            goto Ld
        L42:
            if (r7 != r5) goto L45
            return r4
        L45:
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r0 = r0.get(r7)
            boolean r3 = r1.forceLowestBitrate
            if (r3 != 0) goto L5f
            if (r2 == 0) goto L5f
            r3 = r18[r7]
            boolean r1 = r1.allowMixedMimeAdaptiveness
            int[] r1 = getAdaptiveAudioTracks(r0, r3, r1)
            int r3 = r1.length
            if (r3 <= 0) goto L5f
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection r0 = r2.createTrackSelection(r0, r1)
            return r0
        L5f:
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.FixedTrackSelection r1 = new com.mbridge.msdk.playercommon.exoplayer2.trackselection.FixedTrackSelection
            r1.<init>(r0, r9)
            return r1
    }

    protected com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection selectOtherTrack(int r11, com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r12, int[][] r13, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.Parameters r14) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r10 = this;
            r11 = 0
            r0 = 0
            r2 = r11
            r1 = r0
            r3 = r1
            r4 = r3
        L6:
            int r5 = r12.length
            if (r1 >= r5) goto L44
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r5 = r12.get(r1)
            r6 = r13[r1]
            r7 = r0
        L11:
            int r8 = r5.length
            if (r7 >= r8) goto L41
            r8 = r6[r7]
            boolean r9 = r14.exceedRendererCapabilitiesIfNecessary
            boolean r8 = isSupported(r8, r9)
            if (r8 == 0) goto L3e
            com.mbridge.msdk.playercommon.exoplayer2.Format r8 = r5.getFormat(r7)
            int r8 = r8.selectionFlags
            r9 = 1
            r8 = r8 & r9
            if (r8 == 0) goto L2b
            r8 = r9
            goto L2c
        L2b:
            r8 = r0
        L2c:
            if (r8 == 0) goto L2f
            r9 = 2
        L2f:
            r8 = r6[r7]
            boolean r8 = isSupported(r8, r0)
            if (r8 == 0) goto L39
            int r9 = r9 + 1000
        L39:
            if (r9 <= r4) goto L3e
            r2 = r5
            r3 = r7
            r4 = r9
        L3e:
            int r7 = r7 + 1
            goto L11
        L41:
            int r1 = r1 + 1
            goto L6
        L44:
            if (r2 != 0) goto L47
            goto L4c
        L47:
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.FixedTrackSelection r11 = new com.mbridge.msdk.playercommon.exoplayer2.trackselection.FixedTrackSelection
            r11.<init>(r2, r3)
        L4c:
            return r11
    }

    protected com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection selectTextTrack(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r17, int[][] r18, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.Parameters r19) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r16 = this;
            r0 = r17
            r1 = r19
            r3 = 0
            r4 = r3
            r6 = r4
            r7 = r6
            r5 = 0
        L9:
            int r8 = r0.length
            if (r4 >= r8) goto L7f
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r8 = r0.get(r4)
            r9 = r18[r4]
            r10 = r3
        L14:
            int r11 = r8.length
            if (r10 >= r11) goto L7c
            r11 = r9[r10]
            boolean r12 = r1.exceedRendererCapabilitiesIfNecessary
            boolean r11 = isSupported(r11, r12)
            if (r11 == 0) goto L79
            com.mbridge.msdk.playercommon.exoplayer2.Format r11 = r8.getFormat(r10)
            int r12 = r11.selectionFlags
            int r13 = r1.disabledTextTrackSelectionFlags
            int r13 = ~r13
            r12 = r12 & r13
            r13 = r12 & 1
            r14 = 1
            if (r13 == 0) goto L33
            r13 = r14
            goto L34
        L33:
            r13 = r3
        L34:
            r12 = r12 & 2
            if (r12 == 0) goto L3a
            r12 = r14
            goto L3b
        L3a:
            r12 = r3
        L3b:
            java.lang.String r15 = r1.preferredTextLanguage
            boolean r15 = formatHasLanguage(r11, r15)
            if (r15 != 0) goto L5e
            boolean r2 = r1.selectUndeterminedTextLanguage
            if (r2 == 0) goto L4e
            boolean r2 = formatHasNoLanguage(r11)
            if (r2 == 0) goto L4e
            goto L5e
        L4e:
            if (r13 == 0) goto L52
            r14 = 3
            goto L6a
        L52:
            if (r12 == 0) goto L79
            java.lang.String r2 = r1.preferredAudioLanguage
            boolean r2 = formatHasLanguage(r11, r2)
            if (r2 == 0) goto L6a
            r14 = 2
            goto L6a
        L5e:
            if (r13 == 0) goto L63
            r2 = 8
            goto L68
        L63:
            if (r12 != 0) goto L67
            r2 = 6
            goto L68
        L67:
            r2 = 4
        L68:
            int r14 = r2 + r15
        L6a:
            r2 = r9[r10]
            boolean r2 = isSupported(r2, r3)
            if (r2 == 0) goto L74
            int r14 = r14 + 1000
        L74:
            if (r14 <= r7) goto L79
            r5 = r8
            r6 = r10
            r7 = r14
        L79:
            int r10 = r10 + 1
            goto L14
        L7c:
            int r4 = r4 + 1
            goto L9
        L7f:
            if (r5 != 0) goto L83
            r2 = 0
            goto L88
        L83:
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.FixedTrackSelection r2 = new com.mbridge.msdk.playercommon.exoplayer2.trackselection.FixedTrackSelection
            r2.<init>(r5, r6)
        L88:
            return r2
    }

    @Override
    protected final android.util.Pair<com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration[], com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[]> selectTracks(com.mbridge.msdk.playercommon.exoplayer2.trackselection.MappingTrackSelector.MappedTrackInfo r10, int[][][] r11, int[] r12) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r9 = this;
            java.util.concurrent.atomic.AtomicReference<com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$Parameters> r0 = r9.parametersReference
            java.lang.Object r0 = r0.get()
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$Parameters r0 = (com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.Parameters) r0
            int r1 = r10.getRendererCount()
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[] r12 = r9.selectAllTracks(r10, r11, r12, r0)
            r2 = 0
            r3 = r2
        L12:
            r4 = 0
            r5 = 1
            if (r3 >= r1) goto L61
            boolean r6 = r0.getRendererDisabled(r3)
            if (r6 == 0) goto L1f
            r12[r3] = r4
            goto L5e
        L1f:
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r6 = r10.getTrackGroups(r3)
            boolean r7 = r0.hasSelectionOverride(r3, r6)
            if (r7 == 0) goto L5e
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$SelectionOverride r7 = r0.getSelectionOverride(r3, r6)
            if (r7 != 0) goto L32
            r12[r3] = r4
            goto L5e
        L32:
            int r4 = r7.length
            if (r4 != r5) goto L48
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.FixedTrackSelection r4 = new com.mbridge.msdk.playercommon.exoplayer2.trackselection.FixedTrackSelection
            int r5 = r7.groupIndex
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r5 = r6.get(r5)
            int[] r6 = r7.tracks
            r6 = r6[r2]
            r4.<init>(r5, r6)
            r12[r3] = r4
            goto L5e
        L48:
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection$Factory r4 = r9.adaptiveTrackSelectionFactory
            java.lang.Object r4 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r4)
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection$Factory r4 = (com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection.Factory) r4
            int r5 = r7.groupIndex
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r5 = r6.get(r5)
            int[] r6 = r7.tracks
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection r4 = r4.createTrackSelection(r5, r6)
            r12[r3] = r4
        L5e:
            int r3 = r3 + 1
            goto L12
        L61:
            com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration[] r3 = new com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration[r1]
            r6 = r2
        L64:
            if (r6 >= r1) goto L85
            boolean r7 = r0.getRendererDisabled(r6)
            if (r7 != 0) goto L79
            int r7 = r10.getRendererType(r6)
            r8 = 5
            if (r7 == r8) goto L77
            r7 = r12[r6]
            if (r7 == 0) goto L79
        L77:
            r7 = r5
            goto L7a
        L79:
            r7 = r2
        L7a:
            if (r7 == 0) goto L7f
            com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration r7 = com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration.DEFAULT
            goto L80
        L7f:
            r7 = r4
        L80:
            r3[r6] = r7
            int r6 = r6 + 1
            goto L64
        L85:
            int r0 = r0.tunnelingAudioSessionId
            maybeConfigureRenderersForTunneling(r10, r11, r3, r12, r0)
            android.util.Pair r10 = android.util.Pair.create(r3, r12)
            return r10
    }

    protected com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection selectVideoTrack(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r2, int[][] r3, int r4, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.Parameters r5, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection.Factory r6) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r1 = this;
            boolean r0 = r5.forceLowestBitrate
            if (r0 != 0) goto Lb
            if (r6 == 0) goto Lb
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection r4 = selectAdaptiveVideoTrack(r2, r3, r4, r5, r6)
            goto Lc
        Lb:
            r4 = 0
        Lc:
            if (r4 != 0) goto L12
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection r4 = selectFixedVideoTrack(r2, r3, r5)
        L12:
            return r4
    }

    public void setParameters(com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.Parameters r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r2)
            java.util.concurrent.atomic.AtomicReference<com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$Parameters> r0 = r1.parametersReference
            java.lang.Object r0 = r0.getAndSet(r2)
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$Parameters r0 = (com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.Parameters) r0
            boolean r2 = r0.equals(r2)
            if (r2 != 0) goto L14
            r1.invalidate()
        L14:
            return
    }

    public void setParameters(com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.ParametersBuilder r1) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$Parameters r1 = r1.build()
            r0.setParameters(r1)
            return
    }

    public final void setRendererDisabled(int r2, boolean r3) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$ParametersBuilder r0 = r1.buildUponParameters()
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$ParametersBuilder r2 = r0.setRendererDisabled(r2, r3)
            r1.setParameters(r2)
            return
    }

    public final void setSelectionOverride(int r2, com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r3, com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector.SelectionOverride r4) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$ParametersBuilder r0 = r1.buildUponParameters()
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$ParametersBuilder r2 = r0.setSelectionOverride(r2, r3, r4)
            r1.setParameters(r2)
            return
    }

    public void setTunnelingAudioSessionId(int r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$ParametersBuilder r0 = r1.buildUponParameters()
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.DefaultTrackSelector$ParametersBuilder r2 = r0.setTunnelingAudioSessionId(r2)
            r1.setParameters(r2)
            return
    }
}
