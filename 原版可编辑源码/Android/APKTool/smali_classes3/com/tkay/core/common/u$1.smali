.class final Lcom/tkay/core/common/u$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/u;->a(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Ljava/lang/String;

.field final synthetic e:Ljava/lang/String;

.field final synthetic f:Lcom/tkay/core/common/u;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/u;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 58
    iput-object p1, p0, Lcom/tkay/core/common/u$1;->f:Lcom/tkay/core/common/u;

    iput p2, p0, Lcom/tkay/core/common/u$1;->a:I

    iput-object p3, p0, Lcom/tkay/core/common/u$1;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/tkay/core/common/u$1;->c:Ljava/lang/String;

    iput-object p5, p0, Lcom/tkay/core/common/u$1;->d:Ljava/lang/String;

    iput-object p6, p0, Lcom/tkay/core/common/u$1;->e:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 61
    new-instance v0, Lcom/tkay/core/common/f/n;

    invoke-direct {v0}, Lcom/tkay/core/common/f/n;-><init>()V

    .line 62
    iget v1, p0, Lcom/tkay/core/common/u$1;->a:I

    iput v1, v0, Lcom/tkay/core/common/f/n;->b:I

    .line 63
    iget-object v1, p0, Lcom/tkay/core/common/u$1;->b:Ljava/lang/String;

    iput-object v1, v0, Lcom/tkay/core/common/f/n;->d:Ljava/lang/String;

    .line 64
    iget-object v1, p0, Lcom/tkay/core/common/u$1;->c:Ljava/lang/String;

    iput-object v1, v0, Lcom/tkay/core/common/f/n;->c:Ljava/lang/String;

    .line 65
    iget-object v1, p0, Lcom/tkay/core/common/u$1;->d:Ljava/lang/String;

    iput-object v1, v0, Lcom/tkay/core/common/f/n;->e:Ljava/lang/String;

    .line 66
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iput-wide v1, v0, Lcom/tkay/core/common/f/n;->f:J

    .line 67
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/core/common/u$1;->b:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v2, v0, Lcom/tkay/core/common/f/n;->f:J

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/core/common/u$1;->d:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/tkay/core/common/u$1;->d:Ljava/lang/String;

    goto :goto_0

    :cond_0
    const-string v1, ""

    :goto_0
    invoke-static {v1}, Lcom/tkay/core/common/l/f;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/f/n;->a:Ljava/lang/String;

    .line 68
    iget-object v1, p0, Lcom/tkay/core/common/u$1;->e:Ljava/lang/String;

    iput-object v1, v0, Lcom/tkay/core/common/f/n;->g:Ljava/lang/String;

    .line 69
    iget-object v1, p0, Lcom/tkay/core/common/u$1;->f:Lcom/tkay/core/common/u;

    invoke-static {v1}, Lcom/tkay/core/common/u;->a(Lcom/tkay/core/common/u;)Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "save request:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/tkay/core/common/f/n;->a()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 70
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/c/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/c/c;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/c/g;->a(Lcom/tkay/core/common/c/b;)Lcom/tkay/core/common/c/g;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/tkay/core/common/c/g;->a(Lcom/tkay/core/common/f/n;)J

    return-void
.end method
