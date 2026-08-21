package com.mbridge.msdk.dycreator.wrapper;

public class DyOption {
    private java.util.List<java.lang.String> a;
    private java.io.File b;
    private com.mbridge.msdk.foundation.entity.CampaignEx c;
    private com.mbridge.msdk.dycreator.wrapper.DyAdType d;
    private java.lang.String e;
    private boolean f;
    private boolean g;
    private boolean h;
    private boolean i;
    private boolean j;
    private boolean k;
    private int l;
    private int m;
    private int n;
    private int o;
    private int p;
    private int q;
    private com.mbridge.msdk.dycreator.listener.DyCountDownListenerWrapper r;

    public static class Builder implements com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder {
        private java.util.List<java.lang.String> a;
        private java.io.File b;
        private com.mbridge.msdk.foundation.entity.CampaignEx c;
        private com.mbridge.msdk.dycreator.wrapper.DyAdType d;
        private boolean e;
        private java.lang.String f;
        private boolean g;
        private boolean h;
        private boolean i;
        private boolean j;
        private boolean k;
        private int l;
        private int m;
        private int n;
        private int o;
        private int p;

        public Builder() {
                r0 = this;
                r0.<init>()
                return
        }

        static java.util.List a(com.mbridge.msdk.dycreator.wrapper.DyOption.Builder r0) {
                java.util.List<java.lang.String> r0 = r0.a
                return r0
        }

        static java.io.File b(com.mbridge.msdk.dycreator.wrapper.DyOption.Builder r0) {
                java.io.File r0 = r0.b
                return r0
        }

        static com.mbridge.msdk.foundation.entity.CampaignEx c(com.mbridge.msdk.dycreator.wrapper.DyOption.Builder r0) {
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.c
                return r0
        }

        static com.mbridge.msdk.dycreator.wrapper.DyAdType d(com.mbridge.msdk.dycreator.wrapper.DyOption.Builder r0) {
                com.mbridge.msdk.dycreator.wrapper.DyAdType r0 = r0.d
                return r0
        }

        static boolean e(com.mbridge.msdk.dycreator.wrapper.DyOption.Builder r0) {
                boolean r0 = r0.e
                return r0
        }

        static java.lang.String f(com.mbridge.msdk.dycreator.wrapper.DyOption.Builder r0) {
                java.lang.String r0 = r0.f
                return r0
        }

        static boolean g(com.mbridge.msdk.dycreator.wrapper.DyOption.Builder r0) {
                boolean r0 = r0.g
                return r0
        }

        static boolean h(com.mbridge.msdk.dycreator.wrapper.DyOption.Builder r0) {
                boolean r0 = r0.h
                return r0
        }

        static boolean i(com.mbridge.msdk.dycreator.wrapper.DyOption.Builder r0) {
                boolean r0 = r0.j
                return r0
        }

        static boolean j(com.mbridge.msdk.dycreator.wrapper.DyOption.Builder r0) {
                boolean r0 = r0.i
                return r0
        }

        static boolean k(com.mbridge.msdk.dycreator.wrapper.DyOption.Builder r0) {
                boolean r0 = r0.k
                return r0
        }

        static int l(com.mbridge.msdk.dycreator.wrapper.DyOption.Builder r0) {
                int r0 = r0.l
                return r0
        }

        static int m(com.mbridge.msdk.dycreator.wrapper.DyOption.Builder r0) {
                int r0 = r0.m
                return r0
        }

        static int n(com.mbridge.msdk.dycreator.wrapper.DyOption.Builder r0) {
                int r0 = r0.n
                return r0
        }

        static int o(com.mbridge.msdk.dycreator.wrapper.DyOption.Builder r0) {
                int r0 = r0.o
                return r0
        }

        static int p(com.mbridge.msdk.dycreator.wrapper.DyOption.Builder r0) {
                int r0 = r0.p
                return r0
        }

        @Override
        public com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder adChoiceLink(java.lang.String r1) {
                r0 = this;
                r0.f = r1
                return r0
        }

