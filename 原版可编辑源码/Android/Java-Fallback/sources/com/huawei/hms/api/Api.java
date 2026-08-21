package com.huawei.hms.api;

import com.huawei.hms.api.Api.ApiOptions;

public class Api<O extends com.huawei.hms.api.Api.ApiOptions> {
    private final java.lang.String a;
    private final com.huawei.hms.api.Api.Options<O> b;
    public java.util.List<com.huawei.hms.common.api.ConnectionPostProcessor> mConnetctPostList;

    public interface ApiOptions {

        public interface HasOptions extends com.huawei.hms.api.Api.ApiOptions {
        }

        public static final class NoOptions implements com.huawei.hms.api.Api.ApiOptions.NotRequiredOptions {
            public NoOptions() {
                    r0 = this;
                    r0.<init>()
                    return
            }
        }

        public interface NotRequiredOptions extends com.huawei.hms.api.Api.ApiOptions {
        }

        public interface Optional extends com.huawei.hms.api.Api.ApiOptions.HasOptions, com.huawei.hms.api.Api.ApiOptions.NotRequiredOptions {
        }
    }

    public static abstract class Options<O> {
        public Options() {
                r0 = this;
                r0.<init>()
                return
        }

        public java.util.List<com.huawei.hms.support.api.entity.auth.PermissionInfo> getPermissionInfoList(O r1) {
                r0 = this;
                java.util.List r1 = java.util.Collections.emptyList()
                return r1
        }

        public java.util.List<com.huawei.hms.support.api.entity.auth.Scope> getScopeList(O r1) {
                r0 = this;
                java.util.List r1 = java.util.Collections.emptyList()
                return r1
        }
    }

    public Api(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r1 = 0
            r0.b = r1
            return
    }

    public Api(java.lang.String r1, com.huawei.hms.api.Api.Options<O> r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    public java.lang.String getApiName() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public com.huawei.hms.api.Api.Options<O> getOptions() {
            r1 = this;
            com.huawei.hms.api.Api$Options<O extends com.huawei.hms.api.Api$ApiOptions> r0 = r1.b
            return r0
    }

    public java.util.List<com.huawei.hms.common.api.ConnectionPostProcessor> getmConnetctPostList() {
            r1 = this;
            java.util.List<com.huawei.hms.common.api.ConnectionPostProcessor> r0 = r1.mConnetctPostList
            return r0
    }

    public void setmConnetctPostList(java.util.List<com.huawei.hms.common.api.ConnectionPostProcessor> r1) {
            r0 = this;
            r0.mConnetctPostList = r1
            return
    }
}
