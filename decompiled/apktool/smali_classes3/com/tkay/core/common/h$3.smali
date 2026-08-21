.class final Lcom/tkay/core/common/h$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/h;->n()Ljava/lang/Runnable;
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

    .line 670
    iput-object p1, p0, Lcom/tkay/core/common/h$3;->a:Lcom/tkay/core/common/h;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 673
    iget-object v0, p0, Lcom/tkay/core/common/h$3;->a:Lcom/tkay/core/common/h;

    invoke-static {v0}, Lcom/tkay/core/common/h;->b(Lcom/tkay/core/common/h;)V

    return-void
.end method
