package com.huawei.hms.api;

import com.huawei.hms.api.Api.ApiOptions;
import com.huawei.hms.common.api.ConnectionPostProcessor;
import com.huawei.hms.support.api.entity.auth.PermissionInfo;
import com.huawei.hms.support.api.entity.auth.Scope;
import java.util.Collections;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class Api<O extends ApiOptions> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f1990a;
    private final Options<O> b;
    public List<ConnectionPostProcessor> mConnetctPostList;

    public interface ApiOptions {

        public interface HasOptions extends ApiOptions {
        }

        public static final class NoOptions implements NotRequiredOptions {
        }

        public interface NotRequiredOptions extends ApiOptions {
        }

        public interface Optional extends HasOptions, NotRequiredOptions {
        }
    }

    public static abstract class Options<O> {
        public List<PermissionInfo> getPermissionInfoList(O o) {
            return Collections.emptyList();
        }

        public List<Scope> getScopeList(O o) {
            return Collections.emptyList();
        }
    }

    public Api(String str) {
        this.f1990a = str;
        this.b = null;
    }

    public String getApiName() {
        return this.f1990a;
    }

    public Options<O> getOptions() {
        return this.b;
    }

    public List<ConnectionPostProcessor> getmConnetctPostList() {
        return this.mConnetctPostList;
    }

    public void setmConnetctPostList(List<ConnectionPostProcessor> list) {
        this.mConnetctPostList = list;
    }

    public Api(String str, Options<O> options) {
        this.f1990a = str;
        this.b = options;
    }
}
