.class public final Lcom/xiaomi/push/dx$f;
.super Lcom/xiaomi/push/e;


# instance fields
.field private a:I

.field private a:Lcom/xiaomi/push/dx$b;

.field private a:Ljava/lang/String;

.field private a:Z

.field private b:Ljava/lang/String;

.field private b:Z

.field private c:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/xiaomi/push/e;-><init>()V

    const-string v0, ""

    iput-object v0, p0, Lcom/xiaomi/push/dx$f;->a:Ljava/lang/String;

    iput-object v0, p0, Lcom/xiaomi/push/dx$f;->b:Ljava/lang/String;

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/xiaomi/push/dx$f;->a:Lcom/xiaomi/push/dx$b;

    const/4 v0, -0x1

    iput v0, p0, Lcom/xiaomi/push/dx$f;->a:I

    return-void
.end method

.method public static a([B)Lcom/xiaomi/push/dx$f;
    .locals 1

    new-instance v0, Lcom/xiaomi/push/dx$f;

    invoke-direct {v0}, Lcom/xiaomi/push/dx$f;-><init>()V

    invoke-virtual {v0, p0}, Lcom/xiaomi/push/dx$f;->a([B)Lcom/xiaomi/push/e;

    move-result-object p0

    check-cast p0, Lcom/xiaomi/push/dx$f;

    check-cast p0, Lcom/xiaomi/push/dx$f;

    return-object p0
.end method


# virtual methods
.method public a()I
    .locals 1

    iget v0, p0, Lcom/xiaomi/push/dx$f;->a:I

    if-gez v0, :cond_0

    invoke-virtual {p0}, Lcom/xiaomi/push/dx$f;->b()I

    :cond_0
    iget v0, p0, Lcom/xiaomi/push/dx$f;->a:I

    return v0
.end method

.method public a()Lcom/xiaomi/push/dx$b;
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/dx$f;->a:Lcom/xiaomi/push/dx$b;

    return-object v0
.end method

.method public a(Lcom/xiaomi/push/b;)Lcom/xiaomi/push/dx$f;
    .locals 2

    :cond_0
    :goto_0
    invoke-virtual {p1}, Lcom/xiaomi/push/b;->a()I

    move-result v0

    if-eqz v0, :cond_4

    const/16 v1, 0xa

    if-eq v0, v1, :cond_3

    const/16 v1, 0x12

    if-eq v0, v1, :cond_2

    const/16 v1, 0x1a

    if-eq v0, v1, :cond_1

    invoke-virtual {p0, p1, v0}, Lcom/xiaomi/push/dx$f;->a(Lcom/xiaomi/push/b;I)Z

    move-result v0

    if-nez v0, :cond_0

    return-object p0

    :cond_1
    new-instance v0, Lcom/xiaomi/push/dx$b;

    invoke-direct {v0}, Lcom/xiaomi/push/dx$b;-><init>()V

    invoke-virtual {p1, v0}, Lcom/xiaomi/push/b;->a(Lcom/xiaomi/push/e;)V

    invoke-virtual {p0, v0}, Lcom/xiaomi/push/dx$f;->a(Lcom/xiaomi/push/dx$b;)Lcom/xiaomi/push/dx$f;

    goto :goto_0

    :cond_2
    invoke-virtual {p1}, Lcom/xiaomi/push/b;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/xiaomi/push/dx$f;->b(Ljava/lang/String;)Lcom/xiaomi/push/dx$f;

    goto :goto_0

    :cond_3
    invoke-virtual {p1}, Lcom/xiaomi/push/b;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/xiaomi/push/dx$f;->a(Ljava/lang/String;)Lcom/xiaomi/push/dx$f;

    goto :goto_0

    :cond_4
    return-object p0
.end method

.method public a(Lcom/xiaomi/push/dx$b;)Lcom/xiaomi/push/dx$f;
    .locals 1

    if-eqz p1, :cond_0

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/xiaomi/push/dx$f;->c:Z

    iput-object p1, p0, Lcom/xiaomi/push/dx$f;->a:Lcom/xiaomi/push/dx$b;

    return-object p0

    :cond_0
    const/4 p1, 0x0

    throw p1
.end method

.method public a(Ljava/lang/String;)Lcom/xiaomi/push/dx$f;
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/xiaomi/push/dx$f;->a:Z

    iput-object p1, p0, Lcom/xiaomi/push/dx$f;->a:Ljava/lang/String;

    return-object p0
.end method

.method public bridge synthetic a(Lcom/xiaomi/push/b;)Lcom/xiaomi/push/e;
    .locals 0

    invoke-virtual {p0, p1}, Lcom/xiaomi/push/dx$f;->a(Lcom/xiaomi/push/b;)Lcom/xiaomi/push/dx$f;

    move-result-object p1

    return-object p1
.end method

.method public a()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/dx$f;->a:Ljava/lang/String;

    return-object v0
.end method

.method public a(Lcom/xiaomi/push/c;)V
    .locals 2

    invoke-virtual {p0}, Lcom/xiaomi/push/dx$f;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    invoke-virtual {p0}, Lcom/xiaomi/push/dx$f;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v0, v1}, Lcom/xiaomi/push/c;->a(ILjava/lang/String;)V

    :cond_0
    invoke-virtual {p0}, Lcom/xiaomi/push/dx$f;->b()Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x2

    invoke-virtual {p0}, Lcom/xiaomi/push/dx$f;->b()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v0, v1}, Lcom/xiaomi/push/c;->a(ILjava/lang/String;)V

    :cond_1
    invoke-virtual {p0}, Lcom/xiaomi/push/dx$f;->c()Z

    move-result v0

    if-eqz v0, :cond_2

    const/4 v0, 0x3

    invoke-virtual {p0}, Lcom/xiaomi/push/dx$f;->a()Lcom/xiaomi/push/dx$b;

    move-result-object v1

    invoke-virtual {p1, v0, v1}, Lcom/xiaomi/push/c;->a(ILcom/xiaomi/push/e;)V

    :cond_2
    return-void
