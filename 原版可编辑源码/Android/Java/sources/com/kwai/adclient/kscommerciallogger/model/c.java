package com.kwai.adclient.kscommerciallogger.model;

import android.text.TextUtils;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.kwad.components.offline.api.core.api.ILoggerReporter;
import org.json.JSONException;
import org.json.JSONObject;

public final class c {
    private final d arm;
    private final BusinessType biz;
    private final String category;
    private final String eventId;
    private final JSONObject extraParam;
    private final JSONObject msg;
    private final SubBusinessType subBiz;
    private final String tag;

    public static class a {
        private BusinessType aNC;
        private SubBusinessType aND;
        private d aNE;
        private JSONObject aNF;
        private final String mCategory;
        private String mEventId;
        private String mTag;
        private JSONObject msg;

        private a(String str) {
            this.mCategory = str;
        }

        public static a Lg() {
            return new a(ILoggerReporter.Category.ERROR_LOG);
        }

        public static a Lh() {
            return new a(ILoggerReporter.Category.APM_LOG);
        }

        public final c Li() {
            if (com.kwai.adclient.kscommerciallogger.a.KW().isDebug()) {
                if (TextUtils.isEmpty(this.mCategory) || TextUtils.isEmpty(this.mTag) || TextUtils.isEmpty(this.mEventId)) {
                    throw new IllegalArgumentException("param is error, please check it");
                }
                if (com.kwai.adclient.kscommerciallogger.a.KW().KY() && !com.kwai.adclient.kscommerciallogger.b.fY(this.mEventId)) {
                    throw new IllegalArgumentException("event_id format error, please check it");
                }
            } else {
                if (TextUtils.isEmpty(this.mCategory) || TextUtils.isEmpty(this.mTag) || TextUtils.isEmpty(this.mEventId)) {
                    return null;
                }
                if (com.kwai.adclient.kscommerciallogger.a.KW().KY() && !com.kwai.adclient.kscommerciallogger.b.fY(this.mEventId)) {
                    return null;
                }
            }
            if (com.kwai.adclient.kscommerciallogger.a.KW().KX() != null) {
                this.aNF = com.kwai.adclient.kscommerciallogger.a.KW().KX();
            }
            return new c(this, (byte) 0);
        }

        public final a P(JSONObject jSONObject) {
            this.msg = jSONObject;
            return this;
        }

        public final a b(SubBusinessType subBusinessType) {
            this.aND = subBusinessType;
            return this;
        }

        public final a b(d dVar) {
            this.aNE = dVar;
            return this;
        }

        public final a c(BusinessType businessType) {
            this.aNC = businessType;
            return this;
        }

        public final a fZ(String str) {
            this.mTag = str;
            return this;
        }

        public final a ga(String str) {
            this.mEventId = str;
            return this;
        }
    }

    private c(a aVar) {
        this.category = aVar.mCategory;
        this.biz = aVar.aNC;
        this.subBiz = aVar.aND;
        this.tag = aVar.mTag;
        this.arm = aVar.aNE;
        this.extraParam = aVar.aNF;
        this.eventId = aVar.mEventId;
        this.msg = aVar.msg == null ? new JSONObject() : aVar.msg;
    }

    c(a aVar, byte b) {
        this(aVar);
    }

    public final String KZ() {
        return this.category;
    }

    public final BusinessType La() {
        return this.biz;
    }

    public final SubBusinessType Lb() {
        return this.subBiz;
    }

    public final d Lc() {
        return this.arm;
    }

    public final JSONObject Ld() {
        return this.msg;
    }

    public final JSONObject Le() {
        return this.extraParam;
    }

    public final String Lf() {
        return this.eventId;
    }

    public final String getTag() {
        return this.tag;
    }

    public final String toString() {
        JSONObject jSONObject = new JSONObject();
        try {
            if (this.biz != null) {
                jSONObject.put("biz", this.biz.value);
            }
            if (this.subBiz != null) {
                jSONObject.put("sub_biz", this.subBiz.value);
            }
            jSONObject.put(RemoteMessageConst.Notification.TAG, this.tag);
            if (this.arm != null) {
                jSONObject.put("type", this.arm.getValue());
            }
            if (this.msg != null) {
                jSONObject.put("msg", this.msg);
            }
            if (this.extraParam != null) {
                jSONObject.put("extra_param", this.extraParam);
            }
            jSONObject.put("event_id", this.eventId);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return jSONObject.toString();
    }
}
