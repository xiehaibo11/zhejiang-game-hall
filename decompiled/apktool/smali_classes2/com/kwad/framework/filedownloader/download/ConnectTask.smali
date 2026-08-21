.class public final Lcom/kwad/framework/filedownloader/download/ConnectTask;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/framework/filedownloader/download/ConnectTask$a;,
        Lcom/kwad/framework/filedownloader/download/ConnectTask$Reconnect;
    }
.end annotation


# instance fields
.field final acc:I

.field final acd:Lcom/kwad/framework/filedownloader/d/b;

.field private ace:Lcom/kwad/framework/filedownloader/download/a;

.field private acf:Ljava/lang/String;

.field private acg:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;>;"
        }
    .end annotation
.end field

.field private ach:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field final url:Ljava/lang/String;


# direct methods
.method private constructor <init>(Lcom/kwad/framework/filedownloader/download/a;ILjava/lang/String;Ljava/lang/String;Lcom/kwad/framework/filedownloader/d/b;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput p2, p0, Lcom/kwad/framework/filedownloader/download/ConnectTask;->acc:I

    iput-object p3, p0, Lcom/kwad/framework/filedownloader/download/ConnectTask;->url:Ljava/lang/String;

    iput-object p4, p0, Lcom/kwad/framework/filedownloader/download/ConnectTask;->acf:Ljava/lang/String;

    iput-object p5, p0, Lcom/kwad/framework/filedownloader/download/ConnectTask;->acd:Lcom/kwad/framework/filedownloader/d/b;

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/download/ConnectTask;->ace:Lcom/kwad/framework/filedownloader/download/a;

    return-void
.end method

.method synthetic constructor <init>(Lcom/kwad/framework/filedownloader/download/a;ILjava/lang/String;Ljava/lang/String;Lcom/kwad/framework/filedownloader/d/b;B)V
    .locals 0

    invoke-direct/range {p0 .. p5}, Lcom/kwad/framework/filedownloader/download/ConnectTask;-><init>(Lcom/kwad/framework/filedownloader/download/a;ILjava/lang/String;Ljava/lang/String;Lcom/kwad/framework/filedownloader/d/b;)V

    return-void
.end method

.method private a(Lcom/kwad/framework/filedownloader/a/b;)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/ConnectTask;->acd:Lcom/kwad/framework/filedownloader/d/b;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/d/b;->vl()Ljava/util/HashMap;

    move-result-object v0

    if-eqz v0, :cond_2

    sget-boolean v1, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v1, :cond_0

    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    iget v3, p0, Lcom/kwad/framework/filedownloader/download/ConnectTask;->acc:I

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x1

    aput-object v0, v1, v2

    const-string v2, "%d add outside header: %s"

    invoke-static {p0, v2, v1}, Lcom/kwad/framework/filedownloader/f/d;->e(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    invoke-virtual {v0}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/List;

    if-eqz v1, :cond_1

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-interface {p1, v2, v3}, Lcom/kwad/framework/filedownloader/a/b;->addHeader(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_2
    return-void
.end method

.method private b(Lcom/kwad/framework/filedownloader/a/b;)V
    .locals 5

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/ConnectTask;->acf:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/ConnectTask;->acf:Ljava/lang/String;

    const-string v1, "If-Match"

    invoke-interface {p1, v1, v0}, Lcom/kwad/framework/filedownloader/a/b;->addHeader(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/ConnectTask;->ace:Lcom/kwad/framework/filedownloader/download/a;

    iget-wide v0, v0, Lcom/kwad/framework/filedownloader/download/a;->acm:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-nez v0, :cond_1

    new-array v0, v1, [Ljava/lang/Object;

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/ConnectTask;->ace:Lcom/kwad/framework/filedownloader/download/a;

    iget-wide v3, v1, Lcom/kwad/framework/filedownloader/download/a;->acl:J

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    aput-object v1, v0, v2

    const-string v1, "bytes=%d-"

    invoke-static {v1, v0}, Lcom/kwad/framework/filedownloader/f/f;->b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_1
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    iget-object v3, p0, Lcom/kwad/framework/filedownloader/download/ConnectTask;->ace:Lcom/kwad/framework/filedownloader/download/a;

    iget-wide v3, v3, Lcom/kwad/framework/filedownloader/download/a;->acl:J

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    aput-object v3, v0, v2

    iget-object v2, p0, Lcom/kwad/framework/filedownloader/download/ConnectTask;->ace:Lcom/kwad/framework/filedownloader/download/a;

    iget-wide v2, v2, Lcom/kwad/framework/filedownloader/download/a;->acm:J

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    aput-object v2, v0, v1

    const-string v1, "bytes=%d-%d"

    invoke-static {v1, v0}, Lcom/kwad/framework/filedownloader/f/f;->b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    :goto_0
    const-string v1, "Range"

    invoke-interface {p1, v1, v0}, Lcom/kwad/framework/filedownloader/a/b;->addHeader(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private c(Lcom/kwad/framework/filedownloader/a/b;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/ConnectTask;->acd:Lcom/kwad/framework/filedownloader/d/b;

    const-string v1, "User-Agent"

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/d/b;->vl()Ljava/util/HashMap;

    move-result-object v0

    invoke-virtual {v0, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-nez v0, :cond_1

    :cond_0
    invoke-static {}, Lcom/kwad/framework/filedownloader/f/f;->vU()Ljava/lang/String;

    move-result-object v0

    invoke-interface {p1, v1, v0}, Lcom/kwad/framework/filedownloader/a/b;->addHeader(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method


# virtual methods
.method public final getRequestHeader()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;>;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/ConnectTask;->acg:Ljava/util/Map;

    return-object v0
.end method

.method final uk()Lcom/kwad/framework/filedownloader/a/b;
    .locals 4

    invoke-static {}, Lcom/kwad/framework/filedownloader/download/b;->up()Lcom/kwad/framework/filedownloader/download/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/ConnectTask;->url:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/kwad/framework/filedownloader/download/b;->bc(Ljava/lang/String;)Lcom/kwad/framework/filedownloader/a/b;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/kwad/framework/filedownloader/download/ConnectTask;->a(Lcom/kwad/framework/filedownloader/a/b;)V

    invoke-direct {p0, v0}, Lcom/kwad/framework/filedownloader/download/ConnectTask;->b(Lcom/kwad/framework/filedownloader/a/b;)V

    invoke-direct {p0, v0}, Lcom/kwad/framework/filedownloader/download/ConnectTask;->c(Lcom/kwad/framework/filedownloader/a/b;)V

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/a/b;->ue()Ljava/util/Map;

    move-result-object v1

    iput-object v1, p0, Lcom/kwad/framework/filedownloader/download/ConnectTask;->acg:Ljava/util/Map;

    sget-boolean v1, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v1, :cond_0

    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    iget v3, p0, Lcom/kwad/framework/filedownloader/download/ConnectTask;->acc:I

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x1

    iget-object v3, p0, Lcom/kwad/framework/filedownloader/download/ConnectTask;->acg:Ljava/util/Map;

    aput-object v3, v1, v2

    const-string v2, "%s request header %s"

    invoke-static {p0, v2, v1}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/a/b;->execute()V

    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    iput-object v1, p0, Lcom/kwad/framework/filedownloader/download/ConnectTask;->ach:Ljava/util/List;

    iget-object v2, p0, Lcom/kwad/framework/filedownloader/download/ConnectTask;->acg:Ljava/util/Map;

    invoke-static {v2, v0, v1}, Lcom/kwad/framework/filedownloader/a/d;->a(Ljava/util/Map;Lcom/kwad/framework/filedownloader/a/b;Ljava/util/List;)Lcom/kwad/framework/filedownloader/a/b;

    move-result-object v0

    return-object v0
.end method

.method final ul()Z
    .locals 4

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/ConnectTask;->ace:Lcom/kwad/framework/filedownloader/download/a;

    iget-wide v0, v0, Lcom/kwad/framework/filedownloader/download/a;->acl:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method final um()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/ConnectTask;->ach:Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/ConnectTask;->ach:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    add-int/lit8 v1, v1, -0x1

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public final un()Lcom/kwad/framework/filedownloader/download/a;
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/ConnectTask;->ace:Lcom/kwad/framework/filedownloader/download/a;

    return-object v0
.end method
