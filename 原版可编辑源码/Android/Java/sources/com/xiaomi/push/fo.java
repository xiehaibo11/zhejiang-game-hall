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

public class fo {
    private int a;
    private fs a;
    private OutputStream a;
    private byte[] a;
    private int b;
    ByteBuffer a = ByteBuffer.allocate(2048);
    private ByteBuffer b = ByteBuffer.allocate(4);
    private Adler32 a = new Adler32();

    fo(OutputStream outputStream, fs fsVar) {
        this.a = new BufferedOutputStream(outputStream);
        this.a = fsVar;
        TimeZone timeZone = TimeZone.getDefault();
        this.a = timeZone.getRawOffset() / BaseConstants.Time.HOUR;
        this.b = timeZone.useDaylightTime() ? 1 : 0;
    }

    public int a(fl flVar) {
        int iC = flVar.c();
        if (iC > 32768) {
            com.xiaomi.channel.commonutils.logger.b.a("Blob size=" + iC + " should be less than 32768 Drop blob chid=" + flVar.a() + " id=" + flVar.e());
            return 0;
        }
        this.a.clear();
        int i = iC + 8 + 4;
        if (i > this.a.capacity() || this.a.capacity() > 4096) {
            this.a = ByteBuffer.allocate(i);
        }
        this.a.putShort((short) -15618);
        this.a.putShort((short) 5);
        this.a.putInt(iC);
        int iPosition = this.a.position();
        this.a = flVar.a(this.a);
        if (!"CONN".equals(flVar.a())) {
            if (this.a == null) {
                this.a = this.a.a();
            }
            com.xiaomi.push.service.bp.a(this.a, this.a.array(), true, iPosition, iC);
        }
        this.a.reset();
        this.a.update(this.a.array(), 0, this.a.position());
        this.b.putInt(0, (int) this.a.getValue());
        this.a.write(this.a.array(), 0, this.a.position());
        this.a.write(this.b.array(), 0, 4);
        this.a.flush();
        int iPosition2 = this.a.position() + 4;
        com.xiaomi.channel.commonutils.logger.b.c("[Slim] Wrote {cmd=" + flVar.a() + ";chid=" + flVar.a() + ";len=" + iPosition2 + "}");
        return iPosition2;
    }

    public void a() {
        dx.e eVar = new dx.e();
        eVar.a(106);
        eVar.a(Build.MODEL);
        eVar.b(v.a());
        eVar.c(com.xiaomi.push.service.bv.a());
        eVar.b(48);
        eVar.d(this.a.b());
        eVar.e(this.a.a());
        eVar.f(Locale.getDefault().toString());
        eVar.c(Build.VERSION.SDK_INT);
        byte[] bArrA = this.a.a().a();
        if (bArrA != null) {
            eVar.a(dx.b.a(bArrA));
        }
        fl flVar = new fl();
        flVar.a(0);
        flVar.a("CONN", (String) null);
        flVar.a(0L, "xiaomi.com", null);
        flVar.a(eVar.a(), (String) null);
        a(flVar);
        com.xiaomi.channel.commonutils.logger.b.a("[slim] open conn: andver=" + Build.VERSION.SDK_INT + " sdk=48 tz=" + this.a + Constants.COLON_SEPARATOR + this.b + " Model=" + Build.MODEL + " os=" + Build.VERSION.INCREMENTAL);
    }

    public void b() throws IOException {
        fl flVar = new fl();
        flVar.a("CLOSE", (String) null);
        a(flVar);
        this.a.close();
    }
}
