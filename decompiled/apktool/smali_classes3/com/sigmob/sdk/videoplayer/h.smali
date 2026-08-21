.class public Lcom/sigmob/sdk/videoplayer/h;
.super Ljava/lang/Object;


# static fields
.field public static final a:Ljava/lang/String; = "URL_KEY_DEFAULT"


# instance fields
.field public b:I

.field public c:Ljava/util/LinkedHashMap;

.field public d:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public e:Z

.field public f:[Ljava/lang/Object;

.field public title:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/Object;)V
    .locals 3

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/h;->c:Ljava/util/LinkedHashMap;

    const-string v0, ""

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/h;->title:Ljava/lang/String;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/h;->d:Ljava/util/HashMap;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/videoplayer/h;->e:Z

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/h;->c:Ljava/util/LinkedHashMap;

    const-string v2, "URL_KEY_DEFAULT"

    invoke-virtual {v1, v2, p1}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iput v0, p0, Lcom/sigmob/sdk/videoplayer/h;->b:I

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;)V
    .locals 3

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/h;->c:Ljava/util/LinkedHashMap;

    const-string v0, ""

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/h;->title:Ljava/lang/String;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/h;->d:Ljava/util/HashMap;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/videoplayer/h;->e:Z

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/h;->c:Ljava/util/LinkedHashMap;

    const-string v2, "URL_KEY_DEFAULT"

    invoke-virtual {v1, v2, p1}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iput v0, p0, Lcom/sigmob/sdk/videoplayer/h;->b:I

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/h;->c:Ljava/util/LinkedHashMap;

    const-string v0, ""

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/h;->title:Ljava/lang/String;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/h;->d:Ljava/util/HashMap;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/videoplayer/h;->e:Z

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/h;->c:Ljava/util/LinkedHashMap;

    const-string v2, "URL_KEY_DEFAULT"

    invoke-virtual {v1, v2, p1}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iput-object p2, p0, Lcom/sigmob/sdk/videoplayer/h;->title:Ljava/lang/String;

    iput v0, p0, Lcom/sigmob/sdk/videoplayer/h;->b:I

    return-void
.end method

.method public constructor <init>(Ljava/util/LinkedHashMap;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/h;->c:Ljava/util/LinkedHashMap;

    const-string v0, ""

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/h;->title:Ljava/lang/String;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/h;->d:Ljava/util/HashMap;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/videoplayer/h;->e:Z

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/h;->c:Ljava/util/LinkedHashMap;

    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->clear()V

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/h;->c:Ljava/util/LinkedHashMap;

    invoke-virtual {v1, p1}, Ljava/util/LinkedHashMap;->putAll(Ljava/util/Map;)V

    iput v0, p0, Lcom/sigmob/sdk/videoplayer/h;->b:I

    return-void
.end method

.method public constructor <init>(Ljava/util/LinkedHashMap;Ljava/lang/String;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/h;->c:Ljava/util/LinkedHashMap;

    const-string v0, ""

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/h;->title:Ljava/lang/String;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/h;->d:Ljava/util/HashMap;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/videoplayer/h;->e:Z

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/h;->c:Ljava/util/LinkedHashMap;

    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->clear()V

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/h;->c:Ljava/util/LinkedHashMap;

    invoke-virtual {v1, p1}, Ljava/util/LinkedHashMap;->putAll(Ljava/util/Map;)V

    iput-object p2, p0, Lcom/sigmob/sdk/videoplayer/h;->title:Ljava/lang/String;

    iput v0, p0, Lcom/sigmob/sdk/videoplayer/h;->b:I

    return-void
.end method


# virtual methods
.method public a()Ljava/lang/Object;
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/videoplayer/h;->b:I

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoplayer/h;->b(I)Ljava/lang/Object;

    move-result-object v0

    return-object v0
.end method

.method public a(I)Ljava/lang/String;
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/h;->c:Ljava/util/LinkedHashMap;

    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    const/4 v1, 0x0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    if-ne v1, p1, :cond_0

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    const/4 p1, 0x0

    return-object p1
.end method

.method public a(Ljava/lang/Object;)Z
    .locals 1

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/h;->c:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p1}, Ljava/util/LinkedHashMap;->containsValue(Ljava/lang/Object;)Z

    move-result p1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public b()Ljava/lang/Object;
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/videoplayer/h;->b:I

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoplayer/h;->a(I)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public b(I)Ljava/lang/Object;
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/h;->c:Ljava/util/LinkedHashMap;

    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    const/4 v1, 0x0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    if-ne v1, p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/h;->c:Ljava/util/LinkedHashMap;

    invoke-virtual {p1, v2}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    return-object p1

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    const/4 p1, 0x0

    return-object p1
.end method

.method public c()Lcom/sigmob/sdk/videoplayer/h;
    .locals 3

    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/h;->c:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, v1}, Ljava/util/LinkedHashMap;->putAll(Ljava/util/Map;)V

    new-instance v1, Lcom/sigmob/sdk/videoplayer/h;

    iget-object v2, p0, Lcom/sigmob/sdk/videoplayer/h;->title:Ljava/lang/String;

    invoke-direct {v1, v0, v2}, Lcom/sigmob/sdk/videoplayer/h;-><init>(Ljava/util/LinkedHashMap;Ljava/lang/String;)V

    return-object v1
.end method
