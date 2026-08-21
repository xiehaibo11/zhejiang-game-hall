.class public interface abstract Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/IOfflineCompo;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;
    }
.end annotation


# static fields
.field public static final IMPL:Ljava/lang/String; = "com.kwad.sdk.AdLiveOfflineCompoImpl"

.field public static final PACKAGE_NAME:Ljava/lang/String; = "com.kwad.components.adLive"


# virtual methods
.method public abstract getAdLiveEndRequest(Ljava/lang/String;)Lcom/kwad/components/offline/api/core/adlive/IAdLiveEndRequest;
.end method

.method public abstract getAdLivePlayModule(Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;
.end method

.method public abstract getState()Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;
.end method

.method public abstract getView(Landroid/content/Context;I)Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;
.end method

.method public abstract initReal(Landroid/content/Context;Lcom/kwad/sdk/api/SdkConfig;Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompoInitConfig;Lcom/kwad/components/offline/api/InitCallBack;)V
.end method

.method public abstract onConfigRefresh(Landroid/content/Context;Lorg/json/JSONObject;)V
.end method
