package com.mbridge.msdk.video.module.a.a;

import android.text.TextUtils;
import com.mbridge.msdk.foundation.db.s;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.ab;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.video.module.MBridgeVideoView;
import com.mbridge.msdk.video.module.a.a.j;
import java.io.File;
import java.util.Map;

public class n extends j {
    protected int k;
    private boolean l;
    private boolean m;
    private boolean n;
    private boolean o;
    private boolean p;
    private Map<Integer, String> q;
    private int r;

    public n(CampaignEx campaignEx, com.mbridge.msdk.videocommon.b.d dVar, com.mbridge.msdk.videocommon.download.a aVar, String str, String str2, com.mbridge.msdk.video.module.a.a aVar2, int i, boolean z) {
        super(campaignEx, aVar, dVar, str, str2, aVar2, i, z);
        this.p = false;
        this.k = 0;
        this.r = -1;
        if (this.a) {
            this.q = campaignEx.getAdvImpList();
        }
        this.k = campaignEx.getVideoCompleteTime();
    }

    /* JADX WARN: Removed duplicated region for block: B:66:0x0124 A[Catch: all -> 0x0144, TryCatch #0 {all -> 0x0144, blocks: (B:16:0x001c, B:17:0x0024, B:19:0x0033, B:21:0x003e, B:23:0x0056, B:25:0x0061, B:24:0x005e, B:20:0x003b, B:26:0x006a, B:71:0x013e, B:27:0x0076, B:29:0x0081, B:31:0x0085, B:34:0x0096, B:36:0x009a, B:37:0x00a0, B:39:0x00bc, B:40:0x00c5, B:42:0x00c9, B:47:0x00d2, B:45:0x00ce, B:48:0x00d6, B:49:0x00d9, B:52:0x00df, B:54:0x00e3, B:56:0x00ec, B:58:0x00f0, B:60:0x0102, B:62:0x0106, B:63:0x0116, B:65:0x011a, B:66:0x0124, B:68:0x0128, B:70:0x012c), top: B:76:0x0002 }] */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void a(int i, final Object obj) {
        int i2;
        try {
            if (i == 2) {
                if (this.a && !this.n) {
                    this.n = true;
                    d();
                    com.mbridge.msdk.video.module.b.b.e(com.mbridge.msdk.foundation.controller.a.f().j(), this.b);
                }
            } else if (i != 130) {
                if (i != 6) {
                    if (i != 7) {
                        int videoLength = 0;
                        if (i == 15) {
                            g();
                            f();
                            e();
                            if (obj == null || !(obj instanceof MBridgeVideoView.a)) {
                                i2 = 0;
                            } else {
                                int i3 = ((MBridgeVideoView.a) obj).a;
                                videoLength = ((MBridgeVideoView.a) obj).b;
                                i2 = i3;
                            }
                            if (videoLength == 0 && this.b != null) {
                                videoLength = this.b.getVideoLength();
                            }
                            com.mbridge.msdk.video.module.b.b.a(com.mbridge.msdk.foundation.controller.a.f().j(), this.b, i2, videoLength, this.j);
                            com.mbridge.msdk.video.module.b.b.a(this.b, this.q, this.g, i2);
                            if (!this.o) {
                                this.o = true;
                                com.mbridge.msdk.video.module.b.b.a(this.b, this.g);
                            }
                            if (!this.p) {
                                if (this.k != 0) {
                                    videoLength = this.k;
                                }
                                if (i2 >= videoLength) {
                                    this.p = true;
                                    i = 17;
                                }
                            }
                            this.r = i2;
                        } else if (i != 16) {
                            switch (i) {
                                case 11:
                                    com.mbridge.msdk.videocommon.download.b.getInstance().b(false);
                                    d();
                                    break;
                                case 12:
                                    Runnable runnable = new Runnable() {
                                        @Override
                                        public final void run() {
                                            Object obj2 = obj;
                                            if (obj2 == null || !(obj2 instanceof String)) {
                                                return;
                                            }
                                            n.this.a((String) obj2);
                                        }
                                    };
                                    if (com.mbridge.msdk.foundation.controller.b.a().d()) {
                                        com.mbridge.msdk.foundation.same.f.b.a().execute(runnable);
                                    } else {
                                        runnable.run();
                                    }
                                    d();
                                    b();
                                    c();
                                    j.4 r0 = new Runnable() {
                                        4() {
                                        }

                                        @Override
                                        public final void run() {
                                            try {
                                                if (ab.a().a("c_r_v_f_w_s_e", false) || !j.this.a || j.this.e == null) {
                                                    return;
                                                }
                                                if (j.this.e.g() != null && !TextUtils.isEmpty(j.this.e.g().getVideoUrlEncode())) {
                                                    s.a(com.mbridge.msdk.foundation.db.i.a(com.mbridge.msdk.foundation.controller.a.f().j())).b(j.this.e.g().getVideoUrlEncode());
                                                }
                                                if (TextUtils.isEmpty(j.this.e.d())) {
                                                    return;
                                                }
                                                File file = new File(j.this.e.d());
                                                if (file.exists() && file.isFile() && file.delete()) {
                                                    z.a("NotifyListener", "DEL File :" + file.getAbsolutePath());
                                                }
                                            } catch (Exception e) {
                                                e.printStackTrace();
                                            }
                                        }
                                    };
                                    if (com.mbridge.msdk.foundation.controller.b.a().d()) {
                                        com.mbridge.msdk.foundation.same.f.b.a().execute(r0);
                                    } else {
                                        r0.run();
                                    }
                                    com.mbridge.msdk.videocommon.download.b.getInstance().b(false);
                                    break;
                                case 13:
                                    b();
                                    c();
                                    break;
                            }
                        }
                    } else if (this.a && obj != null && (obj instanceof Integer)) {
                        int iIntValue = ((Integer) obj).intValue();
                        if (iIntValue == 2) {
                            if (!this.m) {
                                this.m = true;
                                com.mbridge.msdk.video.module.b.b.b(com.mbridge.msdk.foundation.controller.a.f().j(), this.b);
                            }
                        } else if (iIntValue == 1 && !this.l) {
                            this.l = true;
                            com.mbridge.msdk.video.module.b.b.c(com.mbridge.msdk.foundation.controller.a.f().j(), this.b);
                        }
                    }
                }
            } else if (obj instanceof Integer) {
                this.k = ((Integer) obj).intValue();
            }
            this.i.a(i, obj);
        } catch (Throwable th) {
            z.c("NotifyListener", th.getMessage(), th);
        }
    }
}
