.class final Lcom/tkay/core/common/a/b$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/a/b;->c(Lcom/tkay/core/common/f/f;)V
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

    .line 86
    iput-object p1, p0, Lcom/tkay/core/common/a/b$4;->b:Lcom/tkay/core/common/a/b;

    iput-object p2, p0, Lcom/tkay/core/common/a/b$4;->a:Lcom/tkay/core/common/f/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 89
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "insertDspOfferInstallRecord dspOfferId:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/core/common/a/b$4;->a:Lcom/tkay/core/common/f/f;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/f;->U()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 90
    new-instance v0, Lcom/tkay/core/common/a/e;

    invoke-direct {v0}, Lcom/tkay/core/common/a/e;-><init>()V

    .line 91
    iget-object v1, p0, Lcom/tkay/core/common/a/b$4;->a:Lcom/tkay/core/common/f/f;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/f;->T()Ljava/lang/String;

    move-result-object v1

    .line 1012
    iput-object v1, v0, Lcom/tkay/core/common/a/d;->a:Ljava/lang/String;

    .line 92
    iget-object v1, p0, Lcom/tkay/core/common/a/b$4;->a:Lcom/tkay/core/common/f/f;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/f;->U()Ljava/lang/String;

    move-result-object v1

    .line 1020
    iput-object v1, v0, Lcom/tkay/core/common/a/d;->b:Ljava/lang/String;

    .line 93
    iget-object v1, p0, Lcom/tkay/core/common/a/b$4;->a:Lcom/tkay/core/common/f/f;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/f;->B()Ljava/lang/String;

    move-result-object v1

    .line 2012
    iput-object v1, v0, Lcom/tkay/core/common/a/e;->c:Ljava/lang/String;

    .line 94
    iget-object v1, p0, Lcom/tkay/core/common/a/b$4;->b:Lcom/tkay/core/common/a/b;

    invoke-static {v1}, Lcom/tkay/core/common/a/b;->b(Lcom/tkay/core/common/a/b;)Lcom/tkay/core/common/c/e;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/tkay/core/common/c/e;->a(Lcom/tkay/core/common/a/e;)J

    return-void
.end method
