package com.bykv.vk.openvk.api;

import com.bykv.vk.openvk.api.proto.Result;
import com.bykv.vk.openvk.api.proto.ValueSet;

/* JADX INFO: loaded from: classes.dex */
public final class df {
    private boolean rg = false;
    private int df = -1;
    private String q = null;
    private ValueSet pt = null;

    private df() {
    }

    public static final df rg() {
        return new df();
    }

    public df rg(boolean z) {
        this.rg = z;
        return this;
    }

    public df rg(int i) {
        this.df = i;
        return this;
    }

    public df rg(ValueSet valueSet) {
        this.pt = valueSet;
        return this;
    }

    public Result df() {
        boolean z = this.rg;
        int i = this.df;
        String str = this.q;
        ValueSet valueSetDf = this.pt;
        if (valueSetDf == null) {
            valueSetDf = q.rg().df();
        }
        return new rg(z, i, str, valueSetDf);
    }

    private static final class rg implements Result {
        private final int df;
        private final ValueSet pt;
        private final String q;
        private final boolean rg;

        private rg(boolean z, int i, String str, ValueSet valueSet) {
            this.rg = z;
            this.df = i;
            this.q = str;
            this.pt = valueSet;
        }

        @Override // com.bykv.vk.openvk.api.proto.Result
        public boolean isSuccess() {
            return this.rg;
        }

        @Override // com.bykv.vk.openvk.api.proto.Result
        public int code() {
            return this.df;
        }

        @Override // com.bykv.vk.openvk.api.proto.Result
        public String message() {
            return this.q;
        }

        @Override // com.bykv.vk.openvk.api.proto.Result
        public ValueSet values() {
            return this.pt;
        }
    }
}
