.class public final Lcom/xiaomi/push/dx$j;
.super Lcom/xiaomi/push/e;


# instance fields
.field private a:I

.field private a:Lcom/xiaomi/push/a;

.field private a:Lcom/xiaomi/push/dx$b;

.field private a:Z

.field private b:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/xiaomi/push/e;-><init>()V

    sget-object v0, Lcom/xiaomi/push/a;->a:Lcom/xiaomi/push/a;

    iput-object v0, p0, Lcom/xiaomi/push/dx$j;->a:Lcom/xiaomi/push/a;

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/xiaomi/push/dx$j;->a:Lcom/xiaomi/push/dx$b;

    const/4 v0, -0x1

    iput v0, p0, Lcom/xiaomi/push/dx$j;->a:I

    return-void
.end method

.method public static a([B)Lcom/xiaomi/push/dx$j;
    .locals 1

    new-instance v0, Lcom/xiaomi/push/dx$j;

    invoke-direct {v0}, Lcom/xiaomi/push/dx$j;-><init>()V

    invoke-virtual {v0, p0}, Lcom/xiaomi/push/dx$j;->a([B)Lcom/xiaomi/push/e;

    move-result-object p0

    check-cast p0, Lcom/xiaomi/push/dx$j;

    check-cast p0, Lcom/xiaomi/push/dx$j;

    return-object p0
.end method


# virtual methods
.method public a()I
    .locals 1

    iget v0, p0, Lcom/xiaomi/push/dx$j;->a:I

    if-gez v0, :cond_0

    invoke-virtual {p0}, Lcom/xiaomi/push/dx$j;->b()I

    :cond_0
    iget v0, p0, Lcom/xiaomi/push/dx$j;->a:I

    return v0
.end method

.method public a()Lcom/xiaomi/push/a;
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/dx$j;->a:Lcom/xiaomi/push/a;

    return-object v0
.end method

.method public a()Lcom/xiaomi/push/dx$b;
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/dx$j;->a:Lcom/xiaomi/push/dx$b;

    return-object v0
.end method

.method public a(Lcom/xiaomi/push/a;)Lcom/xiaomi/push/dx$j;
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/xiaomi/push/dx$j;->a:Z

    iput-object p1, p0, Lcom/xiaomi/push/dx$j;->a:Lcom/xiaomi/push/a;

    return-object p0
.end method

.method public a(Lcom/xiaomi/push/b;)Lcom/xiaomi/push/dx$j;
    .locals 2

    :cond_0
    :goto_0
    invoke-virtual {p1}, Lcom/xiaomi/push/b;->a()I

    move-result v0

    if-eqz v0, :cond_3

    const/16 v1, 0xa

    if-eq v0, v1, :cond_2

    const/16 v1, 0x12

    if-eq v0, v1, :cond_1

    invoke-virtual {p0, p1, v0}, Lcom/xiaomi/push/dx$j;->a(Lcom/xiaomi/push/b;I)Z

    move-result v0

    if-nez v0, :cond_0

    return-object p0

    :cond_1
    new-instance v0, Lcom/xiaomi/push/dx$b;

    invoke-direct {v0}, Lcom/xiaomi/push/dx$b;-><init>()V

    invoke-virtual {p1, v0}, Lcom/xiaomi/push/b;->a(Lcom/xiaomi/push/e;)V

    invoke-virtual {p0, v0}, Lcom/xiaomi/push/dx$j;->a(Lcom/xiaomi/push/dx$b;)Lcom/xiaomi/push/dx$j;

    goto :goto_0

    :cond_2
    invoke-virtual {p1}, Lcom/xiaomi/push/b;->a()Lcom/xiaomi/push/a;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/xiaomi/push/dx$j;->a(Lcom/xiaomi/push/a;)Lcom/xiaomi/push/dx$j;

    goto :goto_0

    :cond_3
    return-object p0
.end method

.method public a(Lcom/xiaomi/push/dx$b;)Lcom/xiaomi/push/dx$j;
    .locals 1

    if-eqz p1, :cond_0

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/xiaomi/push/dx$j;->b:Z

    iput-object p1, p0, Lcom/xiaomi/push/dx$j;->a:Lcom/xiaomi/push/dx$b;

    return-object p0

    :cond_0
    const/4 p1, 0x0

    throw p1
.end method

.method public bridge synthetic a(Lcom/xiaomi/push/b;)Lcom/xiaomi/push/e;
    .locals 0

    invoke-virtual {p0, p1}, Lcom/xiaomi/push/dx$j;->a(Lcom/xiaomi/push/b;)Lcom/xiaomi/push/dx$j;

    move-result-object p1

    return-object p1
.end method

.method public a(Lcom/xiaomi/push/c;)V
    .locals 2

    invoke-virtual {p0}, Lcom/xiaomi/push/dx$j;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    invoke-virtual {p0}, Lcom/xiaomi/push/dx$j;->a()Lcom/xiaomi/push/a;

    move-result-object v1

    invoke-virtual {p1, v0, v1}, Lcom/xiaomi/push/c;->a(ILcom/xiaomi/push/a;)V

    :cond_0
    invoke-virtual {p0}, Lcom/xiaomi/push/dx$j;->b()Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x2

    invoke-virtual {p0}, Lcom/xiaomi/push/dx$j;->a()Lcom/xiaomi/push/dx$b;

    move-result-object v1

    invoke-virtual {p1, v0, v1}, Lcom/xiaomi/push/c;->a(ILcom/xiaomi/push/e;)V

    :cond_1
    return-void
.end method

.method public a()Z
    .locals 1

    iget-boolean v0, p0, Lcom/xiaomi/push/dx$j;->a:Z

    return v0
.end method

.method public b()I
    .locals 3

    invoke-virtual {p0}, Lcom/xiaomi/push/dx$j;->a()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    invoke-virtual {p0}, Lcom/xiaomi/push/dx$j;->a()Lcom/xiaomi/push/a;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/xiaomi/push/c;->a(ILcom/xiaomi/push/a;)I

    move-result v0

    add-int/2addr v1, v0

    :cond_0
    invoke-virtual {p0}, Lcom/xiaomi/push/dx$j;->b()Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x2

    invoke-virtual {p0}, Lcom/xiaomi/push/dx$j;->a()Lcom/xiaomi/push/dx$b;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/xiaomi/push/c;->a(ILcom/xiaomi/push/e;)I

    move-result v0

    add-int/2addr v1, v0

    :cond_1
    iput v1, p0, Lcom/xiaomi/push/dx$j;->a:I

    return v1
.end method

.method public b()Z
    .locals 1

    iget-boolean v0, p0, Lcom/xiaomi/push/dx$j;->b:Z

    return v0
.end method
