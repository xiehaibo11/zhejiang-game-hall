package com.huawei.secure.android.common.ssl.hostname;

import com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor;
import cz.msebera.android.httpclient.message.TokenParser;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import javax.security.auth.x500.X500Principal;

public class a {
    private final String a;
    private final int b;
    private int c;
    private int d;
    private int e;
    private int f;
    private char[] g;

    public a(X500Principal x500Principal) {
        String name = x500Principal.getName("RFC2253");
        this.a = name;
        this.b = name.length();
    }

    /* JADX WARN: Code restructure failed: missing block: B:16:0x0053, code lost:
    
        r1 = r8.g;
        r2 = r8.d;
     */
    /* JADX WARN: Code restructure failed: missing block: B:17:0x005f, code lost:
    
        return new java.lang.String(r1, r2, r8.e - r2);
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private String a() {
        int i = this.c;
        this.d = i;
        this.e = i;
        while (true) {
            int i2 = this.c;
            if (i2 < this.b) {
                char[] cArr = this.g;
                char c = cArr[i2];
                if (c == ' ') {
                    int i3 = this.e;
                    this.f = i3;
                    this.c = i2 + 1;
                    this.e = i3 + 1;
                    cArr[i3] = TokenParser.SP;
                    while (true) {
                        int i4 = this.c;
                        if (i4 >= this.b) {
                            break;
                        }
                        char[] cArr2 = this.g;
                        if (cArr2[i4] != ' ') {
                            break;
                        }
                        int i5 = this.e;
                        this.e = i5 + 1;
                        cArr2[i5] = TokenParser.SP;
                        this.c = i4 + 1;
                    }
                    int i6 = this.c;
                    if (i6 == this.b) {
                        break;
                    }
                    char[] cArr3 = this.g;
                    if (cArr3[i6] == ',' || cArr3[i6] == '+' || cArr3[i6] == ';') {
                        break;
                    }
                } else {
                    if (c == ';') {
                        break;
                    }
                    if (c == '\\') {
                        int i7 = this.e;
                        this.e = i7 + 1;
                        cArr[i7] = b();
                        this.c++;
                    } else {
                        if (c == '+' || c == ',') {
                            break;
                        }
                        int i8 = this.e;
                        this.e = i8 + 1;
                        cArr[i8] = cArr[i2];
                        this.c = i2 + 1;
                    }
                }
            } else {
                char[] cArr4 = this.g;
                int i9 = this.d;
                return new String(cArr4, i9, this.e - i9);
            }
        }
        char[] cArr5 = this.g;
        int i10 = this.d;
        return new String(cArr5, i10, this.f - i10);
    }

    private char b() {
        int i = this.c + 1;
        this.c = i;
        if (i == this.b) {
            throw new IllegalStateException("Unexpected end of DN: " + this.a);
        }
        char[] cArr = this.g;
        char c = cArr[i];
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
        return cArr[i];
    }

    private char c() {
        int i;
        int i2;
        int iA = a(this.c);
        this.c++;
        if (iA < 128) {
            return (char) iA;
        }
        if (iA < 192 || iA > 247) {
            return '?';
        }
        if (iA <= 223) {
            i2 = iA & 31;
            i = 1;
        } else if (iA <= 239) {
            i = 2;
            i2 = iA & 15;
        } else {
            i = 3;
            i2 = iA & 7;
        }
        for (int i3 = 0; i3 < i; i3++) {
            int i4 = this.c + 1;
            this.c = i4;
            if (i4 == this.b || this.g[i4] != '\\') {
                return '?';
            }
            int i5 = i4 + 1;
            this.c = i5;
            int iA2 = a(i5);
            this.c++;
            if ((iA2 & PsExtractor.AUDIO_STREAM) != 128) {
                return '?';
            }
            i2 = (i2 << 6) + (iA2 & 63);
        }
        return (char) i2;
    }

    /* JADX WARN: Code restructure failed: missing block: B:28:0x0061, code lost:
    
        r6.e = r6.c;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private String d() {
        int i = this.c;
        if (i + 4 >= this.b) {
            throw new IllegalStateException("Unexpected end of DN: " + this.a);
        }
        this.d = i;
        this.c = i + 1;
        while (true) {
            int i2 = this.c;
            if (i2 == this.b) {
                break;
            }
            char[] cArr = this.g;
            if (cArr[i2] == '+' || cArr[i2] == ',' || cArr[i2] == ';') {
                break;
            }
            if (cArr[i2] == ' ') {
                this.e = i2;
                this.c = i2 + 1;
                while (true) {
                    int i3 = this.c;
                    if (i3 >= this.b || this.g[i3] != ' ') {
                        break;
                    }
                    this.c = i3 + 1;
                }
            } else {
                if (cArr[i2] >= 'A' && cArr[i2] <= 'F') {
                    cArr[i2] = (char) (cArr[i2] + TokenParser.SP);
                }
                this.c++;
            }
        }
        int i4 = this.e;
        int i5 = this.d;
        int i6 = i4 - i5;
        if (i6 < 5 || (i6 & 1) == 0) {
            throw new IllegalStateException("Unexpected end of DN: " + this.a);
        }
        int i7 = i6 / 2;
        byte[] bArr = new byte[i7];
        int i8 = i5 + 1;
        for (int i9 = 0; i9 < i7; i9++) {
            bArr[i9] = (byte) a(i8);
            i8 += 2;
        }
        return new String(this.g, this.d, i6);
    }

    private String e() {
        while (true) {
            int i = this.c;
            if (i >= this.b || this.g[i] != ' ') {
                break;
            }
            this.c = i + 1;
        }
        int i2 = this.c;
        if (i2 == this.b) {
            return null;
        }
        this.d = i2;
        this.c = i2 + 1;
        while (true) {
            int i3 = this.c;
            if (i3 >= this.b) {
                break;
            }
            char[] cArr = this.g;
            if (cArr[i3] == '=' || cArr[i3] == ' ') {
                break;
            }
            this.c = i3 + 1;
        }
        int i4 = this.c;
        if (i4 >= this.b) {
            throw new IllegalStateException("Unexpected end of DN: " + this.a);
        }
        this.e = i4;
        if (this.g[i4] == ' ') {
            while (true) {
                int i5 = this.c;
                if (i5 >= this.b) {
                    break;
                }
                char[] cArr2 = this.g;
                if (cArr2[i5] == '=' || cArr2[i5] != ' ') {
                    break;
                }
                this.c = i5 + 1;
            }
            char[] cArr3 = this.g;
            int i6 = this.c;
            if (cArr3[i6] != '=' || i6 == this.b) {
                throw new IllegalStateException("Unexpected end of DN: " + this.a);
            }
        }
        this.c++;
        while (true) {
            int i7 = this.c;
            if (i7 >= this.b || this.g[i7] != ' ') {
                break;
            }
            this.c = i7 + 1;
        }
        int i8 = this.e;
        int i9 = this.d;
        if (i8 - i9 > 4) {
            char[] cArr4 = this.g;
            if (cArr4[i9 + 3] == '.' && (cArr4[i9] == 'O' || cArr4[i9] == 'o')) {
                char[] cArr5 = this.g;
                int i10 = this.d + 1;
                if (cArr5[i10] == 'I' || cArr5[i10] == 'i') {
                    char[] cArr6 = this.g;
                    int i11 = this.d + 2;
                    if (cArr6[i11] == 'D' || cArr6[i11] == 'd') {
                        this.d += 4;
                    }
                }
            }
        }
        char[] cArr7 = this.g;
        int i12 = this.d;
        return new String(cArr7, i12, this.e - i12);
    }

    private String f() {
        int i = this.c + 1;
        this.c = i;
        this.d = i;
        this.e = i;
        while (true) {
            int i2 = this.c;
            if (i2 == this.b) {
                throw new IllegalStateException("Unexpected end of DN: " + this.a);
            }
            char[] cArr = this.g;
            if (cArr[i2] == '\"') {
                this.c = i2 + 1;
                while (true) {
                    int i3 = this.c;
                    if (i3 >= this.b || this.g[i3] != ' ') {
                        break;
                    }
                    this.c = i3 + 1;
                }
                char[] cArr2 = this.g;
                int i4 = this.d;
                return new String(cArr2, i4, this.e - i4);
            }
            if (cArr[i2] == '\\') {
                cArr[this.e] = b();
            } else {
                cArr[this.e] = cArr[i2];
            }
            this.c++;
            this.e++;
        }
    }

    public List<String> b(String str) {
        String strF;
        this.c = 0;
        this.d = 0;
        this.e = 0;
        this.f = 0;
        this.g = this.a.toCharArray();
        List<String> listEmptyList = Collections.emptyList();
        String strE = e();
        if (strE == null) {
            return listEmptyList;
        }
        do {
            int i = this.c;
            if (i < this.b) {
                char c = this.g[i];
                if (c == '\"') {
                    strF = f();
                } else if (c != '#') {
                    strF = (c == '+' || c == ',' || c == ';') ? "" : a();
                } else {
                    strF = d();
                }
                if (str.equalsIgnoreCase(strE)) {
                    if (listEmptyList.isEmpty()) {
                        listEmptyList = new ArrayList<>();
                    }
                    listEmptyList.add(strF);
                }
                int i2 = this.c;
                if (i2 < this.b) {
                    char[] cArr = this.g;
                    if (cArr[i2] != ',' && cArr[i2] != ';' && cArr[i2] != '+') {
                        throw new IllegalStateException("Malformed DN: " + this.a);
                    }
                    this.c++;
                    strE = e();
                }
            }
            return listEmptyList;
        } while (strE != null);
        throw new IllegalStateException("Malformed DN: " + this.a);
    }

    private int a(int i) {
        int i2;
        int i3;
        int i4 = i + 1;
        if (i4 < this.b) {
            char c = this.g[i];
            if (c >= '0' && c <= '9') {
                i2 = c - '0';
            } else if (c >= 'a' && c <= 'f') {
                i2 = c - 'W';
            } else {
                if (c < 'A' || c > 'F') {
                    throw new IllegalStateException("Malformed DN: " + this.a);
                }
                i2 = c - '7';
            }
            char c2 = this.g[i4];
            if (c2 >= '0' && c2 <= '9') {
                i3 = c2 - '0';
            } else if (c2 >= 'a' && c2 <= 'f') {
                i3 = c2 - 'W';
            } else {
                if (c2 < 'A' || c2 > 'F') {
                    throw new IllegalStateException("Malformed DN: " + this.a);
                }
                i3 = c2 - '7';
            }
            return (i2 << 4) + i3;
        }
        throw new IllegalStateException("Malformed DN: " + this.a);
    }

    public String a(String str) {
        String strF;
        this.c = 0;
        this.d = 0;
        this.e = 0;
        this.f = 0;
        this.g = this.a.toCharArray();
        String strE = e();
        if (strE == null) {
            return null;
        }
        do {
            int i = this.c;
            if (i == this.b) {
                return null;
            }
            char c = this.g[i];
            if (c == '\"') {
                strF = f();
            } else if (c != '#') {
                strF = (c == '+' || c == ',' || c == ';') ? "" : a();
            } else {
                strF = d();
            }
            if (str.equalsIgnoreCase(strE)) {
                return strF;
            }
            int i2 = this.c;
            if (i2 >= this.b) {
                return null;
            }
            char[] cArr = this.g;
            if (cArr[i2] != ',' && cArr[i2] != ';' && cArr[i2] != '+') {
                throw new IllegalStateException("Malformed DN: " + this.a);
            }
            this.c++;
            strE = e();
        } while (strE != null);
        throw new IllegalStateException("Malformed DN: " + this.a);
    }
}
