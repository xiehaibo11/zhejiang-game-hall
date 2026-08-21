package com.bykv.vk.openvk.api.plugin.rg;

import com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor;
import javax.security.auth.x500.X500Principal;

/* JADX INFO: loaded from: classes.dex */
final class df {
    private int c;
    private final int df;
    private char[] fw;
    private int pp;
    private int pt;
    private int q;
    private final String rg;

    df(X500Principal x500Principal) {
        String name = x500Principal.getName("RFC2253");
        this.rg = name;
        this.df = name.length();
    }

    private String rg() {
        while (true) {
            int i = this.q;
            if (i >= this.df || this.fw[i] != ' ') {
                break;
            }
            this.q = i + 1;
        }
        int i2 = this.q;
        if (i2 == this.df) {
            return null;
        }
        this.pt = i2;
        this.q = i2 + 1;
        while (true) {
            int i3 = this.q;
            if (i3 >= this.df) {
                break;
            }
            char[] cArr = this.fw;
            if (cArr[i3] == '=' || cArr[i3] == ' ') {
                break;
            }
            this.q = i3 + 1;
        }
        int i4 = this.q;
        if (i4 >= this.df) {
            throw new IllegalStateException("Unexpected end of DN: " + this.rg);
        }
        this.pp = i4;
        if (this.fw[i4] == ' ') {
            while (true) {
                int i5 = this.q;
                if (i5 >= this.df) {
                    break;
                }
                char[] cArr2 = this.fw;
                if (cArr2[i5] == '=' || cArr2[i5] != ' ') {
                    break;
                }
                this.q = i5 + 1;
            }
            char[] cArr3 = this.fw;
            int i6 = this.q;
            if (cArr3[i6] != '=' || i6 == this.df) {
                throw new IllegalStateException("Unexpected end of DN: " + this.rg);
            }
        }
        this.q++;
        while (true) {
            int i7 = this.q;
            if (i7 >= this.df || this.fw[i7] != ' ') {
                break;
            }
            this.q = i7 + 1;
        }
        int i8 = this.pp;
        int i9 = this.pt;
        if (i8 - i9 > 4) {
            char[] cArr4 = this.fw;
            if (cArr4[i9 + 3] == '.' && (cArr4[i9] == 'O' || cArr4[i9] == 'o')) {
                char[] cArr5 = this.fw;
                int i10 = this.pt;
                if (cArr5[i10 + 1] == 'I' || cArr5[i10 + 1] == 'i') {
                    char[] cArr6 = this.fw;
                    int i11 = this.pt;
                    if (cArr6[i11 + 2] == 'D' || cArr6[i11 + 2] == 'd') {
                        this.pt += 4;
                    }
                }
            }
        }
        char[] cArr7 = this.fw;
        int i12 = this.pt;
        return new String(cArr7, i12, this.pp - i12);
    }

