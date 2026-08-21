.class final Lcom/tkay/core/common/a/b$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/a/b;->b(Lcom/tkay/core/common/f/f;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/f/f;

.field final synthetic b:Lcom/tkay/core/common/a/b;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/a/b;Lcom/tkay/core/common/f/f;)V
    .locals 0

    .line 55
    iput-object p1, p0, Lcom/tkay/core/common/a/b$2;->b:Lcom/tkay/core/common/a/b;

    iput-object p2, p0, Lcom/tkay/core/common/a/b$2;->a:Lcom/tkay/core/common/f/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 58
    new-instance v0, Lcom/tkay/core/common/a/f;

    invoke-direct {v0}, Lcom/tkay/core/common/a/f;-><init>()V

    .line 59
    iget-object v1, p0, Lcom/tkay/core/common/a/b$2;->a:Lcom/tkay/core/common/f/f;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/f;->T()Ljava/lang/String;

    move-result-object v1

    .line 1012
    iput-object v1, v0, Lcom/tkay/core/common/a/d;->a:Ljava/lang/String;

    .line 60
    iget-object v1, p0, Lcom/tkay/core/common/a/b$2;->a:Lcom/tkay/core/common/f/f;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/f;->U()Ljava/lang/String;

    move-result-object v1

    .line 1020
    iput-object v1, v0, Lcom/tkay/core/common/a/d;->b:Ljava/lang/String;

    .line 61
    iget-object v1, p0, Lcom/tkay/core/common/a/b$2;->a:Lcom/tkay/core/common/f/f;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/f;->V()I

    move-result v1

    .line 2012
    iput v1, v0, Lcom/tkay/core/common/a/f;->c:I

    const/4 v1, 0x1

    .line 2020
    iput v1, v0, Lcom/tkay/core/common/a/f;->d:I

    .line 63
    iget-object v1, p0, Lcom/tkay/core/common/a/b$2;->b:Lcom/tkay/core/common/a/b;

    invoke-static {v1}, Lcom/tkay/core/common/a/b;->a(Lcom/tkay/core/common/a/b;)Lcom/tkay/core/common/c/f;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/tkay/core/common/c/f;->b(Lcom/tkay/core/common/a/f;)J

    return-void
.end method
