package com.kwad.components.offline.api.tk.model;

import com.kwad.components.offline.api.core.model.BaseOfflineCompoJsonParse;
import com.kwad.sdk.utils.t;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONObject;

public class StyleTemplatesConfig extends BaseOfflineCompoJsonParse<StyleTemplatesConfig> implements Serializable {
    private static final long serialVersionUID = -6279192768068169498L;
    public List<StyleTemplate> styleTemplates = new ArrayList();

    @Override
    public void parseJson(StyleTemplatesConfig styleTemplatesConfig, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        styleTemplatesConfig.styleTemplates = new ArrayList();
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("styleTemplates");
        if (jSONArrayOptJSONArray != null) {
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                StyleTemplate styleTemplate = new StyleTemplate();
                styleTemplate.parseJson(jSONArrayOptJSONArray.optJSONObject(i));
                styleTemplatesConfig.styleTemplates.add(styleTemplate);
            }
        }
    }

    @Override
    public JSONObject toJson(StyleTemplatesConfig styleTemplatesConfig) {
        return toJson(styleTemplatesConfig, (JSONObject) null);
    }

    @Override
    public JSONObject toJson(StyleTemplatesConfig styleTemplatesConfig, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        t.putValue(jSONObject, "styleTemplates", styleTemplatesConfig.styleTemplates);
        return jSONObject;
    }
}
