package com.tencent.mm.opensdk.modelbiz;

import com.tencent.mm.opensdk.modelbase.BaseReq;

public class OpenRankList {

    public static class Req extends BaseReq {
        @Override
        public boolean checkArgs() {
            return true;
        }

        @Override
        public int getType() {
            return 11;
        }
    }
}
