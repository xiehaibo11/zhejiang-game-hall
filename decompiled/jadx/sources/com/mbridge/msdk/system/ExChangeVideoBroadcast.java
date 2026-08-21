package com.mbridge.msdk.system;

import android.content.BroadcastReceiver;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.os.ParcelFileDescriptor;
import android.os.RemoteException;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.aidl.VideoBinderInterface;
import com.mbridge.msdk.foundation.aidl.VideoBinderListener;
import com.mbridge.msdk.foundation.download.DownloadResourceType;
import com.mbridge.msdk.foundation.download.core.GlobalComponent;
import com.mbridge.msdk.foundation.download.database.DownloadModel;
import com.mbridge.msdk.foundation.same.b.c;
import com.mbridge.msdk.foundation.same.b.e;
import com.mbridge.msdk.foundation.same.f.b;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class ExChangeVideoBroadcast extends BroadcastReceiver {
    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        String action;
        if (context == null || intent == null) {
            return;
        }
        String string = null;
        try {
            action = intent.getAction();
        } catch (Exception unused) {
            action = null;
        }
        if (TextUtils.isEmpty(action) || !TextUtils.equals(action, "mbridge_action_exchange_pm_receiver")) {
            return;
        }
        try {
            string = intent.getExtras().getString("pm-receiver");
        } catch (Exception unused2) {
        }
        if (TextUtils.isEmpty(string) || TextUtils.equals(string, context.getPackageName())) {
            return;
        }
        try {
            abortBroadcast();
        } catch (Exception unused3) {
        }
        b.a().execute(new ExChangeVideoRunnable(string));
    }

    private static class ExChangeVideoRunnable implements Runnable {
        private String pn;
        private VideoBinderInterface videoBinderInterface;

        public ExChangeVideoRunnable(String str) {
            this.pn = str;
        }

        @Override // java.lang.Runnable
        public void run() {
            List<DownloadModel> listFindAll;
            if (com.mbridge.msdk.foundation.controller.a.f().j() == null || TextUtils.isEmpty(this.pn)) {
                return;
            }
            try {
                listFindAll = GlobalComponent.getInstance().getDatabaseHelper().findAll();
            } catch (Exception unused) {
                listFindAll = null;
            }
            ArrayList arrayList = new ArrayList();
            final ArrayList arrayList2 = new ArrayList();
            if (listFindAll != null && listFindAll.size() > 0) {
                for (DownloadModel downloadModel : listFindAll) {
                    if (downloadModel != null && downloadModel.getDownloadedBytes() == downloadModel.getTotalBytes()) {
                        arrayList.add(downloadModel);
                        arrayList2.add(downloadModel.getResourceUrl());
                    }
                }
            }
            Intent intent = new Intent("com.mbridge.msdk.foundation.aidl.VideoRequestService");
            intent.setClassName(this.pn, "com.mbridge.msdk.foundation.aidl.VideoRequestService");
            com.mbridge.msdk.foundation.controller.a.f().j().bindService(intent, new ServiceConnection() { // from class: com.mbridge.msdk.system.ExChangeVideoBroadcast.ExChangeVideoRunnable.1
                @Override // android.content.ServiceConnection
                public final void onServiceDisconnected(ComponentName componentName) {
                }

                @Override // android.content.ServiceConnection
                public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
                    if (iBinder != null) {
                        try {
                            ExChangeVideoRunnable.this.videoBinderInterface = VideoBinderInterface.Stub.asInterface(iBinder);
                        } catch (Exception unused2) {
                        }
                    }
                    if (ExChangeVideoRunnable.this.videoBinderInterface != null) {
                        try {
                            ExChangeVideoRunnable.this.videoBinderInterface.registerListener(new VideoBinderListener.a() { // from class: com.mbridge.msdk.system.ExChangeVideoBroadcast.ExChangeVideoRunnable.1.1
                                @Override // com.mbridge.msdk.foundation.aidl.VideoBinderListener
                                public final void onVideo(final String str, final long j, final String str2, final String str3, final String str4, final ParcelFileDescriptor parcelFileDescriptor) throws RemoteException {
                                    b.a().execute(new Runnable() { // from class: com.mbridge.msdk.system.ExChangeVideoBroadcast.ExChangeVideoRunnable.1.1.1
                                        @Override // java.lang.Runnable
                                        public final void run() throws Throwable {
                                            ByteArrayOutputStream byteArrayOutputStream;
                                            FileOutputStream fileOutputStream;
                                            String str5;
                                            FileInputStream fileInputStream;
                                            FileOutputStream fileOutputStream2;
                                            ByteArrayOutputStream byteArrayOutputStream2;
                                            byte[] bArr;
                                            FileInputStream fileInputStream2 = null;
                                            try {
                                                try {
                                                    str5 = e.b(c.MBRIDGE_VC) + File.separator;
                                                    fileInputStream = new FileInputStream(parcelFileDescriptor.getFileDescriptor());
                                                    try {
                                                        fileOutputStream2 = new FileOutputStream(new File(str5, str4));
                                                        try {
                                                            byteArrayOutputStream2 = new ByteArrayOutputStream();
                                                            try {
                                                                bArr = new byte[4096];
                                                            } catch (Throwable th) {
                                                                th = th;
                                                                byteArrayOutputStream = byteArrayOutputStream2;
                                                                fileOutputStream = fileOutputStream2;
                                                            }
                                                        } catch (Throwable th2) {
                                                            th = th2;
                                                            fileOutputStream = fileOutputStream2;
                                                            byteArrayOutputStream = null;
                                                        }
                                                    } catch (Throwable th3) {
                                                        th = th3;
                                                        byteArrayOutputStream = null;
                                                        fileOutputStream = null;
                                                    }
                                                } catch (Throwable th4) {
                                                    th = th4;
                                                    byteArrayOutputStream = null;
                                                    fileOutputStream = null;
                                                }
                                                while (true) {
                                                    int i = fileInputStream.read(bArr, 0, 4096);
                                                    if (i == -1) {
                                                        break;
                                                    }
                                                    try {
                                                        byteArrayOutputStream2.write(bArr, 0, i);
                                                    } catch (Throwable th5) {
                                                        th = th5;
                                                        fileInputStream2 = fileInputStream;
                                                        byteArrayOutputStream = byteArrayOutputStream2;
                                                        fileOutputStream = fileOutputStream2;
                                                    }
                                                    fileInputStream2 = fileInputStream;
                                                    if (fileInputStream2 != null) {
                                                        try {
                                                            fileInputStream2.close();
                                                        } catch (IOException unused3) {
                                                        }
                                                    }
                                                    if (fileOutputStream != null) {
                                                        try {
                                                            fileOutputStream.close();
                                                        } catch (IOException unused4) {
                                                        }
                                                    }
                                                    if (byteArrayOutputStream != null) {
                                                        try {
                                                            byteArrayOutputStream.close();
                                                            throw th;
                                                        } catch (IOException unused5) {
                                                            throw th;
                                                        }
                                                    }
                                                    throw th;
                                                }
                                                fileOutputStream2.write(byteArrayOutputStream2.toByteArray());
                                                fileOutputStream2.flush();
                                                byteArrayOutputStream = byteArrayOutputStream2;
                                                fileOutputStream = fileOutputStream2;
                                                try {
                                                    GlobalComponent.getInstance().getDatabaseHelper().insert(DownloadModel.create(str2, str, str, str3, str5, str4, j, j, 100, 0, DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_VIDEO, 1));
                                                    try {
                                                        fileInputStream.close();
                                                    } catch (IOException unused6) {
                                                    }
                                                    try {
                                                        fileOutputStream.close();
                                                    } catch (IOException unused7) {
                                                    }
                                                    byteArrayOutputStream.close();
                                                } catch (Throwable th6) {
                                                    th = th6;
                                                }
                                            } catch (IOException unused8) {
                                            }
                                        }
                                    });
                                }
                            });
                            try {
                                if (arrayList2 == null || arrayList2.size() <= 0) {
                                    ExChangeVideoRunnable.this.videoBinderInterface.requestVideo(null);
                                } else {
                                    String[] strArr = new String[arrayList2.size()];
                                    for (int i = 0; i < arrayList2.size(); i++) {
                                        strArr[i] = (String) arrayList2.get(i);
                                    }
                                    ExChangeVideoRunnable.this.videoBinderInterface.requestVideo(strArr);
                                }
                            } catch (RemoteException unused3) {
                            }
                        } catch (Exception e) {
                            e.printStackTrace();
                        }
                    }
                }
            }, 1);
        }
    }
}
