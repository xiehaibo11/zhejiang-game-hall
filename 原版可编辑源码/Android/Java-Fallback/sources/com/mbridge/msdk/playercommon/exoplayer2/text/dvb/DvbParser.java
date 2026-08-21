package com.mbridge.msdk.playercommon.exoplayer2.text.dvb;

final class DvbParser {
    private static final int DATA_TYPE_24_TABLE_DATA = 32;
    private static final int DATA_TYPE_28_TABLE_DATA = 33;
    private static final int DATA_TYPE_2BP_CODE_STRING = 16;
    private static final int DATA_TYPE_48_TABLE_DATA = 34;
    private static final int DATA_TYPE_4BP_CODE_STRING = 17;
    private static final int DATA_TYPE_8BP_CODE_STRING = 18;
    private static final int DATA_TYPE_END_LINE = 240;
    private static final int OBJECT_CODING_PIXELS = 0;
    private static final int OBJECT_CODING_STRING = 1;
    private static final int PAGE_STATE_NORMAL = 0;
    private static final int REGION_DEPTH_4_BIT = 2;
    private static final int REGION_DEPTH_8_BIT = 3;
    private static final int SEGMENT_TYPE_CLUT_DEFINITION = 18;
    private static final int SEGMENT_TYPE_DISPLAY_DEFINITION = 20;
    private static final int SEGMENT_TYPE_OBJECT_DATA = 19;
    private static final int SEGMENT_TYPE_PAGE_COMPOSITION = 16;
    private static final int SEGMENT_TYPE_REGION_COMPOSITION = 17;
    private static final java.lang.String TAG = "DvbParser";
    private static final byte[] defaultMap2To4 = null;
    private static final byte[] defaultMap2To8 = null;
    private static final byte[] defaultMap4To8 = null;
    private android.graphics.Bitmap bitmap;
    private final android.graphics.Canvas canvas;
    private final com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.ClutDefinition defaultClutDefinition;
    private final com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.DisplayDefinition defaultDisplayDefinition;
    private final android.graphics.Paint defaultPaint;
    private final android.graphics.Paint fillRegionPaint;
    private final com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.SubtitleService subtitleService;

    private static final class ClutDefinition {
        public final int[] clutEntries2Bit;
        public final int[] clutEntries4Bit;
        public final int[] clutEntries8Bit;
        public final int id;

        public ClutDefinition(int r1, int[] r2, int[] r3, int[] r4) {
                r0 = this;
                r0.<init>()
                r0.id = r1
                r0.clutEntries2Bit = r2
                r0.clutEntries4Bit = r3
                r0.clutEntries8Bit = r4
                return
        }
    }

    private static final class DisplayDefinition {
        public final int height;
        public final int horizontalPositionMaximum;
        public final int horizontalPositionMinimum;
        public final int verticalPositionMaximum;
        public final int verticalPositionMinimum;
        public final int width;

        public DisplayDefinition(int r1, int r2, int r3, int r4, int r5, int r6) {
                r0 = this;
                r0.<init>()
                r0.width = r1
                r0.height = r2
                r0.horizontalPositionMinimum = r3
                r0.horizontalPositionMaximum = r4
                r0.verticalPositionMinimum = r5
                r0.verticalPositionMaximum = r6
                return
        }
    }

    private static final class ObjectData {
        public final byte[] bottomFieldData;
        public final int id;
        public final boolean nonModifyingColorFlag;
        public final byte[] topFieldData;

        public ObjectData(int r1, boolean r2, byte[] r3, byte[] r4) {
                r0 = this;
                r0.<init>()
                r0.id = r1
                r0.nonModifyingColorFlag = r2
                r0.topFieldData = r3
                r0.bottomFieldData = r4
                return
        }
    }

    private static final class PageComposition {
        public final android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.PageRegion> regions;
        public final int state;
        public final int timeOutSecs;
        public final int version;

        public PageComposition(int r1, int r2, int r3, android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.PageRegion> r4) {
                r0 = this;
                r0.<init>()
                r0.timeOutSecs = r1
                r0.version = r2
                r0.state = r3
                r0.regions = r4
                return
        }
    }

    private static final class PageRegion {
        public final int horizontalAddress;
        public final int verticalAddress;

        public PageRegion(int r1, int r2) {
                r0 = this;
                r0.<init>()
                r0.horizontalAddress = r1
                r0.verticalAddress = r2
                return
        }
    }

    private static final class RegionComposition {
        public final int clutId;
        public final int depth;
        public final boolean fillFlag;
        public final int height;
        public final int id;
        public final int levelOfCompatibility;
        public final int pixelCode2Bit;
        public final int pixelCode4Bit;
        public final int pixelCode8Bit;
        public final android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.RegionObject> regionObjects;
        public final int width;

        public RegionComposition(int r1, boolean r2, int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10, android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.RegionObject> r11) {
                r0 = this;
                r0.<init>()
                r0.id = r1
                r0.fillFlag = r2
                r0.width = r3
                r0.height = r4
                r0.levelOfCompatibility = r5
                r0.depth = r6
                r0.clutId = r7
                r0.pixelCode8Bit = r8
                r0.pixelCode4Bit = r9
                r0.pixelCode2Bit = r10
                r0.regionObjects = r11
                return
        }

        public final void mergeFrom(com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.RegionComposition r5) {
                r4 = this;
                if (r5 != 0) goto L3
                return
            L3:
                android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$RegionObject> r5 = r5.regionObjects
                r0 = 0
            L6:
                int r1 = r5.size()
                if (r0 >= r1) goto L1c
                android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$RegionObject> r1 = r4.regionObjects
                int r2 = r5.keyAt(r0)
                java.lang.Object r3 = r5.valueAt(r0)
                r1.put(r2, r3)
                int r0 = r0 + 1
                goto L6
            L1c:
                return
        }
    }

    private static final class RegionObject {
        public final int backgroundPixelCode;
        public final int foregroundPixelCode;
        public final int horizontalPosition;
        public final int provider;
        public final int type;
        public final int verticalPosition;

        public RegionObject(int r1, int r2, int r3, int r4, int r5, int r6) {
                r0 = this;
                r0.<init>()
                r0.type = r1
                r0.provider = r2
                r0.horizontalPosition = r3
                r0.verticalPosition = r4
                r0.foregroundPixelCode = r5
                r0.backgroundPixelCode = r6
                return
        }
    }

