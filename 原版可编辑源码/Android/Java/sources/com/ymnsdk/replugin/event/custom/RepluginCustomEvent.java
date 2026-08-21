package com.ymnsdk.replugin.event.custom;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.bykv.vk.openvk.downloadnew.core.TTDownloadField;
import com.heytap.mcssdk.constant.b;
import com.tkay.china.activity.TransparentActivity;
import com.tkay.expressad.foundation.d.r;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;
import org.json.JSONObject;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class RepluginCustomEvent extends SepperllitaEvent {
    public RepluginCustomEvent(Activity activity, JSONObject jSONObject) {
        super(activity);
        try {
            if (jSONObject.has("Act")) {
                setAct(jSONObject.getString("Act"));
            }
            if (jSONObject.has("pg")) {
                setPg(jSONObject.getString("pg"));
            }
            if (jSONObject.has("blk")) {
                setBlk(jSONObject.getString("blk"));
            }
            if (jSONObject.has("bl")) {
                setBl(jSONObject.getString("bl"));
            }
            if (jSONObject.has(TTDownloadField.TT_LABEL)) {
                setLabel(jSONObject.getString(TTDownloadField.TT_LABEL));
            }
            if (jSONObject.has(b.k)) {
                setEid(jSONObject.getString(b.k));
            }
            if (jSONObject.has("dur")) {
                setDur(jSONObject.getLong("dur") + "");
            }
            CustEvent custEvent = new CustEvent(activity);
            if (jSONObject.has("pluginId")) {
                custEvent.setPlugin_id(jSONObject.getString("pluginId"));
            }
            if (jSONObject.has(TransparentActivity.b)) {
                custEvent.setRequest_code(jSONObject.getString(TransparentActivity.b));
            }
            if (jSONObject.has("request_msg")) {
                custEvent.setRequest_code(jSONObject.getString("request_msg"));
            }
            if (jSONObject.has("cpsid")) {
                custEvent.setCpsid(jSONObject.getString("cpsid"));
            }
            if (jSONObject.has("buyu_uid")) {
                custEvent.setBuyu_uid(jSONObject.getString("buyu_uid"));
            }
            if (jSONObject.has("source")) {
                custEvent.setSource(jSONObject.getInt("source"));
            }
            if (jSONObject.has("is_allow")) {
                custEvent.setIs_allow(jSONObject.getInt("is_allow"));
            }
            if (jSONObject.has("ispatch")) {
                custEvent.setIspatch(jSONObject.getInt("ispatch"));
            }
            if (jSONObject.has(r.ac)) {
                custEvent.setReason(jSONObject.getInt(r.ac));
            }
            if (jSONObject.has("is_new_user")) {
                custEvent.setIs_new_user(jSONObject.getInt("is_new_user"));
            }
            if (jSONObject.has("scene_id")) {
                custEvent.setScene_id(jSONObject.getInt("scene_id"));
            }
            if (jSONObject.has("buyu_uid")) {
                custEvent.setBuyu_version(jSONObject.getString("buyu_uid"));
            }
            setCust(GsonUtils.getInstance().toJson(custEvent));
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
