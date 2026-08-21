.class public final Lcom/vivo/push/b/b;
.super Lcom/vivo/push/b/c;


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Z


# direct methods
.method public constructor <init>(ZLjava/lang/String;)V
    .locals 0

    if-eqz p1, :cond_0

    const/16 p1, 0x7d6

    goto :goto_0

    :cond_0
    const/16 p1, 0x7d7

    :goto_0
    invoke-direct {p0, p1, p2}, Lcom/vivo/push/b/c;-><init>(ILjava/lang/String;)V

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/vivo/push/b/b;->e:Z

    return-void
.end method


# virtual methods
.method public final c(Lcom/vivo/push/a;)V
    .locals 3

    invoke-super {p0, p1}, Lcom/vivo/push/b/c;->c(Lcom/vivo/push/a;)V

    iget-object v0, p0, Lcom/vivo/push/b/b;->a:Ljava/lang/String;

    const-string v1, "sdk_clients"

    invoke-virtual {p1, v1, v0}, Lcom/vivo/push/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "sdk_version"

    const-wide/16 v1, 0x143

    invoke-virtual {p1, v0, v1, v2}, Lcom/vivo/push/a;->a(Ljava/lang/String;J)V

    iget-object v0, p0, Lcom/vivo/push/b/b;->c:Ljava/lang/String;

    const-string v1, "BaseAppCommand.EXTRA_APPID"

    invoke-virtual {p1, v1, v0}, Lcom/vivo/push/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/vivo/push/b/b;->b:Ljava/lang/String;

    const-string v1, "BaseAppCommand.EXTRA_APPKEY"

    invoke-virtual {p1, v1, v0}, Lcom/vivo/push/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/vivo/push/b/b;->d:Ljava/lang/String;

    const-string v1, "PUSH_REGID"

    invoke-virtual {p1, v1, v0}, Lcom/vivo/push/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final d()V
    .locals 1

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/vivo/push/b/b;->c:Ljava/lang/String;

    return-void
.end method

.method public final d(Lcom/vivo/push/a;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/vivo/push/b/c;->d(Lcom/vivo/push/a;)V

    const-string v0, "sdk_clients"

    invoke-virtual {p1, v0}, Lcom/vivo/push/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/vivo/push/b/b;->a:Ljava/lang/String;

    const-string v0, "BaseAppCommand.EXTRA_APPID"

    invoke-virtual {p1, v0}, Lcom/vivo/push/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/vivo/push/b/b;->c:Ljava/lang/String;

    const-string v0, "BaseAppCommand.EXTRA_APPKEY"

    invoke-virtual {p1, v0}, Lcom/vivo/push/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/vivo/push/b/b;->b:Ljava/lang/String;

    const-string v0, "PUSH_REGID"

    invoke-virtual {p1, v0}, Lcom/vivo/push/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/vivo/push/b/b;->d:Ljava/lang/String;

    return-void
.end method

.method public final e()V
    .locals 1

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/vivo/push/b/b;->b:Ljava/lang/String;

    return-void
.end method

.method public final toString()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "AppCommand:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/vivo/push/b/b;->b()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
