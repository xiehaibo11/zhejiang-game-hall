package com.bykv.vk.openvk.downloadnew;

import android.app.Activity;
import android.content.Context;
import android.net.Uri;
import android.os.Bundle;
import com.bykv.vk.openvk.api.proto.Bridge;
import com.bykv.vk.openvk.api.proto.ValueSet;
import com.bykv.vk.openvk.downloadnew.core.ExitInstallListener;
import com.bykv.vk.openvk.downloadnew.core.ITTDownloadAdapter;
import com.bykv.vk.openvk.downloadnew.core.TTDownloadField;
import com.ss.android.download.api.config.IDownloadButtonClickListener;
import com.ss.android.download.api.config.OnItemClickListener;
import com.ss.android.download.api.download.DownloadController;
import com.ss.android.download.api.download.DownloadEventConfig;
import com.ss.android.download.api.download.DownloadModel;
import com.ss.android.download.api.download.DownloadStatusChangeListener;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

public final class pp extends rg implements Bridge {
    private static volatile pp rg;
    private final Context df;

    private static boolean rg(IDownloadButtonClickListener iDownloadButtonClickListener) {
        return iDownloadButtonClickListener != null;
    }

    private pp(Context context) {
        this.df = context;
    }

    public static pp rg(Context context) {
        if (rg == null) {
            synchronized (pp.class) {
                if (rg == null) {
                    rg = new pp(context);
                }
            }
        }
        return rg;
    }

    @Override
    public <T> T callMethod(Class<T> cls, int i, Map<String, Object> map) {
        switch (i) {
            case 0:
                return (T) Boolean.valueOf(pt.rg(getActivity(map.get("activity")), pp(map.get(TTDownloadField.TT_EXIT_INSTALL_LISTENER))));
            case 1:
                return (T) pt.rg().c();
            case 2:
                try {
                    return (T) Boolean.valueOf(pt.rg((String) map.get(TTDownloadField.TT_TAG_INTERCEPT), (String) map.get(TTDownloadField.TT_LABEL), new JSONObject((String) map.get(TTDownloadField.TT_META)), new HashMap()));
                } catch (JSONException unused) {
                    return (T) Boolean.FALSE;
                }
            case 3:
                pt.rg(((Integer) map.get(TTDownloadField.TT_HID)).intValue());
                return null;
            case 4:
                pt.rg().rg((String) map.get(TTDownloadField.TT_DOWNLOAD_URL), ((Integer) map.get(TTDownloadField.TT_HASHCODE)).intValue());
                return null;
            case 5:
                int iIntValue = ((Integer) map.get(TTDownloadField.TT_HASHCODE)).intValue();
                DownloadModel downloadModelDf = df(map.get(TTDownloadField.TT_DOWNLOAD_MODEL));
                pt.rg().rg(this.df, iIntValue, rg(map.get(TTDownloadField.TT_DOWNLOAD_STATUSCHANGE_LISTENER)), downloadModelDf);
                return null;
            case 6:
                return (T) Boolean.valueOf(pt.rg(this.df, (String) map.get(TTDownloadField.TT_DOWNLOAD_URL)));
            case 7:
                pt.df();
                return null;
            case 8:
                pt.rg().rg((String) map.get(TTDownloadField.TT_DOWNLOAD_URL), ((Boolean) map.get("force")).booleanValue());
                return null;
            case 9:
                pt.rg(((Integer) map.get("id")).intValue(), (ITTDownloadAdapter.OnEventLogHandler) map.get(TTDownloadField.TT_ONEVENT_LOG_HANDLER));
                return null;
            case 10:
                pt.rg((String) map.get(TTDownloadField.TT_DOWNLOAD_PATH));
                return null;
            case 11:
            default:
                return (T) super.callMethod(cls, i, map);
            case 12:
                Uri uri = (Uri) map.get("uri");
                DownloadModel downloadModelDf2 = df(map.get(TTDownloadField.TT_DOWNLOAD_MODEL));
                DownloadEventConfig downloadEventConfigQ = q(map.get(TTDownloadField.TT_DOWNLOAD_EVENT_CONFIG));
                DownloadController downloadControllerPt = pt(map.get(TTDownloadField.TT_DOWNLOAD_CONTROLLER));
                IDownloadButtonClickListener iDownloadButtonClickListenerFw = fw(map.get(TTDownloadField.TT_DOWNLOAD_BUTTON_CLICK_LISTENER));
                if (rg(iDownloadButtonClickListenerFw)) {
                    return (T) Boolean.valueOf(pt.rg(this.df, uri, downloadModelDf2, downloadEventConfigQ, downloadControllerPt, iDownloadButtonClickListenerFw));
                }
                return (T) Boolean.valueOf(pt.rg(this.df, uri, downloadModelDf2, downloadEventConfigQ, downloadControllerPt));
            case 13:
                int iIntValue2 = ((Integer) map.get(TTDownloadField.TT_HASHCODE)).intValue();
                boolean zBooleanValue = ((Boolean) map.get(TTDownloadField.TT_IS_DISABLE_DIALOG)).booleanValue();
                String str = (String) map.get(TTDownloadField.TT_USERAGENT);
                DownloadModel downloadModelDf3 = df(map.get(TTDownloadField.TT_DOWNLOAD_MODEL));
                DownloadEventConfig downloadEventConfigQ2 = q(map.get(TTDownloadField.TT_DOWNLOAD_EVENT_CONFIG));
                DownloadController downloadControllerPt2 = pt(map.get(TTDownloadField.TT_DOWNLOAD_CONTROLLER));
                DownloadStatusChangeListener downloadStatusChangeListenerRg = rg(map.get(TTDownloadField.TT_DOWNLOAD_STATUSCHANGE_LISTENER));
                IDownloadButtonClickListener iDownloadButtonClickListenerFw2 = fw(map.get(TTDownloadField.TT_DOWNLOAD_BUTTON_CLICK_LISTENER));
                if (rg(iDownloadButtonClickListenerFw2)) {
                    pt.rg().pp().rg(this.df, str, zBooleanValue, downloadModelDf3, downloadEventConfigQ2, downloadControllerPt2, downloadStatusChangeListenerRg, iIntValue2, iDownloadButtonClickListenerFw2);
                    return null;
                }
                pt.rg().pp().rg(this.df, str, zBooleanValue, downloadModelDf3, downloadEventConfigQ2, downloadControllerPt2, downloadStatusChangeListenerRg, iIntValue2);
                return null;
            case 14:
                return (T) Boolean.valueOf(pt.rg().pp().rg(this.df, ((Long) map.get("id")).longValue(), (String) map.get(TTDownloadField.TT_LOG_EXTRA), (DownloadStatusChangeListener) null, ((Integer) map.get(TTDownloadField.TT_HASHCODE)).intValue()));
            case 15:
                return (T) Boolean.valueOf(pt.rg((Uri) map.get("uri")));
            case 16:
                pt.rg().rg((String) map.get(TTDownloadField.TT_DOWNLOAD_URL), ((Long) map.get("id")).longValue(), ((Integer) map.get(TTDownloadField.TT_ACTION_TYPE_BUTTON)).intValue(), q(map.get(TTDownloadField.TT_DOWNLOAD_EVENT_CONFIG)), pt(map.get(TTDownloadField.TT_DOWNLOAD_CONTROLLER)));
                return null;
            case 17:
                pt.rg().rg((String) map.get(TTDownloadField.TT_DOWNLOAD_URL), ((Long) map.get("id")).longValue(), ((Integer) map.get(TTDownloadField.TT_ACTION_TYPE_BUTTON)).intValue(), q(map.get(TTDownloadField.TT_DOWNLOAD_EVENT_CONFIG)), pt(map.get(TTDownloadField.TT_DOWNLOAD_CONTROLLER)), c(map.get(TTDownloadField.TT_ITEM_CLICK_LISTENER)), fw(map.get(TTDownloadField.TT_DOWNLOAD_BUTTON_CLICK_LISTENER)));
                return null;
            case 18:
                return (T) Boolean.valueOf(pt.rg().pp().rg(((Long) map.get("id")).longValue(), ((Integer) map.get(TTDownloadField.TT_HASHCODE)).intValue()));
            case 19:
                return (T) Boolean.valueOf(pt.rg().pp().rg(((Long) map.get("id")).longValue()));
        }
    }