    private static final class SubtitleService {
        public final android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.ClutDefinition> ancillaryCluts;
        public final android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.ObjectData> ancillaryObjects;
        public final int ancillaryPageId;
        public final android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.ClutDefinition> cluts;
        public com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.DisplayDefinition displayDefinition;
        public final android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.ObjectData> objects;
        public com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.PageComposition pageComposition;
        public final android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.RegionComposition> regions;
        public final int subtitlePageId;

        public SubtitleService(int r2, int r3) {
                r1 = this;
                r1.<init>()
                android.util.SparseArray r0 = new android.util.SparseArray
                r0.<init>()
                r1.regions = r0
                android.util.SparseArray r0 = new android.util.SparseArray
                r0.<init>()
                r1.cluts = r0
                android.util.SparseArray r0 = new android.util.SparseArray
                r0.<init>()
                r1.objects = r0
                android.util.SparseArray r0 = new android.util.SparseArray
                r0.<init>()
                r1.ancillaryCluts = r0
                android.util.SparseArray r0 = new android.util.SparseArray
                r0.<init>()
                r1.ancillaryObjects = r0
                r1.subtitlePageId = r2
                r1.ancillaryPageId = r3
                return
        }

        public final void reset() {
                r1 = this;
                android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$RegionComposition> r0 = r1.regions
                r0.clear()
                android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$ClutDefinition> r0 = r1.cluts
                r0.clear()
                android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$ObjectData> r0 = r1.objects
                r0.clear()
                android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$ClutDefinition> r0 = r1.ancillaryCluts
                r0.clear()
                android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$ObjectData> r0 = r1.ancillaryObjects
                r0.clear()
                r0 = 0
                r1.displayDefinition = r0
                r1.pageComposition = r0
                return
        }
    }

