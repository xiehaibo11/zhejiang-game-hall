package com.huawei.hms.availableupdate;

import android.content.Context;
import android.os.Environment;
import android.text.TextUtils;
import com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface;
import com.huawei.hms.support.log.HMSLog;
import com.huawei.hms.update.provider.UpdateProvider;
import com.huawei.hms.utils.Checker;
import com.huawei.hms.utils.FileUtil;
import com.huawei.hms.utils.IOUtils;
import com.meizu.cloud.pushsdk.constants.PushConstants;
import java.io.File;
import java.io.IOException;
import java.io.OutputStream;

/* JADX INFO: compiled from: UpdateDownload.java */
/* JADX INFO: loaded from: classes.dex */
public class e implements f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f2026a;
    public final l b = new k();
    public final b c = new b();
    public g d;
    public File e;

    /* JADX INFO: compiled from: UpdateDownload.java */
    public class a extends c {
        public long b;
        public int c;
        public final /* synthetic */ int d;
        public final /* synthetic */ String e;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public a(File file, int i, int i2, String str) {
            super(file, i);
            this.d = i2;
            this.e = str;
            this.b = 0L;
            this.c = e.this.c.a();
        }

        public final void a(int i) {
            e.this.c.a(e.this.b(), i, this.e);
            e.this.a(2100, i, this.d);
        }

        @Override // com.huawei.hms.availableupdate.c, java.io.OutputStream
        public void write(byte[] bArr, int i, int i2) throws IOException {
            super.write(bArr, i, i2);
            int i3 = this.c + i2;
            this.c = i3;
            if (i3 > 209715200) {
                return;
            }
            long jCurrentTimeMillis = System.currentTimeMillis();
            if (Math.abs(jCurrentTimeMillis - this.b) > 1000) {
                this.b = jCurrentTimeMillis;
                a(this.c);
            }
            int i4 = this.c;
            if (i4 == this.d) {
                a(i4);
            }
        }
    }

    public e(Context context) {
        this.f2026a = context.getApplicationContext();
    }

    public Context b() {
        return this.f2026a;
    }

    public final synchronized void a(g gVar) {
        this.d = gVar;
    }

    public final synchronized void a(int i, int i2, int i3) {
        g gVar = this.d;
        if (gVar != null) {
            gVar.a(i, i2, i3, this.e);
        }
    }

    @Override // com.huawei.hms.availableupdate.f
    public void a() {
        HMSLog.i("UpdateDownload", "Enter cancel.");
        a((g) null);
        this.b.a();
    }

    @Override // com.huawei.hms.availableupdate.f
    public void a(g gVar, h hVar) {
        Checker.checkNonNull(gVar, "callback must not be null.");
        HMSLog.i("UpdateDownload", "Enter downloadPackage.");
        a(gVar);
        if (hVar != null && hVar.a()) {
            if (!"mounted".equals(Environment.getExternalStorageState())) {
                HMSLog.e("UpdateDownload", "In downloadPackage, Invalid external storage for downloading file.");
                a(YmnBaseInterface.USERVERIFIER_SET_IDENTITY_SUCCESS, 0, 0);
                return;
            }
            String str = hVar.b;
            if (TextUtils.isEmpty(str)) {
                HMSLog.e("UpdateDownload", "In DownloadHelper.downloadPackage, Download the package,  packageName is null: ");
                a(PushConstants.ON_TIME_NOTIFICATION, 0, 0);
                return;
            }
            File localFile = UpdateProvider.getLocalFile(this.f2026a, str + com.tkay.china.common.a.a.g);
            this.e = localFile;
            if (localFile == null) {
                HMSLog.e("UpdateDownload", "In downloadPackage, Failed to get local file for downloading.");
                a(YmnBaseInterface.USERVERIFIER_SET_IDENTITY_SUCCESS, 0, 0);
                return;
            }
            File parentFile = localFile.getParentFile();
            if (parentFile == null || !(parentFile.mkdirs() || parentFile.isDirectory())) {
                HMSLog.e("UpdateDownload", "In downloadPackage, Failed to create directory for downloading file.");
                a(PushConstants.ON_TIME_NOTIFICATION, 0, 0);
                return;
            } else if (parentFile.getUsableSpace() < hVar.d * 3) {
                HMSLog.e("UpdateDownload", "In downloadPackage, No space for downloading file.");
                a(YmnBaseInterface.USERVERIFIER_GET_IDENTITY_FAIL, 0, 0);
                return;
            } else {
                try {
                    a(hVar);
                    return;
                } catch (j unused) {
                    HMSLog.w("UpdateDownload", "In downloadPackage, Canceled to download the update file.");
                    a(2101, 0, 0);
                    return;
                }
            }
        }
        HMSLog.e("UpdateDownload", "In downloadPackage, Invalid update info.");
        a(PushConstants.ON_TIME_NOTIFICATION, 0, 0);
    }

    public void a(h hVar) throws j {
        String str;
        HMSLog.i("UpdateDownload", "Enter downloadPackage.");
        c cVarA = null;
        try {
            try {
                str = hVar.b;
            } catch (IOException e) {
                HMSLog.e("UpdateDownload", "In DownloadHelper.downloadPackage, Failed to download." + e.getMessage());
                a(PushConstants.ON_TIME_NOTIFICATION, 0, 0);
            }
            if (TextUtils.isEmpty(str)) {
                HMSLog.e("UpdateDownload", "In DownloadHelper.downloadPackage, Download the package,  packageName is null: ");
                a(PushConstants.ON_TIME_NOTIFICATION, 0, 0);
                return;
            }
            this.c.a(b(), str);
            if (this.c.b(hVar.c, hVar.d, hVar.e)) {
                if (this.c.a() == this.c.b()) {
                    if (FileUtil.verifyHash(hVar.e, this.e)) {
                        a(2000, 0, 0);
                        return;
                    } else {
                        this.c.a(hVar.c, hVar.d, hVar.e);
                        cVarA = a(this.e, hVar.d, str);
                    }
                } else {
                    cVarA = a(this.e, hVar.d, str);
                    cVarA.a(this.c.a());
                }
            } else {
                this.c.a(hVar.c, hVar.d, hVar.e);
                cVarA = a(this.e, hVar.d, str);
            }
            int iA = this.b.a(hVar.c, cVarA, this.c.a(), this.c.b(), this.f2026a);
            if (iA != 200 && iA != 206) {
                HMSLog.e("UpdateDownload", "In DownloadHelper.downloadPackage, Download the package, HTTP code: " + iA);
                a(PushConstants.ON_TIME_NOTIFICATION, 0, 0);
                return;
            }
            if (!FileUtil.verifyHash(hVar.e, this.e)) {
                a(2202, 0, 0);
            } else {
                a(2000, 0, 0);
            }
        } finally {
            this.b.close();
            IOUtils.closeQuietly((OutputStream) null);
        }
    }

    public final c a(File file, int i, String str) throws IOException {
        return new a(file, i, i, str);
    }
}
