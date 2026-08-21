.class Lcom/sigmob/sdk/base/common/u$6;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/common/u;->l()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/common/u;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/common/u;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/u$6;->a:Lcom/sigmob/sdk/base/common/u;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 0

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/u$6;->a:Lcom/sigmob/sdk/base/common/u;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/common/u;->h()Lcom/sigmob/sdk/base/common/j;

    move-result-object p1

    invoke-interface {p1}, Lcom/sigmob/sdk/base/common/j;->a()V

    return-void
.end method
