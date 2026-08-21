package com.tkay.expressad.exoplayer.e.a;

import android.util.Log;
import com.tkay.expressad.exoplayer.g.a;
import com.tkay.expressad.exoplayer.k.af;
import com.tkay.expressad.exoplayer.k.s;
import cz.msebera.android.httpclient.HttpHeaders;

/* JADX INFO: loaded from: classes3.dex */
final class f {
    private static final String F = "und";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f6560a = "MetadataUtil";
    private static final int b = af.f("nam");
    private static final int c = af.f("trk");
    private static final int d = af.f("cmt");
    private static final int e = af.f("day");
    private static final int f = af.f("ART");
    private static final int g = af.f("too");
    private static final int h = af.f("alb");
    private static final int i = af.f("com");
    private static final int j = af.f("wrt");
    private static final int k = af.f("lyr");
    private static final int l = af.f("gen");
    private static final int m = af.f("covr");
    private static final int n = af.f("gnre");
    private static final int o = af.f("grp");
    private static final int p = af.f("disk");
    private static final int q = af.f("trkn");
    private static final int r = af.f("tmpo");
    private static final int s = af.f("cpil");
    private static final int t = af.f("aART");
    private static final int u = af.f("sonm");
    private static final int v = af.f("soal");
    private static final int w = af.f("soar");
    private static final int x = af.f("soaa");
    private static final int y = af.f("soco");
    private static final int z = af.f("rtng");
    private static final int A = af.f("pgap");
    private static final int B = af.f("sosn");
    private static final int C = af.f("tvsh");
    private static final int D = af.f("----");
    private static final String[] E = {"Blues", "Classic Rock", "Country", "Dance", "Disco", "Funk", "Grunge", "Hip-Hop", "Jazz", "Metal", "New Age", "Oldies", "Other", "Pop", "R&B", "Rap", "Reggae", "Rock", "Techno", "Industrial", "Alternative", "Ska", "Death Metal", "Pranks", "Soundtrack", "Euro-Techno", "Ambient", "Trip-Hop", "Vocal", "Jazz+Funk", "Fusion", "Trance", "Classical", "Instrumental", "Acid", "House", "Game", "Sound Clip", "Gospel", "Noise", "AlternRock", "Bass", "Soul", "Punk", "Space", "Meditative", "Instrumental Pop", "Instrumental Rock", "Ethnic", "Gothic", "Darkwave", "Techno-Industrial", "Electronic", "Pop-Folk", "Eurodance", "Dream", "Southern Rock", "Comedy", "Cult", "Gangsta", "Top 40", "Christian Rap", "Pop/Funk", "Jungle", "Native American", "Cabaret", "New Wave", "Psychadelic", "Rave", "Showtunes", HttpHeaders.TRAILER, "Lo-Fi", "Tribal", "Acid Punk", "Acid Jazz", "Polka", "Retro", "Musical", "Rock & Roll", "Hard Rock", "Folk", "Folk-Rock", "National Folk", "Swing", "Fast Fusion", "Bebob", "Latin", "Revival", "Celtic", "Bluegrass", "Avantgarde", "Gothic Rock", "Progressive Rock", "Psychedelic Rock", "Symphonic Rock", "Slow Rock", "Big Band", "Chorus", "Easy Listening", "Acoustic", "Humour", "Speech", "Chanson", "Opera", "Chamber Music", "Sonata", "Symphony", "Booty Bass", "Primus", "Porn Groove", "Satire", "Slow Jam", "Club", "Tango", "Samba", "Folklore", "Ballad", "Power Ballad", "Rhythmic Soul", "Freestyle", "Duet", "Punk Rock", "Drum Solo", "A capella", "Euro-House", "Dance Hall", "Goa", "Drum & Bass", "Club-House", "Hardcore", "Terror", "Indie", "BritPop", "Negerpunk", "Polsk Punk", "Beat", "Christian Gangsta Rap", "Heavy Metal", "Black Metal", "Crossover", "Contemporary Christian", "Christian Rock", "Merengue", "Salsa", "Thrash Metal", "Anime", "Jpop", "Synthpop"};

    private f() {
    }

