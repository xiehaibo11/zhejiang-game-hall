package com.mbridge.msdk.foundation.aidl;

import android.app.Service;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.os.MemoryFile;
import android.os.ParcelFileDescriptor;
import android.os.RemoteException;
import com.mbridge.msdk.foundation.aidl.VideoBinderInterface;
import com.mbridge.msdk.foundation.download.core.GlobalComponent;
import com.mbridge.msdk.foundation.download.database.DownloadModel;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class VideoRequestService extends Service {
    private volatile VideoBinderListener a = null;
    private volatile VideoBinderInterface b = null;

    @Override
    public void onCreate() {
        super.onCreate();
        this.b = new VideoBinderInterface.Stub() {
            @Override
            public final void requestVideo(final String[] strArr) throws RemoteException {
                if (VideoRequestService.this.a != null) {
                    com.mbridge.msdk.foundation.same.f.b.a().execute(new Runnable() {
                        @Override
                        public final void run() {
                            List<DownloadModel> listFindAll = GlobalComponent.getInstance().getDatabaseHelper().findAll();
                            List arrayList = new ArrayList();
                            String[] strArr2 = strArr;
                            if (strArr2 != null && strArr2.length > 0) {
                                arrayList = Arrays.asList(strArr2);
                            }
                            if (listFindAll == null || listFindAll.size() <= 0) {
                                return;
                            }
                            for (DownloadModel downloadModel : listFindAll) {
                                if (downloadModel != null && downloadModel.getDownloadedBytes() == downloadModel.getTotalBytes() && !arrayList.contains(downloadModel.getDownloadUrl())) {
                                    try {
                                        File file = new File(downloadModel.getSaveDirectorPath(), downloadModel.getSaveFileName());
                                        if (file.isFile() && file.exists()) {
                                            FileInputStream fileInputStream = new FileInputStream(file);
                                            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
                                            byte[] bArr = new byte[4096];
                                            while (true) {
                                                int i = fileInputStream.read(bArr, 0, 4096);
                                                if (i == -1) {
                                                    break;
                                                } else {
                                                    byteArrayOutputStream.write(bArr, 0, i);
                                                }
                                            }
                                            byte[] byteArray = byteArrayOutputStream.toByteArray();
                                            MemoryFile memoryFile = new MemoryFile(downloadModel.getSaveFileName(), byteArray.length);
                                            memoryFile.writeBytes(byteArray, 0, 0, byteArray.length);
                                            ParcelFileDescriptor parcelFileDescriptorDup = ParcelFileDescriptor.dup(a.a(memoryFile));
                                            if (VideoRequestService.this.a != null) {
                                                VideoRequestService.this.a.onVideo(downloadModel.getResourceUrl(), downloadModel.getTotalBytes(), downloadModel.getDownloadId(), downloadModel.getEtag(), downloadModel.getSaveFileName(), parcelFileDescriptorDup);
                                            }
                                        }
                                    } catch (Exception unused) {
                                    } catch (Throwable th) {
                                        th.printStackTrace();
                                    }
                                }
                            }
                        }
                    });
                }
            }

            @Override
            public final void registerListener(VideoBinderListener videoBinderListener) throws RemoteException {
                VideoRequestService.this.a = videoBinderListener;
            }
        };
    }

    @Override
    public IBinder onBind(Intent intent) {
        if (this.b != null) {
            try {
                return (IBinder) this.b;
            } catch (Throwable unused) {
            }
        }
        return null;
    }

    @Override
    public void unbindService(ServiceConnection serviceConnection) {
        super.unbindService(serviceConnection);
        this.b = null;
        this.a = null;
    }
}
