.class final Lcom/tkay/core/common/m/d$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/m/d$2;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/m/d$2;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/m/d$2;)V
    .locals 0

    .line 465
    iput-object p1, p0, Lcom/tkay/core/common/m/d$2$1;->a:Lcom/tkay/core/common/m/d$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 468
    iget-object v0, p0, Lcom/tkay/core/common/m/d$2$1;->a:Lcom/tkay/core/common/m/d$2;

    iget-object v0, v0, Lcom/tkay/core/common/m/d$2;->a:Lcom/tkay/core/common/m/d;

    invoke-static {v0}, Lcom/tkay/core/common/m/d;->c(Lcom/tkay/core/common/m/d;)V

    return-void
.end method
