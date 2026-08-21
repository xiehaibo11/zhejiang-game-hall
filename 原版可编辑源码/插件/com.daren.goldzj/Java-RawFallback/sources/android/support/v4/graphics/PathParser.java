package android.support.v4.graphics;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public class PathParser {
    private static final java.lang.String LOGTAG = "PathParser";

    private static class ExtractFloatResult {
        int mEndPosition;
        boolean mEndWithNegOrDot;

        ExtractFloatResult() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class PathDataNode {

        @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
        public float[] mParams;

        @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
        public char mType;

        PathDataNode(char r1, float[] r2) {
                r0 = this;
                r0.<init>()
                r0.mType = r1
                r0.mParams = r2
                return
        }

        PathDataNode(android.support.v4.graphics.PathParser.PathDataNode r3) {
                r2 = this;
                r2.<init>()
                char r0 = r3.mType
                r2.mType = r0
                float[] r3 = r3.mParams
                int r0 = r3.length
                r1 = 0
                float[] r3 = android.support.v4.graphics.PathParser.copyOfRange(r3, r1, r0)
                r2.mParams = r3
                return
        }

        private static void addCommand(android.graphics.Path r24, float[] r25, char r26, char r27, float[] r28) {
                r10 = r24
                r11 = r27
                r12 = r28
                r13 = 0
                r0 = r25[r13]
                r14 = 1
                r1 = r25[r14]
                r15 = 2
                r2 = r25[r15]
                r16 = 3
                r3 = r25[r16]
                r17 = 4
                r4 = r25[r17]
                r18 = 5
                r5 = r25[r18]
                switch(r11) {
                    case 65: goto L36;
                    case 67: goto L32;
                    case 72: goto L2f;
                    case 76: goto L1e;
                    case 77: goto L1e;
                    case 81: goto L2c;
                    case 83: goto L2c;
                    case 84: goto L1e;
                    case 86: goto L2f;
                    case 90: goto L21;
                    case 97: goto L36;
                    case 99: goto L32;
                    case 104: goto L2f;
                    case 108: goto L1e;
                    case 109: goto L1e;
                    case 113: goto L2c;
                    case 115: goto L2c;
                    case 116: goto L1e;
                    case 118: goto L2f;
                    case 122: goto L21;
                    default: goto L1e;
                }
            L1e:
                r19 = 2
                goto L39
            L21:
                r24.close()
                r10.moveTo(r4, r5)
                r0 = r4
                r2 = r0
                r1 = r5
                r3 = r1
                goto L1e
            L2c:
                r19 = 4
                goto L39
            L2f:
                r19 = 1
                goto L39
            L32:
                r6 = 6
                r19 = 6
                goto L39
            L36:
                r6 = 7
                r19 = 7
            L39:
                r8 = r0
                r7 = r1
                r20 = r4
                r21 = r5
                r9 = 0
                r0 = r26
            L42:
                int r1 = r12.length
                if (r9 >= r1) goto L30a
                r1 = 65
                if (r11 == r1) goto L2c4
                r1 = 67
                if (r11 == r1) goto L299
                r5 = 72
                if (r11 == r5) goto L28b
                r5 = 81
                if (r11 == r5) goto L26a
                r6 = 86
                if (r11 == r6) goto L25c
                r6 = 97
                if (r11 == r6) goto L20f
                r6 = 99
                if (r11 == r6) goto L1e2
                r15 = 104(0x68, float:1.46E-43)
                if (r11 == r15) goto L1d5
                r15 = 113(0x71, float:1.58E-43)
                if (r11 == r15) goto L1b6
                r14 = 118(0x76, float:1.65E-43)
                if (r11 == r14) goto L1aa
                r14 = 76
                if (r11 == r14) goto L199
                r14 = 77
                if (r11 == r14) goto L179
                r14 = 83
                r22 = 1073741824(0x40000000, float:2.0)
                if (r11 == r14) goto L148
                r13 = 84
                if (r11 == r13) goto L121
                r4 = 108(0x6c, float:1.51E-43)
                if (r11 == r4) goto L10e
                r4 = 109(0x6d, float:1.53E-43)
                if (r11 == r4) goto Lf1
                r4 = 115(0x73, float:1.61E-43)
                if (r11 == r4) goto Lbb
                r1 = 116(0x74, float:1.63E-43)
                if (r11 == r1) goto L93
            L8f:
                r22 = r9
                goto L300
            L93:
                if (r0 == r15) goto La1
                r1 = 116(0x74, float:1.63E-43)
                if (r0 == r1) goto La1
                if (r0 == r5) goto La1
                if (r0 != r13) goto L9e
                goto La1
            L9e:
                r0 = 0
                r4 = 0
                goto La5
            La1:
                float r4 = r8 - r2
                float r0 = r7 - r3
            La5:
                int r1 = r9 + 0
                r2 = r12[r1]
                int r3 = r9 + 1
                r5 = r12[r3]
                r10.rQuadTo(r4, r0, r2, r5)
                float r4 = r4 + r8
                float r0 = r0 + r7
                r1 = r12[r1]
                float r8 = r8 + r1
                r1 = r12[r3]
                float r7 = r7 + r1
                r3 = r0
                r2 = r4
                goto L8f
            Lbb:
                if (r0 == r6) goto Lc9
                r4 = 115(0x73, float:1.61E-43)
                if (r0 == r4) goto Lc9
                if (r0 == r1) goto Lc9
                if (r0 != r14) goto Lc6
                goto Lc9
            Lc6:
                r1 = 0
                r2 = 0
                goto Lcf
            Lc9:
                float r0 = r8 - r2
                float r1 = r7 - r3
                r2 = r1
                r1 = r0
            Lcf:
                int r13 = r9 + 0
                r3 = r12[r13]
                int r14 = r9 + 1
                r4 = r12[r14]
                int r15 = r9 + 2
                r5 = r12[r15]
                int r22 = r9 + 3
                r6 = r12[r22]
                r0 = r24
                r0.rCubicTo(r1, r2, r3, r4, r5, r6)
                r0 = r12[r13]
                float r0 = r0 + r8
                r1 = r12[r14]
                float r1 = r1 + r7
                r2 = r12[r15]
                float r8 = r8 + r2
                r2 = r12[r22]
                goto L20a
            Lf1:
                int r0 = r9 + 0
                r1 = r12[r0]
                float r8 = r8 + r1
                int r1 = r9 + 1
                r4 = r12[r1]
                float r7 = r7 + r4
                if (r9 <= 0) goto L105
                r0 = r12[r0]
                r1 = r12[r1]
                r10.rLineTo(r0, r1)
                goto L8f
            L105:
                r0 = r12[r0]
                r1 = r12[r1]
                r10.rMoveTo(r0, r1)
                goto L193
            L10e:
                int r0 = r9 + 0
                r1 = r12[r0]
                int r4 = r9 + 1
                r5 = r12[r4]
                r10.rLineTo(r1, r5)
                r0 = r12[r0]
                float r8 = r8 + r0
                r0 = r12[r4]
            L11e:
                float r7 = r7 + r0
                goto L8f
            L121:
                if (r0 == r15) goto L12b
                r1 = 116(0x74, float:1.63E-43)
                if (r0 == r1) goto L12b
                if (r0 == r5) goto L12b
                if (r0 != r13) goto L131
            L12b:
                float r8 = r8 * r22
                float r8 = r8 - r2
                float r7 = r7 * r22
                float r7 = r7 - r3
            L131:
                int r0 = r9 + 0
                r1 = r12[r0]
                int r2 = r9 + 1
                r3 = r12[r2]
                r10.quadTo(r8, r7, r1, r3)
                r0 = r12[r0]
                r1 = r12[r2]
                r3 = r7
                r2 = r8
                r22 = r9
                r8 = r0
                r7 = r1
                goto L300
            L148:
                if (r0 == r6) goto L152
                r4 = 115(0x73, float:1.61E-43)
                if (r0 == r4) goto L152
                if (r0 == r1) goto L152
                if (r0 != r14) goto L158
            L152:
                float r8 = r8 * r22
                float r8 = r8 - r2
                float r7 = r7 * r22
                float r7 = r7 - r3
            L158:
                r2 = r7
                r1 = r8
                int r7 = r9 + 0
                r3 = r12[r7]
                int r8 = r9 + 1
                r4 = r12[r8]
                int r13 = r9 + 2
                r5 = r12[r13]
                int r14 = r9 + 3
                r6 = r12[r14]
                r0 = r24
                r0.cubicTo(r1, r2, r3, r4, r5, r6)
                r0 = r12[r7]
                r1 = r12[r8]
                r8 = r12[r13]
                r7 = r12[r14]
                goto L20b
            L179:
                int r0 = r9 + 0
                r8 = r12[r0]
                int r1 = r9 + 1
                r7 = r12[r1]
                if (r9 <= 0) goto L18c
                r0 = r12[r0]
                r1 = r12[r1]
                r10.lineTo(r0, r1)
                goto L8f
            L18c:
                r0 = r12[r0]
                r1 = r12[r1]
                r10.moveTo(r0, r1)
            L193:
                r21 = r7
                r20 = r8
                goto L8f
            L199:
                int r0 = r9 + 0
                r1 = r12[r0]
                int r4 = r9 + 1
                r5 = r12[r4]
                r10.lineTo(r1, r5)
                r8 = r12[r0]
                r7 = r12[r4]
                goto L8f
            L1aa:
                int r0 = r9 + 0
                r1 = r12[r0]
                r4 = 0
                r10.rLineTo(r4, r1)
                r0 = r12[r0]
                goto L11e
            L1b6:
                int r0 = r9 + 0
                r1 = r12[r0]
                int r2 = r9 + 1
                r3 = r12[r2]
                int r4 = r9 + 2
                r5 = r12[r4]
                int r6 = r9 + 3
                r13 = r12[r6]
                r10.rQuadTo(r1, r3, r5, r13)
                r0 = r12[r0]
                float r0 = r0 + r8
                r1 = r12[r2]
                float r1 = r1 + r7
                r2 = r12[r4]
                float r8 = r8 + r2
                r2 = r12[r6]
                goto L20a
            L1d5:
                int r0 = r9 + 0
                r1 = r12[r0]
                r4 = 0
                r10.rLineTo(r1, r4)
                r0 = r12[r0]
                float r8 = r8 + r0
                goto L8f
            L1e2:
                int r0 = r9 + 0
                r1 = r12[r0]
                int r0 = r9 + 1
                r2 = r12[r0]
                int r13 = r9 + 2
                r3 = r12[r13]
                int r14 = r9 + 3
                r4 = r12[r14]
                int r15 = r9 + 4
                r5 = r12[r15]
                int r22 = r9 + 5
                r6 = r12[r22]
                r0 = r24
                r0.rCubicTo(r1, r2, r3, r4, r5, r6)
                r0 = r12[r13]
                float r0 = r0 + r8
                r1 = r12[r14]
                float r1 = r1 + r7
                r2 = r12[r15]
                float r8 = r8 + r2
                r2 = r12[r22]
            L20a:
                float r7 = r7 + r2
            L20b:
                r2 = r0
                r3 = r1
                goto L8f
            L20f:
                int r13 = r9 + 5
                r0 = r12[r13]
                float r3 = r0 + r8
                int r14 = r9 + 6
                r0 = r12[r14]
                float r4 = r0 + r7
                int r0 = r9 + 0
                r5 = r12[r0]
                int r0 = r9 + 1
                r6 = r12[r0]
                int r0 = r9 + 2
                r15 = r12[r0]
                int r0 = r9 + 3
                r0 = r12[r0]
                r1 = 0
                int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
                if (r0 == 0) goto L233
                r22 = 1
                goto L235
            L233:
                r22 = 0
            L235:
                int r0 = r9 + 4
                r0 = r12[r0]
                int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
                if (r0 == 0) goto L240
                r23 = 1
                goto L242
            L240:
                r23 = 0
            L242:
                r0 = r24
                r1 = r8
                r2 = r7
                r11 = r7
                r7 = r15
                r15 = r8
                r8 = r22
                r22 = r9
                r9 = r23
                drawArc(r0, r1, r2, r3, r4, r5, r6, r7, r8, r9)
                r0 = r12[r13]
                float r8 = r15 + r0
                r0 = r12[r14]
                float r7 = r11 + r0
                goto L2fe
            L25c:
                r15 = r8
                r22 = r9
                int r9 = r22 + 0
                r0 = r12[r9]
                r10.lineTo(r15, r0)
                r7 = r12[r9]
                goto L300
            L26a:
                r22 = r9
                int r9 = r22 + 0
                r0 = r12[r9]
                int r1 = r22 + 1
                r2 = r12[r1]
                int r3 = r22 + 2
                r4 = r12[r3]
                int r5 = r22 + 3
                r6 = r12[r5]
                r10.quadTo(r0, r2, r4, r6)
                r0 = r12[r9]
                r1 = r12[r1]
                r8 = r12[r3]
                r7 = r12[r5]
                r2 = r0
                r3 = r1
                goto L300
            L28b:
                r11 = r7
                r22 = r9
                int r9 = r22 + 0
                r0 = r12[r9]
                r10.lineTo(r0, r11)
                r8 = r12[r9]
                goto L300
            L299:
                r22 = r9
                int r9 = r22 + 0
                r1 = r12[r9]
                int r9 = r22 + 1
                r2 = r12[r9]
                int r9 = r22 + 2
                r3 = r12[r9]
                int r7 = r22 + 3
                r4 = r12[r7]
                int r8 = r22 + 4
                r5 = r12[r8]
                int r11 = r22 + 5
                r6 = r12[r11]
                r0 = r24
                r0.cubicTo(r1, r2, r3, r4, r5, r6)
                r8 = r12[r8]
                r0 = r12[r11]
                r1 = r12[r9]
                r2 = r12[r7]
                r7 = r0
                r3 = r2
                r2 = r1
                goto L300
            L2c4:
                r11 = r7
                r15 = r8
                r22 = r9
                int r13 = r22 + 5
                r3 = r12[r13]
                int r14 = r22 + 6
                r4 = r12[r14]
                int r9 = r22 + 0
                r5 = r12[r9]
                int r9 = r22 + 1
                r6 = r12[r9]
                int r9 = r22 + 2
                r7 = r12[r9]
                int r9 = r22 + 3
                r0 = r12[r9]
                r1 = 0
                int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
                if (r0 == 0) goto L2e7
                r8 = 1
                goto L2e8
            L2e7:
                r8 = 0
            L2e8:
                int r9 = r22 + 4
                r0 = r12[r9]
                int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
                if (r0 == 0) goto L2f2
                r9 = 1
                goto L2f3
            L2f2:
                r9 = 0
            L2f3:
                r0 = r24
                r1 = r15
                r2 = r11
                drawArc(r0, r1, r2, r3, r4, r5, r6, r7, r8, r9)
                r8 = r12[r13]
                r7 = r12[r14]
            L2fe:
                r3 = r7
                r2 = r8
            L300:
                int r9 = r22 + r19
                r0 = r27
                r11 = r0
                r13 = 0
                r14 = 1
                r15 = 2
                goto L42
            L30a:
                r11 = r7
                r15 = r8
                r0 = 0
                r25[r0] = r15
                r0 = 1
                r25[r0] = r11
                r0 = 2
                r25[r0] = r2
                r25[r16] = r3
                r25[r17] = r20
                r25[r18] = r21
                return
        }

        private static void arcToBezier(android.graphics.Path r48, double r49, double r51, double r53, double r55, double r57, double r59, double r61, double r63, double r65) {
                r0 = r53
                r2 = 4616189618054758400(0x4010000000000000, double:4.0)
                double r4 = r65 * r2
                r6 = 4614256656552045848(0x400921fb54442d18, double:3.141592653589793)
                double r4 = r4 / r6
                double r4 = java.lang.Math.abs(r4)
                double r4 = java.lang.Math.ceil(r4)
                int r4 = (int) r4
                double r5 = java.lang.Math.cos(r61)
                double r7 = java.lang.Math.sin(r61)
                double r9 = java.lang.Math.cos(r63)
                double r11 = java.lang.Math.sin(r63)
                double r13 = -r0
                double r15 = r13 * r5
                double r17 = r15 * r11
                double r19 = r55 * r7
                double r21 = r19 * r9
                double r17 = r17 - r21
                double r13 = r13 * r7
                double r11 = r11 * r13
                double r21 = r55 * r5
                double r9 = r9 * r21
                double r11 = r11 + r9
                double r9 = (double) r4
                double r9 = r65 / r9
                r23 = 0
                r23 = r57
                r27 = r59
                r29 = r11
                r25 = r17
                r11 = 0
                r17 = r63
            L49:
                if (r11 >= r4) goto Led
                double r31 = r17 + r9
                double r33 = java.lang.Math.sin(r31)
                double r35 = java.lang.Math.cos(r31)
                double r37 = r0 * r5
                double r37 = r37 * r35
                double r37 = r49 + r37
                double r39 = r19 * r33
                double r2 = r37 - r39
                double r37 = r0 * r7
                double r37 = r37 * r35
                double r37 = r51 + r37
                double r39 = r21 * r33
                double r0 = r37 + r39
                double r37 = r15 * r33
                double r39 = r19 * r35
                double r37 = r37 - r39
                double r33 = r33 * r13
                double r35 = r35 * r21
                double r33 = r33 + r35
                double r17 = r31 - r17
                r35 = 4611686018427387904(0x4000000000000000, double:2.0)
                double r35 = r17 / r35
                double r35 = java.lang.Math.tan(r35)
                double r17 = java.lang.Math.sin(r17)
                r39 = 4613937818241073152(0x4008000000000000, double:3.0)
                double r43 = r35 * r39
                double r43 = r43 * r35
                r35 = 4616189618054758400(0x4010000000000000, double:4.0)
                double r43 = r43 + r35
                double r41 = java.lang.Math.sqrt(r43)
                r43 = 4607182418800017408(0x3ff0000000000000, double:1.0)
                double r41 = r41 - r43
                double r17 = r17 * r41
                double r17 = r17 / r39
                double r25 = r25 * r17
                r12 = r4
                r39 = r5
                double r4 = r23 + r25
                double r29 = r29 * r17
                r61 = r7
                double r6 = r27 + r29
                double r23 = r17 * r37
                r55 = r9
                double r8 = r2 - r23
                double r17 = r17 * r33
                r57 = r12
                r23 = r13
                double r12 = r0 - r17
                r10 = 0
                r14 = r48
                r14.rLineTo(r10, r10)
                float r4 = (float) r4
                float r5 = (float) r6
                float r6 = (float) r8
                float r7 = (float) r12
                float r8 = (float) r2
                float r9 = (float) r0
                r41 = r48
                r42 = r4
                r43 = r5
                r44 = r6
                r45 = r7
                r46 = r8
                r47 = r9
                r41.cubicTo(r42, r43, r44, r45, r46, r47)
                int r11 = r11 + 1
                r9 = r55
                r4 = r57
                r7 = r61
                r27 = r0
                r13 = r23
                r17 = r31
                r29 = r33
                r25 = r37
                r5 = r39
                r0 = r53
                r23 = r2
                r2 = r35
                goto L49
            Led:
                return
        }

        private static void drawArc(android.graphics.Path r41, float r42, float r43, float r44, float r45, float r46, float r47, float r48, boolean r49, boolean r50) {
                r1 = r42
                r3 = r44
                r0 = r46
                r2 = r47
                r7 = r48
                r9 = r50
                double r4 = (double) r7
                double r19 = java.lang.Math.toRadians(r4)
                double r4 = java.lang.Math.cos(r19)
                double r10 = java.lang.Math.sin(r19)
                double r13 = (double) r1
                double r15 = r13 * r4
                r6 = r43
                r17 = r13
                double r13 = (double) r6
                double r21 = r13 * r10
                double r15 = r15 + r21
                double r6 = (double) r0
                double r15 = r15 / r6
                float r8 = -r1
                double r8 = (double) r8
                double r8 = r8 * r10
                double r21 = r13 * r4
                double r8 = r8 + r21
                r21 = r13
                double r13 = (double) r2
                double r8 = r8 / r13
                double r1 = (double) r3
                double r1 = r1 * r4
                r12 = r45
                r23 = r8
                double r8 = (double) r12
                double r25 = r8 * r10
                double r1 = r1 + r25
                double r1 = r1 / r6
                float r12 = -r3
                r25 = r6
                double r6 = (double) r12
                double r6 = r6 * r10
                double r8 = r8 * r4
                double r6 = r6 + r8
                double r6 = r6 / r13
                double r8 = r15 - r1
                double r27 = r23 - r6
                double r29 = r15 + r1
                r31 = 4611686018427387904(0x4000000000000000, double:2.0)
                double r29 = r29 / r31
                double r33 = r23 + r6
                double r33 = r33 / r31
                double r31 = r8 * r8
                double r35 = r27 * r27
                r37 = r10
                double r10 = r31 + r35
                java.lang.String r12 = "PathParser"
                r31 = 0
                int r35 = (r10 > r31 ? 1 : (r10 == r31 ? 0 : -1))
                if (r35 != 0) goto L6e
                java.lang.String r0 = " Points are coincident"
                android.util.Log.w(r12, r0)
                return
            L6e:
                r35 = 4607182418800017408(0x3ff0000000000000, double:1.0)
                double r35 = r35 / r10
                r39 = 4598175219545276416(0x3fd0000000000000, double:0.25)
                double r35 = r35 - r39
                int r39 = (r35 > r31 ? 1 : (r35 == r31 ? 0 : -1))
                if (r39 >= 0) goto Lb1
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Points are too far apart "
                r1.append(r2)
                r1.append(r10)
                java.lang.String r1 = r1.toString()
                android.util.Log.w(r12, r1)
                double r1 = java.lang.Math.sqrt(r10)
                r4 = 4611685973391391630(0x3ffffff583a53b8e, double:1.99999)
                double r1 = r1 / r4
                float r1 = (float) r1
                float r5 = r0 * r1
                float r6 = r47 * r1
                r0 = r41
                r1 = r42
                r2 = r43
                r3 = r44
                r4 = r45
                r7 = r48
                r8 = r49
                r9 = r50
                drawArc(r0, r1, r2, r3, r4, r5, r6, r7, r8, r9)
                return
            Lb1:
                double r10 = java.lang.Math.sqrt(r35)
                double r8 = r8 * r10
                double r10 = r10 * r27
                r0 = r49
                r3 = r50
                if (r0 != r3) goto Lc4
                double r29 = r29 - r10
                double r33 = r33 + r8
                goto Lc8
            Lc4:
                double r29 = r29 + r10
                double r33 = r33 - r8
            Lc8:
                double r8 = r23 - r33
                double r10 = r15 - r29
                double r23 = java.lang.Math.atan2(r8, r10)
                double r6 = r6 - r33
                double r1 = r1 - r29
                double r0 = java.lang.Math.atan2(r6, r1)
                double r0 = r0 - r23
                int r2 = (r0 > r31 ? 1 : (r0 == r31 ? 0 : -1))
                if (r2 < 0) goto Le0
                r6 = 1
                goto Le1
            Le0:
                r6 = 0
            Le1:
                if (r3 == r6) goto Led
                r6 = 4618760256179416344(0x401921fb54442d18, double:6.283185307179586)
                if (r2 <= 0) goto Lec
                double r0 = r0 - r6
                goto Led
            Lec:
                double r0 = r0 + r6
            Led:
                double r29 = r29 * r25
                double r33 = r33 * r13
                double r2 = r29 * r4
                double r10 = r33 * r37
                double r7 = r2 - r10
                r2 = r25
                double r29 = r29 * r37
                double r33 = r33 * r4
                double r9 = r29 + r33
                r6 = r41
                r11 = r2
                r2 = r17
                r4 = r21
                r15 = r2
                r17 = r4
                r21 = r23
                r23 = r0
                arcToBezier(r6, r7, r9, r11, r13, r15, r17, r19, r21, r23)
                return
        }

        public static void nodesToPath(android.support.v4.graphics.PathParser.PathDataNode[] r5, android.graphics.Path r6) {
                r0 = 6
                float[] r0 = new float[r0]
                r1 = 109(0x6d, float:1.53E-43)
                r2 = 0
            L6:
                int r3 = r5.length
                if (r2 >= r3) goto L1b
                r3 = r5[r2]
                char r3 = r3.mType
                r4 = r5[r2]
                float[] r4 = r4.mParams
                addCommand(r6, r0, r1, r3, r4)
                r1 = r5[r2]
                char r1 = r1.mType
                int r2 = r2 + 1
                goto L6
            L1b:
                return
        }

        public void interpolatePathDataNode(android.support.v4.graphics.PathParser.PathDataNode r5, android.support.v4.graphics.PathParser.PathDataNode r6, float r7) {
                r4 = this;
                r0 = 0
            L1:
                float[] r1 = r5.mParams
                int r2 = r1.length
                if (r0 >= r2) goto L1b
                float[] r2 = r4.mParams
                r1 = r1[r0]
                r3 = 1065353216(0x3f800000, float:1.0)
                float r3 = r3 - r7
                float r1 = r1 * r3
                float[] r3 = r6.mParams
                r3 = r3[r0]
                float r3 = r3 * r7
                float r1 = r1 + r3
                r2[r0] = r1
                int r0 = r0 + 1
                goto L1
            L1b:
                return
        }
    }

    private PathParser() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void addNode(java.util.ArrayList<android.support.v4.graphics.PathParser.PathDataNode> r1, char r2, float[] r3) {
            android.support.v4.graphics.PathParser$PathDataNode r0 = new android.support.v4.graphics.PathParser$PathDataNode
            r0.<init>(r2, r3)
            r1.add(r0)
            return
    }

    public static boolean canMorph(android.support.v4.graphics.PathParser.PathDataNode[] r4, android.support.v4.graphics.PathParser.PathDataNode[] r5) {
            r0 = 0
            if (r4 == 0) goto L2c
            if (r5 != 0) goto L6
            goto L2c
        L6:
            int r1 = r4.length
            int r2 = r5.length
            if (r1 == r2) goto Lb
            return r0
        Lb:
            r1 = 0
        Lc:
            int r2 = r4.length
            if (r1 >= r2) goto L2a
            r2 = r4[r1]
            char r2 = r2.mType
            r3 = r5[r1]
            char r3 = r3.mType
            if (r2 != r3) goto L29
            r2 = r4[r1]
            float[] r2 = r2.mParams
            int r2 = r2.length
            r3 = r5[r1]
            float[] r3 = r3.mParams
            int r3 = r3.length
            if (r2 == r3) goto L26
            goto L29
        L26:
            int r1 = r1 + 1
            goto Lc
        L29:
            return r0
        L2a:
            r4 = 1
            return r4
        L2c:
            return r0
    }

    static float[] copyOfRange(float[] r2, int r3, int r4) {
            if (r3 > r4) goto L1a
            int r0 = r2.length
            if (r3 < 0) goto L14
            if (r3 > r0) goto L14
            int r4 = r4 - r3
            int r0 = r0 - r3
            int r0 = java.lang.Math.min(r4, r0)
            float[] r4 = new float[r4]
            r1 = 0
            java.lang.System.arraycopy(r2, r3, r4, r1, r0)
            return r4
        L14:
            java.lang.ArrayIndexOutOfBoundsException r2 = new java.lang.ArrayIndexOutOfBoundsException
            r2.<init>()
            throw r2
        L1a:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            r2.<init>()
            throw r2
    }

    public static android.support.v4.graphics.PathParser.PathDataNode[] createNodesFromPathData(java.lang.String r7) {
            if (r7 != 0) goto L4
            r7 = 0
            return r7
        L4:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 1
            r2 = 0
            r3 = 1
            r4 = 0
        Ld:
            int r5 = r7.length()
            if (r3 >= r5) goto L36
            int r3 = nextStart(r7, r3)
            java.lang.String r4 = r7.substring(r4, r3)
            java.lang.String r4 = r4.trim()
            int r5 = r4.length()
            if (r5 <= 0) goto L30
            float[] r5 = getFloats(r4)
            char r4 = r4.charAt(r2)
            addNode(r0, r4, r5)
        L30:
            int r4 = r3 + 1
            r6 = r4
            r4 = r3
            r3 = r6
            goto Ld
        L36:
            int r3 = r3 - r4
            if (r3 != r1) goto L48
            int r1 = r7.length()
            if (r4 >= r1) goto L48
            char r7 = r7.charAt(r4)
            float[] r1 = new float[r2]
            addNode(r0, r7, r1)
        L48:
            int r7 = r0.size()
            android.support.v4.graphics.PathParser$PathDataNode[] r7 = new android.support.v4.graphics.PathParser.PathDataNode[r7]
            java.lang.Object[] r7 = r0.toArray(r7)
            android.support.v4.graphics.PathParser$PathDataNode[] r7 = (android.support.v4.graphics.PathParser.PathDataNode[]) r7
            return r7
    }

    public static android.graphics.Path createPathFromPathData(java.lang.String r4) {
            android.graphics.Path r0 = new android.graphics.Path
            r0.<init>()
            android.support.v4.graphics.PathParser$PathDataNode[] r1 = createNodesFromPathData(r4)
            if (r1 == 0) goto L27
            android.support.v4.graphics.PathParser.PathDataNode.nodesToPath(r1, r0)     // Catch: java.lang.RuntimeException -> Lf
            return r0
        Lf:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Error in parsing "
            r2.append(r3)
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            r1.<init>(r4, r0)
            throw r1
        L27:
            r4 = 0
            return r4
    }

    public static android.support.v4.graphics.PathParser.PathDataNode[] deepCopyNodes(android.support.v4.graphics.PathParser.PathDataNode[] r4) {
            if (r4 != 0) goto L4
            r4 = 0
            return r4
        L4:
            int r0 = r4.length
            android.support.v4.graphics.PathParser$PathDataNode[] r0 = new android.support.v4.graphics.PathParser.PathDataNode[r0]
            r1 = 0
        L8:
            int r2 = r4.length
            if (r1 >= r2) goto L17
            android.support.v4.graphics.PathParser$PathDataNode r2 = new android.support.v4.graphics.PathParser$PathDataNode
            r3 = r4[r1]
            r2.<init>(r3)
            r0[r1] = r2
            int r1 = r1 + 1
            goto L8
        L17:
            return r0
    }

    private static void extract(java.lang.String r8, int r9, android.support.v4.graphics.PathParser.ExtractFloatResult r10) {
            r0 = 0
            r10.mEndWithNegOrDot = r0
            r1 = r9
            r2 = 0
            r3 = 0
            r4 = 0
        L7:
            int r5 = r8.length()
            if (r1 >= r5) goto L3d
            char r5 = r8.charAt(r1)
            r6 = 32
            r7 = 1
            if (r5 == r6) goto L35
            r6 = 69
            if (r5 == r6) goto L33
            r6 = 101(0x65, float:1.42E-43)
            if (r5 == r6) goto L33
            switch(r5) {
                case 44: goto L35;
                case 45: goto L2a;
                case 46: goto L22;
                default: goto L21;
            }
        L21:
            goto L31
        L22:
            if (r3 != 0) goto L27
            r2 = 0
            r3 = 1
            goto L37
        L27:
            r10.mEndWithNegOrDot = r7
            goto L35
        L2a:
            if (r1 == r9) goto L31
            if (r2 != 0) goto L31
            r10.mEndWithNegOrDot = r7
            goto L35
        L31:
            r2 = 0
            goto L37
        L33:
            r2 = 1
            goto L37
        L35:
            r2 = 0
            r4 = 1
        L37:
            if (r4 == 0) goto L3a
            goto L3d
        L3a:
            int r1 = r1 + 1
            goto L7
        L3d:
            r10.mEndPosition = r1
            return
    }

    private static float[] getFloats(java.lang.String r8) {
            r0 = 0
            char r1 = r8.charAt(r0)
            r2 = 122(0x7a, float:1.71E-43)
            if (r1 == r2) goto L64
            char r1 = r8.charAt(r0)
            r2 = 90
            if (r1 != r2) goto L12
            goto L64
        L12:
            int r1 = r8.length()     // Catch: java.lang.NumberFormatException -> L47
            float[] r1 = new float[r1]     // Catch: java.lang.NumberFormatException -> L47
            android.support.v4.graphics.PathParser$ExtractFloatResult r2 = new android.support.v4.graphics.PathParser$ExtractFloatResult     // Catch: java.lang.NumberFormatException -> L47
            r2.<init>()     // Catch: java.lang.NumberFormatException -> L47
            int r3 = r8.length()     // Catch: java.lang.NumberFormatException -> L47
            r4 = 1
            r5 = 0
        L23:
            if (r4 >= r3) goto L42
            extract(r8, r4, r2)     // Catch: java.lang.NumberFormatException -> L47
            int r6 = r2.mEndPosition     // Catch: java.lang.NumberFormatException -> L47
            if (r4 >= r6) goto L39
            int r7 = r5 + 1
            java.lang.String r4 = r8.substring(r4, r6)     // Catch: java.lang.NumberFormatException -> L47
            float r4 = java.lang.Float.parseFloat(r4)     // Catch: java.lang.NumberFormatException -> L47
            r1[r5] = r4     // Catch: java.lang.NumberFormatException -> L47
            r5 = r7
        L39:
            boolean r4 = r2.mEndWithNegOrDot     // Catch: java.lang.NumberFormatException -> L47
            if (r4 == 0) goto L3f
            r4 = r6
            goto L23
        L3f:
            int r4 = r6 + 1
            goto L23
        L42:
            float[] r8 = copyOfRange(r1, r0, r5)     // Catch: java.lang.NumberFormatException -> L47
            return r8
        L47:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "error in parsing \""
            r2.append(r3)
            r2.append(r8)
            java.lang.String r8 = "\""
            r2.append(r8)
            java.lang.String r8 = r2.toString()
            r1.<init>(r8, r0)
            throw r1
        L64:
            float[] r8 = new float[r0]
            return r8
    }

    private static int nextStart(java.lang.String r3, int r4) {
        L0:
            int r0 = r3.length()
            if (r4 >= r0) goto L26
            char r0 = r3.charAt(r4)
            int r1 = r0 + (-65)
            int r2 = r0 + (-90)
            int r1 = r1 * r2
            if (r1 <= 0) goto L1a
            int r1 = r0 + (-97)
            int r2 = r0 + (-122)
            int r1 = r1 * r2
            if (r1 > 0) goto L23
        L1a:
            r1 = 101(0x65, float:1.42E-43)
            if (r0 == r1) goto L23
            r1 = 69
            if (r0 == r1) goto L23
            return r4
        L23:
            int r4 = r4 + 1
            goto L0
        L26:
            return r4
    }

    public static void updateNodes(android.support.v4.graphics.PathParser.PathDataNode[] r5, android.support.v4.graphics.PathParser.PathDataNode[] r6) {
            r0 = 0
            r1 = 0
        L2:
            int r2 = r6.length
            if (r1 >= r2) goto L27
            r2 = r5[r1]
            r3 = r6[r1]
            char r3 = r3.mType
            r2.mType = r3
            r2 = 0
        Le:
            r3 = r6[r1]
            float[] r3 = r3.mParams
            int r3 = r3.length
            if (r2 >= r3) goto L24
            r3 = r5[r1]
            float[] r3 = r3.mParams
            r4 = r6[r1]
            float[] r4 = r4.mParams
            r4 = r4[r2]
            r3[r2] = r4
            int r2 = r2 + 1
            goto Le
        L24:
            int r1 = r1 + 1
            goto L2
        L27:
            return
    }
}
