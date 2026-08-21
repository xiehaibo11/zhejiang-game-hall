package com.bykv.vk.openvk.api.plugin.rg;

import com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor;
import cz.msebera.android.httpclient.message.TokenParser;
import javax.security.auth.x500.X500Principal;

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
    */
    private String q() {
        int i = this.q;
        if (i + 4 >= this.df) {
            throw new IllegalStateException("Unexpected end of DN: " + this.rg);
        }
        this.pt = i;
        this.q = i + 1;
        while (true) {
            int i2 = this.q;
            if (i2 == this.df) {
                break;
            }
            char[] cArr = this.fw;
            if (cArr[i2] == '+' || cArr[i2] == ',' || cArr[i2] == ';') {
                break;
            }
            if (cArr[i2] == ' ') {
                this.pp = i2;
                this.q = i2 + 1;
                while (true) {
                    int i3 = this.q;
                    if (i3 >= this.df || this.fw[i3] != ' ') {
                        break;
                    }
                    this.q = i3 + 1;
                }
            } else {
                if (cArr[i2] >= 'A' && cArr[i2] <= 'F') {
                    cArr[i2] = (char) (cArr[i2] + TokenParser.SP);
                }
                this.q++;
            }
        }
        int i4 = this.pp;
        int i5 = this.pt;
        int i6 = i4 - i5;
        if (i6 < 5 || (i6 & 1) == 0) {
            throw new IllegalStateException("Unexpected end of DN: " + this.rg);
        }
        int i7 = i6 / 2;
        byte[] bArr = new byte[i7];
        int i8 = i5 + 1;
        for (int i9 = 0; i9 < i7; i9++) {
            bArr[i9] = (byte) rg(i8);
            i8 += 2;
        }
        return new String(this.fw, this.pt, i6);
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
    */
    private String pt() {
        int i = this.q;
        this.pt = i;
        this.pp = i;
        while (true) {
            int i2 = this.q;
            if (i2 >= this.df) {
                char[] cArr = this.fw;
                int i3 = this.pt;
                return new String(cArr, i3, this.pp - i3);
            }
            char[] cArr2 = this.fw;
            char c = cArr2[i2];
            if (c == ' ') {
                int i4 = this.pp;
                this.c = i4;
                this.q = i2 + 1;
                this.pp = i4 + 1;
                cArr2[i4] = TokenParser.SP;
                while (true) {
                    int i5 = this.q;
                    if (i5 >= this.df) {
                        break;
                    }
                    char[] cArr3 = this.fw;
                    if (cArr3[i5] != ' ') {
                        break;
                    }
                    int i6 = this.pp;
                    this.pp = i6 + 1;
                    cArr3[i6] = TokenParser.SP;
                    this.q = i5 + 1;
                }
                int i7 = this.q;
                if (i7 == this.df) {
                    break;
                }
                char[] cArr4 = this.fw;
                if (cArr4[i7] == ',' || cArr4[i7] == '+' || cArr4[i7] == ';') {
                    break;
                }
            } else {
                if (c == ';') {
                    break;
                }
                if (c == '\\') {
                    int i8 = this.pp;
                    this.pp = i8 + 1;
                    cArr2[i8] = pp();
                    this.q++;
                } else {
                    if (c == '+' || c == ',') {
                        break;
                    }
                    int i9 = this.pp;
                    this.pp = i9 + 1;
                    cArr2[i9] = cArr2[i2];
                    this.q = i2 + 1;
                }
            }
        }
        char[] cArr5 = this.fw;
        int i10 = this.pt;
        return new String(cArr5, i10, this.c - i10);
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