    public static a.InterfaceC0446a a(s sVar) {
        int iC = sVar.c() + sVar.i();
        int i2 = sVar.i();
        int i3 = (i2 >> 24) & 255;
        a.InterfaceC0446a eVar = null;
        try {
            if (i3 == 169 || i3 == 65533) {
                int i4 = 16777215 & i2;
                if (i4 == d) {
                    int i5 = sVar.i();
                    if (sVar.i() == a.aK) {
                        sVar.d(8);
                        String strE = sVar.e(i5 - 16);
                        eVar = new com.tkay.expressad.exoplayer.g.b.e("und", strE, strE);
                    } else {
                        Log.w(f6560a, "Failed to parse comment attribute: " + a.c(i2));
                    }
                    return eVar;
                }
                if (i4 != b && i4 != c) {
                    if (i4 != i && i4 != j) {
                        if (i4 == e) {
                            return a(i2, "TDRC", sVar);
                        }
                        if (i4 == f) {
                            return a(i2, "TPE1", sVar);
                        }
                        if (i4 == g) {
                            return a(i2, "TSSE", sVar);
                        }
                        if (i4 == h) {
                            return a(i2, "TALB", sVar);
                        }
                        if (i4 == k) {
                            return a(i2, "USLT", sVar);
                        }
                        if (i4 == l) {
                            return a(i2, "TCON", sVar);
                        }
                        if (i4 == o) {
                            return a(i2, "TIT1", sVar);
                        }
                    }
                    return a(i2, "TCOM", sVar);
                }
                return a(i2, "TIT2", sVar);
            }
            if (i2 == n) {
                int iD = d(sVar);
                String str = (iD <= 0 || iD > E.length) ? null : E[iD - 1];
                if (str != null) {
                    eVar = new com.tkay.expressad.exoplayer.g.b.k("TCON", null, str);
                } else {
                    Log.w(f6560a, "Failed to parse standard genre code");
                }
                return eVar;
            }
            if (i2 == p) {
                return b(i2, "TPOS", sVar);
            }
            if (i2 == q) {
                return b(i2, "TRCK", sVar);
            }
            if (i2 == r) {
                return a(i2, "TBPM", sVar, true, false);
            }
            if (i2 == s) {
                return a(i2, "TCMP", sVar, true, true);
            }
            if (i2 == m) {
                int i6 = sVar.i();
                if (sVar.i() == a.aK) {
                    int iB = a.b(sVar.i());
                    String str2 = iB == 13 ? "image/jpeg" : iB == 14 ? "image/png" : null;
                    if (str2 == null) {
                        Log.w(f6560a, "Unrecognized cover art flags: ".concat(String.valueOf(iB)));
                    } else {
                        sVar.d(4);
                        int i7 = i6 - 16;
                        byte[] bArr = new byte[i7];
                        sVar.a(bArr, 0, i7);
                        eVar = new com.tkay.expressad.exoplayer.g.b.a(str2, null, 3, bArr);
                    }
                } else {
                    Log.w(f6560a, "Failed to parse cover art attribute");
                }
                return eVar;
            }
            if (i2 == t) {
                return a(i2, "TPE2", sVar);
            }
            if (i2 == u) {
                return a(i2, "TSOT", sVar);
            }
            if (i2 == v) {
                return a(i2, "TSO2", sVar);
            }
            if (i2 == w) {
                return a(i2, "TSOA", sVar);
            }
            if (i2 == x) {
                return a(i2, "TSOP", sVar);
            }
            if (i2 == y) {
                return a(i2, "TSOC", sVar);
            }
            if (i2 == z) {
                return a(i2, "ITUNESADVISORY", sVar, false, false);
            }
            if (i2 == A) {
                return a(i2, "ITUNESGAPLESS", sVar, false, true);
            }
            if (i2 == B) {
                return a(i2, "TVSHOWSORT", sVar);
            }
            if (i2 == C) {
                return a(i2, "TVSHOW", sVar);
            }
            if (i2 == D) {
                return a(sVar, iC);
            }
            Log.d(f6560a, "Skipped unknown metadata entry: " + a.c(i2));
            return null;
        } finally {
            sVar.c(iC);
        }
    }

    private static com.tkay.expressad.exoplayer.g.b.k a(int i2, String str, s sVar) {
        int i3 = sVar.i();
        if (sVar.i() == a.aK) {
            sVar.d(8);
            return new com.tkay.expressad.exoplayer.g.b.k(str, null, sVar.e(i3 - 16));
        }
        Log.w(f6560a, "Failed to parse text attribute: " + a.c(i2));
        return null;
    }

    private static com.tkay.expressad.exoplayer.g.b.e a(int i2, s sVar) {
        int i3 = sVar.i();
        if (sVar.i() == a.aK) {
            sVar.d(8);
            String strE = sVar.e(i3 - 16);
            return new com.tkay.expressad.exoplayer.g.b.e("und", strE, strE);
        }
        Log.w(f6560a, "Failed to parse comment attribute: " + a.c(i2));
        return null;
    }

