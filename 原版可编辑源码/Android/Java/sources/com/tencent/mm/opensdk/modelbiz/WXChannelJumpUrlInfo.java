package com.tencent.mm.opensdk.modelbiz;

import android.os.Bundle;
import com.tencent.mm.opensdk.utils.Log;

public class WXChannelJumpUrlInfo extends WXChannelBaseJumpInfo {
    private static final int LENGTH_LIMIT = 10240;
    private static final String TAG = "MicroMsg.SDK.WXChannelJumpUrlInfo";
    public String url;

    @Override
    public boolean checkArgs() {
        String str;
        String str2 = this.url;
        if (str2 == null || str2.length() <= 0) {
            str = "checkArgs fail, url is null";
        } else {
            if (this.url.length() < 10240) {
                return true;
            }
            str = "checkArgs fail, url is invalid";
        }
        Log.e(TAG, str);
        return false;
    }

    @Override
    public void serialize(Bundle bundle) {
        super.serialize(bundle);
        bundle.putString("wx_channel_jump_url", this.url);
    }

    @Override
    public int type() {
        return 2;
    }

    @Override
    public void unserialize(Bundle bundle) {
        super.unserialize(bundle);
        this.url = bundle.getString("wx_channel_jump_url");
    }
}
