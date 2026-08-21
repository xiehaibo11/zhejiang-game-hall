package com.ss.android.downloadlib.q;

import android.content.ContentUris;
import android.content.Context;
import android.database.Cursor;
import android.media.MediaScannerConnection;
import android.net.Uri;
import android.provider.MediaStore;
import android.text.TextUtils;
import com.ss.android.downloadad.api.constant.AdBaseConstants;
import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.socialbase.downloader.constants.DbJsonConstants;
import com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.ss.android.socialbase.downloader.exception.BaseException;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;
import com.tkay.china.common.a.a;
import java.io.File;

public class rg implements IDownloadCompleteHandler {
    @Override
    public void handle(DownloadInfo downloadInfo) throws BaseException {
        if (downloadInfo == null || !rg(downloadInfo)) {
            return;
        }
        rg(bm.getContext(), downloadInfo);
    }

    @Override
    public boolean needHandle(DownloadInfo downloadInfo) {
        if (downloadInfo != null) {
            return com.ss.android.downloadlib.utils.pt.df(DownloadSetting.obtain(downloadInfo.getId()));
        }
        return false;
    }

    private boolean rg(DownloadInfo downloadInfo) {
        String str = downloadInfo.getSavePath() + File.separator + downloadInfo.getName();
        File file = new File(str);
        String strRg = com.ss.android.socialbase.appdownloader.c.rg.pp.rg(bm.getContext(), com.ss.android.socialbase.appdownloader.q.rg(downloadInfo, file), str);
        boolean zRenameTo = false;
        if (!TextUtils.isEmpty(strRg)) {
            String str2 = strRg + a.g;
            if (str2.equals(downloadInfo.getName())) {
                return true;
            }
            try {
                zRenameTo = file.renameTo(new File(downloadInfo.getSavePath() + File.separator + str2));
                if (zRenameTo) {
                    downloadInfo.setName(str2);
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        return zRenameTo;
    }

    private void rg(Context context, final DownloadInfo downloadInfo) {
        String str = downloadInfo.getSavePath() + File.separator + downloadInfo.getName();
        Cursor cursorQuery = context.getContentResolver().query(MediaStore.Files.getContentUri("external"), new String[]{"_id"}, "_data=? ", new String[]{str}, null);
        if (cursorQuery != null && cursorQuery.moveToFirst()) {
            downloadInfo.safePutToDBJsonData(DbJsonConstants.CONTENT_URI, ContentUris.withAppendedId(MediaStore.Files.getContentUri("external"), cursorQuery.getInt(cursorQuery.getColumnIndex("_id"))).toString());
        } else {
            MediaScannerConnection.scanFile(context, new String[]{str}, new String[]{AdBaseConstants.MIME_APK}, new MediaScannerConnection.OnScanCompletedListener() {
                @Override
                public void onScanCompleted(String str2, Uri uri) {
                    if (uri != null) {
                        downloadInfo.safePutToDBJsonData(DbJsonConstants.CONTENT_URI, uri.toString());
                        DownloadComponentManager.getDownloadCache().updateDownloadInfo(downloadInfo);
                    }
                }
            });
        }
        DownloadUtils.safeClose(cursorQuery);
    }
}
