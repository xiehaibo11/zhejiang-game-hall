.class final Lcom/tkay/core/common/o$1$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/o$1$1;->onFinish()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/o$1$1;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/o$1$1;)V
    .locals 0

    .line 66
    iput-object p1, p0, Lcom/tkay/core/common/o$1$1$1;->a:Lcom/tkay/core/common/o$1$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 69
    iget-object v0, p0, Lcom/tkay/core/common/o$1$1$1;->a:Lcom/tkay/core/common/o$1$1;

    iget-object v0, v0, Lcom/tkay/core/common/o$1$1;->a:Lcom/tkay/core/common/o$1;

    iget-object v0, v0, Lcom/tkay/core/common/o$1;->b:Lcom/tkay/core/common/o;

    invoke-static {v0}, Lcom/tkay/core/common/o;->a(Lcom/tkay/core/common/o;)V

    return-void
.end method
