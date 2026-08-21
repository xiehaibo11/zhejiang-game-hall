.class public final Lcom/tkay/expressad/video/dynview/d/a;
.super Ljava/util/HashMap;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/video/dynview/d/a$a;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "<K:",
        "Ljava/lang/Object;",
        "V:",
        "Ljava/lang/Object;",
        ">",
        "Ljava/util/HashMap<",
        "TK;TV;>;"
    }
.end annotation


# instance fields
.field private a:Ljava/lang/ref/ReferenceQueue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/ReferenceQueue<",
            "TV;>;"
        }
    .end annotation
.end field

.field private b:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "TK;",
            "Lcom/tkay/expressad/video/dynview/d/a<",
            "TK;TV;>.a<TK;TV;>;>;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 23
    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 24
    new-instance v0, Ljava/lang/ref/ReferenceQueue;

    invoke-direct {v0}, Ljava/lang/ref/ReferenceQueue;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/video/dynview/d/a;->a:Ljava/lang/ref/ReferenceQueue;

    .line 25
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/video/dynview/d/a;->b:Ljava/util/HashMap;

    return-void
.end method

.method private a()V
    .locals 2

    .line 74
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/d/a;->a:Ljava/lang/ref/ReferenceQueue;

    invoke-virtual {v0}, Ljava/lang/ref/ReferenceQueue;->poll()Ljava/lang/ref/Reference;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/video/dynview/d/a$a;

    if-eqz v0, :cond_0

    .line 75
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/d/a;->b:Ljava/util/HashMap;

    iget-object v0, v0, Lcom/tkay/expressad/video/dynview/d/a$a;->a:Ljava/lang/Object;

    invoke-virtual {v1, v0}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_0
    return-void
.end method


# virtual methods
.method public final containsKey(Ljava/lang/Object;)Z
    .locals 1

    .line 49
    invoke-direct {p0}, Lcom/tkay/expressad/video/dynview/d/a;->a()V

    .line 50
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/d/a;->b:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    return p1
.end method

.method public final get(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Object;",
            ")TV;"
        }
    .end annotation

    .line 30
    invoke-direct {p0}, Lcom/tkay/expressad/video/dynview/d/a;->a()V

    .line 32
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/d/a;->b:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/video/dynview/d/a$a;

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 33
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/d/a$a;->get()Ljava/lang/Object;

    move-result-object p1

    return-object p1
.end method

.method public final put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TK;TV;)TV;"
        }
    .end annotation

    .line 38
    invoke-direct {p0}, Lcom/tkay/expressad/video/dynview/d/a;->a()V

    .line 40
    new-instance v0, Lcom/tkay/expressad/video/dynview/d/a$a;

    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/d/a;->a:Ljava/lang/ref/ReferenceQueue;

    invoke-direct {v0, p0, p1, p2, v1}, Lcom/tkay/expressad/video/dynview/d/a$a;-><init>(Lcom/tkay/expressad/video/dynview/d/a;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V

    .line 42
    iget-object p2, p0, Lcom/tkay/expressad/video/dynview/d/a;->b:Ljava/util/HashMap;

    invoke-virtual {p2, p1, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/video/dynview/d/a$a;

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 44
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/d/a$a;->get()Ljava/lang/Object;

    move-result-object p1

    return-object p1
.end method

.method public final remove(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Object;",
            ")TV;"
        }
    .end annotation

    .line 55
    invoke-direct {p0}, Lcom/tkay/expressad/video/dynview/d/a;->a()V

    .line 56
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/d/a;->b:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/video/dynview/d/a$a;

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 57
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/d/a$a;->get()Ljava/lang/Object;

    move-result-object p1

    return-object p1
.end method

.method public final size()I
    .locals 1

    .line 62
    invoke-direct {p0}, Lcom/tkay/expressad/video/dynview/d/a;->a()V

    .line 63
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/d/a;->b:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->size()I

    move-result v0

    return v0
.end method
