package com.iab.omid.library.mmadbridge.adsession;

public abstract class AdSession {
    public AdSession() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.iab.omid.library.mmadbridge.adsession.AdSession createAdSession(com.iab.omid.library.mmadbridge.adsession.AdSessionConfiguration r1, com.iab.omid.library.mmadbridge.adsession.AdSessionContext r2) {
            com.iab.omid.library.mmadbridge.utils.g.a()
            java.lang.String r0 = "AdSessionConfiguration is null"
            com.iab.omid.library.mmadbridge.utils.g.a(r1, r0)
            java.lang.String r0 = "AdSessionContext is null"
            com.iab.omid.library.mmadbridge.utils.g.a(r2, r0)
            com.iab.omid.library.mmadbridge.adsession.a r0 = new com.iab.omid.library.mmadbridge.adsession.a
            r0.<init>(r1, r2)
            return r0
    }

    public abstract void addFriendlyObstruction(android.view.View r1, com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose r2, java.lang.String r3);

    public abstract void error(com.iab.omid.library.mmadbridge.adsession.ErrorType r1, java.lang.String r2);

    public abstract void finish();

    public abstract java.lang.String getAdSessionId();

    public abstract com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher getAdSessionStatePublisher();

    public abstract void registerAdView(android.view.View r1);

    public abstract void removeAllFriendlyObstructions();

    public abstract void removeFriendlyObstruction(android.view.View r1);

    public abstract void setPossibleObstructionListener(com.iab.omid.library.mmadbridge.adsession.PossibleObstructionListener r1);

    public abstract void start();
}
