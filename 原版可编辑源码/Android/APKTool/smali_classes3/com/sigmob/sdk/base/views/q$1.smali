.class Lcom/sigmob/sdk/base/views/q$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/views/q;->d()Landroid/widget/ImageView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/views/q;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/views/q;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/q$1;->a:Lcom/sigmob/sdk/base/views/q;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 0

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/q$1;->a:Lcom/sigmob/sdk/base/views/q;

    invoke-static {p1}, Lcom/sigmob/sdk/base/views/q;->a(Lcom/sigmob/sdk/base/views/q;)Lcom/sigmob/sdk/base/views/q$b;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/q$1;->a:Lcom/sigmob/sdk/base/views/q;

    invoke-static {p1}, Lcom/sigmob/sdk/base/views/q;->a(Lcom/sigmob/sdk/base/views/q;)Lcom/sigmob/sdk/base/views/q$b;

    move-result-object p1

    invoke-interface {p1}, Lcom/sigmob/sdk/base/views/q$b;->a()V

    :cond_0
    return-void
.end method
