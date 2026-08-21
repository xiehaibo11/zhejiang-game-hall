package com.tkay.expressad.video.module.a.a;

import com.tkay.expressad.video.module.TkayVideoView;
import java.util.Map;

public class o extends k {
    private boolean ag;
    protected int ah;
    private boolean ai;
    private boolean aj;
    private boolean ak;
    private boolean al;
    private Map<Integer, String> am;
    private int an;

    public o(com.tkay.expressad.foundation.d.c cVar, com.tkay.expressad.videocommon.c.c cVar2, com.tkay.expressad.videocommon.b.a aVar, String str, String str2, com.tkay.expressad.video.module.a.a aVar2, int i, boolean z) {
        super(cVar, aVar, cVar2, str, str2, aVar2, i, z);
        this.al = false;
        this.ah = 0;
        this.an = -1;
        if (this.W) {
            this.am = cVar.R();
        }
        this.ah = cVar.i();
    }

    /* JADX WARN: Removed duplicated region for block: B:55:0x00d4 A[Catch: all -> 0x00f4, TryCatch #0 {all -> 0x00f4, blocks: (B:60:0x00ee, B:17:0x001d, B:19:0x0028, B:21:0x002c, B:24:0x003d, B:26:0x0041, B:27:0x0047, B:29:0x0063, B:30:0x006c, B:32:0x0070, B:37:0x0079, B:35:0x0075, B:38:0x007d, B:39:0x0081, B:40:0x008c, B:41:0x0097, B:44:0x009d, B:46:0x00a1, B:48:0x00aa, B:50:0x00ae, B:52:0x00c0, B:54:0x00c4, B:55:0x00d4, B:57:0x00d8, B:59:0x00dc), top: B:65:0x0002 }] */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void a(int i, Object obj) {
        int i2;
        try {
            if (i == 2 || i == 6) {
                if (this.W && !this.aj) {
                    this.aj = true;
                    b();
                    com.tkay.expressad.video.module.b.a.d(com.tkay.core.common.b.m.a().f(), this.X);
                }
            } else if (i != 7) {
                int iBi = 0;
                if (i == 11) {
                    com.tkay.expressad.videocommon.b.c.a().a(false);
                    b();
                } else if (i == 12) {
                    b();
                    com.tkay.expressad.videocommon.b.c.a().a(false);
                } else if (i == 15) {
                    e();
                    d();
                    c();
                    if (obj == null || !(obj instanceof TkayVideoView.a)) {
                        i2 = 0;
                    } else {
                        int i3 = ((TkayVideoView.a) obj).a;
                        iBi = ((TkayVideoView.a) obj).b;
                        i2 = i3;
                    }
                    if (iBi == 0 && this.X != null) {
                        iBi = this.X.bi();
                    }
                    com.tkay.expressad.video.module.b.a.a(com.tkay.core.common.b.m.a().f(), this.X, i2, iBi, this.af);
                    com.tkay.expressad.video.module.b.a.a(this.X, this.am, this.ac, i2);
                    if (!this.ak) {
                        this.ak = true;
                        com.tkay.expressad.video.module.b.a.a(this.X, this.ac);
                    }
                    if (!this.al) {
                        if (this.ah != 0) {
                            iBi = this.ah;
                        }
                        if (i2 >= iBi) {
                            this.al = true;
                            i = 17;
                        }
                    }
                    this.an = i2;
                } else if (i == 16) {
                }
            } else if (this.W && obj != null && (obj instanceof Integer)) {
                int iIntValue = ((Integer) obj).intValue();
                if (iIntValue == 2) {
                    if (!this.ai) {
                        this.ai = true;
                        com.tkay.expressad.video.module.b.a.b(com.tkay.core.common.b.m.a().f(), this.X);
                    }
                } else if (iIntValue == 1 && !this.ag) {
                    this.ag = true;
                    com.tkay.expressad.video.module.b.a.c(com.tkay.core.common.b.m.a().f(), this.X);
                }
            }
            this.ae.a(i, obj);
        } catch (Throwable th) {
            th.getMessage();
        }
    }
}
