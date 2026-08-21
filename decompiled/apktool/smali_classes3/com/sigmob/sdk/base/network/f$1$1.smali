.class Lcom/sigmob/sdk/base/network/f$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/network/f$1;->a(Lcom/czhj/volley/NetworkResponse;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/network/f$1;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/network/f$1;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/network/f$1$1;->a:Lcom/sigmob/sdk/base/network/f$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/f$1$1;->a:Lcom/sigmob/sdk/base/network/f$1;

    iget-object v0, v0, Lcom/sigmob/sdk/base/network/f$1;->b:Lcom/sigmob/sdk/base/common/g;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/common/g;->g()V

    return-void
.end method
