package com.bianfeng.seppellita.bean;

public class InitBean {
    private int code;
    private com.bianfeng.seppellita.bean.InitBean.DataBean data;
    private java.lang.String msg;

    public static class DataBean {
        private java.util.List<com.bianfeng.seppellita.bean.InitBean.DataBean.AbtestBean> abtest;
        private java.lang.String env;
        private java.lang.String interval;
        private java.lang.String pack_size;
        private com.bianfeng.seppellita.bean.InitBean.DataBean.SevrerListBean server_list;
        private java.lang.String time;
        private java.lang.String valid_day;

        public static class AbtestBean {
            private java.lang.String page;
            private java.lang.String test_name;
            private java.lang.String user_tag;

            public AbtestBean() {
                    r0 = this;
                    r0.<init>()
                    return
            }

            public com.bianfeng.seppellita.bean.ListPostBean getListBean() {
                    r3 = this;
                    com.bianfeng.seppellita.bean.ListPostBean r0 = new com.bianfeng.seppellita.bean.ListPostBean
                    java.lang.String r1 = r3.getTest_name()
                    java.lang.String r2 = r3.getUser_tag()
                    r0.<init>(r1, r2)
                    return r0
            }

            public java.lang.String getPage() {
                    r1 = this;
                    java.lang.String r0 = r1.page
                    return r0
            }

            public java.lang.String getTest_name() {
                    r1 = this;
                    java.lang.String r0 = r1.test_name
                    return r0
            }

            public java.lang.String getUser_tag() {
                    r1 = this;
                    java.lang.String r0 = r1.user_tag
                    return r0
            }

            public void setPage(java.lang.String r1) {
                    r0 = this;
                    r0.page = r1
                    return
            }

            public void setTest_name(java.lang.String r1) {
                    r0 = this;
                    r0.test_name = r1
                    return
            }

            public void setUser_tag(java.lang.String r1) {
                    r0 = this;
                    r0.user_tag = r1
                    return
            }
        }

        public static class SevrerListBean {
            private java.util.List<java.lang.String> action;

            public SevrerListBean() {
                    r0 = this;
                    r0.<init>()
                    return
            }

            public java.util.List<java.lang.String> getAction() {
                    r1 = this;
                    java.util.List<java.lang.String> r0 = r1.action
                    return r0
            }

            public void setAction(java.util.List<java.lang.String> r1) {
                    r0 = this;
                    r0.action = r1
                    return
            }
        }

        public DataBean() {
                r0 = this;
                r0.<init>()
                return
        }

        public java.util.List<com.bianfeng.seppellita.bean.InitBean.DataBean.AbtestBean> getAbtest() {
                r1 = this;
                java.util.List<com.bianfeng.seppellita.bean.InitBean$DataBean$AbtestBean> r0 = r1.abtest
                return r0
        }

        public java.lang.String getEnv() {
                r1 = this;
                java.lang.String r0 = r1.env
                return r0
        }

        public int getInterval() {
                r1 = this;
                java.lang.String r0 = r1.interval
                java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
                int r0 = r0.intValue()
                int r0 = r0 * 1000
                return r0
        }

        public int getPack_size() {
                r1 = this;
                java.lang.String r0 = r1.pack_size
                java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
                int r0 = r0.intValue()
                int r0 = r0 * 1024
                return r0
        }

        public com.bianfeng.seppellita.bean.InitBean.DataBean.SevrerListBean getSevrer_list() {
                r1 = this;
                com.bianfeng.seppellita.bean.InitBean$DataBean$SevrerListBean r0 = r1.server_list
                return r0
        }

        public long getTime() {
                r2 = this;
                java.lang.String r0 = r2.time
                java.lang.Long r0 = java.lang.Long.valueOf(r0)
                long r0 = r0.longValue()
                return r0
        }

        public int getValid_day() {
                r1 = this;
                java.lang.String r0 = r1.valid_day
                java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
                int r0 = r0.intValue()
                return r0
        }

        public void setAbtest(java.util.List<com.bianfeng.seppellita.bean.InitBean.DataBean.AbtestBean> r1) {
                r0 = this;
                r0.abtest = r1
                return
        }

        public void setEnv(java.lang.String r1) {
                r0 = this;
                r0.env = r1
                return
        }

        public void setInterval(java.lang.String r1) {
                r0 = this;
                r0.interval = r1
                return
        }

        public void setPack_size(java.lang.String r1) {
                r0 = this;
                r0.pack_size = r1
                return
        }

        public void setSevrer_list(com.bianfeng.seppellita.bean.InitBean.DataBean.SevrerListBean r1) {
                r0 = this;
                r0.server_list = r1
                return
        }

        public void setTime(java.lang.String r1) {
                r0 = this;
                r0.time = r1
                return
        }

        public void setValid_day(java.lang.String r1) {
                r0 = this;
                r0.valid_day = r1
                return
        }
    }

    public InitBean() {
            r0 = this;
            r0.<init>()
            return
    }

    public int getCode() {
            r1 = this;
            int r0 = r1.code
            return r0
    }

    public com.bianfeng.seppellita.bean.InitBean.DataBean getData() {
            r1 = this;
            com.bianfeng.seppellita.bean.InitBean$DataBean r0 = r1.data
            return r0
    }

    public java.lang.String getMsg() {
            r1 = this;
            java.lang.String r0 = r1.msg
            return r0
    }

    public void setCode(int r1) {
            r0 = this;
            r0.code = r1
            return
    }

    public void setData(com.bianfeng.seppellita.bean.InitBean.DataBean r1) {
            r0 = this;
            r0.data = r1
            return
    }

    public void setMsg(java.lang.String r1) {
            r0 = this;
            r0.msg = r1
            return
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = com.bianfeng.seppellita.utils.SeppellitaGsonUtils.toJson(r1)
            return r0
    }
}
