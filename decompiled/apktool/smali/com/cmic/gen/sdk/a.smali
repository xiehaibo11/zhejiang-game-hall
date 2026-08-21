.class public Lcom/cmic/gen/sdk/a;
.super Ljava/lang/Object;
.source "ConcurrentBundle.java"


# instance fields
.field private a:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(I)V
    .locals 1

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 20
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    iput-object v0, p0, Lcom/cmic/gen/sdk/a;->a:Ljava/util/concurrent/ConcurrentHashMap;

    return-void
.end method


# virtual methods
.method public a()Lcom/cmic/gen/sdk/d/b;
    .locals 2

    .line 116
    iget-object v0, p0, Lcom/cmic/gen/sdk/a;->a:Ljava/util/concurrent/ConcurrentHashMap;

    const-string v1, "logBean"

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/cmic/gen/sdk/d/b;

    if-eqz v0, :cond_0

    return-object v0

    .line 120
    :cond_0
    new-instance v0, Lcom/cmic/gen/sdk/d/b;

    invoke-direct {v0}, Lcom/cmic/gen/sdk/d/b;-><init>()V

    return-object v0
.end method

.method public a(Lcom/cmic/gen/sdk/a/a;)V
    .locals 2

    if-eqz p1, :cond_0

    .line 125
    iget-object v0, p0, Lcom/cmic/gen/sdk/a;->a:Ljava/util/concurrent/ConcurrentHashMap;

    const-string v1, "current_config"

    invoke-virtual {v0, v1, p1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method

.method public a(Lcom/cmic/gen/sdk/d/b;)V
    .locals 2

    if-eqz p1, :cond_0

    .line 111
    iget-object v0, p0, Lcom/cmic/gen/sdk/a;->a:Ljava/util/concurrent/ConcurrentHashMap;

    const-string v1, "logBean"

    invoke-virtual {v0, v1, p1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method

.method public a(Ljava/lang/String;I)V
    .locals 1

    if-eqz p1, :cond_0

    .line 77
    iget-object v0, p0, Lcom/cmic/gen/sdk/a;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method

.method public a(Ljava/lang/String;J)V
    .locals 1

    if-eqz p1, :cond_0

    .line 96
    iget-object v0, p0, Lcom/cmic/gen/sdk/a;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-static {p2, p3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    if-eqz p1, :cond_0

    if-eqz p2, :cond_0

    .line 39
    iget-object v0, p0, Lcom/cmic/gen/sdk/a;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1, p2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method

.method public a(Ljava/lang/String;Z)V
    .locals 1

    if-eqz p1, :cond_0

    .line 58
    iget-object v0, p0, Lcom/cmic/gen/sdk/a;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-static {p2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method

.method public a(Ljava/lang/String;[B)V
    .locals 1

    if-eqz p1, :cond_0

    if-eqz p2, :cond_0

    .line 25
    iget-object v0, p0, Lcom/cmic/gen/sdk/a;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1, p2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method

.method public a(Ljava/lang/String;)[B
    .locals 1

    if-eqz p1, :cond_0

    .line 31
    iget-object v0, p0, Lcom/cmic/gen/sdk/a;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, [B

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public b(Ljava/lang/String;I)I
    .locals 1

    if-eqz p1, :cond_0

    .line 87
    iget-object v0, p0, Lcom/cmic/gen/sdk/a;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 88
    iget-object p2, p0, Lcom/cmic/gen/sdk/a;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p2, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    return p1

    :cond_0
    return p2
.end method

.method public b(Ljava/lang/String;J)J
    .locals 1

    if-eqz p1, :cond_0

    .line 102
    iget-object v0, p0, Lcom/cmic/gen/sdk/a;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 103
    iget-object p2, p0, Lcom/cmic/gen/sdk/a;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p2, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Long;

    invoke-virtual {p1}, Ljava/lang/Long;->longValue()J

    move-result-wide p1

    return-wide p1

    :cond_0
    return-wide p2
.end method

.method public b()Lcom/cmic/gen/sdk/a/a;
    .locals 2

    .line 130
    iget-object v0, p0, Lcom/cmic/gen/sdk/a;->a:Ljava/util/concurrent/ConcurrentHashMap;

    const-string v1, "current_config"

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/cmic/gen/sdk/a/a;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    const-string v0, "UmcConfigBean\u4e3a\u7a7a"

    const-string v1, "\u8bf7\u6838\u67e5"

    .line 135
    invoke-static {v0, v1}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 136
    new-instance v0, Lcom/cmic/gen/sdk/a/a$a;

    invoke-direct {v0}, Lcom/cmic/gen/sdk/a/a$a;-><init>()V

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/a/a$a;->a()Lcom/cmic/gen/sdk/a/a;

    move-result-object v0

    return-object v0
.end method

.method public b(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    const-string v0, ""

    .line 44
    invoke-virtual {p0, p1, v0}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    if-eqz p1, :cond_0

    .line 49
    iget-object v0, p0, Lcom/cmic/gen/sdk/a;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 50
    iget-object p2, p0, Lcom/cmic/gen/sdk/a;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p2, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    return-object p1

    :cond_0
    return-object p2
.end method

.method public b(Ljava/lang/String;Z)Z
    .locals 1

    if-eqz p1, :cond_0

    .line 68
    iget-object v0, p0, Lcom/cmic/gen/sdk/a;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 69
    iget-object p2, p0, Lcom/cmic/gen/sdk/a;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p2, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Boolean;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    return p1

    :cond_0
    return p2
.end method

.method public c(Ljava/lang/String;)I
    .locals 1

    const/4 v0, 0x0

    .line 82
    invoke-virtual {p0, p1, v0}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;I)I

    move-result p1

    return p1
.end method
