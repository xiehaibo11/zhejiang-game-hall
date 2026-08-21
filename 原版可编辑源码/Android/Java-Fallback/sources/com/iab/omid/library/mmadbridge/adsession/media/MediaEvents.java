package com.iab.omid.library.mmadbridge.adsession.media;

public final class MediaEvents {
    private final com.iab.omid.library.mmadbridge.adsession.a adSession;

    private MediaEvents(com.iab.omid.library.mmadbridge.adsession.a r1) {
            r0 = this;
            r0.<init>()
            r0.adSession = r1
            return
    }

    private void confirmValidDuration(float r2) {
            r1 = this;
            r0 = 0
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 <= 0) goto L6
            return
        L6:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Invalid Media duration"
            r2.<init>(r0)
            throw r2
    }

    private void confirmValidVolume(float r2) {
            r1 = this;
            r0 = 0
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 < 0) goto Lc
            r0 = 1065353216(0x3f800000, float:1.0)
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 > 0) goto Lc
            return
        Lc:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Invalid Media volume"
            r2.<init>(r0)
            throw r2
    }

    public static com.iab.omid.library.mmadbridge.adsession.media.MediaEvents createMediaEvents(com.iab.omid.library.mmadbridge.adsession.AdSession r2) {
            r0 = r2
            com.iab.omid.library.mmadbridge.adsession.a r0 = (com.iab.omid.library.mmadbridge.adsession.a) r0
            java.lang.String r1 = "AdSession is null"
            com.iab.omid.library.mmadbridge.utils.g.a(r2, r1)
            com.iab.omid.library.mmadbridge.utils.g.f(r0)
            com.iab.omid.library.mmadbridge.utils.g.c(r0)
            com.iab.omid.library.mmadbridge.utils.g.b(r0)
            com.iab.omid.library.mmadbridge.utils.g.h(r0)
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r2 = new com.iab.omid.library.mmadbridge.adsession.media.MediaEvents
            r2.<init>(r0)
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r0 = r0.getAdSessionStatePublisher()
            r0.a(r2)
            return r2
    }

    public void adUserInteraction(com.iab.omid.library.mmadbridge.adsession.media.InteractionType r3) {
            r2 = this;
            java.lang.String r0 = "InteractionType is null"
            com.iab.omid.library.mmadbridge.utils.g.a(r3, r0)
            com.iab.omid.library.mmadbridge.adsession.a r0 = r2.adSession
            com.iab.omid.library.mmadbridge.utils.g.a(r0)
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "interactionType"
            com.iab.omid.library.mmadbridge.utils.c.a(r0, r1, r3)
            com.iab.omid.library.mmadbridge.adsession.a r3 = r2.adSession
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r3 = r3.getAdSessionStatePublisher()
            java.lang.String r1 = "adUserInteraction"
            r3.a(r1, r0)
            return
    }

    public void bufferFinish() {
            r2 = this;
            com.iab.omid.library.mmadbridge.adsession.a r0 = r2.adSession
            com.iab.omid.library.mmadbridge.utils.g.a(r0)
            com.iab.omid.library.mmadbridge.adsession.a r0 = r2.adSession
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r0 = r0.getAdSessionStatePublisher()
            java.lang.String r1 = "bufferFinish"
            r0.a(r1)
            return
    }

    public void bufferStart() {
            r2 = this;
            com.iab.omid.library.mmadbridge.adsession.a r0 = r2.adSession
            com.iab.omid.library.mmadbridge.utils.g.a(r0)
            com.iab.omid.library.mmadbridge.adsession.a r0 = r2.adSession
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r0 = r0.getAdSessionStatePublisher()
            java.lang.String r1 = "bufferStart"
            r0.a(r1)
            return
    }

    public void complete() {
            r2 = this;
            com.iab.omid.library.mmadbridge.adsession.a r0 = r2.adSession
            com.iab.omid.library.mmadbridge.utils.g.a(r0)
            com.iab.omid.library.mmadbridge.adsession.a r0 = r2.adSession
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r0 = r0.getAdSessionStatePublisher()
            java.lang.String r1 = "complete"
            r0.a(r1)
            return
    }

    public void firstQuartile() {
            r2 = this;
            com.iab.omid.library.mmadbridge.adsession.a r0 = r2.adSession
            com.iab.omid.library.mmadbridge.utils.g.a(r0)
            com.iab.omid.library.mmadbridge.adsession.a r0 = r2.adSession
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r0 = r0.getAdSessionStatePublisher()
            java.lang.String r1 = "firstQuartile"
            r0.a(r1)
            return
    }

    public void midpoint() {
            r2 = this;
            com.iab.omid.library.mmadbridge.adsession.a r0 = r2.adSession
            com.iab.omid.library.mmadbridge.utils.g.a(r0)
            com.iab.omid.library.mmadbridge.adsession.a r0 = r2.adSession
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r0 = r0.getAdSessionStatePublisher()
            java.lang.String r1 = "midpoint"
            r0.a(r1)
            return
    }

    public void pause() {
            r2 = this;
            com.iab.omid.library.mmadbridge.adsession.a r0 = r2.adSession
            com.iab.omid.library.mmadbridge.utils.g.a(r0)
            com.iab.omid.library.mmadbridge.adsession.a r0 = r2.adSession
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r0 = r0.getAdSessionStatePublisher()
            java.lang.String r1 = "pause"
            r0.a(r1)
            return
    }

    public void playerStateChange(com.iab.omid.library.mmadbridge.adsession.media.PlayerState r3) {
            r2 = this;
            java.lang.String r0 = "PlayerState is null"
            com.iab.omid.library.mmadbridge.utils.g.a(r3, r0)
            com.iab.omid.library.mmadbridge.adsession.a r0 = r2.adSession
            com.iab.omid.library.mmadbridge.utils.g.a(r0)
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "state"
            com.iab.omid.library.mmadbridge.utils.c.a(r0, r1, r3)
            com.iab.omid.library.mmadbridge.adsession.a r3 = r2.adSession
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r3 = r3.getAdSessionStatePublisher()
            java.lang.String r1 = "playerStateChange"
            r3.a(r1, r0)
            return
    }

    public void resume() {
            r2 = this;
            com.iab.omid.library.mmadbridge.adsession.a r0 = r2.adSession
            com.iab.omid.library.mmadbridge.utils.g.a(r0)
            com.iab.omid.library.mmadbridge.adsession.a r0 = r2.adSession
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r0 = r0.getAdSessionStatePublisher()
            java.lang.String r1 = "resume"
            r0.a(r1)
            return
    }

    public void skipped() {
            r2 = this;
            com.iab.omid.library.mmadbridge.adsession.a r0 = r2.adSession
            com.iab.omid.library.mmadbridge.utils.g.a(r0)
            com.iab.omid.library.mmadbridge.adsession.a r0 = r2.adSession
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r0 = r0.getAdSessionStatePublisher()
            java.lang.String r1 = "skipped"
            r0.a(r1)
            return
    }

    public void start(float r3, float r4) {
            r2 = this;
            r2.confirmValidDuration(r3)
            r2.confirmValidVolume(r4)
            com.iab.omid.library.mmadbridge.adsession.a r0 = r2.adSession
            com.iab.omid.library.mmadbridge.utils.g.a(r0)
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.Float r3 = java.lang.Float.valueOf(r3)
            java.lang.String r1 = "duration"
            com.iab.omid.library.mmadbridge.utils.c.a(r0, r1, r3)
            java.lang.Float r3 = java.lang.Float.valueOf(r4)
            java.lang.String r4 = "mediaPlayerVolume"
            com.iab.omid.library.mmadbridge.utils.c.a(r0, r4, r3)
            com.iab.omid.library.mmadbridge.internal.h r3 = com.iab.omid.library.mmadbridge.internal.h.c()
            float r3 = r3.b()
            java.lang.Float r3 = java.lang.Float.valueOf(r3)
            java.lang.String r4 = "deviceVolume"
            com.iab.omid.library.mmadbridge.utils.c.a(r0, r4, r3)
            com.iab.omid.library.mmadbridge.adsession.a r3 = r2.adSession
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r3 = r3.getAdSessionStatePublisher()
            java.lang.String r4 = "start"
            r3.a(r4, r0)
            return
    }

    public void thirdQuartile() {
            r2 = this;
            com.iab.omid.library.mmadbridge.adsession.a r0 = r2.adSession
            com.iab.omid.library.mmadbridge.utils.g.a(r0)
            com.iab.omid.library.mmadbridge.adsession.a r0 = r2.adSession
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r0 = r0.getAdSessionStatePublisher()
            java.lang.String r1 = "thirdQuartile"
            r0.a(r1)
            return
    }

    public void volumeChange(float r3) {
            r2 = this;
            r2.confirmValidVolume(r3)
            com.iab.omid.library.mmadbridge.adsession.a r0 = r2.adSession
            com.iab.omid.library.mmadbridge.utils.g.a(r0)
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.Float r3 = java.lang.Float.valueOf(r3)
            java.lang.String r1 = "mediaPlayerVolume"
            com.iab.omid.library.mmadbridge.utils.c.a(r0, r1, r3)
            com.iab.omid.library.mmadbridge.internal.h r3 = com.iab.omid.library.mmadbridge.internal.h.c()
            float r3 = r3.b()
            java.lang.Float r3 = java.lang.Float.valueOf(r3)
            java.lang.String r1 = "deviceVolume"
            com.iab.omid.library.mmadbridge.utils.c.a(r0, r1, r3)
            com.iab.omid.library.mmadbridge.adsession.a r3 = r2.adSession
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r3 = r3.getAdSessionStatePublisher()
            java.lang.String r1 = "volumeChange"
            r3.a(r1, r0)
            return
    }
}