    @Override
    public <T> T getObj(Class<T> cls, int i, Map<String, Object> map) {
        if (i == 0) {
            return (T) pt.rg;
        }
        if (i == 1) {
            return (T) Boolean.valueOf(pt.df);
        }
        return (T) super.getObj(cls);
    }

    @Override
    public void init(Bundle bundle) {
        super.init(bundle);
        pt.rg(this.df);
    }

    private DownloadStatusChangeListener rg(Object obj) {
        if (obj instanceof DownloadStatusChangeListener) {
            return (DownloadStatusChangeListener) obj;
        }
        return null;
    }

    private DownloadModel df(Object obj) {
        if (obj instanceof DownloadModel) {
            return (DownloadModel) obj;
        }
        return null;
    }

    private DownloadEventConfig q(Object obj) {
        if (obj instanceof DownloadEventConfig) {
            return (DownloadEventConfig) obj;
        }
        return null;
    }

    private DownloadController pt(Object obj) {
        if (obj instanceof DownloadController) {
            return (DownloadController) obj;
        }
        return null;
    }

    private Activity getActivity(Object obj) {
        if (obj instanceof Activity) {
            return (Activity) obj;
        }
        return null;
    }

    private ExitInstallListener pp(Object obj) {
        if (obj instanceof ExitInstallListener) {
            return (ExitInstallListener) obj;
        }
        return null;
    }

    private OnItemClickListener c(Object obj) {
        if (obj instanceof OnItemClickListener) {
            return (OnItemClickListener) obj;
        }
        return null;
    }

    private IDownloadButtonClickListener fw(Object obj) {
        if (obj instanceof IDownloadButtonClickListener) {
            return (IDownloadButtonClickListener) obj;
        }
        return null;
    }

    @Override
    public ValueSet values() {
        return com.bykv.vk.openvk.api.q.rg().rg(0, pt.rg).rg(1, Boolean.valueOf(pt.df)).df();
    }

    @Override
    public <T> T call(int i, ValueSet valueSet, Class<T> cls) {
        if (i == 20) {
            init((Bundle) valueSet.objectValue(0, Bundle.class));
            return null;
        }
        return (T) callMethod(cls, i, (Map) valueSet.objectValue(0, Map.class));
    }
}
