package com.tkay.expressad.exoplayer.e;

import com.tkay.expressad.exoplayer.g.a;
import com.tkay.expressad.exoplayer.g.b.g;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* JADX INFO: loaded from: classes3.dex */
public final class i {
    private static final String d = "com.apple.iTunes";
    private static final String e = "iTunSMPB";
    public int b = -1;
    public int c = -1;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final g.a f6572a = new g.a() { // from class: com.tkay.expressad.exoplayer.e.i.1
        @Override // com.tkay.expressad.exoplayer.g.b.g.a
        public final boolean a(int i, int i2, int i3, int i4, int i5) {
            if (i2 == 67 && i3 == 79 && i4 == 77) {
                return i5 == 77 || i == 2;
            }
            return false;
        }
    };
    private static final Pattern f = Pattern.compile("^ [0-9a-fA-F]{8} ([0-9a-fA-F]{8}) ([0-9a-fA-F]{8})");

    private boolean a(int i) {
        int i2 = i >> 12;
        int i3 = i & 4095;
        if (i2 <= 0 && i3 <= 0) {
            return false;
        }
        this.b = i2;
        this.c = i3;
        return true;
    }

    public final boolean a(com.tkay.expressad.exoplayer.g.a aVar) {
        for (int i = 0; i < aVar.a(); i++) {
            a.InterfaceC0446a interfaceC0446aA = aVar.a(i);
            if (interfaceC0446aA instanceof com.tkay.expressad.exoplayer.g.b.e) {
                com.tkay.expressad.exoplayer.g.b.e eVar = (com.tkay.expressad.exoplayer.g.b.e) interfaceC0446aA;
                if (e.equals(eVar.c) && a(eVar.d)) {
                    return true;
                }
            } else if (interfaceC0446aA instanceof com.tkay.expressad.exoplayer.g.b.i) {
                com.tkay.expressad.exoplayer.g.b.i iVar = (com.tkay.expressad.exoplayer.g.b.i) interfaceC0446aA;
                if (d.equals(iVar.b) && e.equals(iVar.c) && a(iVar.d)) {
                    return true;
                }
            } else {
                continue;
            }
        }
        return false;
    }

    private boolean a(String str) {
        Matcher matcher = f.matcher(str);
        if (!matcher.find()) {
            return false;
        }
        try {
            int i = Integer.parseInt(matcher.group(1), 16);
            int i2 = Integer.parseInt(matcher.group(2), 16);
            if (i <= 0 && i2 <= 0) {
                return false;
            }
            this.b = i;
            this.c = i2;
            return true;
        } catch (NumberFormatException unused) {
            return false;
        }
    }

    public final boolean a() {
        return (this.b == -1 || this.c == -1) ? false : true;
    }
}
