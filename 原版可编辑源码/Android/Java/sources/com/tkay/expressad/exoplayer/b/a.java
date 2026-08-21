package com.tkay.expressad.exoplayer.b;

import com.bianfeng.ymnsdk.sysfunc.SysfuncInterface;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor;
import com.qihoo360.replugin.ext.parser.struct.ChunkType;
import com.qq.e.comm.adevent.AdEventType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.nio.ByteBuffer;
import kotlin.UByte;
import okio.Utf8;

public final class a {
    public static final int a = 16;
    public static final int b = 10;
    private static final int c = 256;
    private static final int d = 1536;
    private static final int[] e = {1, 2, 3, 6};
    private static final int[] f = {48000, 44100, 32000};
    private static final int[] g = {24000, 22050, 16000};
    private static final int[] h = {2, 1, 2, 3, 3, 4, 4, 5};
    private static final int[] i = {32, 40, 48, 56, 64, 80, 96, 112, 128, 160, PsExtractor.AUDIO_STREAM, 224, 256, 320, ChunkType.XML_RESOURCE_MAP, 448, 512, 576, 640};
    private static final int[] j = {69, 87, 104, com.tkay.expressad.video.module.a.a.L, 139, 174, AdEventType.VIDEO_CLICKED, 243, com.tkay.expressad.foundation.g.a.aS, 348, 417, 487, 557, 696, 835, 975, SysfuncInterface.SYSFUNC_NO_INSTALL_VIVO, 1253, 1393};

    public static int a() {
        return d;
    }

    public static final class a {
        public static final int a = -1;
        public static final int b = 0;
        public static final int c = 1;
        public static final int d = 2;
        public final String e;
        public final int f;
        public final int g;
        public final int h;
        public final int i;
        public final int j;

        @Retention(RetentionPolicy.SOURCE)
        public @interface a {
        }

        a(String str, int i, int i2, int i3, int i4, int i5, byte b2) {
            this(str, i, i2, i3, i4, i5);
        }

        private a(String str, int i, int i2, int i3, int i4, int i5) {
            this.e = str;
            this.f = i;
            this.h = i2;
            this.g = i3;
            this.i = i4;
            this.j = i5;
        }
    }

    public static com.tkay.expressad.exoplayer.m a(com.tkay.expressad.exoplayer.k.s sVar, String str, String str2, com.tkay.expressad.exoplayer.d.e eVar) {
        int i2 = f[(sVar.d() & PsExtractor.AUDIO_STREAM) >> 6];
        int iD = sVar.d();
        int i3 = h[(iD & 56) >> 3];
        if ((iD & 4) != 0) {
            i3++;
        }
        return com.tkay.expressad.exoplayer.m.a(str, "audio/ac3", null, -1, i3, i2, null, eVar, str2);
    }

    public static com.tkay.expressad.exoplayer.m b(com.tkay.expressad.exoplayer.k.s sVar, String str, String str2, com.tkay.expressad.exoplayer.d.e eVar) {
        sVar.d(2);
        int i2 = f[(sVar.d() & PsExtractor.AUDIO_STREAM) >> 6];
        int iD = sVar.d();
        int i3 = h[(iD & 14) >> 1];
        if ((iD & 1) != 0) {
            i3++;
        }
        if (((sVar.d() & 30) >> 1) > 0 && (2 & sVar.d()) != 0) {
            i3 += 2;
        }
        return com.tkay.expressad.exoplayer.m.a(str, (sVar.a() <= 0 || (sVar.d() & 1) == 0) ? "audio/eac3" : "audio/eac3-joc", null, -1, i3, i2, null, eVar, str2);
    }

