.class Lcom/sigmob/sdk/base/views/d$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/views/d;->setDialogListener(Lcom/sigmob/sdk/base/views/d$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/views/d$a;

.field final synthetic b:Lcom/sigmob/sdk/base/views/d;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/views/d;Lcom/sigmob/sdk/base/views/d$a;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/d$1;->b:Lcom/sigmob/sdk/base/views/d;

    iput-object p2, p0, Lcom/sigmob/sdk/base/views/d$1;->a:Lcom/sigmob/sdk/base/views/d$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 0

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/d$1;->a:Lcom/sigmob/sdk/base/views/d$a;

    invoke-interface {p1}, Lcom/sigmob/sdk/base/views/d$a;->a()V

    return-void
.end method
