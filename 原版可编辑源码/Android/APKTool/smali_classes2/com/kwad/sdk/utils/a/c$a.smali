.class public Lcom/kwad/sdk/utils/a/c$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/utils/a/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# static fields
.field static aLk:I = 0xb

.field static final aLl:Lcom/kwad/sdk/utils/a/c$c;


# instance fields
.field private final Tt:Ljava/lang/String;

.field private aLg:I

.field private aLm:[Lcom/kwad/sdk/utils/a/c$b;

.field private final name:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/kwad/sdk/utils/a/c$c;

    const/16 v1, 0xb

    invoke-direct {v0, v1}, Lcom/kwad/sdk/utils/a/c$c;-><init>(I)V

    sput-object v0, Lcom/kwad/sdk/utils/a/c$a;->aLl:Lcom/kwad/sdk/utils/a/c$c;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput v0, p0, Lcom/kwad/sdk/utils/a/c$a;->aLg:I

    if-eqz p1, :cond_2

    invoke-virtual {p1}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_2

    if-eqz p2, :cond_1

    invoke-virtual {p2}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "/"

    invoke-virtual {p1, v0}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 p1, 0x2f

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    :goto_0
    iput-object p1, p0, Lcom/kwad/sdk/utils/a/c$a;->Tt:Ljava/lang/String;

    iput-object p2, p0, Lcom/kwad/sdk/utils/a/c$a;->name:Ljava/lang/String;

    return-void

    :cond_1
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string p2, "name is empty"

    invoke-direct {p1, p2}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1

    :cond_2
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string p2, "path is empty"

    invoke-direct {p1, p2}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method


# virtual methods
.method public final Kz()Lcom/kwad/sdk/utils/a/c;
    .locals 7

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/kwad/sdk/utils/a/c$a;->Tt:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/kwad/sdk/utils/a/c$a;->name:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/utils/a/c$c;->fX(Ljava/lang/String;)Lcom/kwad/sdk/utils/a/c;

    move-result-object v1

    if-nez v1, :cond_1

    const-class v2, Lcom/kwad/sdk/utils/a/c$a;

    monitor-enter v2

    :try_start_0
    invoke-static {v0}, Lcom/kwad/sdk/utils/a/c$c;->fX(Ljava/lang/String;)Lcom/kwad/sdk/utils/a/c;

    move-result-object v1

    if-nez v1, :cond_0

    new-instance v1, Lcom/kwad/sdk/utils/a/c;

    iget-object v3, p0, Lcom/kwad/sdk/utils/a/c$a;->Tt:Ljava/lang/String;

    iget-object v4, p0, Lcom/kwad/sdk/utils/a/c$a;->name:Ljava/lang/String;

    iget-object v5, p0, Lcom/kwad/sdk/utils/a/c$a;->aLm:[Lcom/kwad/sdk/utils/a/c$b;

    iget v6, p0, Lcom/kwad/sdk/utils/a/c$a;->aLg:I

    invoke-direct {v1, v3, v4, v5, v6}, Lcom/kwad/sdk/utils/a/c;-><init>(Ljava/lang/String;Ljava/lang/String;[Lcom/kwad/sdk/utils/a/c$b;I)V

    invoke-static {v0, v1}, Lcom/kwad/sdk/utils/a/c$c;->b(Ljava/lang/String;Lcom/kwad/sdk/utils/a/c;)V

    :cond_0
    monitor-exit v2

    goto :goto_0

    :catchall_0
    move-exception v0

    monitor-exit v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v0

    :cond_1
    :goto_0
    sget-object v2, Lcom/kwad/sdk/utils/a/c$c;->aLq:Ljava/util/Map;

    invoke-interface {v2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    const/4 v3, 0x1

    if-eqz v2, :cond_2

    sget-object v4, Lcom/kwad/sdk/utils/a/c$c;->aLq:Ljava/util/Map;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    add-int/2addr v2, v3

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {v4, v0, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_1

    :cond_2
    sget-object v2, Lcom/kwad/sdk/utils/a/c$c;->aLq:Ljava/util/Map;

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-interface {v2, v0, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :goto_1
    return-object v1
.end method
