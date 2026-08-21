package com.iab.omid.library.mmadbridge.adsession;

public final class AdEvents {
    private final com.iab.omid.library.mmadbridge.adsession.a adSession;

    private AdEvents(com.iab.omid.library.mmadbridge.adsession.a r1) {
            r0 = this;
            r0.<init>()
            r0.adSession = r1
            return
    }

    public static com.iab.omid.library.mmadbridge.adsession.AdEvents createAdEvents(com.iab.omid.library.mmadbridge.adsession.AdSession r2) {
            r0 = r2
            com.iab.omid.library.mmadbridge.adsession.a r0 = (com.iab.omid.library.mmadbridge.adsession.a) r0
            java.lang.String r1 = "AdSession is null"
            com.iab.omid.library.mmadbridge.utils.g.a(r2, r1)
            com.iab.omid.library.mmadbridge.utils.g.g(r0)
            com.iab.omid.library.mmadbridge.utils.g.b(r0)
            com.iab.omid.library.mmadbridge.adsession.AdEvents r2 = new com.iab.omid.library.mmadbridge.adsession.AdEvents
            r2.<init>(r0)
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r0 = r0.getAdSessionStatePublisher()
            r0.a(r2)
            return r2
    }

    public void impressionOccurred() {
            r1 = this;
            com.iab.omid.library.mmadbridge.adsession.a r0 = r1.adSession
            com.iab.omid.library.mmadbridge.utils.g.b(r0)
            com.iab.omid.library.mmadbridge.adsession.a r0 = r1.adSession
            com.iab.omid.library.mmadbridge.utils.g.e(r0)
            com.iab.omid.library.mmadbridge.adsession.a r0 = r1.adSession
            boolean r0 = r0.f()
            if (r0 != 0) goto L17
            com.iab.omid.library.mmadbridge.adsession.a r0 = r1.adSession     // Catch: java.lang.Exception -> L17
            r0.start()     // Catch: java.lang.Exception -> L17
        L17:
            com.iab.omid.library.mmadbridge.adsession.a r0 = r1.adSession
            boolean r0 = r0.f()
            if (r0 == 0) goto L24
            com.iab.omid.library.mmadbridge.adsession.a r0 = r1.adSession
            r0.k()
        L24:
            return
    }

    public void loaded() {
            r1 = this;
            com.iab.omid.library.mmadbridge.adsession.a r0 = r1.adSession
            com.iab.omid.library.mmadbridge.utils.g.a(r0)
            com.iab.omid.library.mmadbridge.adsession.a r0 = r1.adSession
            com.iab.omid.library.mmadbridge.utils.g.e(r0)
            com.iab.omid.library.mmadbridge.adsession.a r0 = r1.adSession
            r0.l()
            return
    }

    public void loaded(com.iab.omid.library.mmadbridge.adsession.media.VastProperties r2) {
            r1 = this;
            java.lang.String r0 = "VastProperties is null"
            com.iab.omid.library.mmadbridge.utils.g.a(r2, r0)
            com.iab.omid.library.mmadbridge.adsession.a r0 = r1.adSession
            com.iab.omid.library.mmadbridge.utils.g.a(r0)
            com.iab.omid.library.mmadbridge.adsession.a r0 = r1.adSession
            com.iab.omid.library.mmadbridge.utils.g.e(r0)
            com.iab.omid.library.mmadbridge.adsession.a r0 = r1.adSession
            org.json.JSONObject r2 = r2.a()
            r0.a(r2)
            return
    }
}
