.class final Lcom/tkay/core/common/m/d$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/m/d;->p()Ljava/lang/Runnable;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/m/d;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/m/d;)V
    .locals 0

    .line 462
    iput-object p1, p0, Lcom/tkay/core/common/m/d$2;->a:Lcom/tkay/core/common/m/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 465
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/m/d$2$1;

    invoke-direct {v1, p0}, Lcom/tkay/core/common/m/d$2$1;-><init>(Lcom/tkay/core/common/m/d$2;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method
