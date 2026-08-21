package com.xiaomi.push;

import android.content.Context;
import android.content.SharedPreferences;
import android.text.TextUtils;
import com.qihoo360.replugin.RePlugin;
import com.xiaomi.push.al;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.nio.channels.FileLock;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public class dv extends al.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f8115a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private SharedPreferences f247a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private com.xiaomi.push.service.ba f248a;

    public dv(Context context) {
        this.f8115a = context;
        this.f247a = context.getSharedPreferences("mipush_extra", 0);
        this.f248a = com.xiaomi.push.service.ba.a(context);
    }

    private List<hr> a(File file) {
        RandomAccessFile randomAccessFile;
        FileInputStream fileInputStream;
        dm dmVarM225a = dn.a().m225a();
        String strA = dmVarM225a == null ? "" : dmVarM225a.a();
        FileLock fileLock = null;
        if (TextUtils.isEmpty(strA)) {
            return null;
        }
        ArrayList arrayList = new ArrayList();
        byte[] bArr = new byte[4];
        synchronized (dq.f8111a) {
            try {
                File file2 = new File(this.f8115a.getExternalFilesDir(null), "push_cdata.lock");
                ab.m115a(file2);
                randomAccessFile = new RandomAccessFile(file2, "rw");
                try {
                    FileLock fileLockLock = randomAccessFile.getChannel().lock();
                    try {
                        fileInputStream = new FileInputStream(file);
                        while (fileInputStream.read(bArr) == 4) {
                            try {
                                int iA = af.a(bArr);
                                byte[] bArr2 = new byte[iA];
                                if (fileInputStream.read(bArr2) != iA) {
                                    break;
                                }
                                byte[] bArrA = dp.a(strA, bArr2);
                                if (bArrA != null && bArrA.length != 0) {
                                    hr hrVar = new hr();
                                    it.a(hrVar, bArrA);
                                    arrayList.add(hrVar);
                                    a(hrVar);
                                }
                            } catch (Exception unused) {
                                fileLock = fileLockLock;
                                if (fileLock != null && fileLock.isValid()) {
                                    try {
                                        fileLock.release();
                                    } catch (IOException unused2) {
                                    }
                                }
                                ab.a(fileInputStream);
                            } catch (Throwable th) {
                                th = th;
                                fileLock = fileLockLock;
                                if (fileLock != null && fileLock.isValid()) {
                                    try {
                                        fileLock.release();
                                    } catch (IOException unused3) {
                                    }
                                }
                                ab.a(fileInputStream);
                                ab.a(randomAccessFile);
                                throw th;
                            }
                        }
                        if (fileLockLock != null && fileLockLock.isValid()) {
                            try {
                                fileLockLock.release();
                            } catch (IOException unused4) {
                            }
                        }
                        ab.a(fileInputStream);
                    } catch (Exception unused5) {
                        fileInputStream = null;
                    } catch (Throwable th2) {
                        th = th2;
                        fileInputStream = null;
                    }
                } catch (Exception unused6) {
                    fileInputStream = null;
                } catch (Throwable th3) {
                    th = th3;
                    fileInputStream = null;
                }
            } catch (Exception unused7) {
                randomAccessFile = null;
                fileInputStream = null;
            } catch (Throwable th4) {
                th = th4;
                randomAccessFile = null;
                fileInputStream = null;
            }
            ab.a(randomAccessFile);
        }
        return arrayList;
    }

    private void a() {
        SharedPreferences.Editor editorEdit = this.f247a.edit();
        editorEdit.putLong("last_upload_data_timestamp", System.currentTimeMillis() / 1000);
        editorEdit.commit();
    }

    private void a(hr hrVar) {
        if (hrVar.f510a != hl.AppInstallList || hrVar.f511a.startsWith("same_")) {
            return;
        }
        SharedPreferences.Editor editorEdit = this.f247a.edit();
        editorEdit.putLong("dc_job_result_time_4", hrVar.f509a);
        editorEdit.putString("dc_job_result_4", bp.a(hrVar.f511a));
        editorEdit.commit();
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    private boolean m230a() {
        if (bj.e(this.f8115a)) {
            return false;
        }
        if ((bj.g(this.f8115a) || bj.f(this.f8115a)) && !c()) {
            return true;
        }
        return (bj.h(this.f8115a) && !b()) || bj.i(this.f8115a);
    }

    private boolean b() {
        if (!this.f248a.a(ho.Upload3GSwitch.a(), true)) {
            return false;
        }
        return Math.abs((System.currentTimeMillis() / 1000) - this.f247a.getLong("last_upload_data_timestamp", -1L)) > ((long) Math.max(86400, this.f248a.a(ho.Upload3GFrequency.a(), 432000)));
    }

    private boolean c() {
        if (!this.f248a.a(ho.Upload4GSwitch.a(), true)) {
            return false;
        }
        return Math.abs((System.currentTimeMillis() / 1000) - this.f247a.getLong("last_upload_data_timestamp", -1L)) > ((long) Math.max(86400, this.f248a.a(ho.Upload4GFrequency.a(), com.tkay.expressad.d.a.b.bx)));
    }

    @Override // com.xiaomi.push.al.a
    /* JADX INFO: renamed from: a */
    public String mo162a() {
        return "1";
    }

    @Override // java.lang.Runnable
    public void run() {
        File file = new File(this.f8115a.getExternalFilesDir(null), "push_cdata.data");
        if (!bj.d(this.f8115a)) {
            if (file.length() > 1863680) {
                file.delete();
                return;
            }
            return;
        }
        if (!m230a() && file.exists()) {
            List<hr> listA = a(file);
            if (!ag.a(listA)) {
                int size = listA.size();
                if (size > 4000) {
                    listA = listA.subList(size - 4000, size);
                }
                ic icVar = new ic();
                icVar.a(listA);
                byte[] bArrA = ab.a(it.a(icVar));
                ii iiVar = new ii(RePlugin.PROCESS_UI, false);
                iiVar.c(ht.DataCollection.f519a);
                iiVar.a(bArrA);
                dm dmVarM225a = dn.a().m225a();
                if (dmVarM225a != null) {
                    dmVarM225a.a(iiVar, hj.Notification, null);
                }
                a();
            }
            file.delete();
        }
    }
}
