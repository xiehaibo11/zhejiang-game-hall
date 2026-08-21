.class public interface abstract Lcom/kwad/components/offline/api/tk/ITkOfflineCompo;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/IOfflineCompo;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;
    }
.end annotation


# static fields
.field public static final IMPL:Ljava/lang/String; = "com.kwad.tachikoma.TkOfflineCompoImpl"

.field public static final PACKAGE_NAME:Ljava/lang/String; = "com.kwad.components.tachikoma"


# virtual methods
.method public abstract checkStyleTemplateById(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)Lcom/kwad/components/offline/api/tk/model/StyleTemplate;
.end method

.method public abstract getJsBaseDir(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
.end method

.method public abstract getState()Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;
.end method

.method public abstract getTKVersion()Ljava/lang/String;
.end method

.method public abstract getView(Landroid/content/Context;Ljava/lang/String;II)Lcom/kwad/components/offline/api/tk/IOfflineCompoTachikomaView;
.end method

.method public abstract initReal(Landroid/content/Context;Lcom/kwad/sdk/api/SdkConfig;Lcom/kwad/components/offline/api/tk/ITkOfflineCompoInitConfig;Lcom/kwad/components/offline/api/InitCallBack;)V
.end method

.method public abstract loadTkFileByTemplateId(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILcom/kwad/components/offline/api/tk/TKDownloadListener;)V
.end method

.method public abstract onConfigRefresh(Landroid/content/Context;Lorg/json/JSONObject;)V
.end method

.method public abstract onDestroy()V
.end method
