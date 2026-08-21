.class Lcom/sigmob/sdk/nativead/s$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/nativead/s;->b()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/nativead/s;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/nativead/s;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/s$1;->a:Lcom/sigmob/sdk/nativead/s;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 0

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/s$1;->a:Lcom/sigmob/sdk/nativead/s;

    invoke-static {p1}, Lcom/sigmob/sdk/nativead/s;->a(Lcom/sigmob/sdk/nativead/s;)Lcom/sigmob/sdk/base/common/j;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/s$1;->a:Lcom/sigmob/sdk/nativead/s;

    invoke-static {p1}, Lcom/sigmob/sdk/nativead/s;->b(Lcom/sigmob/sdk/nativead/s;)Lcom/sigmob/sdk/base/common/j;

    move-result-object p1

    invoke-interface {p1}, Lcom/sigmob/sdk/base/common/j;->a()V

    :cond_0
    return-void
.end method
