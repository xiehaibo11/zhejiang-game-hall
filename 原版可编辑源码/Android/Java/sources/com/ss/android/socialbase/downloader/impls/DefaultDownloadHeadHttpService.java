package com.ss.android.socialbase.downloader.impls;

import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.ss.android.socialbase.downloader.model.HttpHeader;
import com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection;
import com.ss.android.socialbase.downloader.network.IDownloadHeadHttpService;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;
import java.io.IOException;
import java.util.List;
import okhttp3.Call;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.Response;

public class DefaultDownloadHeadHttpService implements IDownloadHeadHttpService {
    @Override
    public IDownloadHeadHttpConnection downloadWithConnection(String str, List<HttpHeader> list) throws IOException {
        OkHttpClient downloadClient = DownloadComponentManager.getDownloadClient();
        if (downloadClient == null) {
            throw new IOException("can't get httpClient");
        }
        Request.Builder builderHead = new Request.Builder().url(str).head();
        if (list != null && list.size() > 0) {
            for (HttpHeader httpHeader : list) {
                builderHead.addHeader(httpHeader.getName(), DownloadUtils.getEncodedStr(httpHeader.getValue()));
            }
        }
        final Call callNewCall = downloadClient.newCall(builderHead.build());
        final Response responseExecute = callNewCall.execute();
        if (responseExecute == null) {
            throw new IOException("can't get response");
        }
        if (DownloadExpSwitchCode.isSwitchEnable(2097152)) {
            responseExecute.close();
        }
        return new IDownloadHeadHttpConnection() {
            @Override
            public String getResponseHeaderField(String str2) {
                return responseExecute.header(str2);
            }

            @Override
            public int getResponseCode() throws IOException {
                return responseExecute.code();
            }

            @Override
            public void cancel() {
                Call call = callNewCall;
                if (call == null || call.getCanceled()) {
                    return;
                }
                callNewCall.cancel();
            }
        };
    }
}