    private String df() {
        int i = this.q + 1;
        this.q = i;
        this.pt = i;
        this.pp = i;
        while (true) {
            int i2 = this.q;
            if (i2 == this.df) {
                throw new IllegalStateException("Unexpected end of DN: " + this.rg);
            }
            char[] cArr = this.fw;
            if (cArr[i2] == '\"') {
                this.q = i2 + 1;
                while (true) {
                    int i3 = this.q;
                    if (i3 >= this.df || this.fw[i3] != ' ') {
                        break;
                    }
                    this.q = i3 + 1;
                }
                char[] cArr2 = this.fw;
                int i4 = this.pt;
                return new String(cArr2, i4, this.pp - i4);
            }
            if (cArr[i2] == '\\') {
                cArr[this.pp] = pp();
            } else {
                cArr[this.pp] = cArr[i2];
            }
            this.q++;
            this.pp++;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:28:0x0061, code lost:
    
        r6.pp = r6.q;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private java.lang.String q() {
        /*
            r6 = this;
            int r0 = r6.q
            int r1 = r0 + 4
            int r2 = r6.df
            java.lang.String r3 = "Unexpected end of DN: "
            if (r1 >= r2) goto La7
            r6.pt = r0
            int r0 = r0 + 1
            r6.q = r0
        L10:
            int r0 = r6.q
            int r1 = r6.df
            if (r0 == r1) goto L61
            char[] r1 = r6.fw
            char r2 = r1[r0]
            r4 = 43
            if (r2 == r4) goto L61
            char r2 = r1[r0]
            r4 = 44
            if (r2 == r4) goto L61
            char r2 = r1[r0]
            r4 = 59
            if (r2 != r4) goto L2b
            goto L61
        L2b:
            char r2 = r1[r0]
            r4 = 32
            if (r2 != r4) goto L48
            r6.pp = r0
            int r0 = r0 + 1
            r6.q = r0
        L37:
            int r0 = r6.q
            int r1 = r6.df
            if (r0 >= r1) goto L65
            char[] r1 = r6.fw
            char r1 = r1[r0]
            if (r1 != r4) goto L65
            int r0 = r0 + 1
            r6.q = r0
            goto L37
        L48:
            char r2 = r1[r0]
            r5 = 65
            if (r2 < r5) goto L5a
            char r2 = r1[r0]
            r5 = 70
            if (r2 > r5) goto L5a
            char r2 = r1[r0]
            int r2 = r2 + r4
            char r2 = (char) r2
            r1[r0] = r2
        L5a:
            int r0 = r6.q
            int r0 = r0 + 1
            r6.q = r0
            goto L10
        L61:
            int r0 = r6.q
            r6.pp = r0
        L65:
            int r0 = r6.pp
            int r1 = r6.pt
            int r0 = r0 - r1
            r2 = 5
            if (r0 < r2) goto L90
            r2 = r0 & 1
            if (r2 == 0) goto L90
            int r2 = r0 / 2
            byte[] r3 = new byte[r2]
            r4 = 0
            int r1 = r1 + 1
        L78:
            if (r4 >= r2) goto L86
            int r5 = r6.rg(r1)
            byte r5 = (byte) r5
            r3[r4] = r5
            int r1 = r1 + 2
            int r4 = r4 + 1
            goto L78
        L86:
            java.lang.String r1 = new java.lang.String
            char[] r2 = r6.fw
            int r3 = r6.pt
            r1.<init>(r2, r3, r0)
            return r1
        L90:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r2 = r6.rg
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        La7:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r2 = r6.rg
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.bykv.vk.openvk.api.plugin.rg.df.q():java.lang.String");
    }

    /* JADX WARN: Code restructure failed: missing block: B:16:0x0053, code lost:
    
        r1 = r8.fw;
        r2 = r8.pt;
     */
    /* JADX WARN: Code restructure failed: missing block: B:17:0x005f, code lost:
    
        return new java.lang.String(r1, r2, r8.pp - r2);
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private java.lang.String pt() {
        /*
            r8 = this;
            int r0 = r8.q
            r8.pt = r0
            r8.pp = r0
        L6:
            int r0 = r8.q
            int r1 = r8.df
            if (r0 < r1) goto L19
            java.lang.String r0 = new java.lang.String
            char[] r1 = r8.fw
            int r2 = r8.pt
            int r3 = r8.pp
            int r3 = r3 - r2
            r0.<init>(r1, r2, r3)
            return r0
        L19:
            char[] r1 = r8.fw
            char r2 = r1[r0]
            r3 = 44
            r4 = 43
            r5 = 59
            r6 = 32
            if (r2 == r6) goto L60
            if (r2 == r5) goto L53
            r5 = 92
            if (r2 == r5) goto L40
            if (r2 == r4) goto L53
            if (r2 == r3) goto L53
            int r2 = r8.pp
            int r3 = r2 + 1
            r8.pp = r3
            char r3 = r1[r0]
            r1[r2] = r3
            int r0 = r0 + 1
            r8.q = r0
            goto L6
        L40:
            int r0 = r8.pp
            int r2 = r0 + 1
            r8.pp = r2
            char r2 = r8.pp()
            r1[r0] = r2
            int r0 = r8.q
            int r0 = r0 + 1
            r8.q = r0
            goto L6
        L53:
            java.lang.String r0 = new java.lang.String
            char[] r1 = r8.fw
            int r2 = r8.pt
            int r3 = r8.pp
            int r3 = r3 - r2
            r0.<init>(r1, r2, r3)
            return r0
        L60:
            int r2 = r8.pp
            r8.c = r2
            int r0 = r0 + 1
            r8.q = r0
            int r0 = r2 + 1
            r8.pp = r0
            r1[r2] = r6
        L6e:
            int r0 = r8.q
            int r1 = r8.df
            if (r0 >= r1) goto L87
            char[] r1 = r8.fw
            char r2 = r1[r0]
            if (r2 != r6) goto L87
            int r2 = r8.pp
            int r7 = r2 + 1
            r8.pp = r7
            r1[r2] = r6
            int r0 = r0 + 1
            r8.q = r0
            goto L6e
        L87:
            int r0 = r8.q
            int r1 = r8.df
            if (r0 == r1) goto L9b
            char[] r1 = r8.fw
            char r2 = r1[r0]
            if (r2 == r3) goto L9b
            char r2 = r1[r0]
            if (r2 == r4) goto L9b
            char r0 = r1[r0]
            if (r0 != r5) goto L6
        L9b:
            java.lang.String r0 = new java.lang.String
            char[] r1 = r8.fw
            int r2 = r8.pt
            int r3 = r8.c
            int r3 = r3 - r2
            r0.<init>(r1, r2, r3)
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.bykv.vk.openvk.api.plugin.rg.df.pt():java.lang.String");
    }

    private char pp() {
        int i = this.q + 1;
        this.q = i;
        if (i == this.df) {
            throw new IllegalStateException("Unexpected end of DN: " + this.rg);
        }
        char c = this.fw[i];
        if (c != ' ' && c != '%' && c != '\\' && c != '_' && c != '\"' && c != '#') {
            switch (c) {
                case '*':
                case '+':
                case ',':
                    break;
                default:
                    switch (c) {
                        case ';':
                        case '<':
                        case '=':
                        case '>':
                            break;
                        default:
                            return c();
                    }
                    break;
            }
        }
        return this.fw[this.q];
    }

    private char c() {
        int i;
        int i2;
        int iRg = rg(this.q);
        this.q++;
        if (iRg < 128) {
            return (char) iRg;
        }
        if (iRg < 192 || iRg > 247) {
            return '?';
        }
        if (iRg <= 223) {
            i2 = iRg & 31;
            i = 1;
        } else if (iRg <= 239) {
            i = 2;
            i2 = iRg & 15;
        } else {
            i = 3;
            i2 = iRg & 7;
        }
        for (int i3 = 0; i3 < i; i3++) {
            int i4 = this.q + 1;
            this.q = i4;
            if (i4 == this.df || this.fw[i4] != '\\') {
                return '?';
            }
            int i5 = i4 + 1;
            this.q = i5;
            int iRg2 = rg(i5);
            this.q++;
            if ((iRg2 & PsExtractor.AUDIO_STREAM) != 128) {
                return '?';
            }
            i2 = (i2 << 6) + (iRg2 & 63);
        }
        return (char) i2;
    }

    private int rg(int i) {
        int i2;
        int i3;
        int i4 = i + 1;
        if (i4 >= this.df) {
            throw new IllegalStateException("Malformed DN: " + this.rg);
        }
        char c = this.fw[i];
        if (c >= '0' && c <= '9') {
            i2 = c - '0';
        } else if (c >= 'a' && c <= 'f') {
            i2 = c - 'W';
        } else {
            if (c < 'A' || c > 'F') {
                throw new IllegalStateException("Malformed DN: " + this.rg);
            }
            i2 = c - '7';
        }
        char c2 = this.fw[i4];
        if (c2 >= '0' && c2 <= '9') {
            i3 = c2 - '0';
        } else if (c2 >= 'a' && c2 <= 'f') {
            i3 = c2 - 'W';
        } else {
            if (c2 < 'A' || c2 > 'F') {
                throw new IllegalStateException("Malformed DN: " + this.rg);
            }
            i3 = c2 - '7';
        }
        return (i2 << 4) + i3;
    }

    public String rg(String str) {
        String strDf;
        this.q = 0;
        this.pt = 0;
        this.pp = 0;
        this.c = 0;
        this.fw = this.rg.toCharArray();
        String strRg = rg();
        if (strRg == null) {
            return null;
        }
        do {
            int i = this.q;
            if (i == this.df) {
                return null;
            }
            char c = this.fw[i];
            if (c == '\"') {
                strDf = df();
            } else if (c == '#') {
                strDf = q();
            } else {
                strDf = (c == '+' || c == ',' || c == ';') ? "" : pt();
            }
            if (str.equalsIgnoreCase(strRg)) {
                return strDf;
            }
            int i2 = this.q;
            if (i2 >= this.df) {
                return null;
            }
            char[] cArr = this.fw;
            if (cArr[i2] != ',' && cArr[i2] != ';' && cArr[i2] != '+') {
                throw new IllegalStateException("Malformed DN: " + this.rg);
            }
            this.q++;
            strRg = rg();
        } while (strRg != null);
        throw new IllegalStateException("Malformed DN: " + this.rg);
    }
}
