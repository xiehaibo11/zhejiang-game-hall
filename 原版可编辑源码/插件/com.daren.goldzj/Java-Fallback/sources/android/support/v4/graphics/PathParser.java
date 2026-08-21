package android.support.v4.graphics;

import android.graphics.Path;
import android.support.annotation.RestrictTo;
import android.util.Log;
import java.util.ArrayList;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class PathParser {
    private static final String LOGTAG = "PathParser";

    private static class ExtractFloatResult {
        int mEndPosition;
        boolean mEndWithNegOrDot;

        ExtractFloatResult() {
        }
    }

    public static class PathDataNode {

        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public float[] mParams;

        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public char mType;

        PathDataNode(char r1, float[] r2) {
            this.mType = r1;
            this.mParams = r2;
        }

        PathDataNode(PathDataNode r3) {
            this.mType = r3.mType;
            float[] r32 = r3.mParams;
            this.mParams = PathParser.copyOfRange(r32, 0, r32.length);
        }

        public static void nodesToPath(PathDataNode[] r5, Path r6) {
            float[] r0 = new float[6];
            char r1 = 'm';
            int r2 = 0;
        L4:
            if (r2 >= r5.length) goto L6;
            addCommand(r6, r0, r1, r5[r2].mType, r5[r2].mParams);
            r1 = r5[r2].mType;
            r2 = r2 + 1;
            goto L4
        }

        public void interpolatePathDataNode(PathDataNode r5, PathDataNode r6, float r7) {
            int r0 = 0;
        L3:
            float[] r1 = r5.mParams;
            if (r0 >= r1.length) goto L6;
            this.mParams[r0] = (r1[r0] * (1.0f - r7)) + (r6.mParams[r0] * r7);
            r0 = r0 + 1;
            goto L3
        }

        private static void addCommand(Path r24, float[] r25, char r26, char r27, float[] r28) {
            char r11 = r27;
            float r0 = r25[0];
            float r1 = r25[1];
            float r2 = r25[2];
            float r3 = r25[3];
            float r4 = r25[4];
            float r5 = r25[5];
            switch(r11) {
                case 65: goto L9;
                case 67: goto L8;
                case 72: goto L7;
                case 76: goto L4;
                case 77: goto L4;
                case 81: goto L6;
                case 83: goto L6;
                case 84: goto L4;
                case 86: goto L7;
                case 90: goto L5;
                case 97: goto L9;
                case 99: goto L8;
                case 104: goto L7;
                case 108: goto L4;
                case 109: goto L4;
                case 113: goto L6;
                case 115: goto L6;
                case 116: goto L4;
                case 118: goto L7;
                case 122: goto L5;
                default: goto L4;
            };
        L4:
            int r19 = 2;
        L10:
            float r8 = r0;
            float r7 = r1;
            float r20 = r4;
            float r21 = r5;
            int r9 = 0;
            char r02 = r26;
        L12:
            if (r9 >= r28.length) goto L124;
            if (r11 != 'A') goto L16;
            float r112 = r7;
            float r15 = r8;
            int r22 = r9;
            int r13 = r22 + 5;
            float r32 = r28[r13];
            int r14 = r22 + 6;
            float r42 = r28[r14];
            float r52 = r28[r22 + 0];
            float r6 = r28[r22 + 1];
            float r72 = r28[r22 + 2];
            if (r28[r22 + 3] == 0.0f) goto L116;
            boolean r82 = true;
        L118:
            if (r28[r22 + 4] == 0.0f) goto L120;
            boolean r92 = true;
        L121:
            drawArc(r24, r15, r112, r32, r42, r52, r6, r72, r82, r92);
            r8 = r28[r13];
            r7 = r28[r14];
        L122:
            r3 = r7;
            r2 = r8;
        L123:
            r9 = r22 + r19;
            r02 = r27;
            r11 = r02;
            goto L12
        L120:
            r92 = false;
            goto L121
        L116:
            r82 = false;
            goto L118
        L16:
            if (r11 != 'C') goto L18;
            r22 = r9;
            float r12 = r28[r22 + 0];
            float r23 = r28[r22 + 1];
            int r93 = r22 + 2;
            int r73 = r22 + 3;
            int r83 = r22 + 4;
            int r113 = r22 + 5;
            r24.cubicTo(r12, r23, r28[r93], r28[r73], r28[r83], r28[r113]);
            r8 = r28[r83];
            float r03 = r28[r113];
            float r16 = r28[r93];
            float r29 = r28[r73];
            r7 = r03;
            r3 = r29;
            r2 = r16;
            goto L123
        L18:
            if (r11 != 'H') goto L20;
            r22 = r9;
            int r94 = r22 + 0;
            float r04 = r28[r94];
            r24.lineTo(r04, r7);
            r8 = r28[r94];
            goto L123
        L20:
            if (r11 != 'Q') goto L22;
            r22 = r9;
            int r95 = r22 + 0;
            int r17 = r22 + 1;
            int r33 = r22 + 2;
            int r53 = r22 + 3;
            r24.quadTo(r28[r95], r28[r17], r28[r33], r28[r53]);
            float r05 = r28[r95];
            float r18 = r28[r17];
            r8 = r28[r33];
            r7 = r28[r53];
            r2 = r05;
            r3 = r18;
            goto L123
        L22:
            if (r11 != 'V') goto L24;
            r22 = r9;
            int r96 = r22 + 0;
            r24.lineTo(r8, r28[r96]);
            r7 = r28[r96];
            goto L123
        L24:
            if (r11 != 'a') goto L26;
            int r132 = r9 + 5;
            float r34 = r28[r132] + r8;
            int r142 = r9 + 6;
            float r43 = r28[r142] + r7;
            float r54 = r28[r9 + 0];
            float r62 = r28[r9 + 1];
            float r152 = r28[r9 + 2];
            if (r28[r9 + 3] == 0.0f) goto L103;
            boolean r222 = true;
        L105:
            if (r28[r9 + 4] == 0.0f) goto L107;
            boolean r232 = true;
        L108:
            float r153 = r8;
            boolean r84 = r222;
            r22 = r9;
            drawArc(r24, r8, r7, r34, r43, r54, r62, r152, r84, r232);
            r8 = r153 + r28[r132];
            r7 = r7 + r28[r142];
            goto L122
        L107:
            r232 = false;
            goto L108
        L103:
            r222 = false;
            goto L105
        L26:
            if (r11 != 'c') goto L28;
            int r133 = r9 + 2;
            int r143 = r9 + 3;
            int r154 = r9 + 4;
            int r223 = r9 + 5;
            r24.rCubicTo(r28[r9 + 0], r28[r9 + 1], r28[r133], r28[r143], r28[r154], r28[r223]);
            float r06 = r28[r133] + r8;
            float r110 = r28[r143] + r7;
            r8 = r8 + r28[r154];
            float r210 = r28[r223];
        L98:
            r7 = r7 + r210;
        L99:
            r2 = r06;
            r3 = r110;
        L49:
            r22 = r9;
            goto L123
        L28:
            if (r11 != 'h') goto L30;
            int r07 = r9 + 0;
            r24.rLineTo(r28[r07], 0.0f);
            r8 = r8 + r28[r07];
            goto L49
        L30:
            if (r11 != 'q') goto L32;
            int r08 = r9 + 0;
            int r211 = r9 + 1;
            int r44 = r9 + 2;
            int r63 = r9 + 3;
            r24.rQuadTo(r28[r08], r28[r211], r28[r44], r28[r63]);
            r06 = r28[r08] + r8;
            r110 = r28[r211] + r7;
            r8 = r8 + r28[r44];
            r210 = r28[r63];
            goto L98
        L32:
            if (r11 != 'v') goto L34;
            int r09 = r9 + 0;
            r24.rLineTo(0.0f, r28[r09]);
            float r010 = r28[r09];
        L73:
            r7 = r7 + r010;
            goto L49
        L34:
            if (r11 != 'L') goto L36;
            int r011 = r9 + 0;
            int r45 = r9 + 1;
            r24.lineTo(r28[r011], r28[r45]);
            r8 = r28[r011];
            r7 = r28[r45];
            goto L49
        L36:
            if (r11 != 'M') goto L38;
            int r012 = r9 + 0;
            r8 = r28[r012];
            int r111 = r9 + 1;
            r7 = r28[r111];
            if (r9 <= 0) goto L91;
            r24.lineTo(r28[r012], r28[r111]);
            goto L49
        L91:
            r24.moveTo(r28[r012], r28[r111]);
        L92:
            r21 = r7;
            r20 = r8;
            goto L49
        L38:
            if (r11 != 'S') goto L40;
            if (r02 != 'c') goto L83;
        L86:
            r8 = (r8 * 2.0f) - r2;
            r7 = (r7 * 2.0f) - r3;
        L87:
            float r212 = r7;
            int r74 = r9 + 0;
            int r85 = r9 + 1;
            int r134 = r9 + 2;
            int r144 = r9 + 3;
            r24.cubicTo(r8, r212, r28[r74], r28[r85], r28[r134], r28[r144]);
            r06 = r28[r74];
            r110 = r28[r85];
            r8 = r28[r134];
            r7 = r28[r144];
            goto L99
        L83:
            if (r02 == 's') goto L86;
            if (r02 == 'C') goto L86;
            if (r02 != 'S') goto L87;
        L40:
            if (r11 != 'T') goto L42;
            if (r02 != 'q') goto L76;
        L79:
            r8 = (r8 * 2.0f) - r2;
            r7 = (r7 * 2.0f) - r3;
        L80:
            int r013 = r9 + 0;
            int r213 = r9 + 1;
            r24.quadTo(r8, r7, r28[r013], r28[r213]);
            float r014 = r28[r013];
            float r114 = r28[r213];
            r3 = r7;
            r2 = r8;
            r22 = r9;
            r8 = r014;
            r7 = r114;
            goto L123
        L76:
            if (r02 == 't') goto L79;
            if (r02 == 'Q') goto L79;
            if (r02 != 'T') goto L80;
        L42:
            if (r11 != 'l') goto L44;
            int r015 = r9 + 0;
            int r46 = r9 + 1;
            r24.rLineTo(r28[r015], r28[r46]);
            r8 = r8 + r28[r015];
            r010 = r28[r46];
            goto L73
        L44:
            if (r11 != 'm') goto L46;
            int r016 = r9 + 0;
            r8 = r8 + r28[r016];
            int r115 = r9 + 1;
            r7 = r7 + r28[r115];
            if (r9 <= 0) goto L71;
            r24.rLineTo(r28[r016], r28[r115]);
            goto L49
        L71:
            r24.rMoveTo(r28[r016], r28[r115]);
            goto L92
        L46:
            if (r11 != 's') goto L48;
            if (r02 != 'c') goto L61;
        L66:
            float r017 = r8 - r2;
            float r214 = r7 - r3;
            float r116 = r017;
        L67:
            int r135 = r9 + 0;
            int r145 = r9 + 1;
            int r155 = r9 + 2;
            int r224 = r9 + 3;
            r24.rCubicTo(r116, r214, r28[r135], r28[r145], r28[r155], r28[r224]);
            r06 = r28[r135] + r8;
            r110 = r28[r145] + r7;
            r8 = r8 + r28[r155];
            r210 = r28[r224];
            goto L98
        L61:
            if (r02 == 's') goto L66;
            if (r02 == 'C') goto L66;
            if (r02 == 'S') goto L66;
            r116 = 0.0f;
            r214 = 0.0f;
            goto L67
        L48:
            if (r11 != 't') goto L49;
            if (r02 != 'q') goto L52;
        L57:
            float r47 = r8 - r2;
            float r018 = r7 - r3;
        L58:
            int r117 = r9 + 0;
            int r35 = r9 + 1;
            r24.rQuadTo(r47, r018, r28[r117], r28[r35]);
            float r48 = r47 + r8;
            float r019 = r018 + r7;
            r8 = r8 + r28[r117];
            r7 = r7 + r28[r35];
            r3 = r019;
            r2 = r48;
            goto L49
        L52:
            if (r02 == 't') goto L57;
            if (r02 == 'Q') goto L57;
            if (r02 == 'T') goto L57;
            r018 = 0.0f;
            r47 = 0.0f;
            goto L58
        L124:
            r25[0] = r8;
            r25[1] = r7;
            r25[2] = r2;
            r25[3] = r3;
            r25[4] = r20;
            r25[5] = r21;
            return;
        L5:
            r24.close();
            r24.moveTo(r4, r5);
            r0 = r4;
            r2 = r0;
            r1 = r5;
            r3 = r1;
            goto L4
        L6:
            r19 = 4;
            goto L10
        L7:
            r19 = 1;
            goto L10
        L8:
            r19 = 6;
            goto L10
        L9:
            r19 = 7;
            goto L10
        }

        private static void drawArc(Path r41, float r42, float r43, float r44, float r45, float r46, float r47, float r48, boolean r49, boolean r50) {
            double r19 = Math.toRadians(r48);
            double r4 = Math.cos(r19);
            double r10 = Math.sin(r19);
            double r13 = r42;
            double r15 = r13 * r4;
            double r132 = r43;
            double r6 = r46;
            double r152 = (r15 + (r132 * r10)) / r6;
            double r8 = (((double) (-r42)) * r10) + (r132 * r4);
            double r133 = r47;
            double r82 = r8 / r133;
            double r83 = r45;
            double r1 = ((((double) r44) * r4) + (r83 * r10)) / r6;
            double r62 = ((((double) (-r44)) * r10) + (r83 * r4)) / r133;
            double r84 = r152 - r1;
            double r27 = r82 - r62;
            double r29 = (r152 + r1) / 2.0d;
            double r33 = (r82 + r62) / 2.0d;
            double r102 = (r84 * r84) + (r27 * r27);
            if (r102 != 0.0d) goto L6;
            Log.w(PathParser.LOGTAG, " Points are coincident");
            return;
        L6:
            double r35 = (1.0d / r102) - 0.25d;
            if (r35 >= 0.0d) goto L10;
            Log.w(PathParser.LOGTAG, "Points are too far apart " + r102);
            float r12 = (float) (Math.sqrt(r102) / 1.99999d);
            drawArc(r41, r42, r43, r44, r45, r46 * r12, r47 * r12, r48, r49, r50);
            return;
        L10:
            double r103 = Math.sqrt(r35);
            double r85 = r84 * r103;
            double r104 = r103 * r27;
            if (r49 != r50) goto L13;
            double r292 = r29 - r104;
            double r332 = r33 + r85;
        L14:
            double r23 = Math.atan2(r82 - r332, r152 - r292);
            double r0 = Math.atan2(r62 - r332, r1 - r292) - r23;
            if (r0 < 0.0d) goto L17;
            boolean r63 = true;
        L18:
            if (r50 != r63) goto L20;
        L23:
            double r293 = r292 * r6;
            double r333 = r332 * r133;
            arcToBezier(r41, (r293 * r4) - (r333 * r10), (r293 * r10) + (r333 * r4), r6, r133, r13, r132, r19, r23, r0);
            return;
        L20:
            if (r0 <= 0.0d) goto L22;
            r0 = r0 - 6.283185307179586d;
            goto L23
        L22:
            r0 = r0 + 6.283185307179586d;
            goto L23
        L17:
            r63 = false;
            goto L18
        L13:
            r292 = r29 + r104;
            r332 = r33 - r85;
            goto L14
        }

        private static void arcToBezier(Path r48, double r49, double r51, double r53, double r55, double r57, double r59, double r61, double r63, double r65) {
            double r0 = r53;
            int r4 = (int) Math.ceil(Math.abs((r65 * 4.0d) / 3.141592653589793d));
            double r5 = Math.cos(r61);
            double r7 = Math.sin(r61);
            double r9 = Math.cos(r63);
            double r11 = Math.sin(r63);
            double r13 = -r0;
            double r15 = r13 * r5;
            double r19 = r55 * r7;
            double r17 = (r15 * r11) - (r19 * r9);
            double r132 = r13 * r7;
            double r21 = r55 * r5;
            double r112 = (r11 * r132) + (r9 * r21);
            double r92 = r65 / ((double) r4);
            double r23 = r57;
            double r27 = r59;
            double r29 = r112;
            double r25 = r17;
            int r113 = 0;
            double r172 = r63;
        L3:
            if (r113 >= r4) goto L5;
            double r31 = r172 + r92;
            double r33 = Math.sin(r31);
            double r35 = Math.cos(r31);
            double r2 = (r49 + ((r0 * r5) * r35)) - (r19 * r33);
            double r02 = (r51 + ((r0 * r7) * r35)) + (r21 * r33);
            double r37 = (r15 * r33) - (r19 * r35);
            double r332 = (r33 * r132) + (r35 * r21);
            double r173 = r31 - r172;
            double r352 = Math.tan(r173 / 2.0d);
            double r174 = (Math.sin(r173) * (Math.sqrt(((r352 * 3.0d) * r352) + 4.0d) - 1.0d)) / 3.0d;
            int r12 = r4;
            double r39 = r5;
            double r42 = r23 + (r25 * r174);
            double r612 = r7;
            double r6 = r27 + (r29 * r174);
            double r552 = r92;
            double r8 = r2 - (r174 * r37);
            r48.rLineTo(0.0f, 0.0f);
            r48.cubicTo((float) r42, (float) r6, (float) r8, (float) (r02 - (r174 * r332)), (float) r2, (float) r02);
            r113 = r113 + 1;
            r92 = r552;
            r4 = r12;
            r7 = r612;
            r27 = r02;
            r132 = r132;
            r172 = r31;
            r29 = r332;
            r25 = r37;
            r5 = r39;
            r0 = r53;
            r23 = r2;
            goto L3
        }
    }

    static float[] copyOfRange(float[] r2, int r3, int r4) {
        if (r3 > r4) goto L11;
        int r0 = r2.length;
        if (r3 < 0) goto L9;
        if (r3 > r0) goto L9;
        int r42 = r4 - r3;
        int r02 = Math.min(r42, r0 - r3);
        float[] r43 = new float[r42];
        System.arraycopy(r2, r3, r43, 0, r02);
        return r43;
    L9:
        throw new ArrayIndexOutOfBoundsException();
    L11:
        throw new IllegalArgumentException();
    }

    public static Path createPathFromPathData(String r4) {
        Path r0 = new Path();
        PathDataNode[] r1 = createNodesFromPathData(r4);
        if (r1 != null) goto L11;
        return null;
    L11:
        PathDataNode.nodesToPath(r1, r0);     // Catch: RuntimeException -> L6
        return r0;
    L6:
        e = move-exception;
        throw new RuntimeException("Error in parsing " + r4, e);
    }

    public static PathDataNode[] createNodesFromPathData(String r7) {
        if (r7 != null) goto L5;
        return null;
    L5:
        ArrayList r0 = new ArrayList();
        int r3 = 1;
        int r4 = 0;
    L7:
        if (r3 >= r7.length()) goto L13;
        int r32 = nextStart(r7, r3);
        String r42 = r7.substring(r4, r32).trim();
        if (r42.length() <= 0) goto L11;
        float[] r5 = getFloats(r42);
        addNode(r0, r42.charAt(0), r5);
    L11:
        r4 = r32;
        r3 = r32 + 1;
        goto L7
    L13:
        if ((r3 - r4) != 1) goto L18;
        if (r4 >= r7.length()) goto L18;
        addNode(r0, r7.charAt(r4), new float[0]);
    L18:
        return (PathDataNode[]) r0.toArray(new PathDataNode[r0.size()]);
    }

    public static PathDataNode[] deepCopyNodes(PathDataNode[] r4) {
        if (r4 != null) goto L5;
        return null;
    L5:
        PathDataNode[] r0 = new PathDataNode[r4.length];
        int r1 = 0;
    L7:
        if (r1 >= r4.length) goto L9;
        r0[r1] = new PathDataNode(r4[r1]);
        r1 = r1 + 1;
        goto L7
    L9:
        return r0;
    }

    public static boolean canMorph(PathDataNode[] r4, PathDataNode[] r5) {
        if (r4 == null) goto L21;
        if (r5 == null) goto L21;
        if (r4.length == r5.length) goto L9;
        return false;
    L9:
        int r1 = 0;
    L11:
        if (r1 >= r4.length) goto L19;
        if (r4[r1].mType != r5[r1].mType) goto L18;
        if (r4[r1].mParams.length != r5[r1].mParams.length) goto L18;
        r1 = r1 + 1;
    L18:
        return false;
    L19:
        return true;
    L21:
        return false;
    }

    public static void updateNodes(PathDataNode[] r5, PathDataNode[] r6) {
        int r1 = 0;
    L4:
        if (r1 >= r6.length) goto L10;
        PathDataNode r2 = r5[r1];
        r2.mType = r6[r1].mType;
        int r22 = 0;
    L7:
        if (r22 >= r6[r1].mParams.length) goto L9;
        r5[r1].mParams[r22] = r6[r1].mParams[r22];
        r22 = r22 + 1;
        goto L7
    L9:
        r1 = r1 + 1;
        goto L4
    }

    private static int nextStart(String r3, int r4) {
    L3:
        if (r4 >= r3.length()) goto L14;
        char r0 = r3.charAt(r4);
        if (((r0 - 'A') * (r0 - 'Z')) <= 0) goto L9;
        if (((r0 - 'a') * (r0 - 'z')) <= 0) goto L9;
    L13:
        r4 = r4 + 1;
    L9:
        if (r0 == 'e') goto L13;
        if (r0 == 'E') goto L13;
        return r4;
    L14:
        return r4;
    }

    private static void addNode(ArrayList<PathDataNode> r1, char r2, float[] r3) {
        r1.add(new PathDataNode(r2, r3));
    }

    private static float[] getFloats(String r8) {
        if (r8.charAt(0) == 'z') goto L22;
        if (r8.charAt(0) == 'Z') goto L22;
        float[] r1 = new float[r8.length()];     // Catch: NumberFormatException -> L18
        ExtractFloatResult r2 = new ExtractFloatResult();     // Catch: NumberFormatException -> L18
        int r3 = r8.length();     // Catch: NumberFormatException -> L18
        int r4 = 1;
        int r5 = 0;
    L8:
        if (r4 >= r3) goto L16;
        extract(r8, r4, r2);     // Catch: NumberFormatException -> L18
        int r6 = r2.mEndPosition;     // Catch: NumberFormatException -> L18
        if (r4 >= r6) goto L13;
        r1[r5] = Float.parseFloat(r8.substring(r4, r6));     // Catch: NumberFormatException -> L18
        r5 = r5 + 1;     // Catch: NumberFormatException -> L18
    L13:
        if (r2.mEndWithNegOrDot == true) goto L14;
        r4 = r6 + 1;     // Catch: NumberFormatException -> L18
        goto L8
    L14:
        r4 = r6;
        goto L8
    L16:
        return copyOfRange(r1, 0, r5);
    L18:
        e = move-exception;
        throw new RuntimeException("error in parsing \"" + r8 + "\"", e);
    L22:
        return new float[0];
    }

    private static void extract(String r8, int r9, ExtractFloatResult r10) {
        r10.mEndWithNegOrDot = false;
        int r1 = r9;
        boolean r2 = false;
        boolean r3 = false;
        boolean r4 = false;
    L4:
        if (r1 >= r8.length()) goto L25;
        char r5 = r8.charAt(r1);
        if (r5 != ' ') goto L8;
    L21:
        r2 = false;
        r4 = true;
    L22:
        if (r4 == true) goto L25;
        r1 = r1 + 1;
        goto L4
    L8:
        if (r5 != 'E') goto L10;
    L20:
        r2 = true;
        goto L22
    L10:
        if (r5 == 'e') goto L20;
        switch(r5) {
            case 44: goto L21;
            case 45: goto L16;
            case 46: goto L13;
            default: goto L19;
        };
    L13:
        if (r3 == true) goto L15;
        r2 = false;
        r3 = true;
        goto L22
    L15:
        r10.mEndWithNegOrDot = true;
        goto L21
    L16:
        if (r1 == r9) goto L19;
        if (r2 == true) goto L19;
        r10.mEndWithNegOrDot = true;
    L19:
        r2 = false;
    L25:
        r10.mEndPosition = r1;
    }

    private PathParser() {
    }
}
