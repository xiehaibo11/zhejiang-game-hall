package com.bytedance.android.live.base.api.push;

/* JADX INFO: loaded from: classes.dex */
public interface PushInterceptor {
    InterceptResult intercept();

    public static class InterceptResult {
        public final boolean intercept;
        public final String interceptReason;

        public InterceptResult(boolean z) {
            this(z, "");
        }

        public InterceptResult(boolean z, String str) {
            this.intercept = z;
            this.interceptReason = "";
        }
    }
}
