.class final Lcom/tkay/expressad/video/dynview/j/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/video/dynview/e/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/video/dynview/j/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/dynview/j/a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/dynview/j/a;)V
    .locals 0

    .line 82
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/j/a$1;->a:Lcom/tkay/expressad/video/dynview/j/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 4

    .line 86
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/j/a$1;->a:Lcom/tkay/expressad/video/dynview/j/a;

    invoke-static {v0}, Lcom/tkay/expressad/video/dynview/j/a;->a(Lcom/tkay/expressad/video/dynview/j/a;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/j/a$1;->a:Lcom/tkay/expressad/video/dynview/j/a;

    invoke-static {v0}, Lcom/tkay/expressad/video/dynview/j/a;->b(Lcom/tkay/expressad/video/dynview/j/a;)Lcom/tkay/expressad/video/dynview/i/c/b;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 87
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/j/a$1;->a:Lcom/tkay/expressad/video/dynview/j/a;

    invoke-static {v0}, Lcom/tkay/expressad/video/dynview/j/a;->b(Lcom/tkay/expressad/video/dynview/j/a;)Lcom/tkay/expressad/video/dynview/i/c/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/j/a$1;->a:Lcom/tkay/expressad/video/dynview/j/a;

    invoke-static {v1}, Lcom/tkay/expressad/video/dynview/j/a;->c(Lcom/tkay/expressad/video/dynview/j/a;)I

    move-result v1

    mul-int/lit16 v1, v1, 0x3e8

    int-to-long v1, v1

    iget-object v3, p0, Lcom/tkay/expressad/video/dynview/j/a$1;->a:Lcom/tkay/expressad/video/dynview/j/a;

    invoke-static {v3}, Lcom/tkay/expressad/video/dynview/j/a;->d(Lcom/tkay/expressad/video/dynview/j/a;)Lcom/tkay/expressad/video/dynview/i/c/a;

    move-result-object v3

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/expressad/video/dynview/i/c/b;->a(JLcom/tkay/expressad/video/dynview/i/c/a;)V

    .line 88
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/j/a$1;->a:Lcom/tkay/expressad/video/dynview/j/a;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/tkay/expressad/video/dynview/j/a;->a(Lcom/tkay/expressad/video/dynview/j/a;Z)Z

    :cond_0
    return-void
.end method

.method public final b()V
    .locals 0

    return-void
.end method

.method public final c()V
    .locals 2

    .line 98
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/j/a$1;->a:Lcom/tkay/expressad/video/dynview/j/a;

    invoke-static {v0}, Lcom/tkay/expressad/video/dynview/j/a;->b(Lcom/tkay/expressad/video/dynview/j/a;)Lcom/tkay/expressad/video/dynview/i/c/b;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 99
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/j/a$1;->a:Lcom/tkay/expressad/video/dynview/j/a;

    invoke-static {v0}, Lcom/tkay/expressad/video/dynview/j/a;->b(Lcom/tkay/expressad/video/dynview/j/a;)Lcom/tkay/expressad/video/dynview/i/c/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/video/dynview/i/c/b;->c()V

    .line 100
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/j/a$1;->a:Lcom/tkay/expressad/video/dynview/j/a;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/tkay/expressad/video/dynview/j/a;->a(Lcom/tkay/expressad/video/dynview/j/a;Z)Z

    :cond_0
    return-void
.end method
