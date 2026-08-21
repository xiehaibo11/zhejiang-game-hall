package com.czhj.sdk.common.Database;

import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public interface SQLiteLisenter {
    void onFailed(Error error);

    void onSuccess(List<?> list);
}