    private static a a(com.tkay.expressad.exoplayer.k.r rVar) {
        int iA;
        int i2;
        int i3;
        int i4;
        String str;
        int iC;
        int i5;
        int i6;
        int iB = rVar.b();
        rVar.b(40);
        boolean z = rVar.c(5) == 16;
        rVar.a(iB);
        int i7 = -1;
        if (z) {
            rVar.b(16);
            int iC2 = rVar.c(2);
            if (iC2 == 0) {
                i7 = 0;
            } else if (iC2 == 1) {
                i7 = 1;
            } else if (iC2 == 2) {
                i7 = 2;
            }
            rVar.b(3);
            iA = (rVar.c(11) + 1) * 2;
            int iC3 = rVar.c(2);
            if (iC3 == 3) {
                i5 = 6;
                i2 = g[rVar.c(2)];
                iC = 3;
            } else {
                iC = rVar.c(2);
                i5 = e[iC];
                i2 = f[iC3];
            }
            i3 = i5 * 256;
            int iC4 = rVar.c(3);
            boolean zD = rVar.d();
            i4 = h[iC4] + (zD ? 1 : 0);
            rVar.b(10);
            if (rVar.d()) {
                rVar.b(8);
            }
            if (iC4 == 0) {
                rVar.b(5);
                if (rVar.d()) {
                    rVar.b(8);
                }
            }
            if (i7 == 1 && rVar.d()) {
                rVar.b(16);
            }
            if (rVar.d()) {
                if (iC4 > 2) {
                    rVar.b(2);
                }
                if ((iC4 & 1) != 0 && iC4 > 2) {
                    rVar.b(6);
                }
                if ((iC4 & 4) != 0) {
                    rVar.b(6);
                }
                if (zD && rVar.d()) {
                    rVar.b(5);
                }
                if (i7 == 0) {
                    if (rVar.d()) {
                        rVar.b(6);
                    }
                    if (iC4 == 0 && rVar.d()) {
                        rVar.b(6);
                    }
                    if (rVar.d()) {
                        rVar.b(6);
                    }
                    int iC5 = rVar.c(2);
                    if (iC5 == 1) {
                        rVar.b(5);
                    } else if (iC5 == 2) {
                        rVar.b(12);
                    } else if (iC5 == 3) {
                        int iC6 = rVar.c(5);
                        if (rVar.d()) {
                            rVar.b(5);
                            if (rVar.d()) {
                                rVar.b(4);
                            }
                            if (rVar.d()) {
                                rVar.b(4);
                            }
                            if (rVar.d()) {
                                rVar.b(4);
                            }
                            if (rVar.d()) {
                                rVar.b(4);
                            }
                            if (rVar.d()) {
                                rVar.b(4);
                            }
                            if (rVar.d()) {
                                rVar.b(4);
                            }
                            if (rVar.d()) {
                                rVar.b(4);
                            }
                            if (rVar.d()) {
                                if (rVar.d()) {
                                    rVar.b(4);
                                }
                                if (rVar.d()) {
                                    rVar.b(4);
                                }
                            }
                        }
                        if (rVar.d()) {
                            rVar.b(5);
                            if (rVar.d()) {
                                rVar.b(7);
                                if (rVar.d()) {
                                    rVar.b(8);
                                }
                            }
                        }
                        rVar.b((iC6 + 2) * 8);
                        rVar.e();
                    }
                    if (iC4 < 2) {
                        if (rVar.d()) {
                            rVar.b(14);
                        }
                        if (iC4 == 0 && rVar.d()) {
                            rVar.b(14);
                        }
                    }
                    if (rVar.d()) {
                        if (iC == 0) {
                            rVar.b(5);
                        } else {
                            for (int i8 = 0; i8 < i5; i8++) {
                                if (rVar.d()) {
                                    rVar.b(5);
                                }
                            }
                        }
                    }
                }
            }
            if (rVar.d()) {
                rVar.b(5);
                if (iC4 == 2) {
                    rVar.b(4);
                }
                if (iC4 >= 6) {
                    rVar.b(2);
                }
                if (rVar.d()) {
                    rVar.b(8);
                }
                if (iC4 == 0 && rVar.d()) {
                    rVar.b(8);
                }
                i6 = 3;
                if (iC3 < 3) {
                    rVar.c();
                }
            } else {
                i6 = 3;
            }
            if (i7 == 0 && iC != i6) {
                rVar.c();
            }
            if (i7 == 2 && (iC == i6 || rVar.d())) {
                rVar.b(6);
            }
            str = (rVar.d() && rVar.c(6) == 1 && rVar.c(8) == 1) ? "audio/eac3-joc" : "audio/eac3";
        } else {
            rVar.b(32);
            int iC7 = rVar.c(2);
            iA = a(iC7, rVar.c(6));
            rVar.b(8);
            int iC8 = rVar.c(3);
            if ((iC8 & 1) != 0 && iC8 != 1) {
                rVar.b(2);
            }
            if ((iC8 & 4) != 0) {
                rVar.b(2);
            }
            if (iC8 == 2) {
                rVar.b(2);
            }
            i2 = f[iC7];
            i3 = d;
            i4 = h[iC8] + (rVar.d() ? 1 : 0);
            str = "audio/ac3";
        }
        return new a(str, i7, i4, i2, iA, i3, (byte) 0);
    }

    private static int a(byte[] bArr) {
        if (bArr.length < 5) {
            return -1;
        }
        return a((bArr[4] & 192) >> 6, bArr[4] & Utf8.REPLACEMENT_BYTE);
    }

    public static int a(ByteBuffer byteBuffer) {
        return (((byteBuffer.get(byteBuffer.position() + 4) & 192) >> 6) != 3 ? e[(byteBuffer.get(byteBuffer.position() + 4) & com.sigmob.sdk.archives.tar.e.H) >> 4] : 6) * 256;
    }

    public static int b(ByteBuffer byteBuffer) {
        int iPosition = byteBuffer.position();
        int iLimit = byteBuffer.limit() - 10;
        for (int i2 = iPosition; i2 <= iLimit; i2++) {
            if ((byteBuffer.getInt(i2 + 4) & (-16777217)) == -1167101192) {
                return i2 - iPosition;
            }
        }
        return -1;
    }

    private static int b(byte[] bArr) {
        if (bArr[4] == -8 && bArr[5] == 114 && bArr[6] == 111 && (bArr[7] & 254) == 186) {
            return 40 << ((bArr[(bArr[7] & UByte.MAX_VALUE) == 187 ? '\t' : '\b'] >> 4) & 7);
        }
        return 0;
    }

    public static int a(ByteBuffer byteBuffer, int i2) {
        return 40 << ((byteBuffer.get((byteBuffer.position() + i2) + ((byteBuffer.get((byteBuffer.position() + i2) + 7) & UByte.MAX_VALUE) == 187 ? 9 : 8)) >> 4) & 7);
    }

    private static int a(int i2, int i3) {
        int i4 = i3 / 2;
        if (i2 < 0) {
            return -1;
        }
        int[] iArr = f;
        if (i2 >= iArr.length || i3 < 0) {
            return -1;
        }
        int[] iArr2 = j;
        if (i4 >= iArr2.length) {
            return -1;
        }
        int i5 = iArr[i2];
        if (i5 == 44100) {
            return (iArr2[i4] + (i3 % 2)) * 2;
        }
        int i6 = i[i4];
        return i5 == 32000 ? i6 * 6 : i6 * 4;
    }

    private a() {
    }
}
