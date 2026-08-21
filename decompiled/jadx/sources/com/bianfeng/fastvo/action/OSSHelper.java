package com.bianfeng.fastvo.action;

import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import com.alibaba.sdk.android.oss.ClientException;
import com.alibaba.sdk.android.oss.OSS;
import com.alibaba.sdk.android.oss.ServiceException;
import com.alibaba.sdk.android.oss.callback.OSSCompletedCallback;
import com.alibaba.sdk.android.oss.callback.OSSProgressCallback;
import com.alibaba.sdk.android.oss.model.GetObjectRequest;
import com.alibaba.sdk.android.oss.model.GetObjectResult;
import com.alibaba.sdk.android.oss.model.PutObjectRequest;
import com.alibaba.sdk.android.oss.model.PutObjectResult;
import com.bianfeng.fastvo.FastConfig;
import com.bianfeng.fastvo.util.FastovAppConextUtils;
import com.bianfeng.fastvo.util.FileUtil;
import com.bianfeng.ymnsdk.util.Logger;
import java.text.SimpleDateFormat;
import java.util.Date;

/* JADX INFO: loaded from: classes.dex */
public class OSSHelper {
    private static OSS oss;

    public static void init(Context context) {
        oss = FastvoOssClientFactory.create(context);
    }

    public static void upLoadFile(String str, final UploadListener uploadListener) {
        final String objectKey = getObjectKey(str);
        final String bucketName = FastovAppConextUtils.getBucketName();
        PutObjectRequest putObjectRequest = new PutObjectRequest(bucketName, objectKey, str);
        Logger.i("PutObjectBUCKET_NAME: " + bucketName + " objectKey: " + objectKey + "    filePath :" + str);
        putObjectRequest.setProgressCallback(new OSSProgressCallback<PutObjectRequest>() { // from class: com.bianfeng.fastvo.action.OSSHelper.1
            @Override // com.alibaba.sdk.android.oss.callback.OSSProgressCallback
            public void onProgress(PutObjectRequest putObjectRequest2, long j, long j2) {
                Logger.i("PutObjectcurrentSize: " + j + " totalSize: " + j2);
            }
        });
        oss.asyncPutObject(putObjectRequest, new OSSCompletedCallback<PutObjectRequest, PutObjectResult>() { // from class: com.bianfeng.fastvo.action.OSSHelper.2
            @Override // com.alibaba.sdk.android.oss.callback.OSSCompletedCallback
            public void onSuccess(PutObjectRequest putObjectRequest2, PutObjectResult putObjectResult) {
                Logger.d("PutObjectUploadSuccess");
                String strPresignPublicObjectURL = OSSHelper.oss.presignPublicObjectURL(bucketName, objectKey);
                Logger.d("PutObjecturl is " + strPresignPublicObjectURL);
                uploadListener.onComplete(strPresignPublicObjectURL);
            }

            @Override // com.alibaba.sdk.android.oss.callback.OSSCompletedCallback
            public void onFailure(PutObjectRequest putObjectRequest2, ClientException clientException, ServiceException serviceException) {
                if (clientException != null) {
                    clientException.printStackTrace();
                    Logger.i("ErrorCode  ---" + clientException.getMessage());
                    uploadListener.onError(601, "本地网络异常");
                }
                if (serviceException != null) {
                    Logger.e("ErrorCode  ---" + serviceException.getErrorCode());
                    Logger.e("RequestId  ---" + serviceException.getRequestId());
                    Logger.e("HostId  ---" + serviceException.getHostId());
                    Logger.e("RawMessage  ---" + serviceException.getRawMessage());
                    uploadListener.onError(Integer.parseInt(serviceException.getErrorCode()), serviceException.getRawMessage());
                }
            }
        });
    }

    private static String getObjectKey(String str) {
        String uid = FastConfig.getUid();
        if (TextUtils.isEmpty(uid)) {
            uid = FastConfig.getOpenId();
        }
        return String.format("%s/%s/%s/%s/%s", FastConfig.REQUEST_KEY, new SimpleDateFormat("yyyy/MM").format(new Date()), FastConfig.getAppId(), FastConfig.getPlatformId(), uid + "_" + System.currentTimeMillis() + FileUtil.getSuffix(str));
    }

    public static GetObjectResult downLoadfile(String str) {
        try {
            return oss.getObject(new GetObjectRequest(FastovAppConextUtils.getBucketName(), str));
        } catch (ClientException e) {
            e.printStackTrace();
            return null;
        } catch (ServiceException e2) {
            Log.e("RequestId", e2.getRequestId());
            Log.e("ErrorCode", e2.getErrorCode());
            Log.e("HostId", e2.getHostId());
            Log.e("RawMessage", e2.getRawMessage());
            return null;
        }
    }
}
