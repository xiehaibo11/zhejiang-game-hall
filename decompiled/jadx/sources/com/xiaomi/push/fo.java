package com.xiaomi.push;

import android.os.Build;
import com.ss.android.download.api.constant.BaseConstants;
import com.xiaomi.mipush.sdk.Constants;
import com.xiaomi.push.dx;
import java.io.BufferedOutputStream;
import java.io.IOException;
import java.io.OutputStream;
import java.nio.ByteBuffer;
import java.util.Locale;
import java.util.TimeZone;
import java.util.zip.Adler32;

/* JADX INFO: loaded from: classes4.dex */
public class fo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f8162a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private fs f397a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private OutputStream f398a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private byte[] f401a;
    private int b;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    ByteBuffer f399a = ByteBuffer.allocate(2048);

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    private ByteBuffer f402b = ByteBuffer.allocate(4);

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Adler32 f400a = new Adler32();

    fo(OutputStream outputStream, fs fsVar) {
        this.f398a = new BufferedOutputStream(outputStream);
        this.f397a = fsVar;
        TimeZone timeZone = TimeZone.getDefault();
        this.f8162a = timeZone.getRawOffset() / BaseConstants.Time.HOUR;
        this.b = timeZone.useDaylightTime() ? 1 : 0;
    }

    public int a(fl flVar) {
        int iC = flVar.c();
        if (iC > 32768) {
            com.xiaomi.channel.commonutils.logger.b.m43a("Blob size=" + iC + " should be less than 32768 Drop blob chid=" + flVar.a() + " id=" + flVar.e());
            return 0;
        }
        this.f399a.clear();
        int i = iC + 8 + 4;
        if (i > this.f399a.capacity() || this.f399a.capacity() > 4096) {
            this.f399a = ByteBuffer.allocate(i);
        }
        this.f399a.putShort((short) -15618);
        this.f399a.putShort((short) 5);
        this.f399a.putInt(iC);
        int iPosition = this.f399a.position();
        this.f399a = flVar.mo345a(this.f399a);
        if (!"CONN".equals(flVar.m344a())) {
            if (this.f401a == null) {
                this.f401a = this.f397a.m359a();
            }
            com.xiaomi.push.service.bp.a(this.f401a, this.f399a.array(), true, iPosition, iC);
        }
        this.f400a.reset();
        this.f400a.update(this.f399a.array(), 0, this.f399a.position());
        this.f402b.putInt(0, (int) this.f400a.getValue());
        this.f398a.write(this.f399a.array(), 0, this.f399a.position());
        this.f398a.write(this.f402b.array(), 0, 4);
        this.f398a.flush();
        int iPosition2 = this.f399a.position() + 4;
        com.xiaomi.channel.commonutils.logger.b.c("[Slim] Wrote {cmd=" + flVar.m344a() + ";chid=" + flVar.a() + ";len=" + iPosition2 + "}");
        return iPosition2;
    }

    public void a() {
        dx.e eVar = new dx.e();
        eVar.a(106);
        eVar.a(Build.MODEL);
        eVar.b(v.m702a());
        eVar.c(com.xiaomi.push.service.bv.m662a());
        eVar.b(48);
        eVar.d(this.f397a.b());
        eVar.e(this.f397a.mo377a());
        eVar.f(Locale.getDefault().toString());
        eVar.c(Build.VERSION.SDK_INT);
        byte[] bArrMo374a = this.f397a.mo377a().mo374a();
        if (bArrMo374a != null) {
            eVar.a(dx.b.a(bArrMo374a));
        }
        fl flVar = new fl();
        flVar.a(0);
        flVar.a("CONN", (String) null);
        flVar.a(0L, "xiaomi.com", null);
        flVar.a(eVar.a(), (String) null);
        a(flVar);
        com.xiaomi.channel.commonutils.logger.b.m43a("[slim] open conn: andver=" + Build.VERSION.SDK_INT + " sdk=48 tz=" + this.f8162a + Constants.COLON_SEPARATOR + this.b + " Model=" + Build.MODEL + " os=" + Build.VERSION.INCREMENTAL);
    }

    public void b() throws IOException {
        fl flVar = new fl();
        flVar.a("CLOSE", (String) null);
        a(flVar);
        this.f398a.close();
    }
}