    static {
            r0 = 4
            byte[] r1 = new byte[r0]
            r1 = {x001a: FILL_ARRAY_DATA , data: [0, 7, 8, 15} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.defaultMap2To4 = r1
            byte[] r0 = new byte[r0]
            r0 = {x0020: FILL_ARRAY_DATA , data: [0, 119, -120, -1} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.defaultMap2To8 = r0
            r0 = 16
            byte[] r0 = new byte[r0]
            r0 = {x0026: FILL_ARRAY_DATA , data: [0, 17, 34, 51, 68, 85, 102, 119, -120, -103, -86, -69, -52, -35, -18, -1} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.defaultMap4To8 = r0
            return
    }

    public DvbParser(int r9, int r10) {
            r8 = this;
            r8.<init>()
            android.graphics.Paint r0 = new android.graphics.Paint
            r0.<init>()
            r8.defaultPaint = r0
            android.graphics.Paint$Style r1 = android.graphics.Paint.Style.FILL_AND_STROKE
            r0.setStyle(r1)
            android.graphics.Paint r0 = r8.defaultPaint
            android.graphics.PorterDuffXfermode r1 = new android.graphics.PorterDuffXfermode
            android.graphics.PorterDuff$Mode r2 = android.graphics.PorterDuff.Mode.SRC
            r1.<init>(r2)
            r0.setXfermode(r1)
            android.graphics.Paint r0 = r8.defaultPaint
            r1 = 0
            r0.setPathEffect(r1)
            android.graphics.Paint r0 = new android.graphics.Paint
            r0.<init>()
            r8.fillRegionPaint = r0
            android.graphics.Paint$Style r2 = android.graphics.Paint.Style.FILL
            r0.setStyle(r2)
            android.graphics.Paint r0 = r8.fillRegionPaint
            android.graphics.PorterDuffXfermode r2 = new android.graphics.PorterDuffXfermode
            android.graphics.PorterDuff$Mode r3 = android.graphics.PorterDuff.Mode.DST_OVER
            r2.<init>(r3)
            r0.setXfermode(r2)
            android.graphics.Paint r0 = r8.fillRegionPaint
            r0.setPathEffect(r1)
            android.graphics.Canvas r0 = new android.graphics.Canvas
            r0.<init>()
            r8.canvas = r0
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$DisplayDefinition r0 = new com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$DisplayDefinition
            r2 = 719(0x2cf, float:1.008E-42)
            r3 = 575(0x23f, float:8.06E-43)
            r4 = 0
            r5 = 719(0x2cf, float:1.008E-42)
            r6 = 0
            r7 = 575(0x23f, float:8.06E-43)
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6, r7)
            r8.defaultDisplayDefinition = r0
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$ClutDefinition r0 = new com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$ClutDefinition
            int[] r1 = generateDefault2BitClutEntries()
            int[] r2 = generateDefault4BitClutEntries()
            int[] r3 = generateDefault8BitClutEntries()
            r0.<init>(r4, r1, r2, r3)
            r8.defaultClutDefinition = r0
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$SubtitleService r0 = new com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$SubtitleService
            r0.<init>(r9, r10)
            r8.subtitleService = r0
            return
    }

    private static byte[] buildClutMapTable(int r3, int r4, com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5) {
            byte[] r0 = new byte[r3]
            r1 = 0
        L3:
            if (r1 >= r3) goto Lf
            int r2 = r5.readBits(r4)
            byte r2 = (byte) r2
            r0[r1] = r2
            int r1 = r1 + 1
            goto L3
        Lf:
            return r0
    }

    private static int[] generateDefault2BitClutEntries() {
            r0 = 4
            int[] r0 = new int[r0]
            r0 = {x0008: FILL_ARRAY_DATA , data: [0, -1, -16777216, -8421505} // fill-array
            return r0
    }

    private static int[] generateDefault4BitClutEntries() {
            r0 = 16
            int[] r1 = new int[r0]
            r2 = 0
            r1[r2] = r2
            r3 = 1
        L8:
            if (r3 >= r0) goto L4b
            r4 = 8
            r5 = 255(0xff, float:3.57E-43)
            if (r3 >= r4) goto L2c
            r4 = r3 & 1
            if (r4 == 0) goto L16
            r4 = r5
            goto L17
        L16:
            r4 = r2
        L17:
            r6 = r3 & 2
            if (r6 == 0) goto L1d
            r6 = r5
            goto L1e
        L1d:
            r6 = r2
        L1e:
            r7 = r3 & 4
            if (r7 == 0) goto L24
            r7 = r5
            goto L25
        L24:
            r7 = r2
        L25:
            int r4 = getColor(r5, r4, r6, r7)
            r1[r3] = r4
            goto L48
        L2c:
            r4 = r3 & 1
            r6 = 127(0x7f, float:1.78E-43)
            if (r4 == 0) goto L34
            r4 = r6
            goto L35
        L34:
            r4 = r2
        L35:
            r7 = r3 & 2
            if (r7 == 0) goto L3b
            r7 = r6
            goto L3c
        L3b:
            r7 = r2
        L3c:
            r8 = r3 & 4
            if (r8 == 0) goto L41
            goto L42
        L41:
            r6 = r2
        L42:
            int r4 = getColor(r5, r4, r7, r6)
            r1[r3] = r4
        L48:
            int r3 = r3 + 1
            goto L8
        L4b:
            return r1
    }

    private static int[] generateDefault8BitClutEntries() {
            r0 = 256(0x100, float:3.59E-43)
            int[] r1 = new int[r0]
            r2 = 0
            r1[r2] = r2
            r3 = r2
        L8:
            if (r3 >= r0) goto L116
            r4 = 8
            r5 = 255(0xff, float:3.57E-43)
            if (r3 >= r4) goto L2e
            r4 = 63
            r6 = r3 & 1
            if (r6 == 0) goto L18
            r6 = r5
            goto L19
        L18:
            r6 = r2
        L19:
            r7 = r3 & 2
            if (r7 == 0) goto L1f
            r7 = r5
            goto L20
        L1f:
            r7 = r2
        L20:
            r8 = r3 & 4
            if (r8 == 0) goto L25
            goto L26
        L25:
            r5 = r2
        L26:
            int r4 = getColor(r4, r6, r7, r5)
            r1[r3] = r4
            goto L112
        L2e:
            r6 = r3 & 136(0x88, float:1.9E-43)
            r7 = 170(0xaa, float:2.38E-43)
            r8 = 85
            if (r6 == 0) goto Le1
            r9 = 127(0x7f, float:1.78E-43)
            if (r6 == r4) goto Laf
            r4 = 128(0x80, float:1.8E-43)
            r7 = 43
            if (r6 == r4) goto L79
            r4 = 136(0x88, float:1.9E-43)
            if (r6 == r4) goto L46
            goto L112
        L46:
            r4 = r3 & 1
            if (r4 == 0) goto L4c
            r4 = r7
            goto L4d
        L4c:
            r4 = r2
        L4d:
            r6 = r3 & 16
            if (r6 == 0) goto L53
            r6 = r8
            goto L54
        L53:
            r6 = r2
        L54:
            int r4 = r4 + r6
            r6 = r3 & 2
            if (r6 == 0) goto L5b
            r6 = r7
            goto L5c
        L5b:
            r6 = r2
        L5c:
            r9 = r3 & 32
            if (r9 == 0) goto L62
            r9 = r8
            goto L63
        L62:
            r9 = r2
        L63:
            int r6 = r6 + r9
            r9 = r3 & 4
            if (r9 == 0) goto L69
            goto L6a
        L69:
            r7 = r2
        L6a:
            r9 = r3 & 64
            if (r9 == 0) goto L6f
            goto L70
        L6f:
            r8 = r2
        L70:
            int r7 = r7 + r8
            int r4 = getColor(r5, r4, r6, r7)
            r1[r3] = r4
            goto L112
        L79:
            r4 = r3 & 1
            if (r4 == 0) goto L7f
            r4 = r7
            goto L80
        L7f:
            r4 = r2
        L80:
            int r4 = r4 + r9
            r6 = r3 & 16
            if (r6 == 0) goto L87
            r6 = r8
            goto L88
        L87:
            r6 = r2
        L88:
            int r4 = r4 + r6
            r6 = r3 & 2
            if (r6 == 0) goto L8f
            r6 = r7
            goto L90
        L8f:
            r6 = r2
        L90:
            int r6 = r6 + r9
            r10 = r3 & 32
            if (r10 == 0) goto L97
            r10 = r8
            goto L98
        L97:
            r10 = r2
        L98:
            int r6 = r6 + r10
            r10 = r3 & 4
            if (r10 == 0) goto L9e
            goto L9f
        L9e:
            r7 = r2
        L9f:
            int r7 = r7 + r9
            r9 = r3 & 64
            if (r9 == 0) goto La5
            goto La6
        La5:
            r8 = r2
        La6:
            int r7 = r7 + r8
            int r4 = getColor(r5, r4, r6, r7)
            r1[r3] = r4
            goto L112
        Laf:
            r4 = r3 & 1
            if (r4 == 0) goto Lb5
            r4 = r8
            goto Lb6
        Lb5:
            r4 = r2
        Lb6:
            r5 = r3 & 16
            if (r5 == 0) goto Lbc
            r5 = r7
            goto Lbd
        Lbc:
            r5 = r2
        Lbd:
            int r4 = r4 + r5
            r5 = r3 & 2
            if (r5 == 0) goto Lc4
            r5 = r8
            goto Lc5
        Lc4:
            r5 = r2
        Lc5:
            r6 = r3 & 32
            if (r6 == 0) goto Lcb
            r6 = r7
            goto Lcc
        Lcb:
            r6 = r2
        Lcc:
            int r5 = r5 + r6
            r6 = r3 & 4
            if (r6 == 0) goto Ld2
            goto Ld3
        Ld2:
            r8 = r2
        Ld3:
            r6 = r3 & 64
            if (r6 == 0) goto Ld8
            goto Ld9
        Ld8:
            r7 = r2
        Ld9:
            int r8 = r8 + r7
            int r4 = getColor(r9, r4, r5, r8)
            r1[r3] = r4
            goto L112
        Le1:
            r4 = r3 & 1
            if (r4 == 0) goto Le7
            r4 = r8
            goto Le8
        Le7:
            r4 = r2
        Le8:
            r6 = r3 & 16
            if (r6 == 0) goto Lee
            r6 = r7
            goto Lef
        Lee:
            r6 = r2
        Lef:
            int r4 = r4 + r6
            r6 = r3 & 2
            if (r6 == 0) goto Lf6
            r6 = r8
            goto Lf7
        Lf6:
            r6 = r2
        Lf7:
            r9 = r3 & 32
            if (r9 == 0) goto Lfd
            r9 = r7
            goto Lfe
        Lfd:
            r9 = r2
        Lfe:
            int r6 = r6 + r9
            r9 = r3 & 4
            if (r9 == 0) goto L104
            goto L105
        L104:
            r8 = r2
        L105:
            r9 = r3 & 64
            if (r9 == 0) goto L10a
            goto L10b
        L10a:
            r7 = r2
        L10b:
            int r8 = r8 + r7
            int r4 = getColor(r5, r4, r6, r8)
            r1[r3] = r4
        L112:
            int r3 = r3 + 1
            goto L8
        L116:
            return r1
    }

    private static int getColor(int r0, int r1, int r2, int r3) {
            int r0 = r0 << 24
            int r1 = r1 << 16
            r0 = r0 | r1
            int r1 = r2 << 8
            r0 = r0 | r1
            r0 = r0 | r3
            return r0
    }

    private static int paint2BitPixelCodeString(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r13, int[] r14, byte[] r15, int r16, int r17, android.graphics.Paint r18, android.graphics.Canvas r19) {
            r0 = r13
            r1 = r17
            r8 = r18
            r9 = 0
            r10 = r16
            r2 = r9
        L9:
            r3 = 2
            int r4 = r13.readBits(r3)
            r5 = 1
            if (r4 == 0) goto L14
            r11 = r2
            r12 = r5
            goto L60
        L14:
            boolean r4 = r13.readBit()
            r6 = 3
            if (r4 == 0) goto L28
            int r4 = r13.readBits(r6)
            int r4 = r4 + r6
            int r3 = r13.readBits(r3)
        L24:
            r11 = r2
            r12 = r4
            r4 = r3
            goto L60
        L28:
            boolean r4 = r13.readBit()
            if (r4 == 0) goto L32
            r11 = r2
            r12 = r5
        L30:
            r4 = r9
            goto L60
        L32:
            int r4 = r13.readBits(r3)
            if (r4 == 0) goto L5e
            if (r4 == r5) goto L5b
            if (r4 == r3) goto L4f
            if (r4 == r6) goto L42
            r11 = r2
        L3f:
            r4 = r9
            r12 = r4
            goto L60
        L42:
            r4 = 8
            int r4 = r13.readBits(r4)
            int r4 = r4 + 29
            int r3 = r13.readBits(r3)
            goto L24
        L4f:
            r4 = 4
            int r4 = r13.readBits(r4)
            int r4 = r4 + 12
            int r3 = r13.readBits(r3)
            goto L24
        L5b:
            r11 = r2
            r12 = r3
            goto L30
        L5e:
            r11 = r5
            goto L3f
        L60:
            if (r12 == 0) goto L7e
            if (r8 == 0) goto L7e
            if (r15 == 0) goto L68
            r4 = r15[r4]
        L68:
            r2 = r14[r4]
            r8.setColor(r2)
            float r3 = (float) r10
            float r4 = (float) r1
            int r2 = r10 + r12
            float r6 = (float) r2
            int r2 = r1 + 1
            float r7 = (float) r2
            r2 = r19
            r5 = r6
            r6 = r7
            r7 = r18
            r2.drawRect(r3, r4, r5, r6, r7)
        L7e:
            int r10 = r10 + r12
            if (r11 == 0) goto L82
            return r10
        L82:
            r2 = r11
            goto L9
    }

    private static int paint4BitPixelCodeString(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r13, int[] r14, byte[] r15, int r16, int r17, android.graphics.Paint r18, android.graphics.Canvas r19) {
            r0 = r13
            r1 = r17
            r8 = r18
            r9 = 0
            r10 = r16
            r2 = r9
        L9:
            r3 = 4
            int r4 = r13.readBits(r3)
            r5 = 2
            r6 = 1
            if (r4 == 0) goto L16
            r11 = r2
            r12 = r6
            goto L69
        L16:
            boolean r4 = r13.readBit()
            r7 = 3
            if (r4 != 0) goto L2b
            int r3 = r13.readBits(r7)
            if (r3 == 0) goto L29
            int r5 = r3 + 2
        L25:
            r11 = r2
            r12 = r5
        L27:
            r4 = r9
            goto L69
        L29:
            r11 = r6
            goto L4b
        L2b:
            boolean r4 = r13.readBit()
            if (r4 != 0) goto L3e
            int r4 = r13.readBits(r5)
            int r5 = r4 + 4
            int r4 = r13.readBits(r3)
        L3b:
            r11 = r2
            r12 = r5
            goto L69
        L3e:
            int r4 = r13.readBits(r5)
            if (r4 == 0) goto L66
            if (r4 == r6) goto L25
            if (r4 == r5) goto L5b
            if (r4 == r7) goto L4e
            r11 = r2
        L4b:
            r4 = r9
            r12 = r4
            goto L69
        L4e:
            r4 = 8
            int r4 = r13.readBits(r4)
            int r5 = r4 + 25
            int r4 = r13.readBits(r3)
            goto L3b
        L5b:
            int r4 = r13.readBits(r3)
            int r5 = r4 + 9
            int r4 = r13.readBits(r3)
            goto L3b
        L66:
            r11 = r2
            r12 = r6
            goto L27
        L69:
            if (r12 == 0) goto L85
            if (r8 == 0) goto L85
            if (r15 == 0) goto L71
            r4 = r15[r4]
        L71:
            r2 = r14[r4]
            r8.setColor(r2)
            float r3 = (float) r10
            float r4 = (float) r1
            int r2 = r10 + r12
            float r5 = (float) r2
            int r2 = r1 + 1
            float r6 = (float) r2
            r2 = r19
            r7 = r18
            r2.drawRect(r3, r4, r5, r6, r7)
        L85:
            int r10 = r10 + r12
            if (r11 == 0) goto L89
            return r10
        L89:
            r2 = r11
            goto L9
    }

    private static int paint8BitPixelCodeString(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r13, int[] r14, byte[] r15, int r16, int r17, android.graphics.Paint r18, android.graphics.Canvas r19) {
            r0 = r13
            r1 = r17
            r8 = r18
            r9 = 0
            r10 = r16
            r2 = r9
        L9:
            r3 = 8
            int r4 = r13.readBits(r3)
            r5 = 1
            if (r4 == 0) goto L15
            r11 = r2
            r12 = r5
            goto L35
        L15:
            boolean r4 = r13.readBit()
            r6 = 7
            if (r4 != 0) goto L2a
            int r3 = r13.readBits(r6)
            if (r3 == 0) goto L26
            r11 = r2
            r12 = r3
            r4 = r9
            goto L35
        L26:
            r11 = r5
            r4 = r9
            r12 = r4
            goto L35
        L2a:
            int r4 = r13.readBits(r6)
            int r3 = r13.readBits(r3)
            r11 = r2
            r12 = r4
            r4 = r3
        L35:
            if (r12 == 0) goto L53
            if (r8 == 0) goto L53
            if (r15 == 0) goto L3d
            r4 = r15[r4]
        L3d:
            r2 = r14[r4]
            r8.setColor(r2)
            float r3 = (float) r10
            float r4 = (float) r1
            int r2 = r10 + r12
            float r6 = (float) r2
            int r2 = r1 + 1
            float r7 = (float) r2
            r2 = r19
            r5 = r6
            r6 = r7
            r7 = r18
            r2.drawRect(r3, r4, r5, r6, r7)
        L53:
            int r10 = r10 + r12
            if (r11 == 0) goto L57
            return r10
        L57:
            r2 = r11
            goto L9
    }

    private static void paintPixelDataSubBlock(byte[] r13, int[] r14, int r15, int r16, int r17, android.graphics.Paint r18, android.graphics.Canvas r19) {
            r0 = r15
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r8 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray
            r1 = r13
            r8.<init>(r13)
            r9 = 0
            r4 = r16
            r10 = r17
            r11 = r9
            r12 = r11
        Le:
            int r1 = r8.bitsLeft()
            if (r1 == 0) goto L84
            r1 = 8
            int r2 = r8.readBits(r1)
            r3 = 240(0xf0, float:3.36E-43)
            if (r2 == r3) goto L7f
            r3 = 3
            switch(r2) {
                case 16: goto L5b;
                case 17: goto L45;
                case 18: goto L38;
                default: goto L22;
            }
        L22:
            r3 = 4
            switch(r2) {
                case 32: goto L33;
                case 33: goto L2e;
                case 34: goto L27;
                default: goto L26;
            }
        L26:
            goto Le
        L27:
            r2 = 16
            byte[] r11 = buildClutMapTable(r2, r1, r8)
            goto Le
        L2e:
            byte[] r11 = buildClutMapTable(r3, r1, r8)
            goto Le
        L33:
            byte[] r12 = buildClutMapTable(r3, r3, r8)
            goto Le
        L38:
            r3 = 0
            r1 = r8
            r2 = r14
            r5 = r10
            r6 = r18
            r7 = r19
            int r4 = paint8BitPixelCodeString(r1, r2, r3, r4, r5, r6, r7)
            goto Le
        L45:
            if (r0 != r3) goto L4b
            byte[] r1 = com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.defaultMap4To8
            r3 = r1
            goto L4c
        L4b:
            r3 = r9
        L4c:
            r1 = r8
            r2 = r14
            r5 = r10
            r6 = r18
            r7 = r19
            int r4 = paint4BitPixelCodeString(r1, r2, r3, r4, r5, r6, r7)
            r8.byteAlign()
            goto Le
        L5b:
            if (r0 != r3) goto L65
            if (r11 != 0) goto L62
            byte[] r1 = com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.defaultMap2To8
            goto L63
        L62:
            r1 = r11
        L63:
            r3 = r1
            goto L70
        L65:
            r1 = 2
            if (r0 != r1) goto L6f
            if (r12 != 0) goto L6d
            byte[] r1 = com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.defaultMap2To4
            goto L63
        L6d:
            r1 = r12
            goto L63
        L6f:
            r3 = r9
        L70:
            r1 = r8
            r2 = r14
            r5 = r10
            r6 = r18
            r7 = r19
            int r4 = paint2BitPixelCodeString(r1, r2, r3, r4, r5, r6, r7)
            r8.byteAlign()
            goto Le
        L7f:
            int r10 = r10 + 2
            r4 = r16
            goto Le
        L84:
            return
    }

    private static void paintPixelDataSubBlocks(com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.ObjectData r7, com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.ClutDefinition r8, int r9, int r10, int r11, android.graphics.Paint r12, android.graphics.Canvas r13) {
            r0 = 3
            if (r9 != r0) goto L6
            int[] r8 = r8.clutEntries8Bit
            goto Le
        L6:
            r0 = 2
            if (r9 != r0) goto Lc
            int[] r8 = r8.clutEntries4Bit
            goto Le
        Lc:
            int[] r8 = r8.clutEntries2Bit
        Le:
            byte[] r0 = r7.topFieldData
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            paintPixelDataSubBlock(r0, r1, r2, r3, r4, r5, r6)
            byte[] r0 = r7.bottomFieldData
            int r4 = r11 + 1
            paintPixelDataSubBlock(r0, r1, r2, r3, r4, r5, r6)
            return
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.ClutDefinition parseClutDefinition(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r22, int r23) {
            r0 = r22
            r1 = 8
            int r2 = r0.readBits(r1)
            r0.skipBits(r1)
            r3 = 2
            int r4 = r23 + (-2)
            int[] r5 = generateDefault2BitClutEntries()
            int[] r6 = generateDefault4BitClutEntries()
            int[] r7 = generateDefault8BitClutEntries()
        L1a:
            if (r4 <= 0) goto Lc5
            int r8 = r0.readBits(r1)
            int r9 = r0.readBits(r1)
            int r4 = r4 + (-2)
            r10 = r9 & 128(0x80, float:1.8E-43)
            if (r10 == 0) goto L2c
            r10 = r5
            goto L33
        L2c:
            r10 = r9 & 64
            if (r10 == 0) goto L32
            r10 = r6
            goto L33
        L32:
            r10 = r7
        L33:
            r9 = r9 & 1
            if (r9 == 0) goto L4a
            int r9 = r0.readBits(r1)
            int r11 = r0.readBits(r1)
            int r12 = r0.readBits(r1)
            int r13 = r0.readBits(r1)
            int r4 = r4 + (-4)
            goto L6a
        L4a:
            r9 = 6
            int r11 = r0.readBits(r9)
            int r11 = r11 << r3
            r12 = 4
            int r13 = r0.readBits(r12)
            int r13 = r13 << r12
            int r14 = r0.readBits(r12)
            int r12 = r14 << 4
            int r14 = r0.readBits(r3)
            int r9 = r14 << 6
            int r4 = r4 + (-2)
            r21 = r13
            r13 = r9
            r9 = r11
            r11 = r21
        L6a:
            r15 = 255(0xff, float:3.57E-43)
            if (r9 != 0) goto L71
            r13 = r15
            r11 = 0
            r12 = 0
        L71:
            r13 = r13 & r15
            int r13 = 255 - r13
            byte r13 = (byte) r13
            r23 = r4
            double r3 = (double) r9
            r16 = 4608992865850220347(0x3ff66e978d4fdf3b, double:1.402)
            int r11 = r11 + (-128)
            r18 = r2
            double r1 = (double) r11
            double r16 = r16 * r1
            r11 = r10
            double r9 = r3 + r16
            int r9 = (int) r9
            r16 = 4599871095020959050(0x3fd60663c74fb54a, double:0.34414)
            int r12 = r12 + (-128)
            double r14 = (double) r12
            double r16 = r16 * r14
            double r16 = r3 - r16
            r19 = 4604607620821057148(0x3fe6da3c21187e7c, double:0.71414)
            double r1 = r1 * r19
            double r1 = r16 - r1
            int r1 = (int) r1
            r16 = 4610659197712347431(0x3ffc5a1cac083127, double:1.772)
            double r14 = r14 * r16
            double r3 = r3 + r14
            int r2 = (int) r3
            r3 = 0
            r4 = 255(0xff, float:3.57E-43)
            int r9 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.constrainValue(r9, r3, r4)
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.constrainValue(r1, r3, r4)
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.constrainValue(r2, r3, r4)
            int r1 = getColor(r13, r9, r1, r2)
            r11[r8] = r1
            r4 = r23
            r2 = r18
            r1 = 8
            r3 = 2
            goto L1a
        Lc5:
            r18 = r2
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$ClutDefinition r0 = new com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$ClutDefinition
            r1 = r18
            r0.<init>(r1, r5, r6, r7)
            return r0
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.DisplayDefinition parseDisplayDefinition(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r9) {
            r0 = 4
            r9.skipBits(r0)
            boolean r0 = r9.readBit()
            r1 = 3
            r9.skipBits(r1)
            r1 = 16
            int r3 = r9.readBits(r1)
            int r4 = r9.readBits(r1)
            r2 = 0
            if (r0 == 0) goto L2e
            int r0 = r9.readBits(r1)
            int r2 = r9.readBits(r1)
            int r5 = r9.readBits(r1)
            int r9 = r9.readBits(r1)
            r8 = r9
            r6 = r2
            r7 = r5
            r5 = r0
            goto L32
        L2e:
            r5 = r2
            r7 = r5
            r6 = r3
            r8 = r4
        L32:
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$DisplayDefinition r9 = new com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$DisplayDefinition
            r2 = r9
            r2.<init>(r3, r4, r5, r6, r7, r8)
            return r9
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.ObjectData parseObjectData(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r6) {
            r0 = 16
            int r1 = r6.readBits(r0)
            r2 = 4
            r6.skipBits(r2)
            r2 = 2
            int r2 = r6.readBits(r2)
            boolean r3 = r6.readBit()
            r4 = 1
            r6.skipBits(r4)
            r5 = 0
            if (r2 != r4) goto L25
            r2 = 8
            int r2 = r6.readBits(r2)
            int r2 = r2 * r0
            r6.skipBits(r2)
            goto L3f
        L25:
            if (r2 != 0) goto L3f
            int r2 = r6.readBits(r0)
            int r0 = r6.readBits(r0)
            r4 = 0
            if (r2 <= 0) goto L37
            byte[] r5 = new byte[r2]
            r6.readBytes(r5, r4, r2)
        L37:
            if (r0 <= 0) goto L3f
            byte[] r2 = new byte[r0]
            r6.readBytes(r2, r4, r0)
            goto L40
        L3f:
            r2 = r5
        L40:
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$ObjectData r6 = new com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$ObjectData
            r6.<init>(r1, r3, r5, r2)
            return r6
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.PageComposition parsePageComposition(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r9, int r10) {
            r0 = 8
            int r1 = r9.readBits(r0)
            r2 = 4
            int r2 = r9.readBits(r2)
            r3 = 2
            int r4 = r9.readBits(r3)
            r9.skipBits(r3)
            int r10 = r10 - r3
            android.util.SparseArray r3 = new android.util.SparseArray
            r3.<init>()
        L19:
            if (r10 <= 0) goto L37
            int r5 = r9.readBits(r0)
            r9.skipBits(r0)
            r6 = 16
            int r7 = r9.readBits(r6)
            int r6 = r9.readBits(r6)
            int r10 = r10 + (-6)
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$PageRegion r8 = new com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$PageRegion
            r8.<init>(r7, r6)
            r3.put(r5, r8)
            goto L19
        L37:
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$PageComposition r9 = new com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$PageComposition
            r9.<init>(r1, r2, r4, r3)
            return r9
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.RegionComposition parseRegionComposition(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r26, int r27) {
            r0 = r26
            r1 = 8
            int r3 = r0.readBits(r1)
            r2 = 4
            r0.skipBits(r2)
            boolean r4 = r26.readBit()
            r5 = 3
            r0.skipBits(r5)
            r6 = 16
            int r7 = r0.readBits(r6)
            int r8 = r0.readBits(r6)
            int r9 = r0.readBits(r5)
            int r10 = r0.readBits(r5)
            r5 = 2
            r0.skipBits(r5)
            int r11 = r0.readBits(r1)
            int r12 = r0.readBits(r1)
            int r13 = r0.readBits(r2)
            int r14 = r0.readBits(r5)
            r0.skipBits(r5)
            int r15 = r27 + (-10)
            android.util.SparseArray r1 = new android.util.SparseArray
            r1.<init>()
        L44:
            if (r15 <= 0) goto L95
            int r2 = r0.readBits(r6)
            int r6 = r0.readBits(r5)
            int r20 = r0.readBits(r5)
            r5 = 12
            int r21 = r0.readBits(r5)
            r25 = r14
            r14 = 4
            r0.skipBits(r14)
            int r22 = r0.readBits(r5)
            int r15 = r15 + (-6)
            r5 = 1
            r17 = 0
            if (r6 == r5) goto L72
            r5 = 2
            if (r6 != r5) goto L6d
            goto L72
        L6d:
            r23 = r17
            r24 = r23
            goto L82
        L72:
            r5 = 8
            int r16 = r0.readBits(r5)
            int r17 = r0.readBits(r5)
            int r15 = r15 + (-2)
            r23 = r16
            r24 = r17
        L82:
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$RegionObject r5 = new com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$RegionObject
            r18 = r5
            r19 = r6
            r18.<init>(r19, r20, r21, r22, r23, r24)
            r1.put(r2, r5)
            r2 = r14
            r14 = r25
            r5 = 2
            r6 = 16
            goto L44
        L95:
            r25 = r14
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$RegionComposition r0 = new com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$RegionComposition
            r2 = r0
            r5 = r7
            r6 = r8
            r7 = r9
            r8 = r10
            r9 = r11
            r10 = r12
            r11 = r13
            r12 = r25
            r13 = r1
            r2.<init>(r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13)
            return r0
    }

    private static void parseSubtitlingSegment(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r6, com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.SubtitleService r7) {
            r0 = 8
            int r0 = r6.readBits(r0)
            r1 = 16
            int r2 = r6.readBits(r1)
            int r1 = r6.readBits(r1)
            int r3 = r6.getBytePosition()
            int r3 = r3 + r1
            int r4 = r1 * 8
            int r5 = r6.bitsLeft()
            if (r4 <= r5) goto L2c
            java.lang.String r7 = "DvbParser"
            java.lang.String r0 = "Data field length exceeds limit"
            android.util.Log.w(r7, r0)
            int r7 = r6.bitsLeft()
            r6.skipBits(r7)
            return
        L2c:
            switch(r0) {
                case 16: goto La4;
                case 17: goto L7f;
                case 18: goto L5f;
                case 19: goto L3d;
                case 20: goto L31;
                default: goto L2f;
            }
        L2f:
            goto Lce
        L31:
            int r0 = r7.subtitlePageId
            if (r2 != r0) goto Lce
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$DisplayDefinition r0 = parseDisplayDefinition(r6)
            r7.displayDefinition = r0
            goto Lce
        L3d:
            int r0 = r7.subtitlePageId
            if (r2 != r0) goto L4e
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$ObjectData r0 = parseObjectData(r6)
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$ObjectData> r7 = r7.objects
            int r1 = r0.id
            r7.put(r1, r0)
            goto Lce
        L4e:
            int r0 = r7.ancillaryPageId
            if (r2 != r0) goto Lce
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$ObjectData r0 = parseObjectData(r6)
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$ObjectData> r7 = r7.ancillaryObjects
            int r1 = r0.id
            r7.put(r1, r0)
            goto Lce
        L5f:
            int r0 = r7.subtitlePageId
            if (r2 != r0) goto L6f
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$ClutDefinition r0 = parseClutDefinition(r6, r1)
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$ClutDefinition> r7 = r7.cluts
            int r1 = r0.id
            r7.put(r1, r0)
            goto Lce
        L6f:
            int r0 = r7.ancillaryPageId
            if (r2 != r0) goto Lce
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$ClutDefinition r0 = parseClutDefinition(r6, r1)
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$ClutDefinition> r7 = r7.ancillaryCluts
            int r1 = r0.id
            r7.put(r1, r0)
            goto Lce
        L7f:
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$PageComposition r0 = r7.pageComposition
            int r4 = r7.subtitlePageId
            if (r2 != r4) goto Lce
            if (r0 == 0) goto Lce
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$RegionComposition r1 = parseRegionComposition(r6, r1)
            int r0 = r0.state
            if (r0 != 0) goto L9c
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$RegionComposition> r0 = r7.regions
            int r2 = r1.id
            java.lang.Object r0 = r0.get(r2)
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$RegionComposition r0 = (com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.RegionComposition) r0
            r1.mergeFrom(r0)
        L9c:
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$RegionComposition> r7 = r7.regions
            int r0 = r1.id
            r7.put(r0, r1)
            goto Lce
        La4:
            int r0 = r7.subtitlePageId
            if (r2 != r0) goto Lce
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$PageComposition r0 = r7.pageComposition
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$PageComposition r1 = parsePageComposition(r6, r1)
            int r2 = r1.state
            if (r2 == 0) goto Lc4
            r7.pageComposition = r1
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$RegionComposition> r0 = r7.regions
            r0.clear()
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$ClutDefinition> r0 = r7.cluts
            r0.clear()
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$ObjectData> r7 = r7.objects
            r7.clear()
            goto Lce
        Lc4:
            if (r0 == 0) goto Lce
            int r0 = r0.version
            int r2 = r1.version
            if (r0 == r2) goto Lce
            r7.pageComposition = r1
        Lce:
            int r7 = r6.getBytePosition()
            int r3 = r3 - r7
            r6.skipBytes(r3)
            return
    }

    public final java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.Cue> decode(byte[] r28, int r29) {
            r27 = this;
            r0 = r27
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r1 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray
            r2 = r28
            r3 = r29
            r1.<init>(r2, r3)
        Lb:
            int r2 = r1.bitsLeft()
            r3 = 48
            if (r2 < r3) goto L23
            r2 = 8
            int r2 = r1.readBits(r2)
            r3 = 15
            if (r2 != r3) goto L23
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$SubtitleService r2 = r0.subtitleService
            parseSubtitlingSegment(r1, r2)
            goto Lb
        L23:
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$SubtitleService r1 = r0.subtitleService
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$PageComposition r1 = r1.pageComposition
            if (r1 != 0) goto L2e
            java.util.List r1 = java.util.Collections.emptyList()
            return r1
        L2e:
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$SubtitleService r1 = r0.subtitleService
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$DisplayDefinition r1 = r1.displayDefinition
            if (r1 == 0) goto L39
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$SubtitleService r1 = r0.subtitleService
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$DisplayDefinition r1 = r1.displayDefinition
            goto L3b
        L39:
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$DisplayDefinition r1 = r0.defaultDisplayDefinition
        L3b:
            android.graphics.Bitmap r2 = r0.bitmap
            if (r2 == 0) goto L57
            int r2 = r1.width
            int r2 = r2 + 1
            android.graphics.Bitmap r3 = r0.bitmap
            int r3 = r3.getWidth()
            if (r2 != r3) goto L57
            int r2 = r1.height
            int r2 = r2 + 1
            android.graphics.Bitmap r3 = r0.bitmap
            int r3 = r3.getHeight()
            if (r2 == r3) goto L6c
        L57:
            int r2 = r1.width
            int r2 = r2 + 1
            int r3 = r1.height
            int r3 = r3 + 1
            android.graphics.Bitmap$Config r4 = android.graphics.Bitmap.Config.ARGB_8888
            android.graphics.Bitmap r2 = android.graphics.Bitmap.createBitmap(r2, r3, r4)
            r0.bitmap = r2
            android.graphics.Canvas r3 = r0.canvas
            r3.setBitmap(r2)
        L6c:
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$SubtitleService r3 = r0.subtitleService
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$PageComposition r3 = r3.pageComposition
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$PageRegion> r3 = r3.regions
            r5 = 0
        L78:
            int r6 = r3.size()
            if (r5 >= r6) goto L1b1
            java.lang.Object r6 = r3.valueAt(r5)
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$PageRegion r6 = (com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.PageRegion) r6
            int r7 = r3.keyAt(r5)
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$SubtitleService r8 = r0.subtitleService
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$RegionComposition> r8 = r8.regions
            java.lang.Object r7 = r8.get(r7)
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$RegionComposition r7 = (com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.RegionComposition) r7
            int r8 = r6.horizontalAddress
            int r9 = r1.horizontalPositionMinimum
            int r8 = r8 + r9
            int r6 = r6.verticalAddress
            int r9 = r1.verticalPositionMinimum
            int r6 = r6 + r9
            int r9 = r7.width
            int r9 = r9 + r8
            int r10 = r1.horizontalPositionMaximum
            int r9 = java.lang.Math.min(r9, r10)
            int r10 = r7.height
            int r10 = r10 + r6
            int r11 = r1.verticalPositionMaximum
            int r10 = java.lang.Math.min(r10, r11)
            android.graphics.Canvas r11 = r0.canvas
            float r15 = (float) r8
            float r14 = (float) r6
            float r9 = (float) r9
            float r10 = (float) r10
            android.graphics.Region$Op r16 = android.graphics.Region.Op.REPLACE
            r12 = r15
            r13 = r14
            r18 = r14
            r14 = r9
            r9 = r15
            r15 = r10
            r11.clipRect(r12, r13, r14, r15, r16)
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$SubtitleService r10 = r0.subtitleService
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$ClutDefinition> r10 = r10.cluts
            int r11 = r7.clutId
            java.lang.Object r10 = r10.get(r11)
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$ClutDefinition r10 = (com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.ClutDefinition) r10
            if (r10 != 0) goto Lde
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$SubtitleService r10 = r0.subtitleService
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$ClutDefinition> r10 = r10.ancillaryCluts
            int r11 = r7.clutId
            java.lang.Object r10 = r10.get(r11)
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$ClutDefinition r10 = (com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.ClutDefinition) r10
            if (r10 != 0) goto Lde
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$ClutDefinition r10 = r0.defaultClutDefinition
        Lde:
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$RegionObject> r15 = r7.regionObjects
            r14 = 0
        Le1:
            int r11 = r15.size()
            if (r14 >= r11) goto L136
            int r11 = r15.keyAt(r14)
            java.lang.Object r12 = r15.valueAt(r14)
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$RegionObject r12 = (com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.RegionObject) r12
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$SubtitleService r13 = r0.subtitleService
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$ObjectData> r13 = r13.objects
            java.lang.Object r13 = r13.get(r11)
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$ObjectData r13 = (com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.ObjectData) r13
            if (r13 != 0) goto L108
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$SubtitleService r13 = r0.subtitleService
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$ObjectData> r13 = r13.ancillaryObjects
            java.lang.Object r11 = r13.get(r11)
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$ObjectData r11 = (com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser.ObjectData) r11
            goto L109
        L108:
            r11 = r13
        L109:
            if (r11 == 0) goto L12f
            boolean r13 = r11.nonModifyingColorFlag
            if (r13 == 0) goto L111
            r13 = 0
            goto L113
        L111:
            android.graphics.Paint r13 = r0.defaultPaint
        L113:
            r16 = r13
            int r13 = r7.depth
            int r4 = r12.horizontalPosition
            int r4 = r4 + r8
            int r12 = r12.verticalPosition
            int r17 = r6 + r12
            android.graphics.Canvas r12 = r0.canvas
            r19 = r12
            r12 = r10
            r20 = r14
            r14 = r4
            r4 = r15
            r15 = r17
            r17 = r19
            paintPixelDataSubBlocks(r11, r12, r13, r14, r15, r16, r17)
            goto L132
        L12f:
            r20 = r14
            r4 = r15
        L132:
            int r14 = r20 + 1
            r15 = r4
            goto Le1
        L136:
            boolean r4 = r7.fillFlag
            if (r4 == 0) goto L173
            int r4 = r7.depth
            r11 = 3
            if (r4 != r11) goto L146
            int[] r4 = r10.clutEntries8Bit
            int r10 = r7.pixelCode8Bit
            r4 = r4[r10]
            goto L158
        L146:
            int r4 = r7.depth
            r11 = 2
            if (r4 != r11) goto L152
            int[] r4 = r10.clutEntries4Bit
            int r10 = r7.pixelCode4Bit
            r4 = r4[r10]
            goto L158
        L152:
            int[] r4 = r10.clutEntries2Bit
            int r10 = r7.pixelCode2Bit
            r4 = r4[r10]
        L158:
            android.graphics.Paint r10 = r0.fillRegionPaint
            r10.setColor(r4)
            android.graphics.Canvas r12 = r0.canvas
            int r4 = r7.width
            int r4 = r4 + r8
            float r15 = (float) r4
            int r4 = r7.height
            int r4 = r4 + r6
            float r4 = (float) r4
            android.graphics.Paint r10 = r0.fillRegionPaint
            r13 = r9
            r14 = r18
            r16 = r4
            r17 = r10
            r12.drawRect(r13, r14, r15, r16, r17)
        L173:
            android.graphics.Bitmap r4 = r0.bitmap
            int r10 = r7.width
            int r11 = r7.height
            android.graphics.Bitmap r20 = android.graphics.Bitmap.createBitmap(r4, r8, r6, r10, r11)
            com.mbridge.msdk.playercommon.exoplayer2.text.Cue r4 = new com.mbridge.msdk.playercommon.exoplayer2.text.Cue
            int r6 = r1.width
            float r6 = (float) r6
            float r21 = r9 / r6
            r22 = 0
            int r6 = r1.height
            float r6 = (float) r6
            float r23 = r18 / r6
            r24 = 0
            int r6 = r7.width
            float r6 = (float) r6
            int r8 = r1.width
            float r8 = (float) r8
            float r25 = r6 / r8
            int r6 = r7.height
            float r6 = (float) r6
            int r7 = r1.height
            float r7 = (float) r7
            float r26 = r6 / r7
            r19 = r4
            r19.<init>(r20, r21, r22, r23, r24, r25, r26)
            r2.add(r4)
            android.graphics.Canvas r4 = r0.canvas
            android.graphics.PorterDuff$Mode r6 = android.graphics.PorterDuff.Mode.CLEAR
            r7 = 0
            r4.drawColor(r7, r6)
            int r5 = r5 + 1
            goto L78
        L1b1:
            return r2
    }

    public final void reset() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.dvb.DvbParser$SubtitleService r0 = r1.subtitleService
            r0.reset()
            return
    }
}
