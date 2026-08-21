package com.czhj.sdk.common.Database;

import java.util.List;

public interface SQLiteLisenter {
    void onFailed(Error error);

    void onSuccess(List<?> list);
}
