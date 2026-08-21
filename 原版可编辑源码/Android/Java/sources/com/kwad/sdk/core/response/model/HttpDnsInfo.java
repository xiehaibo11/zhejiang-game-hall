package com.kwad.sdk.core.response.model;

import java.io.Serializable;
import java.util.ArrayList;
import java.util.List;

public class HttpDnsInfo extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b, Serializable {
    private static final long serialVersionUID = -6943205584670122267L;
    public List<IpInfo> recommendList = new ArrayList();
    public List<IpInfo> backUpList = new ArrayList();
    public List<IpInfo> otherList = new ArrayList();

    public static class IpInfo extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b, Serializable {
        private static final long serialVersionUID = -6943205584670122266L;
        public String ip = "";
        public int weight;

        @Override
        public String toString() {
            try {
                return toJson().toString();
            } catch (Exception unused) {
                return "";
            }
        }
    }

    @Override
    public String toString() {
        try {
            return toJson().toString();
        } catch (Exception unused) {
            return "";
        }
    }
}
