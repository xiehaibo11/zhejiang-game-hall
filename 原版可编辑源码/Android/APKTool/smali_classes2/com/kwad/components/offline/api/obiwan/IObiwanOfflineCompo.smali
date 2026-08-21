.class public interface abstract Lcom/kwad/components/offline/api/obiwan/IObiwanOfflineCompo;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/IOfflineCompo;


# static fields
.field public static final IMPL:Ljava/lang/String; = "com.kwad.sdk.core.log.ObiwanOfflineCompoImpl"

.field public static final PACKAGE_NAME:Ljava/lang/String; = "com.kwad.components.obiwan"


# virtual methods
.method public abstract getLog()Lcom/kwad/components/offline/api/obiwan/IObiwanLogcat;
.end method

.method public abstract initReal(Landroid/content/Context;Lcom/kwad/sdk/api/SdkConfig;Lcom/kwad/components/offline/api/obiwan/IObiwanOfflineCompoInitConfig;Lcom/kwad/components/offline/api/InitCallBack;)V
.end method

.method public abstract updateConfigs()V
.end method
