package com.tkay.expressad.exoplayer.k;

import android.net.NetworkInfo;
import android.os.SystemClock;
import android.util.Log;
import android.view.Surface;
import com.bianfeng.libuniverse.Device;
import com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import com.tkay.expressad.exoplayer.a.b;
import com.tkay.expressad.exoplayer.ae;
import com.tkay.expressad.exoplayer.h.t;
import com.tkay.expressad.exoplayer.i.e;
import java.io.IOException;
import java.text.NumberFormat;
import java.util.Locale;
import okhttp3.HttpUrl;

/* JADX INFO: loaded from: classes3.dex */
public final class i implements com.tkay.expressad.exoplayer.a.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f6763a = "EventLogger";
    private static final int b = 3;
    private static final NumberFormat c;
    private final com.tkay.expressad.exoplayer.i.e d;
    private final ae.b e = new ae.b();
    private final ae.a f = new ae.a();
    private final long g = SystemClock.elapsedRealtime();

    private static String a(int i) {
        return i != 1 ? i != 2 ? i != 3 ? i != 4 ? "?" : "ENDED" : "READY" : "BUFFERING" : "IDLE";
    }

    private static String a(int i, int i2) {
        return i < 2 ? "N/A" : i2 != 0 ? i2 != 8 ? i2 != 16 ? "?" : "YES" : "YES_NOT_SEAMLESS" : "NO";
    }

    private static String a(boolean z) {
        return z ? "[X]" : "[ ]";
    }

    private static String b(int i) {
        return i != 0 ? i != 1 ? i != 2 ? i != 3 ? i != 4 ? "?" : "YES" : "NO_EXCEEDS_CAPABILITIES" : "NO_UNSUPPORTED_DRM" : "NO_UNSUPPORTED_TYPE" : "NO";
    }

    private static String c(int i) {
        return i != 0 ? i != 1 ? i != 2 ? "?" : "ALL" : "ONE" : "OFF";
    }

    private static String d(int i) {
        return i != 0 ? i != 1 ? i != 2 ? i != 3 ? i != 4 ? "?" : "INTERNAL" : "AD_INSERTION" : "SEEK_ADJUSTMENT" : "SEEK" : "PERIOD_TRANSITION";
    }

    private static String e(int i) {
        return i != 0 ? i != 1 ? i != 2 ? "?" : "DYNAMIC" : "RESET" : "PREPARED";
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void a() {
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void b() {
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void c() {
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void d() {
    }

    static {
        NumberFormat numberFormat = NumberFormat.getInstance(Locale.US);
        c = numberFormat;
        numberFormat.setMinimumFractionDigits(2);
        c.setMaximumFractionDigits(2);
        c.setGroupingUsed(false);
    }

    private i(com.tkay.expressad.exoplayer.i.e eVar) {
        this.d = eVar;
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void b(b.a aVar, boolean z) {
        a(aVar, CallMraidJS.e, Boolean.toString(z));
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void a(b.a aVar, boolean z, int i) {
        StringBuilder sb = new StringBuilder();
        sb.append(z);
        sb.append(", ");
        sb.append(i != 1 ? i != 2 ? i != 3 ? i != 4 ? "?" : "ENDED" : "READY" : "BUFFERING" : "IDLE");
        a(aVar, CallMraidJS.b, sb.toString());
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void c(b.a aVar, int i) {
        a(aVar, "repeatMode", i != 0 ? i != 1 ? i != 2 ? "?" : "ALL" : "ONE" : "OFF");
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void a(b.a aVar, boolean z) {
        a(aVar, "shuffleModeEnabled", Boolean.toString(z));
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void b(b.a aVar, int i) {
        a(aVar, "positionDiscontinuity", i != 0 ? i != 1 ? i != 2 ? i != 3 ? i != 4 ? "?" : "INTERNAL" : "AD_INSERTION" : "SEEK_ADJUSTMENT" : "SEEK" : "PERIOD_TRANSITION");
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void a(b.a aVar) {
        a(aVar, "seekStarted");
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void a(b.a aVar, com.tkay.expressad.exoplayer.v vVar) {
        a(aVar, "playbackParameters", af.a("speed=%.2f, pitch=%.2f, skipSilence=%s", Float.valueOf(vVar.b), Float.valueOf(vVar.c), Boolean.valueOf(vVar.d)));
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void a(b.a aVar, int i) {
        int iC = aVar.b.c();
        int iB = aVar.b.b();
        StringBuilder sb = new StringBuilder("timelineChanged [");
        sb.append(i(aVar));
        sb.append(", periodCount=");
        sb.append(iC);
        sb.append(", windowCount=");
        sb.append(iB);
        sb.append(", reason=");
        sb.append(i != 0 ? i != 1 ? i != 2 ? "?" : "DYNAMIC" : "RESET" : "PREPARED");
        Log.d(f6763a, sb.toString());
        for (int i2 = 0; i2 < Math.min(iC, 3); i2++) {
            aVar.b.a(i2, this.f, false);
            Log.d(f6763a, "  period [" + a(com.tkay.expressad.exoplayer.b.a(this.f.d)) + "]");
        }
        if (iC > 3) {
            Log.d(f6763a, "  ...");
        }
        for (int i3 = 0; i3 < Math.min(iB, 3); i3++) {
            aVar.b.a(i3, this.e, false);
            Log.d(f6763a, "  window [" + a(com.tkay.expressad.exoplayer.b.a(this.e.i)) + ", " + this.e.d + ", " + this.e.e + "]");
        }
        if (iB > 3) {
            Log.d(f6763a, "  ...");
        }
        Log.d(f6763a, "]");
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void a(b.a aVar, com.tkay.expressad.exoplayer.i.g gVar) {
        int i;
        com.tkay.expressad.exoplayer.i.e eVar = this.d;
        e.a aVarA = eVar != null ? eVar.a() : null;
        if (aVarA == null) {
            a(aVar, "tracksChanged", HttpUrl.PATH_SEGMENT_ENCODE_SET_URI);
            return;
        }
        Log.d(f6763a, "tracksChanged [" + i(aVar) + ", ");
        int iA = aVarA.a();
        int i2 = 0;
        while (true) {
            String str = "  ]";
            String str2 = " [";
            if (i2 >= iA) {
                break;
            }
            com.tkay.expressad.exoplayer.h.af afVarB = aVarA.b(i2);
            com.tkay.expressad.exoplayer.i.f fVarA = gVar.a(i2);
            if (afVarB.b > 0) {
                i = iA;
                Log.d(f6763a, "  Renderer:" + i2 + " [");
                int i3 = 0;
                while (i3 < afVarB.b) {
                    com.tkay.expressad.exoplayer.h.ae aeVarA = afVarB.a(i3);
                    com.tkay.expressad.exoplayer.h.af afVar = afVarB;
                    int i4 = aeVarA.f6632a;
                    int iA2 = aVarA.a(i2, i3);
                    String str3 = str;
                    Log.d(f6763a, "    Group:" + i3 + ", adaptive_supported=" + (i4 < 2 ? "N/A" : iA2 != 0 ? iA2 != 8 ? iA2 != 16 ? "?" : "YES" : "YES_NOT_SEAMLESS" : "NO") + str2);
                    int i5 = 0;
                    while (i5 < aeVarA.f6632a) {
                        Log.d(f6763a, "      " + a((fVarA == null || fVarA.f() != aeVarA || fVarA.c(i5) == -1) ? false : true) + " Track:" + i5 + ", " + com.tkay.expressad.exoplayer.m.c(aeVarA.a(i5)) + ", supported=" + b(aVarA.a(i2, i3, i5)));
                        i5++;
                        str2 = str2;
                    }
                    Log.d(f6763a, "    ]");
                    i3++;
                    afVarB = afVar;
                    str = str3;
                }
                String str4 = str;
                if (fVarA != null) {
                    int i6 = 0;
                    while (true) {
                        if (i6 >= fVarA.g()) {
                            break;
                        }
                        com.tkay.expressad.exoplayer.g.a aVar2 = fVarA.a(i6).f;
                        if (aVar2 != null) {
                            Log.d(f6763a, "    Metadata [");
                            a(aVar2, "      ");
                            Log.d(f6763a, "    ]");
                            break;
                        }
                        i6++;
                    }
                }
                Log.d(f6763a, str4);
            } else {
                i = iA;
            }
            i2++;
            iA = i;
        }
        String str5 = " [";
        com.tkay.expressad.exoplayer.h.af afVarB2 = aVarA.b();
        if (afVarB2.b > 0) {
            Log.d(f6763a, "  Renderer:None [");
            int i7 = 0;
            while (i7 < afVarB2.b) {
                StringBuilder sb = new StringBuilder("    Group:");
                sb.append(i7);
                String str6 = str5;
                sb.append(str6);
                Log.d(f6763a, sb.toString());
                com.tkay.expressad.exoplayer.h.ae aeVarA2 = afVarB2.a(i7);
                for (int i8 = 0; i8 < aeVarA2.f6632a; i8++) {
                    Log.d(f6763a, "      " + a(false) + " Track:" + i8 + ", " + com.tkay.expressad.exoplayer.m.c(aeVarA2.a(i8)) + ", supported=" + b(0));
                }
                Log.d(f6763a, "    ]");
                i7++;
                str5 = str6;
            }
            Log.d(f6763a, "  ]");
        }
        Log.d(f6763a, "]");
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void b(b.a aVar) {
        a(aVar, "seekProcessed");
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void a(b.a aVar, com.tkay.expressad.exoplayer.g.a aVar2) {
        Log.d(f6763a, "metadata [" + i(aVar) + ", ");
        a(aVar2, "  ");
        Log.d(f6763a, "]");
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void d(b.a aVar, int i) {
        a(aVar, "decoderEnabled", f(i));
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void f(b.a aVar, int i) {
        a(aVar, "audioSessionId", Integer.toString(i));
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void a(b.a aVar, int i, String str) {
        a(aVar, "decoderInitialized", f(i) + ", " + str);
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void a(b.a aVar, int i, com.tkay.expressad.exoplayer.m mVar) {
        a(aVar, "decoderInputFormatChanged", f(i) + ", " + com.tkay.expressad.exoplayer.m.c(mVar));
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void e(b.a aVar, int i) {
        a(aVar, "decoderDisabled", f(i));
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void a(b.a aVar, int i, long j, long j2) {
        a(aVar, "audioTrackUnderrun", i + ", " + j + ", " + j2 + "]", (Throwable) null);
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void g(b.a aVar, int i) {
        a(aVar, "droppedFrames", Integer.toString(i));
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void b(b.a aVar, int i, int i2) {
        a(aVar, "videoSizeChanged", i + ", " + i2);
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void a(b.a aVar, Surface surface) {
        a(aVar, "renderedFirstFrame", surface.toString());
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void c(b.a aVar) {
        a(aVar, "mediaPeriodCreated");
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void d(b.a aVar) {
        a(aVar, "mediaPeriodReleased");
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void a(b.a aVar, IOException iOException) {
        a(aVar, "loadError", (Exception) iOException);
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void e(b.a aVar) {
        a(aVar, "mediaPeriodReadingStarted");
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void a(b.a aVar, int i, int i2) {
        a(aVar, "viewportSizeChanged", i + ", " + i2);
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void a(b.a aVar, NetworkInfo networkInfo) {
        a(aVar, "networkTypeChanged", networkInfo == null ? Device.NETWORN_NONE : networkInfo.toString());
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void b(b.a aVar, t.c cVar) {
        a(aVar, "upstreamDiscarded", com.tkay.expressad.exoplayer.m.c(cVar.c));
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void a(b.a aVar, t.c cVar) {
        a(aVar, "downstreamFormatChanged", com.tkay.expressad.exoplayer.m.c(cVar.c));
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void a(b.a aVar, Exception exc) {
        a(aVar, "drmSessionManagerError", exc);
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void g(b.a aVar) {
        a(aVar, "drmKeysRestored");
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void h(b.a aVar) {
        a(aVar, "drmKeysRemoved");
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void f(b.a aVar) {
        a(aVar, "drmKeysLoaded");
    }

    private static void a(String str) {
        Log.d(f6763a, str);
    }

    private static void a(String str, Throwable th) {
        Log.e(f6763a, str, th);
    }

    private void a(b.a aVar, String str) {
        Log.d(f6763a, b(aVar, str));
    }

    private void a(b.a aVar, String str, String str2) {
        Log.d(f6763a, b(aVar, str, str2));
    }

    private void a(b.a aVar, String str, Throwable th) {
        a(b(aVar, str), th);
    }

    private void a(b.a aVar, String str, String str2, Throwable th) {
        a(b(aVar, str, str2), th);
    }

    private void a(b.a aVar, String str, Exception exc) {
        a(aVar, "internalError", str, exc);
    }

    private static void a(com.tkay.expressad.exoplayer.g.a aVar, String str) {
        for (int i = 0; i < aVar.a(); i++) {
            Log.d(f6763a, str + aVar.a(i));
        }
    }

    private String b(b.a aVar, String str) {
        return str + " [" + i(aVar) + "]";
    }

    private String b(b.a aVar, String str, String str2) {
        return str + " [" + i(aVar) + ", " + str2 + "]";
    }

    private String i(b.a aVar) {
        String str = "window=" + aVar.c;
        if (aVar.d != null) {
            str = str + ", period=" + aVar.d.f6667a;
            if (aVar.d.a()) {
                str = (str + ", adGroup=" + aVar.d.b) + ", ad=" + aVar.d.c;
            }
        }
        return a(aVar.f6473a - this.g) + ", " + a(aVar.f) + ", " + str;
    }

    private static String a(long j) {
        return j == -9223372036854775807L ? "?" : c.format(j / 1000.0f);
    }

    private static String a(com.tkay.expressad.exoplayer.i.f fVar, com.tkay.expressad.exoplayer.h.ae aeVar, int i) {
        return a((fVar == null || fVar.f() != aeVar || fVar.c(i) == -1) ? false : true);
    }

    private static String f(int i) {
        if (i == 0) {
            return "default";
        }
        if (i == 1) {
            return "audio";
        }
        if (i == 2) {
            return "video";
        }
        if (i == 3) {
            return "text";
        }
        if (i == 4) {
            return TtmlNode.TAG_METADATA;
        }
        if (i == 5) {
            return Device.NETWORN_NONE;
        }
        if (i < 10000) {
            return "?";
        }
        return "custom (" + i + ")";
    }

    @Override // com.tkay.expressad.exoplayer.a.b
    public final void a(b.a aVar, com.tkay.expressad.exoplayer.g gVar) {
        a(b(aVar, "playerFailed"), gVar);
    }
}
