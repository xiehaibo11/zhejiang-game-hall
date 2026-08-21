package com.mbridge.msdk.foundation.same.c;

import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.same.net.k;
import java.io.File;

/* JADX INFO: compiled from: CommonImageTask.java */
/* JADX INFO: loaded from: classes2.dex */
public final class d extends com.mbridge.msdk.foundation.same.e.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f3413a;
    private String b;
    private String c;
    private boolean d;
    private a e;
    private boolean f;

    /* JADX INFO: compiled from: CommonImageTask.java */
    public interface a {
        void a(String str, String str2);

        void b(String str, String str2);
    }

    @Override // com.mbridge.msdk.foundation.same.e.a
    public final void cancelTask() {
    }

    @Override // com.mbridge.msdk.foundation.same.e.a
    public final void pauseTask(boolean z) {
    }

    public final void a(boolean z) {
        this.d = z;
    }

    public final void a(a aVar) {
        this.e = aVar;
    }

    public d(String str, String str2, String str3) {
        this.d = false;
        this.f = false;
        this.f3413a = str;
        this.b = str2;
        this.c = str3;
    }

    public d(String str, String str2, String str3, g gVar) {
        this.d = false;
        this.f = false;
        this.f3413a = str;
        this.b = str2;
        this.c = str3;
        this.f = true;
    }

    private void b() {
        try {
            File file = new File(this.c);
            if (!file.exists()) {
                file.mkdirs();
            }
            if (file.exists()) {
                file.delete();
            }
            com.mbridge.msdk.foundation.same.net.g.b.downloadFile(file, this.b, new com.mbridge.msdk.foundation.same.net.f<Void>() { // from class: com.mbridge.msdk.foundation.same.c.d.1
                @Override // com.mbridge.msdk.foundation.same.net.f, com.mbridge.msdk.foundation.same.net.e
                public final void onFinish() {
                }

                @Override // com.mbridge.msdk.foundation.same.net.f, com.mbridge.msdk.foundation.same.net.e
                public final void onProgressChange(long j, long j2) {
                }

                @Override // com.mbridge.msdk.foundation.same.net.f, com.mbridge.msdk.foundation.same.net.e
                public final void onSuccess(k kVar) {
                    Runnable runnable = new Runnable() { // from class: com.mbridge.msdk.foundation.same.c.d.1.1
                        @Override // java.lang.Runnable
                        public final void run() {
                            d dVar = d.this;
                            String unused = d.this.c;
                            d.this.a();
                        }
                    };
                    if (d.this.f) {
                        com.mbridge.msdk.foundation.same.f.b.f().execute(runnable);
                    } else {
                        runnable.run();
                    }
                }

                @Override // com.mbridge.msdk.foundation.same.net.f, com.mbridge.msdk.foundation.same.net.e
                public final void onError(final com.mbridge.msdk.foundation.same.net.a.a aVar) {
                    Runnable runnable = new Runnable() { // from class: com.mbridge.msdk.foundation.same.c.d.1.2
                        @Override // java.lang.Runnable
                        public final void run() {
                            d.this.a(d.this.b, "load image from http faild because http return code: " + aVar.f3429a + ".image url is " + d.this.b);
                        }
                    };
                    if (d.this.f) {
                        com.mbridge.msdk.foundation.same.f.b.f().execute(runnable);
                    } else {
                        runnable.run();
                    }
                }
            });
        } catch (Exception e) {
            a(this.b, e.getMessage());
            if (MBridgeConstans.DEBUG) {
                e.printStackTrace();
            }
        } catch (OutOfMemoryError e2) {
            a(this.b, e2.getMessage());
        }
    }

    protected final void a() {
        if (new File(this.c).exists()) {
            String str = this.b;
            String str2 = this.c;
            a aVar = this.e;
            if (aVar != null) {
                aVar.a(str, str2);
                return;
            }
            return;
        }
        a(this.b, "load image faild.because file[" + this.c + "] is not exist!");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(String str, String str2) {
        a aVar = this.e;
        if (aVar != null) {
            aVar.b(str, str2);
        }
    }

    @Override // com.mbridge.msdk.foundation.same.e.a
    public final void runTask() {
        if (!this.d) {
            if (TextUtils.isEmpty(this.c)) {
                a(this.b, "save path is null.");
                return;
            }
            File file = new File(this.c);
            if (!file.exists() || file.length() <= 0) {
                b();
                return;
            } else {
                a();
                return;
            }
        }
        b();
    }
}