    private static com.tkay.expressad.exoplayer.g.b.h a(int i2, String str, s sVar, boolean z2, boolean z3) {
        int iD = d(sVar);
        if (z3) {
            iD = Math.min(1, iD);
        }
        if (iD >= 0) {
            if (z2) {
                return new com.tkay.expressad.exoplayer.g.b.k(str, null, Integer.toString(iD));
            }
            return new com.tkay.expressad.exoplayer.g.b.e("und", str, Integer.toString(iD));
        }
        Log.w(f6560a, "Failed to parse uint8 attribute: " + a.c(i2));
        return null;
    }

    private static com.tkay.expressad.exoplayer.g.b.k b(int i2, String str, s sVar) {
        int i3 = sVar.i();
        if (sVar.i() == a.aK && i3 >= 22) {
            sVar.d(10);
            int iE = sVar.e();
            if (iE > 0) {
                String strValueOf = String.valueOf(iE);
                int iE2 = sVar.e();
                if (iE2 > 0) {
                    strValueOf = strValueOf + "/" + iE2;
                }
                return new com.tkay.expressad.exoplayer.g.b.k(str, null, strValueOf);
            }
        }
        Log.w(f6560a, "Failed to parse index/count attribute: " + a.c(i2));
        return null;
    }

    /* JADX WARN: Removed duplicated region for block: B:7:0x0011  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static com.tkay.expressad.exoplayer.g.b.k b(com.tkay.expressad.exoplayer.k.s r3) {
        /*
            int r3 = d(r3)
            r0 = 0
            if (r3 <= 0) goto L11
            java.lang.String[] r1 = com.tkay.expressad.exoplayer.e.a.f.E
            int r2 = r1.length
            if (r3 > r2) goto L11
            int r3 = r3 + (-1)
            r3 = r1[r3]
            goto L12
        L11:
            r3 = r0
        L12:
            if (r3 == 0) goto L1c
            com.tkay.expressad.exoplayer.g.b.k r1 = new com.tkay.expressad.exoplayer.g.b.k
            java.lang.String r2 = "TCON"
            r1.<init>(r2, r0, r3)
            return r1
        L1c:
            java.lang.String r3 = "MetadataUtil"
            java.lang.String r1 = "Failed to parse standard genre code"
            android.util.Log.w(r3, r1)
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.e.a.f.b(com.tkay.expressad.exoplayer.k.s):com.tkay.expressad.exoplayer.g.b.k");
    }

    private static com.tkay.expressad.exoplayer.g.b.a c(s sVar) {
        int i2 = sVar.i();
        if (sVar.i() == a.aK) {
            int iB = a.b(sVar.i());
            String str = iB == 13 ? "image/jpeg" : iB == 14 ? "image/png" : null;
            if (str == null) {
                Log.w(f6560a, "Unrecognized cover art flags: ".concat(String.valueOf(iB)));
                return null;
            }
            sVar.d(4);
            int i3 = i2 - 16;
            byte[] bArr = new byte[i3];
            sVar.a(bArr, 0, i3);
            return new com.tkay.expressad.exoplayer.g.b.a(str, null, 3, bArr);
        }
        Log.w(f6560a, "Failed to parse cover art attribute");
        return null;
    }

    private static com.tkay.expressad.exoplayer.g.b.h a(s sVar, int i2) {
        int i3 = -1;
        int i4 = -1;
        String strE = null;
        String strE2 = null;
        while (sVar.c() < i2) {
            int iC = sVar.c();
            int i5 = sVar.i();
            int i6 = sVar.i();
            sVar.d(4);
            if (i6 == a.aI) {
                strE = sVar.e(i5 - 12);
            } else if (i6 == a.aJ) {
                strE2 = sVar.e(i5 - 12);
            } else {
                if (i6 == a.aK) {
                    i3 = iC;
                    i4 = i5;
                }
                sVar.d(i5 - 12);
            }
        }
        if (strE == null || strE2 == null || i3 == -1) {
            return null;
        }
        sVar.c(i3);
        sVar.d(16);
        return new com.tkay.expressad.exoplayer.g.b.i(strE, strE2, sVar.e(i4 - 16));
    }

    private static int d(s sVar) {
        sVar.d(4);
        if (sVar.i() == a.aK) {
            sVar.d(8);
            return sVar.d();
        }
        Log.w(f6560a, "Failed to parse uint8 attribute value");
        return -1;
    }
}