        @Override
        public com.mbridge.msdk.dycreator.wrapper.DyOption build() {
                r1 = this;
                com.mbridge.msdk.dycreator.wrapper.DyOption r0 = new com.mbridge.msdk.dycreator.wrapper.DyOption
                r0.<init>(r1)
                return r0
        }

        @Override
        public com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder campaignEx(com.mbridge.msdk.foundation.entity.CampaignEx r1) {
                r0 = this;
                r0.c = r1
                return r0
        }

        @Override
        public com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder canSkip(boolean r1) {
                r0 = this;
                r0.e = r1
                return r0
        }

        @Override
        public com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder countDownTime(int r1) {
                r0 = this;
                r0.o = r1
                return r0
        }

        @Override
        public com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder dyAdType(com.mbridge.msdk.dycreator.wrapper.DyAdType r1) {
                r0 = this;
                r0.d = r1
                return r0
        }

        @Override
        public com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder file(java.io.File r1) {
                r0 = this;
                r0.b = r1
                return r0
        }

        @Override
        public com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder fileDirs(java.util.List<java.lang.String> r1) {
                r0 = this;
                r0.a = r1
                return r0
        }

        @Override
        public com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder isApkInfoVisible(boolean r1) {
                r0 = this;
                r0.j = r1
                return r0
        }

        @Override
        public com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder isClickButtonVisible(boolean r1) {
                r0 = this;
                r0.h = r1
                return r0
        }

        @Override
        public com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder isLogoVisible(boolean r1) {
                r0 = this;
                r0.k = r1
                return r0
        }

        @Override
        public com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder isScreenClick(boolean r1) {
                r0 = this;
                r0.g = r1
                return r0
        }

        @Override
        public com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder isShakeVisible(boolean r1) {
                r0 = this;
                r0.i = r1
                return r0
        }

        @Override
        public com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder orientation(int r1) {
                r0 = this;
                r0.n = r1
                return r0
        }

        @Override
        public com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder shakeStrenght(int r1) {
                r0 = this;
                r0.l = r1
                return r0
        }

        @Override
        public com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder shakeTime(int r1) {
                r0 = this;
                r0.m = r1
                return r0
        }

        @Override
        public com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder templateType(int r1) {
                r0 = this;
                r0.p = r1
                return r0
        }
    }

    public interface IViewOptionBuilder {
        com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder adChoiceLink(java.lang.String r1);

        com.mbridge.msdk.dycreator.wrapper.DyOption build();

        com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder campaignEx(com.mbridge.msdk.foundation.entity.CampaignEx r1);

        com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder canSkip(boolean r1);

        com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder countDownTime(int r1);

        com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder dyAdType(com.mbridge.msdk.dycreator.wrapper.DyAdType r1);

        com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder file(java.io.File r1);

        com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder fileDirs(java.util.List<java.lang.String> r1);

        com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder isApkInfoVisible(boolean r1);

        com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder isClickButtonVisible(boolean r1);

        com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder isLogoVisible(boolean r1);

        com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder isScreenClick(boolean r1);

        com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder isShakeVisible(boolean r1);

        com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder orientation(int r1);

        com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder shakeStrenght(int r1);

        com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder shakeTime(int r1);

        com.mbridge.msdk.dycreator.wrapper.DyOption.IViewOptionBuilder templateType(int r1);
    }

