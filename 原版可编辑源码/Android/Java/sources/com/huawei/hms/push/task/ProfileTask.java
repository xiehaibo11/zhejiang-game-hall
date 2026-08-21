package com.huawei.hms.push.task;

import com.huawei.hmf.tasks.TaskCompletionSource;
import com.huawei.hms.aaid.constant.ErrorEnum;
import com.huawei.hms.aaid.task.PushClient;
import com.huawei.hms.common.ApiException;
import com.huawei.hms.common.internal.ResponseErrorCode;
import com.huawei.hms.push.utils.PushBiUtil;
import com.huawei.hms.support.api.client.Status;
import com.huawei.hms.support.log.HMSLog;

public class ProfileTask extends BaseVoidTask {
    public ProfileTask(String str, String str2, String str3) {
        super(str, str2, str3);
    }

    @Override
    public int getApiLevel() {
        return 2;
    }

    @Override
    public int getMinApkVersion() {
        return 50004300;
    }

    @Override
    public void doExecute(PushClient pushClient, ResponseErrorCode responseErrorCode, String str, TaskCompletionSource<Void> taskCompletionSource) {
        if (responseErrorCode.getErrorCode() == 0) {
            HMSLog.i("HmsInstanceId", "ProfileTask success.");
            taskCompletionSource.setResult(null);
        } else {
            HMSLog.e("HmsInstanceId", "ProfileTask failed, ErrorCode: " + responseErrorCode.getErrorCode());
            ErrorEnum errorEnumFromCode = ErrorEnum.fromCode(responseErrorCode.getErrorCode());
            if (errorEnumFromCode != ErrorEnum.ERROR_UNKNOWN) {
                taskCompletionSource.setException(errorEnumFromCode.toApiException());
            } else {
                taskCompletionSource.setException(new ApiException(new Status(responseErrorCode.getErrorCode(), responseErrorCode.getErrorReason())));
            }
        }
        PushBiUtil.reportExit(pushClient.getContext(), getUri(), responseErrorCode);
    }
}
