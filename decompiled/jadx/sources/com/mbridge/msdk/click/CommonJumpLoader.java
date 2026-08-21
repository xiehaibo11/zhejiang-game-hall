package com.mbridge.msdk.click;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.system.NoProGuard;
import java.io.Serializable;

/* JADX INFO: loaded from: classes2.dex */
public final class CommonJumpLoader extends d {
    private int d;
    private com.mbridge.msdk.foundation.same.e.b g;
    private j h;
    private int b = 0;
    private String c = null;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    JumpLoaderResult f3134a = null;
    private e e = null;
    private boolean f = true;
    private Handler i = new Handler(Looper.getMainLooper());

    public CommonJumpLoader(Context context, boolean z) {
        if (z) {
            this.g = new com.mbridge.msdk.foundation.same.e.b(context, 2);
        } else {
            this.g = new com.mbridge.msdk.foundation.same.e.b(context);
        }
        this.h = new j(context, z);
    }

    public final void a(String str, String str2, CampaignEx campaignEx, e eVar) {
        a(str, str2, campaignEx, eVar, null);
    }

    public final void a(String str, String str2, CampaignEx campaignEx, e eVar, String str3, boolean z, boolean z2, int i) {
        String id;
        this.c = str3;
        this.e = eVar;
        this.f3134a = null;
        this.d = i;
        if (campaignEx != null) {
            z = "5".equals(campaignEx.getClick_mode()) || "6".equals(campaignEx.getClick_mode());
            id = campaignEx.getId();
        } else {
            id = "";
        }
        this.h.a(str3, eVar, z, str, id, str2, null, campaignEx, z, z2, i);
    }

    public final void a(String str, String str2, CampaignEx campaignEx, e eVar, com.mbridge.msdk.rover.d dVar) {
        this.c = new String(campaignEx.getClickURL());
        this.e = eVar;
        this.f3134a = null;
        this.h.a(campaignEx.getClickURL(), eVar, "5".equals(campaignEx.getClick_mode()) || "6".equals(campaignEx.getClick_mode()), str, campaignEx.getId(), str2, dVar, campaignEx, true, false, com.mbridge.msdk.click.a.a.j);
    }

    @Override // com.mbridge.msdk.click.d
    public final void a() {
        this.f = false;
    }

    public static class JumpLoaderResult implements NoProGuard, Serializable {
        public static final int CODE_DOWNLOAD = 3;
        public static final int CODE_LINK = 2;
        public static final int CODE_MARKET = 1;
        public static final int CODE_NULL = 4;
        private static final long serialVersionUID = 1;
        private int code;
        private String content;
        private String exceptionMsg;
        private String header;
        private boolean is302Jump;
        private boolean jumpDone;
        private String msg;
        private String noticeurl;
        private int statusCode;
        private boolean success;
        private int type;
        private String url;

        public int getStatusCode() {
            return this.statusCode;
        }

        public void setStatusCode(int i) {
            this.statusCode = i;
        }

        public boolean isIs302Jump() {
            return this.is302Jump;
        }

        public void setIs302Jump(boolean z) {
            this.is302Jump = z;
        }

        public int getType() {
            return this.type;
        }

        public void setType(int i) {
            this.type = i;
        }

        public String getHeader() {
            return this.header;
        }

        public void setHeader(String str) {
            this.header = str;
        }

        public String getExceptionMsg() {
            return this.exceptionMsg;
        }

        public void setExceptionMsg(String str) {
            this.exceptionMsg = str;
        }

        public String getContent() {
            return this.content;
        }

        public void setContent(String str) {
            this.content = str;
        }

        public String getNoticeurl() {
            return this.noticeurl;
        }

        public void setNoticeurl(String str) {
            this.noticeurl = str;
        }

        public boolean isSuccess() {
            return this.success;
        }

        public void setSuccess(boolean z) {
            this.success = z;
        }

        public String getMsg() {
            return this.msg;
        }

        public void setMsg(String str) {
            this.msg = str;
        }

        public int getCode() {
            return this.code;
        }

        public void setCode(int i) {
            this.code = i;
        }

        public String getUrl() {
            return this.url;
        }

        public void setUrl(String str) {
            this.url = str;
        }

        public boolean isjumpDone() {
            return this.jumpDone;
        }

        public void setjumpDone(boolean z) {
            this.jumpDone = z;
        }
    }
}
