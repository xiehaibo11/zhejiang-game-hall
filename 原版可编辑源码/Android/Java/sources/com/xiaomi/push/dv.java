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

public class dv extends al.a {
    private Context a;
    private SharedPreferences a;
    private com.xiaomi.push.service.ba a;

    public dv(Context context) {
        this.a = context;
        this.a = context.getSharedPreferences("mipush_extra", 0);
        this.a = com.xiaomi.push.service.ba.a(context);
    }

    private List<hr> a(File file) {
        RandomAccessFile randomAccessFile;
        FileInputStream fileInputStream;
        dm dmVarA = dn.a().a();
        String strA = dmVarA == null ? "" : dmVarA.a();
        FileLock fileLock = null;
        if (TextUtils.isEmpty(strA)) {
            return null;
        }
        ArrayList arrayList = new ArrayList();
        byte[] bArr = new byte[4];
        synchronized (dq.a) {
            try {
                File file2 = new File(this.a.getExternalFilesDir(null), "push_cdata.lock");
                ab.a(file2);
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
        SharedPreferences.Editor editorEdit = this.a.edit();
        editorEdit.putLong("last_upload_data_timestamp", System.currentTimeMillis() / 1000);
        editorEdit.commit();
    }

    private void a(hr hrVar) {
        if (hrVar.a != hl.b || hrVar.a.startsWith("same_")) {
            return;
        }
        SharedPreferences.Editor editorEdit = this.a.edit();
        editorEdit.putLong("dc_job_result_time_4", hrVar.a);
        editorEdit.putString("dc_job_result_4", bp.a(hrVar.a));
        editorEdit.commit();
    }

    private boolean a() {
        if (bj.e(this.a)) {
            return false;
        }
        if ((bj.g(this.a) || bj.f(this.a)) && !c()) {
            return true;
        }
        return (bj.h(this.a) && !b()) || bj.i(this.a);
    }

    private boolean b() {
        if (!this.a.a(ho.L.a(), true)) {
            return false;
        }
        return Math.abs((System.currentTimeMillis() / 1000) - this.a.getLong("last_upload_data_timestamp", -1L)) > ((long) Math.max(86400, this.a.a(ho.M.a(), 432000)));
    }

    private boolean c() {
        if (!this.a.a(ho.J.a(), true)) {
            return false;
        }
        return Math.abs((System.currentTimeMillis() / 1000) - this.a.getLong("last_upload_data_timestamp", -1L)) > ((long) Math.max(86400, this.a.a(ho.K.a(), com.tkay.expressad.d.a.b.bx)));
    }

    @Override
    public String a() {
        return "1";
    }

    @Override
    public void run() {
        File file = new File(this.a.getExternalFilesDir(null), "push_cdata.data");
        if (!bj.d(this.a)) {
            if (file.length() > 1863680) {
                file.delete();
                return;
            }
            return;
        }
        if (!a() && file.exists()) {
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
                iiVar.c(ht.q.a);
                iiVar.a(bArrA);
                dm dmVarA = dn.a().a();
                if (dmVarA != null) {
                    dmVarA.a(iiVar, hj.i, null);
                }
                a();
            }
            file.delete();
        }
    }
}
