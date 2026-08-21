package com.huawei.hms.support.api.client;

public final class PendingResultsCreator {

    public static class DiscardedPendingResult<R extends com.huawei.hms.support.api.client.Result> extends com.huawei.hms.support.api.client.EmptyPendingResult {
        public DiscardedPendingResult() {
                r0 = this;
                r0.<init>()
                return
        }

        public DiscardedPendingResult(R r1) {
                r0 = this;
                r0.<init>()
                r0.setResult(r1)
                return
        }

        @Override
        public boolean isCanceled() {
                r1 = this;
                r0 = 1
                return r0
        }
    }

    public static class InstantPendingResult<R extends com.huawei.hms.support.api.client.Result> extends com.huawei.hms.support.api.client.EmptyPendingResult {
        public InstantPendingResult(R r1) {
                r0 = this;
                r0.<init>()
                r0.setResult(r1)
                return
        }

        @Override
        public void cancel() {
                r2 = this;
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                java.lang.String r1 = "cancel() is not available."
                r0.<init>(r1)
                throw r0
        }

        @Override
        public void setResultCallback(com.huawei.hms.support.api.client.ResultCallback r2) {
                r1 = this;
                com.huawei.hms.support.api.client.Result r0 = r1.getResult()
                r2.onResult(r0)
                return
        }
    }

    public PendingResultsCreator() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.huawei.hms.support.api.client.PendingResult<com.huawei.hms.support.api.client.Status> discardedPendingResult() {
            com.huawei.hms.support.api.client.PendingResultsCreator$DiscardedPendingResult r0 = new com.huawei.hms.support.api.client.PendingResultsCreator$DiscardedPendingResult
            r0.<init>()
            return r0
    }

    public static <R extends com.huawei.hms.support.api.client.Result> com.huawei.hms.support.api.client.PendingResult<R> discardedPendingResult(R r1) {
            com.huawei.hms.support.api.client.PendingResultsCreator$DiscardedPendingResult r0 = new com.huawei.hms.support.api.client.PendingResultsCreator$DiscardedPendingResult
            r0.<init>(r1)
            return r0
    }

    public static <R extends com.huawei.hms.support.api.client.Result> com.huawei.hms.common.api.OptionalPendingResult<R> instantPendingResult(R r1) {
            com.huawei.hms.support.api.client.PendingResultsCreator$InstantPendingResult r0 = new com.huawei.hms.support.api.client.PendingResultsCreator$InstantPendingResult
            r0.<init>(r1)
            com.huawei.hms.common.api.internal.OptionalPendingResultImpl r1 = new com.huawei.hms.common.api.internal.OptionalPendingResultImpl
            r1.<init>(r0)
            return r1
    }

    public static com.huawei.hms.support.api.client.PendingResult<com.huawei.hms.support.api.client.Status> instantPendingResult(com.huawei.hms.support.api.client.Status r1) {
            com.huawei.hms.support.api.client.PendingResultsCreator$InstantPendingResult r0 = new com.huawei.hms.support.api.client.PendingResultsCreator$InstantPendingResult
            r0.<init>(r1)
            return r0
    }
}
