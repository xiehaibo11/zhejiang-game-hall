package com.bianfeng.toponad;

public class ResourceHelper {
    public ResourceHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int getId(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            android.content.res.Resources r0 = r1.getResources()     // Catch: java.lang.Exception -> Ld
            java.lang.String r1 = r1.getPackageName()     // Catch: java.lang.Exception -> Ld
            int r1 = r0.getIdentifier(r2, r3, r1)     // Catch: java.lang.Exception -> Ld
            return r1
        Ld:
            r1 = move-exception
            r1.printStackTrace()
            r1 = 0
            return r1
    }

    public static void initResourceR(android.content.Context r2) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.Class<com.mbridge.msdk.R$xml> r1 = com.mbridge.msdk.R.xml.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.R$id> r1 = com.mbridge.msdk.R.id.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.R$dimen> r1 = com.mbridge.msdk.R.dimen.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.R$integer> r1 = com.mbridge.msdk.R.integer.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.R$color> r1 = com.mbridge.msdk.R.color.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.R$drawable> r1 = com.mbridge.msdk.R.drawable.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.R$layout> r1 = com.mbridge.msdk.R.layout.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.R$attr> r1 = com.mbridge.msdk.R.attr.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.R$anim> r1 = com.mbridge.msdk.R.anim.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.R$style> r1 = com.mbridge.msdk.R.style.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.R$string> r1 = com.mbridge.msdk.R.string.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.R$styleable> r1 = com.mbridge.msdk.R.styleable.class
            setArrayFields(r2, r1, r0)
            java.lang.Class<com.mbridge.msdk.mbbid.R$xml> r1 = com.mbridge.msdk.mbbid.R.xml.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbbid.R$id> r1 = com.mbridge.msdk.mbbid.R.id.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbbid.R$dimen> r1 = com.mbridge.msdk.mbbid.R.dimen.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbbid.R$integer> r1 = com.mbridge.msdk.mbbid.R.integer.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbbid.R$color> r1 = com.mbridge.msdk.mbbid.R.color.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbbid.R$drawable> r1 = com.mbridge.msdk.mbbid.R.drawable.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbbid.R$layout> r1 = com.mbridge.msdk.mbbid.R.layout.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbbid.R$attr> r1 = com.mbridge.msdk.mbbid.R.attr.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbbid.R$anim> r1 = com.mbridge.msdk.mbbid.R.anim.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbbid.R$style> r1 = com.mbridge.msdk.mbbid.R.style.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbbid.R$string> r1 = com.mbridge.msdk.mbbid.R.string.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbbid.R$styleable> r1 = com.mbridge.msdk.mbbid.R.styleable.class
            setArrayFields(r2, r1, r0)
            java.lang.Class<com.mbridge.msdk.advanced.R$xml> r1 = com.mbridge.msdk.advanced.R.xml.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.advanced.R$id> r1 = com.mbridge.msdk.advanced.R.id.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.advanced.R$dimen> r1 = com.mbridge.msdk.advanced.R.dimen.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.advanced.R$integer> r1 = com.mbridge.msdk.advanced.R.integer.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.advanced.R$color> r1 = com.mbridge.msdk.advanced.R.color.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.advanced.R$drawable> r1 = com.mbridge.msdk.advanced.R.drawable.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.advanced.R$layout> r1 = com.mbridge.msdk.advanced.R.layout.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.advanced.R$attr> r1 = com.mbridge.msdk.advanced.R.attr.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.advanced.R$anim> r1 = com.mbridge.msdk.advanced.R.anim.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.advanced.R$style> r1 = com.mbridge.msdk.advanced.R.style.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.advanced.R$string> r1 = com.mbridge.msdk.advanced.R.string.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.advanced.R$styleable> r1 = com.mbridge.msdk.advanced.R.styleable.class
            setArrayFields(r2, r1, r0)
            java.lang.Class<com.mbridge.msdk.mbnative.R$xml> r1 = com.mbridge.msdk.mbnative.R.xml.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbnative.R$id> r1 = com.mbridge.msdk.mbnative.R.id.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbnative.R$dimen> r1 = com.mbridge.msdk.mbnative.R.dimen.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbnative.R$integer> r1 = com.mbridge.msdk.mbnative.R.integer.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbnative.R$color> r1 = com.mbridge.msdk.mbnative.R.color.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbnative.R$drawable> r1 = com.mbridge.msdk.mbnative.R.drawable.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbnative.R$layout> r1 = com.mbridge.msdk.mbnative.R.layout.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbnative.R$attr> r1 = com.mbridge.msdk.mbnative.R.attr.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbnative.R$anim> r1 = com.mbridge.msdk.mbnative.R.anim.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbnative.R$style> r1 = com.mbridge.msdk.mbnative.R.style.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbnative.R$string> r1 = com.mbridge.msdk.mbnative.R.string.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbnative.R$styleable> r1 = com.mbridge.msdk.mbnative.R.styleable.class
            setArrayFields(r2, r1, r0)
            java.lang.Class<com.mbridge.msdk.video.R$xml> r1 = com.mbridge.msdk.video.R.xml.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.video.R$id> r1 = com.mbridge.msdk.video.R.id.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.video.R$dimen> r1 = com.mbridge.msdk.video.R.dimen.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.video.R$integer> r1 = com.mbridge.msdk.video.R.integer.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.video.R$color> r1 = com.mbridge.msdk.video.R.color.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.video.R$drawable> r1 = com.mbridge.msdk.video.R.drawable.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.video.R$layout> r1 = com.mbridge.msdk.video.R.layout.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.video.R$attr> r1 = com.mbridge.msdk.video.R.attr.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.video.R$anim> r1 = com.mbridge.msdk.video.R.anim.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.video.R$style> r1 = com.mbridge.msdk.video.R.style.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.video.R$string> r1 = com.mbridge.msdk.video.R.string.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.video.R$styleable> r1 = com.mbridge.msdk.video.R.styleable.class
            setArrayFields(r2, r1, r0)
            java.lang.Class<com.mbridge.msdk.splash.R$xml> r1 = com.mbridge.msdk.splash.R.xml.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.splash.R$id> r1 = com.mbridge.msdk.splash.R.id.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.splash.R$dimen> r1 = com.mbridge.msdk.splash.R.dimen.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.splash.R$integer> r1 = com.mbridge.msdk.splash.R.integer.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.splash.R$color> r1 = com.mbridge.msdk.splash.R.color.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.splash.R$drawable> r1 = com.mbridge.msdk.splash.R.drawable.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.splash.R$layout> r1 = com.mbridge.msdk.splash.R.layout.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.splash.R$attr> r1 = com.mbridge.msdk.splash.R.attr.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.splash.R$anim> r1 = com.mbridge.msdk.splash.R.anim.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.splash.R$style> r1 = com.mbridge.msdk.splash.R.style.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.splash.R$string> r1 = com.mbridge.msdk.splash.R.string.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.splash.R$styleable> r1 = com.mbridge.msdk.splash.R.styleable.class
            setArrayFields(r2, r1, r0)
            java.lang.Class<com.mbridge.msdk.interstitial.R$xml> r1 = com.mbridge.msdk.interstitial.R.xml.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.interstitial.R$id> r1 = com.mbridge.msdk.interstitial.R.id.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.interstitial.R$dimen> r1 = com.mbridge.msdk.interstitial.R.dimen.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.interstitial.R$integer> r1 = com.mbridge.msdk.interstitial.R.integer.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.interstitial.R$color> r1 = com.mbridge.msdk.interstitial.R.color.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.interstitial.R$drawable> r1 = com.mbridge.msdk.interstitial.R.drawable.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.interstitial.R$layout> r1 = com.mbridge.msdk.interstitial.R.layout.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.interstitial.R$attr> r1 = com.mbridge.msdk.interstitial.R.attr.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.interstitial.R$anim> r1 = com.mbridge.msdk.interstitial.R.anim.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.interstitial.R$style> r1 = com.mbridge.msdk.interstitial.R.style.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.interstitial.R$string> r1 = com.mbridge.msdk.interstitial.R.string.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.interstitial.R$styleable> r1 = com.mbridge.msdk.interstitial.R.styleable.class
            setArrayFields(r2, r1, r0)
            java.lang.Class<com.mbridge.msdk.playercommon.R$xml> r1 = com.mbridge.msdk.playercommon.R.xml.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.playercommon.R$id> r1 = com.mbridge.msdk.playercommon.R.id.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.playercommon.R$dimen> r1 = com.mbridge.msdk.playercommon.R.dimen.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.playercommon.R$integer> r1 = com.mbridge.msdk.playercommon.R.integer.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.playercommon.R$color> r1 = com.mbridge.msdk.playercommon.R.color.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.playercommon.R$drawable> r1 = com.mbridge.msdk.playercommon.R.drawable.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.playercommon.R$layout> r1 = com.mbridge.msdk.playercommon.R.layout.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.playercommon.R$attr> r1 = com.mbridge.msdk.playercommon.R.attr.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.playercommon.R$anim> r1 = com.mbridge.msdk.playercommon.R.anim.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.playercommon.R$style> r1 = com.mbridge.msdk.playercommon.R.style.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.playercommon.R$string> r1 = com.mbridge.msdk.playercommon.R.string.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.playercommon.R$styleable> r1 = com.mbridge.msdk.playercommon.R.styleable.class
            setArrayFields(r2, r1, r0)
            java.lang.Class<com.mbridge.msdk.videocommon.R$xml> r1 = com.mbridge.msdk.videocommon.R.xml.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.videocommon.R$id> r1 = com.mbridge.msdk.videocommon.R.id.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.videocommon.R$dimen> r1 = com.mbridge.msdk.videocommon.R.dimen.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.videocommon.R$integer> r1 = com.mbridge.msdk.videocommon.R.integer.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.videocommon.R$color> r1 = com.mbridge.msdk.videocommon.R.color.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.videocommon.R$drawable> r1 = com.mbridge.msdk.videocommon.R.drawable.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.videocommon.R$layout> r1 = com.mbridge.msdk.videocommon.R.layout.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.videocommon.R$attr> r1 = com.mbridge.msdk.videocommon.R.attr.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.videocommon.R$anim> r1 = com.mbridge.msdk.videocommon.R.anim.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.videocommon.R$style> r1 = com.mbridge.msdk.videocommon.R.style.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.videocommon.R$string> r1 = com.mbridge.msdk.videocommon.R.string.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.videocommon.R$styleable> r1 = com.mbridge.msdk.videocommon.R.styleable.class
            setArrayFields(r2, r1, r0)
            java.lang.Class<com.mbridge.msdk.nativex.R$xml> r1 = com.mbridge.msdk.nativex.R.xml.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.nativex.R$id> r1 = com.mbridge.msdk.nativex.R.id.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.nativex.R$dimen> r1 = com.mbridge.msdk.nativex.R.dimen.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.nativex.R$integer> r1 = com.mbridge.msdk.nativex.R.integer.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.nativex.R$color> r1 = com.mbridge.msdk.nativex.R.color.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.nativex.R$drawable> r1 = com.mbridge.msdk.nativex.R.drawable.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.nativex.R$layout> r1 = com.mbridge.msdk.nativex.R.layout.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.nativex.R$attr> r1 = com.mbridge.msdk.nativex.R.attr.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.nativex.R$anim> r1 = com.mbridge.msdk.nativex.R.anim.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.nativex.R$style> r1 = com.mbridge.msdk.nativex.R.style.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.nativex.R$string> r1 = com.mbridge.msdk.nativex.R.string.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.nativex.R$styleable> r1 = com.mbridge.msdk.nativex.R.styleable.class
            setArrayFields(r2, r1, r0)
            java.lang.Class<com.mbridge.msdk.mbsignalcommon.R$xml> r1 = com.mbridge.msdk.mbsignalcommon.R.xml.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbsignalcommon.R$id> r1 = com.mbridge.msdk.mbsignalcommon.R.id.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbsignalcommon.R$dimen> r1 = com.mbridge.msdk.mbsignalcommon.R.dimen.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbsignalcommon.R$integer> r1 = com.mbridge.msdk.mbsignalcommon.R.integer.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbsignalcommon.R$color> r1 = com.mbridge.msdk.mbsignalcommon.R.color.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbsignalcommon.R$drawable> r1 = com.mbridge.msdk.mbsignalcommon.R.drawable.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbsignalcommon.R$layout> r1 = com.mbridge.msdk.mbsignalcommon.R.layout.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbsignalcommon.R$attr> r1 = com.mbridge.msdk.mbsignalcommon.R.attr.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbsignalcommon.R$anim> r1 = com.mbridge.msdk.mbsignalcommon.R.anim.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbsignalcommon.R$style> r1 = com.mbridge.msdk.mbsignalcommon.R.style.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbsignalcommon.R$string> r1 = com.mbridge.msdk.mbsignalcommon.R.string.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.mbsignalcommon.R$styleable> r1 = com.mbridge.msdk.mbsignalcommon.R.styleable.class
            setArrayFields(r2, r1, r0)
            java.lang.Class<com.mbridge.msdk.newinterstitial.R$xml> r1 = com.mbridge.msdk.newinterstitial.R.xml.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.newinterstitial.R$id> r1 = com.mbridge.msdk.newinterstitial.R.id.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.newinterstitial.R$dimen> r1 = com.mbridge.msdk.newinterstitial.R.dimen.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.newinterstitial.R$integer> r1 = com.mbridge.msdk.newinterstitial.R.integer.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.newinterstitial.R$color> r1 = com.mbridge.msdk.newinterstitial.R.color.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.newinterstitial.R$drawable> r1 = com.mbridge.msdk.newinterstitial.R.drawable.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.newinterstitial.R$layout> r1 = com.mbridge.msdk.newinterstitial.R.layout.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.newinterstitial.R$attr> r1 = com.mbridge.msdk.newinterstitial.R.attr.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.newinterstitial.R$anim> r1 = com.mbridge.msdk.newinterstitial.R.anim.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.newinterstitial.R$style> r1 = com.mbridge.msdk.newinterstitial.R.style.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.newinterstitial.R$string> r1 = com.mbridge.msdk.newinterstitial.R.string.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.newinterstitial.R$styleable> r1 = com.mbridge.msdk.newinterstitial.R.styleable.class
            setArrayFields(r2, r1, r0)
            java.lang.Class<com.mbridge.msdk.reward.R$xml> r1 = com.mbridge.msdk.reward.R.xml.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.reward.R$id> r1 = com.mbridge.msdk.reward.R.id.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.reward.R$dimen> r1 = com.mbridge.msdk.reward.R.dimen.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.reward.R$integer> r1 = com.mbridge.msdk.reward.R.integer.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.reward.R$color> r1 = com.mbridge.msdk.reward.R.color.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.reward.R$drawable> r1 = com.mbridge.msdk.reward.R.drawable.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.reward.R$layout> r1 = com.mbridge.msdk.reward.R.layout.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.reward.R$attr> r1 = com.mbridge.msdk.reward.R.attr.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.reward.R$anim> r1 = com.mbridge.msdk.reward.R.anim.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.reward.R$style> r1 = com.mbridge.msdk.reward.R.style.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.reward.R$string> r1 = com.mbridge.msdk.reward.R.string.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.reward.R$styleable> r1 = com.mbridge.msdk.reward.R.styleable.class
            setArrayFields(r2, r1, r0)
            java.lang.Class<com.mbridge.msdk.dycreator.R$xml> r1 = com.mbridge.msdk.dycreator.R.xml.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.dycreator.R$id> r1 = com.mbridge.msdk.dycreator.R.id.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.dycreator.R$dimen> r1 = com.mbridge.msdk.dycreator.R.dimen.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.dycreator.R$integer> r1 = com.mbridge.msdk.dycreator.R.integer.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.dycreator.R$color> r1 = com.mbridge.msdk.dycreator.R.color.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.dycreator.R$drawable> r1 = com.mbridge.msdk.dycreator.R.drawable.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.dycreator.R$layout> r1 = com.mbridge.msdk.dycreator.R.layout.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.dycreator.R$attr> r1 = com.mbridge.msdk.dycreator.R.attr.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.dycreator.R$anim> r1 = com.mbridge.msdk.dycreator.R.anim.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.dycreator.R$style> r1 = com.mbridge.msdk.dycreator.R.style.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.dycreator.R$string> r1 = com.mbridge.msdk.dycreator.R.string.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.dycreator.R$styleable> r1 = com.mbridge.msdk.dycreator.R.styleable.class
            setArrayFields(r2, r1, r0)
            java.lang.Class<com.mbridge.msdk.banner.R$xml> r1 = com.mbridge.msdk.banner.R.xml.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.banner.R$id> r1 = com.mbridge.msdk.banner.R.id.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.banner.R$dimen> r1 = com.mbridge.msdk.banner.R.dimen.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.banner.R$integer> r1 = com.mbridge.msdk.banner.R.integer.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.banner.R$color> r1 = com.mbridge.msdk.banner.R.color.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.banner.R$drawable> r1 = com.mbridge.msdk.banner.R.drawable.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.banner.R$layout> r1 = com.mbridge.msdk.banner.R.layout.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.banner.R$attr> r1 = com.mbridge.msdk.banner.R.attr.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.banner.R$anim> r1 = com.mbridge.msdk.banner.R.anim.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.banner.R$style> r1 = com.mbridge.msdk.banner.R.style.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.banner.R$string> r1 = com.mbridge.msdk.banner.R.string.class
            setIds(r2, r1)
            java.lang.Class<com.mbridge.msdk.banner.R$styleable> r1 = com.mbridge.msdk.banner.R.styleable.class
            setArrayFields(r2, r1, r0)
            java.lang.Class<com.kwad.sdk.R$raw> r1 = com.kwad.sdk.R.raw.class
            setIds(r2, r1)
            java.lang.Class<com.kwad.sdk.R$bool> r1 = com.kwad.sdk.R.bool.class
            setIds(r2, r1)
            java.lang.Class<com.kwad.sdk.R$xml> r1 = com.kwad.sdk.R.xml.class
            setIds(r2, r1)
            java.lang.Class<com.kwad.sdk.R$id> r1 = com.kwad.sdk.R.id.class
            setIds(r2, r1)
            java.lang.Class<com.kwad.sdk.R$dimen> r1 = com.kwad.sdk.R.dimen.class
            setIds(r2, r1)
            java.lang.Class<com.kwad.sdk.R$integer> r1 = com.kwad.sdk.R.integer.class
            setIds(r2, r1)
            java.lang.Class<com.kwad.sdk.R$color> r1 = com.kwad.sdk.R.color.class
            setIds(r2, r1)
            java.lang.Class<com.kwad.sdk.R$drawable> r1 = com.kwad.sdk.R.drawable.class
            setIds(r2, r1)
            java.lang.Class<com.kwad.sdk.R$layout> r1 = com.kwad.sdk.R.layout.class
            setIds(r2, r1)
            java.lang.Class<com.kwad.sdk.R$attr> r1 = com.kwad.sdk.R.attr.class
            setIds(r2, r1)
            java.lang.Class<com.kwad.sdk.R$anim> r1 = com.kwad.sdk.R.anim.class
            setIds(r2, r1)
            java.lang.Class<com.kwad.sdk.R$style> r1 = com.kwad.sdk.R.style.class
            setIds(r2, r1)
            java.lang.Class<com.kwad.sdk.R$string> r1 = com.kwad.sdk.R.string.class
            setIds(r2, r1)
            java.lang.Class<com.kwad.sdk.R$styleable> r1 = com.kwad.sdk.R.styleable.class
            setArrayFields(r2, r1, r0)
            java.lang.Class<com.czhj.sdk.common.R$bool> r1 = com.czhj.sdk.common.R.bool.class
            setIds(r2, r1)
            java.lang.Class<com.czhj.sdk.common.R$id> r1 = com.czhj.sdk.common.R.id.class
            setIds(r2, r1)
            java.lang.Class<com.czhj.sdk.common.R$dimen> r1 = com.czhj.sdk.common.R.dimen.class
            setIds(r2, r1)
            java.lang.Class<com.czhj.sdk.common.R$integer> r1 = com.czhj.sdk.common.R.integer.class
            setIds(r2, r1)
            java.lang.Class<com.czhj.sdk.common.R$color> r1 = com.czhj.sdk.common.R.color.class
            setIds(r2, r1)
            java.lang.Class<com.czhj.sdk.common.R$drawable> r1 = com.czhj.sdk.common.R.drawable.class
            setIds(r2, r1)
            java.lang.Class<com.czhj.sdk.common.R$layout> r1 = com.czhj.sdk.common.R.layout.class
            setIds(r2, r1)
            java.lang.Class<com.czhj.sdk.common.R$attr> r1 = com.czhj.sdk.common.R.attr.class
            setIds(r2, r1)
            java.lang.Class<com.czhj.sdk.common.R$anim> r1 = com.czhj.sdk.common.R.anim.class
            setIds(r2, r1)
            java.lang.Class<com.czhj.sdk.common.R$style> r1 = com.czhj.sdk.common.R.style.class
            setIds(r2, r1)
            java.lang.Class<com.czhj.sdk.common.R$string> r1 = com.czhj.sdk.common.R.string.class
            setIds(r2, r1)
            java.lang.Class<com.czhj.sdk.common.R$styleable> r1 = com.czhj.sdk.common.R.styleable.class
            setArrayFields(r2, r1, r0)
            java.lang.Class<com.tkay.sdk.core.R$id> r1 = com.tkay.sdk.core.R.id.class
            setIds(r2, r1)
            java.lang.Class<com.tkay.sdk.core.R$dimen> r1 = com.tkay.sdk.core.R.dimen.class
            setIds(r2, r1)
            java.lang.Class<com.tkay.sdk.core.R$color> r1 = com.tkay.sdk.core.R.color.class
            setIds(r2, r1)
            java.lang.Class<com.tkay.sdk.core.R$drawable> r1 = com.tkay.sdk.core.R.drawable.class
            setIds(r2, r1)
            java.lang.Class<com.tkay.sdk.core.R$layout> r1 = com.tkay.sdk.core.R.layout.class
            setIds(r2, r1)
            java.lang.Class<com.tkay.sdk.core.R$attr> r1 = com.tkay.sdk.core.R.attr.class
            setIds(r2, r1)
            java.lang.Class<com.tkay.sdk.core.R$anim> r1 = com.tkay.sdk.core.R.anim.class
            setIds(r2, r1)
            java.lang.Class<com.tkay.sdk.core.R$style> r1 = com.tkay.sdk.core.R.style.class
            setIds(r2, r1)
            java.lang.Class<com.tkay.sdk.core.R$string> r1 = com.tkay.sdk.core.R.string.class
            setIds(r2, r1)
            java.lang.Class<com.tkay.sdk.china.R$xml> r1 = com.tkay.sdk.china.R.xml.class
            setIds(r2, r1)
            java.lang.Class<com.tkay.sdk.china.R$id> r1 = com.tkay.sdk.china.R.id.class
            setIds(r2, r1)
            java.lang.Class<com.tkay.sdk.china.R$dimen> r1 = com.tkay.sdk.china.R.dimen.class
            setIds(r2, r1)
            java.lang.Class<com.tkay.sdk.china.R$color> r1 = com.tkay.sdk.china.R.color.class
            setIds(r2, r1)
            java.lang.Class<com.tkay.sdk.china.R$drawable> r1 = com.tkay.sdk.china.R.drawable.class
            setIds(r2, r1)
            java.lang.Class<com.tkay.sdk.china.R$layout> r1 = com.tkay.sdk.china.R.layout.class
            setIds(r2, r1)
            java.lang.Class<com.tkay.sdk.china.R$string> r1 = com.tkay.sdk.china.R.string.class
            setIds(r2, r1)
            java.lang.Class<com.sigmob.sdk.R$xml> r1 = com.sigmob.sdk.R.xml.class
            setIds(r2, r1)
            java.lang.Class<com.sigmob.sdk.R$id> r1 = com.sigmob.sdk.R.id.class
            setIds(r2, r1)
            java.lang.Class<com.sigmob.sdk.R$drawable> r1 = com.sigmob.sdk.R.drawable.class
            setIds(r2, r1)
            java.lang.Class<com.sigmob.sdk.R$layout> r1 = com.sigmob.sdk.R.layout.class
            setIds(r2, r1)
            java.lang.Class<com.sigmob.sdk.R$anim> r1 = com.sigmob.sdk.R.anim.class
            setIds(r2, r1)
            java.lang.Class<com.sigmob.sdk.R$style> r1 = com.sigmob.sdk.R.style.class
            setIds(r2, r1)
            java.lang.Class<com.sigmob.sdk.R$string> r1 = com.sigmob.sdk.R.string.class
            setIds(r2, r1)
            java.lang.Class<com.bykv.vk.openvk.R$raw> r1 = com.bykv.vk.openvk.R.raw.class
            setIds(r2, r1)
            java.lang.Class<com.bykv.vk.openvk.R$bool> r1 = com.bykv.vk.openvk.R.bool.class
            setIds(r2, r1)
            java.lang.Class<com.bykv.vk.openvk.R$interpolator> r1 = com.bykv.vk.openvk.R.interpolator.class
            setIds(r2, r1)
            java.lang.Class<com.bykv.vk.openvk.R$id> r1 = com.bykv.vk.openvk.R.id.class
            setIds(r2, r1)
            java.lang.Class<com.bykv.vk.openvk.R$animator> r1 = com.bykv.vk.openvk.R.animator.class
            setIds(r2, r1)
            java.lang.Class<com.bykv.vk.openvk.R$dimen> r1 = com.bykv.vk.openvk.R.dimen.class
            setIds(r2, r1)
            java.lang.Class<com.bykv.vk.openvk.R$integer> r1 = com.bykv.vk.openvk.R.integer.class
            setIds(r2, r1)
            java.lang.Class<com.bykv.vk.openvk.R$color> r1 = com.bykv.vk.openvk.R.color.class
            setIds(r2, r1)
            java.lang.Class<com.bykv.vk.openvk.R$drawable> r1 = com.bykv.vk.openvk.R.drawable.class
            setIds(r2, r1)
            java.lang.Class<com.bykv.vk.openvk.R$layout> r1 = com.bykv.vk.openvk.R.layout.class
            setIds(r2, r1)
            java.lang.Class<com.bykv.vk.openvk.R$attr> r1 = com.bykv.vk.openvk.R.attr.class
            setIds(r2, r1)
            java.lang.Class<com.bykv.vk.openvk.R$anim> r1 = com.bykv.vk.openvk.R.anim.class
            setIds(r2, r1)
            java.lang.Class<com.bykv.vk.openvk.R$style> r1 = com.bykv.vk.openvk.R.style.class
            setIds(r2, r1)
            java.lang.Class<com.bykv.vk.openvk.R$string> r1 = com.bykv.vk.openvk.R.string.class
            setIds(r2, r1)
            java.lang.Class<com.bykv.vk.openvk.R$styleable> r1 = com.bykv.vk.openvk.R.styleable.class
            setArrayFields(r2, r1, r0)
            java.lang.Class<com.qq.e.R$xml> r0 = com.qq.e.R.xml.class
            setIds(r2, r0)
            java.lang.Class<com.qq.e.R$integer> r0 = com.qq.e.R.integer.class
            setIds(r2, r0)
            java.lang.Class<com.qq.e.R$drawable> r0 = com.qq.e.R.drawable.class
            setIds(r2, r0)
            java.lang.Class<com.qq.e.R$anim> r0 = com.qq.e.R.anim.class
            setIds(r2, r0)
            java.lang.Class<com.qq.e.R$style> r0 = com.qq.e.R.style.class
            setIds(r2, r0)
            java.lang.Class<com.qq.e.R$string> r0 = com.qq.e.R.string.class
            setIds(r2, r0)
            return
    }

    protected static void setArrayFields(android.content.Context r10, java.lang.Class<?> r11, java.util.Map<java.lang.Object, java.lang.Integer> r12) {
            java.lang.reflect.Field[] r10 = r11.getDeclaredFields()
            int r11 = r10.length
            r0 = 0
            r1 = r0
        L7:
            if (r1 >= r11) goto L66
            r2 = r10[r1]
            r3 = 1
            r2.setAccessible(r3)
            r4 = 0
            java.lang.Object r2 = r2.get(r4)     // Catch: java.lang.Exception -> L5f
            boolean r4 = r2 instanceof int[]     // Catch: java.lang.Exception -> L5f
            if (r4 == 0) goto L63
            int[] r2 = (int[]) r2     // Catch: java.lang.Exception -> L5f
            int[] r2 = (int[]) r2     // Catch: java.lang.Exception -> L5f
            r4 = r0
        L1d:
            int r5 = r2.length     // Catch: java.lang.Exception -> L5f
            if (r4 >= r5) goto L63
            r5 = r2[r4]     // Catch: java.lang.Exception -> L5f
            java.lang.Integer r6 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> L5f
            boolean r6 = r12.containsKey(r6)     // Catch: java.lang.Exception -> L5f
            if (r6 == 0) goto L5c
            java.lang.Integer r6 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> L5f
            java.lang.Object r6 = r12.get(r6)     // Catch: java.lang.Exception -> L5f
            java.lang.reflect.Array.set(r2, r4, r6)     // Catch: java.lang.Exception -> L5f
            java.io.PrintStream r6 = java.lang.System.out     // Catch: java.lang.Exception -> L5f
            java.lang.String r7 = "setted attr array index %d: %d -> %d "
            r8 = 3
            java.lang.Object[] r8 = new java.lang.Object[r8]     // Catch: java.lang.Exception -> L5f
            java.lang.Integer r9 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> L5f
            r8[r0] = r9     // Catch: java.lang.Exception -> L5f
            java.lang.Integer r9 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> L5f
            r8[r3] = r9     // Catch: java.lang.Exception -> L5f
            r9 = 2
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> L5f
            java.lang.Object r5 = r12.get(r5)     // Catch: java.lang.Exception -> L5f
            r8[r9] = r5     // Catch: java.lang.Exception -> L5f
            java.lang.String r5 = java.lang.String.format(r7, r8)     // Catch: java.lang.Exception -> L5f
            r6.println(r5)     // Catch: java.lang.Exception -> L5f
        L5c:
            int r4 = r4 + 1
            goto L1d
        L5f:
            r2 = move-exception
            r2.printStackTrace()
        L63:
            int r1 = r1 + 1
            goto L7
        L66:
            return
    }

    protected static void setIds(android.content.Context r1, java.lang.Class<?> r2) {
            r0 = 0
            setIds(r1, r2, r0)
            return
    }

    protected static void setIds(android.content.Context r8, java.lang.Class<?> r9, java.util.Map<java.lang.Object, java.lang.Integer> r10) {
            java.lang.reflect.Field[] r0 = r9.getDeclaredFields()
            int r1 = r0.length
            r2 = 0
        L6:
            if (r2 >= r1) goto L37
            r3 = r0[r2]
            r4 = 1
            r3.setAccessible(r4)
            java.lang.String r4 = r3.getName()     // Catch: java.lang.Exception -> L30
            java.lang.String r5 = r9.getSimpleName()     // Catch: java.lang.Exception -> L30
            int r4 = getId(r8, r4, r5)     // Catch: java.lang.Exception -> L30
            r5 = 0
            if (r10 == 0) goto L28
            java.lang.Object r6 = r3.get(r5)     // Catch: java.lang.Exception -> L30
            java.lang.Integer r7 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> L30
            r10.put(r6, r7)     // Catch: java.lang.Exception -> L30
        L28:
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> L30
            r3.set(r5, r4)     // Catch: java.lang.Exception -> L30
            goto L34
        L30:
            r3 = move-exception
            r3.printStackTrace()
        L34:
            int r2 = r2 + 1
            goto L6
        L37:
            return
    }
}
