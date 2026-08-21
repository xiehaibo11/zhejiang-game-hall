.class public interface abstract Lcom/kwad/components/core/offline/api/b/c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/components/a;


# virtual methods
.method public abstract checkStyleTemplateById(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)Lcom/kwad/components/offline/api/tk/model/StyleTemplate;
.end method

.method public abstract getJsBaseDir(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
.end method

.method public abstract getState()Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;
.end method

.method public abstract getView(Landroid/content/Context;Ljava/lang/String;II)Lcom/kwad/sdk/components/l;
.end method

.method public abstract loadTkFileByTemplateId(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILcom/kwad/components/offline/api/tk/TKDownloadListener;)V
.end method

.method public abstract onDestroy()V
.end method
