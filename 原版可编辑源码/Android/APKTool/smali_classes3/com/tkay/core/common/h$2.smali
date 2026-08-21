.class final Lcom/tkay/core/common/h$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/h;->m()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/h;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/h;)V
    .locals 0

    .line 643
    iput-object p1, p0, Lcom/tkay/core/common/h$2;->a:Lcom/tkay/core/common/h;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 646
    iget-object v0, p0, Lcom/tkay/core/common/h$2;->a:Lcom/tkay/core/common/h;

    const/4 v1, 0x0

    iput-object v1, v0, Lcom/tkay/core/common/h;->I:Ljava/lang/Runnable;

    .line 647
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/h$2$1;

    invoke-direct {v1, p0}, Lcom/tkay/core/common/h$2$1;-><init>(Lcom/tkay/core/common/h$2;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method
