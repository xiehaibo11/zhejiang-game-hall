.class public final Lcom/kwad/framework/filedownloader/n;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/framework/filedownloader/u;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/framework/filedownloader/n$a;
    }
.end annotation


# instance fields
.field private final abn:Lcom/kwad/framework/filedownloader/u;


# direct methods
.method private constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-static {}, Lcom/kwad/framework/filedownloader/f/e;->vO()Lcom/kwad/framework/filedownloader/f/e;

    move-result-object v0

    iget-boolean v0, v0, Lcom/kwad/framework/filedownloader/f/e;->aeM:Z

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/framework/filedownloader/o;

    invoke-direct {v0}, Lcom/kwad/framework/filedownloader/o;-><init>()V

    goto :goto_0

    :cond_0
    new-instance v0, Lcom/kwad/framework/filedownloader/p;

    const-class v1, Lcom/kwad/sdk/api/proxy/app/FileDownloadService$SeparateProcessService;

    invoke-direct {v0, v1}, Lcom/kwad/framework/filedownloader/p;-><init>(Ljava/lang/Class;)V

    :goto_0
    iput-object v0, p0, Lcom/kwad/framework/filedownloader/n;->abn:Lcom/kwad/framework/filedownloader/u;

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/framework/filedownloader/n;-><init>()V

    return-void
.end method

.method public static tO()Lcom/kwad/framework/filedownloader/n;
    .locals 1

    invoke-static {}, Lcom/kwad/framework/filedownloader/n$a;->tQ()Lcom/kwad/framework/filedownloader/n;

    move-result-object v0

    return-object v0
.end method

.method public static tP()Lcom/kwad/framework/filedownloader/services/e$a;
    .locals 1

    invoke-static {}, Lcom/kwad/framework/filedownloader/n;->tO()Lcom/kwad/framework/filedownloader/n;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/framework/filedownloader/n;->abn:Lcom/kwad/framework/filedownloader/u;

    instance-of v0, v0, Lcom/kwad/framework/filedownloader/o;

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/framework/filedownloader/n;->tO()Lcom/kwad/framework/filedownloader/n;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/framework/filedownloader/n;->abn:Lcom/kwad/framework/filedownloader/u;

    check-cast v0, Lcom/kwad/framework/filedownloader/services/e$a;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/String;ZIIIZLcom/kwad/framework/filedownloader/d/b;Z)Z
    .locals 11

    move-object v0, p0

    iget-object v1, v0, Lcom/kwad/framework/filedownloader/n;->abn:Lcom/kwad/framework/filedownloader/u;

    move-object v2, p1

    move-object v3, p2

    move v4, p3

    move v5, p4

    move/from16 v6, p5

    move/from16 v7, p6

    move/from16 v8, p7

    move-object/from16 v9, p8

    move/from16 v10, p9

    invoke-interface/range {v1 .. v10}, Lcom/kwad/framework/filedownloader/u;->a(Ljava/lang/String;Ljava/lang/String;ZIIIZLcom/kwad/framework/filedownloader/d/b;Z)Z

    move-result v1

    return v1
.end method

.method public final aY(I)Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/n;->abn:Lcom/kwad/framework/filedownloader/u;

    invoke-interface {v0, p1}, Lcom/kwad/framework/filedownloader/u;->aY(I)Z

    move-result p1

    return p1
.end method

.method public final aZ(I)B
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/n;->abn:Lcom/kwad/framework/filedownloader/u;

    invoke-interface {v0, p1}, Lcom/kwad/framework/filedownloader/u;->aZ(I)B

    move-result p1

    return p1
.end method

.method public final an(Landroid/content/Context;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/n;->abn:Lcom/kwad/framework/filedownloader/u;

    invoke-interface {v0, p1}, Lcom/kwad/framework/filedownloader/u;->an(Landroid/content/Context;)V

    return-void
.end method

.method public final ba(I)Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/n;->abn:Lcom/kwad/framework/filedownloader/u;

    invoke-interface {v0, p1}, Lcom/kwad/framework/filedownloader/u;->ba(I)Z

    move-result p1

    return p1
.end method

.method public final isConnected()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/n;->abn:Lcom/kwad/framework/filedownloader/u;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/u;->isConnected()Z

    move-result v0

    return v0
.end method
