.class public Lcom/kwad/sdk/core/report/u;
.super Lcom/kwad/sdk/core/report/e;


# static fields
.field private static volatile asB:Lcom/kwad/sdk/core/report/u;


# instance fields
.field private final asC:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/report/s;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>(Landroid/content/Context;)V
    .locals 2

    new-instance v0, Lcom/kwad/sdk/core/report/t;

    sget v1, Lcom/kwad/sdk/core/report/t;->If:I

    invoke-direct {v0, p1, v1}, Lcom/kwad/sdk/core/report/t;-><init>(Landroid/content/Context;I)V

    invoke-direct {p0, v0}, Lcom/kwad/sdk/core/report/e;-><init>(Lcom/kwad/sdk/core/report/d;)V

    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/core/report/u;->asC:Ljava/util/List;

    new-instance v0, Lcom/kwad/sdk/core/report/l;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/l;-><init>()V

    invoke-interface {p1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public static bd(Landroid/content/Context;)Lcom/kwad/sdk/core/report/u;
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/report/u;->asB:Lcom/kwad/sdk/core/report/u;

    if-nez v0, :cond_1

    const-class v0, Lcom/kwad/sdk/core/report/u;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/sdk/core/report/u;->asB:Lcom/kwad/sdk/core/report/u;

    if-nez v1, :cond_0

    new-instance v1, Lcom/kwad/sdk/core/report/u;

    invoke-direct {v1, p0}, Lcom/kwad/sdk/core/report/u;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/kwad/sdk/core/report/u;->asB:Lcom/kwad/sdk/core/report/u;

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    :cond_1
    :goto_0
    sget-object p0, Lcom/kwad/sdk/core/report/u;->asB:Lcom/kwad/sdk/core/report/u;

    return-object p0
.end method

.method private declared-synchronized h(Landroid/database/Cursor;)Lcom/kwad/sdk/core/report/r;
    .locals 4

    monitor-enter p0

    const/4 v0, 0x0

    :try_start_0
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    const-class v2, Lcom/kwad/sdk/service/a/f;

    invoke-static {v2}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/sdk/service/a/f;

    invoke-interface {v2}, Lcom/kwad/sdk/service/a/f;->xM()Z

    move-result v2

    const/4 v3, 0x1

    if-eqz v2, :cond_0

    invoke-interface {p1, v3}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object p1

    new-instance v2, Lcom/kwad/sdk/core/report/r;

    invoke-direct {v2, v1, v0}, Lcom/kwad/sdk/core/report/r;-><init>(Ljava/lang/String;Z)V

    iput-object p1, v2, Lcom/kwad/sdk/core/report/r;->actionId:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object v2

    :cond_0
    :try_start_1
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/report/u;->asC:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    sub-int/2addr v0, v3

    if-ltz v0, :cond_1

    iget-object v1, p0, Lcom/kwad/sdk/core/report/u;->asC:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/report/s;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/core/report/s;->h(Lorg/json/JSONObject;)Lcom/kwad/sdk/core/report/r;

    move-result-object p1
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-object p1

    :cond_1
    :try_start_2
    new-instance v0, Lcom/kwad/sdk/core/report/r;

    invoke-direct {v0, p1}, Lcom/kwad/sdk/core/report/r;-><init>(Lorg/json/JSONObject;)V
    :try_end_2
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    monitor-exit p0

    return-object v0

    :catch_0
    move-exception p1

    :try_start_3
    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    new-instance p1, Lcom/kwad/sdk/core/report/r;

    const-string v0, ""

    invoke-direct {p1, v0}, Lcom/kwad/sdk/core/report/r;-><init>(Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    monitor-exit p0

    return-object p1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method


# virtual methods
.method protected final BV()Ljava/lang/String;
    .locals 1

    const-string v0, "ksad_actions"

    return-object v0
.end method

.method protected final BW()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "select aLog, actionId from "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/kwad/sdk/core/report/u;->BV()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method protected final synthetic g(Landroid/database/Cursor;)Lcom/kwad/sdk/core/report/g;
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/report/u;->h(Landroid/database/Cursor;)Lcom/kwad/sdk/core/report/r;

    move-result-object p1

    return-object p1
.end method

.method protected final getTag()Ljava/lang/String;
    .locals 1

    const-string v0, "ReportActionDBManager"

    return-object v0
.end method