    public DyOption(com.mbridge.msdk.dycreator.wrapper.DyOption.Builder r2) {
            r1 = this;
            r1.<init>()
            java.util.List r0 = com.mbridge.msdk.dycreator.wrapper.DyOption.Builder.a(r2)
            r1.a = r0
            java.io.File r0 = com.mbridge.msdk.dycreator.wrapper.DyOption.Builder.b(r2)
            r1.b = r0
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = com.mbridge.msdk.dycreator.wrapper.DyOption.Builder.c(r2)
            r1.c = r0
            com.mbridge.msdk.dycreator.wrapper.DyAdType r0 = com.mbridge.msdk.dycreator.wrapper.DyOption.Builder.d(r2)
            r1.d = r0
            boolean r0 = com.mbridge.msdk.dycreator.wrapper.DyOption.Builder.e(r2)
            r1.g = r0
            java.lang.String r0 = com.mbridge.msdk.dycreator.wrapper.DyOption.Builder.f(r2)
            r1.e = r0
            boolean r0 = com.mbridge.msdk.dycreator.wrapper.DyOption.Builder.g(r2)
            r1.f = r0
            boolean r0 = com.mbridge.msdk.dycreator.wrapper.DyOption.Builder.h(r2)
            r1.h = r0
            boolean r0 = com.mbridge.msdk.dycreator.wrapper.DyOption.Builder.i(r2)
            r1.j = r0
            boolean r0 = com.mbridge.msdk.dycreator.wrapper.DyOption.Builder.j(r2)
            r1.i = r0
            boolean r0 = com.mbridge.msdk.dycreator.wrapper.DyOption.Builder.k(r2)
            r1.k = r0
            int r0 = com.mbridge.msdk.dycreator.wrapper.DyOption.Builder.l(r2)
            r1.l = r0
            int r0 = com.mbridge.msdk.dycreator.wrapper.DyOption.Builder.m(r2)
            r1.m = r0
            int r0 = com.mbridge.msdk.dycreator.wrapper.DyOption.Builder.n(r2)
            r1.n = r0
            int r0 = com.mbridge.msdk.dycreator.wrapper.DyOption.Builder.o(r2)
            r1.o = r0
            int r2 = com.mbridge.msdk.dycreator.wrapper.DyOption.Builder.p(r2)
            r1.q = r2
            return
    }

    public java.lang.String getAdChoiceLink() {
            r1 = this;
            java.lang.String r0 = r1.e
            return r0
    }

    public com.mbridge.msdk.foundation.entity.CampaignEx getCampaignEx() {
            r1 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.c
            return r0
    }

    public int getCountDownTime() {
            r1 = this;
            int r0 = r1.o
            return r0
    }

    public int getCurrentCountDown() {
            r1 = this;
            int r0 = r1.p
            return r0
    }

    public com.mbridge.msdk.dycreator.wrapper.DyAdType getDyAdType() {
            r1 = this;
            com.mbridge.msdk.dycreator.wrapper.DyAdType r0 = r1.d
            return r0
    }

    public java.io.File getFile() {
            r1 = this;
            java.io.File r0 = r1.b
            return r0
    }

    public java.util.List<java.lang.String> getFileDirs() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.a
            return r0
    }

    public int getOrientation() {
            r1 = this;
            int r0 = r1.n
            return r0
    }

    public int getShakeStrenght() {
            r1 = this;
            int r0 = r1.l
            return r0
    }

    public int getShakeTime() {
            r1 = this;
            int r0 = r1.m
            return r0
    }

    public int getTemplateType() {
            r1 = this;
            int r0 = r1.q
            return r0
    }

    public boolean isApkInfoVisible() {
            r1 = this;
            boolean r0 = r1.j
            return r0
    }

    public boolean isCanSkip() {
            r1 = this;
            boolean r0 = r1.g
            return r0
    }

    public boolean isClickButtonVisible() {
            r1 = this;
            boolean r0 = r1.h
            return r0
    }

    public boolean isClickScreen() {
            r1 = this;
            boolean r0 = r1.f
            return r0
    }

    public boolean isLogoVisible() {
            r1 = this;
            boolean r0 = r1.k
            return r0
    }

    public boolean isShakeVisible() {
            r1 = this;
            boolean r0 = r1.i
            return r0
    }

    public void setDyCountDownListener(int r2) {
            r1 = this;
            com.mbridge.msdk.dycreator.listener.DyCountDownListenerWrapper r0 = r1.r
            if (r0 == 0) goto L7
            r0.getCountDownValue(r2)
        L7:
            r1.p = r2
            return
    }

    public void setDyCountDownListenerWrapper(com.mbridge.msdk.dycreator.listener.DyCountDownListenerWrapper r1) {
            r0 = this;
            r0.r = r1
            return
    }
}
