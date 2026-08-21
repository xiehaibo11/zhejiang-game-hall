.class public final Lcom/kwad/sdk/core/download/b/b;
.super Ljava/lang/Object;


# instance fields
.field private aod:Lcom/kwad/sdk/api/core/ICompletedRemoteView;


# direct methods
.method private constructor <init>(Lcom/kwad/sdk/api/core/ICompletedRemoteView;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/core/download/b/b;->aod:Lcom/kwad/sdk/api/core/ICompletedRemoteView;

    return-void
.end method

.method public static aW(Landroid/content/Context;)Lcom/kwad/sdk/core/download/b/b;
    .locals 1

    :try_start_0
    new-instance v0, Lcom/kwad/sdk/core/download/b/b;

    invoke-static {p0}, Lcom/kwad/sdk/api/core/RemoteViewBuilder;->createCompletedView(Landroid/content/Context;)Lcom/kwad/sdk/api/core/ICompletedRemoteView;

    move-result-object p0

    invoke-direct {v0, p0}, Lcom/kwad/sdk/core/download/b/b;-><init>(Lcom/kwad/sdk/api/core/ICompletedRemoteView;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    const/4 p0, 0x0

    return-object p0
.end method


# virtual methods
.method final build()Landroid/widget/RemoteViews;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/download/b/b;->aod:Lcom/kwad/sdk/api/core/ICompletedRemoteView;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/core/ICompletedRemoteView;->build()Landroid/widget/RemoteViews;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public final setIcon(Landroid/graphics/Bitmap;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/download/b/b;->aod:Lcom/kwad/sdk/api/core/ICompletedRemoteView;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/core/ICompletedRemoteView;->setIcon(Landroid/graphics/Bitmap;)V

    :cond_0
    return-void
.end method

.method public final setInstallText(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/download/b/b;->aod:Lcom/kwad/sdk/api/core/ICompletedRemoteView;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/core/ICompletedRemoteView;->setInstallText(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final setName(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/download/b/b;->aod:Lcom/kwad/sdk/api/core/ICompletedRemoteView;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/core/ICompletedRemoteView;->setName(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final setSize(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/download/b/b;->aod:Lcom/kwad/sdk/api/core/ICompletedRemoteView;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/core/ICompletedRemoteView;->setSize(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final setStatus(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/download/b/b;->aod:Lcom/kwad/sdk/api/core/ICompletedRemoteView;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/core/ICompletedRemoteView;->setStatus(Ljava/lang/String;)V

    :cond_0
    return-void
.end method