.end method

.method public a()Z
    .locals 1

    iget-boolean v0, p0, Lcom/xiaomi/push/dx$f;->a:Z

    return v0
.end method

.method public b()I
    .locals 3

    invoke-virtual {p0}, Lcom/xiaomi/push/dx$f;->a()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    invoke-virtual {p0}, Lcom/xiaomi/push/dx$f;->a()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/xiaomi/push/c;->a(ILjava/lang/String;)I

    move-result v0

    add-int/2addr v1, v0

    :cond_0
    invoke-virtual {p0}, Lcom/xiaomi/push/dx$f;->b()Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x2

    invoke-virtual {p0}, Lcom/xiaomi/push/dx$f;->b()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/xiaomi/push/c;->a(ILjava/lang/String;)I

    move-result v0

    add-int/2addr v1, v0

    :cond_1
    invoke-virtual {p0}, Lcom/xiaomi/push/dx$f;->c()Z

    move-result v0

    if-eqz v0, :cond_2

    const/4 v0, 0x3

    invoke-virtual {p0}, Lcom/xiaomi/push/dx$f;->a()Lcom/xiaomi/push/dx$b;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/xiaomi/push/c;->a(ILcom/xiaomi/push/e;)I

    move-result v0

    add-int/2addr v1, v0

    :cond_2
    iput v1, p0, Lcom/xiaomi/push/dx$f;->a:I

    return v1
.end method

.method public b(Ljava/lang/String;)Lcom/xiaomi/push/dx$f;
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/xiaomi/push/dx$f;->b:Z

    iput-object p1, p0, Lcom/xiaomi/push/dx$f;->b:Ljava/lang/String;

    return-object p0
.end method

.method public b()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/dx$f;->b:Ljava/lang/String;

    return-object v0
.end method

.method public b()Z
    .locals 1

    iget-boolean v0, p0, Lcom/xiaomi/push/dx$f;->b:Z

    return v0
.end method

.method public c()Z
    .locals 1

    iget-boolean v0, p0, Lcom/xiaomi/push/dx$f;->c:Z

    return v0
.end method
