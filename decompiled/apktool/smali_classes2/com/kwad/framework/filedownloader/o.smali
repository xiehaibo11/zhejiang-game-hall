.class final Lcom/kwad/framework/filedownloader/o;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/framework/filedownloader/services/e$a;
.implements Lcom/kwad/framework/filedownloader/u;


# static fields
.field private static abp:Ljava/lang/Class;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation
.end field


# instance fields
.field private final abq:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/Runnable;",
            ">;"
        }
    .end annotation
.end field

.field private abr:Lcom/kwad/framework/filedownloader/services/e;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/o;->abq:Ljava/util/ArrayList;

    return-void
.end method

.method private a(Landroid/content/Context;Ljava/lang/Runnable;)V
    .locals 1

    new-instance p2, Landroid/content/Intent;

    invoke-static {}, Lcom/kwad/framework/filedownloader/o;->tR()Ljava/lang/Class;

    move-result-object v0

    invoke-direct {p2, p1, v0}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    invoke-virtual {p1, p2}, Landroid/content/Context;->startService(Landroid/content/Intent;)Landroid/content/ComponentName;

    return-void
.end method

.method private static tR()Ljava/lang/Class;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation

    sget-object v0, Lcom/kwad/framework/filedownloader/o;->abp:Ljava/lang/Class;

    if-nez v0, :cond_0

    const-class v0, Lcom/kwad/sdk/api/proxy/app/FileDownloadService$SharedMainProcessService;

    sput-object v0, Lcom/kwad/framework/filedownloader/o;->abp:Ljava/lang/Class;

    :cond_0
    sget-object v0, Lcom/kwad/framework/filedownloader/o;->abp:Ljava/lang/Class;

    return-object v0
.end method


# virtual methods
.method public final a(Lcom/kwad/framework/filedownloader/services/e;)V
    .locals 3

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/o;->abr:Lcom/kwad/framework/filedownloader/services/e;

    iget-object p1, p0, Lcom/kwad/framework/filedownloader/o;->abq:Ljava/util/ArrayList;

    invoke-virtual {p1}, Ljava/util/ArrayList;->clone()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/List;

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/o;->abq:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Runnable;

    invoke-interface {v0}, Ljava/lang/Runnable;->run()V

    goto :goto_0

    :cond_0
    invoke-static {}, Lcom/kwad/framework/filedownloader/f;->tB()Lcom/kwad/framework/filedownloader/f;

    move-result-object p1

    new-instance v0, Lcom/kwad/framework/filedownloader/event/DownloadServiceConnectChangedEvent;

    sget-object v1, Lcom/kwad/framework/filedownloader/event/DownloadServiceConnectChangedEvent$ConnectStatus;->connected:Lcom/kwad/framework/filedownloader/event/DownloadServiceConnectChangedEvent$ConnectStatus;

    invoke-static {}, Lcom/kwad/framework/filedownloader/o;->tR()Ljava/lang/Class;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Lcom/kwad/framework/filedownloader/event/DownloadServiceConnectChangedEvent;-><init>(Lcom/kwad/framework/filedownloader/event/DownloadServiceConnectChangedEvent$ConnectStatus;Ljava/lang/Class;)V

    invoke-virtual {p1, v0}, Lcom/kwad/framework/filedownloader/f;->c(Lcom/kwad/framework/filedownloader/event/b;)V

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;ZIIIZLcom/kwad/framework/filedownloader/d/b;Z)Z
    .locals 11

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/o;->isConnected()Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {p1, p2, p3}, Lcom/kwad/framework/filedownloader/f/a;->h(Ljava/lang/String;Ljava/lang/String;Z)Z

    move-result v0

    return v0

    :cond_0
    move-object v0, p0

    iget-object v1, v0, Lcom/kwad/framework/filedownloader/o;->abr:Lcom/kwad/framework/filedownloader/services/e;

    move-object v2, p1

    move-object v3, p2

    move v4, p3

    move v5, p4

    move/from16 v6, p5

    move/from16 v7, p6

    move/from16 v8, p7

    move-object/from16 v9, p8

    move/from16 v10, p9

    invoke-virtual/range {v1 .. v10}, Lcom/kwad/framework/filedownloader/services/e;->b(Ljava/lang/String;Ljava/lang/String;ZIIIZLcom/kwad/framework/filedownloader/d/b;Z)V

    const/4 v1, 0x1

    return v1
.end method

.method public final aY(I)Z
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/o;->isConnected()Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {p1}, Lcom/kwad/framework/filedownloader/f/a;->aY(I)Z

    move-result p1

    return p1

    :cond_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/o;->abr:Lcom/kwad/framework/filedownloader/services/e;

    invoke-virtual {v0, p1}, Lcom/kwad/framework/filedownloader/services/e;->aY(I)Z

    move-result p1

    return p1
.end method

.method public final aZ(I)B
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/o;->isConnected()Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {p1}, Lcom/kwad/framework/filedownloader/f/a;->aZ(I)B

    move-result p1

    return p1

    :cond_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/o;->abr:Lcom/kwad/framework/filedownloader/services/e;

    invoke-virtual {v0, p1}, Lcom/kwad/framework/filedownloader/services/e;->aZ(I)B

    move-result p1

    return p1
.end method

.method public final an(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/framework/filedownloader/o;->a(Landroid/content/Context;Ljava/lang/Runnable;)V

    return-void
.end method

.method public final ba(I)Z
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/o;->isConnected()Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {p1}, Lcom/kwad/framework/filedownloader/f/a;->ba(I)Z

    move-result p1

    return p1

    :cond_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/o;->abr:Lcom/kwad/framework/filedownloader/services/e;

    invoke-virtual {v0, p1}, Lcom/kwad/framework/filedownloader/services/e;->ba(I)Z

    move-result p1

    return p1
.end method

.method public final isConnected()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/o;->abr:Lcom/kwad/framework/filedownloader/services/e;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final onDisconnected()V
    .locals 4

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/o;->abr:Lcom/kwad/framework/filedownloader/services/e;

    invoke-static {}, Lcom/kwad/framework/filedownloader/f;->tB()Lcom/kwad/framework/filedownloader/f;

    move-result-object v0

    new-instance v1, Lcom/kwad/framework/filedownloader/event/DownloadServiceConnectChangedEvent;

    sget-object v2, Lcom/kwad/framework/filedownloader/event/DownloadServiceConnectChangedEvent$ConnectStatus;->disconnected:Lcom/kwad/framework/filedownloader/event/DownloadServiceConnectChangedEvent$ConnectStatus;

    invoke-static {}, Lcom/kwad/framework/filedownloader/o;->tR()Ljava/lang/Class;

    move-result-object v3

    invoke-direct {v1, v2, v3}, Lcom/kwad/framework/filedownloader/event/DownloadServiceConnectChangedEvent;-><init>(Lcom/kwad/framework/filedownloader/event/DownloadServiceConnectChangedEvent$ConnectStatus;Ljava/lang/Class;)V

    invoke-virtual {v0, v1}, Lcom/kwad/framework/filedownloader/f;->c(Lcom/kwad/framework/filedownloader/event/b;)V

    return-void
.end method
