.class final Lcom/tkay/basead/a/b/b$a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/a/a/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/basead/a/b/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "a"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/tkay/basead/a/a/b<",
        "Ljava/lang/Void;",
        "Lcom/tkay/basead/c/e;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/a/b/b;


# direct methods
.method private constructor <init>(Lcom/tkay/basead/a/b/b;)V
    .locals 0

    .line 344
    iput-object p1, p0, Lcom/tkay/basead/a/b/b$a;->a:Lcom/tkay/basead/a/b/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/tkay/basead/a/b/b;B)V
    .locals 0

    .line 344
    invoke-direct {p0, p1}, Lcom/tkay/basead/a/b/b$a;-><init>(Lcom/tkay/basead/a/b/b;)V

    return-void
.end method

.method private a(Lcom/tkay/basead/c/e;)V
    .locals 2

    .line 356
    iget-object v0, p0, Lcom/tkay/basead/a/b/b$a;->a:Lcom/tkay/basead/a/b/b;

    invoke-static {v0}, Lcom/tkay/basead/a/b/b;->c(Lcom/tkay/basead/a/b/b;)Lcom/tkay/basead/a/b/b$b;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 357
    sget-object v0, Lcom/tkay/basead/a/b/b;->a:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Offer load failed, OfferId -> "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/basead/a/b/b$a;->a:Lcom/tkay/basead/a/b/b;

    invoke-static {v1}, Lcom/tkay/basead/a/b/b;->d(Lcom/tkay/basead/a/b/b;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 358
    iget-object v0, p0, Lcom/tkay/basead/a/b/b$a;->a:Lcom/tkay/basead/a/b/b;

    invoke-static {v0}, Lcom/tkay/basead/a/b/b;->c(Lcom/tkay/basead/a/b/b;)Lcom/tkay/basead/a/b/b$b;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/tkay/basead/a/b/b$b;->a(Lcom/tkay/basead/c/e;)V

    .line 360
    :cond_0
    iget-object p1, p0, Lcom/tkay/basead/a/b/b$a;->a:Lcom/tkay/basead/a/b/b;

    invoke-static {p1}, Lcom/tkay/basead/a/b/b;->e(Lcom/tkay/basead/a/b/b;)V

    return-void
.end method

.method private b()V
    .locals 2

    .line 347
    iget-object v0, p0, Lcom/tkay/basead/a/b/b$a;->a:Lcom/tkay/basead/a/b/b;

    invoke-static {v0}, Lcom/tkay/basead/a/b/b;->c(Lcom/tkay/basead/a/b/b;)Lcom/tkay/basead/a/b/b$b;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 348
    sget-object v0, Lcom/tkay/basead/a/b/b;->a:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Offer load success, OfferId -> "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/basead/a/b/b$a;->a:Lcom/tkay/basead/a/b/b;

    invoke-static {v1}, Lcom/tkay/basead/a/b/b;->d(Lcom/tkay/basead/a/b/b;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 349
    iget-object v0, p0, Lcom/tkay/basead/a/b/b$a;->a:Lcom/tkay/basead/a/b/b;

    invoke-static {v0}, Lcom/tkay/basead/a/b/b;->c(Lcom/tkay/basead/a/b/b;)Lcom/tkay/basead/a/b/b$b;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/basead/a/b/b$b;->a()V

    .line 351
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/a/b/b$a;->a:Lcom/tkay/basead/a/b/b;

    invoke-static {v0}, Lcom/tkay/basead/a/b/b;->e(Lcom/tkay/basead/a/b/b;)V

    return-void
.end method


# virtual methods
.method public final synthetic a()V
    .locals 2

    .line 2347
    iget-object v0, p0, Lcom/tkay/basead/a/b/b$a;->a:Lcom/tkay/basead/a/b/b;

    invoke-static {v0}, Lcom/tkay/basead/a/b/b;->c(Lcom/tkay/basead/a/b/b;)Lcom/tkay/basead/a/b/b$b;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 2348
    sget-object v0, Lcom/tkay/basead/a/b/b;->a:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Offer load success, OfferId -> "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/basead/a/b/b$a;->a:Lcom/tkay/basead/a/b/b;

    invoke-static {v1}, Lcom/tkay/basead/a/b/b;->d(Lcom/tkay/basead/a/b/b;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2349
    iget-object v0, p0, Lcom/tkay/basead/a/b/b$a;->a:Lcom/tkay/basead/a/b/b;

    invoke-static {v0}, Lcom/tkay/basead/a/b/b;->c(Lcom/tkay/basead/a/b/b;)Lcom/tkay/basead/a/b/b$b;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/basead/a/b/b$b;->a()V

    .line 2351
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/a/b/b$a;->a:Lcom/tkay/basead/a/b/b;

    invoke-static {v0}, Lcom/tkay/basead/a/b/b;->e(Lcom/tkay/basead/a/b/b;)V

    return-void
.end method

.method public final synthetic a(Ljava/lang/Object;)V
    .locals 2

    .line 344
    check-cast p1, Lcom/tkay/basead/c/e;

    .line 1356
    iget-object v0, p0, Lcom/tkay/basead/a/b/b$a;->a:Lcom/tkay/basead/a/b/b;

    invoke-static {v0}, Lcom/tkay/basead/a/b/b;->c(Lcom/tkay/basead/a/b/b;)Lcom/tkay/basead/a/b/b$b;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 1357
    sget-object v0, Lcom/tkay/basead/a/b/b;->a:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Offer load failed, OfferId -> "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/basead/a/b/b$a;->a:Lcom/tkay/basead/a/b/b;

    invoke-static {v1}, Lcom/tkay/basead/a/b/b;->d(Lcom/tkay/basead/a/b/b;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1358
    iget-object v0, p0, Lcom/tkay/basead/a/b/b$a;->a:Lcom/tkay/basead/a/b/b;

    invoke-static {v0}, Lcom/tkay/basead/a/b/b;->c(Lcom/tkay/basead/a/b/b;)Lcom/tkay/basead/a/b/b$b;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/tkay/basead/a/b/b$b;->a(Lcom/tkay/basead/c/e;)V

    .line 1360
    :cond_0
    iget-object p1, p0, Lcom/tkay/basead/a/b/b$a;->a:Lcom/tkay/basead/a/b/b;

    invoke-static {p1}, Lcom/tkay/basead/a/b/b;->e(Lcom/tkay/basead/a/b/b;)V

    return-void
.end method
