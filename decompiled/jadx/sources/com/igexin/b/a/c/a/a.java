package com.igexin.b.a.c.a;

import com.igexin.sdk.IUserLoggerInterface;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor;

/* JADX INFO: loaded from: classes2.dex */
public class a implements b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private IUserLoggerInterface f2443a;
    private final StringBuffer b = new StringBuffer();

    private void b() {
        if (this.b.length() > 0) {
            if (this.b.toString().contains("\n")) {
                for (String str : this.b.toString().split("\n")) {
                    IUserLoggerInterface iUserLoggerInterface = this.f2443a;
                    if (iUserLoggerInterface != null) {
                        iUserLoggerInterface.log("[GT-PUSH] " + str);
                    }
                }
            } else {
                this.f2443a.log("[GT-PUSH] " + this.b.toString());
            }
            this.b.setLength(0);
        }
    }

    @Override // com.igexin.b.a.c.a.b
    public void a() {
        if (this.f2443a != null) {
            b();
        }
    }

    @Override // com.igexin.b.a.c.a.b
    public void a(IUserLoggerInterface iUserLoggerInterface) {
        if (iUserLoggerInterface != null) {
            this.f2443a = iUserLoggerInterface;
        }
    }

    @Override // com.igexin.b.a.c.a.b
    public void a(String str) {
        if (this.f2443a == null) {
            b(str);
            return;
        }
        b();
        this.f2443a.log("[GT-PUSH] " + str);
    }

    public void b(String str) {
        if (this.b.length() + str.length() < 5120) {
            StringBuffer stringBuffer = this.b;
            stringBuffer.append(str);
            stringBuffer.append("\n");
        } else {
            if (this.b.length() > 5120 || this.b.length() + TsExtractor.TS_STREAM_TYPE_E_AC3 <= 5120) {
                return;
            }
            StringBuffer stringBuffer2 = this.b;
            stringBuffer2.append("Warning! the log cache is too long to show the full content,we suggest you call initialize and setDebugLogger in a short time interval.");
            stringBuffer2.append("\n");
        }
    }
}
