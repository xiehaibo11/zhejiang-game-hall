package com.bianfeng.seppellita.bean;

import com.bianfeng.seppellita.utils.SeppellitaGsonUtils;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class InitBean {
    private int code;
    private DataBean data;
    private String msg;

    public String toString() {
        return SeppellitaGsonUtils.toJson(this);
    }

    public int getCode() {
        return this.code;
    }

    public void setCode(int i) {
        this.code = i;
    }

    public String getMsg() {
        return this.msg;
    }

    public void setMsg(String str) {
        this.msg = str;
    }

    public DataBean getData() {
        return this.data;
    }

    public void setData(DataBean dataBean) {
        this.data = dataBean;
    }

    public static class DataBean {
        private List<AbtestBean> abtest;
        private String env;
        private String interval;
        private String pack_size;
        private SevrerListBean server_list;
        private String time;
        private String valid_day;

        public long getTime() {
            return Long.valueOf(this.time).longValue();
        }

        public void setTime(String str) {
            this.time = str;
        }

        public String getEnv() {
            return this.env;
        }

        public void setEnv(String str) {
            this.env = str;
        }

        public int getPack_size() {
            return Integer.valueOf(this.pack_size).intValue() * 1024;
        }

        public void setPack_size(String str) {
            this.pack_size = str;
        }

        public int getInterval() {
            return Integer.valueOf(this.interval).intValue() * 1000;
        }

        public void setInterval(String str) {
            this.interval = str;
        }

        public int getValid_day() {
            return Integer.valueOf(this.valid_day).intValue();
        }

        public void setValid_day(String str) {
            this.valid_day = str;
        }

        public SevrerListBean getSevrer_list() {
            return this.server_list;
        }

        public void setSevrer_list(SevrerListBean sevrerListBean) {
            this.server_list = sevrerListBean;
        }

        public List<AbtestBean> getAbtest() {
            return this.abtest;
        }

        public void setAbtest(List<AbtestBean> list) {
            this.abtest = list;
        }

        public static class SevrerListBean {
            private List<String> action;

            public List<String> getAction() {
                return this.action;
            }

            public void setAction(List<String> list) {
                this.action = list;
            }
        }

        public static class AbtestBean {
            private String page;
            private String test_name;
            private String user_tag;

            public String getPage() {
                return this.page;
            }

            public void setPage(String str) {
                this.page = str;
            }

            public String getTest_name() {
                return this.test_name;
            }

            public void setTest_name(String str) {
                this.test_name = str;
            }

            public String getUser_tag() {
                return this.user_tag;
            }

            public void setUser_tag(String str) {
                this.user_tag = str;
            }

            public ListPostBean getListBean() {
                return new ListPostBean(getTest_name(), getUser_tag());
            }
        }
    }
}
