.class final Lcom/tkay/core/c/e$1$1;
.super Landroid/os/CountDownTimer;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/c/e$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:[Z

.field final synthetic b:Lcom/tkay/core/c/e$1;


# direct methods
.method constructor <init>(Lcom/tkay/core/c/e$1;JJ[Z)V
    .locals 0

    .line 163
    iput-object p1, p0, Lcom/tkay/core/c/e$1$1;->b:Lcom/tkay/core/c/e$1;

    iput-object p6, p0, Lcom/tkay/core/c/e$1$1;->a:[Z

    invoke-direct {p0, p2, p3, p4, p5}, Landroid/os/CountDownTimer;-><init>(JJ)V

    return-void
.end method


# virtual methods
.method public final onFinish()V
    .locals 3

    .line 170
    sget-object v0, Lcom/tkay/core/c/e;->a:Ljava/lang/String;

    .line 171
    iget-object v0, p0, Lcom/tkay/core/c/e$1$1;->a:[Z

    const/4 v1, 0x0

    const/4 v2, 0x1

    aput-boolean v2, v0, v1

    .line 172
    iget-object v0, p0, Lcom/tkay/core/c/e$1$1;->b:Lcom/tkay/core/c/e$1;

    iget-object v0, v0, Lcom/tkay/core/c/e$1;->c:Lcom/tkay/core/c/e$a;

    if-eqz v0, :cond_0

    .line 173
    iget-object v0, p0, Lcom/tkay/core/c/e$1$1;->b:Lcom/tkay/core/c/e$1;

    iget-object v0, v0, Lcom/tkay/core/c/e$1;->c:Lcom/tkay/core/c/e$a;

    iget-object v1, p0, Lcom/tkay/core/c/e$1$1;->b:Lcom/tkay/core/c/e$1;

    iget-object v1, v1, Lcom/tkay/core/c/e$1;->a:Lcom/tkay/core/c/d;

    invoke-interface {v0, v1}, Lcom/tkay/core/c/e$a;->a(Lcom/tkay/core/c/d;)V

    :cond_0
    return-void
.end method

.method public final onTick(J)V
    .locals 0

    return-void
.end method
