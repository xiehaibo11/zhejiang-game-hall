.class final Lcom/tkay/core/common/f$5;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/f;->f()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/f;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/f;)V
    .locals 0

    .line 1407
    iput-object p1, p0, Lcom/tkay/core/common/f$5;->a:Lcom/tkay/core/common/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 1410
    iget-object v0, p0, Lcom/tkay/core/common/f$5;->a:Lcom/tkay/core/common/f;

    iget-object v0, v0, Lcom/tkay/core/common/f;->j:Lcom/tkay/core/common/g;

    if-eqz v0, :cond_0

    .line 1411
    iget-object v0, p0, Lcom/tkay/core/common/f$5;->a:Lcom/tkay/core/common/f;

    iget-object v0, v0, Lcom/tkay/core/common/f;->j:Lcom/tkay/core/common/g;

    invoke-virtual {v0}, Lcom/tkay/core/common/g;->cancel()V

    .line 1412
    iget-object v0, p0, Lcom/tkay/core/common/f$5;->a:Lcom/tkay/core/common/f;

    const/4 v1, 0x0

    iput-object v1, v0, Lcom/tkay/core/common/f;->j:Lcom/tkay/core/common/g;

    :cond_0
    return-void
.end method
