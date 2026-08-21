.class final Lcom/tkay/core/common/o$1$1;
.super Landroid/os/CountDownTimer;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/o$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/o$1;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/o$1;JJ)V
    .locals 0

    .line 58
    iput-object p1, p0, Lcom/tkay/core/common/o$1$1;->a:Lcom/tkay/core/common/o$1;

    invoke-direct {p0, p2, p3, p4, p5}, Landroid/os/CountDownTimer;-><init>(JJ)V

    return-void
.end method


# virtual methods
.method public final onFinish()V
    .locals 2

    .line 66
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/o$1$1$1;

    invoke-direct {v1, p0}, Lcom/tkay/core/common/o$1$1$1;-><init>(Lcom/tkay/core/common/o$1$1;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onTick(J)V
    .locals 0

    return-void
.end method
