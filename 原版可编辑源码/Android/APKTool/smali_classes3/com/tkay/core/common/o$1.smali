.class final Lcom/tkay/core/common/o$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/o;->a(Lcom/tkay/core/common/f/p;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/c/a;

.field final synthetic b:Lcom/tkay/core/common/o;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/o;Lcom/tkay/core/c/a;)V
    .locals 0

    .line 55
    iput-object p1, p0, Lcom/tkay/core/common/o$1;->b:Lcom/tkay/core/common/o;

    iput-object p2, p0, Lcom/tkay/core/common/o$1;->a:Lcom/tkay/core/c/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 8

    .line 58
    iget-object v0, p0, Lcom/tkay/core/common/o$1;->b:Lcom/tkay/core/common/o;

    new-instance v7, Lcom/tkay/core/common/o$1$1;

    iget-object v1, p0, Lcom/tkay/core/common/o$1;->a:Lcom/tkay/core/c/a;

    invoke-virtual {v1}, Lcom/tkay/core/c/a;->aa()J

    move-result-wide v3

    iget-object v1, p0, Lcom/tkay/core/common/o$1;->a:Lcom/tkay/core/c/a;

    invoke-virtual {v1}, Lcom/tkay/core/c/a;->aa()J

    move-result-wide v5

    move-object v1, v7

    move-object v2, p0

    invoke-direct/range {v1 .. v6}, Lcom/tkay/core/common/o$1$1;-><init>(Lcom/tkay/core/common/o$1;JJ)V

    iput-object v7, v0, Lcom/tkay/core/common/o;->c:Landroid/os/CountDownTimer;

    .line 74
    iget-object v0, p0, Lcom/tkay/core/common/o$1;->b:Lcom/tkay/core/common/o;

    iget-object v0, v0, Lcom/tkay/core/common/o;->c:Landroid/os/CountDownTimer;

    invoke-virtual {v0}, Landroid/os/CountDownTimer;->start()Landroid/os/CountDownTimer;

    return-void
.end method
