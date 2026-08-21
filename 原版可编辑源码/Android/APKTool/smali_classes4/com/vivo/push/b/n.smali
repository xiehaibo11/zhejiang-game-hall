.class public final Lcom/vivo/push/b/n;
.super Lcom/vivo/push/b/s;


# instance fields
.field private a:Ljava/lang/String;

.field private b:I

.field private c:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    const/4 v0, 0x7

    invoke-direct {p0, v0}, Lcom/vivo/push/b/s;-><init>(I)V

    const/4 v0, 0x0

    iput v0, p0, Lcom/vivo/push/b/n;->b:I

    iput-boolean v0, p0, Lcom/vivo/push/b/n;->c:Z

    return-void
.end method


# virtual methods
.method public final a(I)V
    .locals 0

    iput p1, p0, Lcom/vivo/push/b/n;->b:I

    return-void
.end method

.method public final a(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/vivo/push/b/n;->c:Z

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/vivo/push/b/n;->a:Ljava/lang/String;

    return-void
.end method

.method protected final c(Lcom/vivo/push/a;)V
    .locals 2

    invoke-super {p0, p1}, Lcom/vivo/push/b/s;->c(Lcom/vivo/push/a;)V

    iget-object v0, p0, Lcom/vivo/push/b/n;->a:Ljava/lang/String;

    const-string v1, "content"

    invoke-virtual {p1, v1, v0}, Lcom/vivo/push/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    iget v0, p0, Lcom/vivo/push/b/n;->b:I

    const-string v1, "log_level"

    invoke-virtual {p1, v1, v0}, Lcom/vivo/push/a;->a(Ljava/lang/String;I)V

    iget-boolean v0, p0, Lcom/vivo/push/b/n;->c:Z

    const-string v1, "is_server_log"

    invoke-virtual {p1, v1, v0}, Lcom/vivo/push/a;->a(Ljava/lang/String;Z)V

    return-void
.end method

.method public final d()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/vivo/push/b/n;->a:Ljava/lang/String;

    return-object v0
.end method

.method protected final d(Lcom/vivo/push/a;)V
    .locals 2

    invoke-super {p0, p1}, Lcom/vivo/push/b/s;->d(Lcom/vivo/push/a;)V

    const-string v0, "content"

    invoke-virtual {p1, v0}, Lcom/vivo/push/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/vivo/push/b/n;->a:Ljava/lang/String;

    const-string v0, "log_level"

    const/4 v1, 0x0

    invoke-virtual {p1, v0, v1}, Lcom/vivo/push/a;->b(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/vivo/push/b/n;->b:I

    const-string v0, "is_server_log"

    invoke-virtual {p1, v0}, Lcom/vivo/push/a;->e(Ljava/lang/String;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/vivo/push/b/n;->c:Z

    return-void
.end method

.method public final e()I
    .locals 1

    iget v0, p0, Lcom/vivo/push/b/n;->b:I

    return v0
.end method

.method public final f()Z
    .locals 1

    iget-boolean v0, p0, Lcom/vivo/push/b/n;->c:Z

    return v0
.end method

.method public final toString()Ljava/lang/String;
    .locals 1

    const-string v0, "OnLogCommand"

    return-object v0
.end method
