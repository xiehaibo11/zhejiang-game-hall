.class public final Lcom/tkay/expressad/advanced/d/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/advanced/b/a;


# instance fields
.field private a:Lcom/tkay/expressad/out/i;

.field private b:Lcom/tkay/expressad/advanced/d/c;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/advanced/d/c;)V
    .locals 0

    .line 18
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 19
    iput-object p1, p0, Lcom/tkay/expressad/advanced/d/b;->b:Lcom/tkay/expressad/advanced/d/c;

    return-void
.end method

.method private static a()V
    .locals 0

    return-void
.end method

.method private b()V
    .locals 2

    .line 61
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/b;->a:Lcom/tkay/expressad/out/i;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 62
    iput-object v1, p0, Lcom/tkay/expressad/advanced/d/b;->a:Lcom/tkay/expressad/out/i;

    .line 65
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/b;->b:Lcom/tkay/expressad/advanced/d/c;

    if-eqz v0, :cond_1

    .line 66
    iput-object v1, p0, Lcom/tkay/expressad/advanced/d/b;->b:Lcom/tkay/expressad/advanced/d/c;

    :cond_1
    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/foundation/d/c;I)V
    .locals 2

    .line 32
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/b;->b:Lcom/tkay/expressad/advanced/d/c;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/d/c;->a()Z

    move-result v0

    if-eqz v0, :cond_1

    if-eqz p1, :cond_1

    .line 34
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/b;->a:Lcom/tkay/expressad/out/i;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/tkay/expressad/advanced/d/b;->b:Lcom/tkay/expressad/advanced/d/c;

    if-eqz v1, :cond_0

    .line 35
    invoke-interface {v0}, Lcom/tkay/expressad/out/i;->a()V

    .line 38
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/b;->b:Lcom/tkay/expressad/advanced/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/d/c;->b()V

    .line 39
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 40
    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    const/4 v0, 0x2

    if-ne p2, v0, :cond_1

    .line 42
    iget-object p2, p0, Lcom/tkay/expressad/advanced/d/b;->b:Lcom/tkay/expressad/advanced/d/c;

    if-eqz p2, :cond_1

    const/4 v0, 0x1

    .line 43
    invoke-virtual {p2, p1, v0}, Lcom/tkay/expressad/advanced/d/c;->a(Lcom/tkay/expressad/foundation/d/c;Z)V

    :cond_1
    return-void
.end method

.method public final a(Lcom/tkay/expressad/out/i;)V
    .locals 0

    .line 23
    iput-object p1, p0, Lcom/tkay/expressad/advanced/d/b;->a:Lcom/tkay/expressad/out/i;

    return-void
.end method

.method public final a(Ljava/lang/String;I)V
    .locals 2

    .line 50
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onLoadFailed: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 51
    iget-object p2, p0, Lcom/tkay/expressad/advanced/d/b;->b:Lcom/tkay/expressad/advanced/d/c;

    if-eqz p2, :cond_1

    invoke-virtual {p2}, Lcom/tkay/expressad/advanced/d/c;->a()Z

    move-result p2

    if-eqz p2, :cond_1

    .line 52
    iget-object p2, p0, Lcom/tkay/expressad/advanced/d/b;->a:Lcom/tkay/expressad/out/i;

    if-eqz p2, :cond_0

    .line 53
    invoke-interface {p2, p1}, Lcom/tkay/expressad/out/i;->a(Ljava/lang/String;)V

    .line 55
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/advanced/d/b;->b:Lcom/tkay/expressad/advanced/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/advanced/d/c;->b()V

    :cond_1
    return-void
.end method
