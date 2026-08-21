.class final Lcom/tkay/core/c/e$1$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/c/e$1$2;->onLoadFinish(ILjava/lang/Object;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/c/e$1$2;


# direct methods
.method constructor <init>(Lcom/tkay/core/c/e$1$2;)V
    .locals 0

    .line 218
    iput-object p1, p0, Lcom/tkay/core/c/e$1$2$1;->a:Lcom/tkay/core/c/e$1$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 221
    sget-object v0, Lcom/tkay/core/c/e;->a:Ljava/lang/String;

    .line 222
    iget-object v0, p0, Lcom/tkay/core/c/e$1$2$1;->a:Lcom/tkay/core/c/e$1$2;

    iget-object v0, v0, Lcom/tkay/core/c/e$1$2;->a:Landroid/os/CountDownTimer;

    if-eqz v0, :cond_0

    .line 223
    iget-object v0, p0, Lcom/tkay/core/c/e$1$2$1;->a:Lcom/tkay/core/c/e$1$2;

    iget-object v0, v0, Lcom/tkay/core/c/e$1$2;->a:Landroid/os/CountDownTimer;

    invoke-virtual {v0}, Landroid/os/CountDownTimer;->cancel()V

    :cond_0
    return-void
.end method
