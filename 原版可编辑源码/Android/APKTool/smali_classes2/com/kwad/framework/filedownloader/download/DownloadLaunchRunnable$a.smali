.class public final Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field private acA:Lcom/kwad/framework/filedownloader/y;

.field private acT:Ljava/lang/Integer;

.field private acU:Ljava/lang/Integer;

.field private acV:Ljava/lang/Boolean;

.field private acW:Ljava/lang/Boolean;

.field private acX:Ljava/lang/Integer;

.field private acd:Lcom/kwad/framework/filedownloader/d/b;

.field private acw:Lcom/kwad/framework/filedownloader/d/c;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/framework/filedownloader/y;)Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->acA:Lcom/kwad/framework/filedownloader/y;

    return-object p0
.end method

.method public final a(Ljava/lang/Boolean;)Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->acV:Ljava/lang/Boolean;

    return-object p0
.end method

.method public final a(Ljava/lang/Integer;)Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->acT:Ljava/lang/Integer;

    return-object p0
.end method

.method public final b(Lcom/kwad/framework/filedownloader/d/b;)Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->acd:Lcom/kwad/framework/filedownloader/d/b;

    return-object p0
.end method

.method public final b(Ljava/lang/Boolean;)Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->acW:Ljava/lang/Boolean;

    return-object p0
.end method

.method public final b(Ljava/lang/Integer;)Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->acU:Ljava/lang/Integer;

    return-object p0
.end method

.method public final c(Ljava/lang/Integer;)Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->acX:Ljava/lang/Integer;

    return-object p0
.end method

.method public final e(Lcom/kwad/framework/filedownloader/d/c;)Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->acw:Lcom/kwad/framework/filedownloader/d/c;

    return-object p0
.end method

.method public final uF()Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;
    .locals 11

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->acw:Lcom/kwad/framework/filedownloader/d/c;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->acA:Lcom/kwad/framework/filedownloader/y;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->acT:Ljava/lang/Integer;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->acU:Ljava/lang/Integer;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->acV:Ljava/lang/Boolean;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->acW:Ljava/lang/Boolean;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->acX:Ljava/lang/Integer;

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;

    iget-object v2, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->acw:Lcom/kwad/framework/filedownloader/d/c;

    iget-object v3, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->acd:Lcom/kwad/framework/filedownloader/d/b;

    iget-object v4, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->acA:Lcom/kwad/framework/filedownloader/y;

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->acT:Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v5

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->acU:Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v6

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->acV:Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v7

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->acW:Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v8

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable$a;->acX:Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v9

    const/4 v10, 0x0

    move-object v1, v0

    invoke-direct/range {v1 .. v10}, Lcom/kwad/framework/filedownloader/download/DownloadLaunchRunnable;-><init>(Lcom/kwad/framework/filedownloader/d/c;Lcom/kwad/framework/filedownloader/d/b;Lcom/kwad/framework/filedownloader/y;IIZZIB)V

    return-object v0

    :cond_0
    new-instance v0, Ljava/lang/IllegalArgumentException;

    invoke-direct {v0}, Ljava/lang/IllegalArgumentException;-><init>()V

    throw v0
.end method
